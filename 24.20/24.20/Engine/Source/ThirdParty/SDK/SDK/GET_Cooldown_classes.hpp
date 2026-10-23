#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGET_Cooldown_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_Cooldown_C">();
	}
	static class UGET_Cooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_Cooldown_C>();
	}
};
static_assert(alignof(UGET_Cooldown_C) == 0x000008, "Wrong alignment on UGET_Cooldown_C");
static_assert(sizeof(UGET_Cooldown_C) == 0x000858, "Wrong size on UGET_Cooldown_C");

}
