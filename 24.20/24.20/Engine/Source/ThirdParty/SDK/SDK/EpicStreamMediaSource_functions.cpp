#pragma once

#include "Basic.hpp"

#include "EpicStreamMediaSource_classes.hpp"
#include "EpicStreamMediaSource_parameters.hpp"

namespace SDK
{

void UEpicStreamMediaSource::CancelVideoUrlRequest(bool bInCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "CancelVideoUrlRequest");

	Params::EpicStreamMediaSource_CancelVideoUrlRequest Parms{};

	Parms.bInCancelled = bInCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicStreamMediaSource::DisableSharing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "DisableSharing");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UEpicStreamMediaSource::IsScreenRecordingInProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "IsScreenRecordingInProgress");

	Params::EpicStreamMediaSource_IsScreenRecordingInProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEpicStreamMediaSource::MetadataResultHandler(const struct FEpicMediaMetadataExt& MetaData, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "MetadataResultHandler");

	Params::EpicStreamMediaSource_MetadataResultHandler Parms{};

	Parms.MetaData = std::move(MetaData);
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicStreamMediaSource::ReinstateSharing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "ReinstateSharing");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UEpicStreamMediaSource::RequestVideoUrl(const class APlayerController* FortPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "RequestVideoUrl");

	Params::EpicStreamMediaSource_RequestVideoUrl Parms{};

	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicStreamMediaSource::SetLocalizedOverlaysV2(class UEpicMediaDownloadLocalizedOverlays* InOverlays)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetLocalizedOverlaysV2");

	Params::EpicStreamMediaSource_SetLocalizedOverlaysV2 Parms{};

	Parms.InOverlays = InOverlays;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicStreamMediaSource::SetPlaybackStartTime(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetPlaybackStartTime");

	Params::EpicStreamMediaSource_SetPlaybackStartTime Parms{};

	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UEpicStreamMediaSource::SetUrl(class FString& InURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "SetUrl");

	Params::EpicStreamMediaSource_SetUrl Parms{};

	Parms.InURL = std::move(InURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InURL = std::move(Parms.InURL);
}

EUCPTypes UEpicStreamMediaSource::ShouldProtectPlayerFromContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "ShouldProtectPlayerFromContent");

	Params::EpicStreamMediaSource_ShouldProtectPlayerFromContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEpicStreamMediaSource::HasLocalFilePlayback() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "HasLocalFilePlayback");

	Params::EpicStreamMediaSource_HasLocalFilePlayback Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEpicStreamMediaSource::ShouldStreamBePlaying(const class UObject* WorldContextObject, const class UPrimitiveComponent* PrimitiveComponent, float CullRadius) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "ShouldStreamBePlaying");

	Params::EpicStreamMediaSource_ShouldStreamBePlaying Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PrimitiveComponent = PrimitiveComponent;
	Parms.CullRadius = CullRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMediaPlayerOptions UEpicStreamMediaSource::UpdatePlayerOptions(const struct FMediaPlayerOptions& PlayerOptions) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicStreamMediaSource", "UpdatePlayerOptions");

	Params::EpicStreamMediaSource_UpdatePlayerOptions Parms{};

	Parms.PlayerOptions = std::move(PlayerOptions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
