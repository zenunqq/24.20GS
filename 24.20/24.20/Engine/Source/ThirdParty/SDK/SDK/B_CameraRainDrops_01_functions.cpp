#pragma once

#include "Basic.hpp"

#include "B_CameraRainDrops_01_classes.hpp"
#include "B_CameraRainDrops_01_parameters.hpp"

namespace SDK
{

void AB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ExecuteUbergraph_B_CameraRainDrops_01");

	Params::B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraRainDrops_01_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_CameraRainDrops_01_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
