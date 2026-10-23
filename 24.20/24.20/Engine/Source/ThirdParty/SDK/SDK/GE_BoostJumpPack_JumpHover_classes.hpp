#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_BoostJumpPack_JumpHover_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BoostJumpPack_JumpHover_C">();
	}
	static class UGE_BoostJumpPack_JumpHover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BoostJumpPack_JumpHover_C>();
	}
};
static_assert(alignof(UGE_BoostJumpPack_JumpHover_C) == 0x000008, "Wrong alignment on UGE_BoostJumpPack_JumpHover_C");
static_assert(sizeof(UGE_BoostJumpPack_JumpHover_C) == 0x000858, "Wrong size on UGE_BoostJumpPack_JumpHover_C");

}
