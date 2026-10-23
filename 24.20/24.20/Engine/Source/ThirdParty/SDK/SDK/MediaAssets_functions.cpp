#pragma once

#include "Basic.hpp"

#include "MediaAssets_classes.hpp"
#include "MediaAssets_parameters.hpp"

namespace SDK
{

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "SetMediaPlayer");

	Params::MediaTexture_SetMediaPlayer Parms{};

	Parms.NewMediaPlayer = NewMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaTexture::UpdateResource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "UpdateResource");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float UMediaTexture::GetAspectRatio() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "GetAspectRatio");

	Params::MediaTexture_GetAspectRatio Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaTexture::GetHeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "GetHeight");

	Params::MediaTexture_GetHeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaPlayer* UMediaTexture::GetMediaPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "GetMediaPlayer");

	Params::MediaTexture_GetMediaPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaTexture::GetTextureNumMips() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "GetTextureNumMips");

	Params::MediaTexture_GetTextureNumMips Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaTexture::GetWidth() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaTexture", "GetWidth");

	Params::MediaTexture_GetWidth Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaSource::SetMediaOptionBool(const class FName& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionBool");

	Params::MediaSource_SetMediaOptionBool Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSource::SetMediaOptionFloat(const class FName& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionFloat");

	Params::MediaSource_SetMediaOptionFloat Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSource::SetMediaOptionInt64(const class FName& Key, int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionInt64");

	Params::MediaSource_SetMediaOptionInt64 Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSource::SetMediaOptionString(const class FName& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSource", "SetMediaOptionString");

	Params::MediaSource_SetMediaOptionString Parms{};

	Parms.Key = Key;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UMediaSource::GetUrl() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSource", "GetUrl");

	Params::MediaSource_GetUrl Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaSource::Validate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSource", "Validate");

	Params::MediaSource_Validate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFileMediaSource::SetFilePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FileMediaSource", "SetFilePath");

	Params::FileMediaSource_SetFilePath Parms{};

	Parms.Path = std::move(Path);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMediaPlayer* UMediaComponent::GetMediaPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaComponent", "GetMediaPlayer");

	Params::MediaComponent_GetMediaPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaTexture* UMediaComponent::GetMediaTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaComponent", "GetMediaTexture");

	Params::MediaComponent_GetMediaTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "CanPlaySource");

	Params::MediaPlayer_CanPlaySource Parms{};

	Parms.MediaSource = MediaSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::CanPlayUrl(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "CanPlayUrl");

	Params::MediaPlayer_CanPlayUrl Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Close");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UMediaPlayer::Next()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Next");

	Params::MediaPlayer_Next Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::OpenFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenFile");

	Params::MediaPlayer_OpenFile Parms{};

	Parms.FilePath = std::move(FilePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenPlaylist");

	Params::MediaPlayer_OpenPlaylist Parms{};

	Parms.InPlaylist = InPlaylist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenPlaylistIndex");

	Params::MediaPlayer_OpenPlaylistIndex Parms{};

	Parms.InPlaylist = InPlaylist;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenSource");

	Params::MediaPlayer_OpenSource Parms{};

	Parms.MediaSource = MediaSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::OpenSourceLatent(const class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenSourceLatent");

	Params::MediaPlayer_OpenSourceLatent Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = std::move(LatentInfo);
	Parms.MediaSource = MediaSource;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}

bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenSourceWithOptions");

	Params::MediaPlayer_OpenSourceWithOptions Parms{};

	Parms.MediaSource = MediaSource;
	Parms.Options = std::move(Options);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::OpenUrl(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "OpenUrl");

	Params::MediaPlayer_OpenUrl Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Pause");

	Params::MediaPlayer_Pause Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Play");

	Params::MediaPlayer_Play Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::PlayAndSeek()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "PlayAndSeek");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UMediaPlayer::Previous()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Previous");

	Params::MediaPlayer_Previous Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::Reopen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Reopen");

	Params::MediaPlayer_Reopen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::Rewind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Rewind");

	Params::MediaPlayer_Rewind Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "Seek");

	Params::MediaPlayer_Seek Parms{};

	Parms.Time = std::move(Time);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SelectTrack");

	Params::MediaPlayer_SelectTrack Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetBlockOnTime");

	Params::MediaPlayer_SetBlockOnTime Parms{};

	Parms.Time = std::move(Time);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaPlayer::SetDesiredPlayerName(class FName PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetDesiredPlayerName");

	Params::MediaPlayer_SetDesiredPlayerName Parms{};

	Parms.PlayerName = PlayerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMediaPlayer::SetLooping(bool Looping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetLooping");

	Params::MediaPlayer_SetLooping Parms{};

	Parms.Looping = Looping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::SetMediaOptions(const class UMediaSource* Options)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetMediaOptions");

	Params::MediaPlayer_SetMediaOptions Parms{};

	Parms.Options = Options;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMediaPlayer::SetNativeVolume(float Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetNativeVolume");

	Params::MediaPlayer_SetNativeVolume Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SetRate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetRate");

	Params::MediaPlayer_SetRate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetTimeDelay");

	Params::MediaPlayer_SetTimeDelay Parms{};

	Parms.TimeDelay_0 = std::move(TimeDelay_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetTrackFormat");

	Params::MediaPlayer_SetTrackFormat Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetVideoTrackFrameRate");

	Params::MediaPlayer_SetVideoTrackFrameRate Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;
	Parms.FrameRate = FrameRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetViewField");

	Params::MediaPlayer_SetViewField Parms{};

	Parms.Horizontal = Horizontal;
	Parms.Vertical = Vertical;
	Parms.Absolute = Absolute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SetViewRotation");

	Params::MediaPlayer_SetViewRotation Parms{};

	Parms.Rotation = std::move(Rotation);
	Parms.Absolute = Absolute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::CanPause() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "CanPause");

	Params::MediaPlayer_CanPause Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetAudioTrackChannels");

	Params::MediaPlayer_GetAudioTrackChannels Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetAudioTrackSampleRate");

	Params::MediaPlayer_GetAudioTrackSampleRate Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMediaPlayer::GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetAudioTrackType");

	Params::MediaPlayer_GetAudioTrackType Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMediaPlayer::GetDesiredPlayerName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetDesiredPlayerName");

	Params::MediaPlayer_GetDesiredPlayerName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTimespan UMediaPlayer::GetDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetDuration");

	Params::MediaPlayer_GetDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaPlayer::GetHorizontalFieldOfView() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetHorizontalFieldOfView");

	Params::MediaPlayer_GetHorizontalFieldOfView Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMediaPlayer::GetMediaName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetMediaName");

	Params::MediaPlayer_GetMediaName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetNumTrackFormats");

	Params::MediaPlayer_GetNumTrackFormats Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetNumTracks");

	Params::MediaPlayer_GetNumTracks Parms{};

	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMediaPlayer::GetPlayerName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetPlayerName");

	Params::MediaPlayer_GetPlayerName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaPlaylist* UMediaPlayer::GetPlaylist() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetPlaylist");

	Params::MediaPlayer_GetPlaylist Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetPlaylistIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetPlaylistIndex");

	Params::MediaPlayer_GetPlaylistIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaPlayer::GetRate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetRate");

	Params::MediaPlayer_GetRate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetSelectedTrack");

	Params::MediaPlayer_GetSelectedTrack Parms{};

	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaPlayer::GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetSupportedRates");

	Params::MediaPlayer_GetSupportedRates Parms{};

	Parms.Unthinned = Unthinned;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRates != nullptr)
		*OutRates = std::move(Parms.OutRates);
}

struct FTimespan UMediaPlayer::GetTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetTime");

	Params::MediaPlayer_GetTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTimespan UMediaPlayer::GetTimeDelay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetTimeDelay");

	Params::MediaPlayer_GetTimeDelay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaTimeStampInfo* UMediaPlayer::GetTimeStamp() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetTimeStamp");

	Params::MediaPlayer_GetTimeStamp Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetTrackDisplayName");

	Params::MediaPlayer_GetTrackDisplayName Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetTrackFormat");

	Params::MediaPlayer_GetTrackFormat Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetTrackLanguage");

	Params::MediaPlayer_GetTrackLanguage Parms{};

	Parms.TrackType = TrackType;
	Parms.TrackIndex = TrackIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMediaPlayer::GetUrl() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetUrl");

	Params::MediaPlayer_GetUrl Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaPlayer::GetVerticalFieldOfView() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetVerticalFieldOfView");

	Params::MediaPlayer_GetVerticalFieldOfView Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaPlayer::GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackAspectRatio");

	Params::MediaPlayer_GetVideoTrackAspectRatio Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackDimensions");

	Params::MediaPlayer_GetVideoTrackDimensions Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMediaPlayer::GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackFrameRate");

	Params::MediaPlayer_GetVideoTrackFrameRate Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackFrameRates");

	Params::MediaPlayer_GetVideoTrackFrameRates Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMediaPlayer::GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetVideoTrackType");

	Params::MediaPlayer_GetVideoTrackType Parms{};

	Parms.TrackIndex = TrackIndex;
	Parms.FormatIndex = FormatIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator UMediaPlayer::GetViewRotation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "GetViewRotation");

	Params::MediaPlayer_GetViewRotation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::HasError() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "HasError");

	Params::MediaPlayer_HasError Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsBuffering() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsBuffering");

	Params::MediaPlayer_IsBuffering Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsClosed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsClosed");

	Params::MediaPlayer_IsClosed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsConnecting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsConnecting");

	Params::MediaPlayer_IsConnecting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsLooping() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsLooping");

	Params::MediaPlayer_IsLooping Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsPaused");

	Params::MediaPlayer_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsPlaying");

	Params::MediaPlayer_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsPreparing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsPreparing");

	Params::MediaPlayer_IsPreparing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::IsReady() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "IsReady");

	Params::MediaPlayer_IsReady Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SupportsRate");

	Params::MediaPlayer_SupportsRate Parms{};

	Parms.Rate = Rate;
	Parms.Unthinned = Unthinned;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SupportsScrubbing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SupportsScrubbing");

	Params::MediaPlayer_SupportsScrubbing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlayer::SupportsSeeking() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlayer", "SupportsSeeking");

	Params::MediaPlayer_SupportsSeeking Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "Add");

	Params::MediaPlaylist_Add Parms{};

	Parms.MediaSource = MediaSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlaylist::AddFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "AddFile");

	Params::MediaPlaylist_AddFile Parms{};

	Parms.FilePath = std::move(FilePath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlaylist::AddUrl(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "AddUrl");

	Params::MediaPlaylist_AddUrl Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaSource* UMediaPlaylist::Get(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "Get");

	Params::MediaPlaylist_Get Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaSource* UMediaPlaylist::GetNext(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "GetNext");

	Params::MediaPlaylist_GetNext Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;
}

class UMediaSource* UMediaPlaylist::GetPrevious(int32* InOutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "GetPrevious");

	Params::MediaPlaylist_GetPrevious Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InOutIndex != nullptr)
		*InOutIndex = Parms.InOutIndex;

	return Parms.ReturnValue;
}

class UMediaSource* UMediaPlaylist::GetRandom(int32* OutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "GetRandom");

	Params::MediaPlaylist_GetRandom Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutIndex != nullptr)
		*OutIndex = Parms.OutIndex;

	return Parms.ReturnValue;
}

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "Insert");

	Params::MediaPlaylist_Insert Parms{};

	Parms.MediaSource = MediaSource;
	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMediaPlaylist::Num()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "Num");

	Params::MediaPlaylist_Num Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "Remove");

	Params::MediaPlaylist_Remove Parms{};

	Parms.MediaSource = MediaSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlaylist::RemoveAt(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "RemoveAt");

	Params::MediaPlaylist_RemoveAt Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaPlaylist::Replace(int32 Index_0, class UMediaSource* Replacement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaPlaylist", "Replace");

	Params::MediaPlaylist_Replace Parms{};

	Parms.Index_0 = Index_0;
	Parms.Replacement = Replacement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "BP_GetAttenuationSettingsToApply");

	Params::MediaSoundComponent_BP_GetAttenuationSettingsToApply Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAttenuationSettings != nullptr)
		*OutAttenuationSettings = std::move(Parms.OutAttenuationSettings);

	return Parms.ReturnValue;
}

TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetNormalizedSpectralData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "GetNormalizedSpectralData");

	Params::MediaSoundComponent_GetNormalizedSpectralData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "GetSpectralData");

	Params::MediaSoundComponent_GetSpectralData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "SetEnableEnvelopeFollowing");

	Params::MediaSoundComponent_SetEnableEnvelopeFollowing Parms{};

	Parms.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "SetEnableSpectralAnalysis");

	Params::MediaSoundComponent_SetEnableSpectralAnalysis Parms{};

	Parms.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "SetEnvelopeFollowingsettings");

	Params::MediaSoundComponent_SetEnvelopeFollowingsettings Parms{};

	Parms.AttackTimeMsec = AttackTimeMsec;
	Parms.ReleaseTimeMsec = ReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "SetMediaPlayer");

	Params::MediaSoundComponent_SetMediaPlayer Parms{};

	Parms.NewMediaPlayer = NewMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMediaSoundComponent::SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "SetSpectralAnalysisSettings");

	Params::MediaSoundComponent_SetSpectralAnalysisSettings Parms{};

	Parms.InFrequenciesToAnalyze = std::move(InFrequenciesToAnalyze);
	Parms.InFFTSize = InFFTSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UMediaSoundComponent::GetEnvelopeValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "GetEnvelopeValue");

	Params::MediaSoundComponent_GetEnvelopeValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MediaSoundComponent", "GetMediaPlayer");

	Params::MediaSoundComponent_GetMediaPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateAudioCaptureDevices");

	Params::MediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDevices != nullptr)
		*OutDevices = std::move(Parms.OutDevices);
}

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateVideoCaptureDevices");

	Params::MediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDevices != nullptr)
		*OutDevices = std::move(Parms.OutDevices);
}

void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MediaBlueprintFunctionLibrary", "EnumerateWebcamCaptureDevices");

	Params::MediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDevices != nullptr)
		*OutDevices = std::move(Parms.OutDevices);
}

}
