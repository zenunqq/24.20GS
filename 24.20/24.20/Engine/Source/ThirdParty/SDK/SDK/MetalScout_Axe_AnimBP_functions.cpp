#pragma once

#include "Basic.hpp"

#include "MetalScout_Axe_AnimBP_classes.hpp"
#include "MetalScout_Axe_AnimBP_parameters.hpp"

namespace SDK
{

void UMetalScout_Axe_AnimBP_C::ExecuteUbergraph_MetalScout_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalScout_Axe_AnimBP_C", "ExecuteUbergraph_MetalScout_Axe_AnimBP");

	Params::MetalScout_Axe_AnimBP_C_ExecuteUbergraph_MetalScout_Axe_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMetalScout_Axe_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalScout_Axe_AnimBP_C", "AnimGraph");

	Params::MetalScout_Axe_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
