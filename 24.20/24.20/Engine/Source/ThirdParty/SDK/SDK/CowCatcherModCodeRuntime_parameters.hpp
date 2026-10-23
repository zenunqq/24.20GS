#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged final
{
public:
	bool                                          bBlockedByPawn;
};
static_assert(alignof(CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged) == 0x000001, "Wrong alignment on CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged");
static_assert(sizeof(CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged) == 0x000001, "Wrong size on CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged");
static_assert(offsetof(CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged, bBlockedByPawn) == 0x000000, "Member 'CowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged::bBlockedByPawn' has a wrong offset!");

}
