#pragma once

#include "Basic.hpp"

#include "GET_AfflictedParent_classes.hpp"

namespace SDK
{

class UGET_PeriodicDamageParent_C : public UGET_AfflictedParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_PeriodicDamageParent_C">();
	}
	static class UGET_PeriodicDamageParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_PeriodicDamageParent_C>();
	}
};
static_assert(alignof(UGET_PeriodicDamageParent_C) == 0x000008, "Wrong alignment on UGET_PeriodicDamageParent_C");
static_assert(sizeof(UGET_PeriodicDamageParent_C) == 0x000858, "Wrong size on UGET_PeriodicDamageParent_C");

}
