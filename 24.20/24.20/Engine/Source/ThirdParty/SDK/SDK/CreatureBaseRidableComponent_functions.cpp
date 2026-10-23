#pragma once

#include "Basic.hpp"

#include "CreatureBaseRidableComponent_classes.hpp"
#include "CreatureBaseRidableComponent_parameters.hpp"

namespace SDK
{

void UCreatureBaseRidableComponent_C::Activate_Regen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Activate Regen");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::Added_FBD936634BCC61A726DA279226E2F4BE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Added_FBD936634BCC61A726DA279226E2F4BE");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::ApplyCollisionResponse(TArray<ECollisionChannel>& Channels, ECollisionResponse Response)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ApplyCollisionResponse");

	Params::CreatureBaseRidableComponent_C_ApplyCollisionResponse Parms{};

	Parms.Channels = std::move(Channels);
	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

	Channels = std::move(Parms.Channels);
}

void UCreatureBaseRidableComponent_C::ApplyGEToSelf(TSubclassOf<class UGameplayEffect> GameplayEffectClass, bool* IsValidClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ApplyGEToSelf");

	Params::CreatureBaseRidableComponent_C_ApplyGEToSelf Parms{};

	Parms.GameplayEffectClass = GameplayEffectClass;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValidClass != nullptr)
		*IsValidClass = Parms.IsValidClass;
}

void UCreatureBaseRidableComponent_C::CanJumpExit(bool* CanJumpExit_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CanJumpExit");

	Params::CreatureBaseRidableComponent_C_CanJumpExit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanJumpExit_0 != nullptr)
		*CanJumpExit_0 = Parms.CanJumpExit_0;
}

void UCreatureBaseRidableComponent_C::CheatSetStaminaPercent(const float StaminaPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CheatSetStaminaPercent");

	Params::CreatureBaseRidableComponent_C_CheatSetStaminaPercent Parms{};

	Parms.StaminaPercent = StaminaPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::Check_Regen_on_Started_Riding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Check Regen on Started Riding");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::Check_Regen_on_Stopped_Riding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Check Regen on Stopped Riding");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CommitEnergyCosts");

	Params::CreatureBaseRidableComponent_C_CommitEnergyCosts Parms{};

	Parms.RequireAllEnergy = RequireAllEnergy;
	Parms.EnergyCost = EnergyCost;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UCreatureBaseRidableComponent_C::ConvertedDispatcher_Event_0(bool Converted, class AFortPawn* InstigatorPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ConvertedDispatcher_Event_0");

	Params::CreatureBaseRidableComponent_C_ConvertedDispatcher_Event_0 Parms{};

	Parms.Converted = Converted;
	Parms.InstigatorPawn = InstigatorPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::Deactivate_Regen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Deactivate Regen");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::DetermineRateOfChange(double* rateOfChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "DetermineRateOfChange");

	Params::CreatureBaseRidableComponent_C_DetermineRateOfChange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (rateOfChange != nullptr)
		*rateOfChange = Parms.rateOfChange;
}

void UCreatureBaseRidableComponent_C::EnergyTrackingStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "EnergyTrackingStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::EnergyTrackingStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "EnergyTrackingStop");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::ExecuteUbergraph_CreatureBaseRidableComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ExecuteUbergraph_CreatureBaseRidableComponent");

	Params::CreatureBaseRidableComponent_C_ExecuteUbergraph_CreatureBaseRidableComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::GetRiderLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRiderLocation");

	Params::CreatureBaseRidableComponent_C_GetRiderLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}

void UCreatureBaseRidableComponent_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRidingInfoFromTarget");

	Params::CreatureBaseRidableComponent_C_GetRidingInfoFromTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;
}

void UCreatureBaseRidableComponent_C::HandleAbilityHeld()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleAbilityHeld");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::HandleAbilityStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleAbilityStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::HandleAbilityStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleAbilityStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::HandleCancelSprint(const bool bAbilityInputHeld, const bool bForceCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleCancelSprint");

	Params::CreatureBaseRidableComponent_C_HandleCancelSprint Parms{};

	Parms.bAbilityInputHeld = bAbilityInputHeld;
	Parms.bForceCancel = bForceCancel;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::HandleEnemyFoleySoundLibrary(class UActorComponent* Rider, bool bIsRiding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleEnemyFoleySoundLibrary");

	Params::CreatureBaseRidableComponent_C_HandleEnemyFoleySoundLibrary Parms{};

	Parms.Rider = Rider;
	Parms.bIsRiding = bIsRiding;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::HandleJumpStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleJumpStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::HandleJumpStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleJumpStopped");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::HandleRiderStartedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleRiderStartedRiding");

	Params::CreatureBaseRidableComponent_C_HandleRiderStartedRiding Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::HandleRiderStoppedRiding(class URiderComponent* Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "HandleRiderStoppedRiding");

	Params::CreatureBaseRidableComponent_C_HandleRiderStoppedRiding Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::KickRiderOffSelf()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "KickRiderOffSelf");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::ManualEnergyDepleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ManualEnergyDepleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::NPCPawnInteractWithDispatcher_Event_0(class AActor* AIPawn, class AFortPlayerPawn* InteractingPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "NPCPawnInteractWithDispatcher_Event_0");

	Params::CreatureBaseRidableComponent_C_NPCPawnInteractWithDispatcher_Event_0 Parms{};

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::OnEatToRefuel(double EnergyCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnEatToRefuel");

	Params::CreatureBaseRidableComponent_C_OnEatToRefuel Parms{};

	Parms.EnergyCost = EnergyCost;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::OnEnergyDepletedClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnEnergyDepletedClient");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::OnEnergyUpdate(double Energy, bool bWarningActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnEnergyUpdate");

	Params::CreatureBaseRidableComponent_C_OnEnergyUpdate Parms{};

	Parms.Energy = Energy;
	Parms.bWarningActive = bWarningActive;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::OnJumping(double JumpPitchInterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnJumping");

	Params::CreatureBaseRidableComponent_C_OnJumping Parms{};

	Parms.JumpPitchInterpSpeed = JumpPitchInterpSpeed;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::OnJumpingApex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnJumpingApex");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnMovementModeChanged");

	Params::CreatureBaseRidableComponent_C_OnMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::OnPawnHealthChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnPawnHealthChanged_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::OnRep_currentEnergyValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnRep_currentEnergyValue");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::OnRep_IdleAnim_Add()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnRep_IdleAnim_Add");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::OnSprintStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "OnSprintStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::Propagate_Immunity_Fall_Damage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Propagate Immunity Fall Damage");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ReceiveEndPlay");

	Params::CreatureBaseRidableComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::Removed_AD51144144164FD235EE5BA4F6E87456()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Removed_AD51144144164FD235EE5BA4F6E87456");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::Removed_C4C6E29B4217C014B9DE0E80B7134D6E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "Removed_C4C6E29B4217C014B9DE0E80B7134D6E");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::RemoveGEByTag(const struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "RemoveGEByTag");

	Params::CreatureBaseRidableComponent_C_RemoveGEByTag Parms{};

	Parms.Tags = std::move(Tags);

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::RestoreCollisionResponses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "RestoreCollisionResponses");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::ReTryJumpExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ReTryJumpExit");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::SetInfiniteStaminaBuff(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "SetInfiniteStaminaBuff");

	Params::CreatureBaseRidableComponent_C_SetInfiniteStaminaBuff Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::SetWildlifeHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "SetWildlifeHealth");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::StopSprinting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "StopSprinting");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool* crossedThreshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "TestThreshold");

	Params::CreatureBaseRidableComponent_C_TestThreshold Parms{};

	Parms.isDecaying = isDecaying;
	Parms.CurrentValue = CurrentValue;
	Parms.testTreshold = testTreshold;
	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);

	if (crossedThreshold != nullptr)
		*crossedThreshold = Parms.crossedThreshold;
}

void UCreatureBaseRidableComponent_C::ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool* bChangedRiding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ToggleRiding");

	Params::CreatureBaseRidableComponent_C_ToggleRiding Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.Target = Target;
	Parms.ShouldRide = ShouldRide;

	UObject::ProcessEvent(Func, &Parms);

	if (bChangedRiding != nullptr)
		*bChangedRiding = Parms.bChangedRiding;
}

void UCreatureBaseRidableComponent_C::ToggleRidingAlternative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ToggleRidingAlternative");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::UpdateAnimInputBool(class AFortPawn* FortPawn, bool IsBeingRidden_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateAnimInputBool");

	Params::CreatureBaseRidableComponent_C_UpdateAnimInputBool Parms{};

	Parms.FortPawn = FortPawn;
	Parms.IsBeingRidden_0 = IsBeingRidden_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::UpdateDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateDebug");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::UpdateEnergy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateEnergy");

	UObject::ProcessEvent(Func, nullptr);
}

void UCreatureBaseRidableComponent_C::UpdateLootAnimalGlow(double Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateLootAnimalGlow");

	Params::CreatureBaseRidableComponent_C_UpdateLootAnimalGlow Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}

void UCreatureBaseRidableComponent_C::UpdateValue(double TargetValue, double rateOfChange, double DeltaTime, double* updatedValue, bool* EnergyDepleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UpdateValue");

	Params::CreatureBaseRidableComponent_C_UpdateValue Parms{};

	Parms.TargetValue = TargetValue;
	Parms.rateOfChange = rateOfChange;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (updatedValue != nullptr)
		*updatedValue = Parms.updatedValue;

	if (EnergyDepleted != nullptr)
		*EnergyDepleted = Parms.EnergyDepleted;
}

void UCreatureBaseRidableComponent_C::UseEnergyAmountServer(double EnergyCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "UseEnergyAmountServer");

	Params::CreatureBaseRidableComponent_C_UseEnergyAmountServer Parms{};

	Parms.EnergyCost = EnergyCost;

	UObject::ProcessEvent(Func, &Parms);
}

bool UCreatureBaseRidableComponent_C::CanBePet(class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CanBePet");

	Params::CreatureBaseRidableComponent_C_CanBePet Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UCreatureBaseRidableComponent_C::CanRiderPlayEmote(const class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "CanRiderPlayEmote");

	Params::CreatureBaseRidableComponent_C_CanRiderPlayEmote Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCreatureBaseRidableComponent_C::GetRiderCapsuleSize(class URiderComponent* Rider, double* RiderCapsuleRadius, double* RiderCapsuleHH) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRiderCapsuleSize");

	Params::CreatureBaseRidableComponent_C_GetRiderCapsuleSize Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	if (RiderCapsuleRadius != nullptr)
		*RiderCapsuleRadius = Parms.RiderCapsuleRadius;

	if (RiderCapsuleHH != nullptr)
		*RiderCapsuleHH = Parms.RiderCapsuleHH;
}

void UCreatureBaseRidableComponent_C::GetRidingCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRidingCapsuleSize");

	Params::CreatureBaseRidableComponent_C_GetRidingCapsuleSize Parms{};

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;
}

void UCreatureBaseRidableComponent_C::GetRidingEmoteCapsuleSize(const class URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float* OutRadius, float* OutHalfHeight) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "GetRidingEmoteCapsuleSize");

	Params::CreatureBaseRidableComponent_C_GetRidingEmoteCapsuleSize Parms{};

	Parms.Rider = Rider;
	Parms.OriginalRadius = OriginalRadius;
	Parms.OriginalHalfHeight = OriginalHalfHeight;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRadius != nullptr)
		*OutRadius = Parms.OutRadius;

	if (OutHalfHeight != nullptr)
		*OutHalfHeight = Parms.OutHalfHeight;
}

void UCreatureBaseRidableComponent_C::IsSwimming(bool* IsSwimming_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "IsSwimming");

	Params::CreatureBaseRidableComponent_C_IsSwimming Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSwimming_0 != nullptr)
		*IsSwimming_0 = Parms.IsSwimming_0;
}

bool UCreatureBaseRidableComponent_C::ShouldCameraFocusOnRidable(const class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ShouldCameraFocusOnRidable");

	Params::CreatureBaseRidableComponent_C_ShouldCameraFocusOnRidable Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UCreatureBaseRidableComponent_C::ShouldSetAsViewTarget(const class URiderComponent* Rider) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreatureBaseRidableComponent_C", "ShouldSetAsViewTarget");

	Params::CreatureBaseRidableComponent_C_ShouldSetAsViewTarget Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
