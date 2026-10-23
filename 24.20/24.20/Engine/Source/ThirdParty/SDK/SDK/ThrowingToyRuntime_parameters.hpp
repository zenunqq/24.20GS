#pragma once

#include "Basic.hpp"

#include "ThrowingToyRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct ThrowingToyTrackerComponent_AddThrowingToy final
{
public:
	class AActor*                                 ThrowingToyActor;
	struct FGuid                                  WorldItemGuid;
};
static_assert(alignof(ThrowingToyTrackerComponent_AddThrowingToy) == 0x000008, "Wrong alignment on ThrowingToyTrackerComponent_AddThrowingToy");
static_assert(sizeof(ThrowingToyTrackerComponent_AddThrowingToy) == 0x000018, "Wrong size on ThrowingToyTrackerComponent_AddThrowingToy");
static_assert(offsetof(ThrowingToyTrackerComponent_AddThrowingToy, ThrowingToyActor) == 0x000000, "Member 'ThrowingToyTrackerComponent_AddThrowingToy::ThrowingToyActor' has a wrong offset!");
static_assert(offsetof(ThrowingToyTrackerComponent_AddThrowingToy, WorldItemGuid) == 0x000008, "Member 'ThrowingToyTrackerComponent_AddThrowingToy::WorldItemGuid' has a wrong offset!");

struct ThrowingToyTrackerComponent_GetAndReleaseThrowingToy final
{
public:
	struct FGuid                                  WorldItemGuid;
	class AActor*                                 ReturnValue;
};
static_assert(alignof(ThrowingToyTrackerComponent_GetAndReleaseThrowingToy) == 0x000008, "Wrong alignment on ThrowingToyTrackerComponent_GetAndReleaseThrowingToy");
static_assert(sizeof(ThrowingToyTrackerComponent_GetAndReleaseThrowingToy) == 0x000018, "Wrong size on ThrowingToyTrackerComponent_GetAndReleaseThrowingToy");
static_assert(offsetof(ThrowingToyTrackerComponent_GetAndReleaseThrowingToy, WorldItemGuid) == 0x000000, "Member 'ThrowingToyTrackerComponent_GetAndReleaseThrowingToy::WorldItemGuid' has a wrong offset!");
static_assert(offsetof(ThrowingToyTrackerComponent_GetAndReleaseThrowingToy, ReturnValue) == 0x000010, "Member 'ThrowingToyTrackerComponent_GetAndReleaseThrowingToy::ReturnValue' has a wrong offset!");

struct ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason final
{
public:
	EThrowingToyItemRemovedReason                 ReturnValue;
};
static_assert(alignof(ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason) == 0x000001, "Wrong alignment on ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason");
static_assert(sizeof(ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason) == 0x000001, "Wrong size on ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason");
static_assert(offsetof(ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason, ReturnValue) == 0x000000, "Member 'ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason::ReturnValue' has a wrong offset!");

struct ThrowingToyTrackerComponent_GetThrowingToy final
{
public:
	struct FGuid                                  WorldItemGuid;
	class AActor*                                 ReturnValue;
};
static_assert(alignof(ThrowingToyTrackerComponent_GetThrowingToy) == 0x000008, "Wrong alignment on ThrowingToyTrackerComponent_GetThrowingToy");
static_assert(sizeof(ThrowingToyTrackerComponent_GetThrowingToy) == 0x000018, "Wrong size on ThrowingToyTrackerComponent_GetThrowingToy");
static_assert(offsetof(ThrowingToyTrackerComponent_GetThrowingToy, WorldItemGuid) == 0x000000, "Member 'ThrowingToyTrackerComponent_GetThrowingToy::WorldItemGuid' has a wrong offset!");
static_assert(offsetof(ThrowingToyTrackerComponent_GetThrowingToy, ReturnValue) == 0x000010, "Member 'ThrowingToyTrackerComponent_GetThrowingToy::ReturnValue' has a wrong offset!");

struct ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason final
{
public:
	EThrowingToyItemRemovedReason                 RemovedReason;
};
static_assert(alignof(ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason) == 0x000001, "Wrong alignment on ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason");
static_assert(sizeof(ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason) == 0x000001, "Wrong size on ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason");
static_assert(offsetof(ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason, RemovedReason) == 0x000000, "Member 'ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason::RemovedReason' has a wrong offset!");

}
