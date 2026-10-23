#pragma once

#include "Basic.hpp"

#include "Gameplay_FaceSystem_StateMachine_AnimBP_classes.hpp"
#include "Gameplay_FaceSystem_StateMachine_AnimBP_parameters.hpp"

namespace SDK
{

void UGameplay_FaceSystem_StateMachine_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "AnimGraph");

	Params::Gameplay_FaceSystem_StateMachine_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UGameplay_FaceSystem_StateMachine_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Gameplay_FaceSystem_StateMachine_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplay_FaceSystem_StateMachine_AnimBP_C::ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Gameplay_FaceSystem_StateMachine_AnimBP_C", "ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP");

	Params::Gameplay_FaceSystem_StateMachine_AnimBP_C_ExecuteUbergraph_Gameplay_FaceSystem_StateMachine_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
