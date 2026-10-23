#pragma once

#include "Basic.hpp"

#include "GET_DirectPhysicalDamage_classes.hpp"

namespace SDK
{

class UGE_Blade_LeapSlam_BuildingDestroy_C final : public UGET_DirectPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Blade_LeapSlam_BuildingDestroy_C">();
	}
	static class UGE_Blade_LeapSlam_BuildingDestroy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Blade_LeapSlam_BuildingDestroy_C>();
	}
};
static_assert(alignof(UGE_Blade_LeapSlam_BuildingDestroy_C) == 0x000008, "Wrong alignment on UGE_Blade_LeapSlam_BuildingDestroy_C");
static_assert(sizeof(UGE_Blade_LeapSlam_BuildingDestroy_C) == 0x000858, "Wrong size on UGE_Blade_LeapSlam_BuildingDestroy_C");

}
