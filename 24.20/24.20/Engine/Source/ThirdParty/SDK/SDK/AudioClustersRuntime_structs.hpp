#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FAudioClusterActorInfo final
{
public:
	TWeakObjectPtr<class AActor>                  Actor;
	struct FGameplayTag                           tag;
};
static_assert(alignof(FAudioClusterActorInfo) == 0x000004, "Wrong alignment on FAudioClusterActorInfo");
static_assert(sizeof(FAudioClusterActorInfo) == 0x00000C, "Wrong size on FAudioClusterActorInfo");
static_assert(offsetof(FAudioClusterActorInfo, Actor) == 0x000000, "Member 'FAudioClusterActorInfo::Actor' has a wrong offset!");
static_assert(offsetof(FAudioClusterActorInfo, tag) == 0x000008, "Member 'FAudioClusterActorInfo::tag' has a wrong offset!");

struct FAudioClusterOneShotInfo final
{
public:
	struct FGameplayTag                           tag;
	uint8                                         Pad_4[0x4];
	struct FVector                                Position;
	float                                         LifetimeSeconds;
	float                                         TimeRemainingSeconds;
};
static_assert(alignof(FAudioClusterOneShotInfo) == 0x000008, "Wrong alignment on FAudioClusterOneShotInfo");
static_assert(sizeof(FAudioClusterOneShotInfo) == 0x000028, "Wrong size on FAudioClusterOneShotInfo");
static_assert(offsetof(FAudioClusterOneShotInfo, tag) == 0x000000, "Member 'FAudioClusterOneShotInfo::tag' has a wrong offset!");
static_assert(offsetof(FAudioClusterOneShotInfo, Position) == 0x000008, "Member 'FAudioClusterOneShotInfo::Position' has a wrong offset!");
static_assert(offsetof(FAudioClusterOneShotInfo, LifetimeSeconds) == 0x000020, "Member 'FAudioClusterOneShotInfo::LifetimeSeconds' has a wrong offset!");
static_assert(offsetof(FAudioClusterOneShotInfo, TimeRemainingSeconds) == 0x000024, "Member 'FAudioClusterOneShotInfo::TimeRemainingSeconds' has a wrong offset!");

}
