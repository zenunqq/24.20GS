#pragma once

#include "Basic.hpp"

#include "BoarRidingPlayerLayerAnimBP_classes.hpp"
#include "BoarRidingPlayerLayerAnimBP_parameters.hpp"

namespace SDK
{

void UBoarRidingPlayerLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "AnimGraph");

	Params::BoarRidingPlayerLayerAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UBoarRidingPlayerLayerAnimBP_C::BlueprintCollectRidableAnimBPData(const class UAnimInstance* RidableAnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "BlueprintCollectRidableAnimBPData");

	Params::BoarRidingPlayerLayerAnimBP_C_BlueprintCollectRidableAnimBPData Parms{};

	Parms.RidableAnimInstance = RidableAnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidingPlayerLayerAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP_AnimGraphNode_BlendListByBool_3AC2A6BB409F97D93A87FE8016464FEE");

	UObject::ProcessEvent(Func, nullptr);
}

void UBoarRidingPlayerLayerAnimBP_C::ExecuteUbergraph_BoarRidingPlayerLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "ExecuteUbergraph_BoarRidingPlayerLayerAnimBP");

	Params::BoarRidingPlayerLayerAnimBP_C_ExecuteUbergraph_BoarRidingPlayerLayerAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidingPlayerLayerAnimBP_C::GetMainAnimBPData_Boar(class UObject* AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "GetMainAnimBPData_Boar");

	Params::BoarRidingPlayerLayerAnimBP_C_GetMainAnimBPData_Boar Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

void UBoarRidingPlayerLayerAnimBP_C::VehicleFinalPoseOverride(const struct FPoseLink& InFinalPose, struct FPoseLink* VehicleFinalPoseOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleFinalPoseOverride");

	Params::BoarRidingPlayerLayerAnimBP_C_VehicleFinalPoseOverride Parms{};

	Parms.InFinalPose = std::move(InFinalPose);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFinalPoseOverride_0 != nullptr)
		*VehicleFinalPoseOverride_0 = std::move(Parms.VehicleFinalPoseOverride_0);
}

void UBoarRidingPlayerLayerAnimBP_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* VehicleFullBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleFullBodyOverride");

	Params::BoarRidingPlayerLayerAnimBP_C_VehicleFullBodyOverride Parms{};

	Parms.InPoseFullBody = std::move(InPoseFullBody);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride_0 != nullptr)
		*VehicleFullBodyOverride_0 = std::move(Parms.VehicleFullBodyOverride_0);
}

void UBoarRidingPlayerLayerAnimBP_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleLowerBodyOverride");

	Params::BoarRidingPlayerLayerAnimBP_C_VehicleLowerBodyOverride Parms{};

	Parms.InPoseLowerBodyDefault = std::move(InPoseLowerBodyDefault);
	Parms.InPoseUpperBody = std::move(InPoseUpperBody);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride_0 != nullptr)
		*VehicleLowerBodyOverride_0 = std::move(Parms.VehicleLowerBodyOverride_0);
}

void UBoarRidingPlayerLayerAnimBP_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, const struct FPoseLink& InPoseUpperAndLowerBodyRemoveRoot, struct FPoseLink* VehicleSplitBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BoarRidingPlayerLayerAnimBP_C", "VehicleSplitBodyOverride");

	Params::BoarRidingPlayerLayerAnimBP_C_VehicleSplitBodyOverride Parms{};

	Parms.InPoseSplitBody = std::move(InPoseSplitBody);
	Parms.InPoseUpperAndLowerBody = std::move(InPoseUpperAndLowerBody);
	Parms.TurnInPlace = std::move(TurnInPlace);
	Parms.InPoseUpperAndLowerBodyRemoveRoot = std::move(InPoseUpperAndLowerBodyRemoveRoot);

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride_0 != nullptr)
		*VehicleSplitBodyOverride_0 = std::move(Parms.VehicleSplitBodyOverride_0);
}

}
