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

void RegisterParenExpr(py::module_ &m) {
  py::class_<ParenExpr, Expr, Stmt, ValueStmt>(m, "ParenExpr")
    .def_property_readonly("Children", &ParenExpr::Children)
    .def_property_readonly("BeginToken", &ParenExpr::BeginToken)
    .def_property_readonly("EndToken", &ParenExpr::EndToken)
    .def_property_readonly("LParenToken", &ParenExpr::LParenToken)
    .def_property_readonly("RParenToken", &ParenExpr::RParenToken)
    .def_property_readonly("SubExpression", &ParenExpr::SubExpression);
}
} // namespace pasta
