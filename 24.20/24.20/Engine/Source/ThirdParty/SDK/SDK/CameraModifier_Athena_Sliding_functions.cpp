#pragma once

#include "Basic.hpp"

#include "CameraModifier_Athena_Sliding_classes.hpp"
#include "CameraModifier_Athena_Sliding_parameters.hpp"

namespace SDK
{

void UCameraModifier_Athena_Sliding_C::BlendOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Athena_Sliding_C", "BlendOut");

	UObject::ProcessEvent(Func, nullptr);
}

void UCameraModifier_Athena_Sliding_C::ExecuteUbergraph_CameraModifier_Athena_Sliding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Athena_Sliding_C", "ExecuteUbergraph_CameraModifier_Athena_Sliding");

	Params::CameraModifier_Athena_Sliding_C_ExecuteUbergraph_CameraModifier_Athena_Sliding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
