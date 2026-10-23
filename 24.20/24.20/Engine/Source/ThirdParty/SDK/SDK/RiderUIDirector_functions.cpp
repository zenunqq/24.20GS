#pragma once

#include "Basic.hpp"

#include "RiderUIDirector_classes.hpp"
#include "RiderUIDirector_parameters.hpp"

namespace SDK
{

void ARiderUIDirector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderUIDirector_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ARiderUIDirector_C::ExecuteUbergraph_RiderUIDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RiderUIDirector_C", "ExecuteUbergraph_RiderUIDirector");

	Params::RiderUIDirector_C_ExecuteUbergraph_RiderUIDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
