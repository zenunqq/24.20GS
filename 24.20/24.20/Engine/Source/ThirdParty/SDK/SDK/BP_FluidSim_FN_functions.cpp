#pragma once

#include "Basic.hpp"

#include "BP_FluidSim_FN_classes.hpp"
#include "BP_FluidSim_FN_parameters.hpp"

namespace SDK
{

void ABP_FluidSim_FN_C::ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "ExecuteUbergraph_BP_FluidSim_FN");

	Params::BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_FluidSim_FN_C::GetFortnitePawnForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "GetFortnitePawnForces");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_FluidSim_FN_C::GetLocalPawn(class APawn** Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "GetLocalPawn");

	Params::BP_FluidSim_FN_C_GetLocalPawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pawn != nullptr)
		*Pawn = Parms.Pawn;
}

void ABP_FluidSim_FN_C::GetPlayerPawnForces()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidSim_FN_C", "GetPlayerPawnForces");

	UObject::ProcessEvent(Func, nullptr);
}

}
