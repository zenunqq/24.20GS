#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UBulletWhipTrackerComponent_Default_C : public UBulletWhipTrackerComponentBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletWhipTrackerComponent_Default_C">();
	}
	static class UBulletWhipTrackerComponent_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBulletWhipTrackerComponent_Default_C>();
	}
};
static_assert(alignof(UBulletWhipTrackerComponent_Default_C) == 0x000008, "Wrong alignment on UBulletWhipTrackerComponent_Default_C");
static_assert(sizeof(UBulletWhipTrackerComponent_Default_C) == 0x0000F8, "Wrong size on UBulletWhipTrackerComponent_Default_C");

}
