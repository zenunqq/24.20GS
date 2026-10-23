#pragma once

#include "Basic.hpp"

#include "StormCameraModifier_classes.hpp"
#include "StormCameraModifier_parameters.hpp"

namespace SDK
{

void UStormCameraModifier_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCameraModifier_C", "BlueprintModifyPostProcess");

	Params::StormCameraModifier_C_BlueprintModifyPostProcess Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);
}

}
