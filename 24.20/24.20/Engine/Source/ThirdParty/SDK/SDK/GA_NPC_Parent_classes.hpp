#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Enum_NPC_AlertLevel_structs.hpp"
#include "AIModule_structs.hpp"

namespace SDK
{

class UGA_NPC_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortAIPawn*                            NPC_ActivatingFortAIPawn;
	EFortMovementUrgency                          NPC_InitialMovementUrgency;
	bool                                          NPC_DebugAbility;
	uint8                                         Pad_B3A[0x6];
	struct FGameplayTagContainer                  NPC_IgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive;
	bool                                          NPC_DebugFreezeFrameEnabled;
	bool                                          NPC_DebugFreezeFrameOnlyWhenAbilityTargetHit;
	bool                                          NPC_DebugFreezeFrameOnlyWhenWeHaveSomeTarget;
	bool                                          NPC_DamageHitAbilityTargetDuringThisAbilityActivation;
	uint8                                         Pad_B64[0x4];
	TArray<class AActor*>                         NPC_DamageActorsWeHaveHitDuringThisAbilityActivation;
	double                                        NPC_CanActivateAbility_MaxTargetZDistanceBelow;
	double                                        NPC_CanActivateAbility_MaxTargetZDistanceAbove;
	double                                        NPC_CanActivateAbility_MaxTargetZDistanceAbove_ForIntentionalFailedAttack;
	TArray<class AActor*>                         BuildingTargetingHitActors;
	struct FGameplayTagContainer                  TC_NPC_FrustrationTagsToClearForGoals;
	Enum_NPC_AlertLevel                           NPC_AlertLevelGoalIsFortPawn;
	Enum_NPC_AlertLevel                           NPC_AlertLevelGoalIsOther;
	Enum_NPC_AlertLevel                           NPC_AlertLevelGoalIsNotValid;
	uint8                                         Pad_BC3[0x5];
	struct FScalableFloat                         NPC_DamageKnockbackVelocityHF;
	struct FScalableFloat                         NPC_DamageKnockbackVerticalAngleHF;
	struct FScalableFloat                         NPC_DamageKnockbackMinimumYawValueHF;
	struct FScalableFloat                         NPC_DamageCanAttackDBNOPlayersHF;
	struct FScalableFloat                         NPC_DamageKnockbackVelocityVehicleHF;
	struct FScalableFloat                         NPC_DamageKnockbackVerticalAngleVehicleHF;
	struct FScalableFloat                         NPC_DamageKnockbackMinimumYawValueVehicleHF;
	struct FScalableFloat                         NPC_DamageChanceToEjectFromVehicleHF;
	struct FGameplayTag                           DestroyBuildingGC;
	uint8                                         Pad_D0C[0x4];
	class UClass*                                 DestroyBuildingGE;
	struct FGameplayTagContainer                  TC_NPC_FrustrationTagsToClearForMovement;
	struct FGameplayTag                           TC_NPC_FrustrationBuildDueToGoal;
	struct FGameplayTag                           TC_NPC_FrustrationBuildDueToMovement;
	struct FGameplayTagQuery                      TQ_NPC_RequirementsToBuildFrustrationDueToGoal;
	struct FGameplayTagQuery                      TQ_NPC_RequirementsToBuildFrustrationDueToMovement;
	struct FScalableFloat                         NPC_BodyBumpBuildingsWhenBuildingMovementFrustrationHF;
	struct FScalableFloat                         NPC_FrustrationBodyBumpOnlyDestroyPlayerBuildingsHF;
	struct FGameplayTag                           TC_NPC_EffectContainer_BodyBumpBuildingsWhenBuildingMovementFrustration;
	uint8                                         Pad_E24[0x4];
	struct FGameplayAbilityTargetDataHandle       BuildingTargetingTargetData;
	struct FGameplayTag                           BuildingTargetingApplicationTag;
	struct FGameplayTag                           TC_BuildingTypePlayer;
	class UClass*                                 GE_NPC_MMR_Scaling_AbilityCooldown;

public:
	void BeginDestroyBuildings(const struct FGameplayTag& TargetSelectionApplicationTag, bool DoContinuousTargetSelection);
	void Cancelled_13B12ED64A3570FC1E117FAC4E3F7961(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DestroyBuilding(class AActor* BuildingActor);
	void ExecuteUbergraph_GA_NPC_Parent(int32 EntryPoint);
	void NPC_AbilityDebugMessage(const class FString& String, bool OnlyWhenDebug);
	void NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate(bool* IsNavigationBuildingWeAreDestroying, class ABuildingActor** BuildingWeAreDestroying, double* HealthOfBuildingWeAreDestroying);
	void NPC_AbilityTargetIsWithinAngleThreshold(double AngleThreshold, bool* IsWithinAngle);
	void NPC_ApplyGameplayAbilityCooldownWithMMRScaling();
	void NPC_ApplyGameplayEffectContainerAndLaunchTargets(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, int32 GameplayEffectLevel, bool AbilityTargetCanBeHitMultipleTimesByThisSelection, bool ForceDebugFreezeFrameForThisSpecificTargeting, bool* HitAbilityTargetRightNow, bool* HitAbilityTargetDuringThisAbilityActivation, TArray<class AActor*>* ActorsWeHaveHitDuringThisAbilityActivation, TArray<class AActor*>* ActorsHitWithThisSpecificTargetSelection);
	void NPC_ApplyGameplayEffectWithMMRScaling(class UClass* GameplayEffectClass, class AActor* Actor);
	void NPC_AttemptBuildFrustrationDueToGoal(const class FString& Reason);
	void NPC_AttemptBuildFrustrationDueToMovement(const class FString& Reason);
	void NPC_ClearFrustrationTagsForGoals(const class FString& Reason);
	void NPC_ClearFrustrationTagsForMovement(const class FString& Reason);
	void NPC_DebugFreezeFrame(bool ForceDebugFreezeFrame, bool HitAbilityTargetRightNow, bool HitAbilityTargetDuringThisAbilityActivation, TArray<class AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, TArray<class AActor*>& ActorsHitWithThisSpecificTargetSelection);
	void NPC_DoIntentionalFailedAttack(bool* DoIntentionalFailedAttack);
	void NPC_EQS_Results(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus, EEnvQueryRunMode EQS_RunMode, bool NumReturnedItemsIsImportant, TArray<class AActor*>* ResultActors, int32* NumValidActorsGenerated, bool* ResultActorsSuccess, TArray<struct FVector>* ResultLocations, int32* NumValidLocationsGenerated, bool* ResultLocationsSuccess, class UEnvQueryInstanceBlueprintWrapper** QueryInstanceOut, EEnvQueryStatus* QueryStatusOut);
	void NPC_GenerateLaunchVelocityWithMinimumAngle(class AActor* ActorWeWantToLaunch, bool Vehicle, struct FVector* LaunchVelocity, class AActor** LaunchActor, bool* LaunchingVehicle);
	class UObject* NPC_GetGoalActor();
	void NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool* AsBool, int32* AsIntRounded, double* AsFloat);
	void NPC_IsMontageInfoValid(const struct FFortGameplayAbilityMontageInfo& MontageInfo_0, bool* IsValid_);
	void NPC_OverrideRotationRate(const struct FScalableFloat& RotationRate);
	void NPC_ResetRotationRate();
	void NPC_ScalableFloatIsValid(const struct FScalableFloat& ScalableFloat, bool* Valid);
	void NPC_SetAlertLevel(Enum_NPC_AlertLevel NPC_AlertLevel);
	void NPC_SetAlertLevelByAIAbilityTargetType();
	void NPC_SetupAbility();
	void NPC_TryResetMovementUrgency();
	void NPC_TrySetMovementUrgency(EFortMovementUrgency MovementUrgency, bool TryResetUrgencyIfInvalid);
	void Targeted_13B12ED64A3570FC1E117FAC4E3F7961(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_NPC_Parent_C">();
	}
	static class UGA_NPC_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_NPC_Parent_C>();
	}
};
static_assert(alignof(UGA_NPC_Parent_C) == 0x000008, "Wrong alignment on UGA_NPC_Parent_C");
static_assert(sizeof(UGA_NPC_Parent_C) == 0x000E60, "Wrong size on UGA_NPC_Parent_C");
static_assert(offsetof(UGA_NPC_Parent_C, UberGraphFrame) == 0x000B28, "Member 'UGA_NPC_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_ActivatingFortAIPawn) == 0x000B30, "Member 'UGA_NPC_Parent_C::NPC_ActivatingFortAIPawn' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_InitialMovementUrgency) == 0x000B38, "Member 'UGA_NPC_Parent_C::NPC_InitialMovementUrgency' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DebugAbility) == 0x000B39, "Member 'UGA_NPC_Parent_C::NPC_DebugAbility' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_IgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive) == 0x000B40, "Member 'UGA_NPC_Parent_C::NPC_IgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DebugFreezeFrameEnabled) == 0x000B60, "Member 'UGA_NPC_Parent_C::NPC_DebugFreezeFrameEnabled' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DebugFreezeFrameOnlyWhenAbilityTargetHit) == 0x000B61, "Member 'UGA_NPC_Parent_C::NPC_DebugFreezeFrameOnlyWhenAbilityTargetHit' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DebugFreezeFrameOnlyWhenWeHaveSomeTarget) == 0x000B62, "Member 'UGA_NPC_Parent_C::NPC_DebugFreezeFrameOnlyWhenWeHaveSomeTarget' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageHitAbilityTargetDuringThisAbilityActivation) == 0x000B63, "Member 'UGA_NPC_Parent_C::NPC_DamageHitAbilityTargetDuringThisAbilityActivation' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageActorsWeHaveHitDuringThisAbilityActivation) == 0x000B68, "Member 'UGA_NPC_Parent_C::NPC_DamageActorsWeHaveHitDuringThisAbilityActivation' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_CanActivateAbility_MaxTargetZDistanceBelow) == 0x000B78, "Member 'UGA_NPC_Parent_C::NPC_CanActivateAbility_MaxTargetZDistanceBelow' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_CanActivateAbility_MaxTargetZDistanceAbove) == 0x000B80, "Member 'UGA_NPC_Parent_C::NPC_CanActivateAbility_MaxTargetZDistanceAbove' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_CanActivateAbility_MaxTargetZDistanceAbove_ForIntentionalFailedAttack) == 0x000B88, "Member 'UGA_NPC_Parent_C::NPC_CanActivateAbility_MaxTargetZDistanceAbove_ForIntentionalFailedAttack' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, BuildingTargetingHitActors) == 0x000B90, "Member 'UGA_NPC_Parent_C::BuildingTargetingHitActors' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TC_NPC_FrustrationTagsToClearForGoals) == 0x000BA0, "Member 'UGA_NPC_Parent_C::TC_NPC_FrustrationTagsToClearForGoals' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_AlertLevelGoalIsFortPawn) == 0x000BC0, "Member 'UGA_NPC_Parent_C::NPC_AlertLevelGoalIsFortPawn' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_AlertLevelGoalIsOther) == 0x000BC1, "Member 'UGA_NPC_Parent_C::NPC_AlertLevelGoalIsOther' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_AlertLevelGoalIsNotValid) == 0x000BC2, "Member 'UGA_NPC_Parent_C::NPC_AlertLevelGoalIsNotValid' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageKnockbackVelocityHF) == 0x000BC8, "Member 'UGA_NPC_Parent_C::NPC_DamageKnockbackVelocityHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageKnockbackVerticalAngleHF) == 0x000BF0, "Member 'UGA_NPC_Parent_C::NPC_DamageKnockbackVerticalAngleHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageKnockbackMinimumYawValueHF) == 0x000C18, "Member 'UGA_NPC_Parent_C::NPC_DamageKnockbackMinimumYawValueHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageCanAttackDBNOPlayersHF) == 0x000C40, "Member 'UGA_NPC_Parent_C::NPC_DamageCanAttackDBNOPlayersHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageKnockbackVelocityVehicleHF) == 0x000C68, "Member 'UGA_NPC_Parent_C::NPC_DamageKnockbackVelocityVehicleHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageKnockbackVerticalAngleVehicleHF) == 0x000C90, "Member 'UGA_NPC_Parent_C::NPC_DamageKnockbackVerticalAngleVehicleHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageKnockbackMinimumYawValueVehicleHF) == 0x000CB8, "Member 'UGA_NPC_Parent_C::NPC_DamageKnockbackMinimumYawValueVehicleHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_DamageChanceToEjectFromVehicleHF) == 0x000CE0, "Member 'UGA_NPC_Parent_C::NPC_DamageChanceToEjectFromVehicleHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, DestroyBuildingGC) == 0x000D08, "Member 'UGA_NPC_Parent_C::DestroyBuildingGC' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, DestroyBuildingGE) == 0x000D10, "Member 'UGA_NPC_Parent_C::DestroyBuildingGE' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TC_NPC_FrustrationTagsToClearForMovement) == 0x000D18, "Member 'UGA_NPC_Parent_C::TC_NPC_FrustrationTagsToClearForMovement' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TC_NPC_FrustrationBuildDueToGoal) == 0x000D38, "Member 'UGA_NPC_Parent_C::TC_NPC_FrustrationBuildDueToGoal' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TC_NPC_FrustrationBuildDueToMovement) == 0x000D3C, "Member 'UGA_NPC_Parent_C::TC_NPC_FrustrationBuildDueToMovement' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TQ_NPC_RequirementsToBuildFrustrationDueToGoal) == 0x000D40, "Member 'UGA_NPC_Parent_C::TQ_NPC_RequirementsToBuildFrustrationDueToGoal' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TQ_NPC_RequirementsToBuildFrustrationDueToMovement) == 0x000D88, "Member 'UGA_NPC_Parent_C::TQ_NPC_RequirementsToBuildFrustrationDueToMovement' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_BodyBumpBuildingsWhenBuildingMovementFrustrationHF) == 0x000DD0, "Member 'UGA_NPC_Parent_C::NPC_BodyBumpBuildingsWhenBuildingMovementFrustrationHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, NPC_FrustrationBodyBumpOnlyDestroyPlayerBuildingsHF) == 0x000DF8, "Member 'UGA_NPC_Parent_C::NPC_FrustrationBodyBumpOnlyDestroyPlayerBuildingsHF' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TC_NPC_EffectContainer_BodyBumpBuildingsWhenBuildingMovementFrustration) == 0x000E20, "Member 'UGA_NPC_Parent_C::TC_NPC_EffectContainer_BodyBumpBuildingsWhenBuildingMovementFrustration' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, BuildingTargetingTargetData) == 0x000E28, "Member 'UGA_NPC_Parent_C::BuildingTargetingTargetData' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, BuildingTargetingApplicationTag) == 0x000E50, "Member 'UGA_NPC_Parent_C::BuildingTargetingApplicationTag' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, TC_BuildingTypePlayer) == 0x000E54, "Member 'UGA_NPC_Parent_C::TC_BuildingTypePlayer' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Parent_C, GE_NPC_MMR_Scaling_AbilityCooldown) == 0x000E58, "Member 'UGA_NPC_Parent_C::GE_NPC_MMR_Scaling_AbilityCooldown' has a wrong offset!");

}
