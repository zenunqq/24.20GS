#pragma once

#include "Basic.hpp"

#include "RebootVanIndicator_classes.hpp"
#include "RebootVanIndicator_parameters.hpp"

namespace SDK
{

void URebootVanIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootVanIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void URebootVanIndicator_C::ExecuteUbergraph_RebootVanIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootVanIndicator_C", "ExecuteUbergraph_RebootVanIndicator");

	Params::RebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
