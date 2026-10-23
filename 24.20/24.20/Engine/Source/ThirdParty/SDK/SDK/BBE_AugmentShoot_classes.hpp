#pragma once

#include "Basic.hpp"

#include "PlayerAugmentsUI_classes.hpp"

namespace SDK
{

class UBBE_AugmentShoot_C final : public UFortMobileActionBBE_AugmentShoot
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_AugmentShoot_C">();
	}
	static class UBBE_AugmentShoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_AugmentShoot_C>();
	}
};
static_assert(alignof(UBBE_AugmentShoot_C) == 0x000008, "Wrong alignment on UBBE_AugmentShoot_C");
static_assert(sizeof(UBBE_AugmentShoot_C) == 0x000080, "Wrong size on UBBE_AugmentShoot_C");

}
