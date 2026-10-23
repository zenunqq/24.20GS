#pragma once

#include "Basic.hpp"

#include "B_CameraLens_Drown_Damage_classes.hpp"
#include "B_CameraLens_Drown_Damage_parameters.hpp"

namespace SDK
{

void AB_CameraLens_Drown_Damage_C::ExecuteUbergraph_B_CameraLens_Drown_Damage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Drown_Damage_C", "ExecuteUbergraph_B_CameraLens_Drown_Damage");

	Params::B_CameraLens_Drown_Damage_C_ExecuteUbergraph_B_CameraLens_Drown_Damage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_Drown_Damage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Drown_Damage_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
