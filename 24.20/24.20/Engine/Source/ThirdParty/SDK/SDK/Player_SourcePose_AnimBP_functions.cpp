#pragma once

#include "Basic.hpp"

#include "Player_SourcePose_AnimBP_classes.hpp"
#include "Player_SourcePose_AnimBP_parameters.hpp"

namespace SDK
{

void UPlayer_SourcePose_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SourcePose_AnimBP_C", "AnimGraph");

	Params::Player_SourcePose_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UPlayer_SourcePose_AnimBP_C::ExecuteUbergraph_Player_SourcePose_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SourcePose_AnimBP_C", "ExecuteUbergraph_Player_SourcePose_AnimBP");

	Params::Player_SourcePose_AnimBP_C_ExecuteUbergraph_Player_SourcePose_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayer_SourcePose_AnimBP_C::ResetBlendListNode(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SourcePose_AnimBP_C", "ResetBlendListNode");

	Params::Player_SourcePose_AnimBP_C_ResetBlendListNode Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}

}
