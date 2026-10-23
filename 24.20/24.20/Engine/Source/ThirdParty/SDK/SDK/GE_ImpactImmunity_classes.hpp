#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_ImpactImmunity_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ImpactImmunity_C">();
	}
	static class UGE_ImpactImmunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ImpactImmunity_C>();
	}
};
static_assert(alignof(UGE_ImpactImmunity_C) == 0x000008, "Wrong alignment on UGE_ImpactImmunity_C");
static_assert(sizeof(UGE_ImpactImmunity_C) == 0x000858, "Wrong size on UGE_ImpactImmunity_C");

}
