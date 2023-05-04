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

void RegisterOMPParallelDirective(py::module_ &m) {
  py::class_<OMPParallelDirective, OMPExecutableDirective, Stmt>(m, "OMPParallelDirective")
    .def_property_readonly("TaskReductionReferenceExpression", &OMPParallelDirective::TaskReductionReferenceExpression)
    .def_property_readonly("HasCancel", &OMPParallelDirective::HasCancel);
}
} // namespace pasta
