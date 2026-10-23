#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGET_CooldownDuration_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_CooldownDuration_C">();
	}
	static class UGET_CooldownDuration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_CooldownDuration_C>();
	}
};
static_assert(alignof(UGET_CooldownDuration_C) == 0x000008, "Wrong alignment on UGET_CooldownDuration_C");
static_assert(sizeof(UGET_CooldownDuration_C) == 0x000858, "Wrong size on UGET_CooldownDuration_C");

}
