#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_VehicleBoost_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_VehicleBoost_C">();
	}
	static class UBBE_VehicleBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_VehicleBoost_C>();
	}
};
static_assert(alignof(UBBE_VehicleBoost_C) == 0x000008, "Wrong alignment on UBBE_VehicleBoost_C");
static_assert(sizeof(UBBE_VehicleBoost_C) == 0x000070, "Wrong size on UBBE_VehicleBoost_C");

}
