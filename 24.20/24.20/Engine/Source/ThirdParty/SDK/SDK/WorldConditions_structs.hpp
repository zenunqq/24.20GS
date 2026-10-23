#pragma once

#include "Basic.hpp"

#include "StructUtils_structs.hpp"

namespace SDK
{

enum class EWorldConditionResultValue : uint8
{
	IsFalse                                  = 0,
	IsTrue                                   = 1,
	Invalid                                  = 2,
	EWorldConditionResultValue_MAX           = 3,
};

enum class EWorldConditionOperator : uint8
{
	And                                      = 0,
	Or                                       = 1,
	Copy                                     = 2,
	EWorldConditionOperator_MAX              = 3,
};

enum class EWorldConditionContextDataType : uint8
{
	Dynamic                                  = 0,
	Persistent                               = 1,
	EWorldConditionContextDataType_MAX       = 2,
};

struct alignas(0x08) FWorldConditionBase
{
public:
	uint8                                         Pad_0[0xB];
	uint8                                         BitPad_B_0 : 2;
	uint8                                         bInvert : 1;
	EWorldConditionOperator                       Operator;
	uint8                                         NextExpressionDepth;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FWorldConditionBase) == 0x000008, "Wrong alignment on FWorldConditionBase");
static_assert(sizeof(FWorldConditionBase) == 0x000010, "Wrong size on FWorldConditionBase");
static_assert(offsetof(FWorldConditionBase, Operator) == 0x00000C, "Member 'FWorldConditionBase::Operator' has a wrong offset!");
static_assert(offsetof(FWorldConditionBase, NextExpressionDepth) == 0x00000D, "Member 'FWorldConditionBase::NextExpressionDepth' has a wrong offset!");

struct FWorldConditionCommonBase : public FWorldConditionBase
{
};
static_assert(alignof(FWorldConditionCommonBase) == 0x000008, "Wrong alignment on FWorldConditionCommonBase");
static_assert(sizeof(FWorldConditionCommonBase) == 0x000010, "Wrong size on FWorldConditionCommonBase");

struct FWorldConditionQueryDefinition final
{
public:
	uint8                                         Pad_0[0x10];
	TSubclassOf<class UWorldConditionSchema>      SchemaClass;
};
static_assert(alignof(FWorldConditionQueryDefinition) == 0x000008, "Wrong alignment on FWorldConditionQueryDefinition");
static_assert(sizeof(FWorldConditionQueryDefinition) == 0x000018, "Wrong size on FWorldConditionQueryDefinition");
static_assert(offsetof(FWorldConditionQueryDefinition, SchemaClass) == 0x000010, "Member 'FWorldConditionQueryDefinition::SchemaClass' has a wrong offset!");

struct FWorldConditionCommonActorBase : public FWorldConditionBase
{
};
static_assert(alignof(FWorldConditionCommonActorBase) == 0x000008, "Wrong alignment on FWorldConditionCommonActorBase");
static_assert(sizeof(FWorldConditionCommonActorBase) == 0x000010, "Wrong size on FWorldConditionCommonActorBase");

struct FWorldConditionEditable final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FWorldConditionEditable) == 0x000001, "Wrong alignment on FWorldConditionEditable");
static_assert(sizeof(FWorldConditionEditable) == 0x000001, "Wrong size on FWorldConditionEditable");

struct FWorldConditionQuerySharedDefinition final
{
public:
	struct FInstancedStructContainer              Conditions;
	TSubclassOf<class UWorldConditionSchema>      SchemaClass;
	uint8                                         Pad_18[0x10];
};
static_assert(alignof(FWorldConditionQuerySharedDefinition) == 0x000008, "Wrong alignment on FWorldConditionQuerySharedDefinition");
static_assert(sizeof(FWorldConditionQuerySharedDefinition) == 0x000028, "Wrong size on FWorldConditionQuerySharedDefinition");
static_assert(offsetof(FWorldConditionQuerySharedDefinition, Conditions) == 0x000000, "Member 'FWorldConditionQuerySharedDefinition::Conditions' has a wrong offset!");
static_assert(offsetof(FWorldConditionQuerySharedDefinition, SchemaClass) == 0x000010, "Member 'FWorldConditionQuerySharedDefinition::SchemaClass' has a wrong offset!");

struct FWorldConditionItem final
{
public:
	uint8                                         Pad_0[0x3];
};
static_assert(alignof(FWorldConditionItem) == 0x000001, "Wrong alignment on FWorldConditionItem");
static_assert(sizeof(FWorldConditionItem) == 0x000003, "Wrong size on FWorldConditionItem");

struct FWorldConditionStateObject final
{
public:
	class UObject*                                Object;
};
static_assert(alignof(FWorldConditionStateObject) == 0x000008, "Wrong alignment on FWorldConditionStateObject");
static_assert(sizeof(FWorldConditionStateObject) == 0x000008, "Wrong size on FWorldConditionStateObject");
static_assert(offsetof(FWorldConditionStateObject, Object) == 0x000000, "Member 'FWorldConditionStateObject::Object' has a wrong offset!");

struct FWorldConditionQueryState final
{
public:
	uint8                                         Pad_0[0x28];
	class UObject*                                Owner;
};
static_assert(alignof(FWorldConditionQueryState) == 0x000008, "Wrong alignment on FWorldConditionQueryState");
static_assert(sizeof(FWorldConditionQueryState) == 0x000030, "Wrong size on FWorldConditionQueryState");
static_assert(offsetof(FWorldConditionQueryState, Owner) == 0x000028, "Member 'FWorldConditionQueryState::Owner' has a wrong offset!");

struct FWorldConditionQuery final
{
public:
	struct FWorldConditionQueryDefinition         QueryDefinition;
	struct FWorldConditionQueryState              QueryState;
};
static_assert(alignof(FWorldConditionQuery) == 0x000008, "Wrong alignment on FWorldConditionQuery");
static_assert(sizeof(FWorldConditionQuery) == 0x000048, "Wrong size on FWorldConditionQuery");
static_assert(offsetof(FWorldConditionQuery, QueryDefinition) == 0x000000, "Member 'FWorldConditionQuery::QueryDefinition' has a wrong offset!");
static_assert(offsetof(FWorldConditionQuery, QueryState) == 0x000018, "Member 'FWorldConditionQuery::QueryState' has a wrong offset!");

struct FWorldConditionResult final
{
public:
	EWorldConditionResultValue                    Value;
	bool                                          bCanBeCached;
};
static_assert(alignof(FWorldConditionResult) == 0x000001, "Wrong alignment on FWorldConditionResult");
static_assert(sizeof(FWorldConditionResult) == 0x000002, "Wrong size on FWorldConditionResult");
static_assert(offsetof(FWorldConditionResult, Value) == 0x000000, "Member 'FWorldConditionResult::Value' has a wrong offset!");
static_assert(offsetof(FWorldConditionResult, bCanBeCached) == 0x000001, "Member 'FWorldConditionResult::bCanBeCached' has a wrong offset!");

struct FWorldConditionContextDataDesc final
{
public:
	class UStruct*                                Struct;
	class FName                                   Name;
	EWorldConditionContextDataType                Type;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FWorldConditionContextDataDesc) == 0x000008, "Wrong alignment on FWorldConditionContextDataDesc");
static_assert(sizeof(FWorldConditionContextDataDesc) == 0x000010, "Wrong size on FWorldConditionContextDataDesc");
static_assert(offsetof(FWorldConditionContextDataDesc, Struct) == 0x000000, "Member 'FWorldConditionContextDataDesc::Struct' has a wrong offset!");
static_assert(offsetof(FWorldConditionContextDataDesc, Name) == 0x000008, "Member 'FWorldConditionContextDataDesc::Name' has a wrong offset!");
static_assert(offsetof(FWorldConditionContextDataDesc, Type) == 0x00000C, "Member 'FWorldConditionContextDataDesc::Type' has a wrong offset!");

struct FWorldConditionContextDataRef final
{
public:
	class FName                                   Name;
	uint8                                         Index;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FWorldConditionContextDataRef) == 0x000004, "Wrong alignment on FWorldConditionContextDataRef");
static_assert(sizeof(FWorldConditionContextDataRef) == 0x000008, "Wrong size on FWorldConditionContextDataRef");
static_assert(offsetof(FWorldConditionContextDataRef, Name) == 0x000000, "Member 'FWorldConditionContextDataRef::Name' has a wrong offset!");
static_assert(offsetof(FWorldConditionContextDataRef, Index) == 0x000004, "Member 'FWorldConditionContextDataRef::Index' has a wrong offset!");

}
