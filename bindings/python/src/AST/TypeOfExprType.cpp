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

void RegisterTypeOfExprType(nb::module_ &m) {
  nb::class_<TypeOfExprType, Type>(m, "TypeOfExprType")
    .def_prop_ro("desugar", &TypeOfExprType::Desugar)
    .def_prop_ro("type_kind", &TypeOfExprType::TypeKind)
    .def_prop_ro("underlying_expression", &TypeOfExprType::UnderlyingExpression)
    .def_prop_ro("is_sugared", &TypeOfExprType::IsSugared);
}
} // namespace pasta
