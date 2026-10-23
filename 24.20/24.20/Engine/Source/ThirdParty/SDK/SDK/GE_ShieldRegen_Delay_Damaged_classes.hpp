#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_ShieldRegen_Delay_Damaged_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ShieldRegen_Delay_Damaged_C">();
	}
	static class UGE_ShieldRegen_Delay_Damaged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ShieldRegen_Delay_Damaged_C>();
	}
};
static_assert(alignof(UGE_ShieldRegen_Delay_Damaged_C) == 0x000008, "Wrong alignment on UGE_ShieldRegen_Delay_Damaged_C");
static_assert(sizeof(UGE_ShieldRegen_Delay_Damaged_C) == 0x000858, "Wrong size on UGE_ShieldRegen_Delay_Damaged_C");

}
