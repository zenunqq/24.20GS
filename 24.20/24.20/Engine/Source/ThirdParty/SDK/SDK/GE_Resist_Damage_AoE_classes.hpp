#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Resist_Damage_AoE_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Resist_Damage_AoE_C">();
	}
	static class UGE_Resist_Damage_AoE_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Resist_Damage_AoE_C>();
	}
};
static_assert(alignof(UGE_Resist_Damage_AoE_C) == 0x000008, "Wrong alignment on UGE_Resist_Damage_AoE_C");
static_assert(sizeof(UGE_Resist_Damage_AoE_C) == 0x000858, "Wrong size on UGE_Resist_Damage_AoE_C");

}
