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

void RegisterLinkageSpecDecl(nb::module_ &m) {
  nb::class_<LinkageSpecDecl, Decl>(m, "LinkageSpecDecl")
    .def_prop_ro("end_token", &LinkageSpecDecl::EndToken)
    .def_prop_ro("extern_token", &LinkageSpecDecl::ExternToken)
    .def_prop_ro("language", &LinkageSpecDecl::Language)
    .def_prop_ro("r_brace_token", &LinkageSpecDecl::RBraceToken)
    .def_prop_ro("has_braces", &LinkageSpecDecl::HasBraces);
}
} // namespace pasta
