#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Interrogation_Cooldown_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Interrogation_Cooldown_C">();
	}
	static class UGE_Interrogation_Cooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Interrogation_Cooldown_C>();
	}
};
static_assert(alignof(UGE_Interrogation_Cooldown_C) == 0x000008, "Wrong alignment on UGE_Interrogation_Cooldown_C");
static_assert(sizeof(UGE_Interrogation_Cooldown_C) == 0x000858, "Wrong size on UGE_Interrogation_Cooldown_C");

}
