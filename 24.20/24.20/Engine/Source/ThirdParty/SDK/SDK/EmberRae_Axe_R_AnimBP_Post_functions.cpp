#pragma once

#include "Basic.hpp"

#include "EmberRae_Axe_R_AnimBP_Post_classes.hpp"
#include "EmberRae_Axe_R_AnimBP_Post_parameters.hpp"

namespace SDK
{

void UEmberRae_Axe_R_AnimBP_Post_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UEmberRae_Axe_R_AnimBP_Post_C::ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post");

	Params::EmberRae_Axe_R_AnimBP_Post_C_ExecuteUbergraph_EmberRae_Axe_R_AnimBP_Post Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEmberRae_Axe_R_AnimBP_Post_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "AnimGraph");

	Params::EmberRae_Axe_R_AnimBP_Post_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UEmberRae_Axe_R_AnimBP_Post_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmberRae_Axe_R_AnimBP_Post_C", "BlueprintUpdateAnimation");

	Params::EmberRae_Axe_R_AnimBP_Post_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

}
