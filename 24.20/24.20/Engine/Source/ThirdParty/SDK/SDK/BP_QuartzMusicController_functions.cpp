#pragma once

#include "Basic.hpp"

#include "BP_QuartzMusicController_classes.hpp"
#include "BP_QuartzMusicController_parameters.hpp"

namespace SDK
{

void ABP_QuartzMusicController_C::StopCurrentTrack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "StopCurrentTrack");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_QuartzMusicController_C::RequestTrackPlayback(class UQuartzMusicTrackComponent_C* Requesting_Track, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "RequestTrackPlayback");

	Params::BP_QuartzMusicController_C_RequestTrackPlayback Parms{};

	Parms.Requesting_Track = Requesting_Track;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

void ABP_QuartzMusicController_C::PlayTrack(class UQuartzMusicTrackComponent_C* Track_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "PlayTrack");

	Params::BP_QuartzMusicController_C_PlayTrack Parms{};

	Parms.Track_Component = Track_Component;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_QuartzMusicController_C::GetCurrentTrack(class UQuartzMusicTrackComponent_C** CurrentTrack_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_QuartzMusicController_C", "GetCurrentTrack");

	Params::BP_QuartzMusicController_C_GetCurrentTrack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTrack_0 != nullptr)
		*CurrentTrack_0 = Parms.CurrentTrack_0;
}

}
