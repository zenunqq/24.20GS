#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTT_Commando_FragGrenade_C final : public UFortGameplayAbilityTooltip
{
public:
	bool GetApplicationTag(const class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag) const;
	bool GetTextForTokenFromAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const struct FGameplayTag& tag, const class UFortTooltipContext* Context, const struct FGameplayTag& Token, class FText* OutText) const;
	void InitializeAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const class UFortTooltipContext* Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TT_Commando_FragGrenade_C">();
	}
	static class UTT_Commando_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTT_Commando_FragGrenade_C>();
	}
};
static_assert(alignof(UTT_Commando_FragGrenade_C) == 0x000008, "Wrong alignment on UTT_Commando_FragGrenade_C");
static_assert(sizeof(UTT_Commando_FragGrenade_C) == 0x000148, "Wrong size on UTT_Commando_FragGrenade_C");

}
