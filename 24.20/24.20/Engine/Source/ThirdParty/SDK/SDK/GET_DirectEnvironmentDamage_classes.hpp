#pragma once

#include "Basic.hpp"

#include "Get_DirectDamageParent_classes.hpp"

namespace SDK
{

class UGET_DirectEnvironmentDamage_C final : public UGet_DirectDamageParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectEnvironmentDamage_C">();
	}
	static class UGET_DirectEnvironmentDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectEnvironmentDamage_C>();
	}
};
static_assert(alignof(UGET_DirectEnvironmentDamage_C) == 0x000008, "Wrong alignment on UGET_DirectEnvironmentDamage_C");
static_assert(sizeof(UGET_DirectEnvironmentDamage_C) == 0x000858, "Wrong size on UGET_DirectEnvironmentDamage_C");

}
