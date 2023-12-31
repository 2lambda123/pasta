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

void RegisterExportDecl(nb::module_ &m) {
  nb::class_<ExportDecl, Decl>(m, "ExportDecl")
    .def_prop_ro("end_token", &ExportDecl::EndToken)
    .def_prop_ro("export_token", &ExportDecl::ExportToken)
    .def_prop_ro("r_brace_token", &ExportDecl::RBraceToken)
    .def_prop_ro("has_braces", &ExportDecl::HasBraces);
}
} // namespace pasta
