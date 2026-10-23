#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FScoutDroneWidgetIdentifier final
{
public:
	struct FGameplayTagContainer                  Tags;
	TWeakObjectPtr<class UWidget>                 WeakWdiget;
};
static_assert(alignof(FScoutDroneWidgetIdentifier) == 0x000008, "Wrong alignment on FScoutDroneWidgetIdentifier");
static_assert(sizeof(FScoutDroneWidgetIdentifier) == 0x000028, "Wrong size on FScoutDroneWidgetIdentifier");
static_assert(offsetof(FScoutDroneWidgetIdentifier, Tags) == 0x000000, "Member 'FScoutDroneWidgetIdentifier::Tags' has a wrong offset!");
static_assert(offsetof(FScoutDroneWidgetIdentifier, WeakWdiget) == 0x000020, "Member 'FScoutDroneWidgetIdentifier::WeakWdiget' has a wrong offset!");

}
