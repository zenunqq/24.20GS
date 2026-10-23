#pragma once

#include "Basic.hpp"

#include "EventLeaderboardEntry_classes.hpp"
#include "EventLeaderboardEntry_parameters.hpp"

namespace SDK
{

void UEventLeaderboardEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntry_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntry_C::EventStyleEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "EventStyleEntry");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventLeaderboardEntry_C::ExecuteUbergraph_EventLeaderboardEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "ExecuteUbergraph_EventLeaderboardEntry");

	Params::EventLeaderboardEntry_C_ExecuteUbergraph_EventLeaderboardEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntry_C::InitializeTeamTextEntry(class UUserWidget* TeamEntryWidget, const class FText& Usernames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "InitializeTeamTextEntry");

	Params::EventLeaderboardEntry_C_InitializeTeamTextEntry Parms{};

	Parms.TeamEntryWidget = TeamEntryWidget;
	Parms.Usernames = std::move(Usernames);

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "OnListItemObjectSet");

	Params::EventLeaderboardEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "PreConstruct");

	Params::EventLeaderboardEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventLeaderboardEntry_C::SetEntryDetails(class UFortEventLeaderboardEntryData* EntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventLeaderboardEntry_C", "SetEntryDetails");

	Params::EventLeaderboardEntry_C_SetEntryDetails Parms{};

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);
}

}
