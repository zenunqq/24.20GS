#pragma once

#include "Basic.hpp"

#include "PictureInPictureCore_classes.hpp"
#include "PictureInPictureCore_parameters.hpp"

namespace SDK
{

void UPictureInPictureClient::BeginLogin(class UObject* InWorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "BeginLogin");

	Params::PictureInPictureClient_BeginLogin Parms{};

	Parms.InWorldContext = InWorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureClient::CheckLogin(class UObject* InWorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "CheckLogin");

	Params::PictureInPictureClient_CheckLogin Parms{};

	Parms.InWorldContext = InWorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureClient::EndLogin(class UObject* InWorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "EndLogin");

	Params::PictureInPictureClient_EndLogin Parms{};

	Parms.InWorldContext = InWorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UEpicCMSImage* UPictureInPictureClient::GetAvatarImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "GetAvatarImage");

	Params::PictureInPictureClient_GetAvatarImage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const EPictureInPictureAuthState UPictureInPictureClient::GetLoginState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "GetLoginState");

	Params::PictureInPictureClient_GetLoginState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTexture2DDynamic* UPictureInPictureClient::GetQRCodeTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "GetQRCodeTexture");

	Params::PictureInPictureClient_GetQRCodeTexture Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPictureInPictureClient::IsLoggedIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "IsLoggedIn");

	Params::PictureInPictureClient_IsLoggedIn Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPictureClient::Logout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureClient", "Logout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureCheatManager::CanEnablePartnerPIP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureCheatManager", "CanEnablePartnerPIP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureCheatManager::DisablePiP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureCheatManager", "DisablePiP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureCheatManager::EnablePiP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureCheatManager", "EnablePiP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureCheatManager::PrintPiPRegionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureCheatManager", "PrintPiPRegionInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureCheatManager::ResumePiP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureCheatManager", "ResumePiP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureCheatManager::SuspendPiP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureCheatManager", "SuspendPiP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::Exit(bool bStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "Exit");

	Params::PictureInPictureMediaController_Exit Parms{};

	Parms.bStop = bStop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class UPictureInPictureActionData*> UPictureInPictureMediaController::GetActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetActions");

	Params::PictureInPictureMediaController_GetActions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FPiPPartnerSource UPictureInPictureMediaController::GetCurrentSource()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetCurrentSource");

	Params::PictureInPictureMediaController_GetCurrentSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FPiPPartnerSource> UPictureInPictureMediaController::GetSources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetSources");

	Params::PictureInPictureMediaController_GetSources Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FPiPPartnerSource> UPictureInPictureMediaController::GetValidSources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetValidSources");

	Params::PictureInPictureMediaController_GetValidSources Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPictureMediaController::HandleSourceSelectedEvent(const class FString& SelectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "HandleSourceSelectedEvent");

	Params::PictureInPictureMediaController_HandleSourceSelectedEvent Parms{};

	Parms.SelectedSource = std::move(SelectedSource);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UPictureInPictureMediaController::IsMultiSourceSupported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "IsMultiSourceSupported");

	Params::PictureInPictureMediaController_IsMultiSourceSupported Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPictureInPictureMediaController::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "IsPaused");

	Params::PictureInPictureMediaController_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPictureInPictureMediaController::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "IsPlaying");

	Params::PictureInPictureMediaController_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPictureMediaController::OnMediaClosedAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaClosedAnalytics");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::OnMediaPausedAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaPausedAnalytics");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::OnMediaResumedAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaResumedAnalytics");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::OnMediaStartedAnalytics()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "OnMediaStartedAnalytics");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::OnNextThumbnailReceived(class UTexture2DDynamic* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "OnNextThumbnailReceived");

	Params::PictureInPictureMediaController_OnNextThumbnailReceived Parms{};

	Parms.InTexture = InTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::OnPrevThumbnailReceived(class UTexture2DDynamic* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "OnPrevThumbnailReceived");

	Params::PictureInPictureMediaController_OnPrevThumbnailReceived Parms{};

	Parms.InTexture = InTexture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::Play(bool bForcePlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "Play");

	Params::PictureInPictureMediaController_Play Parms{};

	Parms.bForcePlay = bForcePlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::SetCurrentSource(const struct FPiPPartnerSource& SelectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "SetCurrentSource");

	Params::PictureInPictureMediaController_SetCurrentSource Parms{};

	Parms.SelectedSource = std::move(SelectedSource);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::SetEnabled(bool bIsEnabled, bool bIsFromUser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "SetEnabled");

	Params::PictureInPictureMediaController_SetEnabled Parms{};

	Parms.bIsEnabled = bIsEnabled;
	Parms.bIsFromUser = bIsFromUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureMediaController::ToggleFullScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "ToggleFullScreen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const struct FPIPVideoPlayerAssetConfig UPictureInPictureMediaController::GetDefaultPlayerAssetConfig() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetDefaultPlayerAssetConfig");

	Params::PictureInPictureMediaController_GetDefaultPlayerAssetConfig Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPicturePlayer* UPictureInPictureMediaController::GetMediaPlayerWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetMediaPlayerWidget");

	Params::PictureInPictureMediaController_GetMediaPlayerWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FPIPVideoPlayerAssetConfig UPictureInPictureMediaController::GetPlayerAssetConfig() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "GetPlayerAssetConfig");

	Params::PictureInPictureMediaController_GetPlayerAssetConfig Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPictureInPictureMediaController::IsEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureMediaController", "IsEnabled");

	Params::PictureInPictureMediaController_IsEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPicturePlayer::FlushPlayerAssetConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "FlushPlayerAssetConfig");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePlayer::HandleUCPAudioChanged(class UFortClientSettingsRecord* Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "HandleUCPAudioChanged");

	Params::PictureInPicturePlayer_HandleUCPAudioChanged Parms{};

	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UPictureInPicturePlayer::IsAssetConfigSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "IsAssetConfigSet");

	Params::PictureInPicturePlayer_IsAssetConfigSet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UPictureInPicturePlayer::SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "SetPlayerAssetConfig");

	Params::PictureInPicturePlayer_SetPlayerAssetConfig Parms{};

	Parms.InAssetConfig = std::move(InAssetConfig);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InAssetConfig = std::move(Parms.InAssetConfig);

	return Parms.ReturnValue;
}

void UPictureInPicturePlayer::StreamedVideoOnUrlFailure(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "StreamedVideoOnUrlFailure");

	Params::PictureInPicturePlayer_StreamedVideoOnUrlFailure Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePlayer::StreamedVideoOnUrlSuccess(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "StreamedVideoOnUrlSuccess");

	Params::PictureInPicturePlayer_StreamedVideoOnUrlSuccess Parms{};

	Parms.URL = std::move(URL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPicturePlayer::UpdateStreamingPlayerSize(const struct FVector2D& InVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPicturePlayer", "UpdateStreamingPlayerSize");

	Params::PictureInPicturePlayer_UpdateStreamingPlayerSize Parms{};

	Parms.InVector = std::move(InVector);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::EnableFullScreenPiPOption(const bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "EnableFullScreenPiPOption");

	Params::PictureInPictureSubsystem_EnableFullScreenPiPOption Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UPictureInPictureSubsystem::GetAutoEnableSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetAutoEnableSetting");

	Params::PictureInPictureSubsystem_GetAutoEnableSetting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPictureClient* UPictureInPictureSubsystem::GetCurrentPartnerClient()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerClient");

	Params::PictureInPictureSubsystem_GetCurrentPartnerClient Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPictureMediaController* UPictureInPictureSubsystem::GetCurrentPartnerController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerController");

	Params::PictureInPictureSubsystem_GetCurrentPartnerController Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPicturePartnerControls* UPictureInPictureSubsystem::GetCurrentPartnerControls()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerControls");

	Params::PictureInPictureSubsystem_GetCurrentPartnerControls Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPicturePartnerDataAsset* UPictureInPictureSubsystem::GetCurrentPartnerItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetCurrentPartnerItem");

	Params::PictureInPictureSubsystem_GetCurrentPartnerItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPictureSubsystem::GetLastUsedPartner(class FString* OutPartnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetLastUsedPartner");

	Params::PictureInPictureSubsystem_GetLastUsedPartner Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPartnerName != nullptr)
		*OutPartnerName = std::move(Parms.OutPartnerName);
}

void UPictureInPictureSubsystem::GetLastUsedSource(class FString* OutPartnerSourceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetLastUsedSource");

	Params::PictureInPictureSubsystem_GetLastUsedSource Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPartnerSourceName != nullptr)
		*OutPartnerSourceName = std::move(Parms.OutPartnerSourceName);
}

class UPictureInPictureClient* UPictureInPictureSubsystem::GetPartnerClient(const class FString& PartnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerClient");

	Params::PictureInPictureSubsystem_GetPartnerClient Parms{};

	Parms.PartnerName = std::move(PartnerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPictureMediaController* UPictureInPictureSubsystem::GetPartnerController(const class FString& PartnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerController");

	Params::PictureInPictureSubsystem_GetPartnerController Parms{};

	Parms.PartnerName = std::move(PartnerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPicturePartnerControls* UPictureInPictureSubsystem::GetPartnerControls(const class FString& PartnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerControls");

	Params::PictureInPictureSubsystem_GetPartnerControls Parms{};

	Parms.PartnerName = std::move(PartnerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPictureInPicturePartnerDataAsset* UPictureInPictureSubsystem::GetPartnerItem(const class FString& PartnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerItem");

	Params::PictureInPictureSubsystem_GetPartnerItem Parms{};

	Parms.PartnerName = std::move(PartnerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UPictureInPicturePartnerDataAsset*> UPictureInPictureSubsystem::GetPartnerItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "GetPartnerItemList");

	Params::PictureInPictureSubsystem_GetPartnerItemList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPictureSubsystem::HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "HandleFNEventsSetCurrentMediaControllerEnabled");

	Params::PictureInPictureSubsystem_HandleFNEventsSetCurrentMediaControllerEnabled Parms{};

	Parms.InEnabled = InEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::HandleMediaSourceRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "HandleMediaSourceRequest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UPictureInPictureSubsystem::IsPartnerListUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "IsPartnerListUpdated");

	Params::PictureInPictureSubsystem_IsPartnerListUpdated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPictureInPictureSubsystem::OnCMSEventInvalid(const class UMediaCMSEvent* InvalidEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "OnCMSEventInvalid");

	Params::PictureInPictureSubsystem_OnCMSEventInvalid Parms{};

	Parms.InvalidEvent = InvalidEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::OnCMSEventValid(const class UMediaCMSEvent* ValidEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "OnCMSEventValid");

	Params::PictureInPictureSubsystem_OnCMSEventValid Parms{};

	Parms.ValidEvent = ValidEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::OnCurrentPartnerSourceSelected(const struct FPiPPartnerSource& SelectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "OnCurrentPartnerSourceSelected");

	Params::PictureInPictureSubsystem_OnCurrentPartnerSourceSelected Parms{};

	Parms.SelectedSource = std::move(SelectedSource);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::ResumeCurrentMediaController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "ResumeCurrentMediaController");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::ShutdownAllPartners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "ShutdownAllPartners");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::StoreAutoEnableSetting(bool InUserEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "StoreAutoEnableSetting");

	Params::PictureInPictureSubsystem_StoreAutoEnableSetting Parms{};

	Parms.InUserEnabled = InUserEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::StoreLastUsedPartner(const class FString& InPartnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "StoreLastUsedPartner");

	Params::PictureInPictureSubsystem_StoreLastUsedPartner Parms{};

	Parms.InPartnerName = std::move(InPartnerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::StoreLastUsedSource(const class FString& InPartnerSourceName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "StoreLastUsedSource");

	Params::PictureInPictureSubsystem_StoreLastUsedSource Parms{};

	Parms.InPartnerSourceName = std::move(InPartnerSourceName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::SuspendCurrentMediaController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "SuspendCurrentMediaController");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::ToggleFullScreenPiP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "ToggleFullScreenPiP");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPictureInPictureSubsystem::UpdatePartnerItemList(class UObject* InWorldContext, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureInPictureSubsystem", "UpdatePartnerItemList");

	Params::PictureInPictureSubsystem_UpdatePartnerItemList Parms{};

	Parms.InWorldContext = InWorldContext;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
