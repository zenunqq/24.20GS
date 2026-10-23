#pragma once

#include "Basic.hpp"

#include "TextToggle_classes.hpp"
#include "TextToggle_parameters.hpp"

namespace SDK
{

void UTextToggle_C::SwitchToggle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextToggle_C", "SwitchToggle");

	UObject::ProcessEvent(Func, nullptr);
}

void UTextToggle_C::SetToggleState(bool isOn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextToggle_C", "SetToggleState");

	Params::TextToggle_C_SetToggleState Parms{};

	Parms.isOn_0 = isOn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UTextToggle_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextToggle_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

void UTextToggle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextToggle_C", "PreConstruct");

	Params::TextToggle_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UTextToggle_C::ExecuteUbergraph_TextToggle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextToggle_C", "ExecuteUbergraph_TextToggle");

	Params::TextToggle_C_ExecuteUbergraph_TextToggle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTextToggle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TextToggle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
