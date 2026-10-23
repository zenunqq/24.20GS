#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_BoostJump_Equipped_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BoostJump_Equipped_C">();
	}
	static class UGE_BoostJump_Equipped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BoostJump_Equipped_C>();
	}
};
static_assert(alignof(UGE_BoostJump_Equipped_C) == 0x000008, "Wrong alignment on UGE_BoostJump_Equipped_C");
static_assert(sizeof(UGE_BoostJump_Equipped_C) == 0x000858, "Wrong size on UGE_BoostJump_Equipped_C");

}
