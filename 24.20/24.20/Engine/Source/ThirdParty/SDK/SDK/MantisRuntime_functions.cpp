#pragma once

#include "Basic.hpp"

#include "MantisRuntime_classes.hpp"
#include "MantisRuntime_parameters.hpp"

namespace SDK
{

void UFortMantisLayerAnimInstance::OnMantisTechniqueEnded(const int32 TechniqueIndex, const class FName TechniqueName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisLayerAnimInstance", "OnMantisTechniqueEnded");

	Params::FortMantisLayerAnimInstance_OnMantisTechniqueEnded Parms{};

	Parms.TechniqueIndex = TechniqueIndex;
	Parms.TechniqueName = TechniqueName;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMantisLayerAnimInstance::OnMantisTechniqueStarted(const int32 TechniqueIndex, const class FName TechniqueName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisLayerAnimInstance", "OnMantisTechniqueStarted");

	Params::FortMantisLayerAnimInstance_OnMantisTechniqueStarted Parms{};

	Parms.TechniqueIndex = TechniqueIndex;
	Parms.TechniqueName = TechniqueName;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::BP_MantisAbilityTechniqueStarted(const struct FGameplayTagContainer& OwningTags, class FName SequenceName, bool StartsSequence, bool EndsSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_MantisAbilityTechniqueStarted");

	Params::FortGameplayAbility_Mantis_BP_MantisAbilityTechniqueStarted Parms{};

	Parms.OwningTags = std::move(OwningTags);
	Parms.SequenceName = SequenceName;
	Parms.StartsSequence = StartsSequence;
	Parms.EndsSequence = EndsSequence;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::BP_OnMantisInputEvent(const EFortMantisTechniqueActivationInputType InputType, const EFortMantisTechniqueActivationTimingType InputTiming, const bool bDidInputStartTechnique, const bool bDidInputQueueTechnique, const float InputHeldDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnMantisInputEvent");

	Params::FortGameplayAbility_Mantis_BP_OnMantisInputEvent Parms{};

	Parms.InputType = InputType;
	Parms.InputTiming = InputTiming;
	Parms.bDidInputStartTechnique = bDidInputStartTechnique;
	Parms.bDidInputQueueTechnique = bDidInputQueueTechnique;
	Parms.InputHeldDuration = InputHeldDuration;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::BP_OnMantisTechniqueHit(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnMantisTechniqueHit");

	Params::FortGameplayAbility_Mantis_BP_OnMantisTechniqueHit Parms{};

	Parms.TargetDataHandle = std::move(TargetDataHandle);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::BP_OnTechniqueNotifyEvent(const EFortMantisNotifyEvent NotifyEvent, const class UFortAnimNotify_Mantis* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnTechniqueNotifyEvent");

	Params::FortGameplayAbility_Mantis_BP_OnTechniqueNotifyEvent Parms{};

	Parms.NotifyEvent = NotifyEvent;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::BP_OnTechniqueNotifyWindowEnded(const EFortMantisNotifyWindow NotifyWindow, const class UFortAnimNotifyState_Mantis* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnTechniqueNotifyWindowEnded");

	Params::FortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowEnded Parms{};

	Parms.NotifyWindow = NotifyWindow;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::BP_OnTechniqueNotifyWindowStarted(const EFortMantisNotifyWindow NotifyWindow, const class UFortAnimNotifyState_Mantis* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "BP_OnTechniqueNotifyWindowStarted");

	Params::FortGameplayAbility_Mantis_BP_OnTechniqueNotifyWindowStarted Parms{};

	Parms.NotifyWindow = NotifyWindow;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGameplayAbility_Mantis::ConfigureRootMotionWarping(const class FName TechniqueName, bool* bOutAllowTranslationWarp, bool* bOutAllowRotationWarp, class AActor** OutTargetActor, bool* bOutSnapshotTargetActorLocation, bool* bOutWarpTranslationToLocation, struct FVector* outTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "ConfigureRootMotionWarping");

	Params::FortGameplayAbility_Mantis_ConfigureRootMotionWarping Parms{};

	Parms.TechniqueName = TechniqueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bOutAllowTranslationWarp != nullptr)
		*bOutAllowTranslationWarp = Parms.bOutAllowTranslationWarp;

	if (bOutAllowRotationWarp != nullptr)
		*bOutAllowRotationWarp = Parms.bOutAllowRotationWarp;

	if (OutTargetActor != nullptr)
		*OutTargetActor = Parms.OutTargetActor;

	if (bOutSnapshotTargetActorLocation != nullptr)
		*bOutSnapshotTargetActorLocation = Parms.bOutSnapshotTargetActorLocation;

	if (bOutWarpTranslationToLocation != nullptr)
		*bOutWarpTranslationToLocation = Parms.bOutWarpTranslationToLocation;

	if (outTargetLocation != nullptr)
		*outTargetLocation = std::move(Parms.outTargetLocation);
}

void UFortGameplayAbility_Mantis::FillMetadataForTechnique(const class FName TechniqueName, struct FFortMantisTechniqueMetadata* OutTechniqueMetadata)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "FillMetadataForTechnique");

	Params::FortGameplayAbility_Mantis_FillMetadataForTechnique Parms{};

	Parms.TechniqueName = TechniqueName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTechniqueMetadata != nullptr)
		*OutTechniqueMetadata = std::move(Parms.OutTechniqueMetadata);
}

void UFortGameplayAbility_Mantis::OnMontageCancelled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageCancelled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGameplayAbility_Mantis::OnMontageFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "OnMontageFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class FName UFortGameplayAbility_Mantis::GetDynamicMontageNameForTechnique(const class FName TechniqueName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "GetDynamicMontageNameForTechnique");

	Params::FortGameplayAbility_Mantis_GetDynamicMontageNameForTechnique Parms{};

	Parms.TechniqueName = TechniqueName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortGameplayAbility_Mantis::GetLevelForGameplayEffectContainer(const struct FGameplayTag& ApplicationTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayAbility_Mantis", "GetLevelForGameplayEffectContainer");

	Params::FortGameplayAbility_Mantis_GetLevelForGameplayEffectContainer Parms{};

	Parms.ApplicationTag = std::move(ApplicationTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMantisPawnComponent::IsSpecificInputPressed(EFortMantisTechniqueActivationInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "IsSpecificInputPressed");

	Params::FortMantisPawnComponent_IsSpecificInputPressed Parms{};

	Parms.InputType = InputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMantisPawnComponent::OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnCharacterMovementPreUpdate");

	Params::FortMantisPawnComponent_OnCharacterMovementPreUpdate Parms{};

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisPawnComponent::OnOwnerWeaponHolstered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnOwnerWeaponHolstered");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMantisPawnComponent::OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "OnPostPhysicsRotation");

	Params::FortMantisPawnComponent_OnPostPhysicsRotation Parms{};

	Parms.CharMoveComp = CharMoveComp;
	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisPawnComponent::SetBranchRule(EFortMantisBranchRule InBranchRule, EFortMantisBranchPath InBranchPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "SetBranchRule");

	Params::FortMantisPawnComponent_SetBranchRule Parms{};

	Parms.InBranchRule = InBranchRule;
	Parms.InBranchPath = InBranchPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisPawnComponent::SetLockOnState(bool bEnabled, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "SetLockOnState");

	Params::FortMantisPawnComponent_SetLockOnState Parms{};

	Parms.bEnabled = bEnabled;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisPawnComponent::SimulateInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, const bool bForceProcessEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "SimulateInputEvent");

	Params::FortMantisPawnComponent_SimulateInputEvent Parms{};

	Parms.InputType = InputType;
	Parms.InputTiming = InputTiming;
	Parms.bForceProcessEvent = bForceProcessEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortMantisPawnComponent::TryManuallyEndCurrentTechnique()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "TryManuallyEndCurrentTechnique");

	Params::FortMantisPawnComponent_TryManuallyEndCurrentTechnique Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMantisPawnComponent::TryManuallyStartTechnique(const int32 TechniqueDataIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "TryManuallyStartTechnique");

	Params::FortMantisPawnComponent_TryManuallyStartTechnique Parms{};

	Parms.TechniqueDataIndex = TechniqueDataIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FFortMantisTechniqueMetadata UFortMantisPawnComponent::GetCurrentTechniqueMetadata() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "GetCurrentTechniqueMetadata");

	Params::FortMantisPawnComponent_GetCurrentTechniqueMetadata Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UFortMantisPawnComponent::GetLockOnTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "GetLockOnTarget");

	Params::FortMantisPawnComponent_GetLockOnTarget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMantisPawnComponent::HasCurrentTechniqueMetadataBeenSet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "HasCurrentTechniqueMetadataBeenSet");

	Params::FortMantisPawnComponent_HasCurrentTechniqueMetadataBeenSet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMantisPawnComponent::HasLockOnTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "HasLockOnTarget");

	Params::FortMantisPawnComponent_HasLockOnTarget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMantisPawnComponent::IsPerformingLockOn() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisPawnComponent", "IsPerformingLockOn");

	Params::FortMantisPawnComponent_IsPerformingLockOn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMantisWeaponComponent::OnEquip(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnEquip");

	Params::FortMantisWeaponComponent_OnEquip Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnPressSecondaryFire(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnPressSecondaryFire");

	Params::FortMantisWeaponComponent_OnPressSecondaryFire Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnPressTrigger(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnPressTrigger");

	Params::FortMantisWeaponComponent_OnPressTrigger Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnReleaseSecondaryFire(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnReleaseSecondaryFire");

	Params::FortMantisWeaponComponent_OnReleaseSecondaryFire Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnReleaseTrigger(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnReleaseTrigger");

	Params::FortMantisWeaponComponent_OnReleaseTrigger Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnRep_ReplayAnimInstanceInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnRep_ReplayAnimInstanceInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnUnEquip(class AFortWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnUnEquip");

	Params::FortMantisWeaponComponent_OnUnEquip Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMantisWeaponComponent::OnWeaponAbilitiesRemoved(class AFortWeapon* Weapon, EFortWeaponAbilityRemovalReason RemovalReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "OnWeaponAbilitiesRemoved");

	Params::FortMantisWeaponComponent_OnWeaponAbilitiesRemoved Parms{};

	Parms.Weapon = Weapon;
	Parms.RemovalReason = RemovalReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FFortMantisReplicatedAnimInstanceInfo UFortMantisWeaponComponent::GetAnimInstanceInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMantisWeaponComponent", "GetAnimInstanceInfo");

	Params::FortMantisWeaponComponent_GetAnimInstanceInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
