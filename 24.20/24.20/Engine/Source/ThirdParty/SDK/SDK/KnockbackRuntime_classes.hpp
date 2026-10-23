#pragma once

#include "Basic.hpp"

#include "KnockbackRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AFortAthenaMutator_Knockback final : public AFortAthenaMutator
{
public:
	bool                                          bStorePlayerKnockbackData;
	bool                                          bReplicatePlayerKnockbackData;
	uint8                                         Pad_332[0x6];
	TMulticastInlineDelegate<void(struct FKnockbackMutatorData& KnockbackData)> OnPlayerKnockbackDataChanged;
	struct FKnockbackMutatorDataArray             AllPlayersKnockbackData;
	struct FScalableFloat                         bDisplayKnockbackDamageNumbersAsPercentage;
	struct FScalableFloat                         ConvertToKnockbackDamageMultiplier;
	struct FScalableFloat                         PercentDamageLowMaxThreshold;
	struct FScalableFloat                         PercentDamageMediumMaxThreshold;
	float                                         KnockbackMultiplierInitialValue;
	uint8                                         Pad_50C[0x64];

public:
	TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData();
	void HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class AFortPawn* FortPawn);
	void SetPlayersShouldBreakThroughStructures(const bool bActive, class AFortPlayerPawn* PlayerPawn);

	float GetKnockbackMultiplierInitialValue() const;
	float GetPercentDamageLowMaxThreshold() const;
	float GetPercentDamageMediumMaxThreshold() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_Knockback">();
	}
	static class AFortAthenaMutator_Knockback* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_Knockback>();
	}
};
static_assert(alignof(AFortAthenaMutator_Knockback) == 0x000008, "Wrong alignment on AFortAthenaMutator_Knockback");
static_assert(sizeof(AFortAthenaMutator_Knockback) == 0x000570, "Wrong size on AFortAthenaMutator_Knockback");
static_assert(offsetof(AFortAthenaMutator_Knockback, bStorePlayerKnockbackData) == 0x000330, "Member 'AFortAthenaMutator_Knockback::bStorePlayerKnockbackData' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, bReplicatePlayerKnockbackData) == 0x000331, "Member 'AFortAthenaMutator_Knockback::bReplicatePlayerKnockbackData' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, OnPlayerKnockbackDataChanged) == 0x000338, "Member 'AFortAthenaMutator_Knockback::OnPlayerKnockbackDataChanged' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, AllPlayersKnockbackData) == 0x000348, "Member 'AFortAthenaMutator_Knockback::AllPlayersKnockbackData' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, bDisplayKnockbackDamageNumbersAsPercentage) == 0x000468, "Member 'AFortAthenaMutator_Knockback::bDisplayKnockbackDamageNumbersAsPercentage' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, ConvertToKnockbackDamageMultiplier) == 0x000490, "Member 'AFortAthenaMutator_Knockback::ConvertToKnockbackDamageMultiplier' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, PercentDamageLowMaxThreshold) == 0x0004B8, "Member 'AFortAthenaMutator_Knockback::PercentDamageLowMaxThreshold' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, PercentDamageMediumMaxThreshold) == 0x0004E0, "Member 'AFortAthenaMutator_Knockback::PercentDamageMediumMaxThreshold' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Knockback, KnockbackMultiplierInitialValue) == 0x000508, "Member 'AFortAthenaMutator_Knockback::KnockbackMultiplierInitialValue' has a wrong offset!");

class UFortGameplayAbility_KnockbackMutator final : public UFortGameplayAbility
{
public:
	class AFortAthenaMutator_Knockback*           CachedMutator;
	TSubclassOf<class AFortAthenaMutator_Knockback> MutatorClassToGet;

public:
	class AFortAthenaMutator_Knockback* GetCachedMutator();
	void SaveKnockbackData(const struct FKnockbackMutatorData& InKnockbackData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_KnockbackMutator">();
	}
	static class UFortGameplayAbility_KnockbackMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_KnockbackMutator>();
	}
};
static_assert(alignof(UFortGameplayAbility_KnockbackMutator) == 0x000008, "Wrong alignment on UFortGameplayAbility_KnockbackMutator");
static_assert(sizeof(UFortGameplayAbility_KnockbackMutator) == 0x000B38, "Wrong size on UFortGameplayAbility_KnockbackMutator");
static_assert(offsetof(UFortGameplayAbility_KnockbackMutator, CachedMutator) == 0x000B28, "Member 'UFortGameplayAbility_KnockbackMutator::CachedMutator' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_KnockbackMutator, MutatorClassToGet) == 0x000B30, "Member 'UFortGameplayAbility_KnockbackMutator::MutatorClassToGet' has a wrong offset!");

}
