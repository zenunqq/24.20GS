#pragma once

#include "Basic.hpp"

#include "StatusWidget_classes.hpp"
#include "StatusWidget_parameters.hpp"

namespace SDK
{

void UStatusWidget_C::SetQuitButtonText(const class FText& QuitText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusWidget_C", "SetQuitButtonText");

	Params::StatusWidget_C_SetQuitButtonText Parms{};

	Parms.QuitText = std::move(QuitText);

	UObject::ProcessEvent(Func, &Parms);
}

void UStatusWidget_C::SetContinueButtonText(const class FText& ContinueText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusWidget_C", "SetContinueButtonText");

	Params::StatusWidget_C_SetContinueButtonText Parms{};

	Parms.ContinueText = std::move(ContinueText);

	UObject::ProcessEvent(Func, &Parms);
}

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusWidget_C", "ExecuteUbergraph_StatusWidget");

	Params::StatusWidget_C_ExecuteUbergraph_StatusWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
