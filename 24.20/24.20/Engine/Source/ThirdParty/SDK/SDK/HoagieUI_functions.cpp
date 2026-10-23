#pragma once

#include "Basic.hpp"

#include "HoagieUI_classes.hpp"
#include "HoagieUI_parameters.hpp"

namespace SDK
{

void UFortHoagieVehicleReticle::OnSetupComplete(bool bVehicleUsesFuelSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHoagieVehicleReticle", "OnSetupComplete");

	Params::FortHoagieVehicleReticle_OnSetupComplete Parms{};

	Parms.bVehicleUsesFuelSystem = bVehicleUsesFuelSystem;

	UObject::ProcessEvent(Func, &Parms);
}

}
