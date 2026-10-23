#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_TankSwitchSeat_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_TankSwitchSeat_C">();
	}
	static class UBBE_TankSwitchSeat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_TankSwitchSeat_C>();
	}
};
static_assert(alignof(UBBE_TankSwitchSeat_C) == 0x000008, "Wrong alignment on UBBE_TankSwitchSeat_C");
static_assert(sizeof(UBBE_TankSwitchSeat_C) == 0x000070, "Wrong size on UBBE_TankSwitchSeat_C");

}
