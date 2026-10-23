#pragma once

#include "Basic.hpp"

#include "M_MED_Lima_Bean_Pack_AnimBP_classes.hpp"
#include "M_MED_Lima_Bean_Pack_AnimBP_parameters.hpp"

namespace SDK
{

void UM_MED_Lima_Bean_Pack_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Lima_Bean_Pack_AnimBP_C", "AnimGraph");

	Params::M_MED_Lima_Bean_Pack_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UM_MED_Lima_Bean_Pack_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Lima_Bean_Pack_AnimBP_C", "BlueprintUpdateAnimation");

	Params::M_MED_Lima_Bean_Pack_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UM_MED_Lima_Bean_Pack_AnimBP_C::ExecuteUbergraph_M_MED_Lima_Bean_Pack_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("M_MED_Lima_Bean_Pack_AnimBP_C", "ExecuteUbergraph_M_MED_Lima_Bean_Pack_AnimBP");

	Params::M_MED_Lima_Bean_Pack_AnimBP_C_ExecuteUbergraph_M_MED_Lima_Bean_Pack_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
