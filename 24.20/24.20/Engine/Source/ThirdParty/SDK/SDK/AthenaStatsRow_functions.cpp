#pragma once

#include "Basic.hpp"

#include "AthenaStatsRow_classes.hpp"
#include "AthenaStatsRow_parameters.hpp"

namespace SDK
{

void UAthenaStatsRow_C::SetStatValueAsText(const class FText& StatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaStatsRow_C", "SetStatValueAsText");

	Params::AthenaStatsRow_C_SetStatValueAsText Parms{};

	Parms.StatValue = std::move(StatValue);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaStatsRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaStatsRow_C", "PreConstruct");

	Params::AthenaStatsRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaStatsRow_C::ExecuteUbergraph_AthenaStatsRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaStatsRow_C", "ExecuteUbergraph_AthenaStatsRow");

	Params::AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
