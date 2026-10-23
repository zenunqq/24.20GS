#pragma once

#include "Basic.hpp"

#include "F_MED_Blue_Jay_Summer_AnimBP_classes.hpp"
#include "F_MED_Blue_Jay_Summer_AnimBP_parameters.hpp"

namespace SDK
{

void UF_MED_Blue_Jay_Summer_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_MED_Blue_Jay_Summer_AnimBP_C", "AnimGraph");

	Params::F_MED_Blue_Jay_Summer_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UF_MED_Blue_Jay_Summer_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_MED_Blue_Jay_Summer_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UF_MED_Blue_Jay_Summer_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_MED_Blue_Jay_Summer_AnimBP_C", "BlueprintUpdateAnimation");

	Params::F_MED_Blue_Jay_Summer_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UF_MED_Blue_Jay_Summer_AnimBP_C::ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_MED_Blue_Jay_Summer_AnimBP_C", "ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP");

	Params::F_MED_Blue_Jay_Summer_AnimBP_C_ExecuteUbergraph_F_MED_Blue_Jay_Summer_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
