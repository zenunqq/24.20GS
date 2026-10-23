#pragma once

#include "Basic.hpp"

#include "HighTower_Tapas_Axe_AnimBP_classes.hpp"
#include "HighTower_Tapas_Axe_AnimBP_parameters.hpp"

namespace SDK
{

void UHighTower_Tapas_Axe_AnimBP_C::ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HighTower_Tapas_Axe_AnimBP_C", "ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP");

	Params::HighTower_Tapas_Axe_AnimBP_C_ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UHighTower_Tapas_Axe_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HighTower_Tapas_Axe_AnimBP_C", "AnimGraph");

	Params::HighTower_Tapas_Axe_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
