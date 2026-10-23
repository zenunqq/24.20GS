#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBulletWhipTrackerComponent_Crossbow_C final : public UBulletWhipTrackerComponentBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletWhipTrackerComponent_Crossbow_C">();
	}
	static class UBulletWhipTrackerComponent_Crossbow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBulletWhipTrackerComponent_Crossbow_C>();
	}
};
static_assert(alignof(UBulletWhipTrackerComponent_Crossbow_C) == 0x000008, "Wrong alignment on UBulletWhipTrackerComponent_Crossbow_C");
static_assert(sizeof(UBulletWhipTrackerComponent_Crossbow_C) == 0x0000F8, "Wrong size on UBulletWhipTrackerComponent_Crossbow_C");

}
