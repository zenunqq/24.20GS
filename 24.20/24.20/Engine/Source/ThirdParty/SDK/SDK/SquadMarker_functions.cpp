#pragma once

#include "Basic.hpp"

#include "SquadMarker_classes.hpp"
#include "SquadMarker_parameters.hpp"

namespace SDK
{

void USquadMarker_C::ExecuteUbergraph_SquadMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMarker_C", "ExecuteUbergraph_SquadMarker");

	Params::SquadMarker_C_ExecuteUbergraph_SquadMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
