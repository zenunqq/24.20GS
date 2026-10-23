#pragma once

#include "Basic.hpp"

#include "CloseButton_classes.hpp"
#include "CloseButton_parameters.hpp"

namespace SDK
{

void UCloseButton_C::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CloseButton_C", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UCloseButton_C::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CloseButton_C", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UCloseButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CloseButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCloseButton_C::ExecuteUbergraph_CloseButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CloseButton_C", "ExecuteUbergraph_CloseButton");

	Params::CloseButton_C_ExecuteUbergraph_CloseButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCloseButton_C::HandleSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CloseButton_C", "HandleSize");

	UObject::ProcessEvent(Func, nullptr);
}

void UCloseButton_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CloseButton_C", "SetText");

	Params::CloseButton_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}
