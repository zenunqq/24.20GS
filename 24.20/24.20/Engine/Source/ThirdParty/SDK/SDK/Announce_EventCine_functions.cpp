#pragma once

#include "Basic.hpp"

#include "Announce_EventCine_classes.hpp"
#include "Announce_EventCine_parameters.hpp"

namespace SDK
{

void AAnnounce_EventCine_C::OnPlayerSkippedCutscene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_EventCine_C", "OnPlayerSkippedCutscene");

	UObject::ProcessEvent(Func, nullptr);
}

void AAnnounce_EventCine_C::OnEnteredCinematicState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_EventCine_C", "OnEnteredCinematicState");

	UObject::ProcessEvent(Func, nullptr);
}

void AAnnounce_EventCine_C::OnClientAnnouncementStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_EventCine_C", "OnClientAnnouncementStop");

	UObject::ProcessEvent(Func, nullptr);
}

void AAnnounce_EventCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_EventCine_C", "HandleClientEvent_CinematicFinishedPlaying");

	Params::Announce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void AAnnounce_EventCine_C::HandleAllowSkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_EventCine_C", "HandleAllowSkip");

	UObject::ProcessEvent(Func, nullptr);
}

void AAnnounce_EventCine_C::ExecuteUbergraph_Announce_EventCine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_EventCine_C", "ExecuteUbergraph_Announce_EventCine");

	Params::Announce_EventCine_C_ExecuteUbergraph_Announce_EventCine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
