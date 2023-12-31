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

void RegisterValueDecl(nb::module_ &m) {
  nb::class_<ValueDecl, NamedDecl>(m, "ValueDecl")
    .def_prop_ro("potentially_decomposed_variable_declaration", &ValueDecl::PotentiallyDecomposedVariableDeclaration)
    .def_prop_ro("type", &ValueDecl::Type)
    .def_prop_ro("is_initializer_capture", &ValueDecl::IsInitializerCapture)
    .def_prop_ro("is_weak", &ValueDecl::IsWeak);
}
} // namespace pasta
