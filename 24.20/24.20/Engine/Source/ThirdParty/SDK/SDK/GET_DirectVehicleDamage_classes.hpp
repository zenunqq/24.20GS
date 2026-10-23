#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGET_DirectVehicleDamage_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectVehicleDamage_C">();
	}
	static class UGET_DirectVehicleDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectVehicleDamage_C>();
	}
};
static_assert(alignof(UGET_DirectVehicleDamage_C) == 0x000008, "Wrong alignment on UGET_DirectVehicleDamage_C");
static_assert(sizeof(UGET_DirectVehicleDamage_C) == 0x000858, "Wrong size on UGET_DirectVehicleDamage_C");

}
