#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_TankExit_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_TankExit_C">();
	}
	static class UBBE_TankExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_TankExit_C>();
	}
};
static_assert(alignof(UBBE_TankExit_C) == 0x000008, "Wrong alignment on UBBE_TankExit_C");
static_assert(sizeof(UBBE_TankExit_C) == 0x000070, "Wrong size on UBBE_TankExit_C");

}
