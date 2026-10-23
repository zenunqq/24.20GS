#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EGameplayBehaviorInstantiationPolicy : uint8
{
	Instantiate                              = 0,
	ConditionallyInstantiate                 = 1,
	DontInstantiate                          = 2,
	EGameplayBehaviorInstantiationPolicy_MAX = 3,
};

struct FAgentGameplayBehaviors final
{
public:
	TArray<class UGameplayBehavior*>              Behaviors;
};
static_assert(alignof(FAgentGameplayBehaviors) == 0x000008, "Wrong alignment on FAgentGameplayBehaviors");
static_assert(sizeof(FAgentGameplayBehaviors) == 0x000010, "Wrong size on FAgentGameplayBehaviors");
static_assert(offsetof(FAgentGameplayBehaviors, Behaviors) == 0x000000, "Member 'FAgentGameplayBehaviors::Behaviors' has a wrong offset!");

struct FMontagePlaybackData final
{
public:
	class AActor*                                 Avatar;
	class UAnimMontage*                           AnimMontage;
	class UAbilitySystemComponent*                AbilityComponent;
	uint8                                         Pad_18[0x28];
};
static_assert(alignof(FMontagePlaybackData) == 0x000008, "Wrong alignment on FMontagePlaybackData");
static_assert(sizeof(FMontagePlaybackData) == 0x000040, "Wrong size on FMontagePlaybackData");
static_assert(offsetof(FMontagePlaybackData, Avatar) == 0x000000, "Member 'FMontagePlaybackData::Avatar' has a wrong offset!");
static_assert(offsetof(FMontagePlaybackData, AnimMontage) == 0x000008, "Member 'FMontagePlaybackData::AnimMontage' has a wrong offset!");
static_assert(offsetof(FMontagePlaybackData, AbilityComponent) == 0x000010, "Member 'FMontagePlaybackData::AbilityComponent' has a wrong offset!");

}
