#pragma once

#include "Basic.hpp"

#include "VehicleAnimLayerInterface_classes.hpp"
#include "VehicleAnimLayerInterface_parameters.hpp"

namespace SDK
{

void IVehicleAnimLayerInterface_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleFinalPoseOverride");

	Params::VehicleAnimLayerInterface_C_VehicleFinalPoseOverride Parms{};

	Parms.InFinalPose = std::move(InFinalPose);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride_0 != nullptr)
		*VehicleFinalPoseOverride_0 = std::move(Parms.VehicleFinalPoseOverride_0);
}

void IVehicleAnimLayerInterface_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleFullBodyOverride");

	Params::VehicleAnimLayerInterface_C_VehicleFullBodyOverride Parms{};

	Parms.InPoseFullBody = std::move(InPoseFullBody);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride_0 != nullptr)
		*VehicleFullBodyOverride_0 = std::move(Parms.VehicleFullBodyOverride_0);
}

void IVehicleAnimLayerInterface_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleLowerBodyOverride");

	Params::VehicleAnimLayerInterface_C_VehicleLowerBodyOverride Parms{};

	Parms.InPoseLowerBodyDefault = std::move(InPoseLowerBodyDefault);
	Parms.InPoseUpperBody = std::move(InPoseUpperBody);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride_0 != nullptr)
		*VehicleLowerBodyOverride_0 = std::move(Parms.VehicleLowerBodyOverride_0);
}

void IVehicleAnimLayerInterface_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleSplitBodyOverride");

	Params::VehicleAnimLayerInterface_C_VehicleSplitBodyOverride Parms{};

	Parms.InPoseSplitBody = std::move(InPoseSplitBody);
	Parms.InPoseUpperAndLowerBody = std::move(InPoseUpperAndLowerBody);
	Parms.TurnInPlace = std::move(TurnInPlace);
	Parms.InPoseUpperAndLowerBodyRemoveRoot = std::move(InPoseUpperAndLowerBodyRemoveRoot);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride_0 != nullptr)
		*VehicleSplitBodyOverride_0 = std::move(Parms.VehicleSplitBodyOverride_0);
}

}
