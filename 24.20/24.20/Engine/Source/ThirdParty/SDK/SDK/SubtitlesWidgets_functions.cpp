#pragma once

#include "Basic.hpp"

#include "SubtitlesWidgets_classes.hpp"
#include "SubtitlesWidgets_parameters.hpp"

namespace SDK
{

bool USubtitleDisplay::HasSubtitles() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubtitleDisplay", "HasSubtitles");

	Params::SubtitleDisplay_HasSubtitles Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMediaSubtitlesPlayer::BindToMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "BindToMediaPlayer");

	Params::FortMediaSubtitlesPlayer_BindToMediaPlayer Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMediaSubtitlesPlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMediaSubtitlesPlayer::SetSubtitles(class UOverlays* Subtitles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "SetSubtitles");

	Params::FortMediaSubtitlesPlayer_SetSubtitles Parms{};

	Parms.Subtitles = Subtitles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMediaSubtitlesPlayer::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMediaSubtitlesPlayer", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
