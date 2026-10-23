#pragma once

#include "Basic.hpp"

#include "AthenaChatWidgetModalWrapper_classes.hpp"
#include "AthenaChatWidgetModalWrapper_parameters.hpp"

namespace SDK
{

void UAthenaChatWidgetModalWrapper_C::ExecuteUbergraph_AthenaChatWidgetModalWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "ExecuteUbergraph_AthenaChatWidgetModalWrapper");

	Params::AthenaChatWidgetModalWrapper_C_ExecuteUbergraph_AthenaChatWidgetModalWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaChatWidgetModalWrapper_C::FocusChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "FocusChat");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChatWidgetModalWrapper_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaChatWidgetModalWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChatWidgetModalWrapper_C", "PreConstruct");

	Params::AthenaChatWidgetModalWrapper_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
