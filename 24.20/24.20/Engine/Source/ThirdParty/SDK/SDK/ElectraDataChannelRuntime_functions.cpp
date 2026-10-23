#pragma once

#include "Basic.hpp"

#include "ElectraDataChannelRuntime_classes.hpp"
#include "ElectraDataChannelRuntime_parameters.hpp"

namespace SDK
{

void AElectraDataChannelPlayer::EndPlayback()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "EndPlayback");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelPlayer::PlayFromFile(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromFile");

	Params::ElectraDataChannelPlayer_PlayFromFile Parms{};

	Parms.InFilename = std::move(InFilename);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelPlayer::PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromMediaPlayer");

	Params::ElectraDataChannelPlayer_PlayFromMediaPlayer Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelPlayer::PlayFromStateStreamServer(const class FString& InStatePlaylistURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "PlayFromStateStreamServer");

	Params::ElectraDataChannelPlayer_PlayFromStateStreamServer Parms{};

	Parms.InStatePlaylistURL = std::move(InStatePlaylistURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelPlayer::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelPlayer", "UseTimeFromMediaPlayer");

	Params::ElectraDataChannelPlayer_UseTimeFromMediaPlayer Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelRecorder::EndRecording()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "EndRecording");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelRecorder::RecordToFile(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "RecordToFile");

	Params::ElectraDataChannelRecorder_RecordToFile Parms{};

	Parms.InFilename = std::move(InFilename);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelRecorder::StartRecording()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "StartRecording");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelRecorder::UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelRecorder", "UseTimeFromMediaPlayer");

	Params::ElectraDataChannelRecorder_UseTimeFromMediaPlayer Parms{};

	Parms.InMediaPlayer = InMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AElectraDataChannelTarget::SetTargetAlias(const class FString& InAlias)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelTarget", "SetTargetAlias");

	Params::ElectraDataChannelTarget_SetTargetAlias Parms{};

	Parms.InAlias = std::move(InAlias);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString AElectraDataChannelTarget::GetTargetAlias() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ElectraDataChannelTarget", "GetTargetAlias");

	Params::ElectraDataChannelTarget_GetTargetAlias Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
