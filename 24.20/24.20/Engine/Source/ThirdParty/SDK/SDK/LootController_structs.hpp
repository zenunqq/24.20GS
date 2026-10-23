#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FBuildingContainersArrayEntry final
{
public:
	class ABuildingContainer*                     BuildingContainer;
	uint8                                         Pad_8[0x8];
	struct FTransform                             Transform;
	class FName                                   SearchLootTierGroup;
	uint8                                         Pad_74[0x4];
	struct FGameplayTagContainer                  GameplayTags;
	uint8                                         Pad_98[0x8];
};
static_assert(alignof(FBuildingContainersArrayEntry) == 0x000010, "Wrong alignment on FBuildingContainersArrayEntry");
static_assert(sizeof(FBuildingContainersArrayEntry) == 0x0000A0, "Wrong size on FBuildingContainersArrayEntry");
static_assert(offsetof(FBuildingContainersArrayEntry, BuildingContainer) == 0x000000, "Member 'FBuildingContainersArrayEntry::BuildingContainer' has a wrong offset!");
static_assert(offsetof(FBuildingContainersArrayEntry, Transform) == 0x000010, "Member 'FBuildingContainersArrayEntry::Transform' has a wrong offset!");
static_assert(offsetof(FBuildingContainersArrayEntry, SearchLootTierGroup) == 0x000070, "Member 'FBuildingContainersArrayEntry::SearchLootTierGroup' has a wrong offset!");
static_assert(offsetof(FBuildingContainersArrayEntry, GameplayTags) == 0x000078, "Member 'FBuildingContainersArrayEntry::GameplayTags' has a wrong offset!");

struct FBuildingContainersFoundEntry final
{
public:
	struct FGameplayTag                           GameplayTag;
	uint8                                         Pad_4[0x4];
	TArray<struct FBuildingContainersArrayEntry>  BuildingContainers;
};
static_assert(alignof(FBuildingContainersFoundEntry) == 0x000008, "Wrong alignment on FBuildingContainersFoundEntry");
static_assert(sizeof(FBuildingContainersFoundEntry) == 0x000018, "Wrong size on FBuildingContainersFoundEntry");
static_assert(offsetof(FBuildingContainersFoundEntry, GameplayTag) == 0x000000, "Member 'FBuildingContainersFoundEntry::GameplayTag' has a wrong offset!");
static_assert(offsetof(FBuildingContainersFoundEntry, BuildingContainers) == 0x000008, "Member 'FBuildingContainersFoundEntry::BuildingContainers' has a wrong offset!");

}
