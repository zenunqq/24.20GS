#pragma once

#include "Basic.hpp"

#include "Grandma_AnimBP_classes.hpp"
#include "Grandma_AnimBP_parameters.hpp"

namespace SDK
{

void UGrandma_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "AnimGraph");

	Params::Grandma_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UGrandma_AnimBP_C::AnimNotify_FallExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "AnimNotify_FallExit");

	UObject::ProcessEvent(Func, nullptr);
}

void UGrandma_AnimBP_C::AnimNotify_LandAddExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "AnimNotify_LandAddExit");

	UObject::ProcessEvent(Func, nullptr);
}

void UGrandma_AnimBP_C::AnimNotify_LandEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "AnimNotify_LandEnter");

	UObject::ProcessEvent(Func, nullptr);
}

void UGrandma_AnimBP_C::ExecuteUbergraph_Grandma_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "ExecuteUbergraph_Grandma_AnimBP");

	Params::Grandma_AnimBP_C_ExecuteUbergraph_Grandma_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGrandma_AnimBP_C::Fauna_Idle(const struct FPoseLink& InPose_Idle, struct FPoseLink* Fauna_Idle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "Fauna Idle");

	Params::Grandma_AnimBP_C_Fauna_Idle Parms{};

	Parms.InPose_Idle = std::move(InPose_Idle);

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Idle_0 != nullptr)
		*Fauna_Idle_0 = std::move(Parms.Fauna_Idle_0);
}

void UGrandma_AnimBP_C::Fauna_IdleTurn(const struct FPoseLink& InPose_IdleTurn, struct FPoseLink* Fauna_IdleTurn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "Fauna IdleTurn");

	Params::Grandma_AnimBP_C_Fauna_IdleTurn Parms{};

	Parms.InPose_IdleTurn = std::move(InPose_IdleTurn);

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_IdleTurn_0 != nullptr)
		*Fauna_IdleTurn_0 = std::move(Parms.Fauna_IdleTurn_0);
}

void UGrandma_AnimBP_C::Fauna_Jump(struct FPoseLink* Fauna_Jump_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grandma_AnimBP_C", "Fauna Jump");

	Params::Grandma_AnimBP_C_Fauna_Jump Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Fauna_Jump_0 != nullptr)
		*Fauna_Jump_0 = std::move(Parms.Fauna_Jump_0);
}

}
