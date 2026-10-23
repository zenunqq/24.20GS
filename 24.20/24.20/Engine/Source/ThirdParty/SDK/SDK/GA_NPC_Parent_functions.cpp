#pragma once

#include "Basic.hpp"

#include "GA_NPC_Parent_classes.hpp"
#include "GA_NPC_Parent_parameters.hpp"

namespace SDK
{

void UGA_NPC_Parent_C::BeginDestroyBuildings(const struct FGameplayTag& TargetSelectionApplicationTag, bool DoContinuousTargetSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "BeginDestroyBuildings");

	Params::GA_NPC_Parent_C_BeginDestroyBuildings Parms{};

	Parms.TargetSelectionApplicationTag = std::move(TargetSelectionApplicationTag);
	Parms.DoContinuousTargetSelection = DoContinuousTargetSelection;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::Cancelled_13B12ED64A3570FC1E117FAC4E3F7961(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "Cancelled_13B12ED64A3570FC1E117FAC4E3F7961");

	Params::GA_NPC_Parent_C_Cancelled_13B12ED64A3570FC1E117FAC4E3F7961 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368");

	Params::GA_NPC_Parent_C_Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::DestroyBuilding(class AActor* BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "DestroyBuilding");

	Params::GA_NPC_Parent_C_DestroyBuilding Parms{};

	Parms.BuildingActor = BuildingActor;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::ExecuteUbergraph_GA_NPC_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "ExecuteUbergraph_GA_NPC_Parent");

	Params::GA_NPC_Parent_C_ExecuteUbergraph_GA_NPC_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_AbilityDebugMessage(const class FString& String, bool OnlyWhenDebug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AbilityDebugMessage");

	Params::GA_NPC_Parent_C_NPC_AbilityDebugMessage Parms{};

	Parms.String = std::move(String);
	Parms.OnlyWhenDebug = OnlyWhenDebug;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate(bool* IsNavigationBuildingWeAreDestroying, class ABuildingActor** BuildingWeAreDestroying, double* HealthOfBuildingWeAreDestroying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate");

	Params::GA_NPC_Parent_C_NPC_AbilityTargetIsBuildingWeAreDestroyingToNavigate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsNavigationBuildingWeAreDestroying != nullptr)
		*IsNavigationBuildingWeAreDestroying = Parms.IsNavigationBuildingWeAreDestroying;

	if (BuildingWeAreDestroying != nullptr)
		*BuildingWeAreDestroying = Parms.BuildingWeAreDestroying;

	if (HealthOfBuildingWeAreDestroying != nullptr)
		*HealthOfBuildingWeAreDestroying = Parms.HealthOfBuildingWeAreDestroying;
}

void UGA_NPC_Parent_C::NPC_AbilityTargetIsWithinAngleThreshold(double AngleThreshold, bool* IsWithinAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AbilityTargetIsWithinAngleThreshold");

	Params::GA_NPC_Parent_C_NPC_AbilityTargetIsWithinAngleThreshold Parms{};

	Parms.AngleThreshold = AngleThreshold;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWithinAngle != nullptr)
		*IsWithinAngle = Parms.IsWithinAngle;
}

void UGA_NPC_Parent_C::NPC_ApplyGameplayAbilityCooldownWithMMRScaling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ApplyGameplayAbilityCooldownWithMMRScaling");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_NPC_Parent_C::NPC_ApplyGameplayEffectContainerAndLaunchTargets(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag, int32 GameplayEffectLevel, bool AbilityTargetCanBeHitMultipleTimesByThisSelection, bool ForceDebugFreezeFrameForThisSpecificTargeting, bool* HitAbilityTargetRightNow, bool* HitAbilityTargetDuringThisAbilityActivation, TArray<class AActor*>* ActorsWeHaveHitDuringThisAbilityActivation, TArray<class AActor*>* ActorsHitWithThisSpecificTargetSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ApplyGameplayEffectContainerAndLaunchTargets");

	Params::GA_NPC_Parent_C_NPC_ApplyGameplayEffectContainerAndLaunchTargets Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);
	Parms.GameplayEffectLevel = GameplayEffectLevel;
	Parms.AbilityTargetCanBeHitMultipleTimesByThisSelection = AbilityTargetCanBeHitMultipleTimesByThisSelection;
	Parms.ForceDebugFreezeFrameForThisSpecificTargeting = ForceDebugFreezeFrameForThisSpecificTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (HitAbilityTargetRightNow != nullptr)
		*HitAbilityTargetRightNow = Parms.HitAbilityTargetRightNow;

	if (HitAbilityTargetDuringThisAbilityActivation != nullptr)
		*HitAbilityTargetDuringThisAbilityActivation = Parms.HitAbilityTargetDuringThisAbilityActivation;

	if (ActorsWeHaveHitDuringThisAbilityActivation != nullptr)
		*ActorsWeHaveHitDuringThisAbilityActivation = std::move(Parms.ActorsWeHaveHitDuringThisAbilityActivation);

	if (ActorsHitWithThisSpecificTargetSelection != nullptr)
		*ActorsHitWithThisSpecificTargetSelection = std::move(Parms.ActorsHitWithThisSpecificTargetSelection);
}

void UGA_NPC_Parent_C::NPC_ApplyGameplayEffectWithMMRScaling(class UClass* GameplayEffectClass, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ApplyGameplayEffectWithMMRScaling");

	Params::GA_NPC_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_AttemptBuildFrustrationDueToGoal(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AttemptBuildFrustrationDueToGoal");

	Params::GA_NPC_Parent_C_NPC_AttemptBuildFrustrationDueToGoal Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_AttemptBuildFrustrationDueToMovement(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC AttemptBuildFrustrationDueToMovement");

	Params::GA_NPC_Parent_C_NPC_AttemptBuildFrustrationDueToMovement Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_ClearFrustrationTagsForGoals(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ClearFrustrationTagsForGoals");

	Params::GA_NPC_Parent_C_NPC_ClearFrustrationTagsForGoals Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_ClearFrustrationTagsForMovement(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ClearFrustrationTagsForMovement");

	Params::GA_NPC_Parent_C_NPC_ClearFrustrationTagsForMovement Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_DebugFreezeFrame(bool ForceDebugFreezeFrame, bool HitAbilityTargetRightNow, bool HitAbilityTargetDuringThisAbilityActivation, TArray<class AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, TArray<class AActor*>& ActorsHitWithThisSpecificTargetSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC DebugFreezeFrame");

	Params::GA_NPC_Parent_C_NPC_DebugFreezeFrame Parms{};

	Parms.ForceDebugFreezeFrame = ForceDebugFreezeFrame;
	Parms.HitAbilityTargetRightNow = HitAbilityTargetRightNow;
	Parms.HitAbilityTargetDuringThisAbilityActivation = HitAbilityTargetDuringThisAbilityActivation;
	Parms.ActorsWeHaveHitDuringThisAbilityActivation = std::move(ActorsWeHaveHitDuringThisAbilityActivation);
	Parms.ActorsHitWithThisSpecificTargetSelection = std::move(ActorsHitWithThisSpecificTargetSelection);

	UObject::ProcessEvent(Func, &Parms);

	ActorsWeHaveHitDuringThisAbilityActivation = std::move(Parms.ActorsWeHaveHitDuringThisAbilityActivation);
	ActorsHitWithThisSpecificTargetSelection = std::move(Parms.ActorsHitWithThisSpecificTargetSelection);
}

void UGA_NPC_Parent_C::NPC_DoIntentionalFailedAttack(bool* DoIntentionalFailedAttack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC DoIntentionalFailedAttack");

	Params::GA_NPC_Parent_C_NPC_DoIntentionalFailedAttack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DoIntentionalFailedAttack != nullptr)
		*DoIntentionalFailedAttack = Parms.DoIntentionalFailedAttack;
}

void UGA_NPC_Parent_C::NPC_EQS_Results(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus, EEnvQueryRunMode EQS_RunMode, bool NumReturnedItemsIsImportant, TArray<class AActor*>* ResultActors, int32* NumValidActorsGenerated, bool* ResultActorsSuccess, TArray<struct FVector>* ResultLocations, int32* NumValidLocationsGenerated, bool* ResultLocationsSuccess, class UEnvQueryInstanceBlueprintWrapper** QueryInstanceOut, EEnvQueryStatus* QueryStatusOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC EQS Results");

	Params::GA_NPC_Parent_C_NPC_EQS_Results Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;
	Parms.EQS_RunMode = EQS_RunMode;
	Parms.NumReturnedItemsIsImportant = NumReturnedItemsIsImportant;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultActors != nullptr)
		*ResultActors = std::move(Parms.ResultActors);

	if (NumValidActorsGenerated != nullptr)
		*NumValidActorsGenerated = Parms.NumValidActorsGenerated;

	if (ResultActorsSuccess != nullptr)
		*ResultActorsSuccess = Parms.ResultActorsSuccess;

	if (ResultLocations != nullptr)
		*ResultLocations = std::move(Parms.ResultLocations);

	if (NumValidLocationsGenerated != nullptr)
		*NumValidLocationsGenerated = Parms.NumValidLocationsGenerated;

	if (ResultLocationsSuccess != nullptr)
		*ResultLocationsSuccess = Parms.ResultLocationsSuccess;

	if (QueryInstanceOut != nullptr)
		*QueryInstanceOut = Parms.QueryInstanceOut;

	if (QueryStatusOut != nullptr)
		*QueryStatusOut = Parms.QueryStatusOut;
}

void UGA_NPC_Parent_C::NPC_GenerateLaunchVelocityWithMinimumAngle(class AActor* ActorWeWantToLaunch, bool Vehicle, struct FVector* LaunchVelocity, class AActor** LaunchActor, bool* LaunchingVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC GenerateLaunchVelocityWithMinimumAngle");

	Params::GA_NPC_Parent_C_NPC_GenerateLaunchVelocityWithMinimumAngle Parms{};

	Parms.ActorWeWantToLaunch = ActorWeWantToLaunch;
	Parms.Vehicle = Vehicle;

	UObject::ProcessEvent(Func, &Parms);

	if (LaunchVelocity != nullptr)
		*LaunchVelocity = std::move(Parms.LaunchVelocity);

	if (LaunchActor != nullptr)
		*LaunchActor = Parms.LaunchActor;

	if (LaunchingVehicle != nullptr)
		*LaunchingVehicle = Parms.LaunchingVehicle;
}

class UObject* UGA_NPC_Parent_C::NPC_GetGoalActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC GetGoalActor");

	Params::GA_NPC_Parent_C_NPC_GetGoalActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGA_NPC_Parent_C::NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, double AtLevel, bool* AsBool, int32* AsIntRounded, double* AsFloat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC GetScalableFloatHotfixValue");

	Params::GA_NPC_Parent_C_NPC_GetScalableFloatHotfixValue Parms{};

	Parms.ScalableFloatHotfix = std::move(ScalableFloatHotfix);
	Parms.AtLevel = AtLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBool != nullptr)
		*AsBool = Parms.AsBool;

	if (AsIntRounded != nullptr)
		*AsIntRounded = Parms.AsIntRounded;

	if (AsFloat != nullptr)
		*AsFloat = Parms.AsFloat;
}

void UGA_NPC_Parent_C::NPC_IsMontageInfoValid(const struct FFortGameplayAbilityMontageInfo& MontageInfo_0, bool* IsValid_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC IsMontageInfoValid");

	Params::GA_NPC_Parent_C_NPC_IsMontageInfoValid Parms{};

	Parms.MontageInfo_0 = std::move(MontageInfo_0);

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid_ != nullptr)
		*IsValid_ = Parms.IsValid_;
}

void UGA_NPC_Parent_C::NPC_OverrideRotationRate(const struct FScalableFloat& RotationRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC OverrideRotationRate");

	Params::GA_NPC_Parent_C_NPC_OverrideRotationRate Parms{};

	Parms.RotationRate = std::move(RotationRate);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_ResetRotationRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ResetRotationRate");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_NPC_Parent_C::NPC_ScalableFloatIsValid(const struct FScalableFloat& ScalableFloat, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC ScalableFloatIsValid");

	Params::GA_NPC_Parent_C_NPC_ScalableFloatIsValid Parms{};

	Parms.ScalableFloat = std::move(ScalableFloat);

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}

void UGA_NPC_Parent_C::NPC_SetAlertLevel(Enum_NPC_AlertLevel NPC_AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC SetAlertLevel");

	Params::GA_NPC_Parent_C_NPC_SetAlertLevel Parms{};

	Parms.NPC_AlertLevel = NPC_AlertLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::NPC_SetAlertLevelByAIAbilityTargetType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC SetAlertLevelByAIAbilityTargetType");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_NPC_Parent_C::NPC_SetupAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC SetupAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_NPC_Parent_C::NPC_TryResetMovementUrgency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC TryResetMovementUrgency");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_NPC_Parent_C::NPC_TrySetMovementUrgency(EFortMovementUrgency MovementUrgency, bool TryResetUrgencyIfInvalid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "NPC TrySetMovementUrgency");

	Params::GA_NPC_Parent_C_NPC_TrySetMovementUrgency Parms{};

	Parms.MovementUrgency = MovementUrgency;
	Parms.TryResetUrgencyIfInvalid = TryResetUrgencyIfInvalid;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::Targeted_13B12ED64A3570FC1E117FAC4E3F7961(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "Targeted_13B12ED64A3570FC1E117FAC4E3F7961");

	Params::GA_NPC_Parent_C_Targeted_13B12ED64A3570FC1E117FAC4E3F7961 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_NPC_Parent_C::Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368");

	Params::GA_NPC_Parent_C_Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

bool UGA_NPC_Parent_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_NPC_Parent_C", "K2_CanActivateAbility");

	Params::GA_NPC_Parent_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
