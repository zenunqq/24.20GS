#pragma once

#include "Basic.hpp"

#include "GET_DirectPhysicalDamage_classes.hpp"

namespace SDK
{

class UGET_DirectEnergyDamage_C : public UGET_DirectPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectEnergyDamage_C">();
	}
	static class UGET_DirectEnergyDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectEnergyDamage_C>();
	}
};
static_assert(alignof(UGET_DirectEnergyDamage_C) == 0x000008, "Wrong alignment on UGET_DirectEnergyDamage_C");
static_assert(sizeof(UGET_DirectEnergyDamage_C) == 0x000858, "Wrong size on UGET_DirectEnergyDamage_C");

}
