#pragma once

#include "Basic.hpp"

#include "Mechanical_Engineer_Female_AnimBP_classes.hpp"
#include "Mechanical_Engineer_Female_AnimBP_parameters.hpp"

namespace SDK
{

void UMechanical_Engineer_Female_AnimBP_C::ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP");

	Params::Mechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMechanical_Engineer_Female_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Mechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UMechanical_Engineer_Female_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UMechanical_Engineer_Female_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Mechanical_Engineer_Female_AnimBP_C", "AnimGraph");

	Params::Mechanical_Engineer_Female_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
