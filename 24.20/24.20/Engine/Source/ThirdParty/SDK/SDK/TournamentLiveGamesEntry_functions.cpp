#pragma once

#include "Basic.hpp"

#include "TournamentLiveGamesEntry_classes.hpp"
#include "TournamentLiveGamesEntry_parameters.hpp"

namespace SDK
{

void UTournamentLiveGamesEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentLiveGamesEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UTournamentLiveGamesEntry_C::ExecuteUbergraph_TournamentLiveGamesEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "ExecuteUbergraph_TournamentLiveGamesEntry");

	Params::TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTournamentLiveGamesEntry_C::OnEntrySet(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TournamentLiveGamesEntry_C", "OnEntrySet");

	Params::TournamentLiveGamesEntry_C_OnEntrySet Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}
