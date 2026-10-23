#pragma once

#include "Basic.hpp"

#include "B_CameraLens_SwimBoost_classes.hpp"
#include "B_CameraLens_SwimBoost_parameters.hpp"

namespace SDK
{

void AB_CameraLens_SwimBoost_C::ExecuteUbergraph_B_CameraLens_SwimBoost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_SwimBoost_C", "ExecuteUbergraph_B_CameraLens_SwimBoost");

	Params::B_CameraLens_SwimBoost_C_ExecuteUbergraph_B_CameraLens_SwimBoost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_SwimBoost_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_SwimBoost_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
