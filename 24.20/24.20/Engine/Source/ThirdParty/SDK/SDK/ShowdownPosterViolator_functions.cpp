#pragma once

#include "Basic.hpp"

#include "ShowdownPosterViolator_classes.hpp"
#include "ShowdownPosterViolator_parameters.hpp"

namespace SDK
{

void UShowdownPosterViolator_C::OnViolatorStateRefreshed(ETournmentPosterViolatorState NewTimeState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPosterViolator_C", "OnViolatorStateRefreshed");

	Params::ShowdownPosterViolator_C_OnViolatorStateRefreshed Parms{};

	Parms.NewTimeState = NewTimeState;

	UObject::ProcessEvent(Func, &Parms);
}

void UShowdownPosterViolator_C::ExecuteUbergraph_ShowdownPosterViolator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownPosterViolator_C", "ExecuteUbergraph_ShowdownPosterViolator");

	Params::ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
