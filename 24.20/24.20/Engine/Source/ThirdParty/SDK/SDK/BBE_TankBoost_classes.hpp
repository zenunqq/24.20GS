#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_TankBoost_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_TankBoost_C">();
	}
	static class UBBE_TankBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_TankBoost_C>();
	}
};
static_assert(alignof(UBBE_TankBoost_C) == 0x000008, "Wrong alignment on UBBE_TankBoost_C");
static_assert(sizeof(UBBE_TankBoost_C) == 0x000070, "Wrong size on UBBE_TankBoost_C");

}
