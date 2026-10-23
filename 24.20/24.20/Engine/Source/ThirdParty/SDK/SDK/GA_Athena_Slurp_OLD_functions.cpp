#pragma once

#include "Basic.hpp"

#include "GA_Athena_Slurp_OLD_classes.hpp"
#include "GA_Athena_Slurp_OLD_parameters.hpp"

namespace SDK
{

void UGA_Athena_Slurp_OLD_C::ApplyHealthOrShield()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_OLD_C", "ApplyHealthOrShield");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Slurp_OLD_C::ExecuteUbergraph_GA_Athena_Slurp_OLD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_OLD_C", "ExecuteUbergraph_GA_Athena_Slurp_OLD");

	Params::GA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Slurp_OLD_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_OLD_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Slurp_OLD_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Slurp_OLD_C", "K2_OnEndAbility");

	Params::GA_Athena_Slurp_OLD_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
