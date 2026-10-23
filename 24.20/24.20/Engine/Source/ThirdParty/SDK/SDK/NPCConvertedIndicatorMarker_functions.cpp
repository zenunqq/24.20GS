#pragma once

#include "Basic.hpp"

#include "NPCConvertedIndicatorMarker_classes.hpp"
#include "NPCConvertedIndicatorMarker_parameters.hpp"

namespace SDK
{

void UNPCConvertedIndicatorMarker_C::ExecuteUbergraph_NPCConvertedIndicatorMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCConvertedIndicatorMarker_C", "ExecuteUbergraph_NPCConvertedIndicatorMarker");

	Params::NPCConvertedIndicatorMarker_C_ExecuteUbergraph_NPCConvertedIndicatorMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCConvertedIndicatorMarker_C::OnPingCommandEvent(EPingCommandType CommandType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCConvertedIndicatorMarker_C", "OnPingCommandEvent");

	Params::NPCConvertedIndicatorMarker_C_OnPingCommandEvent Parms{};

	Parms.CommandType = CommandType;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPCConvertedIndicatorMarker_C::OnSetMarkerData(const struct FFortWorldMarkerData& FortWorldMarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCConvertedIndicatorMarker_C", "OnSetMarkerData");

	Params::NPCConvertedIndicatorMarker_C_OnSetMarkerData Parms{};

	Parms.FortWorldMarkerData = std::move(FortWorldMarkerData);

	UObject::ProcessEvent(Func, &Parms);
}

}
