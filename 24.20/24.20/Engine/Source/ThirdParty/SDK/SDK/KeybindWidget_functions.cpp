#pragma once

#include "Basic.hpp"

#include "KeybindWidget_classes.hpp"
#include "KeybindWidget_parameters.hpp"

namespace SDK
{

void UKeybindWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UKeybindWidget_C::ExecuteUbergraph_KeybindWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeybindWidget_C", "ExecuteUbergraph_KeybindWidget");

	Params::KeybindWidget_C_ExecuteUbergraph_KeybindWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
