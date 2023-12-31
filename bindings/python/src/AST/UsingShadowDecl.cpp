/*
 * Copyright (c) 2023 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <pasta/AST/AST.h>
#include <pasta/AST/Attr.h>
#include <pasta/AST/Decl.h>
#include <pasta/AST/Printer.h>
#include <pasta/AST/Stmt.h>
#include <pasta/AST/Token.h>
#include <pasta/AST/Type.h>

#include "../Bindings.h"

namespace pasta {
namespace nb = nanobind;

void RegisterUsingShadowDecl(nb::module_ &m) {
  nb::class_<UsingShadowDecl, NamedDecl>(m, "UsingShadowDecl")
    .def_prop_ro("canonical_declaration", &UsingShadowDecl::CanonicalDeclaration)
    .def_prop_ro("introducer", &UsingShadowDecl::Introducer)
    .def_prop_ro("next_using_shadow_declaration", &UsingShadowDecl::NextUsingShadowDeclaration)
    .def_prop_ro("target_declaration", &UsingShadowDecl::TargetDeclaration);
}
} // namespace pasta
