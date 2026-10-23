#pragma once

#include "Basic.hpp"

#include "PetAnimLayerInterface_classes.hpp"
#include "PetAnimLayerInterface_parameters.hpp"

namespace SDK
{

void IPetAnimLayerInterface_C::PetFullOverrideLayer(const struct FPoseLink& InPose, struct FPoseLink* PetFullOverrideLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PetAnimLayerInterface_C", "PetFullOverrideLayer");

	Params::PetAnimLayerInterface_C_PetFullOverrideLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (PetFullOverrideLayer_0 != nullptr)
		*PetFullOverrideLayer_0 = std::move(Parms.PetFullOverrideLayer_0);
}

void IPetAnimLayerInterface_C::PetSkeletalControlLayer(const struct FPoseLink& Pose, double LookAtOverrideInput, const struct FVector& LookAtTargetLocationInput, double LegIKAlphaOverride, double HandIKAlphaOverride, struct FPoseLink* PetSkeletalControlLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PetAnimLayerInterface_C", "PetSkeletalControlLayer");

	Params::PetAnimLayerInterface_C_PetSkeletalControlLayer Parms{};

	Parms.Pose = std::move(Pose);
	Parms.LookAtOverrideInput = LookAtOverrideInput;
	Parms.LookAtTargetLocationInput = std::move(LookAtTargetLocationInput);
	Parms.LegIKAlphaOverride = LegIKAlphaOverride;
	Parms.HandIKAlphaOverride = HandIKAlphaOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (PetSkeletalControlLayer_0 != nullptr)
		*PetSkeletalControlLayer_0 = std::move(Parms.PetSkeletalControlLayer_0);
}

}
