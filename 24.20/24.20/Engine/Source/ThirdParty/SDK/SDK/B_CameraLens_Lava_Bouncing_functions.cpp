#pragma once

#include "Basic.hpp"

#include "B_CameraLens_Lava_Bouncing_classes.hpp"
#include "B_CameraLens_Lava_Bouncing_parameters.hpp"

namespace SDK
{

void AB_CameraLens_Lava_Bouncing_C::ExecuteUbergraph_B_CameraLens_Lava_Bouncing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Lava_Bouncing_C", "ExecuteUbergraph_B_CameraLens_Lava_Bouncing");

	Params::B_CameraLens_Lava_Bouncing_C_ExecuteUbergraph_B_CameraLens_Lava_Bouncing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_Lava_Bouncing_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Lava_Bouncing_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
