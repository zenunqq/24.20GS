#pragma once

#include "Basic.hpp"

#include "BulletWhipTrackerComponent_Default_classes.hpp"

namespace SDK
{

class UAthena_Grenade_Base_WhipTracker_C final : public UBulletWhipTrackerComponent_Default_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Grenade_Base_WhipTracker_C">();
	}
	static class UAthena_Grenade_Base_WhipTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_Grenade_Base_WhipTracker_C>();
	}
};
static_assert(alignof(UAthena_Grenade_Base_WhipTracker_C) == 0x000008, "Wrong alignment on UAthena_Grenade_Base_WhipTracker_C");
static_assert(sizeof(UAthena_Grenade_Base_WhipTracker_C) == 0x0000F8, "Wrong size on UAthena_Grenade_Base_WhipTracker_C");

}
