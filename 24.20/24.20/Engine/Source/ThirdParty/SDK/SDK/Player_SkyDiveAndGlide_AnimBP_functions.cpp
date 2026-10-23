#pragma once

#include "Basic.hpp"

#include "Player_SkyDiveAndGlide_AnimBP_classes.hpp"
#include "Player_SkyDiveAndGlide_AnimBP_parameters.hpp"

namespace SDK
{

void UPlayer_SkyDiveAndGlide_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SkyDiveAndGlide_AnimBP_C", "AnimGraph");

	Params::Player_SkyDiveAndGlide_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

void UPlayer_SkyDiveAndGlide_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SkyDiveAndGlide_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayer_SkyDiveAndGlide_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SkyDiveAndGlide_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Player_SkyDiveAndGlide_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayer_SkyDiveAndGlide_AnimBP_C::ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_SkyDiveAndGlide_AnimBP_C", "ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP");

	Params::Player_SkyDiveAndGlide_AnimBP_C_ExecuteUbergraph_Player_SkyDiveAndGlide_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
