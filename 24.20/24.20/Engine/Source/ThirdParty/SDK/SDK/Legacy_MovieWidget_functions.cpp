#pragma once

#include "Basic.hpp"

#include "Legacy_MovieWidget_classes.hpp"
#include "Legacy_MovieWidget_parameters.hpp"

namespace SDK
{

void ULegacy_MovieWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}

void ULegacy_MovieWidget_C::ExecuteUbergraph_Legacy_MovieWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "ExecuteUbergraph_Legacy_MovieWidget");

	Params::Legacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULegacy_MovieWidget_C::Init(class UMediaPlayer* InMediaPlayer, class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int32 AudioTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "Init");

	Params::Legacy_MovieWidget_C_Init Parms{};

	Parms.InMediaPlayer = InMediaPlayer;
	Parms.InMediaSource = InMediaSource;
	Parms.InMediaSoundWave = InMediaSoundWave;
	Parms.AudioTrack = AudioTrack;

	UObject::ProcessEvent(Func, &Parms);
}

void ULegacy_MovieWidget_C::MediaDimensionsUpdated(float NewWidth, float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "MediaDimensionsUpdated");

	Params::Legacy_MovieWidget_C_MediaDimensionsUpdated Parms{};

	Parms.NewWidth = NewWidth;
	Parms.NewHeight = NewHeight;

	UObject::ProcessEvent(Func, &Parms);
}

void ULegacy_MovieWidget_C::OnMediaLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "OnMediaLoaded");

	UObject::ProcessEvent(Func, nullptr);
}

void ULegacy_MovieWidget_C::Play(bool ShouldRewind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "Play");

	Params::Legacy_MovieWidget_C_Play Parms{};

	Parms.ShouldRewind = ShouldRewind;

	UObject::ProcessEvent(Func, &Parms);
}

void ULegacy_MovieWidget_C::SetDelayedContentValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "SetDelayedContentValues");

	UObject::ProcessEvent(Func, nullptr);
}

void ULegacy_MovieWidget_C::StopPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Legacy_MovieWidget_C", "StopPlaying");

	UObject::ProcessEvent(Func, nullptr);
}

}
