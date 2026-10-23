#pragma once

#include "Basic.hpp"

#include "CameraModifier_Grinding_classes.hpp"
#include "CameraModifier_Grinding_parameters.hpp"

namespace SDK
{

void UCameraModifier_Grinding_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Grinding_C", "BlueprintModifyCamera");

	Params::CameraModifier_Grinding_C_BlueprintModifyCamera Parms{};

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

void UCameraModifier_Grinding_C::ExecuteUbergraph_CameraModifier_Grinding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Grinding_C", "ExecuteUbergraph_CameraModifier_Grinding");

	Params::CameraModifier_Grinding_C_ExecuteUbergraph_CameraModifier_Grinding Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCameraModifier_Grinding_C::SetStartingLocation(const struct FVector& StartingLocation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Grinding_C", "SetStartingLocation");

	Params::CameraModifier_Grinding_C_SetStartingLocation Parms{};

	Parms.StartingLocation_0 = std::move(StartingLocation_0);

	UObject::ProcessEvent(Func, &Parms);
}

void UCameraModifier_Grinding_C::TurnOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Grinding_C", "TurnOff");

	UObject::ProcessEvent(Func, nullptr);
}

void UCameraModifier_Grinding_C::TurnOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CameraModifier_Grinding_C", "TurnOn");

	UObject::ProcessEvent(Func, nullptr);
}

}
