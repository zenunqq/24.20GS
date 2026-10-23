#pragma once

#include "Basic.hpp"

#include "RebootRallyAvailableTooltip_classes.hpp"
#include "RebootRallyAvailableTooltip_parameters.hpp"

namespace SDK
{

void URebootRallyAvailableTooltip_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyAvailableTooltip_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootRallyAvailableTooltip_C::OnShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyAvailableTooltip_C", "OnShowTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootRallyAvailableTooltip_C::OnEndTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyAvailableTooltip_C", "OnEndTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootRallyAvailableTooltip_C::HandleInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyAvailableTooltip_C", "HandleInputMethodChanged");

	Params::RebootRallyAvailableTooltip_C_HandleInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void URebootRallyAvailableTooltip_C::ExecuteUbergraph_RebootRallyAvailableTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootRallyAvailableTooltip_C", "ExecuteUbergraph_RebootRallyAvailableTooltip");

	Params::RebootRallyAvailableTooltip_C_ExecuteUbergraph_RebootRallyAvailableTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
