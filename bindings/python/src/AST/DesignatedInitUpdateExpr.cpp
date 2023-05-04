/*
 * Copyright (c) 2023 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <pasta/AST/AST.h>
#include <pasta/AST/Attr.h>
#include <pasta/AST/Decl.h>
#include <pasta/AST/Stmt.h>
#include <pasta/AST/Type.h>

#include <pybind11/pybind11.h>

namespace pasta {
namespace py = pybind11;

void RegisterDesignatedInitUpdateExpr(py::module_ &m) {
  py::class_<DesignatedInitUpdateExpr, Expr, Stmt, ValueStmt>(m, "DesignatedInitUpdateExpr")
    .def_property_readonly("Children", &DesignatedInitUpdateExpr::Children)
    .def_property_readonly("Base", &DesignatedInitUpdateExpr::Base)
    .def_property_readonly("BeginToken", &DesignatedInitUpdateExpr::BeginToken)
    .def_property_readonly("EndToken", &DesignatedInitUpdateExpr::EndToken)
    .def_property_readonly("Updater", &DesignatedInitUpdateExpr::Updater);
}
} // namespace pasta
