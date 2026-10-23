#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KnockbackRuntime_structs.hpp"

namespace SDK::Params
{

struct FortAthenaMutator_Knockback_GetAllPlayersKnockbackData final
{
public:
	TArray<struct FKnockbackMutatorData>          ReturnValue;
};
static_assert(alignof(FortAthenaMutator_Knockback_GetAllPlayersKnockbackData) == 0x000008, "Wrong alignment on FortAthenaMutator_Knockback_GetAllPlayersKnockbackData");
static_assert(sizeof(FortAthenaMutator_Knockback_GetAllPlayersKnockbackData) == 0x000010, "Wrong size on FortAthenaMutator_Knockback_GetAllPlayersKnockbackData");
static_assert(offsetof(FortAthenaMutator_Knockback_GetAllPlayersKnockbackData, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_Knockback_GetAllPlayersKnockbackData::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_Knockback_HandleBlockedCharacterMovement final
{
public:
	struct FHitResult                             InOutImpact;
	class AFortPawn*                              FortPawn;
};
static_assert(alignof(FortAthenaMutator_Knockback_HandleBlockedCharacterMovement) == 0x000008, "Wrong alignment on FortAthenaMutator_Knockback_HandleBlockedCharacterMovement");
static_assert(sizeof(FortAthenaMutator_Knockback_HandleBlockedCharacterMovement) == 0x0000E8, "Wrong size on FortAthenaMutator_Knockback_HandleBlockedCharacterMovement");
static_assert(offsetof(FortAthenaMutator_Knockback_HandleBlockedCharacterMovement, InOutImpact) == 0x000000, "Member 'FortAthenaMutator_Knockback_HandleBlockedCharacterMovement::InOutImpact' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_Knockback_HandleBlockedCharacterMovement, FortPawn) == 0x0000E0, "Member 'FortAthenaMutator_Knockback_HandleBlockedCharacterMovement::FortPawn' has a wrong offset!");

struct FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures final
{
public:
	bool                                          bActive;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures) == 0x000008, "Wrong alignment on FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures");
static_assert(sizeof(FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures) == 0x000010, "Wrong size on FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures");
static_assert(offsetof(FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures, bActive) == 0x000000, "Member 'FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures::bActive' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures, PlayerPawn) == 0x000008, "Member 'FortAthenaMutator_Knockback_SetPlayersShouldBreakThroughStructures::PlayerPawn' has a wrong offset!");

struct FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue) == 0x000004, "Wrong alignment on FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue");
static_assert(sizeof(FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue) == 0x000004, "Wrong size on FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue");
static_assert(offsetof(FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_Knockback_GetKnockbackMultiplierInitialValue::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold) == 0x000004, "Wrong alignment on FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold");
static_assert(sizeof(FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold) == 0x000004, "Wrong size on FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold");
static_assert(offsetof(FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_Knockback_GetPercentDamageLowMaxThreshold::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold) == 0x000004, "Wrong alignment on FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold");
static_assert(sizeof(FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold) == 0x000004, "Wrong size on FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold");
static_assert(offsetof(FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_Knockback_GetPercentDamageMediumMaxThreshold::ReturnValue' has a wrong offset!");

struct FortGameplayAbility_KnockbackMutator_GetCachedMutator final
{
public:
	class AFortAthenaMutator_Knockback*           ReturnValue;
};
static_assert(alignof(FortGameplayAbility_KnockbackMutator_GetCachedMutator) == 0x000008, "Wrong alignment on FortGameplayAbility_KnockbackMutator_GetCachedMutator");
static_assert(sizeof(FortGameplayAbility_KnockbackMutator_GetCachedMutator) == 0x000008, "Wrong size on FortGameplayAbility_KnockbackMutator_GetCachedMutator");
static_assert(offsetof(FortGameplayAbility_KnockbackMutator_GetCachedMutator, ReturnValue) == 0x000000, "Member 'FortGameplayAbility_KnockbackMutator_GetCachedMutator::ReturnValue' has a wrong offset!");

struct FortGameplayAbility_KnockbackMutator_SaveKnockbackData final
{
public:
	struct FKnockbackMutatorData                  InKnockbackData;
};
static_assert(alignof(FortGameplayAbility_KnockbackMutator_SaveKnockbackData) == 0x000008, "Wrong alignment on FortGameplayAbility_KnockbackMutator_SaveKnockbackData");
static_assert(sizeof(FortGameplayAbility_KnockbackMutator_SaveKnockbackData) == 0x000020, "Wrong size on FortGameplayAbility_KnockbackMutator_SaveKnockbackData");
static_assert(offsetof(FortGameplayAbility_KnockbackMutator_SaveKnockbackData, InKnockbackData) == 0x000000, "Member 'FortGameplayAbility_KnockbackMutator_SaveKnockbackData::InKnockbackData' has a wrong offset!");

}
