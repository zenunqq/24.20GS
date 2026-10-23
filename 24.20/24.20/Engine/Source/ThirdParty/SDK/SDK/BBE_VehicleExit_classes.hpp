#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_VehicleExit_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_VehicleExit_C">();
	}
	static class UBBE_VehicleExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_VehicleExit_C>();
	}
};
static_assert(alignof(UBBE_VehicleExit_C) == 0x000008, "Wrong alignment on UBBE_VehicleExit_C");
static_assert(sizeof(UBBE_VehicleExit_C) == 0x000070, "Wrong size on UBBE_VehicleExit_C");

}
