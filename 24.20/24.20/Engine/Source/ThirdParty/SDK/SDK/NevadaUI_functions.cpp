#pragma once

#include "Basic.hpp"

#include "NevadaUI_classes.hpp"
#include "NevadaUI_parameters.hpp"

namespace SDK
{

void UFortNevadaVehicleReticle::OnBatteryChanged(float BatteryLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnBatteryChanged");

	Params::FortNevadaVehicleReticle_OnBatteryChanged Parms{};

	Parms.BatteryLevel = BatteryLevel;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNevadaVehicleReticle::OnEnergyCannonEnabledChanged(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnEnergyCannonEnabledChanged");

	Params::FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNevadaVehicleReticle::OnEnergyCanonFired(const float Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnEnergyCanonFired");

	Params::FortNevadaVehicleReticle_OnEnergyCanonFired Parms{};

	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNevadaVehicleReticle::OnTractorBeamActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortNevadaVehicleReticle::OnTractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamAttached");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortNevadaVehicleReticle::OnTractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamChargeStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortNevadaVehicleReticle::OnTractorBeamDeactivated(const float Cooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamDeactivated");

	Params::FortNevadaVehicleReticle_OnTractorBeamDeactivated Parms{};

	Parms.Cooldown = Cooldown;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNevadaVehicleReticle::OnTractorBeamDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamDetached");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortNevadaVehicleReticle::OnTractorBeamEnabledChanged(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnTractorBeamEnabledChanged");

	Params::FortNevadaVehicleReticle_OnTractorBeamEnabledChanged Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNevadaVehicleReticle::OnVehicleStateChanged(const ENevadaFlightStates VehicleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicleReticle", "OnVehicleStateChanged");

	Params::FortNevadaVehicleReticle_OnVehicleStateChanged Parms{};

	Parms.VehicleState = VehicleState;

	UObject::ProcessEvent(Func, &Parms);
}

void UNevadaTargetIndicator::OnTractorBeamActivated(const bool bActivated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NevadaTargetIndicator", "OnTractorBeamActivated");

	Params::NevadaTargetIndicator_OnTractorBeamActivated Parms{};

	Parms.bActivated = bActivated;

	UObject::ProcessEvent(Func, &Parms);
}

void UNevadaTargetIndicator::OnTractorBeamAttached(const bool bAttached)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NevadaTargetIndicator", "OnTractorBeamAttached");

	Params::NevadaTargetIndicator_OnTractorBeamAttached Parms{};

	Parms.bAttached = bAttached;

	UObject::ProcessEvent(Func, &Parms);
}

}
