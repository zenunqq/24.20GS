#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GAT_ActiveAbility_classes.hpp"

namespace SDK
{

class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAT_ActiveAbility_Hero_C;
	bool                                          UseHeroLoadoutSystem;
	bool                                          bUseMidAbilityCosts;
	bool                                          bTriggerCooldownOnAbilityEnd;
	uint8                                         Pad_B5B[0x5];
	class UAbilitySystemComponent*                Owner_ASC;
	class UClass*                                 GE_CooldownModifier;
	TArray<struct FActiveGameplayEffectHandle>    Active_Cooldown_Modifiers;

public:
	void CommitAbilityWithEvent(bool* Passed);
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint);
	void IncrementAbilityCostAndCooldown(double Energy_Cost, bool Adjust_Cooldown, double Cooldown_Increment, TArray<struct FActiveGameplayEffectHandle>* Active_Cooldown_Modifiers_0);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_ActiveAbility_Hero_C">();
	}
	static class UGAT_ActiveAbility_Hero_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_ActiveAbility_Hero_C>();
	}
};
static_assert(alignof(UGAT_ActiveAbility_Hero_C) == 0x000008, "Wrong alignment on UGAT_ActiveAbility_Hero_C");
static_assert(sizeof(UGAT_ActiveAbility_Hero_C) == 0x000B80, "Wrong size on UGAT_ActiveAbility_Hero_C");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, UberGraphFrame_GAT_ActiveAbility_Hero_C) == 0x000B50, "Member 'UGAT_ActiveAbility_Hero_C::UberGraphFrame_GAT_ActiveAbility_Hero_C' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, UseHeroLoadoutSystem) == 0x000B58, "Member 'UGAT_ActiveAbility_Hero_C::UseHeroLoadoutSystem' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, bUseMidAbilityCosts) == 0x000B59, "Member 'UGAT_ActiveAbility_Hero_C::bUseMidAbilityCosts' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, bTriggerCooldownOnAbilityEnd) == 0x000B5A, "Member 'UGAT_ActiveAbility_Hero_C::bTriggerCooldownOnAbilityEnd' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, Owner_ASC) == 0x000B60, "Member 'UGAT_ActiveAbility_Hero_C::Owner_ASC' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, GE_CooldownModifier) == 0x000B68, "Member 'UGAT_ActiveAbility_Hero_C::GE_CooldownModifier' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_Hero_C, Active_Cooldown_Modifiers) == 0x000B70, "Member 'UGAT_ActiveAbility_Hero_C::Active_Cooldown_Modifiers' has a wrong offset!");

}
