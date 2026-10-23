#pragma once

#include "Basic.hpp"

#include "B_CameraLens_Splash_Water_Droplets_classes.hpp"
#include "B_CameraLens_Splash_Water_Droplets_parameters.hpp"

namespace SDK
{

void AB_CameraLens_Splash_Water_Droplets_C::ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Splash_Water_Droplets_C", "ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets");

	Params::B_CameraLens_Splash_Water_Droplets_C_ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_Splash_Water_Droplets_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Splash_Water_Droplets_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
