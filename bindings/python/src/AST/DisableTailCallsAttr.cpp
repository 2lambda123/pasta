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

void RegisterDisableTailCallsAttr(py::module_ &m) {
  py::class_<DisableTailCallsAttr, Attr, InheritableAttr>(m, "DisableTailCallsAttr")
    .def_property_readonly("Spelling", &DisableTailCallsAttr::Spelling);
}
} // namespace pasta
