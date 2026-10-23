#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_SiphonEffect_Heal_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_SiphonEffect_Heal_C">();
	}
	static class UGE_SiphonEffect_Heal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_SiphonEffect_Heal_C>();
	}
};
static_assert(alignof(UGE_SiphonEffect_Heal_C) == 0x000008, "Wrong alignment on UGE_SiphonEffect_Heal_C");
static_assert(sizeof(UGE_SiphonEffect_Heal_C) == 0x000858, "Wrong size on UGE_SiphonEffect_Heal_C");

}
