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

void RegisterTemplateSpecializationType(nb::module_ &m) {
  nb::class_<TemplateSpecializationType, Type>(m, "TemplateSpecializationType")
    .def_prop_ro("desugar", &TemplateSpecializationType::Desugar)
    .def_prop_ro("aliased_type", &TemplateSpecializationType::AliasedType)
    .def_prop_ro("is_current_instantiation", &TemplateSpecializationType::IsCurrentInstantiation)
    .def_prop_ro("is_sugared", &TemplateSpecializationType::IsSugared)
    .def_prop_ro("is_type_alias", &TemplateSpecializationType::IsTypeAlias)
    .def_prop_ro("template_arguments", &TemplateSpecializationType::TemplateArguments);
}
} // namespace pasta
