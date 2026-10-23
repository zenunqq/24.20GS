#pragma once

#include "Basic.hpp"

#include "Player_Sprint_AnimBP_classes.hpp"
#include "Player_Sprint_AnimBP_parameters.hpp"

namespace SDK
{

void UPlayer_Sprint_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Sprint_AnimBP_C", "AnimGraph");

	Params::Player_Sprint_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UPlayer_Sprint_AnimBP_C::ExecuteUbergraph_Player_Sprint_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Sprint_AnimBP_C", "ExecuteUbergraph_Player_Sprint_AnimBP");

	Params::Player_Sprint_AnimBP_C_ExecuteUbergraph_Player_Sprint_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
