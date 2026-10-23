#pragma once

#include "Basic.hpp"

#include "SrirachaRanchValet_classes.hpp"
#include "SrirachaRanchValet_parameters.hpp"

namespace SDK
{

void UStreamingRadioPlayerComponent_Valet::VehicleExploded(const class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StreamingRadioPlayerComponent_Valet", "VehicleExploded");

	Params::StreamingRadioPlayerComponent_Valet_VehicleExploded Parms{};

	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
