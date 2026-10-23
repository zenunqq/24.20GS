#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_ThrownConsumable_InWindup_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ThrownConsumable_InWindup_C">();
	}
	static class UGE_ThrownConsumable_InWindup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ThrownConsumable_InWindup_C>();
	}
};
static_assert(alignof(UGE_ThrownConsumable_InWindup_C) == 0x000008, "Wrong alignment on UGE_ThrownConsumable_InWindup_C");
static_assert(sizeof(UGE_ThrownConsumable_InWindup_C) == 0x000858, "Wrong size on UGE_ThrownConsumable_InWindup_C");

}
