#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_TankHonk_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_TankHonk_C">();
	}
	static class UBBE_TankHonk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_TankHonk_C>();
	}
};
static_assert(alignof(UBBE_TankHonk_C) == 0x000008, "Wrong alignment on UBBE_TankHonk_C");
static_assert(sizeof(UBBE_TankHonk_C) == 0x000070, "Wrong size on UBBE_TankHonk_C");

}
