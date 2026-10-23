#pragma once

#include "Basic.hpp"

#include "B_CameraLens_Geyser_classes.hpp"
#include "B_CameraLens_Geyser_parameters.hpp"

namespace SDK
{

void AB_CameraLens_Geyser_C::ExecuteUbergraph_B_CameraLens_Geyser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ExecuteUbergraph_B_CameraLens_Geyser");

	Params::B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_CameraLens_Geyser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_CameraLens_Geyser_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_CameraLens_Geyser_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_CameraLens_Geyser_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Geyser_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
