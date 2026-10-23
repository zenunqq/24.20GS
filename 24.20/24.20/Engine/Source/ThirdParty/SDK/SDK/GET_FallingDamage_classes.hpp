#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGET_FallingDamage_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_FallingDamage_C">();
	}
	static class UGET_FallingDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_FallingDamage_C>();
	}
};
static_assert(alignof(UGET_FallingDamage_C) == 0x000008, "Wrong alignment on UGET_FallingDamage_C");
static_assert(sizeof(UGET_FallingDamage_C) == 0x000858, "Wrong size on UGET_FallingDamage_C");

}
