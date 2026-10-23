#pragma once

#include "Basic.hpp"

#include "ScoutDroneRuntime_classes.hpp"
#include "ScoutDroneRuntime_parameters.hpp"

namespace SDK
{

void UFortGameplayAbility_ScoutDrone_Dive::BP_OnDroneStartedDiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dive", "BP_OnDroneStartedDiving");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGameplayAbility_ScoutDrone_Dive::BP_OnDroneStoppedDiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dive", "BP_OnDroneStoppedDiving");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGameplayAbility_ScoutDrone_TargetingBase::BP_OnTargetsFound(const struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "BP_OnTargetsFound");

	Params::FortGameplayAbility_ScoutDrone_TargetingBase_BP_OnTargetsFound Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_ScoutDrone_TargetingBase::StartTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "StartTargeting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_TargetingBase::StopTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_TargetingBase", "StopTargeting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_SpeedBoost::OnBoostedIntoActor(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_SpeedBoost", "OnBoostedIntoActor");

	Params::FortGameplayAbility_ScoutDrone_SpeedBoost_OnBoostedIntoActor Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_ScoutDrone_SpeedBoost::OnDoorBashed(const struct FHitResult& HitResult, class UFortBuildingWallDoorComponent* BashedDoor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_SpeedBoost", "OnDoorBashed");

	Params::FortGameplayAbility_ScoutDrone_SpeedBoost_OnDoorBashed Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.BashedDoor = BashedDoor;

	UObject::ProcessEvent(Func, &Parms);
}

class AFortScoutDrone* UFortGameplayAbility_ScoutDrone_Dismiss::GetControlledDrone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Dismiss", "GetControlledDrone");

	Params::FortGameplayAbility_ScoutDrone_Dismiss_GetControlledDrone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::OnStartHighlightingTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_MarkPotentialTargets", "OnStartHighlightingTarget");

	Params::FortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStartHighlightingTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_ScoutDrone_MarkPotentialTargets::OnStoppedHighlightingTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_MarkPotentialTargets", "OnStoppedHighlightingTarget");

	Params::FortGameplayAbility_ScoutDrone_MarkPotentialTargets_OnStoppedHighlightingTarget Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_ScoutDrone_PassiveMark::BP_OnTargetStatusChanged(class AActor* ActiveTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "BP_OnTargetStatusChanged");

	Params::FortGameplayAbility_ScoutDrone_PassiveMark_BP_OnTargetStatusChanged Parms{};

	Parms.ActiveTarget = ActiveTarget;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_ScoutDrone_PassiveMark::OnActorIndicatorExpired(class AActor* IndicatedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "OnActorIndicatorExpired");

	Params::FortGameplayAbility_ScoutDrone_PassiveMark_OnActorIndicatorExpired Parms{};

	Parms.IndicatedActor = IndicatedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_PassiveMark::OnRep_CurrentTargetStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PassiveMark", "OnRep_CurrentTargetStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_PickUp::ServerConfirmTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_PickUp", "ServerConfirmTargets");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_Tether::OnRep_bIsInSignalLossRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "OnRep_bIsInSignalLossRange");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_Tether::OnRep_bIsInWarningRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "OnRep_bIsInWarningRange");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_Tether::StartCheckingDistances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "StartCheckingDistances");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_ScoutDrone_Tether::StopCheckingDistances()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_ScoutDrone_Tether", "StopCheckingDistances");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortAthenaMutator_ScoutDrone::OnViewTargetChanged(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_ScoutDrone", "OnViewTargetChanged");

	Params::FortAthenaMutator_ScoutDrone_OnViewTargetChanged Parms{};

	Parms.PlayerController = PlayerController;
	Parms.OldViewTarget = OldViewTarget;
	Parms.NewViewTarget = NewViewTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortChargingSet_ScoutDroneEnergy::OnRep_Energy(const struct FFortGameplayAttributeData& OldValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortChargingSet_ScoutDroneEnergy", "OnRep_Energy");

	Params::FortChargingSet_ScoutDroneEnergy_OnRep_Energy Parms{};

	Parms.OldValue = std::move(OldValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortScoutDrone::GameplayCue_Damage(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "GameplayCue_Damage");

	Params::FortScoutDrone_GameplayCue_Damage Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortScoutDrone::GetForwardAndRightDotProducts_Native(float* OutForwardDot, float* OutRightDot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "GetForwardAndRightDotProducts_Native");

	Params::FortScoutDrone_GetForwardAndRightDotProducts_Native Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutForwardDot != nullptr)
		*OutForwardDot = Parms.OutForwardDot;

	if (OutRightDot != nullptr)
		*OutRightDot = Parms.OutRightDot;
}

void AFortScoutDrone::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "OnDamagePlayEffects");

	Params::FortScoutDrone_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortScoutDrone::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "OnDeathPlayEffects");

	Params::FortScoutDrone_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortScoutDrone::OnRep_ControllingPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "OnRep_ControllingPlayerPawn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortScoutDrone::SetAffiliationAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "SetAffiliationAudio");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortScoutDrone::SetTeamMatesIndicator(bool bState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "SetTeamMatesIndicator");

	Params::FortScoutDrone_SetTeamMatesIndicator Parms{};

	Parms.bState = bState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortScoutDrone::SetupGameplayAudioParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "SetupGameplayAudioParameters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortPawn* AFortScoutDrone::GetControllingPlayerPawn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "GetControllingPlayerPawn");

	Params::FortScoutDrone_GetControllingPlayerPawn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator AFortScoutDrone::GetDeltaRotator() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "GetDeltaRotator");

	Params::FortScoutDrone_GetDeltaRotator Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortScoutDrone::GetHealthPercentage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDrone", "GetHealthPercentage");

	Params::FortScoutDrone_GetHealthPercentage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortScoutDroneControllingComponent::BP_OnDestructionStarted(bool bInstantDestruction, const struct FGameplayTag& DismissalReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDestructionStarted");

	Params::FortScoutDroneControllingComponent_BP_OnDestructionStarted Parms{};

	Parms.bInstantDestruction = bInstantDestruction;
	Parms.DismissalReason = std::move(DismissalReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortScoutDroneControllingComponent::BP_OnDismissalStarted(bool bInstantDismissal, const struct FGameplayTag& DismissalReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDismissalStarted");

	Params::FortScoutDroneControllingComponent_BP_OnDismissalStarted Parms{};

	Parms.bInstantDismissal = bInstantDismissal;
	Parms.DismissalReason = std::move(DismissalReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortScoutDroneControllingComponent::BP_OnDroneDestroyed(const struct FGameplayTag& DismissalReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnDroneDestroyed");

	Params::FortScoutDroneControllingComponent_BP_OnDroneDestroyed Parms{};

	Parms.DismissalReason = std::move(DismissalReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortScoutDroneControllingComponent::BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnPlayerInteractLongUseChanged");

	Params::FortScoutDroneControllingComponent_BP_OnPlayerInteractLongUseChanged Parms{};

	Parms.bInteracting = bInteracting;
	Parms.bLongUseInteractionCompleted = bLongUseInteractionCompleted;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortScoutDroneControllingComponent::BP_OnPlayerShortInteract()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "BP_OnPlayerShortInteract");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortScoutDroneControllingComponent::OnControlledDroneDestroyed(class AActor* InControlledDrone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnControlledDroneDestroyed");

	Params::FortScoutDroneControllingComponent_OnControlledDroneDestroyed Parms{};

	Parms.InControlledDrone = InControlledDrone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDroneControllingComponent::OnOwningPlayerStartedDBNO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnOwningPlayerStartedDBNO");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDroneControllingComponent::OnPlayerInterruptionTagsChanged(const struct FGameplayTag& tag, int32 NewCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnPlayerInterruptionTagsChanged");

	Params::FortScoutDroneControllingComponent_OnPlayerInterruptionTagsChanged Parms{};

	Parms.tag = std::move(tag);
	Parms.NewCount = NewCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDroneControllingComponent::OnRep_ControlledDrone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnRep_ControlledDrone");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDroneControllingComponent::OnRep_CurrentDestructionData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnRep_CurrentDestructionData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDroneControllingComponent::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "OnWeaponEquipped");

	Params::FortScoutDroneControllingComponent_OnWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDroneControllingComponent::ServerRequestDroneDismissal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "ServerRequestDroneDismissal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortScoutDrone* UFortScoutDroneControllingComponent::GetControlledDrone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDroneControllingComponent", "GetControlledDrone");

	Params::FortScoutDroneControllingComponent_GetControlledDrone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortScoutDronePickupManager::BP_OnActorsAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "BP_OnActorsAttached");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortScoutDronePickupManager::BP_OnActorsDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "BP_OnActorsDetached");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortScoutDronePickupManager::OnAttachedPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "OnAttachedPawnDied");

	Params::FortScoutDronePickupManager_OnAttachedPawnDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDronePickupManager::OnPawnDBNOStateChanged(class AFortPawn* Pawn, bool bIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "OnPawnDBNOStateChanged");

	Params::FortScoutDronePickupManager_OnPawnDBNOStateChanged Parms{};

	Parms.Pawn = Pawn;
	Parms.bIsDBNO = bIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDronePickupManager::OnRep_AttachedTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "OnRep_AttachedTargets");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDronePickupManager::ServerDropAttachedActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "ServerDropAttachedActors");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortScoutDronePickupManager::ServerUpdateItemAttachment(const struct FVector& CalculatedItemOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "ServerUpdateItemAttachment");

	Params::FortScoutDronePickupManager_ServerUpdateItemAttachment Parms{};

	Parms.CalculatedItemOffset = std::move(CalculatedItemOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortScoutDronePickupManager::HasAnyAttachedActors() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "HasAnyAttachedActors");

	Params::FortScoutDronePickupManager_HasAnyAttachedActors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortScoutDronePickupManager::HasAPawnAtached() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortScoutDronePickupManager", "HasAPawnAtached");

	Params::FortScoutDronePickupManager_HasAPawnAtached Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
