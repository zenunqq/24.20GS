#pragma once

#include "Basic.hpp"

#include "Athena_ConfirmationWindow_classes.hpp"
#include "Athena_ConfirmationWindow_parameters.hpp"

namespace SDK
{

void UAthena_ConfirmationWindow_C::ExecuteUbergraph_Athena_ConfirmationWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_ConfirmationWindow_C", "ExecuteUbergraph_Athena_ConfirmationWindow");

	Params::Athena_ConfirmationWindow_C_ExecuteUbergraph_Athena_ConfirmationWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthena_ConfirmationWindow_C::OnSetButtonText(class UCommonButtonBase* Button, const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Athena_ConfirmationWindow_C", "OnSetButtonText");

	Params::Athena_ConfirmationWindow_C_OnSetButtonText Parms{};

	Parms.Button = Button;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}
