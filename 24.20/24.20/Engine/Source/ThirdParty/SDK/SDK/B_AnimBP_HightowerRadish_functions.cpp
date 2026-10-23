#pragma once

#include "Basic.hpp"

#include "B_AnimBP_HightowerRadish_classes.hpp"
#include "B_AnimBP_HightowerRadish_parameters.hpp"

namespace SDK
{

void UB_AnimBP_HightowerRadish_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "AnimGraph");

	Params::B_AnimBP_HightowerRadish_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UB_AnimBP_HightowerRadish_C::AnimNotify_BwdToFwd_Entered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "AnimNotify_BwdToFwd_Entered");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::AnimNotify_FwdToBwd_Entered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "AnimNotify_FwdToBwd_Entered");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::AnimNotify_MoveLoopRandomEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "AnimNotify_MoveLoopRandomEntered");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::AnimNotify_RandomIdlePick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "AnimNotify_RandomIdlePick");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::AnimNotify_TriggerRandomizer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "AnimNotify_TriggerRandomizer");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "BlueprintUpdateAnimation");

	Params::B_AnimBP_HightowerRadish_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_AnimBP_HightowerRadish_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_AnimBP_HightowerRadish_AnimGraphNode_TransitionResult_7063B86B4BA21930F893DBA578CF6DAD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_AnimBP_HightowerRadish_AnimGraphNode_TransitionResult_7063B86B4BA21930F893DBA578CF6DAD");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::ExecuteUbergraph_B_AnimBP_HightowerRadish(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "ExecuteUbergraph_B_AnimBP_HightowerRadish");

	Params::B_AnimBP_HightowerRadish_C_ExecuteUbergraph_B_AnimBP_HightowerRadish Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_AnimBP_HightowerRadish_C::HighTowerRadish_Lobby_SkyDive_Diving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "HighTowerRadish_Lobby SkyDive Diving");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::HighTowerRadish_Lobby_SkyDive_Gliding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "HighTowerRadish_Lobby SkyDive Gliding");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::OnEnteredVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "OnEnteredVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AnimBP_HightowerRadish_C::OnExitedVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AnimBP_HightowerRadish_C", "OnExitedVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

}
