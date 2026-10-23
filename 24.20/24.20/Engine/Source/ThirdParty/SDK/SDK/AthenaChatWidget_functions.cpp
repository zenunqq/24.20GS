#pragma once

#include "Basic.hpp"

#include "AthenaChatWidget_classes.hpp"
#include "AthenaChatWidget_parameters.hpp"

namespace SDK
{

void UAthenaChatWidget_C::ExecuteUbergraph_AthenaChatWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChatWidget_C", "ExecuteUbergraph_AthenaChatWidget");

	Params::AthenaChatWidget_C_ExecuteUbergraph_AthenaChatWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChatWidget_C::FocusChat(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChatWidget_C", "FocusChat");

	Params::AthenaChatWidget_C_FocusChat Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}
