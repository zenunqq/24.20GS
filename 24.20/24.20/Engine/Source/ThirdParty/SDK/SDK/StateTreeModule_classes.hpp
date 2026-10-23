#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "StateTreeModule_structs.hpp"
#include "StructUtils_structs.hpp"

namespace SDK
{

class UStateTreeNodeBlueprintBase : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UObject*                                CachedOwner;

public:
	void RequestTransition(const struct FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority);
	void SendEvent(const struct FStateTreeEvent& Event);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeNodeBlueprintBase">();
	}
	static class UStateTreeNodeBlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeNodeBlueprintBase>();
	}
};
static_assert(alignof(UStateTreeNodeBlueprintBase) == 0x000008, "Wrong alignment on UStateTreeNodeBlueprintBase");
static_assert(sizeof(UStateTreeNodeBlueprintBase) == 0x000040, "Wrong size on UStateTreeNodeBlueprintBase");
static_assert(offsetof(UStateTreeNodeBlueprintBase, CachedOwner) == 0x000038, "Member 'UStateTreeNodeBlueprintBase::CachedOwner' has a wrong offset!");

class UStateTreeConditionBlueprintBase final : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                         Pad_40[0x8];

public:
	bool ReceiveTestCondition() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeConditionBlueprintBase">();
	}
	static class UStateTreeConditionBlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeConditionBlueprintBase>();
	}
};
static_assert(alignof(UStateTreeConditionBlueprintBase) == 0x000008, "Wrong alignment on UStateTreeConditionBlueprintBase");
static_assert(sizeof(UStateTreeConditionBlueprintBase) == 0x000048, "Wrong size on UStateTreeConditionBlueprintBase");

class UStateTreeEvaluatorBlueprintBase final : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                         Pad_40[0x8];

public:
	void ReceiveTick(const float DeltaTime);
	void ReceiveTreeStart();
	void ReceiveTreeStop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeEvaluatorBlueprintBase">();
	}
	static class UStateTreeEvaluatorBlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeEvaluatorBlueprintBase>();
	}
};
static_assert(alignof(UStateTreeEvaluatorBlueprintBase) == 0x000008, "Wrong alignment on UStateTreeEvaluatorBlueprintBase");
static_assert(sizeof(UStateTreeEvaluatorBlueprintBase) == 0x000048, "Wrong size on UStateTreeEvaluatorBlueprintBase");

class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                         bShouldStateChangeOnReselect : 1;
	uint8                                         BitPad_40_1 : 1;
	uint8                                         bShouldCallTickOnlyOnEvents : 1;
	uint8                                         bShouldCopyBoundPropertiesOnTick : 1;
	uint8                                         bShouldCopyBoundPropertiesOnExitState : 1;
	uint8                                         Pad_41[0x7];

public:
	EStateTreeRunStatus ReceiveEnterState(const struct FStateTreeTransitionResult& TRANSITION);
	void ReceiveExitState(const struct FStateTreeTransitionResult& TRANSITION);
	void ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates);
	EStateTreeRunStatus ReceiveTick(const float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeTaskBlueprintBase">();
	}
	static class UStateTreeTaskBlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeTaskBlueprintBase>();
	}
};
static_assert(alignof(UStateTreeTaskBlueprintBase) == 0x000008, "Wrong alignment on UStateTreeTaskBlueprintBase");
static_assert(sizeof(UStateTreeTaskBlueprintBase) == 0x000048, "Wrong size on UStateTreeTaskBlueprintBase");

class UStateTree final : public UDataAsset
{
public:
	class UStateTreeSchema*                       Schema;
	TArray<struct FCompactStateTreeState>         States;
	TArray<struct FCompactStateTransition>        Transitions;
	struct FInstancedStructContainer              Nodes;
	struct FStateTreeInstanceData                 DefaultInstanceData;
	struct FStateTreeInstanceData                 SharedInstanceData;
	uint8                                         Pad_88[0x18];
	TArray<struct FStateTreeExternalDataDesc>     ContextDataDescs;
	struct FStateTreePropertyBindings             PropertyBindings;
	struct FInstancedPropertyBag                  Parameters;
	struct FStateTreeIndex8                       ParametersDataViewIndex;
	uint8                                         Pad_119[0x1];
	uint16                                        EvaluatorsBegin;
	uint16                                        EvaluatorsNum;
	uint16                                        GlobalTasksBegin;
	uint16                                        GlobalTasksNum;
	bool                                          bHasGlobalTransitionTasks;
	uint8                                         Pad_123[0x5];
	TArray<struct FStateTreeExternalDataDesc>     ExternalDataDescs;
	int32                                         ExternalDataBaseIndex;
	int32                                         NumDataViews;
	uint8                                         Pad_140[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTree">();
	}
	static class UStateTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTree>();
	}
};
static_assert(alignof(UStateTree) == 0x000008, "Wrong alignment on UStateTree");
static_assert(sizeof(UStateTree) == 0x000148, "Wrong size on UStateTree");
static_assert(offsetof(UStateTree, Schema) == 0x000030, "Member 'UStateTree::Schema' has a wrong offset!");
static_assert(offsetof(UStateTree, States) == 0x000038, "Member 'UStateTree::States' has a wrong offset!");
static_assert(offsetof(UStateTree, Transitions) == 0x000048, "Member 'UStateTree::Transitions' has a wrong offset!");
static_assert(offsetof(UStateTree, Nodes) == 0x000058, "Member 'UStateTree::Nodes' has a wrong offset!");
static_assert(offsetof(UStateTree, DefaultInstanceData) == 0x000068, "Member 'UStateTree::DefaultInstanceData' has a wrong offset!");
static_assert(offsetof(UStateTree, SharedInstanceData) == 0x000078, "Member 'UStateTree::SharedInstanceData' has a wrong offset!");
static_assert(offsetof(UStateTree, ContextDataDescs) == 0x0000A0, "Member 'UStateTree::ContextDataDescs' has a wrong offset!");
static_assert(offsetof(UStateTree, PropertyBindings) == 0x0000B0, "Member 'UStateTree::PropertyBindings' has a wrong offset!");
static_assert(offsetof(UStateTree, Parameters) == 0x000108, "Member 'UStateTree::Parameters' has a wrong offset!");
static_assert(offsetof(UStateTree, ParametersDataViewIndex) == 0x000118, "Member 'UStateTree::ParametersDataViewIndex' has a wrong offset!");
static_assert(offsetof(UStateTree, EvaluatorsBegin) == 0x00011A, "Member 'UStateTree::EvaluatorsBegin' has a wrong offset!");
static_assert(offsetof(UStateTree, EvaluatorsNum) == 0x00011C, "Member 'UStateTree::EvaluatorsNum' has a wrong offset!");
static_assert(offsetof(UStateTree, GlobalTasksBegin) == 0x00011E, "Member 'UStateTree::GlobalTasksBegin' has a wrong offset!");
static_assert(offsetof(UStateTree, GlobalTasksNum) == 0x000120, "Member 'UStateTree::GlobalTasksNum' has a wrong offset!");
static_assert(offsetof(UStateTree, bHasGlobalTransitionTasks) == 0x000122, "Member 'UStateTree::bHasGlobalTransitionTasks' has a wrong offset!");
static_assert(offsetof(UStateTree, ExternalDataDescs) == 0x000128, "Member 'UStateTree::ExternalDataDescs' has a wrong offset!");
static_assert(offsetof(UStateTree, ExternalDataBaseIndex) == 0x000138, "Member 'UStateTree::ExternalDataBaseIndex' has a wrong offset!");
static_assert(offsetof(UStateTree, NumDataViews) == 0x00013C, "Member 'UStateTree::NumDataViews' has a wrong offset!");

class UStateTreeSchema : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StateTreeSchema">();
	}
	static class UStateTreeSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStateTreeSchema>();
	}
};
static_assert(alignof(UStateTreeSchema) == 0x000008, "Wrong alignment on UStateTreeSchema");
static_assert(sizeof(UStateTreeSchema) == 0x000028, "Wrong size on UStateTreeSchema");

}
