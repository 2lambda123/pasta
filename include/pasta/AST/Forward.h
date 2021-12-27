/*
 * Copyright (c) 2021 Trail of Bits, Inc.
 */

// This file is auto-generated.

#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <string_view>

#include "Token.h"

#define PASTA_IGNORE_ABSTRACT(...)

namespace clang {
class AbstractConditionalOperator;
class AccessSpecDecl;
class AddrLabelExpr;
class AdjustedType;
class ArrayInitIndexExpr;
class ArrayInitLoopExpr;
class ArraySubscriptExpr;
class ArrayType;
class ArrayTypeTraitExpr;
class AsTypeExpr;
class AsmStmt;
class AtomicExpr;
class AtomicType;
class AttributedStmt;
class AttributedType;
class AutoType;
class BinaryConditionalOperator;
class BinaryOperator;
class BindingDecl;
class BlockDecl;
class BlockExpr;
class BlockPointerType;
class BreakStmt;
class BuiltinBitCastExpr;
class BuiltinTemplateDecl;
class BuiltinType;
class CStyleCastExpr;
class CUDAKernelCallExpr;
class CXXAddrspaceCastExpr;
class CXXBindTemporaryExpr;
class CXXBoolLiteralExpr;
class CXXCatchStmt;
class CXXConstCastExpr;
class CXXConstructExpr;
class CXXConstructorDecl;
class CXXConversionDecl;
class CXXDeductionGuideDecl;
class CXXDefaultArgExpr;
class CXXDefaultInitExpr;
class CXXDeleteExpr;
class CXXDependentScopeMemberExpr;
class CXXDestructorDecl;
class CXXDynamicCastExpr;
class CXXFoldExpr;
class CXXForRangeStmt;
class CXXFunctionalCastExpr;
class CXXInheritedCtorInitExpr;
class CXXMemberCallExpr;
class CXXMethodDecl;
class CXXNamedCastExpr;
class CXXNewExpr;
class CXXNoexceptExpr;
class CXXNullPtrLiteralExpr;
class CXXOperatorCallExpr;
class CXXPseudoDestructorExpr;
class CXXRecordDecl;
class CXXReinterpretCastExpr;
class CXXRewrittenBinaryOperator;
class CXXScalarValueInitExpr;
class CXXStaticCastExpr;
class CXXStdInitializerListExpr;
class CXXTemporaryObjectExpr;
class CXXThisExpr;
class CXXThrowExpr;
class CXXTryStmt;
class CXXTypeidExpr;
class CXXUnresolvedConstructExpr;
class CXXUuidofExpr;
class CallExpr;
class CapturedDecl;
class CapturedStmt;
class CaseStmt;
class CastExpr;
class CharacterLiteral;
class ChooseExpr;
class ClassScopeFunctionSpecializationDecl;
class ClassTemplateDecl;
class ClassTemplatePartialSpecializationDecl;
class ClassTemplateSpecializationDecl;
class CoawaitExpr;
class ComplexType;
class CompoundAssignOperator;
class CompoundLiteralExpr;
class CompoundStmt;
class ConceptDecl;
class ConceptSpecializationExpr;
class ConditionalOperator;
class ConstantArrayType;
class ConstantExpr;
class ConstantMatrixType;
class ConstructorUsingShadowDecl;
class ContinueStmt;
class ConvertVectorExpr;
class CoreturnStmt;
class CoroutineBodyStmt;
class CoroutineSuspendExpr;
class CoyieldExpr;
class DecayedType;
class Decl;
class DeclContext;
class DeclRefExpr;
class DeclStmt;
class DeclaratorDecl;
class DecltypeType;
class DecompositionDecl;
class DeducedTemplateSpecializationType;
class DeducedType;
class DefaultStmt;
class DependentAddressSpaceType;
class DependentCoawaitExpr;
class DependentExtIntType;
class DependentNameType;
class DependentScopeDeclRefExpr;
class DependentSizedArrayType;
class DependentSizedExtVectorType;
class DependentSizedMatrixType;
class DependentTemplateSpecializationType;
class DependentVectorType;
class DesignatedInitExpr;
class DesignatedInitUpdateExpr;
class DoStmt;
class ElaboratedType;
class EmptyDecl;
class EnumConstantDecl;
class EnumDecl;
class EnumType;
class ExplicitCastExpr;
class ExportDecl;
class Expr;
class ExprWithCleanups;
class ExpressionTraitExpr;
class ExtIntType;
class ExtVectorElementExpr;
class ExtVectorType;
class ExternCContextDecl;
class FieldDecl;
class FileScopeAsmDecl;
class FixedPointLiteral;
class FloatingLiteral;
class ForStmt;
class FriendDecl;
class FriendTemplateDecl;
class FullExpr;
class FunctionDecl;
class FunctionNoProtoType;
class FunctionParmPackExpr;
class FunctionProtoType;
class FunctionTemplateDecl;
class FunctionTemplateSpecializationInfo;
class FunctionType;
class GCCAsmStmt;
class GNUNullExpr;
class GenericSelectionExpr;
class GotoStmt;
class IfStmt;
class ImaginaryLiteral;
class ImplicitCastExpr;
class ImplicitParamDecl;
class ImplicitValueInitExpr;
class ImportDecl;
class IncompleteArrayType;
class IndirectFieldDecl;
class IndirectGotoStmt;
class InitListExpr;
class InjectedClassNameType;
class IntegerLiteral;
class LValueReferenceType;
class LabelDecl;
class LabelStmt;
class LambdaExpr;
class LifetimeExtendedTemporaryDecl;
class LinkageSpecDecl;
class MSAsmStmt;
class MSDependentExistsStmt;
class MSGuidDecl;
class MSPropertyDecl;
class MSPropertyRefExpr;
class MSPropertySubscriptExpr;
class MacroQualifiedType;
class MaterializeTemporaryExpr;
class MatrixSubscriptExpr;
class MatrixType;
class MemberExpr;
class MemberPointerType;
class NamedDecl;
class NamespaceAliasDecl;
class NamespaceDecl;
class NoInitExpr;
class NonTypeTemplateParmDecl;
class NullStmt;
class OMPAllocateDecl;
class OMPArraySectionExpr;
class OMPArrayShapingExpr;
class OMPAtomicDirective;
class OMPBarrierDirective;
class OMPCancelDirective;
class OMPCancellationPointDirective;
class OMPCapturedExprDecl;
class OMPCriticalDirective;
class OMPDeclareMapperDecl;
class OMPDeclareReductionDecl;
class OMPDepobjDirective;
class OMPDistributeDirective;
class OMPDistributeParallelForDirective;
class OMPDistributeParallelForSimdDirective;
class OMPDistributeSimdDirective;
class OMPExecutableDirective;
class OMPFlushDirective;
class OMPForDirective;
class OMPForSimdDirective;
class OMPIteratorExpr;
class OMPLoopDirective;
class OMPMasterDirective;
class OMPMasterTaskLoopDirective;
class OMPMasterTaskLoopSimdDirective;
class OMPOrderedDirective;
class OMPParallelDirective;
class OMPParallelForDirective;
class OMPParallelForSimdDirective;
class OMPParallelMasterDirective;
class OMPParallelMasterTaskLoopDirective;
class OMPParallelMasterTaskLoopSimdDirective;
class OMPParallelSectionsDirective;
class OMPRequiresDecl;
class OMPScanDirective;
class OMPSectionDirective;
class OMPSectionsDirective;
class OMPSimdDirective;
class OMPSingleDirective;
class OMPTargetDataDirective;
class OMPTargetDirective;
class OMPTargetEnterDataDirective;
class OMPTargetExitDataDirective;
class OMPTargetParallelDirective;
class OMPTargetParallelForDirective;
class OMPTargetParallelForSimdDirective;
class OMPTargetSimdDirective;
class OMPTargetTeamsDirective;
class OMPTargetTeamsDistributeDirective;
class OMPTargetTeamsDistributeParallelForDirective;
class OMPTargetTeamsDistributeParallelForSimdDirective;
class OMPTargetTeamsDistributeSimdDirective;
class OMPTargetUpdateDirective;
class OMPTaskDirective;
class OMPTaskLoopDirective;
class OMPTaskLoopSimdDirective;
class OMPTaskgroupDirective;
class OMPTaskwaitDirective;
class OMPTaskyieldDirective;
class OMPTeamsDirective;
class OMPTeamsDistributeDirective;
class OMPTeamsDistributeParallelForDirective;
class OMPTeamsDistributeParallelForSimdDirective;
class OMPTeamsDistributeSimdDirective;
class OMPThreadPrivateDecl;
class ObjCArrayLiteral;
class ObjCAtCatchStmt;
class ObjCAtDefsFieldDecl;
class ObjCAtFinallyStmt;
class ObjCAtSynchronizedStmt;
class ObjCAtThrowStmt;
class ObjCAtTryStmt;
class ObjCAutoreleasePoolStmt;
class ObjCAvailabilityCheckExpr;
class ObjCBoolLiteralExpr;
class ObjCBoxedExpr;
class ObjCBridgedCastExpr;
class ObjCCategoryDecl;
class ObjCCategoryImplDecl;
class ObjCCompatibleAliasDecl;
class ObjCContainerDecl;
class ObjCDictionaryLiteral;
class ObjCEncodeExpr;
class ObjCForCollectionStmt;
class ObjCImplDecl;
class ObjCImplementationDecl;
class ObjCIndirectCopyRestoreExpr;
class ObjCInterfaceDecl;
class ObjCInterfaceType;
class ObjCIsaExpr;
class ObjCIvarDecl;
class ObjCIvarRefExpr;
class ObjCMessageExpr;
class ObjCMethodDecl;
class ObjCObjectPointerType;
class ObjCObjectType;
class ObjCPropertyDecl;
class ObjCPropertyImplDecl;
class ObjCPropertyRefExpr;
class ObjCProtocolDecl;
class ObjCProtocolExpr;
class ObjCSelectorExpr;
class ObjCStringLiteral;
class ObjCSubscriptRefExpr;
class ObjCTypeParamDecl;
class ObjCTypeParamType;
class OffsetOfExpr;
class OpaqueValueExpr;
class OverloadExpr;
class PackExpansionExpr;
class PackExpansionType;
class ParenExpr;
class ParenListExpr;
class ParenType;
class ParmVarDecl;
class PipeType;
class PointerType;
class PragmaCommentDecl;
class PragmaDetectMismatchDecl;
class PredefinedExpr;
class PseudoObjectExpr;
class QualType;
class RValueReferenceType;
class RecordDecl;
class RecordType;
class RecoveryExpr;
class RedeclarableTemplateDecl;
class ReferenceType;
class RequiresExpr;
class RequiresExprBodyDecl;
class ReturnStmt;
class SEHExceptStmt;
class SEHFinallyStmt;
class SEHLeaveStmt;
class SEHTryStmt;
class ShuffleVectorExpr;
class SizeOfPackExpr;
class SourceLocExpr;
class StaticAssertDecl;
class Stmt;
class StmtExpr;
class StringLiteral;
class SubstNonTypeTemplateParmExpr;
class SubstNonTypeTemplateParmPackExpr;
class SubstTemplateTypeParmPackType;
class SubstTemplateTypeParmType;
class SwitchCase;
class SwitchStmt;
class TagDecl;
class TagType;
class TemplateArgument;
class TemplateDecl;
class TemplateParamObjectDecl;
class TemplateSpecializationType;
class TemplateTemplateParmDecl;
class TemplateTypeParmDecl;
class TemplateTypeParmType;
class TranslationUnitDecl;
class Type;
class TypeAliasDecl;
class TypeAliasTemplateDecl;
class TypeDecl;
class TypeOfExprType;
class TypeOfType;
class TypeSourceInfo;
class TypeTraitExpr;
class TypeWithKeyword;
class TypedefDecl;
class TypedefNameDecl;
class TypedefType;
class TypoExpr;
class UnaryExprOrTypeTraitExpr;
class UnaryOperator;
class UnaryTransformType;
class UnresolvedLookupExpr;
class UnresolvedMemberExpr;
class UnresolvedUsingType;
class UnresolvedUsingTypenameDecl;
class UnresolvedUsingValueDecl;
class UserDefinedLiteral;
class UsingDecl;
class UsingDirectiveDecl;
class UsingPackDecl;
class UsingShadowDecl;
class VAArgExpr;
class ValueDecl;
class ValueStmt;
class VarDecl;
class VarTemplateDecl;
class VarTemplatePartialSpecializationDecl;
class VarTemplateSpecializationDecl;
class VariableArrayType;
class VectorType;
class WhileStmt;
#ifndef PASTA_IN_DECL_CPP
using OMPDeclarativeDirectiveDecl = Decl;
using OMPDeclarativeDirectiveValueDecl = ValueDecl;
#endif  // PASTA_IN_DECL_CPP
}  // namespace clang
namespace pasta {
class AST;
class ASTImpl;
class DeclBuilder;
class TypeBuilder;

#define PASTA_FOR_EACH_DECL_IMPL(m, a) \
    m(AccessSpec) \
    m(Binding) \
    m(Block) \
    m(BuiltinTemplate) \
    m(CXXConstructor) \
    m(CXXConversion) \
    m(CXXDeductionGuide) \
    m(CXXDestructor) \
    m(CXXMethod) \
    m(CXXRecord) \
    m(Captured) \
    m(ClassScopeFunctionSpecialization) \
    m(ClassTemplate) \
    m(ClassTemplatePartialSpecialization) \
    m(ClassTemplateSpecialization) \
    m(Concept) \
    m(ConstructorUsingShadow) \
    a() \
    m(Declarator) \
    m(Decomposition) \
    m(Empty) \
    m(EnumConstant) \
    m(Enum) \
    m(Export) \
    m(ExternCContext) \
    m(Field) \
    m(FileScopeAsm) \
    m(Friend) \
    m(FriendTemplate) \
    m(Function) \
    m(FunctionTemplate) \
    m(ImplicitParam) \
    m(Import) \
    m(IndirectField) \
    m(Label) \
    m(LifetimeExtendedTemporary) \
    m(LinkageSpec) \
    m(MSGuid) \
    m(MSProperty) \
    m(Named) \
    m(NamespaceAlias) \
    m(Namespace) \
    m(NonTypeTemplateParm) \
    m(OMPAllocate) \
    m(OMPCapturedExpr) \
    m(OMPDeclareMapper) \
    m(OMPDeclareReduction) \
    m(OMPRequires) \
    m(OMPThreadPrivate) \
    m(ObjCAtDefsField) \
    m(ObjCCategory) \
    m(ObjCCategoryImpl) \
    m(ObjCCompatibleAlias) \
    m(ObjCContainer) \
    m(ObjCImpl) \
    m(ObjCImplementation) \
    m(ObjCInterface) \
    m(ObjCIvar) \
    m(ObjCMethod) \
    m(ObjCProperty) \
    m(ObjCPropertyImpl) \
    m(ObjCProtocol) \
    m(ObjCTypeParam) \
    m(ParmVar) \
    m(PragmaComment) \
    m(PragmaDetectMismatch) \
    m(Record) \
    m(RedeclarableTemplate) \
    m(RequiresExprBody) \
    m(StaticAssert) \
    m(Tag) \
    m(Template) \
    m(TemplateParamObject) \
    m(TemplateTemplateParm) \
    m(TemplateTypeParm) \
    m(TranslationUnit) \
    m(TypeAlias) \
    m(TypeAliasTemplate) \
    m(Type) \
    m(Typedef) \
    m(TypedefName) \
    m(UnresolvedUsingTypename) \
    m(UnresolvedUsingValue) \
    m(Using) \
    m(UsingDirective) \
    m(UsingPack) \
    m(UsingShadow) \
    m(Value) \
    m(Var) \
    m(VarTemplate) \
    m(VarTemplatePartialSpecialization) \
    m(VarTemplateSpecialization) \
    a(OMPDeclarativeDirective) \
    a(OMPDeclarativeDirectiveValue)

#define PASTA_FOR_EACH_STMT_IMPL(s, d, e, o, l, a) \
    a(AbstractConditionalOperator) \
    e(AddrLabelExpr) \
    e(ArrayInitIndexExpr) \
    e(ArrayInitLoopExpr) \
    e(ArraySubscriptExpr) \
    e(ArrayTypeTraitExpr) \
    e(AsTypeExpr) \
    a(AsmStmt) \
    e(AtomicExpr) \
    s(AttributedStmt) \
    o(BinaryConditionalOperator) \
    o(BinaryOperator) \
    e(BlockExpr) \
    s(BreakStmt) \
    e(BuiltinBitCastExpr) \
    e(CStyleCastExpr) \
    e(CUDAKernelCallExpr) \
    e(CXXAddrspaceCastExpr) \
    e(CXXBindTemporaryExpr) \
    e(CXXBoolLiteralExpr) \
    s(CXXCatchStmt) \
    e(CXXConstCastExpr) \
    e(CXXConstructExpr) \
    e(CXXDefaultArgExpr) \
    e(CXXDefaultInitExpr) \
    e(CXXDeleteExpr) \
    e(CXXDependentScopeMemberExpr) \
    e(CXXDynamicCastExpr) \
    e(CXXFoldExpr) \
    s(CXXForRangeStmt) \
    e(CXXFunctionalCastExpr) \
    e(CXXInheritedCtorInitExpr) \
    e(CXXMemberCallExpr) \
    a(CXXNamedCastExpr) \
    e(CXXNewExpr) \
    e(CXXNoexceptExpr) \
    e(CXXNullPtrLiteralExpr) \
    e(CXXOperatorCallExpr) \
    e(CXXPseudoDestructorExpr) \
    e(CXXReinterpretCastExpr) \
    o(CXXRewrittenBinaryOperator) \
    e(CXXScalarValueInitExpr) \
    e(CXXStaticCastExpr) \
    e(CXXStdInitializerListExpr) \
    e(CXXTemporaryObjectExpr) \
    e(CXXThisExpr) \
    e(CXXThrowExpr) \
    s(CXXTryStmt) \
    e(CXXTypeidExpr) \
    e(CXXUnresolvedConstructExpr) \
    e(CXXUuidofExpr) \
    e(CallExpr) \
    s(CapturedStmt) \
    s(CaseStmt) \
    a(CastExpr) \
    l(CharacterLiteral) \
    e(ChooseExpr) \
    e(CoawaitExpr) \
    o(CompoundAssignOperator) \
    e(CompoundLiteralExpr) \
    s(CompoundStmt) \
    e(ConceptSpecializationExpr) \
    o(ConditionalOperator) \
    e(ConstantExpr) \
    s(ContinueStmt) \
    e(ConvertVectorExpr) \
    s(CoreturnStmt) \
    s(CoroutineBodyStmt) \
    a(CoroutineSuspendExpr) \
    e(CoyieldExpr) \
    e(DeclRefExpr) \
    s(DeclStmt) \
    s(DefaultStmt) \
    e(DependentCoawaitExpr) \
    e(DependentScopeDeclRefExpr) \
    e(DesignatedInitExpr) \
    e(DesignatedInitUpdateExpr) \
    s(DoStmt) \
    a(ExplicitCastExpr) \
    a(Expr) \
    e(ExprWithCleanups) \
    e(ExpressionTraitExpr) \
    e(ExtVectorElementExpr) \
    l(FixedPointLiteral) \
    l(FloatingLiteral) \
    s(ForStmt) \
    a(FullExpr) \
    e(FunctionParmPackExpr) \
    s(GCCAsmStmt) \
    e(GNUNullExpr) \
    e(GenericSelectionExpr) \
    s(GotoStmt) \
    s(IfStmt) \
    l(ImaginaryLiteral) \
    e(ImplicitCastExpr) \
    e(ImplicitValueInitExpr) \
    s(IndirectGotoStmt) \
    e(InitListExpr) \
    l(IntegerLiteral) \
    s(LabelStmt) \
    e(LambdaExpr) \
    s(MSAsmStmt) \
    s(MSDependentExistsStmt) \
    e(MSPropertyRefExpr) \
    e(MSPropertySubscriptExpr) \
    e(MaterializeTemporaryExpr) \
    e(MatrixSubscriptExpr) \
    e(MemberExpr) \
    e(NoInitExpr) \
    s(NullStmt) \
    e(OMPArraySectionExpr) \
    e(OMPArrayShapingExpr) \
    d(OMPAtomicDirective) \
    d(OMPBarrierDirective) \
    d(OMPCancelDirective) \
    d(OMPCancellationPointDirective) \
    d(OMPCriticalDirective) \
    d(OMPDepobjDirective) \
    d(OMPDistributeDirective) \
    d(OMPDistributeParallelForDirective) \
    d(OMPDistributeParallelForSimdDirective) \
    d(OMPDistributeSimdDirective) \
    a(OMPExecutableDirective) \
    d(OMPFlushDirective) \
    d(OMPForDirective) \
    d(OMPForSimdDirective) \
    e(OMPIteratorExpr) \
    a(OMPLoopDirective) \
    d(OMPMasterDirective) \
    d(OMPMasterTaskLoopDirective) \
    d(OMPMasterTaskLoopSimdDirective) \
    d(OMPOrderedDirective) \
    d(OMPParallelDirective) \
    d(OMPParallelForDirective) \
    d(OMPParallelForSimdDirective) \
    d(OMPParallelMasterDirective) \
    d(OMPParallelMasterTaskLoopDirective) \
    d(OMPParallelMasterTaskLoopSimdDirective) \
    d(OMPParallelSectionsDirective) \
    d(OMPScanDirective) \
    d(OMPSectionDirective) \
    d(OMPSectionsDirective) \
    d(OMPSimdDirective) \
    d(OMPSingleDirective) \
    d(OMPTargetDataDirective) \
    d(OMPTargetDirective) \
    d(OMPTargetEnterDataDirective) \
    d(OMPTargetExitDataDirective) \
    d(OMPTargetParallelDirective) \
    d(OMPTargetParallelForDirective) \
    d(OMPTargetParallelForSimdDirective) \
    d(OMPTargetSimdDirective) \
    d(OMPTargetTeamsDirective) \
    d(OMPTargetTeamsDistributeDirective) \
    d(OMPTargetTeamsDistributeParallelForDirective) \
    d(OMPTargetTeamsDistributeParallelForSimdDirective) \
    d(OMPTargetTeamsDistributeSimdDirective) \
    d(OMPTargetUpdateDirective) \
    d(OMPTaskDirective) \
    d(OMPTaskLoopDirective) \
    d(OMPTaskLoopSimdDirective) \
    d(OMPTaskgroupDirective) \
    d(OMPTaskwaitDirective) \
    d(OMPTaskyieldDirective) \
    d(OMPTeamsDirective) \
    d(OMPTeamsDistributeDirective) \
    d(OMPTeamsDistributeParallelForDirective) \
    d(OMPTeamsDistributeParallelForSimdDirective) \
    d(OMPTeamsDistributeSimdDirective) \
    l(ObjCArrayLiteral) \
    s(ObjCAtCatchStmt) \
    s(ObjCAtFinallyStmt) \
    s(ObjCAtSynchronizedStmt) \
    s(ObjCAtThrowStmt) \
    s(ObjCAtTryStmt) \
    s(ObjCAutoreleasePoolStmt) \
    e(ObjCAvailabilityCheckExpr) \
    e(ObjCBoolLiteralExpr) \
    e(ObjCBoxedExpr) \
    e(ObjCBridgedCastExpr) \
    l(ObjCDictionaryLiteral) \
    e(ObjCEncodeExpr) \
    s(ObjCForCollectionStmt) \
    e(ObjCIndirectCopyRestoreExpr) \
    e(ObjCIsaExpr) \
    e(ObjCIvarRefExpr) \
    e(ObjCMessageExpr) \
    e(ObjCPropertyRefExpr) \
    e(ObjCProtocolExpr) \
    e(ObjCSelectorExpr) \
    l(ObjCStringLiteral) \
    e(ObjCSubscriptRefExpr) \
    e(OffsetOfExpr) \
    e(OpaqueValueExpr) \
    a(OverloadExpr) \
    e(PackExpansionExpr) \
    e(ParenExpr) \
    e(ParenListExpr) \
    e(PredefinedExpr) \
    e(PseudoObjectExpr) \
    e(RecoveryExpr) \
    e(RequiresExpr) \
    s(ReturnStmt) \
    s(SEHExceptStmt) \
    s(SEHFinallyStmt) \
    s(SEHLeaveStmt) \
    s(SEHTryStmt) \
    e(ShuffleVectorExpr) \
    e(SizeOfPackExpr) \
    e(SourceLocExpr) \
    a(Stmt) \
    e(StmtExpr) \
    l(StringLiteral) \
    e(SubstNonTypeTemplateParmExpr) \
    e(SubstNonTypeTemplateParmPackExpr) \
    a(SwitchCase) \
    s(SwitchStmt) \
    e(TypeTraitExpr) \
    e(TypoExpr) \
    e(UnaryExprOrTypeTraitExpr) \
    o(UnaryOperator) \
    e(UnresolvedLookupExpr) \
    e(UnresolvedMemberExpr) \
    l(UserDefinedLiteral) \
    e(VAArgExpr) \
    a(ValueStmt) \
    s(WhileStmt)

#define PASTA_FOR_EACH_TYPE_IMPL(m, a) \
    m(Adjusted) \
    m(Array) \
    m(Atomic) \
    m(Attributed) \
    m(Auto) \
    m(BlockPointer) \
    m(Builtin) \
    m(Complex) \
    m(ConstantArray) \
    m(ConstantMatrix) \
    m(Decayed) \
    m(Decltype) \
    m(DeducedTemplateSpecialization) \
    m(Deduced) \
    m(DependentAddressSpace) \
    m(DependentExtInt) \
    m(DependentName) \
    m(DependentSizedArray) \
    m(DependentSizedExtVector) \
    m(DependentSizedMatrix) \
    m(DependentTemplateSpecialization) \
    m(DependentVector) \
    m(Elaborated) \
    m(Enum) \
    m(ExtInt) \
    m(ExtVector) \
    m(FunctionNoProto) \
    m(FunctionProto) \
    m(Function) \
    m(IncompleteArray) \
    m(InjectedClassName) \
    m(LValueReference) \
    m(MacroQualified) \
    m(Matrix) \
    m(MemberPointer) \
    m(ObjCInterface) \
    m(ObjCObjectPointer) \
    m(ObjCObject) \
    m(ObjCTypeParam) \
    m(PackExpansion) \
    m(Paren) \
    m(Pipe) \
    m(Pointer) \
    m(RValueReference) \
    m(Record) \
    m(Reference) \
    m(SubstTemplateTypeParmPack) \
    m(SubstTemplateTypeParm) \
    m(Tag) \
    m(TemplateSpecialization) \
    m(TemplateTypeParm) \
    a() \
    m(TypeOfExpr) \
    m(TypeOf) \
    m(Typedef) \
    m(UnaryTransform) \
    m(UnresolvedUsing) \
    m(VariableArray) \
    m(Vector) \
    m(TypeWithKey)

enum class DeclKind : unsigned {
#define PASTA_DECLARE_DECL_KIND(name) k ## name ,
  PASTA_FOR_EACH_DECL_IMPL(PASTA_DECLARE_DECL_KIND, PASTA_IGNORE_ABSTRACT)
#undef PASTA_DECLARE_DECL_KIND
};

enum class ADLCallKind : bool {
  kNotADL = 0,
  kUsesADL = 1,
};

enum class ASTDumpOutputFormat : unsigned int {
  kDefault = 0,
  kJSON = 1,
};

enum class AccessControl : unsigned int {
  kNone = 0,
  kPrivate = 1,
  kProtected = 2,
  kPublic = 3,
  kPackage = 4,
};

enum class AccessSpecifier : unsigned int {
  kPublic = 0,
  kProtected = 1,
  kPrivate = 2,
  kNone = 3,
};

enum class AddrSpaceMapMangling : unsigned int {
  kTarget = 0,
  kOn = 1,
  kOff = 2,
};

enum class AllocatorTypeTy : unsigned int {
  kOMPNullMemAlloc = 0,
  kOMPDefaultMemAlloc = 1,
  kOMPLargeCapMemAlloc = 2,
  kOMPConstMemAlloc = 3,
  kOMPHighBWMemAlloc = 4,
  kOMPLowLatMemAlloc = 5,
  kOMPCGroupMemAlloc = 6,
  kOMPPTeamMemAlloc = 7,
  kOMPThreadMemAlloc = 8,
  kOMPUserDefinedMemAlloc = 9,
};

enum class ArgKind : unsigned int {
  kNull = 0,
  kType = 1,
  kDeclaration = 2,
  kNullPtr = 3,
  kIntegral = 4,
  kTemplate = 5,
  kTemplateExpansion = 6,
  kExpression = 7,
  kPack = 8,
};

enum class ArgPassingKind : unsigned int {
  kCanPassInRegs = 0,
  kCannotPassInRegs = 1,
  kCanNeverPassInRegs = 2,
};

enum class ArgumentKind : unsigned int {
  kStd_string = 0,
  kC_string = 1,
  kSint = 2,
  kUint = 3,
  kTokenkind = 4,
  kIdentifierinfo = 5,
  kAddrspace = 6,
  kQual = 7,
  kQualtype = 8,
  kDeclarationname = 9,
  kNameddecl = 10,
  kNestednamespec = 11,
  kDeclcontext = 12,
  kQualtype_pair = 13,
  kAttr = 14,
};

enum class ArraySizeModifier : unsigned int {
  kNormal = 0,
  kStatic = 1,
  kStar = 2,
};

enum class ArrayTypeTrait : unsigned int {
  kArrayRank = 0,
  kArrayExtent = 1,
};

enum class AtomicOp : unsigned int {
  kC11_atomic_init = 0,
  kC11_atomic_load = 1,
  kC11_atomic_store = 2,
  kC11_atomic_exchange = 3,
  kC11_atomic_compare_exchange_strong = 4,
  kC11_atomic_compare_exchange_weak = 5,
  kC11_atomic_fetch_add = 6,
  kC11_atomic_fetch_sub = 7,
  kC11_atomic_fetch_and = 8,
  kC11_atomic_fetch_or = 9,
  kC11_atomic_fetch_xor = 10,
  kC11_atomic_fetch_max = 11,
  kC11_atomic_fetch_min = 12,
  kAtomic_load = 13,
  kAtomic_load_n = 14,
  kAtomic_store = 15,
  kAtomic_store_n = 16,
  kAtomic_exchange = 17,
  kAtomic_exchange_n = 18,
  kAtomic_compare_exchange = 19,
  kAtomic_compare_exchange_n = 20,
  kAtomic_fetch_add = 21,
  kAtomic_fetch_sub = 22,
  kAtomic_fetch_and = 23,
  kAtomic_fetch_or = 24,
  kAtomic_fetch_xor = 25,
  kAtomic_fetch_nand = 26,
  kAtomic_add_fetch = 27,
  kAtomic_sub_fetch = 28,
  kAtomic_and_fetch = 29,
  kAtomic_or_fetch = 30,
  kAtomic_xor_fetch = 31,
  kAtomic_max_fetch = 32,
  kAtomic_min_fetch = 33,
  kAtomic_nand_fetch = 34,
  kOpencl_atomic_init = 35,
  kOpencl_atomic_load = 36,
  kOpencl_atomic_store = 37,
  kOpencl_atomic_exchange = 38,
  kOpencl_atomic_compare_exchange_strong = 39,
  kOpencl_atomic_compare_exchange_weak = 40,
  kOpencl_atomic_fetch_add = 41,
  kOpencl_atomic_fetch_sub = 42,
  kOpencl_atomic_fetch_and = 43,
  kOpencl_atomic_fetch_or = 44,
  kOpencl_atomic_fetch_xor = 45,
  kOpencl_atomic_fetch_min = 46,
  kOpencl_atomic_fetch_max = 47,
  kAtomic_fetch_min = 48,
  kAtomic_fetch_max = 49,
  kBI_First = 0,
};

enum class AtomicScopeModelKind : int {
  kNone = 0,
  kOpenCL = 1,
};

enum class AttributeKind : unsigned int {
  kAddressSpace = 0,
  kArmMveStrictPolymorphism = 1,
  kCmseNSCall = 2,
  kNoDeref = 3,
  kObjCGC = 4,
  kObjCInertUnsafeUnretained = 5,
  kObjCKindOf = 6,
  kOpenCLConstantAddressSpace = 7,
  kOpenCLGenericAddressSpace = 8,
  kOpenCLGlobalAddressSpace = 9,
  kOpenCLGlobalDeviceAddressSpace = 10,
  kOpenCLGlobalHostAddressSpace = 11,
  kOpenCLLocalAddressSpace = 12,
  kOpenCLPrivateAddressSpace = 13,
  kPtr32 = 14,
  kPtr64 = 15,
  kSPtr = 16,
  kTypeNonNull = 17,
  kTypeNullUnspecified = 18,
  kTypeNullable = 19,
  kTypeNullableResult = 20,
  kUPtr = 21,
  kFallThrough = 22,
  kLikely = 23,
  kSuppress = 24,
  kUnlikely = 25,
  kNoMerge = 26,
  kAArch64VectorPcs = 27,
  kAcquireHandle = 28,
  kAnyX86NoCfCheck = 29,
  kCDecl = 30,
  kFastCall = 31,
  kIntelOclBicc = 32,
  kLifetimeBound = 33,
  kMSABI = 34,
  kNSReturnsRetained = 35,
  kObjCOwnership = 36,
  kPascal = 37,
  kPcs = 38,
  kPreserveAll = 39,
  kPreserveMost = 40,
  kRegCall = 41,
  kStdCall = 42,
  kSwiftCall = 43,
  kSysVABI = 44,
  kThisCall = 45,
  kVectorCall = 46,
  kSwiftContext = 47,
  kSwiftErrorResult = 48,
  kSwiftIndirectResult = 49,
  kAnnotate = 50,
  kCFConsumed = 51,
  kCarriesDependency = 52,
  kNSConsumed = 53,
  kNonNull = 54,
  kOSConsumed = 55,
  kPassObjectSize = 56,
  kReleaseHandle = 57,
  kUseHandle = 58,
  kAMDGPUFlatWorkGroupSize = 59,
  kAMDGPUNumSGPR = 60,
  kAMDGPUNumVGPR = 61,
  kAMDGPUWavesPerEU = 62,
  kARMInterrupt = 63,
  kAVRInterrupt = 64,
  kAVRSignal = 65,
  kAcquireCapability = 66,
  kAcquiredAfter = 67,
  kAcquiredBefore = 68,
  kAlignMac68k = 69,
  kAlignNatural = 70,
  kAligned = 71,
  kAllocAlign = 72,
  kAllocSize = 73,
  kAlwaysDestroy = 74,
  kAlwaysInline = 75,
  kAnalyzerNoReturn = 76,
  kAnyX86Interrupt = 77,
  kAnyX86NoCallerSavedRegisters = 78,
  kArcWeakrefUnavailable = 79,
  kArgumentWithTypeTag = 80,
  kArmBuiltinAlias = 81,
  kArtificial = 82,
  kAsmLabel = 83,
  kAssertCapability = 84,
  kAssertExclusiveLock = 85,
  kAssertSharedLock = 86,
  kAssumeAligned = 87,
  kAssumption = 88,
  kAvailability = 89,
  kBPFPreserveAccessIndex = 90,
  kBlocks = 91,
  kBuiltin = 92,
  kC11NoReturn = 93,
  kCFAuditedTransfer = 94,
  kCFGuard = 95,
  kCFICanonicalJumpTable = 96,
  kCFReturnsNotRetained = 97,
  kCFReturnsRetained = 98,
  kCFUnknownTransfer = 99,
  kCPUDispatch = 100,
  kCPUSpecific = 101,
  kCUDAConstant = 102,
  kCUDADevice = 103,
  kCUDADeviceBuiltinSurfaceType = 104,
  kCUDADeviceBuiltinTextureType = 105,
  kCUDAGlobal = 106,
  kCUDAHost = 107,
  kCUDAInvalidTarget = 108,
  kCUDALaunchBounds = 109,
  kCUDAShared = 110,
  kCXX11NoReturn = 111,
  kCallableWhen = 112,
  kCallback = 113,
  kCapability = 114,
  kCapturedRecord = 115,
  kCleanup = 116,
  kCmseNSEntry = 117,
  kCodeSeg = 118,
  kCold = 119,
  kCommon = 120,
  kConst = 121,
  kConstInit = 122,
  kConstructor = 123,
  kConsumable = 124,
  kConsumableAutoCast = 125,
  kConsumableSetOnRead = 126,
  kConvergent = 127,
  kDLLExport = 128,
  kDLLExportStaticLocal = 129,
  kDLLImport = 130,
  kDLLImportStaticLocal = 131,
  kDeprecated = 132,
  kDestructor = 133,
  kDiagnoseIf = 134,
  kDisableTailCalls = 135,
  kEmptyBases = 136,
  kEnableIf = 137,
  kEnforceTCB = 138,
  kEnforceTCBLeaf = 139,
  kEnumExtensibility = 140,
  kExcludeFromExplicitInstantiation = 141,
  kExclusiveTrylockFunction = 142,
  kExternalSourceSymbol = 143,
  kFinal = 144,
  kFlagEnum = 145,
  kFlatten = 146,
  kFormat = 147,
  kFormatArg = 148,
  kGNUInline = 149,
  kGuardedBy = 150,
  kGuardedVar = 151,
  kHIPManaged = 152,
  kHot = 153,
  kIBAction = 154,
  kIBOutlet = 155,
  kIBOutletCollection = 156,
  kInitPriority = 157,
  kInternalLinkage = 158,
  kLTOVisibilityPublic = 159,
  kLayoutVersion = 160,
  kLeaf = 161,
  kLockReturned = 162,
  kLocksExcluded = 163,
  kMIGServerRoutine = 164,
  kMSAllocator = 165,
  kMSInheritance = 166,
  kMSNoVTable = 167,
  kMSP430Interrupt = 168,
  kMSStruct = 169,
  kMSVtorDisp = 170,
  kMaxFieldAlignment = 171,
  kMayAlias = 172,
  kMicroMips = 173,
  kMinSize = 174,
  kMinVectorWidth = 175,
  kMips16 = 176,
  kMipsInterrupt = 177,
  kMipsLongCall = 178,
  kMipsShortCall = 179,
  kNSConsumesSelf = 180,
  kNSErrorDomain = 181,
  kNSReturnsAutoreleased = 182,
  kNSReturnsNotRetained = 183,
  kNaked = 184,
  kNoAlias = 185,
  kNoCommon = 186,
  kNoDebug = 187,
  kNoDestroy = 188,
  kNoDuplicate = 189,
  kNoInline = 190,
  kNoInstrumentFunction = 191,
  kNoMicroMips = 192,
  kNoMips16 = 193,
  kNoReturn = 194,
  kNoSanitize = 195,
  kNoSpeculativeLoadHardening = 196,
  kNoSplitStack = 197,
  kNoStackProtector = 198,
  kNoThreadSafetyAnalysis = 199,
  kNoThrow = 200,
  kNoUniqueAddress = 201,
  kNotTailCalled = 202,
  kOMPAllocateDecl = 203,
  kOMPCaptureNoInit = 204,
  kOMPDeclareTargetDecl = 205,
  kOMPDeclareVariant = 206,
  kOMPThreadPrivateDecl = 207,
  kOSConsumesThis = 208,
  kOSReturnsNotRetained = 209,
  kOSReturnsRetained = 210,
  kOSReturnsRetainedOnNonZero = 211,
  kOSReturnsRetainedOnZero = 212,
  kObjCBridge = 213,
  kObjCBridgeMutable = 214,
  kObjCBridgeRelated = 215,
  kObjCException = 216,
  kObjCExplicitProtocolImpl = 217,
  kObjCExternallyRetained = 218,
  kObjCIndependentClass = 219,
  kObjCMethodFamily = 220,
  kObjCNSObject = 221,
  kObjCPreciseLifetime = 222,
  kObjCRequiresPropertyDefs = 223,
  kObjCRequiresSuper = 224,
  kObjCReturnsInnerPointer = 225,
  kObjCRootClass = 226,
  kObjCSubclassingRestricted = 227,
  kOpenCLIntelReqdSubGroupSize = 228,
  kOpenCLKernel = 229,
  kOpenCLUnrollHint = 230,
  kOptimizeNone = 231,
  kOverride = 232,
  kOwner = 233,
  kOwnership = 234,
  kPacked = 235,
  kParamTypestate = 236,
  kPatchableFunctionEntry = 237,
  kPointer = 238,
  kPragmaClangBSSSection = 239,
  kPragmaClangDataSection = 240,
  kPragmaClangRelroSection = 241,
  kPragmaClangRodataSection = 242,
  kPragmaClangTextSection = 243,
  kPreferredName = 244,
  kPtGuardedBy = 245,
  kPtGuardedVar = 246,
  kPure = 247,
  kRISCVInterrupt = 248,
  kReinitializes = 249,
  kReleaseCapability = 250,
  kReqdWorkGroupSize = 251,
  kRequiresCapability = 252,
  kRestrict = 253,
  kReturnTypestate = 254,
  kReturnsNonNull = 255,
  kReturnsTwice = 256,
  kSYCLKernel = 257,
  kScopedLockable = 258,
  kSection = 259,
  kSelectAny = 260,
  kSentinel = 261,
  kSetTypestate = 262,
  kSharedTrylockFunction = 263,
  kSpeculativeLoadHardening = 264,
  kStrictFP = 265,
  kSwiftAsync = 266,
  kSwiftAsyncName = 267,
  kSwiftAttr = 268,
  kSwiftBridge = 269,
  kSwiftBridgedTypedef = 270,
  kSwiftError = 271,
  kSwiftName = 272,
  kSwiftNewType = 273,
  kSwiftPrivate = 274,
  kTLSModel = 275,
  kTarget = 276,
  kTestTypestate = 277,
  kTransparentUnion = 278,
  kTrivialABI = 279,
  kTryAcquireCapability = 280,
  kTypeTagForDatatype = 281,
  kTypeVisibility = 282,
  kUnavailable = 283,
  kUninitialized = 284,
  kUnused = 285,
  kUsed = 286,
  kUuid = 287,
  kVecReturn = 288,
  kVecTypeHint = 289,
  kVisibility = 290,
  kWarnUnused = 291,
  kWarnUnusedResult = 292,
  kWeak = 293,
  kWeakImport = 294,
  kWeakRef = 295,
  kWebAssemblyExportName = 296,
  kWebAssemblyImportModule = 297,
  kWebAssemblyImportName = 298,
  kWorkGroupSizeHint = 299,
  kX86ForceAlignArgPointer = 300,
  kXRayInstrument = 301,
  kXRayLogArgs = 302,
  kAbiTag = 303,
  kAlias = 304,
  kAlignValue = 305,
  kCalledOnce = 306,
  kIFunc = 307,
  kInitSeg = 308,
  kLoaderUninitialized = 309,
  kLoopHint = 310,
  kMode = 311,
  kNoBuiltin = 312,
  kNoEscape = 313,
  kOMPCaptureKind = 314,
  kOMPDeclareSimdDecl = 315,
  kOMPReferencedVar = 316,
  kObjCBoxable = 317,
  kObjCClassStub = 318,
  kObjCDesignatedInitializer = 319,
  kObjCDirect = 320,
  kObjCDirectMembers = 321,
  kObjCNonLazyClass = 322,
  kObjCNonRuntimeProtocol = 323,
  kObjCRuntimeName = 324,
  kObjCRuntimeVisible = 325,
  kOpenCLAccess = 326,
  kOverloadable = 327,
  kRenderScriptKernel = 328,
  kSwiftObjCMembers = 329,
  kThread = 330,
};

enum class AutoTypeKeyword : int {
  kAuto = 0,
  kDecltypeAuto = 1,
  kGNUAutoType = 2,
};

enum class AvailabilityResult : unsigned int {
  kAvailable = 0,
  kNotYetIntroduced = 1,
  kDeprecated = 2,
  kUnavailable = 3,
};

enum class BinaryOperatorKind : unsigned int {
  kPtrMemD = 0,
  kPtrMemI = 1,
  kMul = 2,
  kDiv = 3,
  kRem = 4,
  kAdd = 5,
  kSub = 6,
  kShl = 7,
  kShr = 8,
  kCmp = 9,
  kLT = 10,
  kGT = 11,
  kLE = 12,
  kGE = 13,
  kEQ = 14,
  kNE = 15,
  kAnd = 16,
  kXor = 17,
  kOr = 18,
  kLAnd = 19,
  kLOr = 20,
  kAssign = 21,
  kMulAssign = 22,
  kDivAssign = 23,
  kRemAssign = 24,
  kAddAssign = 25,
  kSubAssign = 26,
  kShlAssign = 27,
  kShrAssign = 28,
  kAndAssign = 29,
  kXorAssign = 30,
  kOrAssign = 31,
  kComma = 32,
};

enum class Bits : unsigned char {
  kNone = 0,
  kUnexpandedPack = 1,
  kInstantiation = 2,
  kType = 4,
  kValue = 8,
  kDependent = 12,
  kError = 16,
  kVariablyModified = 32,
};

enum class BlockType : unsigned int {
  kByRef = 0,
};

enum class BranchStateTy : unsigned int {
  kUndefined = 0,
  kInbranch = 1,
  kNotinbranch = 2,
};

enum class CallingConv : unsigned int {
  kC = 0,
  kX86StdCall = 1,
  kX86FastCall = 2,
  kX86ThisCall = 3,
  kX86VectorCall = 4,
  kX86Pascal = 5,
  kWin64 = 6,
  kX86_64SysV = 7,
  kX86RegCall = 8,
  kAAPCS = 9,
  kAAPCS_VFP = 10,
  kIntelOclBicc = 11,
  kSpirFunction = 12,
  kOpenCLKernel = 13,
  kSwift = 14,
  kPreserveMost = 15,
  kPreserveAll = 16,
  kAArch64VectorCall = 17,
};

enum class CanThrowResult : unsigned int {
  kCannot = 0,
  kDependent = 1,
  kCan = 2,
};

enum class CapturedRegionKind : unsigned int {
  kDefault = 0,
  kObjCAtFinally = 1,
  kOpenMP = 2,
};

enum class CastKind : unsigned int {
  kDependent = 0,
  kBitCast = 1,
  kLValueBitCast = 2,
  kLValueToRValueBitCast = 3,
  kLValueToRValue = 4,
  kNoOp = 5,
  kBaseToDerived = 6,
  kDerivedToBase = 7,
  kUncheckedDerivedToBase = 8,
  kDynamic = 9,
  kToUnion = 10,
  kArrayToPointerDecay = 11,
  kFunctionToPointerDecay = 12,
  kNullToPointer = 13,
  kNullToMemberPointer = 14,
  kBaseToDerivedMemberPointer = 15,
  kDerivedToBaseMemberPointer = 16,
  kMemberPointerToBoolean = 17,
  kReinterpretMemberPointer = 18,
  kUserDefinedConversion = 19,
  kConstructorConversion = 20,
  kIntegralToPointer = 21,
  kPointerToIntegral = 22,
  kPointerToBoolean = 23,
  kToVoid = 24,
  kVectorSplat = 25,
  kIntegralCast = 26,
  kIntegralToBoolean = 27,
  kIntegralToFloating = 28,
  kFloatingToFixedPoint = 29,
  kFixedPointToFloating = 30,
  kFixedPointCast = 31,
  kFixedPointToIntegral = 32,
  kIntegralToFixedPoint = 33,
  kFixedPointToBoolean = 34,
  kFloatingToIntegral = 35,
  kFloatingToBoolean = 36,
  kBooleanToSignedIntegral = 37,
  kFloatingCast = 38,
  kCPointerToObjCPointerCast = 39,
  kBlockPointerToObjCPointerCast = 40,
  kAnyPointerToBlockPointerCast = 41,
  kObjCObjectLValueCast = 42,
  kFloatingRealToComplex = 43,
  kFloatingComplexToReal = 44,
  kFloatingComplexToBoolean = 45,
  kFloatingComplexCast = 46,
  kFloatingComplexToIntegralComplex = 47,
  kIntegralRealToComplex = 48,
  kIntegralComplexToReal = 49,
  kIntegralComplexToBoolean = 50,
  kIntegralComplexCast = 51,
  kIntegralComplexToFloatingComplex = 52,
  kARCProduceObject = 53,
  kARCConsumeObject = 54,
  kARCReclaimReturnedObject = 55,
  kARCExtendBlockObject = 56,
  kAtomicToNonAtomic = 57,
  kNonAtomicToAtomic = 58,
  kCopyAndAutoreleaseBlockObject = 59,
  kBuiltinFnToFnPtr = 60,
  kZeroToOCLOpaqueType = 61,
  kAddressSpaceConversion = 62,
  kIntToOCLSampler = 63,
};

enum class CharacterKind : unsigned int {
  kAscii = 0,
  kWide = 1,
  kUTF8 = 2,
  kUTF16 = 3,
  kUTF32 = 4,
};

enum class ClangABI : int {
  kVer3_8 = 0,
  kVer4 = 1,
  kVer6 = 2,
  kVer7 = 3,
  kVer9 = 4,
  kVer11 = 5,
  kLatest = 6,
};

enum class CommentKind : unsigned int {
  kInvalid = 0,
  kOrdinaryBCPL = 1,
  kOrdinaryC = 2,
  kBCPLSlash = 3,
  kBCPLExcl = 4,
  kJavaDoc = 5,
  kQt = 6,
  kMerged = 7,
};

enum class ComparisonCategoryResult : unsigned char {
  kEqual = 0,
  kEquivalent = 1,
  kLess = 2,
  kGreater = 3,
  kUnordered = 4,
};

enum class ComparisonCategoryType : unsigned char {
  kPartialOrdering = 0,
  kWeakOrdering = 1,
  kStrongOrdering = 2,
};

enum class CompilingModuleKind : unsigned int {
  kNone = 0,
  kModuleMap = 1,
  kHeaderModule = 2,
  kModuleInterface = 3,
};

enum class ConstantExprKind : int {
  kNormal = 0,
  kNonClassTemplateArgument = 1,
  kClassTemplateArgument = 2,
  kImmediateInvocation = 3,
};

enum class ConstexprSpecKind : int {
  kUnspecified = 0,
  kConstexpr = 1,
  kConsteval = 2,
  kConstinit = 3,
};

enum class ConstructionKind : unsigned int {
  kComplete = 0,
  kNonVirtualBase = 1,
  kVirtualBase = 2,
  kDelegating = 3,
};

enum class ConsumedState : unsigned int {
  kUnknown = 0,
  kConsumed = 1,
  kUnconsumed = 2,
};

enum class ConventionKind : unsigned int {
  kNone = 0,
  kNonNullError = 1,
  kNullResult = 2,
  kZeroResult = 3,
  kNonZeroResult = 4,
};

enum class CoreFoundationABI : int {
  kUnspecified = 0,
  kStandalone = 1,
  kObjectiveC = 2,
  kSwift = 3,
  kSwift5_0 = 4,
  kSwift4_2 = 5,
  kSwift4_1 = 6,
};

enum class DefaultArgKind : unsigned int {
  kNone = 0,
  kUnparsed = 1,
  kUninstantiated = 2,
  kNormal = 3,
};

enum class DefaultCallingConvention : unsigned int {
  kNone = 0,
  kCDecl = 1,
  kFastCall = 2,
  kStdCall = 3,
  kVectorCall = 4,
  kRegCall = 5,
};

enum class DefinitionKind : unsigned int {
  kDeclarationOnly = 0,
  kTentativeDefinition = 1,
  kDefinition = 2,
};

enum class DestructionKind : unsigned int {
  kNone = 0,
  kCxx_destructor = 1,
  kObjc_strong_lifetime = 2,
  kObjc_weak_lifetime = 3,
  kNontrivial_c_struct = 4,
};

enum class DevTypeTy : unsigned int {
  kHost = 0,
  kNoHost = 1,
  kAny = 2,
};

enum class DiagnosticLevelMask : unsigned int {
  kNone = 0,
  kNote = 1,
  kRemark = 2,
  kWarning = 4,
  kError = 8,
  kAll = 15,
};

enum class DiagnosticType : unsigned int {
  kError = 0,
  kWarning = 1,
};

enum class ElaboratedTypeKeyword : unsigned int {
  kStruct = 0,
  kInterface = 1,
  kUnion = 2,
  kClass = 3,
  kEnum = 4,
  kTypename = 5,
  kNone = 6,
};

enum class EmbedBitcodeKind : unsigned int {
  kEmbed_Off = 0,
  kEmbed_All = 1,
  kEmbed_Bitcode = 2,
  kEmbed_Marker = 3,
};

enum class ExceptionSpecificationType : unsigned int {
  kNone = 0,
  kDynamicNone = 1,
  kDynamic = 2,
  kMSAny = 3,
  kNoThrow = 4,
  kBasicNoexcept = 5,
  kDependentNoexcept = 6,
  kNoexceptFalse = 7,
  kNoexceptTrue = 8,
  kUnevaluated = 9,
  kUninstantiated = 10,
  kUnparsed = 11,
};

enum class ExplicitSpecKind : unsigned int {
  kResolvedFalse = 0,
  kResolvedTrue = 1,
  kUnresolved = 2,
};

enum class ExplicitVisibilityKind : unsigned int {
  kVisibilityForType = 0,
  kVisibilityForValue = 1,
};

enum class ExprDependence : unsigned char {
  kUnexpandedPack = 1,
  kInstantiation = 2,
  kType = 4,
  kValue = 8,
  kError = 16,
  kNone = 0,
  kAll = 31,
  kTypeValue = 12,
  kTypeInstantiation = 6,
  kValueInstantiation = 10,
  kTypeValueInstantiation = 14,
  kErrorDependent = 26,
};

enum class ExprObjectKind : unsigned int {
  kOrdinary = 0,
  kBitField = 1,
  kVectorComponent = 2,
  kObjCProperty = 3,
  kObjCSubscript = 4,
  kMatrixComponent = 5,
};

enum class ExprOffsets : int {
  kAllocator = 0,
  kAllocatorTraits = 1,
  kTotal = 2,
};

enum class ExprValueKind : unsigned int {
  kRValue = 0,
  kLValue = 1,
  kXValue = 2,
};

enum class ExpressionTrait : unsigned int {
  kIsLValueExpr = 0,
  kIsRValueExpr = 1,
};

enum class ExtKind : unsigned int {
  kAlways = 0,
  kNever = 1,
  kReplyHazy = 2,
};

enum class FPExceptionModeKind : unsigned int {
  kIgnore = 0,
  kMayTrap = 1,
  kStrict = 2,
};

enum class FPModeKind : unsigned int {
  kOff = 0,
  kOn = 1,
  kFast = 2,
  kFastHonorPragmas = 3,
};

enum class FamilyKind : unsigned int {
  kNone = 0,
  kAlloc = 1,
  kCopy = 2,
  kInit = 3,
  kMutableCopy = 4,
  kNew = 5,
};

enum class FiniteLoopsKind : unsigned int {
  kLanguage = 0,
  kAlways = 1,
  kNever = 2,
};

enum class FramePointerKind : int {
  kNone = 0,
  kNonLeaf = 1,
  kAll = 2,
};

enum class FriendObjectKind : unsigned int {
  kNone = 0,
  kDeclared = 1,
  kUndeclared = 2,
};

enum class GC : unsigned int {
  kGCNone = 0,
  kWeak = 1,
  kStrong = 2,
};

enum class GCMode : unsigned int {
  kNonGC = 0,
  kGCOnly = 1,
  kHybridGC = 2,
};

enum class GVALinkage : unsigned int {
  kInternal = 0,
  kAvailableExternally = 1,
  kDiscardableODR = 2,
  kStrongExternal = 3,
  kStrongODR = 4,
};

enum class GetBuiltinTypeError : unsigned int {
  kNone = 0,
  kMissing_type = 1,
  kMissing_stdio = 2,
  kMissing_setjmp = 3,
  kMissing_ucontext = 4,
};

enum class GuardArg : unsigned int {
  kNocf = 0,
};

enum class ID : unsigned int {
  kWorkGroup = 1,
  kDevice = 2,
  kAllSVMDevices = 3,
  kSubGroup = 4,
};

enum class IdentKind : unsigned int {
  kFunc = 0,
  kFunction = 1,
  kLFunction = 2,
  kFuncDName = 3,
  kFuncSig = 4,
  kLFuncSig = 5,
  kPrettyFunction = 6,
  kPrettyFunctionNoVirtual = 7,
};

enum class IdentifierInfoFlag : unsigned int {
  kZeroArg = 1,
  kOneArg = 2,
  kMultiArg = 7,
  kArgFlags = 7,
};

enum class IdentifierNamespace : unsigned int {
  kLabel = 1,
  kTag = 2,
  kType = 4,
  kMember = 8,
  kNamespace = 16,
  kOrdinary = 32,
  kObjCProtocol = 64,
  kOrdinaryFriend = 128,
  kTagFriend = 256,
  kUsing = 512,
  kNonMemberOperator = 1024,
  kLocalExtern = 2048,
  kOMPReduction = 4096,
  kOMPMapper = 8192,
};

enum class ImbueAttribute : int {
  kNONE = 0,
  kALWAYS = 1,
  kNEVER = 2,
  kALWAYS_ARG1 = 3,
};

enum class ImplementationControl : unsigned int {
  kNone = 0,
  kRequired = 1,
  kOptional = 2,
};

enum class ImplicitParamKind : unsigned int {
  kObjCSelf = 0,
  kObjCCmd = 1,
  kCXXThis = 2,
  kCXXVTT = 3,
  kCapturedContext = 4,
  kOther = 5,
};

enum class ImplicitReason : unsigned int {
  kNone = 0,
  kARCForbiddenType = 1,
  kForbiddenWeak = 2,
  kARCForbiddenConversion = 3,
  kARCInitReturnsUnrelated = 4,
  kARCFieldWithOwnership = 5,
};

enum class InClassInitStyle : unsigned int {
  kNoInit = 0,
  kCopyInit = 1,
  kListInit = 2,
};

enum class InheritedDesignatedInitializersState : unsigned int {
  kUnknown = 0,
  kInherited = 1,
  kNotInherited = 2,
};

enum class InitKind : unsigned int {
  kCallInit = 0,
  kDirectInit = 1,
  kCopyInit = 2,
};

enum class InitStorageKind : unsigned int {
  kNoInit = 0,
  kInClassCopyInit = 1,
  kInClassListInit = 2,
  kCapturedVLAType = 3,
};

enum class InitializationStyle : unsigned int {
  kCInit = 0,
  kCallInit = 1,
  kListInit = 2,
};

enum class InlineVariableDefinitionKind : int {
  kNone = 0,
  kWeak = 1,
  kWeakUnknown = 2,
  kStrong = 3,
};

enum class InliningMethod : unsigned int {
  kNormalInlining = 0,
  kOnlyHintInlining = 1,
  kOnlyAlwaysInlining = 2,
};

enum class InterruptType : unsigned int {
  kIRQ = 0,
  kFIQ = 1,
  kSWI = 2,
  kABORT = 3,
  kUNDEF = 4,
  kGeneric = 5,
};

enum class Kinds : unsigned int {
  kLValue = 0,
  kXValue = 1,
  kFunction = 2,
  kVoid = 3,
  kAddressableVoid = 4,
  kDuplicateVectorComponents = 5,
  kMemberFunction = 6,
  kSubObjCPropertySetting = 7,
  kClassTemporary = 8,
  kArrayTemporary = 9,
  kObjCMessageRValue = 10,
  kPRValue = 11,
};

enum class LValueClassification : unsigned int {
  kValid = 0,
  kNotObjectType = 1,
  kIncompleteVoidType = 2,
  kDuplicateVectorComponents = 3,
  kInvalidExpression = 4,
  kInvalidMessageExpression = 5,
  kMemberFunction = 6,
  kSubObjCPropertySetting = 7,
  kClassTemporary = 8,
  kArrayTemporary = 9,
};

enum class LambdaCaptureDefault : unsigned int {
  kNone = 0,
  kByCopy = 1,
  kByRef = 2,
};

enum class LambdaCaptureKind : unsigned int {
  kThis = 0,
  kStarThis = 1,
  kByCopy = 2,
  kByRef = 3,
  kVLAType = 4,
};

enum class LangAS : unsigned int {
  kDefault = 0,
  kOpencl_global = 1,
  kOpencl_local = 2,
  kOpencl_constant = 3,
  kOpencl_private = 4,
  kOpencl_generic = 5,
  kOpencl_global_device = 6,
  kOpencl_global_host = 7,
  kCuda_device = 8,
  kCuda_constant = 9,
  kCuda_shared = 10,
  kPtr32_sptr = 11,
  kPtr32_uptr = 12,
  kPtr64 = 13,
};

enum class LangFeatures : unsigned int {
  kLineComment = 1,
  kC99 = 2,
  kC11 = 4,
  kC17 = 8,
  kC2x = 16,
  kCPlusPlus = 32,
  kCPlusPlus11 = 64,
  kCPlusPlus14 = 128,
  kCPlusPlus17 = 256,
  kCPlusPlus20 = 512,
  kCPlusPlus2b = 1024,
  kDigraphs = 2048,
  kGNUMode = 4096,
  kHexFloat = 8192,
  kImplicitInt = 16384,
  kOpenCL = 32768,
};

enum class Language : unsigned char {
  kUnknown = 0,
  kAsm = 1,
  kLLVM_IR = 2,
  kC = 3,
  kCXX = 4,
  kObjC = 5,
  kObjCXX = 6,
  kOpenCL = 7,
  kCUDA = 8,
  kRenderScript = 9,
  kHIP = 10,
};

enum class LanguageIDs : unsigned int {
  kC = 1,
  kCxx = 2,
};

enum class LanguageLinkage : unsigned int {
  kCLanguageLinkage = 0,
  kCXXLanguageLinkage = 1,
  kNoLanguageLinkage = 2,
};

enum class LaxVectorConversionKind : int {
  kNone = 0,
  kInteger = 1,
  kAll = 2,
};

enum class Level : unsigned int {
  kIgnored = 0,
  kNote = 1,
  kRemark = 2,
  kWarning = 3,
  kError = 4,
  kFatal = 5,
};

enum class Likelihood : int {
  kLH_Unlikely = -1,
  kLH_None = 0,
  kLH_Likely = 1,
};

enum class Linkage : unsigned char {
  kNoLinkage = 0,
  kInternalLinkage = 1,
  kUniqueExternalLinkage = 2,
  kVisibleNoLinkage = 3,
  kModuleInternalLinkage = 4,
  kModuleLinkage = 5,
  kExternalLinkage = 6,
};

enum class LiteralOperatorKind : unsigned int {
  kRaw = 0,
  kTemplate = 1,
  kInteger = 2,
  kFloating = 3,
  kString = 4,
  kCharacter = 5,
};

enum class LoopHintState : unsigned int {
  kEnable = 0,
  kDisable = 1,
  kNumeric = 2,
  kFixedWidth = 3,
  kScalableWidth = 4,
  kAssumeSafety = 5,
  kFull = 6,
};

enum class MSInheritanceModel : int {
  kSingle = 0,
  kMultiple = 1,
  kVirtual = 2,
  kUnspecified = 3,
};

enum class MSVCMajorVersion : unsigned int {
  kMSVC2010 = 1600,
  kMSVC2012 = 1700,
  kMSVC2013 = 1800,
  kMSVC2015 = 1900,
  kMSVC2017 = 1910,
  kMSVC2017_5 = 1912,
  kMSVC2017_7 = 1914,
  kMSVC2019 = 1920,
};

enum class MSVtorDispMode : int {
  kNever = 0,
  kForVBaseOverride = 1,
  kForVFTable = 2,
};

enum class MapTypeTy : unsigned int {
  kTo = 0,
  kLink = 1,
};

enum class MethodRefFlags : unsigned int {
  kMethodRef_None = 0,
  kMethodRef_Getter = 1,
  kMethodRef_Setter = 2,
};

enum class ModifiableType : unsigned int {
  kUntested = 0,
  kModifiable = 1,
  kRValue = 2,
  kFunction = 3,
  kLValueCast = 4,
  kNoSetterProperty = 5,
  kConstQualified = 6,
  kConstQualifiedField = 7,
  kConstAddrSpace = 8,
  kArrayType = 9,
  kIncompleteType = 10,
};

enum class ModuleOwnershipKind : unsigned int {
  kUnowned = 0,
  kVisible = 1,
  kVisibleWhenImported = 2,
  kModulePrivate = 3,
};

enum class MultiVersionKind : int {
  kNone = 0,
  kTarget = 1,
  kCPUSpecific = 2,
  kCPUDispatch = 3,
};

enum class NameKind : unsigned int {
  kTemplate = 0,
  kOverloadedTemplate = 1,
  kAssumedTemplate = 2,
  kQualifiedTemplate = 3,
  kDependentTemplate = 4,
  kSubstTemplateTemplateParm = 5,
  kSubstTemplateTemplateParmPack = 6,
};

enum class NeedExtraManglingDecl_t : unsigned int {
  kNeedExtraManglingDecl = 0,
};

enum class NestedNameSpecifierDependence : unsigned char {
  kUnexpandedPack = 1,
  kInstantiation = 2,
  kDependent = 4,
  kError = 8,
  kNone = 0,
  kDependentInstantiation = 6,
  kAll = 15,
};

enum class NewtypeKind : unsigned int {
  kNK_Struct = 0,
  kNK_Enum = 1,
};

enum class NonOdrUseReason : unsigned int {
  kNone = 0,
  kUnevaluated = 1,
  kConstant = 2,
  kDiscarded = 3,
};

enum class Nonce_ObjCInterface : unsigned int {
  kObjCInterface = 0,
};

enum class NullPointerConstantKind : unsigned int {
  kNotNull = 0,
  kZeroExpression = 1,
  kZeroLiteral = 2,
  kCXX11_nullptr = 3,
  kGNUNull = 4,
};

enum class NullPointerConstantValueDependence : unsigned int {
  kNeverValueDependent = 0,
  kValueDependentIsNull = 1,
  kValueDependentIsNotNull = 2,
};

enum class NullabilityKind : unsigned char {
  kNonNull = 0,
  kNullable = 1,
  kUnspecified = 2,
  kNullableResult = 3,
};

enum class ObjCBridgeCastKind : unsigned int {
  kBridge = 0,
  kBridgeTransfer = 1,
  kBridgeRetained = 2,
};

enum class ObjCDeclQualifier : unsigned int {
  kNone = 0,
  kIn = 1,
  kInout = 2,
  kOut = 4,
  kBycopy = 8,
  kByref = 16,
  kOneway = 32,
  kCSNullability = 64,
};

enum class ObjCDispatchMethodKind : unsigned int {
  kLegacy = 0,
  kNonLegacy = 1,
  kMixed = 2,
};

enum class ObjCInstanceTypeFamily : unsigned int {
  kNone = 0,
  kArray = 1,
  kDictionary = 2,
  kSingleton = 3,
  kInit = 4,
  kReturnsSelf = 5,
};

enum class ObjCLifetime : unsigned int {
  kNone = 0,
  kExplicitNone = 1,
  kStrong = 2,
  kWeak = 3,
  kAutoreleasing = 4,
};

enum class ObjCMethodFamily : unsigned int {
  kNone = 0,
  kAlloc = 1,
  kCopy = 2,
  kInit = 3,
  kMutableCopy = 4,
  kNew = 5,
  kAutorelease = 6,
  kDealloc = 7,
  kFinalize = 8,
  kRelease = 9,
  kRetain = 10,
  kRetainCount = 11,
  kSelf = 12,
  kInitialize = 13,
  kPerformSelector = 14,
};

enum class ObjCPropertyQueryKind : unsigned char {
  kQuery_unknown = 0,
  kQuery_instance = 1,
  kQuery_class = 2,
};

enum class ObjCStringFormatFamily : unsigned int {
  kNone = 0,
  kNSString = 1,
  kCFString = 2,
};

enum class ObjCSubstitutionContext : int {
  kOrdinary = 0,
  kResult = 1,
  kParameter = 2,
  kProperty = 3,
  kSuperclass = 4,
};

enum class ObjCTypeParamVariance : unsigned char {
  kInvariant = 0,
  kCovariant = 1,
  kContravariant = 2,
};

enum class OnStackType : unsigned int {
  kOnStack = 0,
};

enum class OpenMPAtomicDefaultMemOrderClauseKind : unsigned int {
  kSeq_cst = 0,
  kAcq_rel = 1,
  kRelaxed = 2,
  kUnknown = 3,
};

enum class OpenMPDefaultmapClauseKind : unsigned int {
  kScalar = 0,
  kAggregate = 1,
  kPointer = 2,
  kUnknown = 3,
};

enum class OpenMPDefaultmapClauseModifier : unsigned int {
  kUnknown = 3,
  kAlloc = 4,
  kTo = 5,
  kFrom = 6,
  kTofrom = 7,
  kNone = 9,
  kDefault = 10,
  kPresent = 11,
};

enum class OpenMPDependClauseKind : unsigned int {
  kIn = 0,
  kOut = 1,
  kInout = 2,
  kMutexinoutset = 3,
  kDepobj = 4,
  kSource = 5,
  kSink = 6,
  kUnknown = 7,
};

enum class OpenMPDeviceClauseModifier : unsigned int {
  kAncestor = 0,
  kDevice_num = 1,
  kUnknown = 2,
};

enum class OpenMPDeviceType : unsigned int {
  kHost = 0,
  kNohost = 1,
  kAny = 2,
  kUnknown = 3,
};

enum class OpenMPDistScheduleClauseKind : unsigned int {
  kStatic = 0,
  kUnknown = 1,
};

enum class OpenMPLastprivateModifier : unsigned int {
  kConditional = 0,
  kUnknown = 1,
};

enum class OpenMPLinearClauseKind : unsigned int {
  kVal = 0,
  kRef = 1,
  kUval = 2,
  kUnknown = 3,
};

enum class OpenMPMapClauseKind : unsigned int {
  kAlloc = 0,
  kTo = 1,
  kFrom = 2,
  kTofrom = 3,
  kDelete = 4,
  kRelease = 5,
  kUnknown = 6,
};

enum class OpenMPMapModifierKind : unsigned int {
  kUnknown = 6,
  kAlways = 7,
  kClose = 8,
  kMapper = 9,
  kPresent = 10,
};

enum class OpenMPMotionModifierKind : unsigned int {
  kOMPC_MOTION_MODIFIER_mapper = 0,
  kOMPC_MOTION_MODIFIER_present = 1,
  kOMPC_MOTION_MODIFIER_unknown = 2,
};

enum class OpenMPOrderClauseKind : unsigned int {
  kConcurrent = 0,
  kUnknown = 1,
};

enum class OpenMPReductionClauseModifier : unsigned int {
  kDefault = 0,
  kInscan = 1,
  kTask = 2,
  kUnknown = 3,
};

enum class OpenMPScheduleClauseKind : unsigned int {
  kStatic = 0,
  kDynamic = 1,
  kGuided = 2,
  kAuto = 3,
  kRuntime = 4,
  kUnknown = 5,
};

enum class OpenMPScheduleClauseModifier : unsigned int {
  kUnknown = 5,
  kMonotonic = 6,
  kNonmonotonic = 7,
  kSimd = 8,
};

enum class OptionType : unsigned int {
  kVectorize = 0,
  kVectorizeWidth = 1,
  kInterleave = 2,
  kInterleaveCount = 3,
  kUnroll = 4,
  kUnrollCount = 5,
  kUnrollAndJam = 6,
  kUnrollAndJamCount = 7,
  kPipelineDisabled = 8,
  kPipelineInitiationInterval = 9,
  kDistribute = 10,
  kVectorizePredicate = 11,
};

enum class OverloadedOperatorKind : int {
  kNone = 0,
  kNew = 1,
  kDelete = 2,
  kArray_New = 3,
  kArray_Delete = 4,
  kPlus = 5,
  kMinus = 6,
  kStar = 7,
  kSlash = 8,
  kPercent = 9,
  kCaret = 10,
  kAmp = 11,
  kPipe = 12,
  kTilde = 13,
  kExclaim = 14,
  kEqual = 15,
  kLess = 16,
  kGreater = 17,
  kPlusEqual = 18,
  kMinusEqual = 19,
  kStarEqual = 20,
  kSlashEqual = 21,
  kPercentEqual = 22,
  kCaretEqual = 23,
  kAmpEqual = 24,
  kPipeEqual = 25,
  kLessLess = 26,
  kGreaterGreater = 27,
  kLessLessEqual = 28,
  kGreaterGreaterEqual = 29,
  kEqualEqual = 30,
  kExclaimEqual = 31,
  kLessEqual = 32,
  kGreaterEqual = 33,
  kSpaceship = 34,
  kAmpAmp = 35,
  kPipePipe = 36,
  kPlusPlus = 37,
  kMinusMinus = 38,
  kComma = 39,
  kArrowStar = 40,
  kArrow = 41,
  kCall = 42,
  kSubscript = 43,
  kConditional = 44,
  kCoawait = 45,
  kNUM_OVERLOADED_OPERATORS = 46,
};

enum class OverloadsShown : unsigned int {
  kAll = 0,
  kBest = 1,
};

enum class OwnershipKind : unsigned int {
  kHolds = 0,
  kReturns = 1,
  kTakes = 2,
};

enum class PCSType : unsigned int {
  kAAPCS = 0,
  kVFP = 1,
};

enum class ParameterABI : int {
  kOrdinary = 0,
  kSwiftIndirectResult = 1,
  kSwiftErrorResult = 2,
  kSwiftContext = 3,
};

enum class ParenLocsOffsets : int {
  kLParen = 0,
  kRParen = 1,
  kTotal = 2,
};

enum class PragmaFloatControlKind : unsigned int {
  kUnknown = 0,
  kPrecise = 1,
  kNoPrecise = 2,
  kExcept = 3,
  kNoExcept = 4,
  kPush = 5,
  kPop = 6,
};

enum class PragmaMSCommentKind : unsigned int {
  kUnknown = 0,
  kLinker = 1,
  kLib = 2,
  kCompiler = 3,
  kExeStr = 4,
  kUser = 5,
};

enum class PragmaMSPointersToMembersKind : unsigned int {
  kBestCase = 0,
  kFullGeneralitySingleInheritance = 1,
  kFullGeneralityMultipleInheritance = 2,
  kFullGeneralityVirtualInheritance = 3,
};

enum class PragmaMSStructKind : unsigned int {
  kOFF = 0,
  kON = 1,
};

enum class PragmaSectionFlag : unsigned int {
  kNone = 0,
  kRead = 1,
  kWrite = 2,
  kExecute = 4,
  kImplicit = 8,
  kZeroInit = 16,
  kInvalid = 2147483648,
};

enum class PrimitiveCopyKind : unsigned int {
  kTrivial = 0,
  kVolatileTrivial = 1,
  kARCStrong = 2,
  kARCWeak = 3,
  kStruct = 4,
};

enum class PrimitiveDefaultInitializeKind : unsigned int {
  kTrivial = 0,
  kARCStrong = 1,
  kARCWeak = 2,
  kStruct = 3,
};

enum class ProfileInstrKind : unsigned int {
  kProfileNone = 0,
  kProfileClangInstr = 1,
  kProfileIRInstr = 2,
  kProfileCSIRInstr = 3,
};

enum class PropertyControl : unsigned int {
  kNone = 0,
  kRequired = 1,
  kOptional = 2,
};

enum class RangeExprOffset : int {
  kBegin = 0,
  kEnd = 1,
  kStep = 2,
  kTotal = 3,
};

enum class RangeLocOffset : int {
  kAssignLoc = 0,
  kSecondColonLoc = 2,
  kTotal = 3,
};

enum class ReceiverKind : unsigned int {
  kClass = 0,
  kInstance = 1,
  kSuperClass = 2,
  kSuperInstance = 3,
};

enum class RefQualifierKind : unsigned int {
  kNone = 0,
  kLValue = 1,
  kRValue = 2,
};

enum class ResultStorageKind : unsigned int {
  kNone = 0,
  kInt64 = 1,
  kAPValue = 2,
};

enum class SFINAEResponse : unsigned int {
  kSubstitutionFailure = 0,
  kSuppress = 1,
  kReport = 2,
  kAccessControl = 3,
};

enum class SYCLMajorVersion : unsigned int {
  kSYCL_None = 0,
  kSYCL_2017 = 1,
};

enum class SanitizerOrdinal : unsigned long long {
  kAddress = 0,
  kPointerCompare = 1,
  kPointerSubtract = 2,
  kKernelAddress = 3,
  kHWAddress = 4,
  kKernelHWAddress = 5,
  kMemTag = 6,
  kMemory = 7,
  kKernelMemory = 8,
  kFuzzer = 9,
  kFuzzerNoLink = 10,
  kThread = 11,
  kLeak = 12,
  kAlignment = 13,
  kArrayBounds = 14,
  kBool = 15,
  kBuiltin = 16,
  kEnum = 17,
  kFloatCastOverflow = 18,
  kFloatDivideByZero = 19,
  kFunction = 20,
  kIntegerDivideByZero = 21,
  kNonnullAttribute = 22,
  kNull = 23,
  kNullabilityArg = 24,
  kNullabilityAssign = 25,
  kNullabilityReturn = 26,
  kNullabilityGroup = 27,
  kObjectSize = 28,
  kPointerOverflow = 29,
  kReturn = 30,
  kReturnsNonnullAttribute = 31,
  kShiftBase = 32,
  kShiftExponent = 33,
  kShiftGroup = 34,
  kSignedIntegerOverflow = 35,
  kUnreachable = 36,
  kVLABound = 37,
  kVptr = 38,
  kUnsignedIntegerOverflow = 39,
  kUnsignedShiftBase = 40,
  kDataFlow = 41,
  kCFICastStrict = 42,
  kCFIDerivedCast = 43,
  kCFIICall = 44,
  kCFIMFCall = 45,
  kCFIUnrelatedCast = 46,
  kCFINVCall = 47,
  kCFIVCall = 48,
  kCFIGroup = 49,
  kSafeStack = 50,
  kShadowCallStack = 51,
  kUndefinedGroup = 52,
  kUndefinedTrapGroup = 53,
  kImplicitUnsignedIntegerTruncation = 54,
  kImplicitSignedIntegerTruncation = 55,
  kImplicitIntegerTruncationGroup = 56,
  kImplicitIntegerSignChange = 57,
  kImplicitIntegerArithmeticValueChangeGroup = 58,
  kObjCCast = 59,
  kImplicitConversionGroup = 60,
  kIntegerGroup = 61,
  kLocalBounds = 62,
  kBoundsGroup = 63,
  kScudo = 64,
  kAllGroup = 65,
  kCount = 66,
};

enum class ScalarTypeKind : unsigned int {
  kCPointer = 0,
  kBlockPointer = 1,
  kObjCObjectPointer = 2,
  kMemberPointer = 3,
  kBool = 4,
  kIntegral = 5,
  kFloating = 6,
  kIntegralComplex = 7,
  kFloatingComplex = 8,
  kFixedPoint = 9,
};

enum class SelectorLocationsKind : unsigned int {
  kNonStandard = 0,
  kStandardNoSpace = 1,
  kStandardWithSpace = 2,
};

enum class SetterKind : unsigned int {
  kAssign = 0,
  kRetain = 1,
  kCopy = 2,
  kWeak = 3,
};

enum class SideEffectsKind : unsigned int {
  kNoSideEffects = 0,
  kAllowUndefinedBehavior = 1,
  kAllowSideEffects = 2,
};

enum class SignReturnAddressKeyKind : int {
  kAKey = 0,
  kBKey = 1,
};

enum class SignReturnAddressScopeKind : int {
  kNone = 0,
  kNonLeaf = 1,
  kAll = 2,
};

enum class SignedOverflowBehaviorTy : unsigned int {
  kUndefined = 0,
  kDefined = 1,
  kTrapping = 2,
};

enum class SpecialMemberFlags : unsigned int {
  kDefaultConstructor = 1,
  kCopyConstructor = 2,
  kMoveConstructor = 4,
  kCopyAssignment = 8,
  kMoveAssignment = 16,
  kDestructor = 32,
  kAll = 63,
};

enum class SpecifierKind : unsigned int {
  kIdentifier = 0,
  kNamespace = 1,
  kNamespaceAlias = 2,
  kTypeSpec = 3,
  kTypeSpecWithTemplate = 4,
  kGlobal = 5,
  kSuper = 6,
};

enum class Spelling : unsigned int {
  kGNU_aarch64_vector_pcs = 0,
  kCXX11_clang_aarch64_vector_pcs = 1,
  kC2x_clang_aarch64_vector_pcs = 2,
  kSpellingNotCalculated = 15,
};

enum class StackProtectorMode : unsigned int {
  kOff = 0,
  kOn = 1,
  kStrong = 2,
  kReq = 3,
};

enum class StmtKind : unsigned int {
  kGCCAsmStmt = 1,
  kMSAsmStmt = 2,
  kBreakStmt = 3,
  kCXXCatchStmt = 4,
  kCXXForRangeStmt = 5,
  kCXXTryStmt = 6,
  kCapturedStmt = 7,
  kCompoundStmt = 8,
  kContinueStmt = 9,
  kCoreturnStmt = 10,
  kCoroutineBodyStmt = 11,
  kDeclStmt = 12,
  kDoStmt = 13,
  kForStmt = 14,
  kGotoStmt = 15,
  kIfStmt = 16,
  kIndirectGotoStmt = 17,
  kMSDependentExistsStmt = 18,
  kNullStmt = 19,
  kOMPAtomicDirective = 20,
  kOMPBarrierDirective = 21,
  kOMPCancelDirective = 22,
  kOMPCancellationPointDirective = 23,
  kOMPCriticalDirective = 24,
  kOMPDepobjDirective = 25,
  kOMPFlushDirective = 26,
  kOMPDistributeDirective = 27,
  kOMPDistributeParallelForDirective = 28,
  kOMPDistributeParallelForSimdDirective = 29,
  kOMPDistributeSimdDirective = 30,
  kOMPForDirective = 31,
  kOMPForSimdDirective = 32,
  kOMPMasterTaskLoopDirective = 33,
  kOMPMasterTaskLoopSimdDirective = 34,
  kOMPParallelForDirective = 35,
  kOMPParallelForSimdDirective = 36,
  kOMPParallelMasterTaskLoopDirective = 37,
  kOMPParallelMasterTaskLoopSimdDirective = 38,
  kOMPSimdDirective = 39,
  kOMPTargetParallelForSimdDirective = 40,
  kOMPTargetSimdDirective = 41,
  kOMPTargetTeamsDistributeDirective = 42,
  kOMPTargetTeamsDistributeParallelForDirective = 43,
  kOMPTargetTeamsDistributeParallelForSimdDirective = 44,
  kOMPTargetTeamsDistributeSimdDirective = 45,
  kOMPTaskLoopDirective = 46,
  kOMPTaskLoopSimdDirective = 47,
  kOMPTeamsDistributeDirective = 48,
  kOMPTeamsDistributeParallelForDirective = 49,
  kOMPTeamsDistributeParallelForSimdDirective = 50,
  kOMPTeamsDistributeSimdDirective = 51,
  kOMPMasterDirective = 52,
  kOMPOrderedDirective = 53,
  kOMPParallelDirective = 54,
  kOMPParallelMasterDirective = 55,
  kOMPParallelSectionsDirective = 56,
  kOMPScanDirective = 57,
  kOMPSectionDirective = 58,
  kOMPSectionsDirective = 59,
  kOMPSingleDirective = 60,
  kOMPTargetDataDirective = 61,
  kOMPTargetDirective = 62,
  kOMPTargetEnterDataDirective = 63,
  kOMPTargetExitDataDirective = 64,
  kOMPTargetParallelDirective = 65,
  kOMPTargetParallelForDirective = 66,
  kOMPTargetTeamsDirective = 67,
  kOMPTargetUpdateDirective = 68,
  kOMPTaskDirective = 69,
  kOMPTaskgroupDirective = 70,
  kOMPTaskwaitDirective = 71,
  kOMPTaskyieldDirective = 72,
  kOMPTeamsDirective = 73,
  kObjCAtCatchStmt = 74,
  kObjCAtFinallyStmt = 75,
  kObjCAtSynchronizedStmt = 76,
  kObjCAtThrowStmt = 77,
  kObjCAtTryStmt = 78,
  kObjCAutoreleasePoolStmt = 79,
  kObjCForCollectionStmt = 80,
  kReturnStmt = 81,
  kSEHExceptStmt = 82,
  kSEHFinallyStmt = 83,
  kSEHLeaveStmt = 84,
  kSEHTryStmt = 85,
  kCaseStmt = 86,
  kDefaultStmt = 87,
  kSwitchStmt = 88,
  kAttributedStmt = 89,
  kBinaryConditionalOperator = 90,
  kConditionalOperator = 91,
  kAddrLabelExpr = 92,
  kArrayInitIndexExpr = 93,
  kArrayInitLoopExpr = 94,
  kArraySubscriptExpr = 95,
  kArrayTypeTraitExpr = 96,
  kAsTypeExpr = 97,
  kAtomicExpr = 98,
  kBinaryOperator = 99,
  kCompoundAssignOperator = 100,
  kBlockExpr = 101,
  kCXXBindTemporaryExpr = 102,
  kCXXBoolLiteralExpr = 103,
  kCXXConstructExpr = 104,
  kCXXTemporaryObjectExpr = 105,
  kCXXDefaultArgExpr = 106,
  kCXXDefaultInitExpr = 107,
  kCXXDeleteExpr = 108,
  kCXXDependentScopeMemberExpr = 109,
  kCXXFoldExpr = 110,
  kCXXInheritedCtorInitExpr = 111,
  kCXXNewExpr = 112,
  kCXXNoexceptExpr = 113,
  kCXXNullPtrLiteralExpr = 114,
  kCXXPseudoDestructorExpr = 115,
  kCXXRewrittenBinaryOperator = 116,
  kCXXScalarValueInitExpr = 117,
  kCXXStdInitializerListExpr = 118,
  kCXXThisExpr = 119,
  kCXXThrowExpr = 120,
  kCXXTypeidExpr = 121,
  kCXXUnresolvedConstructExpr = 122,
  kCXXUuidofExpr = 123,
  kCallExpr = 124,
  kCUDAKernelCallExpr = 125,
  kCXXMemberCallExpr = 126,
  kCXXOperatorCallExpr = 127,
  kUserDefinedLiteral = 128,
  kBuiltinBitCastExpr = 129,
  kCStyleCastExpr = 130,
  kCXXFunctionalCastExpr = 131,
  kCXXAddrspaceCastExpr = 132,
  kCXXConstCastExpr = 133,
  kCXXDynamicCastExpr = 134,
  kCXXReinterpretCastExpr = 135,
  kCXXStaticCastExpr = 136,
  kObjCBridgedCastExpr = 137,
  kImplicitCastExpr = 138,
  kCharacterLiteral = 139,
  kChooseExpr = 140,
  kCompoundLiteralExpr = 141,
  kConceptSpecializationExpr = 142,
  kConvertVectorExpr = 143,
  kCoawaitExpr = 144,
  kCoyieldExpr = 145,
  kDeclRefExpr = 146,
  kDependentCoawaitExpr = 147,
  kDependentScopeDeclRefExpr = 148,
  kDesignatedInitExpr = 149,
  kDesignatedInitUpdateExpr = 150,
  kExpressionTraitExpr = 151,
  kExtVectorElementExpr = 152,
  kFixedPointLiteral = 153,
  kFloatingLiteral = 154,
  kConstantExpr = 155,
  kExprWithCleanups = 156,
  kFunctionParmPackExpr = 157,
  kGNUNullExpr = 158,
  kGenericSelectionExpr = 159,
  kImaginaryLiteral = 160,
  kImplicitValueInitExpr = 161,
  kInitListExpr = 162,
  kIntegerLiteral = 163,
  kLambdaExpr = 164,
  kMSPropertyRefExpr = 165,
  kMSPropertySubscriptExpr = 166,
  kMaterializeTemporaryExpr = 167,
  kMatrixSubscriptExpr = 168,
  kMemberExpr = 169,
  kNoInitExpr = 170,
  kOMPArraySectionExpr = 171,
  kOMPArrayShapingExpr = 172,
  kOMPIteratorExpr = 173,
  kObjCArrayLiteral = 174,
  kObjCAvailabilityCheckExpr = 175,
  kObjCBoolLiteralExpr = 176,
  kObjCBoxedExpr = 177,
  kObjCDictionaryLiteral = 178,
  kObjCEncodeExpr = 179,
  kObjCIndirectCopyRestoreExpr = 180,
  kObjCIsaExpr = 181,
  kObjCIvarRefExpr = 182,
  kObjCMessageExpr = 183,
  kObjCPropertyRefExpr = 184,
  kObjCProtocolExpr = 185,
  kObjCSelectorExpr = 186,
  kObjCStringLiteral = 187,
  kObjCSubscriptRefExpr = 188,
  kOffsetOfExpr = 189,
  kOpaqueValueExpr = 190,
  kUnresolvedLookupExpr = 191,
  kUnresolvedMemberExpr = 192,
  kPackExpansionExpr = 193,
  kParenExpr = 194,
  kParenListExpr = 195,
  kPredefinedExpr = 196,
  kPseudoObjectExpr = 197,
  kRecoveryExpr = 198,
  kRequiresExpr = 199,
  kShuffleVectorExpr = 200,
  kSizeOfPackExpr = 201,
  kSourceLocExpr = 202,
  kStmtExpr = 203,
  kStringLiteral = 204,
  kSubstNonTypeTemplateParmExpr = 205,
  kSubstNonTypeTemplateParmPackExpr = 206,
  kTypeTraitExpr = 207,
  kTypoExpr = 208,
  kUnaryExprOrTypeTraitExpr = 209,
  kUnaryOperator = 210,
  kVAArgExpr = 211,
  kLabelStmt = 212,
  kWhileStmt = 213,
};

enum class StorageClass : unsigned int {
  kNone = 0,
  kExtern = 1,
  kStatic = 2,
  kPrivateExtern = 3,
  kAuto = 4,
  kRegister = 5,
};

enum class StorageDuration : unsigned int {
  kFullExpression = 0,
  kAutomatic = 1,
  kThread = 2,
  kStatic = 3,
  kDynamic = 4,
};

enum class StoredNameKind : unsigned int {
  kStoredIdentifier = 0,
  kStoredObjCZeroArgSelector = 1,
  kStoredObjCOneArgSelector = 2,
  kStoredCXXConstructorName = 3,
  kStoredCXXDestructorName = 4,
  kStoredCXXConversionFunctionName = 5,
  kStoredCXXOperatorName = 6,
  kStoredDeclarationNameExtra = 7,
  kPtrMask = 7,
  kUncommonNameKindOffset = 8,
};

enum class StoredSpecifierKind : unsigned int {
  kStoredIdentifier = 0,
  kStoredDecl = 1,
  kStoredTypeSpec = 2,
  kStoredTypeSpecWithTemplate = 3,
};

enum class StringKind : unsigned int {
  kAscii = 0,
  kWide = 1,
  kUTF8 = 2,
  kUTF16 = 3,
  kUTF32 = 4,
};

enum class StructReturnConventionKind : unsigned int {
  kSRCK_Default = 0,
  kSRCK_OnStack = 1,
  kSRCK_InRegs = 2,
};

enum class SubExpr : unsigned int {
  kCallee = 0,
  kLHS = 1,
  kRHS = 2,
  kCount = 3,
};

enum class SubStmt : unsigned int {
  kBody = 0,
  kPromise = 1,
  kInitSuspend = 2,
  kFinalSuspend = 3,
  kOnException = 4,
  kOnFallthrough = 5,
  kAllocate = 6,
  kDeallocate = 7,
  kReturnValue = 8,
  kResultDecl = 9,
  kReturnStmt = 10,
  kReturnStmtOnAllocFailure = 11,
};

enum class SyncScope : int {
  kOpenCLWorkGroup = 0,
  kOpenCLDevice = 1,
  kOpenCLAllSVMDevices = 2,
  kOpenCLSubGroup = 3,
};

enum class Syntax : unsigned int {
  kGNU = 0,
  kCXX11 = 1,
  kC2x = 2,
  kDeclspec = 3,
  kMicrosoft = 4,
  kKeyword = 5,
  kPragma = 6,
  kContextSensitiveKeyword = 7,
};

enum class TLSKind : unsigned int {
  kNone = 0,
  kStatic = 1,
  kDynamic = 2,
};

enum class TLSModel : unsigned int {
  kGeneralDynamicTLSModel = 0,
  kLocalDynamicTLSModel = 1,
  kInitialExecTLSModel = 2,
  kLocalExecTLSModel = 3,
};

enum class TQ : unsigned int {
  kConst = 1,
  kRestrict = 2,
  kVolatile = 4,
  kCVRMask = 7,
};

enum class TagTypeKind : unsigned int {
  kStruct = 0,
  kInterface = 1,
  kUnion = 2,
  kClass = 3,
  kEnum = 4,
};

enum class TemplateArgumentDependence : unsigned char {
  kUnexpandedPack = 1,
  kInstantiation = 2,
  kDependent = 4,
  kError = 8,
  kNone = 0,
  kDependentInstantiation = 6,
  kAll = 15,
};

enum class TemplateNameDependence : unsigned char {
  kUnexpandedPack = 1,
  kInstantiation = 2,
  kDependent = 4,
  kError = 8,
  kNone = 0,
  kDependentInstantiation = 6,
  kAll = 15,
};

enum class TemplateSpecializationKind : unsigned int {
  kUndeclared = 0,
  kImplicitInstantiation = 1,
  kExplicitSpecialization = 2,
  kExplicitInstantiationDeclaration = 3,
  kExplicitInstantiationDefinition = 4,
};

enum class TemplatedKind : unsigned int {
  kNonTemplate = 0,
  kFunctionTemplate = 1,
  kMemberSpecialization = 2,
  kFunctionTemplateSpecialization = 3,
  kDependentFunctionTemplateSpecialization = 4,
};

enum class TextDiagnosticFormat : unsigned int {
  kClang = 0,
  kMSVC = 1,
  kVi = 2,
};

enum class ThreadModelKind : int {
  kPOSIX = 0,
  kSingle = 1,
};

enum class ThreadStorageClassSpecifier : unsigned int {
  kUnspecified = 0,
  k__thread = 1,
  kThread_local = 2,
  k_Thread_local = 3,
};

enum class TraillingAllocKind : unsigned int {
  kTAKInheritsConstructor = 1,
  kTAKHasTailExplicit = 2,
};

enum class TranslationUnitKind : unsigned int {
  kComplete = 0,
  kPrefix = 1,
  kModule = 2,
};

enum class TrivialAutoVarInitKind : int {
  kUninitialized = 0,
  kZero = 1,
  kPattern = 2,
};

enum class TypeKind : unsigned int {
  kAdjusted = 0,
  kDecayed = 1,
  kConstantArray = 2,
  kDependentSizedArray = 3,
  kIncompleteArray = 4,
  kVariableArray = 5,
  kAtomic = 6,
  kAttributed = 7,
  kBlockPointer = 8,
  kBuiltin = 9,
  kComplex = 10,
  kDecltype = 11,
  kAuto = 12,
  kDeducedTemplateSpecialization = 13,
  kDependentAddressSpace = 14,
  kDependentExtInt = 15,
  kDependentName = 16,
  kDependentSizedExtVector = 17,
  kDependentTemplateSpecialization = 18,
  kDependentVector = 19,
  kElaborated = 20,
  kExtInt = 21,
  kFunctionNoProto = 22,
  kFunctionProto = 23,
  kInjectedClassName = 24,
  kMacroQualified = 25,
  kConstantMatrix = 26,
  kDependentSizedMatrix = 27,
  kMemberPointer = 28,
  kObjCObjectPointer = 29,
  kObjCObject = 30,
  kObjCInterface = 31,
  kObjCTypeParam = 32,
  kPackExpansion = 33,
  kParen = 34,
  kPipe = 35,
  kPointer = 36,
  kLValueReference = 37,
  kRValueReference = 38,
  kSubstTemplateTypeParmPack = 39,
  kSubstTemplateTypeParm = 40,
  kEnum = 41,
  kRecord = 42,
  kTemplateSpecialization = 43,
  kTemplateTypeParm = 44,
  kTypeOfExpr = 45,
  kTypeOf = 46,
  kTypedef = 47,
  kUnaryTransform = 48,
  kUnresolvedUsing = 49,
  kVector = 50,
  kExtVector = 51,
};

enum class TypeDependence : unsigned char {
  kUnexpandedPack = 1,
  kInstantiation = 2,
  kDependent = 4,
  kVariablyModified = 8,
  kError = 16,
  kNone = 0,
  kAll = 31,
  kDependentInstantiation = 6,
};

enum class TypeLocClass : unsigned int {
  kAdjusted = 0,
  kDecayed = 1,
  kConstantArray = 2,
  kDependentSizedArray = 3,
  kIncompleteArray = 4,
  kVariableArray = 5,
  kAtomic = 6,
  kAttributed = 7,
  kBlockPointer = 8,
  kBuiltin = 9,
  kComplex = 10,
  kDecltype = 11,
  kAuto = 12,
  kDeducedTemplateSpecialization = 13,
  kDependentAddressSpace = 14,
  kDependentExtInt = 15,
  kDependentName = 16,
  kDependentSizedExtVector = 17,
  kDependentTemplateSpecialization = 18,
  kDependentVector = 19,
  kElaborated = 20,
  kExtInt = 21,
  kFunctionNoProto = 22,
  kFunctionProto = 23,
  kInjectedClassName = 24,
  kMacroQualified = 25,
  kConstantMatrix = 26,
  kDependentSizedMatrix = 27,
  kMemberPointer = 28,
  kObjCObjectPointer = 29,
  kObjCObject = 30,
  kObjCInterface = 31,
  kObjCTypeParam = 32,
  kPackExpansion = 33,
  kParen = 34,
  kPipe = 35,
  kPointer = 36,
  kLValueReference = 37,
  kRValueReference = 38,
  kSubstTemplateTypeParmPack = 39,
  kSubstTemplateTypeParm = 40,
  kEnum = 41,
  kRecord = 42,
  kTemplateSpecialization = 43,
  kTemplateTypeParm = 44,
  kTypeOfExpr = 45,
  kTypeOf = 46,
  kTypedef = 47,
  kUnaryTransform = 48,
  kUnresolvedUsing = 49,
  kVector = 50,
  kExtVector = 51,
  kQualified = 52,
};

enum class TypeSpecifierSign : int {
  kUnspecified = 0,
  kSigned = 1,
  kUnsigned = 2,
};

enum class TypeSpecifierType : unsigned int {
  kUnspecified = 0,
  kVoid = 1,
  kChar = 2,
  kWchar = 3,
  kChar8 = 4,
  kChar16 = 5,
  kChar32 = 6,
  kInt = 7,
  kInt128 = 8,
  kExtint = 9,
  kHalf = 10,
  kFloat16 = 11,
  kAccum = 12,
  kFract = 13,
  kBFloat16 = 14,
  kFloat = 15,
  kDouble = 16,
  kFloat128 = 17,
  kBool = 18,
  kDecimal32 = 19,
  kDecimal64 = 20,
  kDecimal128 = 21,
  kEnum = 22,
  kUnion = 23,
  kStruct = 24,
  kClass = 25,
  kInterface = 26,
  kTypename = 27,
  kTypeofType = 28,
  kTypeofExpr = 29,
  kDecltype = 30,
  kUnderlyingType = 31,
  kAuto = 32,
  kDecltype_auto = 33,
  kAuto_type = 34,
  kUnknown_anytype = 35,
  kAtomic = 36,
  kImage1d_t = 37,
  kImage1d_array_t = 38,
  kImage1d_buffer_t = 39,
  kImage2d_t = 40,
  kImage2d_array_t = 41,
  kImage2d_depth_t = 42,
  kImage2d_array_depth_t = 43,
  kImage2d_msaa_t = 44,
  kImage2d_array_msaa_t = 45,
  kImage2d_msaa_depth_t = 46,
  kImage2d_array_msaa_depth_t = 47,
  kImage3d_t = 48,
  kError = 49,
};

enum class TypeSpecifierWidth : int {
  kUnspecified = 0,
  kShort = 1,
  kLong = 2,
  kLongLong = 3,
};

enum class TypeSpecifiersPipe : int {
  kUnspecified = 0,
  kPipe = 1,
};

enum class TypeTrait : unsigned int {
  kIsInterfaceClass = 0,
  kIsSealed = 1,
  kIsDestructible = 2,
  kIsTriviallyDestructible = 3,
  kIsNothrowDestructible = 4,
  kHasNothrowMoveAssign = 5,
  kHasTrivialMoveAssign = 6,
  kHasTrivialMoveConstructor = 7,
  kHasNothrowAssign = 8,
  kHasNothrowCopy = 9,
  kHasNothrowConstructor = 10,
  kHasTrivialAssign = 11,
  kHasTrivialCopy = 12,
  kHasTrivialDefaultConstructor = 13,
  kHasTrivialDestructor = 14,
  kHasVirtualDestructor = 15,
  kIsAbstract = 16,
  kIsAggregate = 17,
  kIsClass = 18,
  kIsEmpty = 19,
  kIsEnum = 20,
  kIsFinal = 21,
  kIsLiteral = 22,
  kIsPOD = 23,
  kIsPolymorphic = 24,
  kIsStandardLayout = 25,
  kIsTrivial = 26,
  kIsTriviallyCopyable = 27,
  kIsUnion = 28,
  kHasUniqueObjectRepresentations = 29,
  kIsArithmetic = 30,
  kIsFloatingPoint = 31,
  kIsIntegral = 32,
  kIsCompleteType = 33,
  kIsVoid = 34,
  kIsArray = 35,
  kIsFunction = 36,
  kIsReference = 37,
  kIsLvalueReference = 38,
  kIsRvalueReference = 39,
  kIsFundamental = 40,
  kIsObject = 41,
  kIsScalar = 42,
  kIsCompound = 43,
  kIsPointer = 44,
  kIsMemberObjectPointer = 45,
  kIsMemberFunctionPointer = 46,
  kIsMemberPointer = 47,
  kIsConst = 48,
  kIsVolatile = 49,
  kIsSigned = 50,
  kIsUnsigned = 51,
  kTypeCompatible = 52,
  kIsNothrowAssignable = 53,
  kIsAssignable = 54,
  kIsBaseOf = 55,
  kIsConvertibleTo = 56,
  kIsTriviallyAssignable = 57,
  kReferenceBindsToTemporary = 58,
  kIsSame = 59,
  kIsConvertible = 60,
  kIsConstructible = 61,
  kIsNothrowConstructible = 62,
  kIsTriviallyConstructible = 63,
};

enum class UTTKind : unsigned int {
  kEnumUnderlyingType = 0,
};

enum class UnaryExprOrTypeTrait : unsigned int {
  kSizeOf = 0,
  kAlignOf = 1,
  kPreferredAlignOf = 2,
  kVecStep = 3,
  kOpenMPRequiredSimdAlign = 4,
};

enum class UnaryOperatorKind : unsigned int {
  kPostInc = 0,
  kPostDec = 1,
  kPreInc = 2,
  kPreDec = 3,
  kAddrOf = 4,
  kDeref = 5,
  kPlus = 6,
  kMinus = 7,
  kNot = 8,
  kLNot = 9,
  kReal = 10,
  kImag = 11,
  kExtension = 12,
  kCoawait = 13,
};

enum class ValueKind : unsigned int {
  kNone = 0,
  kIndeterminate = 1,
  kInt = 2,
  kFloat = 3,
  kFixedPoint = 4,
  kComplexInt = 5,
  kComplexFloat = 6,
  kLValue = 7,
  kVector = 8,
  kArray = 9,
  kStruct = 10,
  kUnion = 11,
  kMemberPointer = 12,
  kAddrLabelDiff = 13,
};

enum class VariableCaptureKind : unsigned int {
  kThis = 0,
  kByRef = 1,
  kByCopy = 2,
  kVLAType = 3,
};

enum class VectorKind : unsigned int {
  kGenericVector = 0,
  kAltiVecVector = 1,
  kAltiVecPixel = 2,
  kAltiVecBool = 3,
  kNeonVector = 4,
  kNeonPolyVector = 5,
  kSveFixedLengthDataVector = 6,
  kSveFixedLengthPredicateVector = 7,
};

enum class VectorLibrary : unsigned int {
  kNoLibrary = 0,
  kAccelerate = 1,
  kLIBMVEC = 2,
  kMASSV = 3,
  kSVML = 4,
};

enum class Visibility : unsigned int {
  kHiddenVisibility = 0,
  kProtectedVisibility = 1,
  kDefaultVisibility = 2,
};

enum class VisibilityType : unsigned int {
  kDefault = 0,
  kHidden = 1,
  kProtected = 2,
};

enum class IsModifiableLvalueResult : unsigned int {
  kValid = 0,
  kNotObjectType = 1,
  kIncompleteVoidType = 2,
  kDuplicateVectorComponents = 3,
  kInvalidExpression = 4,
  kLValueCast = 5,
  kIncompleteType = 6,
  kConstQualified = 7,
  kConstQualifiedField = 8,
  kConstAddrSpace = 9,
  kArrayType = 10,
  kNoSetterProperty = 11,
  kMemberFunction = 12,
  kSubObjCPropertySetting = 13,
  kInvalidMessageExpression = 14,
  kClassTemporary = 15,
  kArrayTemporary = 16,
};

#define PASTA_FOR_EACH_STMT_KIND(m) \
    m(GCCAsmStmt) \
    m(MSAsmStmt) \
    m(BreakStmt) \
    m(CXXCatchStmt) \
    m(CXXForRangeStmt) \
    m(CXXTryStmt) \
    m(CapturedStmt) \
    m(CompoundStmt) \
    m(ContinueStmt) \
    m(CoreturnStmt) \
    m(CoroutineBodyStmt) \
    m(DeclStmt) \
    m(DoStmt) \
    m(ForStmt) \
    m(GotoStmt) \
    m(IfStmt) \
    m(IndirectGotoStmt) \
    m(MSDependentExistsStmt) \
    m(NullStmt) \
    m(OMPAtomicDirective) \
    m(OMPBarrierDirective) \
    m(OMPCancelDirective) \
    m(OMPCancellationPointDirective) \
    m(OMPCriticalDirective) \
    m(OMPDepobjDirective) \
    m(OMPFlushDirective) \
    m(OMPDistributeDirective) \
    m(OMPDistributeParallelForDirective) \
    m(OMPDistributeParallelForSimdDirective) \
    m(OMPDistributeSimdDirective) \
    m(OMPForDirective) \
    m(OMPForSimdDirective) \
    m(OMPMasterTaskLoopDirective) \
    m(OMPMasterTaskLoopSimdDirective) \
    m(OMPParallelForDirective) \
    m(OMPParallelForSimdDirective) \
    m(OMPParallelMasterTaskLoopDirective) \
    m(OMPParallelMasterTaskLoopSimdDirective) \
    m(OMPSimdDirective) \
    m(OMPTargetParallelForSimdDirective) \
    m(OMPTargetSimdDirective) \
    m(OMPTargetTeamsDistributeDirective) \
    m(OMPTargetTeamsDistributeParallelForDirective) \
    m(OMPTargetTeamsDistributeParallelForSimdDirective) \
    m(OMPTargetTeamsDistributeSimdDirective) \
    m(OMPTaskLoopDirective) \
    m(OMPTaskLoopSimdDirective) \
    m(OMPTeamsDistributeDirective) \
    m(OMPTeamsDistributeParallelForDirective) \
    m(OMPTeamsDistributeParallelForSimdDirective) \
    m(OMPTeamsDistributeSimdDirective) \
    m(OMPMasterDirective) \
    m(OMPOrderedDirective) \
    m(OMPParallelDirective) \
    m(OMPParallelMasterDirective) \
    m(OMPParallelSectionsDirective) \
    m(OMPScanDirective) \
    m(OMPSectionDirective) \
    m(OMPSectionsDirective) \
    m(OMPSingleDirective) \
    m(OMPTargetDataDirective) \
    m(OMPTargetDirective) \
    m(OMPTargetEnterDataDirective) \
    m(OMPTargetExitDataDirective) \
    m(OMPTargetParallelDirective) \
    m(OMPTargetParallelForDirective) \
    m(OMPTargetTeamsDirective) \
    m(OMPTargetUpdateDirective) \
    m(OMPTaskDirective) \
    m(OMPTaskgroupDirective) \
    m(OMPTaskwaitDirective) \
    m(OMPTaskyieldDirective) \
    m(OMPTeamsDirective) \
    m(ObjCAtCatchStmt) \
    m(ObjCAtFinallyStmt) \
    m(ObjCAtSynchronizedStmt) \
    m(ObjCAtThrowStmt) \
    m(ObjCAtTryStmt) \
    m(ObjCAutoreleasePoolStmt) \
    m(ObjCForCollectionStmt) \
    m(ReturnStmt) \
    m(SEHExceptStmt) \
    m(SEHFinallyStmt) \
    m(SEHLeaveStmt) \
    m(SEHTryStmt) \
    m(CaseStmt) \
    m(DefaultStmt) \
    m(SwitchStmt) \
    m(AttributedStmt) \
    m(BinaryConditionalOperator) \
    m(ConditionalOperator) \
    m(AddrLabelExpr) \
    m(ArrayInitIndexExpr) \
    m(ArrayInitLoopExpr) \
    m(ArraySubscriptExpr) \
    m(ArrayTypeTraitExpr) \
    m(AsTypeExpr) \
    m(AtomicExpr) \
    m(BinaryOperator) \
    m(CompoundAssignOperator) \
    m(BlockExpr) \
    m(CXXBindTemporaryExpr) \
    m(CXXBoolLiteralExpr) \
    m(CXXConstructExpr) \
    m(CXXTemporaryObjectExpr) \
    m(CXXDefaultArgExpr) \
    m(CXXDefaultInitExpr) \
    m(CXXDeleteExpr) \
    m(CXXDependentScopeMemberExpr) \
    m(CXXFoldExpr) \
    m(CXXInheritedCtorInitExpr) \
    m(CXXNewExpr) \
    m(CXXNoexceptExpr) \
    m(CXXNullPtrLiteralExpr) \
    m(CXXPseudoDestructorExpr) \
    m(CXXRewrittenBinaryOperator) \
    m(CXXScalarValueInitExpr) \
    m(CXXStdInitializerListExpr) \
    m(CXXThisExpr) \
    m(CXXThrowExpr) \
    m(CXXTypeidExpr) \
    m(CXXUnresolvedConstructExpr) \
    m(CXXUuidofExpr) \
    m(CallExpr) \
    m(CUDAKernelCallExpr) \
    m(CXXMemberCallExpr) \
    m(CXXOperatorCallExpr) \
    m(UserDefinedLiteral) \
    m(BuiltinBitCastExpr) \
    m(CStyleCastExpr) \
    m(CXXFunctionalCastExpr) \
    m(CXXAddrspaceCastExpr) \
    m(CXXConstCastExpr) \
    m(CXXDynamicCastExpr) \
    m(CXXReinterpretCastExpr) \
    m(CXXStaticCastExpr) \
    m(ObjCBridgedCastExpr) \
    m(ImplicitCastExpr) \
    m(CharacterLiteral) \
    m(ChooseExpr) \
    m(CompoundLiteralExpr) \
    m(ConceptSpecializationExpr) \
    m(ConvertVectorExpr) \
    m(CoawaitExpr) \
    m(CoyieldExpr) \
    m(DeclRefExpr) \
    m(DependentCoawaitExpr) \
    m(DependentScopeDeclRefExpr) \
    m(DesignatedInitExpr) \
    m(DesignatedInitUpdateExpr) \
    m(ExpressionTraitExpr) \
    m(ExtVectorElementExpr) \
    m(FixedPointLiteral) \
    m(FloatingLiteral) \
    m(ConstantExpr) \
    m(ExprWithCleanups) \
    m(FunctionParmPackExpr) \
    m(GNUNullExpr) \
    m(GenericSelectionExpr) \
    m(ImaginaryLiteral) \
    m(ImplicitValueInitExpr) \
    m(InitListExpr) \
    m(IntegerLiteral) \
    m(LambdaExpr) \
    m(MSPropertyRefExpr) \
    m(MSPropertySubscriptExpr) \
    m(MaterializeTemporaryExpr) \
    m(MatrixSubscriptExpr) \
    m(MemberExpr) \
    m(NoInitExpr) \
    m(OMPArraySectionExpr) \
    m(OMPArrayShapingExpr) \
    m(OMPIteratorExpr) \
    m(ObjCArrayLiteral) \
    m(ObjCAvailabilityCheckExpr) \
    m(ObjCBoolLiteralExpr) \
    m(ObjCBoxedExpr) \
    m(ObjCDictionaryLiteral) \
    m(ObjCEncodeExpr) \
    m(ObjCIndirectCopyRestoreExpr) \
    m(ObjCIsaExpr) \
    m(ObjCIvarRefExpr) \
    m(ObjCMessageExpr) \
    m(ObjCPropertyRefExpr) \
    m(ObjCProtocolExpr) \
    m(ObjCSelectorExpr) \
    m(ObjCStringLiteral) \
    m(ObjCSubscriptRefExpr) \
    m(OffsetOfExpr) \
    m(OpaqueValueExpr) \
    m(UnresolvedLookupExpr) \
    m(UnresolvedMemberExpr) \
    m(PackExpansionExpr) \
    m(ParenExpr) \
    m(ParenListExpr) \
    m(PredefinedExpr) \
    m(PseudoObjectExpr) \
    m(RecoveryExpr) \
    m(RequiresExpr) \
    m(ShuffleVectorExpr) \
    m(SizeOfPackExpr) \
    m(SourceLocExpr) \
    m(StmtExpr) \
    m(StringLiteral) \
    m(SubstNonTypeTemplateParmExpr) \
    m(SubstNonTypeTemplateParmPackExpr) \
    m(TypeTraitExpr) \
    m(TypoExpr) \
    m(UnaryExprOrTypeTraitExpr) \
    m(UnaryOperator) \
    m(VAArgExpr) \
    m(LabelStmt) \
    m(WhileStmt)

#define PASTA_FOR_EACH_TYPE_KIND(m) \
    m(Adjusted) \
    m(Decayed) \
    m(ConstantArray) \
    m(DependentSizedArray) \
    m(IncompleteArray) \
    m(VariableArray) \
    m(Atomic) \
    m(Attributed) \
    m(BlockPointer) \
    m(Builtin) \
    m(Complex) \
    m(Decltype) \
    m(Auto) \
    m(DeducedTemplateSpecialization) \
    m(DependentAddressSpace) \
    m(DependentExtInt) \
    m(DependentName) \
    m(DependentSizedExtVector) \
    m(DependentTemplateSpecialization) \
    m(DependentVector) \
    m(Elaborated) \
    m(ExtInt) \
    m(FunctionNoProto) \
    m(FunctionProto) \
    m(InjectedClassName) \
    m(MacroQualified) \
    m(ConstantMatrix) \
    m(DependentSizedMatrix) \
    m(MemberPointer) \
    m(ObjCObjectPointer) \
    m(ObjCObject) \
    m(ObjCInterface) \
    m(ObjCTypeParam) \
    m(PackExpansion) \
    m(Paren) \
    m(Pipe) \
    m(Pointer) \
    m(LValueReference) \
    m(RValueReference) \
    m(SubstTemplateTypeParmPack) \
    m(SubstTemplateTypeParm) \
    m(Enum) \
    m(Record) \
    m(TemplateSpecialization) \
    m(TemplateTypeParm) \
    m(TypeOfExpr) \
    m(TypeOf) \
    m(Typedef) \
    m(UnaryTransform) \
    m(UnresolvedUsing) \
    m(Vector) \
    m(ExtVector)

class AbstractConditionalOperator;
class AccessSpecDecl;
class AddrLabelExpr;
class AdjustedType;
class ArrayInitIndexExpr;
class ArrayInitLoopExpr;
class ArraySubscriptExpr;
class ArrayType;
class ArrayTypeTraitExpr;
class AsTypeExpr;
class AsmStmt;
class AtomicExpr;
class AtomicType;
class AttributedStmt;
class AttributedType;
class AutoType;
class BinaryConditionalOperator;
class BinaryOperator;
class BindingDecl;
class BlockDecl;
class BlockExpr;
class BlockPointerType;
class BreakStmt;
class BuiltinBitCastExpr;
class BuiltinTemplateDecl;
class BuiltinType;
class CStyleCastExpr;
class CUDAKernelCallExpr;
class CXXAddrspaceCastExpr;
class CXXBindTemporaryExpr;
class CXXBoolLiteralExpr;
class CXXCatchStmt;
class CXXConstCastExpr;
class CXXConstructExpr;
class CXXConstructorDecl;
class CXXConversionDecl;
class CXXDeductionGuideDecl;
class CXXDefaultArgExpr;
class CXXDefaultInitExpr;
class CXXDeleteExpr;
class CXXDependentScopeMemberExpr;
class CXXDestructorDecl;
class CXXDynamicCastExpr;
class CXXFoldExpr;
class CXXForRangeStmt;
class CXXFunctionalCastExpr;
class CXXInheritedCtorInitExpr;
class CXXMemberCallExpr;
class CXXMethodDecl;
class CXXNamedCastExpr;
class CXXNewExpr;
class CXXNoexceptExpr;
class CXXNullPtrLiteralExpr;
class CXXOperatorCallExpr;
class CXXPseudoDestructorExpr;
class CXXRecordDecl;
class CXXReinterpretCastExpr;
class CXXRewrittenBinaryOperator;
class CXXScalarValueInitExpr;
class CXXStaticCastExpr;
class CXXStdInitializerListExpr;
class CXXTemporaryObjectExpr;
class CXXThisExpr;
class CXXThrowExpr;
class CXXTryStmt;
class CXXTypeidExpr;
class CXXUnresolvedConstructExpr;
class CXXUuidofExpr;
class CallExpr;
class CapturedDecl;
class CapturedStmt;
class CaseStmt;
class CastExpr;
class CharacterLiteral;
class ChooseExpr;
class ClassScopeFunctionSpecializationDecl;
class ClassTemplateDecl;
class ClassTemplatePartialSpecializationDecl;
class ClassTemplateSpecializationDecl;
class CoawaitExpr;
class ComplexType;
class CompoundAssignOperator;
class CompoundLiteralExpr;
class CompoundStmt;
class ConceptDecl;
class ConceptSpecializationExpr;
class ConditionalOperator;
class ConstantArrayType;
class ConstantExpr;
class ConstantMatrixType;
class ConstructorUsingShadowDecl;
class ContinueStmt;
class ConvertVectorExpr;
class CoreturnStmt;
class CoroutineBodyStmt;
class CoroutineSuspendExpr;
class CoyieldExpr;
class DecayedType;
class Decl;
class DeclContext;
class DeclRefExpr;
class DeclStmt;
class DeclaratorDecl;
class DecltypeType;
class DecompositionDecl;
class DeducedTemplateSpecializationType;
class DeducedType;
class DefaultStmt;
class DependentAddressSpaceType;
class DependentCoawaitExpr;
class DependentExtIntType;
class DependentNameType;
class DependentScopeDeclRefExpr;
class DependentSizedArrayType;
class DependentSizedExtVectorType;
class DependentSizedMatrixType;
class DependentTemplateSpecializationType;
class DependentVectorType;
class DesignatedInitExpr;
class DesignatedInitUpdateExpr;
class DoStmt;
class ElaboratedType;
class EmptyDecl;
class EnumConstantDecl;
class EnumDecl;
class EnumType;
class ExplicitCastExpr;
class ExportDecl;
class Expr;
class ExprWithCleanups;
class ExpressionTraitExpr;
class ExtIntType;
class ExtVectorElementExpr;
class ExtVectorType;
class ExternCContextDecl;
class FieldDecl;
class FileScopeAsmDecl;
class FixedPointLiteral;
class FloatingLiteral;
class ForStmt;
class FriendDecl;
class FriendTemplateDecl;
class FullExpr;
class FunctionDecl;
class FunctionNoProtoType;
class FunctionParmPackExpr;
class FunctionProtoType;
class FunctionTemplateDecl;
class FunctionTemplateSpecializationInfo;
class FunctionType;
class GCCAsmStmt;
class GNUNullExpr;
class GenericSelectionExpr;
class GotoStmt;
class IfStmt;
class ImaginaryLiteral;
class ImplicitCastExpr;
class ImplicitParamDecl;
class ImplicitValueInitExpr;
class ImportDecl;
class IncompleteArrayType;
class IndirectFieldDecl;
class IndirectGotoStmt;
class InitListExpr;
class InjectedClassNameType;
class IntegerLiteral;
class LValueReferenceType;
class LabelDecl;
class LabelStmt;
class LambdaExpr;
class LifetimeExtendedTemporaryDecl;
class LinkageSpecDecl;
class MSAsmStmt;
class MSDependentExistsStmt;
class MSGuidDecl;
class MSPropertyDecl;
class MSPropertyRefExpr;
class MSPropertySubscriptExpr;
class MacroQualifiedType;
class MaterializeTemporaryExpr;
class MatrixSubscriptExpr;
class MatrixType;
class MemberExpr;
class MemberPointerType;
class NamedDecl;
class NamespaceAliasDecl;
class NamespaceDecl;
class NoInitExpr;
class NonTypeTemplateParmDecl;
class NullStmt;
class OMPAllocateDecl;
class OMPArraySectionExpr;
class OMPArrayShapingExpr;
class OMPAtomicDirective;
class OMPBarrierDirective;
class OMPCancelDirective;
class OMPCancellationPointDirective;
class OMPCapturedExprDecl;
class OMPCriticalDirective;
class OMPDeclareMapperDecl;
class OMPDeclareReductionDecl;
class OMPDepobjDirective;
class OMPDistributeDirective;
class OMPDistributeParallelForDirective;
class OMPDistributeParallelForSimdDirective;
class OMPDistributeSimdDirective;
class OMPExecutableDirective;
class OMPFlushDirective;
class OMPForDirective;
class OMPForSimdDirective;
class OMPIteratorExpr;
class OMPLoopDirective;
class OMPMasterDirective;
class OMPMasterTaskLoopDirective;
class OMPMasterTaskLoopSimdDirective;
class OMPOrderedDirective;
class OMPParallelDirective;
class OMPParallelForDirective;
class OMPParallelForSimdDirective;
class OMPParallelMasterDirective;
class OMPParallelMasterTaskLoopDirective;
class OMPParallelMasterTaskLoopSimdDirective;
class OMPParallelSectionsDirective;
class OMPRequiresDecl;
class OMPScanDirective;
class OMPSectionDirective;
class OMPSectionsDirective;
class OMPSimdDirective;
class OMPSingleDirective;
class OMPTargetDataDirective;
class OMPTargetDirective;
class OMPTargetEnterDataDirective;
class OMPTargetExitDataDirective;
class OMPTargetParallelDirective;
class OMPTargetParallelForDirective;
class OMPTargetParallelForSimdDirective;
class OMPTargetSimdDirective;
class OMPTargetTeamsDirective;
class OMPTargetTeamsDistributeDirective;
class OMPTargetTeamsDistributeParallelForDirective;
class OMPTargetTeamsDistributeParallelForSimdDirective;
class OMPTargetTeamsDistributeSimdDirective;
class OMPTargetUpdateDirective;
class OMPTaskDirective;
class OMPTaskLoopDirective;
class OMPTaskLoopSimdDirective;
class OMPTaskgroupDirective;
class OMPTaskwaitDirective;
class OMPTaskyieldDirective;
class OMPTeamsDirective;
class OMPTeamsDistributeDirective;
class OMPTeamsDistributeParallelForDirective;
class OMPTeamsDistributeParallelForSimdDirective;
class OMPTeamsDistributeSimdDirective;
class OMPThreadPrivateDecl;
class ObjCArrayLiteral;
class ObjCAtCatchStmt;
class ObjCAtDefsFieldDecl;
class ObjCAtFinallyStmt;
class ObjCAtSynchronizedStmt;
class ObjCAtThrowStmt;
class ObjCAtTryStmt;
class ObjCAutoreleasePoolStmt;
class ObjCAvailabilityCheckExpr;
class ObjCBoolLiteralExpr;
class ObjCBoxedExpr;
class ObjCBridgedCastExpr;
class ObjCCategoryDecl;
class ObjCCategoryImplDecl;
class ObjCCompatibleAliasDecl;
class ObjCContainerDecl;
class ObjCDictionaryLiteral;
class ObjCEncodeExpr;
class ObjCForCollectionStmt;
class ObjCImplDecl;
class ObjCImplementationDecl;
class ObjCIndirectCopyRestoreExpr;
class ObjCInterfaceDecl;
class ObjCInterfaceType;
class ObjCIsaExpr;
class ObjCIvarDecl;
class ObjCIvarRefExpr;
class ObjCMessageExpr;
class ObjCMethodDecl;
class ObjCObjectPointerType;
class ObjCObjectType;
class ObjCPropertyDecl;
class ObjCPropertyImplDecl;
class ObjCPropertyRefExpr;
class ObjCProtocolDecl;
class ObjCProtocolExpr;
class ObjCSelectorExpr;
class ObjCStringLiteral;
class ObjCSubscriptRefExpr;
class ObjCTypeParamDecl;
class ObjCTypeParamType;
class OffsetOfExpr;
class OpaqueValueExpr;
class OverloadExpr;
class PackExpansionExpr;
class PackExpansionType;
class ParenExpr;
class ParenListExpr;
class ParenType;
class ParmVarDecl;
class PipeType;
class PointerType;
class PragmaCommentDecl;
class PragmaDetectMismatchDecl;
class PredefinedExpr;
class PseudoObjectExpr;
class QualType;
class RValueReferenceType;
class RecordDecl;
class RecordType;
class RecoveryExpr;
class RedeclarableTemplateDecl;
class ReferenceType;
class RequiresExpr;
class RequiresExprBodyDecl;
class ReturnStmt;
class SEHExceptStmt;
class SEHFinallyStmt;
class SEHLeaveStmt;
class SEHTryStmt;
class ShuffleVectorExpr;
class SizeOfPackExpr;
class SourceLocExpr;
class StaticAssertDecl;
class Stmt;
class StmtExpr;
class StringLiteral;
class SubstNonTypeTemplateParmExpr;
class SubstNonTypeTemplateParmPackExpr;
class SubstTemplateTypeParmPackType;
class SubstTemplateTypeParmType;
class SwitchCase;
class SwitchStmt;
class TagDecl;
class TagType;
class TemplateArgument;
class TemplateDecl;
class TemplateParamObjectDecl;
class TemplateSpecializationType;
class TemplateTemplateParmDecl;
class TemplateTypeParmDecl;
class TemplateTypeParmType;
class TranslationUnitDecl;
class Type;
class TypeAliasDecl;
class TypeAliasTemplateDecl;
class TypeDecl;
class TypeOfExprType;
class TypeOfType;
class TypeSourceInfo;
class TypeTraitExpr;
class TypeWithKeyword;
class TypedefDecl;
class TypedefNameDecl;
class TypedefType;
class TypoExpr;
class UnaryExprOrTypeTraitExpr;
class UnaryOperator;
class UnaryTransformType;
class UnresolvedLookupExpr;
class UnresolvedMemberExpr;
class UnresolvedUsingType;
class UnresolvedUsingTypenameDecl;
class UnresolvedUsingValueDecl;
class UserDefinedLiteral;
class UsingDecl;
class UsingDirectiveDecl;
class UsingPackDecl;
class UsingShadowDecl;
class VAArgExpr;
class ValueDecl;
class ValueStmt;
class VarDecl;
class VarTemplateDecl;
class VarTemplatePartialSpecializationDecl;
class VarTemplateSpecializationDecl;
class VariableArrayType;
class VectorType;
class WhileStmt;
class OMPDeclarativeDirectiveDecl;
class OMPDeclarativeDirectiveValueDecl;
}  // namespace pasta