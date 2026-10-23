#pragma once

#include "Basic.hpp"

#include "EventTeamMatchHistoryEntry_classes.hpp"
#include "EventTeamMatchHistoryEntry_parameters.hpp"

namespace SDK
{

void UEventTeamMatchHistoryEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventTeamMatchHistoryEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UEventTeamMatchHistoryEntry_C::ExecuteUbergraph_EventTeamMatchHistoryEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "ExecuteUbergraph_EventTeamMatchHistoryEntry");

	Params::EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UEventTeamMatchHistoryEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventTeamMatchHistoryEntry_C", "OnListItemObjectSet");

	Params::EventTeamMatchHistoryEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

}
