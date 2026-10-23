#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "NetCore_structs.hpp"

namespace SDK
{

struct FGameplayStateTransition final
{
public:
	struct FGameplayTagContainer                  TransitionConditionTags;
	struct FGameplayTag                           TransitionStateTag;
	float                                         BeginStateDelay;
};
static_assert(alignof(FGameplayStateTransition) == 0x000008, "Wrong alignment on FGameplayStateTransition");
static_assert(sizeof(FGameplayStateTransition) == 0x000028, "Wrong size on FGameplayStateTransition");
static_assert(offsetof(FGameplayStateTransition, TransitionConditionTags) == 0x000000, "Member 'FGameplayStateTransition::TransitionConditionTags' has a wrong offset!");
static_assert(offsetof(FGameplayStateTransition, TransitionStateTag) == 0x000020, "Member 'FGameplayStateTransition::TransitionStateTag' has a wrong offset!");
static_assert(offsetof(FGameplayStateTransition, BeginStateDelay) == 0x000024, "Member 'FGameplayStateTransition::BeginStateDelay' has a wrong offset!");

struct FGameplayStateSettings final
{
public:
	TSubclassOf<class UGameplayState>             StateClass;
	struct FGameplayTag                           StateId;
	uint8                                         Pad_C[0x4];
	TArray<struct FGameplayStateTransition>       StateTransitions;
};
static_assert(alignof(FGameplayStateSettings) == 0x000008, "Wrong alignment on FGameplayStateSettings");
static_assert(sizeof(FGameplayStateSettings) == 0x000020, "Wrong size on FGameplayStateSettings");
static_assert(offsetof(FGameplayStateSettings, StateClass) == 0x000000, "Member 'FGameplayStateSettings::StateClass' has a wrong offset!");
static_assert(offsetof(FGameplayStateSettings, StateId) == 0x000008, "Member 'FGameplayStateSettings::StateId' has a wrong offset!");
static_assert(offsetof(FGameplayStateSettings, StateTransitions) == 0x000010, "Member 'FGameplayStateSettings::StateTransitions' has a wrong offset!");

struct FActiveGameplayStateData final
{
public:
	class UGameplayState*                         GameplayState;
	struct FGameplayTag                           PreviousStateId;
	float                                         BeginStateDelay;
	float                                         InitializationTime;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FActiveGameplayStateData) == 0x000008, "Wrong alignment on FActiveGameplayStateData");
static_assert(sizeof(FActiveGameplayStateData) == 0x000018, "Wrong size on FActiveGameplayStateData");
static_assert(offsetof(FActiveGameplayStateData, GameplayState) == 0x000000, "Member 'FActiveGameplayStateData::GameplayState' has a wrong offset!");
static_assert(offsetof(FActiveGameplayStateData, PreviousStateId) == 0x000008, "Member 'FActiveGameplayStateData::PreviousStateId' has a wrong offset!");
static_assert(offsetof(FActiveGameplayStateData, BeginStateDelay) == 0x00000C, "Member 'FActiveGameplayStateData::BeginStateDelay' has a wrong offset!");
static_assert(offsetof(FActiveGameplayStateData, InitializationTime) == 0x000010, "Member 'FActiveGameplayStateData::InitializationTime' has a wrong offset!");

struct FGameplayStateMachineItem final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_C[0x4];
	class UGameplayStateMachine*                  StateMachine;
	float                                         BeginStateDelay;
	float                                         InitializationTime;
};
static_assert(alignof(FGameplayStateMachineItem) == 0x000008, "Wrong alignment on FGameplayStateMachineItem");
static_assert(sizeof(FGameplayStateMachineItem) == 0x000020, "Wrong size on FGameplayStateMachineItem");
static_assert(offsetof(FGameplayStateMachineItem, StateMachine) == 0x000010, "Member 'FGameplayStateMachineItem::StateMachine' has a wrong offset!");
static_assert(offsetof(FGameplayStateMachineItem, BeginStateDelay) == 0x000018, "Member 'FGameplayStateMachineItem::BeginStateDelay' has a wrong offset!");
static_assert(offsetof(FGameplayStateMachineItem, InitializationTime) == 0x00001C, "Member 'FGameplayStateMachineItem::InitializationTime' has a wrong offset!");

struct FGameplayStateMachineArray final : public FFastArraySerializer
{
public:
	class UGameplayStateMachineManager*           StateMachineManager;
	TArray<struct FGameplayStateMachineItem>      StateMachineItems;
};
static_assert(alignof(FGameplayStateMachineArray) == 0x000008, "Wrong alignment on FGameplayStateMachineArray");
static_assert(sizeof(FGameplayStateMachineArray) == 0x000120, "Wrong size on FGameplayStateMachineArray");
static_assert(offsetof(FGameplayStateMachineArray, StateMachineManager) == 0x000108, "Member 'FGameplayStateMachineArray::StateMachineManager' has a wrong offset!");
static_assert(offsetof(FGameplayStateMachineArray, StateMachineItems) == 0x000110, "Member 'FGameplayStateMachineArray::StateMachineItems' has a wrong offset!");

}
