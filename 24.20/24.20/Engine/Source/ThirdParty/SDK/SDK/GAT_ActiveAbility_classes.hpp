#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           TC_AbilitiesGenericActiveAbilityActivate;
	class FName                                   N_SavedCollisionChannel;
	class UClass*                                 GE_KnockBackImmunity;
	struct FActiveGameplayEffectHandle            GEH_KnockBackImmunity;
	bool                                          bPlayerHolsterState;
	uint8                                         Pad_B49[0x3];
	struct FGameplayTag                           TC_AbilitiesGenericActiveAbilityEndAbility;

public:
	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void EndAbilityWithReason(const class FString& Reason);
	void ExecuteUbergraph_GAT_ActiveAbility(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void SendHeroAbilityActivationEvent();
	void SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful);
	void SetKnockbackImmunity(bool ImmunityOn);
	void SetPawnCollision(class AFortPawn* FortPawn, bool CollisionOn);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_ActiveAbility_C">();
	}
	static class UGAT_ActiveAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_ActiveAbility_C>();
	}
};
static_assert(alignof(UGAT_ActiveAbility_C) == 0x000008, "Wrong alignment on UGAT_ActiveAbility_C");
static_assert(sizeof(UGAT_ActiveAbility_C) == 0x000B50, "Wrong size on UGAT_ActiveAbility_C");
static_assert(offsetof(UGAT_ActiveAbility_C, UberGraphFrame) == 0x000B28, "Member 'UGAT_ActiveAbility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_C, TC_AbilitiesGenericActiveAbilityActivate) == 0x000B30, "Member 'UGAT_ActiveAbility_C::TC_AbilitiesGenericActiveAbilityActivate' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_C, N_SavedCollisionChannel) == 0x000B34, "Member 'UGAT_ActiveAbility_C::N_SavedCollisionChannel' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_C, GE_KnockBackImmunity) == 0x000B38, "Member 'UGAT_ActiveAbility_C::GE_KnockBackImmunity' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_C, GEH_KnockBackImmunity) == 0x000B40, "Member 'UGAT_ActiveAbility_C::GEH_KnockBackImmunity' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_C, bPlayerHolsterState) == 0x000B48, "Member 'UGAT_ActiveAbility_C::bPlayerHolsterState' has a wrong offset!");
static_assert(offsetof(UGAT_ActiveAbility_C, TC_AbilitiesGenericActiveAbilityEndAbility) == 0x000B4C, "Member 'UGAT_ActiveAbility_C::TC_AbilitiesGenericActiveAbilityEndAbility' has a wrong offset!");

}
