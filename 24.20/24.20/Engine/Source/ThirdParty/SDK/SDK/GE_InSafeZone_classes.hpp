#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_InSafeZone_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_InSafeZone_C">();
	}
	static class UGE_InSafeZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_InSafeZone_C>();
	}
};
static_assert(alignof(UGE_InSafeZone_C) == 0x000008, "Wrong alignment on UGE_InSafeZone_C");
static_assert(sizeof(UGE_InSafeZone_C) == 0x000858, "Wrong size on UGE_InSafeZone_C");

}
