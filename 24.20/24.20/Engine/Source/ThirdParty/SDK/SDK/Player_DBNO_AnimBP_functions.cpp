#pragma once

#include "Basic.hpp"

#include "Player_DBNO_AnimBP_classes.hpp"
#include "Player_DBNO_AnimBP_parameters.hpp"

namespace SDK
{

void UPlayer_DBNO_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNO_AnimBP_C", "AnimGraph");

	Params::Player_DBNO_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UPlayer_DBNO_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNO_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Player_DBNO_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayer_DBNO_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_5F4823B441208B2FBDD3F9A03D4F08DD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNO_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_5F4823B441208B2FBDD3F9A03D4F08DD");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayer_DBNO_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_F28F19494706BFB6D2F74181D211D9E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNO_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_F28F19494706BFB6D2F74181D211D9E5");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayer_DBNO_AnimBP_C::ExecuteUbergraph_Player_DBNO_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_DBNO_AnimBP_C", "ExecuteUbergraph_Player_DBNO_AnimBP");

	Params::Player_DBNO_AnimBP_C_ExecuteUbergraph_Player_DBNO_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
