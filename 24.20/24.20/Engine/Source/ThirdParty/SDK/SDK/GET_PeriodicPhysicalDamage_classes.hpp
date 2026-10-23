#pragma once

#include "Basic.hpp"

#include "GET_PeriodicDamageParent_classes.hpp"

namespace SDK
{

class UGET_PeriodicPhysicalDamage_C : public UGET_PeriodicDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_PeriodicPhysicalDamage_C">();
	}
	static class UGET_PeriodicPhysicalDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_PeriodicPhysicalDamage_C>();
	}
};
static_assert(alignof(UGET_PeriodicPhysicalDamage_C) == 0x000008, "Wrong alignment on UGET_PeriodicPhysicalDamage_C");
static_assert(sizeof(UGET_PeriodicPhysicalDamage_C) == 0x000858, "Wrong size on UGET_PeriodicPhysicalDamage_C");

}
