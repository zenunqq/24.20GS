#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGET_DirectPhysicalDamage_C : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectPhysicalDamage_C">();
	}
	static class UGET_DirectPhysicalDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectPhysicalDamage_C>();
	}
};
static_assert(alignof(UGET_DirectPhysicalDamage_C) == 0x000008, "Wrong alignment on UGET_DirectPhysicalDamage_C");
static_assert(sizeof(UGET_DirectPhysicalDamage_C) == 0x000858, "Wrong size on UGET_DirectPhysicalDamage_C");

}
