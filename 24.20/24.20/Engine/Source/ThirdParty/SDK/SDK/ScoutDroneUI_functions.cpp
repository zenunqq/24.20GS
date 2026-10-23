#pragma once

#include "Basic.hpp"

#include "ScoutDroneUI_classes.hpp"
#include "ScoutDroneUI_parameters.hpp"

namespace SDK
{

void UDronePickUpIndicatorComponent::Init(class AFortScoutDrone* Drone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DronePickUpIndicatorComponent", "Init");

	Params::DronePickUpIndicatorComponent_Init Parms{};

	Parms.Drone = Drone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDronePickUpIndicatorComponent::OnDroneDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DronePickUpIndicatorComponent", "OnDroneDestroyed");

	Params::DronePickUpIndicatorComponent_OnDroneDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UScoutDroneHUD::GetTargetConfirmationTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "GetTargetConfirmationTime");

	Params::ScoutDroneHUD_GetTargetConfirmationTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UScoutDroneHUD::OnDroneDismissAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneDismissAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDroneEnergyChanged(float EnergyPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneEnergyChanged");

	Params::ScoutDroneHUD_OnDroneEnergyChanged Parms{};

	Parms.EnergyPercentage = EnergyPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UScoutDroneHUD::OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneHealthUpdated");

	Params::ScoutDroneHUD_OnDroneHealthUpdated Parms{};

	Parms.HealthPercentage = HealthPercentage;
	Parms.CurrentHealth = CurrentHealth;

	UObject::ProcessEvent(Func, &Parms);
}

void UScoutDroneHUD::OnDroneInteractAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneInteractAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDroneInteractAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneInteractAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDroneMarkAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneMarkAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDroneMarkAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneMarkAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDronePickUpAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDronePickUpAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDronePickUpTargetsAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpTargetsAvailable");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDronePickUpTargetsEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDronePickUpTargetsEmpty");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSignalDataUpdated");

	Params::ScoutDroneHUD_OnDroneSignalDataUpdated Parms{};

	Parms.DistanceFromPlayer = DistanceFromPlayer;
	Parms.SignalPercentage = SignalPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UScoutDroneHUD::OnDroneSpeedBoostAbilityEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSpeedBoostAbilityEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnDroneSpeedBoostAbilityUsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnDroneSpeedBoostAbilityUsed");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnOwningPlayerDamaged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnOwningPlayerDamaged");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneHUD::OnReticleChangeAbilityActivated(const struct FGameplayTag& UpdatedTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnReticleChangeAbilityActivated");

	Params::ScoutDroneHUD_OnReticleChangeAbilityActivated Parms{};

	Parms.UpdatedTag = std::move(UpdatedTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UScoutDroneHUD::OnTargetingStatusChanged(const struct FScoutDroneStatusData& StatusData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "OnTargetingStatusChanged");

	Params::ScoutDroneHUD_OnTargetingStatusChanged Parms{};

	Parms.StatusData = std::move(StatusData);

	UObject::ProcessEvent(Func, &Parms);
}

class AFortScoutDrone* UScoutDroneHUD::GetControlledDrone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneHUD", "GetControlledDrone");

	Params::ScoutDroneHUD_GetControlledDrone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UScoutDroneTetherIndicator::BP_OnEnterSignalLossRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnEnterSignalLossRange");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneTetherIndicator::BP_OnEnterWarningRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnEnterWarningRange");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneTetherIndicator::BP_OnExitWarningRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_OnExitWarningRange");

	UObject::ProcessEvent(Func, nullptr);
}

void UScoutDroneTetherIndicator::BP_WhileInWarningRange(float SignalIntensityPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "BP_WhileInWarningRange");

	Params::ScoutDroneTetherIndicator_BP_WhileInWarningRange Parms{};

	Parms.SignalIntensityPercentage = SignalIntensityPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

class AFortScoutDrone* UScoutDroneTetherIndicator::GetControlledDrone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneTetherIndicator", "GetControlledDrone");

	Params::ScoutDroneTetherIndicator_GetControlledDrone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AScoutDroneUIDirector::BP_OnScoutDroneDeployed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneUIDirector", "BP_OnScoutDroneDeployed");

	UObject::ProcessEvent(Func, nullptr);
}

void AScoutDroneUIDirector::BP_OnScoutDroneDismissed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScoutDroneUIDirector", "BP_OnScoutDroneDismissed");

	UObject::ProcessEvent(Func, nullptr);
}

}
