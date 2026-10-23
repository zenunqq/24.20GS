#pragma once

#include "Basic.hpp"

#include "StateTreeModule_structs.hpp"

namespace SDK::Params
{

struct StateTreeNodeBlueprintBase_RequestTransition final
{
public:
	struct FStateTreeStateLink                    TargetState;
	EStateTreeTransitionPriority                  Priority;
	uint8                                         Pad_3[0x1];
};
static_assert(alignof(StateTreeNodeBlueprintBase_RequestTransition) == 0x000002, "Wrong alignment on StateTreeNodeBlueprintBase_RequestTransition");
static_assert(sizeof(StateTreeNodeBlueprintBase_RequestTransition) == 0x000004, "Wrong size on StateTreeNodeBlueprintBase_RequestTransition");
static_assert(offsetof(StateTreeNodeBlueprintBase_RequestTransition, TargetState) == 0x000000, "Member 'StateTreeNodeBlueprintBase_RequestTransition::TargetState' has a wrong offset!");
static_assert(offsetof(StateTreeNodeBlueprintBase_RequestTransition, Priority) == 0x000002, "Member 'StateTreeNodeBlueprintBase_RequestTransition::Priority' has a wrong offset!");

struct StateTreeNodeBlueprintBase_SendEvent final
{
public:
	struct FStateTreeEvent                        Event;
};
static_assert(alignof(StateTreeNodeBlueprintBase_SendEvent) == 0x000008, "Wrong alignment on StateTreeNodeBlueprintBase_SendEvent");
static_assert(sizeof(StateTreeNodeBlueprintBase_SendEvent) == 0x000020, "Wrong size on StateTreeNodeBlueprintBase_SendEvent");
static_assert(offsetof(StateTreeNodeBlueprintBase_SendEvent, Event) == 0x000000, "Member 'StateTreeNodeBlueprintBase_SendEvent::Event' has a wrong offset!");

struct StateTreeConditionBlueprintBase_ReceiveTestCondition final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(StateTreeConditionBlueprintBase_ReceiveTestCondition) == 0x000001, "Wrong alignment on StateTreeConditionBlueprintBase_ReceiveTestCondition");
static_assert(sizeof(StateTreeConditionBlueprintBase_ReceiveTestCondition) == 0x000001, "Wrong size on StateTreeConditionBlueprintBase_ReceiveTestCondition");
static_assert(offsetof(StateTreeConditionBlueprintBase_ReceiveTestCondition, ReturnValue) == 0x000000, "Member 'StateTreeConditionBlueprintBase_ReceiveTestCondition::ReturnValue' has a wrong offset!");

struct StateTreeEvaluatorBlueprintBase_ReceiveTick final
{
public:
	float                                         DeltaTime;
};
static_assert(alignof(StateTreeEvaluatorBlueprintBase_ReceiveTick) == 0x000004, "Wrong alignment on StateTreeEvaluatorBlueprintBase_ReceiveTick");
static_assert(sizeof(StateTreeEvaluatorBlueprintBase_ReceiveTick) == 0x000004, "Wrong size on StateTreeEvaluatorBlueprintBase_ReceiveTick");
static_assert(offsetof(StateTreeEvaluatorBlueprintBase_ReceiveTick, DeltaTime) == 0x000000, "Member 'StateTreeEvaluatorBlueprintBase_ReceiveTick::DeltaTime' has a wrong offset!");

struct StateTreeTaskBlueprintBase_ReceiveEnterState final
{
public:
	struct FStateTreeTransitionResult             TRANSITION;
	EStateTreeRunStatus                           ReturnValue;
	uint8                                         Pad_2F[0x1];
};
static_assert(alignof(StateTreeTaskBlueprintBase_ReceiveEnterState) == 0x000002, "Wrong alignment on StateTreeTaskBlueprintBase_ReceiveEnterState");
static_assert(sizeof(StateTreeTaskBlueprintBase_ReceiveEnterState) == 0x000030, "Wrong size on StateTreeTaskBlueprintBase_ReceiveEnterState");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveEnterState, TRANSITION) == 0x000000, "Member 'StateTreeTaskBlueprintBase_ReceiveEnterState::TRANSITION' has a wrong offset!");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveEnterState, ReturnValue) == 0x00002E, "Member 'StateTreeTaskBlueprintBase_ReceiveEnterState::ReturnValue' has a wrong offset!");

struct StateTreeTaskBlueprintBase_ReceiveExitState final
{
public:
	struct FStateTreeTransitionResult             TRANSITION;
};
static_assert(alignof(StateTreeTaskBlueprintBase_ReceiveExitState) == 0x000002, "Wrong alignment on StateTreeTaskBlueprintBase_ReceiveExitState");
static_assert(sizeof(StateTreeTaskBlueprintBase_ReceiveExitState) == 0x00002E, "Wrong size on StateTreeTaskBlueprintBase_ReceiveExitState");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveExitState, TRANSITION) == 0x000000, "Member 'StateTreeTaskBlueprintBase_ReceiveExitState::TRANSITION' has a wrong offset!");

struct StateTreeTaskBlueprintBase_ReceiveStateCompleted final
{
public:
	EStateTreeRunStatus                           CompletionStatus;
	uint8                                         Pad_1[0x1];
	struct FStateTreeActiveStates                 CompletedActiveStates;
};
static_assert(alignof(StateTreeTaskBlueprintBase_ReceiveStateCompleted) == 0x000002, "Wrong alignment on StateTreeTaskBlueprintBase_ReceiveStateCompleted");
static_assert(sizeof(StateTreeTaskBlueprintBase_ReceiveStateCompleted) == 0x000014, "Wrong size on StateTreeTaskBlueprintBase_ReceiveStateCompleted");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveStateCompleted, CompletionStatus) == 0x000000, "Member 'StateTreeTaskBlueprintBase_ReceiveStateCompleted::CompletionStatus' has a wrong offset!");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveStateCompleted, CompletedActiveStates) == 0x000002, "Member 'StateTreeTaskBlueprintBase_ReceiveStateCompleted::CompletedActiveStates' has a wrong offset!");

struct StateTreeTaskBlueprintBase_ReceiveTick final
{
public:
	float                                         DeltaTime;
	EStateTreeRunStatus                           ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(StateTreeTaskBlueprintBase_ReceiveTick) == 0x000004, "Wrong alignment on StateTreeTaskBlueprintBase_ReceiveTick");
static_assert(sizeof(StateTreeTaskBlueprintBase_ReceiveTick) == 0x000008, "Wrong size on StateTreeTaskBlueprintBase_ReceiveTick");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveTick, DeltaTime) == 0x000000, "Member 'StateTreeTaskBlueprintBase_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(StateTreeTaskBlueprintBase_ReceiveTick, ReturnValue) == 0x000004, "Member 'StateTreeTaskBlueprintBase_ReceiveTick::ReturnValue' has a wrong offset!");

}
