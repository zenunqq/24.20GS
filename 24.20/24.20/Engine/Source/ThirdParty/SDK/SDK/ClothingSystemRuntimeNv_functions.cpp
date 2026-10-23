#pragma once

#include "Basic.hpp"

#include "ClothingSystemRuntimeNv_classes.hpp"
#include "ClothingSystemRuntimeNv_parameters.hpp"

namespace SDK
{

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::ClothingSimulationInteractorNv_SetAnimDriveDamperStiffness Parms{};

	Parms.InStiffness = InStiffness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
