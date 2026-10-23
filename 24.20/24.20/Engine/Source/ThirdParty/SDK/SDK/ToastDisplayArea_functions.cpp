#pragma once

#include "Basic.hpp"

#include "ToastDisplayArea_classes.hpp"
#include "ToastDisplayArea_parameters.hpp"

namespace SDK
{

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UToastDisplayArea_C::TestFrontendToast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "TestFrontendToast");

	UObject::ProcessEvent(Func, nullptr);
}

}
