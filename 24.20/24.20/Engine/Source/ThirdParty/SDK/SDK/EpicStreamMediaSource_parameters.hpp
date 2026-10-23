#pragma once

#include "Basic.hpp"

#include "EpicStreamMediaSource_structs.hpp"
#include "MediaUtils_structs.hpp"
#include "EpicMediaUtilities_structs.hpp"

namespace SDK::Params
{

struct EpicStreamMediaSource_CancelVideoUrlRequest final
{
public:
	bool                                          bInCancelled;
};
static_assert(alignof(EpicStreamMediaSource_CancelVideoUrlRequest) == 0x000001, "Wrong alignment on EpicStreamMediaSource_CancelVideoUrlRequest");
static_assert(sizeof(EpicStreamMediaSource_CancelVideoUrlRequest) == 0x000001, "Wrong size on EpicStreamMediaSource_CancelVideoUrlRequest");
static_assert(offsetof(EpicStreamMediaSource_CancelVideoUrlRequest, bInCancelled) == 0x000000, "Member 'EpicStreamMediaSource_CancelVideoUrlRequest::bInCancelled' has a wrong offset!");

struct EpicStreamMediaSource_IsScreenRecordingInProgress final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(EpicStreamMediaSource_IsScreenRecordingInProgress) == 0x000001, "Wrong alignment on EpicStreamMediaSource_IsScreenRecordingInProgress");
static_assert(sizeof(EpicStreamMediaSource_IsScreenRecordingInProgress) == 0x000001, "Wrong size on EpicStreamMediaSource_IsScreenRecordingInProgress");
static_assert(offsetof(EpicStreamMediaSource_IsScreenRecordingInProgress, ReturnValue) == 0x000000, "Member 'EpicStreamMediaSource_IsScreenRecordingInProgress::ReturnValue' has a wrong offset!");

struct EpicStreamMediaSource_MetadataResultHandler final
{
public:
	struct FEpicMediaMetadataExt                  MetaData;
	bool                                          bSuccess;
	uint8                                         Pad_139[0x7];
};
static_assert(alignof(EpicStreamMediaSource_MetadataResultHandler) == 0x000008, "Wrong alignment on EpicStreamMediaSource_MetadataResultHandler");
static_assert(sizeof(EpicStreamMediaSource_MetadataResultHandler) == 0x000140, "Wrong size on EpicStreamMediaSource_MetadataResultHandler");
static_assert(offsetof(EpicStreamMediaSource_MetadataResultHandler, MetaData) == 0x000000, "Member 'EpicStreamMediaSource_MetadataResultHandler::MetaData' has a wrong offset!");
static_assert(offsetof(EpicStreamMediaSource_MetadataResultHandler, bSuccess) == 0x000138, "Member 'EpicStreamMediaSource_MetadataResultHandler::bSuccess' has a wrong offset!");

struct EpicStreamMediaSource_RequestVideoUrl final
{
public:
	const class APlayerController*                FortPC;
};
static_assert(alignof(EpicStreamMediaSource_RequestVideoUrl) == 0x000008, "Wrong alignment on EpicStreamMediaSource_RequestVideoUrl");
static_assert(sizeof(EpicStreamMediaSource_RequestVideoUrl) == 0x000008, "Wrong size on EpicStreamMediaSource_RequestVideoUrl");
static_assert(offsetof(EpicStreamMediaSource_RequestVideoUrl, FortPC) == 0x000000, "Member 'EpicStreamMediaSource_RequestVideoUrl::FortPC' has a wrong offset!");

struct EpicStreamMediaSource_SetLocalizedOverlaysV2 final
{
public:
	class UEpicMediaDownloadLocalizedOverlays*    InOverlays;
};
static_assert(alignof(EpicStreamMediaSource_SetLocalizedOverlaysV2) == 0x000008, "Wrong alignment on EpicStreamMediaSource_SetLocalizedOverlaysV2");
static_assert(sizeof(EpicStreamMediaSource_SetLocalizedOverlaysV2) == 0x000008, "Wrong size on EpicStreamMediaSource_SetLocalizedOverlaysV2");
static_assert(offsetof(EpicStreamMediaSource_SetLocalizedOverlaysV2, InOverlays) == 0x000000, "Member 'EpicStreamMediaSource_SetLocalizedOverlaysV2::InOverlays' has a wrong offset!");

struct EpicStreamMediaSource_SetPlaybackStartTime final
{
public:
	float                                         StartTime;
};
static_assert(alignof(EpicStreamMediaSource_SetPlaybackStartTime) == 0x000004, "Wrong alignment on EpicStreamMediaSource_SetPlaybackStartTime");
static_assert(sizeof(EpicStreamMediaSource_SetPlaybackStartTime) == 0x000004, "Wrong size on EpicStreamMediaSource_SetPlaybackStartTime");
static_assert(offsetof(EpicStreamMediaSource_SetPlaybackStartTime, StartTime) == 0x000000, "Member 'EpicStreamMediaSource_SetPlaybackStartTime::StartTime' has a wrong offset!");

struct EpicStreamMediaSource_SetUrl final
{
public:
	class FString                                 InURL;
};
static_assert(alignof(EpicStreamMediaSource_SetUrl) == 0x000008, "Wrong alignment on EpicStreamMediaSource_SetUrl");
static_assert(sizeof(EpicStreamMediaSource_SetUrl) == 0x000010, "Wrong size on EpicStreamMediaSource_SetUrl");
static_assert(offsetof(EpicStreamMediaSource_SetUrl, InURL) == 0x000000, "Member 'EpicStreamMediaSource_SetUrl::InURL' has a wrong offset!");

struct EpicStreamMediaSource_ShouldProtectPlayerFromContent final
{
public:
	EUCPTypes                                     ReturnValue;
};
static_assert(alignof(EpicStreamMediaSource_ShouldProtectPlayerFromContent) == 0x000001, "Wrong alignment on EpicStreamMediaSource_ShouldProtectPlayerFromContent");
static_assert(sizeof(EpicStreamMediaSource_ShouldProtectPlayerFromContent) == 0x000001, "Wrong size on EpicStreamMediaSource_ShouldProtectPlayerFromContent");
static_assert(offsetof(EpicStreamMediaSource_ShouldProtectPlayerFromContent, ReturnValue) == 0x000000, "Member 'EpicStreamMediaSource_ShouldProtectPlayerFromContent::ReturnValue' has a wrong offset!");

struct EpicStreamMediaSource_HasLocalFilePlayback final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(EpicStreamMediaSource_HasLocalFilePlayback) == 0x000001, "Wrong alignment on EpicStreamMediaSource_HasLocalFilePlayback");
static_assert(sizeof(EpicStreamMediaSource_HasLocalFilePlayback) == 0x000001, "Wrong size on EpicStreamMediaSource_HasLocalFilePlayback");
static_assert(offsetof(EpicStreamMediaSource_HasLocalFilePlayback, ReturnValue) == 0x000000, "Member 'EpicStreamMediaSource_HasLocalFilePlayback::ReturnValue' has a wrong offset!");

struct EpicStreamMediaSource_ShouldStreamBePlaying final
{
public:
	const class UObject*                          WorldContextObject;
	const class UPrimitiveComponent*              PrimitiveComponent;
	float                                         CullRadius;
	bool                                          ReturnValue;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(EpicStreamMediaSource_ShouldStreamBePlaying) == 0x000008, "Wrong alignment on EpicStreamMediaSource_ShouldStreamBePlaying");
static_assert(sizeof(EpicStreamMediaSource_ShouldStreamBePlaying) == 0x000018, "Wrong size on EpicStreamMediaSource_ShouldStreamBePlaying");
static_assert(offsetof(EpicStreamMediaSource_ShouldStreamBePlaying, WorldContextObject) == 0x000000, "Member 'EpicStreamMediaSource_ShouldStreamBePlaying::WorldContextObject' has a wrong offset!");
static_assert(offsetof(EpicStreamMediaSource_ShouldStreamBePlaying, PrimitiveComponent) == 0x000008, "Member 'EpicStreamMediaSource_ShouldStreamBePlaying::PrimitiveComponent' has a wrong offset!");
static_assert(offsetof(EpicStreamMediaSource_ShouldStreamBePlaying, CullRadius) == 0x000010, "Member 'EpicStreamMediaSource_ShouldStreamBePlaying::CullRadius' has a wrong offset!");
static_assert(offsetof(EpicStreamMediaSource_ShouldStreamBePlaying, ReturnValue) == 0x000014, "Member 'EpicStreamMediaSource_ShouldStreamBePlaying::ReturnValue' has a wrong offset!");

struct EpicStreamMediaSource_UpdatePlayerOptions final
{
public:
	struct FMediaPlayerOptions                    PlayerOptions;
	struct FMediaPlayerOptions                    ReturnValue;
};
static_assert(alignof(EpicStreamMediaSource_UpdatePlayerOptions) == 0x000008, "Wrong alignment on EpicStreamMediaSource_UpdatePlayerOptions");
static_assert(sizeof(EpicStreamMediaSource_UpdatePlayerOptions) == 0x000060, "Wrong size on EpicStreamMediaSource_UpdatePlayerOptions");
static_assert(offsetof(EpicStreamMediaSource_UpdatePlayerOptions, PlayerOptions) == 0x000000, "Member 'EpicStreamMediaSource_UpdatePlayerOptions::PlayerOptions' has a wrong offset!");
static_assert(offsetof(EpicStreamMediaSource_UpdatePlayerOptions, ReturnValue) == 0x000030, "Member 'EpicStreamMediaSource_UpdatePlayerOptions::ReturnValue' has a wrong offset!");

}
