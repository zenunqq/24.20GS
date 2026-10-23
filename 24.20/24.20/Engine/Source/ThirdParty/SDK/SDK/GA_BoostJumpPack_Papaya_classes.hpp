#pragma once

#include "Basic.hpp"

#include "GA_BoostJumpPack_classes.hpp"

namespace SDK
{

class UGA_BoostJumpPack_Papaya_C final : public UGA_BoostJumpPack_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_Papaya_C">();
	}
	static class UGA_BoostJumpPack_Papaya_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_Papaya_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_Papaya_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_Papaya_C");
static_assert(sizeof(UGA_BoostJumpPack_Papaya_C) == 0x000D80, "Wrong size on UGA_BoostJumpPack_Papaya_C");

}
