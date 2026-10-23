#pragma once

#include "Basic.hpp"

#include "LiveViolator_classes.hpp"
#include "LiveViolator_parameters.hpp"

namespace SDK
{

void ULiveViolator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveViolator_C", "PreConstruct");

	Params::LiveViolator_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void ULiveViolator_C::ExecuteUbergraph_LiveViolator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveViolator_C", "ExecuteUbergraph_LiveViolator");

	Params::LiveViolator_C_ExecuteUbergraph_LiveViolator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
