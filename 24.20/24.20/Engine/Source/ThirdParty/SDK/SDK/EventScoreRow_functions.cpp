#pragma once

#include "Basic.hpp"

#include "EventScoreRow_classes.hpp"
#include "EventScoreRow_parameters.hpp"

namespace SDK
{

void UEventScoreRow_C::SetData(const class FText& Label, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventScoreRow_C", "SetData");

	Params::EventScoreRow_C_SetData Parms{};

	Parms.Label = std::move(Label);
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventScoreRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventScoreRow_C", "PreConstruct");

	Params::EventScoreRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventScoreRow_C::ExecuteUbergraph_EventScoreRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventScoreRow_C", "ExecuteUbergraph_EventScoreRow");

	Params::EventScoreRow_C_ExecuteUbergraph_EventScoreRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
