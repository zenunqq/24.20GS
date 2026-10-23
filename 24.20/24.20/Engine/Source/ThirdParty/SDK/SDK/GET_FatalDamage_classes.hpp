#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGET_FatalDamage_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_FatalDamage_C">();
	}
	static class UGET_FatalDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_FatalDamage_C>();
	}
};
static_assert(alignof(UGET_FatalDamage_C) == 0x000008, "Wrong alignment on UGET_FatalDamage_C");
static_assert(sizeof(UGET_FatalDamage_C) == 0x000858, "Wrong size on UGET_FatalDamage_C");

}
