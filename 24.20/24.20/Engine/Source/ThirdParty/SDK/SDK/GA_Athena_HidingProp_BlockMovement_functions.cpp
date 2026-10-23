#pragma once

#include "Basic.hpp"

#include "GA_Athena_HidingProp_BlockMovement_classes.hpp"
#include "GA_Athena_HidingProp_BlockMovement_parameters.hpp"

namespace SDK
{

void UGA_Athena_HidingProp_BlockMovement_C::ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_BlockMovement_C", "ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement");

	Params::GA_Athena_HidingProp_BlockMovement_C_ExecuteUbergraph_GA_Athena_HidingProp_BlockMovement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_BlockMovement_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_BlockMovement_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
