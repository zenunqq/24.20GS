#pragma once

#include "Basic.hpp"

#include "B_Athena_PartModifier_Headband_Collection_classes.hpp"
#include "B_Athena_PartModifier_Headband_Collection_parameters.hpp"

namespace SDK
{

void AB_Athena_PartModifier_Headband_Collection_C::ExecuteUbergraph_B_Athena_PartModifier_Headband_Collection(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Headband_Collection_C", "ExecuteUbergraph_B_Athena_PartModifier_Headband_Collection");

	Params::B_Athena_PartModifier_Headband_Collection_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_Collection Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Headband_Collection_C::OnPostResIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Headband_Collection_C", "OnPostResIn");

	UObject::ProcessEvent(Func, nullptr);
}

}
