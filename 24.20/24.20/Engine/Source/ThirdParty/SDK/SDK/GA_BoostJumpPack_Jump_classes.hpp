#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_BoostJumpPack_Jump_C final : public UFortGameplayAbility_Jump
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_Jump_C">();
	}
	static class UGA_BoostJumpPack_Jump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_Jump_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_Jump_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_Jump_C");
static_assert(sizeof(UGA_BoostJumpPack_Jump_C) == 0x000B58, "Wrong size on UGA_BoostJumpPack_Jump_C");

}
