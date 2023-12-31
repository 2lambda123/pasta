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

void RegisterCXXDestructorDecl(nb::module_ &m) {
  nb::class_<CXXDestructorDecl, CXXMethodDecl>(m, "CXXDestructorDecl")
    .def_prop_ro("canonical_declaration", &CXXDestructorDecl::CanonicalDeclaration)
    .def_prop_ro("operator_delete", &CXXDestructorDecl::OperatorDelete)
    .def_prop_ro("operator_delete_this_argument", &CXXDestructorDecl::OperatorDeleteThisArgument);
}
} // namespace pasta
