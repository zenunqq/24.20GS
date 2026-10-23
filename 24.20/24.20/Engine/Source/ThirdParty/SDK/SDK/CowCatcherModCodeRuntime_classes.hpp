#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ACowCatcherBarricadeBase final : public ABuildingGameplayActor
{
public:
	uint8                                         Pad_A30[0x8];

public:
	void BeginCheckingForTouchingPawns();
	void OnPlacementBlockedByPawnChanged(const bool bBlockedByPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CowCatcherBarricadeBase">();
	}
	static class ACowCatcherBarricadeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACowCatcherBarricadeBase>();
	}
};
static_assert(alignof(ACowCatcherBarricadeBase) == 0x000008, "Wrong alignment on ACowCatcherBarricadeBase");
static_assert(sizeof(ACowCatcherBarricadeBase) == 0x000A38, "Wrong size on ACowCatcherBarricadeBase");

}
