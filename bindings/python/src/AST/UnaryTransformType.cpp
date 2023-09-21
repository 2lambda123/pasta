/*
 * Copyright (c) 2023 Trail of Bits, Inc.
 */

// This file is auto-generated.

#include <pasta/AST/AST.h>
#include <pasta/AST/Attr.h>
#include <pasta/AST/Decl.h>
#include <pasta/AST/Stmt.h>
#include <pasta/AST/Type.h>

#include "../Bindings.h"

namespace pasta {
namespace nb = nanobind;

void RegisterUnaryTransformType(nb::module_ &m) {
  nb::class_<UnaryTransformType, Type>(m, "UnaryTransformType")
    .def("__hash__", [](const UnaryTransformType &type) { return reinterpret_cast<intptr_t>(type.RawType()); })
    .def("__eq__", [](const Type &a, const Type &b) { return a.RawType() == b.RawType(); })
    .def_prop_ro("desugar", &UnaryTransformType::Desugar)
    .def_prop_ro("base_type", &UnaryTransformType::BaseType)
    .def_prop_ro("utt_kind", &UnaryTransformType::UTTKind)
    .def_prop_ro("underlying_type", &UnaryTransformType::UnderlyingType)
    .def_prop_ro("is_sugared", &UnaryTransformType::IsSugared);
}
} // namespace pasta
