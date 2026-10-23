#pragma once

#include "Basic.hpp"

#include "TankRuntime_classes.hpp"
#include "TankRuntime_parameters.hpp"

namespace SDK
{

void UFortTankVehicleAnimInstance::UpdateMIDEngineProperties(const float DeltaSeconds, const float EngineHealthRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTankVehicleAnimInstance", "UpdateMIDEngineProperties");

	Params::FortTankVehicleAnimInstance_UpdateMIDEngineProperties Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.EngineHealthRatio = EngineHealthRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortTankVehicleAudioController::PlayAccelOneShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTankVehicleAudioController", "PlayAccelOneShot");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortTankVehicleAudioController::PlayDecelOneShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTankVehicleAudioController", "PlayDecelOneShot");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortTankVehicleAudioController::PlayTurningOneShot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTankVehicleAudioController", "PlayTurningOneShot");

	UObject::ProcessEvent(Func, nullptr);
}

class AFortTankVehicle* AFortTankVehicleAudioController::GetTankVehicleActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTankVehicleAudioController", "GetTankVehicleActor");

	Params::FortTankVehicleAudioController_GetTankVehicleActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
