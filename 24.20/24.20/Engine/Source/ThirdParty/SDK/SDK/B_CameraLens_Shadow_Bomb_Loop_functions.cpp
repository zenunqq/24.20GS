#pragma once

#include "Basic.hpp"

#include "B_CameraLens_Shadow_Bomb_Loop_classes.hpp"
#include "B_CameraLens_Shadow_Bomb_Loop_parameters.hpp"

namespace SDK
{

void AB_CameraLens_Shadow_Bomb_Loop_C::ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Shadow_Bomb_Loop_C", "ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop");

	Params::B_CameraLens_Shadow_Bomb_Loop_C_ExecuteUbergraph_B_CameraLens_Shadow_Bomb_Loop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_Shadow_Bomb_Loop_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Shadow_Bomb_Loop_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
