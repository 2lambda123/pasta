/*
 * Copyright (c) 2022 Trail of Bits, Inc.
 */

#include <pasta/AST/StmtManual.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wimplicit-int-conversion"
#pragma clang diagnostic ignored "-Wsign-conversion"
#pragma clang diagnostic ignored "-Wshorten-64-to-32"
#pragma clang diagnostic ignored "-Wbitfield-enum-conversion"
#include <clang/AST/Expr.h>
#pragma clang diagnostic pop

#include "AST.h"
#include "Builder.h"

#include <algorithm>

namespace pasta {

#ifndef PASTA_IN_BOOTSTRAP

// Follow a macro token's parent chain to the end, and returns the final parent.
// If the macro token has no parent, this returns std::nullopt;
std::optional<Macro>
GetRootSubstitution(const MacroToken &macro_token) noexcept {
  std::optional<Macro> root;
  std::optional<Macro> next_root = macro_token.Parent();
  do {
    root = std::move(next_root);
    next_root = root->Parent();
  } while (next_root);
  return root;
}

// Returns the highest substitution that covers this Stmt, if any.
std::optional<Macro> Stmt::GetCoveringSubstitution(void) const noexcept {
  // If the first token in this Stmt did not come from a macro substitution,
  // then this Stmt is not covered by a substitution
  const auto begin_macro_token = BeginToken().MacroLocation();
  if (!begin_macro_token) {
    return std::nullopt;
  }

  // If the last token in this Stmt did not come from a macro substitution,
  // then this Stmt is not covered by a substitution
  const auto end_macro_token = EndToken().MacroLocation();
  if (!end_macro_token) {
    return std::nullopt;
  }

  const auto begin_macro_token_root = GetRootSubstitution(*begin_macro_token);
  const auto end_macro_token_root = GetRootSubstitution(*end_macro_token);

  // If the root of the begin token and end token are the same, then return that
  // root
  if (begin_macro_token_root && end_macro_token_root &&
      *begin_macro_token_root == *end_macro_token_root) {
    return begin_macro_token_root;
  }

  // Otherwise, this statement was composed of multiple substitution trees, so
  // return nothing
  return std::nullopt;
}

// Returns true if we can follow the given token's derived locations to a reach
// a token that has a macro location whose parent is the specified macro.
inline bool IsTokenDerivedFromMacro(const Token &token, const Macro &macro) {
  for (auto derived_tok = std::optional(token); derived_tok;
       derived_tok = derived_tok->DerivedLocation()) {
    auto macro_tok = derived_tok->MacroLocation();
    if (!macro_tok) {
      continue;
    }
    
    auto containing_macro = macro_tok->Parent();
    if (macro == containing_macro.value()) {
      return true;
    }
  }
  return false;
}

// Returns the lowest macro argument that contains this Stmt, if any.
std::optional<MacroArgument>
Stmt::GetLowestContainingMacroArgument(void) const noexcept {
  // Algorithm:
  // 1. Find the lowest macro argument that the first token in this Stmt was
  //    expanded from.
  // 2. Check if every other token in the Stmt was also expanded from this
  //    argument at some point.
  // 3. If so, then return the argument that the first token was expanded from.
  // 4. Otherwise, find the next-lowest macro argument that the first token was
  //    expanded from and repeat steps 2 and 3.
  //    If we reach a point where the first token is no longer expanded from a
  //    macro argument, then return std::nullopt.
  for (auto begin = std::optional(*Tokens().begin()); begin;
       begin = begin->DerivedLocation()) {
    auto macro_tok = begin->MacroLocation();
    if (!macro_tok) {
      continue;
    }

    auto containing_macro = macro_tok->Parent();
    if (containing_macro->Kind() == MacroKind::kArgument) {
      if (std::all_of(
        Tokens().begin(), Tokens().end(),
        [&containing_macro](const Token token) {
          return IsTokenDerivedFromMacro(token, containing_macro.value());
        })) {
        return MacroArgument::From(containing_macro.value());
      }
    }
  }
  return std::nullopt;
}

// Is this a field designator?
bool Designator::IsFieldDesignator(void) const noexcept {
  // Cast the void pointers to `clang::DesignatedInitExpr::Designator`
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  return design->isFieldDesignator();
}

// Is this an array designator?
bool Designator::IsArrayDesignator(void) const noexcept {
  // Cast the void pointers to `clang::DesignatedInitExpr::Designator`
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  return design->isArrayDesignator();
}

// Is this an array range designator?
bool Designator::IsArrayRangeDesignator(void) const noexcept {
  // Cast the void pointers to `clang::DesignatedInitExpr::Designator`
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  return design->isArrayRangeDesignator();
}

// Returns the FieldDecl for the designator if it is field designator
std::optional<::pasta::FieldDecl> Designator::Field(void) const noexcept {

  // Cast the void pointers to `clang::DesignatedInitExpr::Designator`
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!design->isFieldDesignator()) {
    return std::nullopt;
  }
  return DeclBuilder::Create<pasta::FieldDecl>(ast, design->getField());
}

// Returns the TokenRange for the designator.
::pasta::TokenRange Designator::Tokens(void) const noexcept {
  // Cast the void pointers to `clang::DesignatedInitExpr::Designator`
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  return ast->TokenRangeFrom(design->getSourceRange());
}

// Get the token for dot location
::pasta::Token Designator::DotToken(void) const noexcept {
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!design->isFieldDesignator()) {
    // If this is not field designator; it will return empty token
    return ast->TokenAt(clang::SourceLocation());
  }
  return ast->TokenAt(design->getDotLoc());
}

// Get the token for field location
::pasta::Token Designator::FieldToken(void) const noexcept {
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!design->isFieldDesignator()) {
    // If this is not a field designator; it will return empty token
    return ast->TokenAt(clang::SourceLocation());
  }
  return ast->TokenAt(design->getFieldLoc());
}

// Get the token for l-bracket location
::pasta::Token Designator::LeftBracketToken(void) const noexcept {
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!(design->isArrayDesignator() || design->isArrayRangeDesignator())) {
    // If this is field designator it will return empty token
    return ast->TokenAt(clang::SourceLocation());
  }
  return ast->TokenAt(design->getLBracketLoc());
}

// Get the token for r-bracket location
::pasta::Token Designator::RightBracketToken(void) const noexcept {
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!(design->isArrayDesignator() || design->isArrayRangeDesignator())) {
    // if the designator is of field type and has no right braces, it will return empty token
    return ast->TokenAt(clang::SourceLocation());
  }
  return ast->TokenAt(design->getRBracketLoc());
}

// Get the token for ellipsis location
::pasta::Token Designator::EllipsisToken(void) const noexcept {
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!design->isArrayRangeDesignator()) {
    // if the designator is not an array range; it will not have ellipsis. Return empty token
    return ast->TokenAt(clang::SourceLocation());
  }
  return ast->TokenAt(design->getEllipsisLoc());
}

// Get the index for first designator expression. It will be only valid for
std::optional<unsigned> Designator::FirstExpressionIndex(void) const noexcept {
  auto design = reinterpret_cast<const clang::DesignatedInitExpr::Designator *>(spec);
  assert(design != nullptr);
  if (!(design->isArrayDesignator() || design->isArrayRangeDesignator())) {
    return std::nullopt;
  }
  return design->getFirstExprIndex();
}

#endif  // PASTA_IN_BOOTSTRAP

}  // namespace pasta
