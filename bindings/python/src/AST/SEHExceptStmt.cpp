/*
 * Copyright (c) 2023 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <pasta/AST/AST.h>
#include <pasta/AST/Attr.h>
#include <pasta/AST/Decl.h>
#include <pasta/AST/Stmt.h>
#include <pasta/AST/Type.h>

#include <nanobind/nanobind.h>
#include <nanobind/stl/optional.h>
#include <nanobind/stl/vector.h>

namespace pasta {
namespace nb = nanobind;

void RegisterSEHExceptStmt(nb::module_ &m) {
  nb::class_<SEHExceptStmt, Stmt>(m, "SEHExceptStmt")
    .def("__hash__", [](const SEHExceptStmt& stmt) { return (intptr_t)stmt.RawStmt(); })
    .def("__eq__", [](const Stmt& a, const Stmt& b) { return a.RawStmt() == b.RawStmt(); })
    .def_prop_ro("children", &SEHExceptStmt::Children)
    .def_prop_ro("begin_token", &SEHExceptStmt::BeginToken)
    .def_prop_ro("block", &SEHExceptStmt::Block)
    .def_prop_ro("end_token", &SEHExceptStmt::EndToken)
    .def_prop_ro("except_token", &SEHExceptStmt::ExceptToken)
    .def_prop_ro("filter_expression", &SEHExceptStmt::FilterExpression);
}
} // namespace pasta