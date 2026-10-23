#pragma once

#include "Basic.hpp"

#include "GET_PeriodicPhysicalDamage_classes.hpp"

namespace SDK
{

class UGET_PeriodicEnergyDamage_C : public UGET_PeriodicPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_PeriodicEnergyDamage_C">();
	}
	static class UGET_PeriodicEnergyDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_PeriodicEnergyDamage_C>();
	}
};
static_assert(alignof(UGET_PeriodicEnergyDamage_C) == 0x000008, "Wrong alignment on UGET_PeriodicEnergyDamage_C");
static_assert(sizeof(UGET_PeriodicEnergyDamage_C) == 0x000858, "Wrong size on UGET_PeriodicEnergyDamage_C");

}
