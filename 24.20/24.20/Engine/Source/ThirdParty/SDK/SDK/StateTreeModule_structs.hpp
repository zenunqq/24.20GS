#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

enum class EStateTreeLinkerStatus : uint8
{
	Succeeded                                = 0,
	Failed                                   = 1,
	EStateTreeLinkerStatus_MAX               = 2,
};

enum class EStateTreeBlueprintPropertyCategory : uint8
{
	NotSet                                   = 0,
	Input                                    = 1,
	Parameter                                = 2,
	Output                                   = 3,
	ContextObject                            = 4,
	EStateTreeBlueprintPropertyCategory_MAX  = 5,
};

enum class EStateTreeLoopEvents : uint8
{
	Next                                     = 0,
	Break                                    = 1,
	EStateTreeLoopEvents_MAX                 = 2,
};

enum class EStateTreeBindableStructSource : uint8
{
	Context                                  = 0,
	Parameter                                = 1,
	Evaluator                                = 2,
	GlobalTask                               = 3,
	State                                    = 4,
	Task                                     = 5,
	Condition                                = 6,
	EStateTreeBindableStructSource_MAX       = 7,
};

enum class EStateTreePropertyAccessType : uint8
{
	Offset                                   = 0,
	Object                                   = 1,
	WeakObject                               = 2,
	SoftObject                               = 3,
	ObjectInstance                           = 4,
	StructInstance                           = 5,
	IndexArray                               = 6,
	EStateTreePropertyAccessType_MAX         = 7,
};

enum class EStateTreePropertyCopyType : uint8
{
	None                                     = 0,
	CopyPlain                                = 1,
	CopyComplex                              = 2,
	CopyBool                                 = 3,
	CopyStruct                               = 4,
	CopyObject                               = 5,
	CopyName                                 = 6,
	CopyFixedArray                           = 7,
	StructReference                          = 8,
	PromoteBoolToByte                        = 9,
	PromoteBoolToInt32                       = 10,
	PromoteBoolToUInt32                      = 11,
	PromoteBoolToInt64                       = 12,
	PromoteBoolToFloat                       = 13,
	PromoteBoolToDouble                      = 14,
	PromoteByteToInt32                       = 15,
	PromoteByteToUInt32                      = 16,
	PromoteByteToInt64                       = 17,
	PromoteByteToFloat                       = 18,
	PromoteByteToDouble                      = 19,
	PromoteInt32ToInt64                      = 20,
	PromoteInt32ToFloat                      = 21,
	PromoteInt32ToDouble                     = 22,
	PromoteUInt32ToInt64                     = 23,
	PromoteUInt32ToFloat                     = 24,
	PromoteUInt32ToDouble                    = 25,
	PromoteFloatToInt32                      = 26,
	PromoteFloatToInt64                      = 27,
	PromoteFloatToDouble                     = 28,
	DemoteDoubleToInt32                      = 29,
	DemoteDoubleToInt64                      = 30,
	DemoteDoubleToFloat                      = 31,
	EStateTreePropertyCopyType_MAX           = 32,
};

enum class EStateTreeRunStatus : uint8
{
	Running                                  = 0,
	Failed                                   = 1,
	Succeeded                                = 2,
	Unset                                    = 3,
	EStateTreeRunStatus_MAX                  = 4,
};

enum class EStateTreeStateChangeType : uint8
{
	None                                     = 0,
	Changed                                  = 1,
	Sustained                                = 2,
	EStateTreeStateChangeType_MAX            = 3,
};

enum class EStateTreeTransitionType : uint8
{
	None                                     = 0,
	Succeeded                                = 1,
	Failed                                   = 2,
	GotoState                                = 3,
	NextState                                = 4,
	NotSet                                   = 5,
	EStateTreeTransitionType_MAX             = 6,
};

enum class EStateTreeConditionOperand : uint8
{
	Copy                                     = 0,
	And                                      = 1,
	Or                                       = 2,
	EStateTreeConditionOperand_MAX           = 3,
};

enum class EStateTreeStateType : uint8
{
	State                                    = 0,
	Group                                    = 1,
	Linked                                   = 2,
	Subtree                                  = 3,
	EStateTreeStateType_MAX                  = 4,
};

enum class EStateTreeTransitionTrigger : uint8
{
	None                                     = 0,
	OnStateCompleted                         = 3,
	OnStateSucceeded                         = 1,
	OnStateFailed                            = 2,
	OnTick                                   = 4,
	OnEvent                                  = 8,
	MAX                                      = 9,
};

enum class EStateTreeTransitionPriority : uint8
{
	None                                     = 0,
	Normal                                   = 1,
	Medium                                   = 2,
	High                                     = 3,
	Critical                                 = 4,
	EStateTreeTransitionPriority_MAX         = 5,
};

enum class EStateTreeExternalDataRequirement : uint8
{
	Required                                 = 0,
	Optional                                 = 1,
	EStateTreeExternalDataRequirement_MAX    = 2,
};

enum class EStateTreePropertyUsage : uint8
{
	Invalid                                  = 0,
	Context                                  = 1,
	Input                                    = 2,
	Parameter                                = 3,
	Output                                   = 4,
	EStateTreePropertyUsage_MAX              = 5,
};

struct FStateTreeStateHandle final
{
public:
	uint16                                        Index;
};
static_assert(alignof(FStateTreeStateHandle) == 0x000002, "Wrong alignment on FStateTreeStateHandle");
static_assert(sizeof(FStateTreeStateHandle) == 0x000002, "Wrong size on FStateTreeStateHandle");
static_assert(offsetof(FStateTreeStateHandle, Index) == 0x000000, "Member 'FStateTreeStateHandle::Index' has a wrong offset!");

struct FStateTreeActiveStates final
{
public:
	struct FStateTreeStateHandle                  States[0x8];
	uint8                                         NumStates;
	uint8                                         Pad_11[0x1];
};
static_assert(alignof(FStateTreeActiveStates) == 0x000002, "Wrong alignment on FStateTreeActiveStates");
static_assert(sizeof(FStateTreeActiveStates) == 0x000012, "Wrong size on FStateTreeActiveStates");
static_assert(offsetof(FStateTreeActiveStates, States) == 0x000000, "Member 'FStateTreeActiveStates::States' has a wrong offset!");
static_assert(offsetof(FStateTreeActiveStates, NumStates) == 0x000010, "Member 'FStateTreeActiveStates::NumStates' has a wrong offset!");

struct FStateTreeTransitionResult final
{
public:
	struct FStateTreeActiveStates                 CurrentActiveStates;
	EStateTreeRunStatus                           CurrentRunStatus;
	uint8                                         Pad_13[0x1];
	struct FStateTreeStateHandle                  SourceState;
	struct FStateTreeStateHandle                  TargetState;
	struct FStateTreeActiveStates                 NextActiveStates;
	struct FStateTreeStateHandle                  CurrentState;
	EStateTreeStateChangeType                     ChangeType;
	EStateTreeTransitionPriority                  Priority;
};
static_assert(alignof(FStateTreeTransitionResult) == 0x000002, "Wrong alignment on FStateTreeTransitionResult");
static_assert(sizeof(FStateTreeTransitionResult) == 0x00002E, "Wrong size on FStateTreeTransitionResult");
static_assert(offsetof(FStateTreeTransitionResult, CurrentActiveStates) == 0x000000, "Member 'FStateTreeTransitionResult::CurrentActiveStates' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, CurrentRunStatus) == 0x000012, "Member 'FStateTreeTransitionResult::CurrentRunStatus' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, SourceState) == 0x000014, "Member 'FStateTreeTransitionResult::SourceState' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, TargetState) == 0x000016, "Member 'FStateTreeTransitionResult::TargetState' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, NextActiveStates) == 0x000018, "Member 'FStateTreeTransitionResult::NextActiveStates' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, CurrentState) == 0x00002A, "Member 'FStateTreeTransitionResult::CurrentState' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, ChangeType) == 0x00002C, "Member 'FStateTreeTransitionResult::ChangeType' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionResult, Priority) == 0x00002D, "Member 'FStateTreeTransitionResult::Priority' has a wrong offset!");

struct FStateTreeAnyEnum final
{
public:
	uint32                                        Value;
	uint8                                         Pad_4[0x4];
	class UEnum*                                  Enum;
};
static_assert(alignof(FStateTreeAnyEnum) == 0x000008, "Wrong alignment on FStateTreeAnyEnum");
static_assert(sizeof(FStateTreeAnyEnum) == 0x000010, "Wrong size on FStateTreeAnyEnum");
static_assert(offsetof(FStateTreeAnyEnum, Value) == 0x000000, "Member 'FStateTreeAnyEnum::Value' has a wrong offset!");
static_assert(offsetof(FStateTreeAnyEnum, Enum) == 0x000008, "Member 'FStateTreeAnyEnum::Enum' has a wrong offset!");

struct FStateTreeIndex16 final
{
public:
	uint16                                        Value;
};
static_assert(alignof(FStateTreeIndex16) == 0x000002, "Wrong alignment on FStateTreeIndex16");
static_assert(sizeof(FStateTreeIndex16) == 0x000002, "Wrong size on FStateTreeIndex16");
static_assert(offsetof(FStateTreeIndex16, Value) == 0x000000, "Member 'FStateTreeIndex16::Value' has a wrong offset!");

struct alignas(0x08) FStateTreeNodeBase
{
public:
	uint8                                         Pad_0[0x8];
	class FName                                   Name;
	struct FStateTreeIndex16                      BindingsBatch;
	struct FStateTreeIndex16                      DataViewIndex;
	struct FStateTreeIndex16                      InstanceIndex;
	uint8                                         bInstanceIsObject : 1;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FStateTreeNodeBase) == 0x000008, "Wrong alignment on FStateTreeNodeBase");
static_assert(sizeof(FStateTreeNodeBase) == 0x000018, "Wrong size on FStateTreeNodeBase");
static_assert(offsetof(FStateTreeNodeBase, Name) == 0x000008, "Member 'FStateTreeNodeBase::Name' has a wrong offset!");
static_assert(offsetof(FStateTreeNodeBase, BindingsBatch) == 0x00000C, "Member 'FStateTreeNodeBase::BindingsBatch' has a wrong offset!");
static_assert(offsetof(FStateTreeNodeBase, DataViewIndex) == 0x00000E, "Member 'FStateTreeNodeBase::DataViewIndex' has a wrong offset!");
static_assert(offsetof(FStateTreeNodeBase, InstanceIndex) == 0x000010, "Member 'FStateTreeNodeBase::InstanceIndex' has a wrong offset!");

struct FStateTreeTaskBase : public FStateTreeNodeBase
{
public:
	uint8                                         Pad_18[0x8];
};
static_assert(alignof(FStateTreeTaskBase) == 0x000008, "Wrong alignment on FStateTreeTaskBase");
static_assert(sizeof(FStateTreeTaskBase) == 0x000020, "Wrong size on FStateTreeTaskBase");

struct FStateTreeBlueprintTaskWrapper final : public FStateTreeTaskBase
{
public:
	TSubclassOf<class UStateTreeTaskBlueprintBase> TaskClass;
};
static_assert(alignof(FStateTreeBlueprintTaskWrapper) == 0x000008, "Wrong alignment on FStateTreeBlueprintTaskWrapper");
static_assert(sizeof(FStateTreeBlueprintTaskWrapper) == 0x000028, "Wrong size on FStateTreeBlueprintTaskWrapper");
static_assert(offsetof(FStateTreeBlueprintTaskWrapper, TaskClass) == 0x000020, "Member 'FStateTreeBlueprintTaskWrapper::TaskClass' has a wrong offset!");

struct FStateTreeConditionBase : public FStateTreeNodeBase
{
public:
	EStateTreeConditionOperand                    Operand;
	int8                                          DeltaIndent;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FStateTreeConditionBase) == 0x000008, "Wrong alignment on FStateTreeConditionBase");
static_assert(sizeof(FStateTreeConditionBase) == 0x000020, "Wrong size on FStateTreeConditionBase");
static_assert(offsetof(FStateTreeConditionBase, Operand) == 0x000018, "Member 'FStateTreeConditionBase::Operand' has a wrong offset!");
static_assert(offsetof(FStateTreeConditionBase, DeltaIndent) == 0x000019, "Member 'FStateTreeConditionBase::DeltaIndent' has a wrong offset!");

struct FStateTreeBindableStructDesc final
{
public:
	class UStruct*                                Struct;
	class FName                                   Name;
	EStateTreeBindableStructSource                DataSource;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FStateTreeBindableStructDesc) == 0x000008, "Wrong alignment on FStateTreeBindableStructDesc");
static_assert(sizeof(FStateTreeBindableStructDesc) == 0x000010, "Wrong size on FStateTreeBindableStructDesc");
static_assert(offsetof(FStateTreeBindableStructDesc, Struct) == 0x000000, "Member 'FStateTreeBindableStructDesc::Struct' has a wrong offset!");
static_assert(offsetof(FStateTreeBindableStructDesc, Name) == 0x000008, "Member 'FStateTreeBindableStructDesc::Name' has a wrong offset!");
static_assert(offsetof(FStateTreeBindableStructDesc, DataSource) == 0x00000C, "Member 'FStateTreeBindableStructDesc::DataSource' has a wrong offset!");

struct FStateTreePropertyIndirection final
{
public:
	struct FStateTreeIndex16                      ArrayIndex;
	uint16                                        Offset;
	struct FStateTreeIndex16                      NextIndex;
	EStateTreePropertyAccessType                  Type;
	uint8                                         Pad_7[0x1];
	class UStruct*                                InstanceStruct;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FStateTreePropertyIndirection) == 0x000008, "Wrong alignment on FStateTreePropertyIndirection");
static_assert(sizeof(FStateTreePropertyIndirection) == 0x000018, "Wrong size on FStateTreePropertyIndirection");
static_assert(offsetof(FStateTreePropertyIndirection, ArrayIndex) == 0x000000, "Member 'FStateTreePropertyIndirection::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyIndirection, Offset) == 0x000002, "Member 'FStateTreePropertyIndirection::Offset' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyIndirection, NextIndex) == 0x000004, "Member 'FStateTreePropertyIndirection::NextIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyIndirection, Type) == 0x000006, "Member 'FStateTreePropertyIndirection::Type' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyIndirection, InstanceStruct) == 0x000008, "Member 'FStateTreePropertyIndirection::InstanceStruct' has a wrong offset!");

struct FStateTreePropertyCopy final
{
public:
	struct FStateTreePropertyIndirection          SourceIndirection;
	struct FStateTreePropertyIndirection          TargetIndirection;
	uint8                                         Pad_30[0x10];
	int32                                         CopySize;
	struct FStateTreeIndex16                      SourceStructIndex;
	EStateTreePropertyCopyType                    Type;
	uint8                                         Pad_47[0x1];
};
static_assert(alignof(FStateTreePropertyCopy) == 0x000008, "Wrong alignment on FStateTreePropertyCopy");
static_assert(sizeof(FStateTreePropertyCopy) == 0x000048, "Wrong size on FStateTreePropertyCopy");
static_assert(offsetof(FStateTreePropertyCopy, SourceIndirection) == 0x000000, "Member 'FStateTreePropertyCopy::SourceIndirection' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyCopy, TargetIndirection) == 0x000018, "Member 'FStateTreePropertyCopy::TargetIndirection' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyCopy, CopySize) == 0x000040, "Member 'FStateTreePropertyCopy::CopySize' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyCopy, SourceStructIndex) == 0x000044, "Member 'FStateTreePropertyCopy::SourceStructIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyCopy, Type) == 0x000046, "Member 'FStateTreePropertyCopy::Type' has a wrong offset!");

struct FStateTreePropertyCopyBatch final
{
public:
	struct FStateTreeBindableStructDesc           TargetStruct;
	uint16                                        BindingsBegin;
	uint16                                        BindingsEnd;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FStateTreePropertyCopyBatch) == 0x000008, "Wrong alignment on FStateTreePropertyCopyBatch");
static_assert(sizeof(FStateTreePropertyCopyBatch) == 0x000018, "Wrong size on FStateTreePropertyCopyBatch");
static_assert(offsetof(FStateTreePropertyCopyBatch, TargetStruct) == 0x000000, "Member 'FStateTreePropertyCopyBatch::TargetStruct' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyCopyBatch, BindingsBegin) == 0x000010, "Member 'FStateTreePropertyCopyBatch::BindingsBegin' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyCopyBatch, BindingsEnd) == 0x000012, "Member 'FStateTreePropertyCopyBatch::BindingsEnd' has a wrong offset!");

struct FStateTreePropertyPathSegment final
{
public:
	class FName                                   Name;
	int32                                         ArrayIndex;
	class UStruct*                                InstanceStruct;
};
static_assert(alignof(FStateTreePropertyPathSegment) == 0x000008, "Wrong alignment on FStateTreePropertyPathSegment");
static_assert(sizeof(FStateTreePropertyPathSegment) == 0x000010, "Wrong size on FStateTreePropertyPathSegment");
static_assert(offsetof(FStateTreePropertyPathSegment, Name) == 0x000000, "Member 'FStateTreePropertyPathSegment::Name' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyPathSegment, ArrayIndex) == 0x000004, "Member 'FStateTreePropertyPathSegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyPathSegment, InstanceStruct) == 0x000008, "Member 'FStateTreePropertyPathSegment::InstanceStruct' has a wrong offset!");

struct FStateTreePropertyPath final
{
public:
	TArray<struct FStateTreePropertyPathSegment>  Segments;
};
static_assert(alignof(FStateTreePropertyPath) == 0x000008, "Wrong alignment on FStateTreePropertyPath");
static_assert(sizeof(FStateTreePropertyPath) == 0x000010, "Wrong size on FStateTreePropertyPath");
static_assert(offsetof(FStateTreePropertyPath, Segments) == 0x000000, "Member 'FStateTreePropertyPath::Segments' has a wrong offset!");

struct FStateTreePropertyPathBinding final
{
public:
	struct FStateTreePropertyPath                 SourcePropertyPath;
	struct FStateTreePropertyPath                 TargetPropertyPath;
	struct FStateTreeIndex16                      CompiledSourceStructIndex;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FStateTreePropertyPathBinding) == 0x000008, "Wrong alignment on FStateTreePropertyPathBinding");
static_assert(sizeof(FStateTreePropertyPathBinding) == 0x000028, "Wrong size on FStateTreePropertyPathBinding");
static_assert(offsetof(FStateTreePropertyPathBinding, SourcePropertyPath) == 0x000000, "Member 'FStateTreePropertyPathBinding::SourcePropertyPath' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyPathBinding, TargetPropertyPath) == 0x000010, "Member 'FStateTreePropertyPathBinding::TargetPropertyPath' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyPathBinding, CompiledSourceStructIndex) == 0x000020, "Member 'FStateTreePropertyPathBinding::CompiledSourceStructIndex' has a wrong offset!");

struct FStateTreePropertyBindings final
{
public:
	TArray<struct FStateTreeBindableStructDesc>   SourceStructs;
	TArray<struct FStateTreePropertyCopyBatch>    CopyBatches;
	TArray<struct FStateTreePropertyPathBinding>  PropertyPathBindings;
	TArray<struct FStateTreePropertyCopy>         PropertyCopies;
	TArray<struct FStateTreePropertyIndirection>  PropertyIndirections;
	uint8                                         Pad_50[0x8];
};
static_assert(alignof(FStateTreePropertyBindings) == 0x000008, "Wrong alignment on FStateTreePropertyBindings");
static_assert(sizeof(FStateTreePropertyBindings) == 0x000058, "Wrong size on FStateTreePropertyBindings");
static_assert(offsetof(FStateTreePropertyBindings, SourceStructs) == 0x000000, "Member 'FStateTreePropertyBindings::SourceStructs' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBindings, CopyBatches) == 0x000010, "Member 'FStateTreePropertyBindings::CopyBatches' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBindings, PropertyPathBindings) == 0x000020, "Member 'FStateTreePropertyBindings::PropertyPathBindings' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBindings, PropertyCopies) == 0x000030, "Member 'FStateTreePropertyBindings::PropertyCopies' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBindings, PropertyIndirections) == 0x000040, "Member 'FStateTreePropertyBindings::PropertyIndirections' has a wrong offset!");

struct FStateTreeBlueprintConditionWrapper final : public FStateTreeConditionBase
{
public:
	TSubclassOf<class UStateTreeConditionBlueprintBase> ConditionClass;
};
static_assert(alignof(FStateTreeBlueprintConditionWrapper) == 0x000008, "Wrong alignment on FStateTreeBlueprintConditionWrapper");
static_assert(sizeof(FStateTreeBlueprintConditionWrapper) == 0x000028, "Wrong size on FStateTreeBlueprintConditionWrapper");
static_assert(offsetof(FStateTreeBlueprintConditionWrapper, ConditionClass) == 0x000020, "Member 'FStateTreeBlueprintConditionWrapper::ConditionClass' has a wrong offset!");

struct FStateTreeEvaluatorBase : public FStateTreeNodeBase
{
};
static_assert(alignof(FStateTreeEvaluatorBase) == 0x000008, "Wrong alignment on FStateTreeEvaluatorBase");
static_assert(sizeof(FStateTreeEvaluatorBase) == 0x000018, "Wrong size on FStateTreeEvaluatorBase");

struct FStateTreeBlueprintEvaluatorWrapper final : public FStateTreeEvaluatorBase
{
public:
	TSubclassOf<class UStateTreeEvaluatorBlueprintBase> EvaluatorClass;
};
static_assert(alignof(FStateTreeBlueprintEvaluatorWrapper) == 0x000008, "Wrong alignment on FStateTreeBlueprintEvaluatorWrapper");
static_assert(sizeof(FStateTreeBlueprintEvaluatorWrapper) == 0x000020, "Wrong size on FStateTreeBlueprintEvaluatorWrapper");
static_assert(offsetof(FStateTreeBlueprintEvaluatorWrapper, EvaluatorClass) == 0x000018, "Member 'FStateTreeBlueprintEvaluatorWrapper::EvaluatorClass' has a wrong offset!");

struct FStateTreeCompareIntConditionInstanceData final
{
public:
	int32                                         Left;
	int32                                         Right;
};
static_assert(alignof(FStateTreeCompareIntConditionInstanceData) == 0x000004, "Wrong alignment on FStateTreeCompareIntConditionInstanceData");
static_assert(sizeof(FStateTreeCompareIntConditionInstanceData) == 0x000008, "Wrong size on FStateTreeCompareIntConditionInstanceData");
static_assert(offsetof(FStateTreeCompareIntConditionInstanceData, Left) == 0x000000, "Member 'FStateTreeCompareIntConditionInstanceData::Left' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareIntConditionInstanceData, Right) == 0x000004, "Member 'FStateTreeCompareIntConditionInstanceData::Right' has a wrong offset!");

struct FStateTreeConditionCommonBase : public FStateTreeConditionBase
{
};
static_assert(alignof(FStateTreeConditionCommonBase) == 0x000008, "Wrong alignment on FStateTreeConditionCommonBase");
static_assert(sizeof(FStateTreeConditionCommonBase) == 0x000020, "Wrong size on FStateTreeConditionCommonBase");

struct FStateTreeCompareIntCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	EGenericAICheck                               Operator;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FStateTreeCompareIntCondition) == 0x000008, "Wrong alignment on FStateTreeCompareIntCondition");
static_assert(sizeof(FStateTreeCompareIntCondition) == 0x000028, "Wrong size on FStateTreeCompareIntCondition");
static_assert(offsetof(FStateTreeCompareIntCondition, bInvert) == 0x000020, "Member 'FStateTreeCompareIntCondition::bInvert' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareIntCondition, Operator) == 0x000021, "Member 'FStateTreeCompareIntCondition::Operator' has a wrong offset!");

struct FStateTreeCompareFloatConditionInstanceData final
{
public:
	double                                        Left;
	double                                        Right;
};
static_assert(alignof(FStateTreeCompareFloatConditionInstanceData) == 0x000008, "Wrong alignment on FStateTreeCompareFloatConditionInstanceData");
static_assert(sizeof(FStateTreeCompareFloatConditionInstanceData) == 0x000010, "Wrong size on FStateTreeCompareFloatConditionInstanceData");
static_assert(offsetof(FStateTreeCompareFloatConditionInstanceData, Left) == 0x000000, "Member 'FStateTreeCompareFloatConditionInstanceData::Left' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareFloatConditionInstanceData, Right) == 0x000008, "Member 'FStateTreeCompareFloatConditionInstanceData::Right' has a wrong offset!");

struct FStateTreeCompareFloatCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	EGenericAICheck                               Operator;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FStateTreeCompareFloatCondition) == 0x000008, "Wrong alignment on FStateTreeCompareFloatCondition");
static_assert(sizeof(FStateTreeCompareFloatCondition) == 0x000028, "Wrong size on FStateTreeCompareFloatCondition");
static_assert(offsetof(FStateTreeCompareFloatCondition, bInvert) == 0x000020, "Member 'FStateTreeCompareFloatCondition::bInvert' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareFloatCondition, Operator) == 0x000021, "Member 'FStateTreeCompareFloatCondition::Operator' has a wrong offset!");

struct FStateTreeCompareBoolConditionInstanceData final
{
public:
	bool                                          bLeft;
	bool                                          bRight;
};
static_assert(alignof(FStateTreeCompareBoolConditionInstanceData) == 0x000001, "Wrong alignment on FStateTreeCompareBoolConditionInstanceData");
static_assert(sizeof(FStateTreeCompareBoolConditionInstanceData) == 0x000002, "Wrong size on FStateTreeCompareBoolConditionInstanceData");
static_assert(offsetof(FStateTreeCompareBoolConditionInstanceData, bLeft) == 0x000000, "Member 'FStateTreeCompareBoolConditionInstanceData::bLeft' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareBoolConditionInstanceData, bRight) == 0x000001, "Member 'FStateTreeCompareBoolConditionInstanceData::bRight' has a wrong offset!");

struct FStateTreeCompareBoolCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FStateTreeCompareBoolCondition) == 0x000008, "Wrong alignment on FStateTreeCompareBoolCondition");
static_assert(sizeof(FStateTreeCompareBoolCondition) == 0x000028, "Wrong size on FStateTreeCompareBoolCondition");
static_assert(offsetof(FStateTreeCompareBoolCondition, bInvert) == 0x000020, "Member 'FStateTreeCompareBoolCondition::bInvert' has a wrong offset!");

struct FStateTreeCompareEnumConditionInstanceData final
{
public:
	struct FStateTreeAnyEnum                      Left;
	struct FStateTreeAnyEnum                      Right;
};
static_assert(alignof(FStateTreeCompareEnumConditionInstanceData) == 0x000008, "Wrong alignment on FStateTreeCompareEnumConditionInstanceData");
static_assert(sizeof(FStateTreeCompareEnumConditionInstanceData) == 0x000020, "Wrong size on FStateTreeCompareEnumConditionInstanceData");
static_assert(offsetof(FStateTreeCompareEnumConditionInstanceData, Left) == 0x000000, "Member 'FStateTreeCompareEnumConditionInstanceData::Left' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareEnumConditionInstanceData, Right) == 0x000010, "Member 'FStateTreeCompareEnumConditionInstanceData::Right' has a wrong offset!");

struct FStateTreeCompareEnumCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FStateTreeCompareEnumCondition) == 0x000008, "Wrong alignment on FStateTreeCompareEnumCondition");
static_assert(sizeof(FStateTreeCompareEnumCondition) == 0x000028, "Wrong size on FStateTreeCompareEnumCondition");
static_assert(offsetof(FStateTreeCompareEnumCondition, bInvert) == 0x000020, "Member 'FStateTreeCompareEnumCondition::bInvert' has a wrong offset!");

struct FStateTreeCompareDistanceConditionInstanceData final
{
public:
	struct FVector                                Source;
	struct FVector                                Target;
	double                                        Distance;
};
static_assert(alignof(FStateTreeCompareDistanceConditionInstanceData) == 0x000008, "Wrong alignment on FStateTreeCompareDistanceConditionInstanceData");
static_assert(sizeof(FStateTreeCompareDistanceConditionInstanceData) == 0x000038, "Wrong size on FStateTreeCompareDistanceConditionInstanceData");
static_assert(offsetof(FStateTreeCompareDistanceConditionInstanceData, Source) == 0x000000, "Member 'FStateTreeCompareDistanceConditionInstanceData::Source' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareDistanceConditionInstanceData, Target) == 0x000018, "Member 'FStateTreeCompareDistanceConditionInstanceData::Target' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareDistanceConditionInstanceData, Distance) == 0x000030, "Member 'FStateTreeCompareDistanceConditionInstanceData::Distance' has a wrong offset!");

struct FStateTreeCompareDistanceCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	EGenericAICheck                               Operator;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FStateTreeCompareDistanceCondition) == 0x000008, "Wrong alignment on FStateTreeCompareDistanceCondition");
static_assert(sizeof(FStateTreeCompareDistanceCondition) == 0x000028, "Wrong size on FStateTreeCompareDistanceCondition");
static_assert(offsetof(FStateTreeCompareDistanceCondition, bInvert) == 0x000020, "Member 'FStateTreeCompareDistanceCondition::bInvert' has a wrong offset!");
static_assert(offsetof(FStateTreeCompareDistanceCondition, Operator) == 0x000021, "Member 'FStateTreeCompareDistanceCondition::Operator' has a wrong offset!");

struct FStateTreeRandomConditionInstanceData final
{
public:
	float                                         Threshold;
};
static_assert(alignof(FStateTreeRandomConditionInstanceData) == 0x000004, "Wrong alignment on FStateTreeRandomConditionInstanceData");
static_assert(sizeof(FStateTreeRandomConditionInstanceData) == 0x000004, "Wrong size on FStateTreeRandomConditionInstanceData");
static_assert(offsetof(FStateTreeRandomConditionInstanceData, Threshold) == 0x000000, "Member 'FStateTreeRandomConditionInstanceData::Threshold' has a wrong offset!");

struct FStateTreeRandomCondition final : public FStateTreeConditionCommonBase
{
};
static_assert(alignof(FStateTreeRandomCondition) == 0x000008, "Wrong alignment on FStateTreeRandomCondition");
static_assert(sizeof(FStateTreeRandomCondition) == 0x000020, "Wrong size on FStateTreeRandomCondition");

struct FGameplayTagMatchConditionInstanceData final
{
public:
	struct FGameplayTagContainer                  TagContainer;
	struct FGameplayTag                           tag;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FGameplayTagMatchConditionInstanceData) == 0x000008, "Wrong alignment on FGameplayTagMatchConditionInstanceData");
static_assert(sizeof(FGameplayTagMatchConditionInstanceData) == 0x000028, "Wrong size on FGameplayTagMatchConditionInstanceData");
static_assert(offsetof(FGameplayTagMatchConditionInstanceData, TagContainer) == 0x000000, "Member 'FGameplayTagMatchConditionInstanceData::TagContainer' has a wrong offset!");
static_assert(offsetof(FGameplayTagMatchConditionInstanceData, tag) == 0x000020, "Member 'FGameplayTagMatchConditionInstanceData::tag' has a wrong offset!");

struct FGameplayTagMatchCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bExactMatch;
	bool                                          bInvert;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FGameplayTagMatchCondition) == 0x000008, "Wrong alignment on FGameplayTagMatchCondition");
static_assert(sizeof(FGameplayTagMatchCondition) == 0x000028, "Wrong size on FGameplayTagMatchCondition");
static_assert(offsetof(FGameplayTagMatchCondition, bExactMatch) == 0x000020, "Member 'FGameplayTagMatchCondition::bExactMatch' has a wrong offset!");
static_assert(offsetof(FGameplayTagMatchCondition, bInvert) == 0x000021, "Member 'FGameplayTagMatchCondition::bInvert' has a wrong offset!");

struct FGameplayTagContainerMatchConditionInstanceData final
{
public:
	struct FGameplayTagContainer                  TagContainer;
	struct FGameplayTagContainer                  OtherContainer;
};
static_assert(alignof(FGameplayTagContainerMatchConditionInstanceData) == 0x000008, "Wrong alignment on FGameplayTagContainerMatchConditionInstanceData");
static_assert(sizeof(FGameplayTagContainerMatchConditionInstanceData) == 0x000040, "Wrong size on FGameplayTagContainerMatchConditionInstanceData");
static_assert(offsetof(FGameplayTagContainerMatchConditionInstanceData, TagContainer) == 0x000000, "Member 'FGameplayTagContainerMatchConditionInstanceData::TagContainer' has a wrong offset!");
static_assert(offsetof(FGameplayTagContainerMatchConditionInstanceData, OtherContainer) == 0x000020, "Member 'FGameplayTagContainerMatchConditionInstanceData::OtherContainer' has a wrong offset!");

struct FGameplayTagContainerMatchCondition final : public FStateTreeConditionCommonBase
{
public:
	EGameplayContainerMatchType                   MatchType;
	bool                                          bExactMatch;
	bool                                          bInvert;
	uint8                                         Pad_23[0x5];
};
static_assert(alignof(FGameplayTagContainerMatchCondition) == 0x000008, "Wrong alignment on FGameplayTagContainerMatchCondition");
static_assert(sizeof(FGameplayTagContainerMatchCondition) == 0x000028, "Wrong size on FGameplayTagContainerMatchCondition");
static_assert(offsetof(FGameplayTagContainerMatchCondition, MatchType) == 0x000020, "Member 'FGameplayTagContainerMatchCondition::MatchType' has a wrong offset!");
static_assert(offsetof(FGameplayTagContainerMatchCondition, bExactMatch) == 0x000021, "Member 'FGameplayTagContainerMatchCondition::bExactMatch' has a wrong offset!");
static_assert(offsetof(FGameplayTagContainerMatchCondition, bInvert) == 0x000022, "Member 'FGameplayTagContainerMatchCondition::bInvert' has a wrong offset!");

struct FGameplayTagQueryConditionInstanceData final
{
public:
	struct FGameplayTagContainer                  TagContainer;
};
static_assert(alignof(FGameplayTagQueryConditionInstanceData) == 0x000008, "Wrong alignment on FGameplayTagQueryConditionInstanceData");
static_assert(sizeof(FGameplayTagQueryConditionInstanceData) == 0x000020, "Wrong size on FGameplayTagQueryConditionInstanceData");
static_assert(offsetof(FGameplayTagQueryConditionInstanceData, TagContainer) == 0x000000, "Member 'FGameplayTagQueryConditionInstanceData::TagContainer' has a wrong offset!");

struct FGameplayTagQueryCondition final : public FStateTreeConditionCommonBase
{
public:
	struct FGameplayTagQuery                      TagQuery;
	bool                                          bInvert;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(FGameplayTagQueryCondition) == 0x000008, "Wrong alignment on FGameplayTagQueryCondition");
static_assert(sizeof(FGameplayTagQueryCondition) == 0x000070, "Wrong size on FGameplayTagQueryCondition");
static_assert(offsetof(FGameplayTagQueryCondition, TagQuery) == 0x000020, "Member 'FGameplayTagQueryCondition::TagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayTagQueryCondition, bInvert) == 0x000068, "Member 'FGameplayTagQueryCondition::bInvert' has a wrong offset!");

struct FStateTreeObjectIsValidConditionInstanceData final
{
public:
	class UObject*                                Object;
};
static_assert(alignof(FStateTreeObjectIsValidConditionInstanceData) == 0x000008, "Wrong alignment on FStateTreeObjectIsValidConditionInstanceData");
static_assert(sizeof(FStateTreeObjectIsValidConditionInstanceData) == 0x000008, "Wrong size on FStateTreeObjectIsValidConditionInstanceData");
static_assert(offsetof(FStateTreeObjectIsValidConditionInstanceData, Object) == 0x000000, "Member 'FStateTreeObjectIsValidConditionInstanceData::Object' has a wrong offset!");

struct FStateTreeObjectIsValidCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FStateTreeObjectIsValidCondition) == 0x000008, "Wrong alignment on FStateTreeObjectIsValidCondition");
static_assert(sizeof(FStateTreeObjectIsValidCondition) == 0x000028, "Wrong size on FStateTreeObjectIsValidCondition");
static_assert(offsetof(FStateTreeObjectIsValidCondition, bInvert) == 0x000020, "Member 'FStateTreeObjectIsValidCondition::bInvert' has a wrong offset!");

struct FStateTreeObjectEqualsConditionInstanceData final
{
public:
	class UObject*                                Left;
	class UObject*                                Right;
};
static_assert(alignof(FStateTreeObjectEqualsConditionInstanceData) == 0x000008, "Wrong alignment on FStateTreeObjectEqualsConditionInstanceData");
static_assert(sizeof(FStateTreeObjectEqualsConditionInstanceData) == 0x000010, "Wrong size on FStateTreeObjectEqualsConditionInstanceData");
static_assert(offsetof(FStateTreeObjectEqualsConditionInstanceData, Left) == 0x000000, "Member 'FStateTreeObjectEqualsConditionInstanceData::Left' has a wrong offset!");
static_assert(offsetof(FStateTreeObjectEqualsConditionInstanceData, Right) == 0x000008, "Member 'FStateTreeObjectEqualsConditionInstanceData::Right' has a wrong offset!");

struct FStateTreeObjectEqualsCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FStateTreeObjectEqualsCondition) == 0x000008, "Wrong alignment on FStateTreeObjectEqualsCondition");
static_assert(sizeof(FStateTreeObjectEqualsCondition) == 0x000028, "Wrong size on FStateTreeObjectEqualsCondition");
static_assert(offsetof(FStateTreeObjectEqualsCondition, bInvert) == 0x000020, "Member 'FStateTreeObjectEqualsCondition::bInvert' has a wrong offset!");

struct FStateTreeObjectIsChildOfClassConditionInstanceData final
{
public:
	class UObject*                                Object;
	TSubclassOf<class UObject>                    Class;
};
static_assert(alignof(FStateTreeObjectIsChildOfClassConditionInstanceData) == 0x000008, "Wrong alignment on FStateTreeObjectIsChildOfClassConditionInstanceData");
static_assert(sizeof(FStateTreeObjectIsChildOfClassConditionInstanceData) == 0x000010, "Wrong size on FStateTreeObjectIsChildOfClassConditionInstanceData");
static_assert(offsetof(FStateTreeObjectIsChildOfClassConditionInstanceData, Object) == 0x000000, "Member 'FStateTreeObjectIsChildOfClassConditionInstanceData::Object' has a wrong offset!");
static_assert(offsetof(FStateTreeObjectIsChildOfClassConditionInstanceData, Class) == 0x000008, "Member 'FStateTreeObjectIsChildOfClassConditionInstanceData::Class' has a wrong offset!");

struct FStateTreeObjectIsChildOfClassCondition final : public FStateTreeConditionCommonBase
{
public:
	bool                                          bInvert;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FStateTreeObjectIsChildOfClassCondition) == 0x000008, "Wrong alignment on FStateTreeObjectIsChildOfClassCondition");
static_assert(sizeof(FStateTreeObjectIsChildOfClassCondition) == 0x000028, "Wrong size on FStateTreeObjectIsChildOfClassCondition");
static_assert(offsetof(FStateTreeObjectIsChildOfClassCondition, bInvert) == 0x000020, "Member 'FStateTreeObjectIsChildOfClassCondition::bInvert' has a wrong offset!");

struct FStateTreeEvaluatorCommonBase final : public FStateTreeEvaluatorBase
{
};
static_assert(alignof(FStateTreeEvaluatorCommonBase) == 0x000008, "Wrong alignment on FStateTreeEvaluatorCommonBase");
static_assert(sizeof(FStateTreeEvaluatorCommonBase) == 0x000018, "Wrong size on FStateTreeEvaluatorCommonBase");

struct FStateTreeEvent final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	struct FInstancedStruct                       Payload;
	class FName                                   Origin;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FStateTreeEvent) == 0x000008, "Wrong alignment on FStateTreeEvent");
static_assert(sizeof(FStateTreeEvent) == 0x000020, "Wrong size on FStateTreeEvent");
static_assert(offsetof(FStateTreeEvent, tag) == 0x000000, "Member 'FStateTreeEvent::tag' has a wrong offset!");
static_assert(offsetof(FStateTreeEvent, Payload) == 0x000008, "Member 'FStateTreeEvent::Payload' has a wrong offset!");
static_assert(offsetof(FStateTreeEvent, Origin) == 0x000018, "Member 'FStateTreeEvent::Origin' has a wrong offset!");

struct FStateTreeEventQueue final
{
public:
	TArray<struct FStateTreeEvent>                Events;
};
static_assert(alignof(FStateTreeEventQueue) == 0x000008, "Wrong alignment on FStateTreeEventQueue");
static_assert(sizeof(FStateTreeEventQueue) == 0x000010, "Wrong size on FStateTreeEventQueue");
static_assert(offsetof(FStateTreeEventQueue, Events) == 0x000000, "Member 'FStateTreeEventQueue::Events' has a wrong offset!");

struct FStateTreeTransitionRequest final
{
public:
	struct FStateTreeStateHandle                  SourceState;
	struct FStateTreeStateHandle                  TargetState;
	EStateTreeTransitionPriority                  Priority;
	uint8                                         Pad_5[0x1];
};
static_assert(alignof(FStateTreeTransitionRequest) == 0x000002, "Wrong alignment on FStateTreeTransitionRequest");
static_assert(sizeof(FStateTreeTransitionRequest) == 0x000006, "Wrong size on FStateTreeTransitionRequest");
static_assert(offsetof(FStateTreeTransitionRequest, SourceState) == 0x000000, "Member 'FStateTreeTransitionRequest::SourceState' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionRequest, TargetState) == 0x000002, "Member 'FStateTreeTransitionRequest::TargetState' has a wrong offset!");
static_assert(offsetof(FStateTreeTransitionRequest, Priority) == 0x000004, "Member 'FStateTreeTransitionRequest::Priority' has a wrong offset!");

struct FStateTreeInstanceStorage final
{
public:
	struct FInstancedStructContainer              InstanceStructs;
	TArray<class UObject*>                        InstanceObjects;
	struct FStateTreeEventQueue                   EventQueue;
	TArray<struct FStateTreeTransitionRequest>    TransitionRequests;
};
static_assert(alignof(FStateTreeInstanceStorage) == 0x000008, "Wrong alignment on FStateTreeInstanceStorage");
static_assert(sizeof(FStateTreeInstanceStorage) == 0x000040, "Wrong size on FStateTreeInstanceStorage");
static_assert(offsetof(FStateTreeInstanceStorage, InstanceStructs) == 0x000000, "Member 'FStateTreeInstanceStorage::InstanceStructs' has a wrong offset!");
static_assert(offsetof(FStateTreeInstanceStorage, InstanceObjects) == 0x000010, "Member 'FStateTreeInstanceStorage::InstanceObjects' has a wrong offset!");
static_assert(offsetof(FStateTreeInstanceStorage, EventQueue) == 0x000020, "Member 'FStateTreeInstanceStorage::EventQueue' has a wrong offset!");
static_assert(offsetof(FStateTreeInstanceStorage, TransitionRequests) == 0x000030, "Member 'FStateTreeInstanceStorage::TransitionRequests' has a wrong offset!");

struct FStateTreeInstanceData final
{
public:
	struct FInstancedStruct                       InstanceStorage;
};
static_assert(alignof(FStateTreeInstanceData) == 0x000008, "Wrong alignment on FStateTreeInstanceData");
static_assert(sizeof(FStateTreeInstanceData) == 0x000010, "Wrong size on FStateTreeInstanceData");
static_assert(offsetof(FStateTreeInstanceData, InstanceStorage) == 0x000000, "Member 'FStateTreeInstanceData::InstanceStorage' has a wrong offset!");

struct FStateTreeEditorPropertyPath final
{
public:
	struct FGuid                                  StructID;
	TArray<class FString>                         Path;
};
static_assert(alignof(FStateTreeEditorPropertyPath) == 0x000008, "Wrong alignment on FStateTreeEditorPropertyPath");
static_assert(sizeof(FStateTreeEditorPropertyPath) == 0x000020, "Wrong size on FStateTreeEditorPropertyPath");
static_assert(offsetof(FStateTreeEditorPropertyPath, StructID) == 0x000000, "Member 'FStateTreeEditorPropertyPath::StructID' has a wrong offset!");
static_assert(offsetof(FStateTreeEditorPropertyPath, Path) == 0x000010, "Member 'FStateTreeEditorPropertyPath::Path' has a wrong offset!");

struct FStateTreePropertySegment final
{
public:
	class FName                                   Name;
	struct FStateTreeIndex16                      ArrayIndex;
	struct FStateTreeIndex16                      NextIndex;
	EStateTreePropertyAccessType                  Type;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FStateTreePropertySegment) == 0x000004, "Wrong alignment on FStateTreePropertySegment");
static_assert(sizeof(FStateTreePropertySegment) == 0x00000C, "Wrong size on FStateTreePropertySegment");
static_assert(offsetof(FStateTreePropertySegment, Name) == 0x000000, "Member 'FStateTreePropertySegment::Name' has a wrong offset!");
static_assert(offsetof(FStateTreePropertySegment, ArrayIndex) == 0x000004, "Member 'FStateTreePropertySegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertySegment, NextIndex) == 0x000006, "Member 'FStateTreePropertySegment::NextIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertySegment, Type) == 0x000008, "Member 'FStateTreePropertySegment::Type' has a wrong offset!");

struct FStateTreePropertyBinding final
{
public:
	struct FStateTreePropertySegment              SourcePath;
	struct FStateTreePropertySegment              TargetPath;
	struct FStateTreeIndex16                      SourceStructIndex;
	EStateTreePropertyCopyType                    CopyType;
	uint8                                         Pad_1B[0x1];
};
static_assert(alignof(FStateTreePropertyBinding) == 0x000004, "Wrong alignment on FStateTreePropertyBinding");
static_assert(sizeof(FStateTreePropertyBinding) == 0x00001C, "Wrong size on FStateTreePropertyBinding");
static_assert(offsetof(FStateTreePropertyBinding, SourcePath) == 0x000000, "Member 'FStateTreePropertyBinding::SourcePath' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBinding, TargetPath) == 0x00000C, "Member 'FStateTreePropertyBinding::TargetPath' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBinding, SourceStructIndex) == 0x000018, "Member 'FStateTreePropertyBinding::SourceStructIndex' has a wrong offset!");
static_assert(offsetof(FStateTreePropertyBinding, CopyType) == 0x00001A, "Member 'FStateTreePropertyBinding::CopyType' has a wrong offset!");

struct FStateTreeReference final
{
public:
	class UStateTree*                             StateTree;
	struct FInstancedPropertyBag                  Parameters;
};
static_assert(alignof(FStateTreeReference) == 0x000008, "Wrong alignment on FStateTreeReference");
static_assert(sizeof(FStateTreeReference) == 0x000018, "Wrong size on FStateTreeReference");
static_assert(offsetof(FStateTreeReference, StateTree) == 0x000000, "Member 'FStateTreeReference::StateTree' has a wrong offset!");
static_assert(offsetof(FStateTreeReference, Parameters) == 0x000008, "Member 'FStateTreeReference::Parameters' has a wrong offset!");

struct FStateTreeTaskCommonBase : public FStateTreeTaskBase
{
};
static_assert(alignof(FStateTreeTaskCommonBase) == 0x000008, "Wrong alignment on FStateTreeTaskCommonBase");
static_assert(sizeof(FStateTreeTaskCommonBase) == 0x000020, "Wrong size on FStateTreeTaskCommonBase");

struct FStateTreeIndex8 final
{
public:
	uint8                                         Value;
};
static_assert(alignof(FStateTreeIndex8) == 0x000001, "Wrong alignment on FStateTreeIndex8");
static_assert(sizeof(FStateTreeIndex8) == 0x000001, "Wrong size on FStateTreeIndex8");
static_assert(offsetof(FStateTreeIndex8, Value) == 0x000000, "Member 'FStateTreeIndex8::Value' has a wrong offset!");

struct FStateTreeRandomTimeDuration final
{
public:
	uint16                                        Duration;
	uint16                                        RandomVariance;
};
static_assert(alignof(FStateTreeRandomTimeDuration) == 0x000002, "Wrong alignment on FStateTreeRandomTimeDuration");
static_assert(sizeof(FStateTreeRandomTimeDuration) == 0x000004, "Wrong size on FStateTreeRandomTimeDuration");
static_assert(offsetof(FStateTreeRandomTimeDuration, Duration) == 0x000000, "Member 'FStateTreeRandomTimeDuration::Duration' has a wrong offset!");
static_assert(offsetof(FStateTreeRandomTimeDuration, RandomVariance) == 0x000002, "Member 'FStateTreeRandomTimeDuration::RandomVariance' has a wrong offset!");

struct FCompactStateTransition final
{
public:
	struct FGameplayTag                           EventTag;
	uint16                                        ConditionsBegin;
	struct FStateTreeStateHandle                  State;
	struct FStateTreeRandomTimeDuration           Delay;
	EStateTreeTransitionTrigger                   Trigger;
	EStateTreeTransitionPriority                  Priority;
	uint8                                         ConditionsNum;
	uint8                                         Pad_F[0x1];
};
static_assert(alignof(FCompactStateTransition) == 0x000004, "Wrong alignment on FCompactStateTransition");
static_assert(sizeof(FCompactStateTransition) == 0x000010, "Wrong size on FCompactStateTransition");
static_assert(offsetof(FCompactStateTransition, EventTag) == 0x000000, "Member 'FCompactStateTransition::EventTag' has a wrong offset!");
static_assert(offsetof(FCompactStateTransition, ConditionsBegin) == 0x000004, "Member 'FCompactStateTransition::ConditionsBegin' has a wrong offset!");
static_assert(offsetof(FCompactStateTransition, State) == 0x000006, "Member 'FCompactStateTransition::State' has a wrong offset!");
static_assert(offsetof(FCompactStateTransition, Delay) == 0x000008, "Member 'FCompactStateTransition::Delay' has a wrong offset!");
static_assert(offsetof(FCompactStateTransition, Trigger) == 0x00000C, "Member 'FCompactStateTransition::Trigger' has a wrong offset!");
static_assert(offsetof(FCompactStateTransition, Priority) == 0x00000D, "Member 'FCompactStateTransition::Priority' has a wrong offset!");
static_assert(offsetof(FCompactStateTransition, ConditionsNum) == 0x00000E, "Member 'FCompactStateTransition::ConditionsNum' has a wrong offset!");

struct FCompactStateTreeState final
{
public:
	class FName                                   Name;
	struct FStateTreeStateHandle                  LinkedState;
	struct FStateTreeStateHandle                  Parent;
	uint16                                        ChildrenBegin;
	uint16                                        ChildrenEnd;
	uint16                                        EnterConditionsBegin;
	uint16                                        TransitionsBegin;
	uint16                                        TasksBegin;
	struct FStateTreeIndex16                      ParameterInstanceIndex;
	struct FStateTreeIndex16                      ParameterDataViewIndex;
	uint8                                         EnterConditionsNum;
	uint8                                         TransitionsNum;
	uint8                                         TasksNum;
	EStateTreeStateType                           Type;
	uint8                                         bHasTransitionTasks : 1;
	uint8                                         Pad_1B[0x1];
};
static_assert(alignof(FCompactStateTreeState) == 0x000004, "Wrong alignment on FCompactStateTreeState");
static_assert(sizeof(FCompactStateTreeState) == 0x00001C, "Wrong size on FCompactStateTreeState");
static_assert(offsetof(FCompactStateTreeState, Name) == 0x000000, "Member 'FCompactStateTreeState::Name' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, LinkedState) == 0x000004, "Member 'FCompactStateTreeState::LinkedState' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, Parent) == 0x000006, "Member 'FCompactStateTreeState::Parent' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, ChildrenBegin) == 0x000008, "Member 'FCompactStateTreeState::ChildrenBegin' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, ChildrenEnd) == 0x00000A, "Member 'FCompactStateTreeState::ChildrenEnd' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, EnterConditionsBegin) == 0x00000C, "Member 'FCompactStateTreeState::EnterConditionsBegin' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, TransitionsBegin) == 0x00000E, "Member 'FCompactStateTreeState::TransitionsBegin' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, TasksBegin) == 0x000010, "Member 'FCompactStateTreeState::TasksBegin' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, ParameterInstanceIndex) == 0x000012, "Member 'FCompactStateTreeState::ParameterInstanceIndex' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, ParameterDataViewIndex) == 0x000014, "Member 'FCompactStateTreeState::ParameterDataViewIndex' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, EnterConditionsNum) == 0x000016, "Member 'FCompactStateTreeState::EnterConditionsNum' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, TransitionsNum) == 0x000017, "Member 'FCompactStateTreeState::TransitionsNum' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, TasksNum) == 0x000018, "Member 'FCompactStateTreeState::TasksNum' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeState, Type) == 0x000019, "Member 'FCompactStateTreeState::Type' has a wrong offset!");

struct FCompactStateTreeParameters final
{
public:
	struct FStateTreeIndex16                      BindingsBatch;
	uint8                                         Pad_2[0x6];
	struct FInstancedPropertyBag                  Parameters;
};
static_assert(alignof(FCompactStateTreeParameters) == 0x000008, "Wrong alignment on FCompactStateTreeParameters");
static_assert(sizeof(FCompactStateTreeParameters) == 0x000018, "Wrong size on FCompactStateTreeParameters");
static_assert(offsetof(FCompactStateTreeParameters, BindingsBatch) == 0x000000, "Member 'FCompactStateTreeParameters::BindingsBatch' has a wrong offset!");
static_assert(offsetof(FCompactStateTreeParameters, Parameters) == 0x000008, "Member 'FCompactStateTreeParameters::Parameters' has a wrong offset!");

struct FStateTreeExternalDataHandle final
{
public:
	struct FStateTreeIndex16                      DataViewIndex;
};
static_assert(alignof(FStateTreeExternalDataHandle) == 0x000002, "Wrong alignment on FStateTreeExternalDataHandle");
static_assert(sizeof(FStateTreeExternalDataHandle) == 0x000002, "Wrong size on FStateTreeExternalDataHandle");
static_assert(offsetof(FStateTreeExternalDataHandle, DataViewIndex) == 0x000000, "Member 'FStateTreeExternalDataHandle::DataViewIndex' has a wrong offset!");

struct FStateTreeExternalDataDesc final
{
public:
	class UStruct*                                Struct;
	class FName                                   Name;
	struct FStateTreeExternalDataHandle           Handle;
	EStateTreeExternalDataRequirement             Requirement;
	uint8                                         Pad_F[0x1];
};
static_assert(alignof(FStateTreeExternalDataDesc) == 0x000008, "Wrong alignment on FStateTreeExternalDataDesc");
static_assert(sizeof(FStateTreeExternalDataDesc) == 0x000010, "Wrong size on FStateTreeExternalDataDesc");
static_assert(offsetof(FStateTreeExternalDataDesc, Struct) == 0x000000, "Member 'FStateTreeExternalDataDesc::Struct' has a wrong offset!");
static_assert(offsetof(FStateTreeExternalDataDesc, Name) == 0x000008, "Member 'FStateTreeExternalDataDesc::Name' has a wrong offset!");
static_assert(offsetof(FStateTreeExternalDataDesc, Handle) == 0x00000C, "Member 'FStateTreeExternalDataDesc::Handle' has a wrong offset!");
static_assert(offsetof(FStateTreeExternalDataDesc, Requirement) == 0x00000E, "Member 'FStateTreeExternalDataDesc::Requirement' has a wrong offset!");

struct alignas(0x08) FStateTreeStructRef final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FStateTreeStructRef) == 0x000008, "Wrong alignment on FStateTreeStructRef");
static_assert(sizeof(FStateTreeStructRef) == 0x000010, "Wrong size on FStateTreeStructRef");

struct alignas(0x08) FStateTreeExecutionState final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FStateTreeExecutionState) == 0x000008, "Wrong alignment on FStateTreeExecutionState");
static_assert(sizeof(FStateTreeExecutionState) == 0x000030, "Wrong size on FStateTreeExecutionState");

struct FStateTreeStateLink final
{
public:
	struct FStateTreeStateHandle                  StateHandle;
};
static_assert(alignof(FStateTreeStateLink) == 0x000002, "Wrong alignment on FStateTreeStateLink");
static_assert(sizeof(FStateTreeStateLink) == 0x000002, "Wrong size on FStateTreeStateLink");
static_assert(offsetof(FStateTreeStateLink, StateHandle) == 0x000000, "Member 'FStateTreeStateLink::StateHandle' has a wrong offset!");

struct FStateTreeDebugTextTaskInstanceData final
{
public:
	class AActor*                                 ReferenceActor;
};
static_assert(alignof(FStateTreeDebugTextTaskInstanceData) == 0x000008, "Wrong alignment on FStateTreeDebugTextTaskInstanceData");
static_assert(sizeof(FStateTreeDebugTextTaskInstanceData) == 0x000008, "Wrong size on FStateTreeDebugTextTaskInstanceData");
static_assert(offsetof(FStateTreeDebugTextTaskInstanceData, ReferenceActor) == 0x000000, "Member 'FStateTreeDebugTextTaskInstanceData::ReferenceActor' has a wrong offset!");

struct FStateTreeDebugTextTask final : public FStateTreeTaskCommonBase
{
public:
	class FString                                 Text;
	struct FColor                                 TextColor;
	float                                         FontScale;
	struct FVector                                Offset;
	bool                                          bEnabled;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(FStateTreeDebugTextTask) == 0x000008, "Wrong alignment on FStateTreeDebugTextTask");
static_assert(sizeof(FStateTreeDebugTextTask) == 0x000058, "Wrong size on FStateTreeDebugTextTask");
static_assert(offsetof(FStateTreeDebugTextTask, Text) == 0x000020, "Member 'FStateTreeDebugTextTask::Text' has a wrong offset!");
static_assert(offsetof(FStateTreeDebugTextTask, TextColor) == 0x000030, "Member 'FStateTreeDebugTextTask::TextColor' has a wrong offset!");
static_assert(offsetof(FStateTreeDebugTextTask, FontScale) == 0x000034, "Member 'FStateTreeDebugTextTask::FontScale' has a wrong offset!");
static_assert(offsetof(FStateTreeDebugTextTask, Offset) == 0x000038, "Member 'FStateTreeDebugTextTask::Offset' has a wrong offset!");
static_assert(offsetof(FStateTreeDebugTextTask, bEnabled) == 0x000050, "Member 'FStateTreeDebugTextTask::bEnabled' has a wrong offset!");

struct FStateTreeDelayTaskInstanceData final
{
public:
	float                                         Duration;
	float                                         RandomDeviation;
	bool                                          bRunForever;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FStateTreeDelayTaskInstanceData) == 0x000004, "Wrong alignment on FStateTreeDelayTaskInstanceData");
static_assert(sizeof(FStateTreeDelayTaskInstanceData) == 0x000010, "Wrong size on FStateTreeDelayTaskInstanceData");
static_assert(offsetof(FStateTreeDelayTaskInstanceData, Duration) == 0x000000, "Member 'FStateTreeDelayTaskInstanceData::Duration' has a wrong offset!");
static_assert(offsetof(FStateTreeDelayTaskInstanceData, RandomDeviation) == 0x000004, "Member 'FStateTreeDelayTaskInstanceData::RandomDeviation' has a wrong offset!");
static_assert(offsetof(FStateTreeDelayTaskInstanceData, bRunForever) == 0x000008, "Member 'FStateTreeDelayTaskInstanceData::bRunForever' has a wrong offset!");

struct FStateTreeDelayTask final : public FStateTreeTaskCommonBase
{
};
static_assert(alignof(FStateTreeDelayTask) == 0x000008, "Wrong alignment on FStateTreeDelayTask");
static_assert(sizeof(FStateTreeDelayTask) == 0x000020, "Wrong size on FStateTreeDelayTask");

}
