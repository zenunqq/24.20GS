#pragma once

#include "Basic.hpp"

#include "EpicMediaBasePlayer_classes.hpp"
#include "EpicMediaBasePlayer_parameters.hpp"

namespace SDK
{

class UMediaPlayer* UEpicBaseStreamingVideo::GetMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "GetMediaPlayer");

	Params::EpicBaseStreamingVideo_GetMediaPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMediaPlayerOptions UEpicBaseStreamingVideo::GetMediaPlayerOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "GetMediaPlayerOptions");

	Params::EpicBaseStreamingVideo_GetMediaPlayerOptions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UEpicStreamMediaSource* UEpicBaseStreamingVideo::GetMediaSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "GetMediaSource");

	Params::EpicBaseStreamingVideo_GetMediaSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEpicBaseStreamingVideo::HandleLicensedAudioTreatmentChanged(EUCPTypes UCPType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleLicensedAudioTreatmentChanged");

	Params::EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged Parms{};

	Parms.UCPType = UCPType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::HandleMediaClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaClosed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::HandleMediaOpenedFailed(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaOpenedFailed");

	Params::EpicBaseStreamingVideo_HandleMediaOpenedFailed Parms{};

	Parms.FailedUrl = std::move(FailedUrl);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::HandleMediaPlayerPlaybackResumed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "HandleMediaPlayerPlaybackResumed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UEpicBaseStreamingVideo::Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "Init");

	Params::EpicBaseStreamingVideo_Init Parms{};

	Parms.InVideoTexture = InVideoTexture;
	Parms.InMediaPlayer = InMediaPlayer;
	Parms.InMediaSource = InMediaSource;
	Parms.InCDNFailover = InCDNFailover;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEpicBaseStreamingVideo::OnFailedURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "OnFailedURL");

	Params::EpicBaseStreamingVideo_OnFailedURL Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::OnSuccessfulURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "OnSuccessfulURL");

	Params::EpicBaseStreamingVideo_OnSuccessfulURL Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UEpicBaseStreamingVideo::Open(const struct FMediaPlayerOptions& InMediaOptions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "Open");

	Params::EpicBaseStreamingVideo_Open Parms{};

	Parms.InMediaOptions = std::move(InMediaOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEpicBaseStreamingVideo::Release()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "Release");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::RetryOnError(bool bFromPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "RetryOnError");

	Params::EpicBaseStreamingVideo_RetryOnError Parms{};

	Parms.bFromPlayer = bFromPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "SetSoundSubmixes");

	Params::EpicBaseStreamingVideo_SetSoundSubmixes Parms{};

	Parms.InSoundComponent = InSoundComponent;
	Parms.InDefault = InDefault;
	Parms.InLicensed = InLicensed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::SetVideoSize(const int32 Width, const int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "SetVideoSize");

	Params::EpicBaseStreamingVideo_SetVideoSize Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::Start(const class FString& InVUID, class UMediaTexture* InVideoTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "Start");

	Params::EpicBaseStreamingVideo_Start Parms{};

	Parms.InVUID = std::move(InVUID);
	Parms.InVideoTexture = InVideoTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicBaseStreamingVideo::Stop(bool bRelease)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicBaseStreamingVideo", "Stop");

	Params::EpicBaseStreamingVideo_Stop Parms{};

	Parms.bRelease = bRelease;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
