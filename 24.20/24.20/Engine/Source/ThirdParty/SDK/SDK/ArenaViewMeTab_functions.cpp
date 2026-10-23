#pragma once

#include "Basic.hpp"

#include "ArenaViewMeTab_classes.hpp"
#include "ArenaViewMeTab_parameters.hpp"

namespace SDK
{

void UArenaViewMeTab_C::Colorize(const struct FFortTournamentDisplayInfo& ColorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaViewMeTab_C", "Colorize");

	Params::ArenaViewMeTab_C_Colorize Parms{};

	Parms.ColorInfo = std::move(ColorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaViewMeTab_C::ExecuteUbergraph_ArenaViewMeTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaViewMeTab_C", "ExecuteUbergraph_ArenaViewMeTab");

	Params::ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
