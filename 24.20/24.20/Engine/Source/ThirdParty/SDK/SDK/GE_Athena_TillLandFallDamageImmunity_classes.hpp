#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Athena_TillLandFallDamageImmunity_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Athena_TillLandFallDamageImmunity_C">();
	}
	static class UGE_Athena_TillLandFallDamageImmunity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Athena_TillLandFallDamageImmunity_C>();
	}
};
static_assert(alignof(UGE_Athena_TillLandFallDamageImmunity_C) == 0x000008, "Wrong alignment on UGE_Athena_TillLandFallDamageImmunity_C");
static_assert(sizeof(UGE_Athena_TillLandFallDamageImmunity_C) == 0x000858, "Wrong size on UGE_Athena_TillLandFallDamageImmunity_C");

}
