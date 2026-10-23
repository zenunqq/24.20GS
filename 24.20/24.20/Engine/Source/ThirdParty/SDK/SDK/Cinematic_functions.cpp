#pragma once

#include "Basic.hpp"

#include "Cinematic_classes.hpp"
#include "Cinematic_parameters.hpp"

namespace SDK
{

void UCinematic_C::ClearMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "ClearMovie");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_C::ClearMovieSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "ClearMovieSlot");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_C::ClearMovieWidget(class UFortMovieWidget*& MovieWidgetToClear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "ClearMovieWidget");

	Params::Cinematic_C_ClearMovieWidget Parms{};

	Parms.MovieWidgetToClear = MovieWidgetToClear;

	UObject::ProcessEvent(Func, &Parms);

	MovieWidgetToClear = Parms.MovieWidgetToClear;
}

void UCinematic_C::ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "ClearOldSubtitlesIfNecessary");

	Params::Cinematic_C_ClearOldSubtitlesIfNecessary Parms{};

	Parms.NewSubtitlesExist = NewSubtitlesExist;
	Parms.NewSubtitles = NewSubtitles;

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_C::ExecuteUbergraph_Cinematic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "ExecuteUbergraph_Cinematic");

	Params::Cinematic_C_ExecuteUbergraph_Cinematic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::GetAudioTrackIndex(int32* AudioTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "GetAudioTrackIndex");

	Params::Cinematic_C_GetAudioTrackIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AudioTrack != nullptr)
		*AudioTrack = Parms.AudioTrack;
}

void UCinematic_C::HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "HandleClientEvent_QueueCinematic");

	Params::Cinematic_C_HandleClientEvent_QueueCinematic Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "HandleClientEvent_SkipCinematic");

	Params::Cinematic_C_HandleClientEvent_SkipCinematic Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::HandleEndReached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "HandleEndReached");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_C::OnEnterState(EFortUIState PreviousUIState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "OnEnterState");

	Params::Cinematic_C_OnEnterState Parms{};

	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::OnExitState(EFortUIState NextUIState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "OnExitState");

	Params::Cinematic_C_OnExitState Parms{};

	Parms.NextUIState = NextUIState;

	UObject::ProcessEvent(Func, &Parms);
}

class UWidget* UCinematic_C::PopContentWidgetInternal(const struct FContentPushState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "PopContentWidgetInternal");

	Params::Cinematic_C_PopContentWidgetInternal Parms{};

	Parms.State = std::move(State);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCinematic_C::PushContentWidgetInternal(class UWidget* Widget, const struct FContentPushState& State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "PushContentWidgetInternal");

	Params::Cinematic_C_PushContentWidgetInternal Parms{};

	Parms.Widget = Widget;
	Parms.State = std::move(State);

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::SetMoviePlaying(bool MoviePlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "SetMoviePlaying");

	Params::Cinematic_C_SetMoviePlaying Parms{};

	Parms.MoviePlaying = MoviePlaying;

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::Show_Movie(class UMediaPlayer* MediaPlayer, class UMediaSource* MediaSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "Show Movie");

	Params::Cinematic_C_Show_Movie Parms{};

	Parms.MediaPlayer = MediaPlayer;
	Parms.MediaSource = MediaSource;

	UObject::ProcessEvent(Func, &Parms);
}

void UCinematic_C::SkipMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "SkipMovie");

	UObject::ProcessEvent(Func, nullptr);
}

void UCinematic_C::StopAndClearSubtitles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cinematic_C", "StopAndClearSubtitles");

	UObject::ProcessEvent(Func, nullptr);
}

}
