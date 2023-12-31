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

void RegisterFriendTemplateDecl(nb::module_ &m) {
  nb::class_<FriendTemplateDecl, Decl>(m, "FriendTemplateDecl")
    .def_prop_ro("friend_declaration", &FriendTemplateDecl::FriendDeclaration)
    .def_prop_ro("friend_token", &FriendTemplateDecl::FriendToken)
    .def_prop_ro("friend_type", &FriendTemplateDecl::FriendType)
    .def_prop_ro("num_template_parameters", &FriendTemplateDecl::NumTemplateParameters);
}
} // namespace pasta
