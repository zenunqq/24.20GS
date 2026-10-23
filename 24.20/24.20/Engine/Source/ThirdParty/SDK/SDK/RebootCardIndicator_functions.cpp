#pragma once

#include "Basic.hpp"

#include "RebootCardIndicator_classes.hpp"
#include "RebootCardIndicator_parameters.hpp"

namespace SDK
{

void URebootCardIndicator_C::bp_UpdateCountdownText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "bp_UpdateCountdownText");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootCardIndicator_C::ExecuteUbergraph_RebootCardIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "ExecuteUbergraph_RebootCardIndicator");

	Params::RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URebootCardIndicator_C::HandleDisplayForSelf(bool bSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "HandleDisplayForSelf");

	Params::RebootCardIndicator_C_HandleDisplayForSelf Parms{};

	Parms.bSelf = bSelf;

	UObject::ProcessEvent(Func, &Parms);
}

void URebootCardIndicator_C::SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "SetupCountdown");

	Params::RebootCardIndicator_C_SetupCountdown Parms{};

	Parms.StartTimeLocalWorld = StartTimeLocalWorld;
	Parms.EndTimeLocalWorld = EndTimeLocalWorld;

	UObject::ProcessEvent(Func, &Parms);
}

void URebootCardIndicator_C::UpdateCountdownText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "UpdateCountdownText");

	UObject::ProcessEvent(Func, nullptr);
}

}
