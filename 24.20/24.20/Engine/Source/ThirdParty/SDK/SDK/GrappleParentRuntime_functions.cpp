#pragma once

#include "Basic.hpp"

#include "GrappleParentRuntime_classes.hpp"
#include "GrappleParentRuntime_parameters.hpp"

namespace SDK
{

void UFortCameraModifier_Swinging::RemoveSelfFromCameraManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCameraModifier_Swinging", "RemoveSelfFromCameraManager");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCameraModifier_Swinging::CalculateDynamicMultipliers(float* OutFOVBoundsMultiplier, float* OutBoostOffsetMultiplier) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCameraModifier_Swinging", "CalculateDynamicMultipliers");

	Params::FortCameraModifier_Swinging_CalculateDynamicMultipliers Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFOVBoundsMultiplier != nullptr)
		*OutFOVBoundsMultiplier = Parms.OutFOVBoundsMultiplier;

	if (OutBoostOffsetMultiplier != nullptr)
		*OutBoostOffsetMultiplier = Parms.OutBoostOffsetMultiplier;
}

struct FVector UFortSwingingLayerAnimInstance::GetAttachVectorInPlayerSpace(const struct FVector& InPlayerToAttachPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSwingingLayerAnimInstance", "GetAttachVectorInPlayerSpace");

	Params::FortSwingingLayerAnimInstance_GetAttachVectorInPlayerSpace Parms{};

	Parms.InPlayerToAttachPoint = std::move(InPlayerToAttachPoint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSwingingLayerAnimInstance::GetPlayerAnglesFromAttachPoint(float* Pitch, float* Roll, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSwingingLayerAnimInstance", "GetPlayerAnglesFromAttachPoint");

	Params::FortSwingingLayerAnimInstance_GetPlayerAnglesFromAttachPoint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Roll != nullptr)
		*Roll = Parms.Roll;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;
}

}
