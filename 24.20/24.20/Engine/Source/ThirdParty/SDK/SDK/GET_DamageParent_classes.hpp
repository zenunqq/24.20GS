#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGET_DamageParent_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DamageParent_C">();
	}
	static class UGET_DamageParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DamageParent_C>();
	}
};
static_assert(alignof(UGET_DamageParent_C) == 0x000008, "Wrong alignment on UGET_DamageParent_C");
static_assert(sizeof(UGET_DamageParent_C) == 0x000858, "Wrong size on UGET_DamageParent_C");

}
