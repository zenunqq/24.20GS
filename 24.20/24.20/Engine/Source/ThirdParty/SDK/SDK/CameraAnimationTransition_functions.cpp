#pragma once

#include "Basic.hpp"

#include "CameraAnimationTransition_classes.hpp"
#include "CameraAnimationTransition_parameters.hpp"

namespace SDK
{

void ACameraAnimationTransition_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationTransition_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ACameraAnimationTransition_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationTransition_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ACameraAnimationTransition_C::MoveCameraUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationTransition_C", "MoveCameraUp");

	UObject::ProcessEvent(Func, nullptr);
}

void ACameraAnimationTransition_C::MoveCameraDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationTransition_C", "MoveCameraDown");

	UObject::ProcessEvent(Func, nullptr);
}

void ACameraAnimationTransition_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationTransition_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ACameraAnimationTransition_C::ExecuteUbergraph_CameraAnimationTransition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraAnimationTransition_C", "ExecuteUbergraph_CameraAnimationTransition");

	Params::CameraAnimationTransition_C_ExecuteUbergraph_CameraAnimationTransition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
