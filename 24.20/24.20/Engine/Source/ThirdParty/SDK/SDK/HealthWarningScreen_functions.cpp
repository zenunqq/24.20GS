#pragma once

#include "Basic.hpp"

#include "HealthWarningScreen_classes.hpp"
#include "HealthWarningScreen_parameters.hpp"

namespace SDK
{

void UHealthWarningScreen_C::HandleShowTimerComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HealthWarningScreen_C", "HandleShowTimerComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UHealthWarningScreen_C::ExecuteUbergraph_HealthWarningScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HealthWarningScreen_C", "ExecuteUbergraph_HealthWarningScreen");

	Params::HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
