#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_Rock_VehicleExit_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_Rock_VehicleExit_C">();
	}
	static class UBBE_Rock_VehicleExit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_Rock_VehicleExit_C>();
	}
};
static_assert(alignof(UBBE_Rock_VehicleExit_C) == 0x000008, "Wrong alignment on UBBE_Rock_VehicleExit_C");
static_assert(sizeof(UBBE_Rock_VehicleExit_C) == 0x000070, "Wrong size on UBBE_Rock_VehicleExit_C");

}
