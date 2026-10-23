#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct GAT_ActiveAbility_C_ActiveAbilitySetup final
{
public:
	class UAbilitySystemComponent*                AbilitySystemIn;
	class UAbilitySystemComponent*                AbilitySystemOut;
};
static_assert(alignof(GAT_ActiveAbility_C_ActiveAbilitySetup) == 0x000008, "Wrong alignment on GAT_ActiveAbility_C_ActiveAbilitySetup");
static_assert(sizeof(GAT_ActiveAbility_C_ActiveAbilitySetup) == 0x000010, "Wrong size on GAT_ActiveAbility_C_ActiveAbilitySetup");
static_assert(offsetof(GAT_ActiveAbility_C_ActiveAbilitySetup, AbilitySystemIn) == 0x000000, "Member 'GAT_ActiveAbility_C_ActiveAbilitySetup::AbilitySystemIn' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_ActiveAbilitySetup, AbilitySystemOut) == 0x000008, "Member 'GAT_ActiveAbility_C_ActiveAbilitySetup::AbilitySystemOut' has a wrong offset!");

struct GAT_ActiveAbility_C_EndAbilityWithReason final
{
public:
	class FString                                 Reason;
};
static_assert(alignof(GAT_ActiveAbility_C_EndAbilityWithReason) == 0x000008, "Wrong alignment on GAT_ActiveAbility_C_EndAbilityWithReason");
static_assert(sizeof(GAT_ActiveAbility_C_EndAbilityWithReason) == 0x000010, "Wrong size on GAT_ActiveAbility_C_EndAbilityWithReason");
static_assert(offsetof(GAT_ActiveAbility_C_EndAbilityWithReason, Reason) == 0x000000, "Member 'GAT_ActiveAbility_C_EndAbilityWithReason::Reason' has a wrong offset!");

struct GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bWasCancelled;
};
static_assert(alignof(GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility) == 0x000004, "Wrong alignment on GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility");
static_assert(sizeof(GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility) == 0x000008, "Wrong size on GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility");
static_assert(offsetof(GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility, EntryPoint) == 0x000000, "Member 'GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility, K2Node_Event_bWasCancelled) == 0x000004, "Member 'GAT_ActiveAbility_C_ExecuteUbergraph_GAT_ActiveAbility::K2Node_Event_bWasCancelled' has a wrong offset!");

struct GAT_ActiveAbility_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GAT_ActiveAbility_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAT_ActiveAbility_C_K2_OnEndAbility");
static_assert(sizeof(GAT_ActiveAbility_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAT_ActiveAbility_C_K2_OnEndAbility");
static_assert(offsetof(GAT_ActiveAbility_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAT_ActiveAbility_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GAT_ActiveAbility_C_SendHeroAbilityActivationEvent final
{
public:
	struct FGameplayTag                           T_Event_HeroAbilityActivate;
};
static_assert(alignof(GAT_ActiveAbility_C_SendHeroAbilityActivationEvent) == 0x000004, "Wrong alignment on GAT_ActiveAbility_C_SendHeroAbilityActivationEvent");
static_assert(sizeof(GAT_ActiveAbility_C_SendHeroAbilityActivationEvent) == 0x000004, "Wrong size on GAT_ActiveAbility_C_SendHeroAbilityActivationEvent");
static_assert(offsetof(GAT_ActiveAbility_C_SendHeroAbilityActivationEvent, T_Event_HeroAbilityActivate) == 0x000000, "Member 'GAT_ActiveAbility_C_SendHeroAbilityActivationEvent::T_Event_HeroAbilityActivate' has a wrong offset!");

struct GAT_ActiveAbility_C_SetHolsterWeaponWithName final
{
public:
	class AFortPawn*                              Target_Fort_Pawn;
	bool                                          ShouldHolster;
	bool                                          PlayEquipAnim;
	bool                                          ShowDebugPrintName;
	bool                                          IsWeaponHolstered;
	bool                                          OperationSuccessful;
	bool                                          bOperationSuccessful;
	bool                                          CallFunc_BooleanXOR_ReturnValue;
	uint8                                         Pad_F[0x1];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
};
static_assert(alignof(GAT_ActiveAbility_C_SetHolsterWeaponWithName) == 0x000008, "Wrong alignment on GAT_ActiveAbility_C_SetHolsterWeaponWithName");
static_assert(sizeof(GAT_ActiveAbility_C_SetHolsterWeaponWithName) == 0x000030, "Wrong size on GAT_ActiveAbility_C_SetHolsterWeaponWithName");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, Target_Fort_Pawn) == 0x000000, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::Target_Fort_Pawn' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, ShouldHolster) == 0x000008, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::ShouldHolster' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, PlayEquipAnim) == 0x000009, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::PlayEquipAnim' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, ShowDebugPrintName) == 0x00000A, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::ShowDebugPrintName' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, IsWeaponHolstered) == 0x00000B, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::IsWeaponHolstered' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, OperationSuccessful) == 0x00000C, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::OperationSuccessful' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, bOperationSuccessful) == 0x00000D, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::bOperationSuccessful' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, CallFunc_BooleanXOR_ReturnValue) == 0x00000E, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, CallFunc_GetObjectClass_ReturnValue) == 0x000010, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, CallFunc_GetClassDisplayName_ReturnValue) == 0x000018, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetHolsterWeaponWithName, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'GAT_ActiveAbility_C_SetHolsterWeaponWithName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

struct GAT_ActiveAbility_C_SetKnockbackImmunity final
{
public:
	bool                                          ImmunityOn;
	uint8                                         Pad_1[0x7];
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
};
static_assert(alignof(GAT_ActiveAbility_C_SetKnockbackImmunity) == 0x000008, "Wrong alignment on GAT_ActiveAbility_C_SetKnockbackImmunity");
static_assert(sizeof(GAT_ActiveAbility_C_SetKnockbackImmunity) == 0x000020, "Wrong size on GAT_ActiveAbility_C_SetKnockbackImmunity");
static_assert(offsetof(GAT_ActiveAbility_C_SetKnockbackImmunity, ImmunityOn) == 0x000000, "Member 'GAT_ActiveAbility_C_SetKnockbackImmunity::ImmunityOn' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetKnockbackImmunity, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000008, "Member 'GAT_ActiveAbility_C_SetKnockbackImmunity::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetKnockbackImmunity, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x000018, "Member 'GAT_ActiveAbility_C_SetKnockbackImmunity::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");

struct GAT_ActiveAbility_C_SetPawnCollision final
{
public:
	class AFortPawn*                              FortPawn;
	bool                                          CollisionOn;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	uint8                                         Pad_A[0x2];
	class FName                                   CallFunc_GetCollisionProfileName_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GAT_ActiveAbility_C_SetPawnCollision) == 0x000008, "Wrong alignment on GAT_ActiveAbility_C_SetPawnCollision");
static_assert(sizeof(GAT_ActiveAbility_C_SetPawnCollision) == 0x000018, "Wrong size on GAT_ActiveAbility_C_SetPawnCollision");
static_assert(offsetof(GAT_ActiveAbility_C_SetPawnCollision, FortPawn) == 0x000000, "Member 'GAT_ActiveAbility_C_SetPawnCollision::FortPawn' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetPawnCollision, CollisionOn) == 0x000008, "Member 'GAT_ActiveAbility_C_SetPawnCollision::CollisionOn' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetPawnCollision, CallFunc_NotEqual_NameName_ReturnValue) == 0x000009, "Member 'GAT_ActiveAbility_C_SetPawnCollision::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetPawnCollision, CallFunc_GetCollisionProfileName_ReturnValue) == 0x00000C, "Member 'GAT_ActiveAbility_C_SetPawnCollision::CallFunc_GetCollisionProfileName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_SetPawnCollision, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GAT_ActiveAbility_C_SetPawnCollision::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayEventData                     Payload;
	bool                                          ReturnValue;
};
static_assert(alignof(GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent) == 0x000008, "Wrong alignment on GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent");
static_assert(sizeof(GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent) == 0x000100, "Wrong size on GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent");
static_assert(offsetof(GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent, ActorInfo) == 0x000000, "Member 'GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent::ActorInfo' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent, Payload) == 0x000048, "Member 'GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent::Payload' has a wrong offset!");
static_assert(offsetof(GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent, ReturnValue) == 0x0000F8, "Member 'GAT_ActiveAbility_C_K2_ShouldAbilityRespondToEvent::ReturnValue' has a wrong offset!");

}
