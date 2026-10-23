#pragma once

#include "Basic.hpp"

#include "ArenaPersonalView_classes.hpp"
#include "ArenaPersonalView_parameters.hpp"

namespace SDK
{

void UArenaPersonalView_C::Colorize(const struct FFortTournamentDisplayInfo& Color_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaPersonalView_C", "Colorize");

	Params::ArenaPersonalView_C_Colorize Parms{};

	Parms.Color_Info = std::move(Color_Info);

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaPersonalView_C::ExecuteUbergraph_ArenaPersonalView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaPersonalView_C", "ExecuteUbergraph_ArenaPersonalView");

	Params::ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
