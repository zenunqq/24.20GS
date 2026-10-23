#pragma once

#include "Basic.hpp"

#include "RidingCodeRuntime_classes.hpp"
#include "RidingCodeRuntime_parameters.hpp"

namespace SDK
{

void UFortVehicleLayerAnimInstance_Riding::BlueprintCollectRidableAnimBPData(const class UAnimInstance* RidableAnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "BlueprintCollectRidableAnimBPData");

	Params::FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData Parms{};

	Parms.RidableAnimInstance = RidableAnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVehicleLayerAnimInstance_Riding::PlaceHandIKTargets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "PlaceHandIKTargets");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortVehicleLayerAnimInstance_Riding::SetFootPhase(const ERidingFootPhase InFootPhase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "SetFootPhase");

	Params::FortVehicleLayerAnimInstance_Riding_SetFootPhase Parms{};

	Parms.InFootPhase = InFootPhase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortVehicleLayerAnimInstance_Riding::UpdateBoostPlayRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "UpdateBoostPlayRate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortVehicleLayerAnimInstance_Riding::UpdateSlopePitchForRiding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleLayerAnimInstance_Riding", "UpdateSlopePitchForRiding");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URidingCheatManager::RidingSetStaminaPercent(const float StaminaPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidingCheatManager", "RidingSetStaminaPercent");

	Params::RidingCheatManager_RidingSetStaminaPercent Parms{};

	Parms.StaminaPercent = StaminaPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URidingCheatManager::StartRidingActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidingCheatManager", "StartRidingActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URidingCheatManager::StopRidingActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidingCheatManager", "StopRidingActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URidableComponent::CheatSetStaminaPercent(const float StaminaPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "CheatSetStaminaPercent");

	Params::RidableComponent_CheatSetStaminaPercent Parms{};

	Parms.StaminaPercent = StaminaPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void URidableComponent::HandleRiderEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "HandleRiderEndPlay");

	Params::RidableComponent_HandleRiderEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URidableComponent::HandleRiderStartedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "HandleRiderStartedRiding");

	Params::RidableComponent_HandleRiderStartedRiding Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URidableComponent::HandleRiderStoppedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "HandleRiderStoppedRiding");

	Params::RidableComponent_HandleRiderStoppedRiding Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URidableComponent::OnRep_ActiveRider()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "OnRep_ActiveRider");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool URidableComponent::CanBePet(class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "CanBePet");

	Params::RidableComponent_CanBePet Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URidableComponent::CanBeRiddenBP(class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "CanBeRiddenBP");

	Params::RidableComponent_CanBeRiddenBP Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URidableComponent::CanRiderPlayEmote(const class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "CanRiderPlayEmote");

	Params::RidableComponent_CanRiderPlayEmote Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FRidingPettingData URidableComponent::GetPettingData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "GetPettingData");

	Params::RidableComponent_GetPettingData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USceneComponent* URidableComponent::GetRidingAttachComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "GetRidingAttachComponent");

	Params::RidableComponent_GetRidingAttachComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URidableComponent::GetRidingCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "GetRidingCapsuleSize");

	Params::RidableComponent_GetRidingCapsuleSize Parms{};

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;
}

void URidableComponent::GetRidingEmoteCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "GetRidingEmoteCapsuleSize");

	Params::RidableComponent_GetRidingEmoteCapsuleSize Parms{};

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;
}

bool URidableComponent::IsBeingRidden() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "IsBeingRidden");

	Params::RidableComponent_IsBeingRidden Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URidableComponent::IsFlying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "IsFlying");

	Params::RidableComponent_IsFlying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URidableComponent::IsSprinting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "IsSprinting");

	Params::RidableComponent_IsSprinting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URidableComponent::ShouldCameraFocusOnRidable(const class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RidableComponent", "ShouldCameraFocusOnRidable");

	Params::RidableComponent_ShouldCameraFocusOnRidable Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControllableRidableComponent::CancelBuildBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "CancelBuildBar");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllableRidableComponent::HandleAbilityHeld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleAbilityHeld");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllableRidableComponent::HandleAbilityStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleAbilityStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllableRidableComponent::HandleAbilityStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleAbilityStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllableRidableComponent::HandleCancelSprint(const bool bAbilityInputHeld, const bool bForceCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleCancelSprint");

	Params::ControllableRidableComponent_HandleCancelSprint Parms{};

	Parms.bAbilityInputHeld = bAbilityInputHeld;
	Parms.bForceCancel = bForceCancel;

	UObject::ProcessEvent(Func, &Parms);
}

void UControllableRidableComponent::HandleJumpHeld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleJumpHeld");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllableRidableComponent::HandleJumpStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleJumpStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllableRidableComponent::HandleJumpStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "HandleJumpStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllableRidableComponent::OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "OnCapsuleBeginOverlap");

	Params::ControllableRidableComponent_OnCapsuleBeginOverlap Parms{};

	Parms.OverlappedComp = OverlappedComp;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControllableRidableComponent::OnRep_IsBeingControlled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "OnRep_IsBeingControlled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllableRidableComponent::ServerDoJumpExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "ServerDoJumpExit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UControllableRidableComponent::CanBeControlled(class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "CanBeControlled");

	Params::ControllableRidableComponent_CanBeControlled Parms{};

	Parms.Rider = Rider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControllableRidableComponent::CanStartSprinting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "CanStartSprinting");

	Params::ControllableRidableComponent_CanStartSprinting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class FText UControllableRidableComponent::GetAbilityDisplayText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "GetAbilityDisplayText");

	Params::ControllableRidableComponent_GetAbilityDisplayText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControllableRidableComponent::IsSprintToggleable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllableRidableComponent", "IsSprintToggleable");

	Params::ControllableRidableComponent_IsSprintToggleable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void URiderComponent::ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "ClientHandleFinishedCharacterCustomization");

	Params::RiderComponent_ClientHandleFinishedCharacterCustomization Parms{};

	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::ClientNotifyEmoteFailure(const struct FGameplayTagContainer& ErrorTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "ClientNotifyEmoteFailure");

	Params::RiderComponent_ClientNotifyEmoteFailure Parms{};

	Parms.ErrorTags = std::move(ErrorTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleActorEndPlayWhileRiding(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleActorEndPlayWhileRiding");

	Params::RiderComponent_HandleActorEndPlayWhileRiding Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleDBNOWhileRiding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleDBNOWhileRiding");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleDeferredExitVelocity(const struct FVector& ExitVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleDeferredExitVelocity");

	Params::RiderComponent_HandleDeferredExitVelocity Parms{};

	Parms.ExitVelocity = std::move(ExitVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleGamepadRidingExitReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleGamepadRidingExitReleased");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleOnWeaponEquipped");

	Params::RiderComponent_HandleOnWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandlePawnDiedWhileRiding(class AFortPawn* DeadPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandlePawnDiedWhileRiding");

	Params::RiderComponent_HandlePawnDiedWhileRiding Parms{};

	Parms.DeadPawn = DeadPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandlePawnTeleported(class AFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandlePawnTeleported");

	Params::RiderComponent_HandlePawnTeleported Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleRidableFound(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleRidableFound");

	Params::RiderComponent_HandleRidableFound Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}

void URiderComponent::HandleRiderDidDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleRiderDidDamage");

	Params::RiderComponent_HandleRiderDidDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleRiderTakenDamage(class AActor* DamageOnOwnerPawnDamageddActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleRiderTakenDamage");

	Params::RiderComponent_HandleRiderTakenDamage Parms{};

	Parms.DamageOnOwnerPawnDamageddActor = DamageOnOwnerPawnDamageddActor;
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

void URiderComponent::HandleRidingExitPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleRidingExitPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleRidingExitReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleRidingExitReleased");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleStartedRiding(class URidableComponent* Ridable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleStartedRiding");

	Params::RiderComponent_HandleStartedRiding Parms{};

	Parms.Ridable = Ridable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::HandleStoppedRiding(class URidableComponent* Ridable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "HandleStoppedRiding");

	Params::RiderComponent_HandleStoppedRiding Parms{};

	Parms.Ridable = Ridable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::OnMovementModeChanged(class ACharacter* InCharacter, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "OnMovementModeChanged");

	Params::RiderComponent_OnMovementModeChanged Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::OnRep_ActiveRidable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "OnRep_ActiveRidable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::OnRep_IsSprintingReplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "OnRep_IsSprintingReplay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::OnRep_RidableControlRuntimeUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "OnRep_RidableControlRuntimeUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URiderComponent::ServerRidingExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "ServerRidingExit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool URiderComponent::StartRidingActor(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "StartRidingActor");

	Params::RiderComponent_StartRidingActor Parms{};

	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URiderComponent::StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "StopRidingActor");

	Params::RiderComponent_StopRidingActor Parms{};

	Parms.bLaunchRider = bLaunchRider;
	Parms.bFindDismountLocation = bFindDismountLocation;
	Parms.bIsJumpExit = bIsJumpExit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool URiderComponent::IsRidingActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderComponent", "IsRidingActor");

	Params::RiderComponent_IsRidingActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UControllingRiderComponent::ControllingActor_OnJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ControllingActor_OnJumpInput");

	Params::ControllingRiderComponent_ControllingActor_OnJumpInput Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::ControllingActor_OnMoveForward(float Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ControllingActor_OnMoveForward");

	Params::ControllingRiderComponent_ControllingActor_OnMoveForward Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::ControllingActor_OnMoveRight(float Val)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ControllingActor_OnMoveRight");

	Params::ControllingRiderComponent_ControllingActor_OnMoveRight Parms{};

	Parms.Val = Val;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::HandleGamepadRidingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleGamepadRidingAbilityPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::HandlePettingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandlePettingAbilityPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::HandleRequestPettingStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRequestPettingStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllingRiderComponent::HandleRequestPettingStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRequestPettingStop");

	UObject::ProcessEvent(Func, nullptr);
}

void UControllingRiderComponent::HandleRidingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRidingAbilityPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::HandleRidingAbilityReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleRidingAbilityReleased");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::HandleSpotActorOrPettingAbilityPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleSpotActorOrPettingAbilityPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::HandleSpotActorOrPettingAbilityReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "HandleSpotActorOrPettingAbilityReleased");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::OnRep_ControlInputReliable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "OnRep_ControlInputReliable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::OnRep_ControlInputUnreliable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "OnRep_ControlInputUnreliable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::OnRep_IsControllingRidable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "OnRep_IsControllingRidable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::OnSprintCanceled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "OnSprintCanceled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::ReloadPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ReloadPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::ServerCancelPetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ServerCancelPetting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::ServerUpdateControlInputStateReliable(const struct FRidingControlInputStateReliable& InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ServerUpdateControlInputStateReliable");

	Params::ControllingRiderComponent_ServerUpdateControlInputStateReliable Parms{};

	Parms.InputState = std::move(InputState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::ServerUpdateControlInputStateUnreliable(const struct FRidingControlInputStateUnreliable& InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "ServerUpdateControlInputStateUnreliable");

	Params::ControllingRiderComponent_ServerUpdateControlInputStateUnreliable Parms{};

	Parms.InputState = std::move(InputState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UControllingRiderComponent::UpdateFromInput(float DeltaTime, const struct FRidingControlInputState& InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "UpdateFromInput");

	Params::ControllingRiderComponent_UpdateFromInput Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.InputState = std::move(InputState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FRidingControlInputState UControllingRiderComponent::GetControlInputState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "GetControlInputState");

	Params::ControllingRiderComponent_GetControlInputState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UControllingRiderComponent::IsTryingToMove(float Tolerance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllingRiderComponent", "IsTryingToMove");

	Params::ControllingRiderComponent_IsTryingToMove Parms{};

	Parms.Tolerance = Tolerance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAthenaPettingWildlifeTelemetryData::OnPetted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaPettingWildlifeTelemetryData", "OnPetted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
