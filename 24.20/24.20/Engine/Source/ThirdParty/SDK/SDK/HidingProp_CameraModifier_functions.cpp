#pragma once

#include "Basic.hpp"

#include "HidingProp_CameraModifier_classes.hpp"
#include "HidingProp_CameraModifier_parameters.hpp"

namespace SDK
{

void UHidingProp_CameraModifier_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HidingProp_CameraModifier_C", "BlueprintModifyCamera");

	Params::HidingProp_CameraModifier_C_BlueprintModifyCamera Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = std::move(ViewLocation);
	Parms.ViewRotation = std::move(ViewRotation);
	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;
}

}
