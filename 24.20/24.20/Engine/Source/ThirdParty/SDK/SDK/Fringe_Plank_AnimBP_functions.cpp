#pragma once

#include "Basic.hpp"

#include "Fringe_Plank_AnimBP_classes.hpp"
#include "Fringe_Plank_AnimBP_parameters.hpp"

namespace SDK
{

void UFringe_Plank_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "AnimGraph");

	Params::Fringe_Plank_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UFringe_Plank_AnimBP_C::ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "ExecuteUbergraph_Fringe_Plank_AnimBP");

	Params::Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
