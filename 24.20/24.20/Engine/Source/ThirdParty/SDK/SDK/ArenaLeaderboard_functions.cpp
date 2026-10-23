#pragma once

#include "Basic.hpp"

#include "ArenaLeaderboard_classes.hpp"
#include "ArenaLeaderboard_parameters.hpp"

namespace SDK
{

void UArenaLeaderboard_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UArenaLeaderboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UArenaLeaderboard_C::ExecuteUbergraph_ArenaLeaderboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "ExecuteUbergraph_ArenaLeaderboard");

	Params::ArenaLeaderboard_C_ExecuteUbergraph_ArenaLeaderboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::Initialize_Children_For_Event(const class FString& Event_Id, const class FString& Event_Window_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "Initialize Children For Event");

	Params::ArenaLeaderboard_C_Initialize_Children_For_Event Parms{};

	Parms.Event_Id = std::move(Event_Id);
	Parms.Event_Window_Id = std::move(Event_Window_Id);

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::Item_Double_Clicked(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "Item Double-Clicked");

	Params::ArenaLeaderboard_C_Item_Double_Clicked Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::OnColorize(const struct FFortTournamentDisplayInfo& ColorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnColorize");

	Params::ArenaLeaderboard_C_OnColorize Parms{};

	Parms.ColorInfo = std::move(ColorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UArenaLeaderboard_C::OnLeaderboardEntrySelected(const class UFortEventLeaderboardEntryData* EntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnLeaderboardEntrySelected");

	Params::ArenaLeaderboard_C_OnLeaderboardEntrySelected Parms{};

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::OnLeaderboardTabsLoaded(bool bNoLeaderboardTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "OnLeaderboardTabsLoaded");

	Params::ArenaLeaderboard_C_OnLeaderboardTabsLoaded Parms{};

	Parms.bNoLeaderboardTabs = bNoLeaderboardTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::SetupForEvent(const class FString& EventId, const class FString& EventWindowId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "SetupForEvent");

	Params::ArenaLeaderboard_C_SetupForEvent Parms{};

	Parms.EventId = std::move(EventId);
	Parms.EventWindowId = std::move(EventWindowId);

	UObject::ProcessEvent(Func, &Parms);
}

void UArenaLeaderboard_C::ShowMyStats(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArenaLeaderboard_C", "ShowMyStats");

	Params::ArenaLeaderboard_C_ShowMyStats Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}
