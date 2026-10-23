#pragma once

#include "Basic.hpp"

#include "MultiActionConfirmationMenu_classes.hpp"
#include "MultiActionConfirmationMenu_parameters.hpp"

namespace SDK
{

void UMultiActionConfirmationMenu_C::ExecuteUbergraph_MultiActionConfirmationMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "ExecuteUbergraph_MultiActionConfirmationMenu");

	Params::MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UMultiActionConfirmationMenu_C::OnActionUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "OnActionUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UMultiActionConfirmationMenu_C::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "OnOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void UMultiActionConfirmationMenu_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultiActionConfirmationMenu_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}

}
