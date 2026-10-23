#pragma once

#include "Basic.hpp"

#include "GA_Athena_ZipLine_Jump_classes.hpp"
#include "GA_Athena_ZipLine_Jump_parameters.hpp"

namespace SDK
{

void UGA_Athena_ZipLine_Jump_C::ExecuteUbergraph_GA_Athena_ZipLine_Jump(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_Jump_C", "ExecuteUbergraph_GA_Athena_ZipLine_Jump");

	Params::GA_Athena_ZipLine_Jump_C_ExecuteUbergraph_GA_Athena_ZipLine_Jump Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_ZipLine_Jump_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_Jump_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_ZipLine_Jump_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ZipLine_Jump_C", "K2_OnEndAbility");

	Params::GA_Athena_ZipLine_Jump_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
