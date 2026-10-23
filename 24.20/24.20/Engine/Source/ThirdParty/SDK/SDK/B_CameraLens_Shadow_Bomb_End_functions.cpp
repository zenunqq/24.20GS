#pragma once

#include "Basic.hpp"

#include "B_CameraLens_Shadow_Bomb_End_classes.hpp"
#include "B_CameraLens_Shadow_Bomb_End_parameters.hpp"

namespace SDK
{

void AB_CameraLens_Shadow_Bomb_End_C::ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Shadow_Bomb_End_C", "ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End");

	Params::B_CameraLens_Shadow_Bomb_End_C_ExecuteUbergraph_B_CameraLens_Shadow_Bomb_End Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_Shadow_Bomb_End_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Shadow_Bomb_End_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
