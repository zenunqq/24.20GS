#pragma once

#include "Basic.hpp"

#include "SuperstormRuntime_classes.hpp"
#include "SuperstormRuntime_parameters.hpp"

namespace SDK
{

float UTempestLightningComponent::GetCloudHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestLightningComponent", "GetCloudHeight");

	Params::TempestLightningComponent_GetCloudHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTempestLightningComponent::GetLightningRadius() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestLightningComponent", "GetLightningRadius");

	Params::TempestLightningComponent_GetLightningRadius Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTempestTornadoForcesComponent::OnVehicleInTornadoPlayerExit(const class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestTornadoForcesComponent", "OnVehicleInTornadoPlayerExit");

	Params::TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UTempestTornadoForcesComponent::IsActorInTornado(class AActor* Actor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TempestTornadoForcesComponent", "IsActorInTornado");

	Params::TempestTornadoForcesComponent_IsActorInTornado Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
