#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UBuff_PartyXPBoost_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Buff_PartyXPBoost_C">();
	}
	static class UBuff_PartyXPBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuff_PartyXPBoost_C>();
	}
};
static_assert(alignof(UBuff_PartyXPBoost_C) == 0x000008, "Wrong alignment on UBuff_PartyXPBoost_C");
static_assert(sizeof(UBuff_PartyXPBoost_C) == 0x000858, "Wrong size on UBuff_PartyXPBoost_C");

}
