#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGET_EnergyCost_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_EnergyCost_C">();
	}
	static class UGET_EnergyCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_EnergyCost_C>();
	}
};
static_assert(alignof(UGET_EnergyCost_C) == 0x000008, "Wrong alignment on UGET_EnergyCost_C");
static_assert(sizeof(UGET_EnergyCost_C) == 0x000858, "Wrong size on UGET_EnergyCost_C");

}
