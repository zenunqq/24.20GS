#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_HidePlayerPawn_Default_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_HidePlayerPawn_Default_C">();
	}
	static class UGE_HidePlayerPawn_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_HidePlayerPawn_Default_C>();
	}
};
static_assert(alignof(UGE_HidePlayerPawn_Default_C) == 0x000008, "Wrong alignment on UGE_HidePlayerPawn_Default_C");
static_assert(sizeof(UGE_HidePlayerPawn_Default_C) == 0x000858, "Wrong size on UGE_HidePlayerPawn_Default_C");

}
