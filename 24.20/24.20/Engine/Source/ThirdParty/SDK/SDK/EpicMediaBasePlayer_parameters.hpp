#pragma once

#include "Basic.hpp"

#include "EpicStreamMediaSource_structs.hpp"
#include "MediaUtils_structs.hpp"

namespace SDK::Params
{

struct EpicBaseStreamingVideo_GetMediaPlayer final
{
public:
	class UMediaPlayer*                           ReturnValue;
};
static_assert(alignof(EpicBaseStreamingVideo_GetMediaPlayer) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_GetMediaPlayer");
static_assert(sizeof(EpicBaseStreamingVideo_GetMediaPlayer) == 0x000008, "Wrong size on EpicBaseStreamingVideo_GetMediaPlayer");
static_assert(offsetof(EpicBaseStreamingVideo_GetMediaPlayer, ReturnValue) == 0x000000, "Member 'EpicBaseStreamingVideo_GetMediaPlayer::ReturnValue' has a wrong offset!");

struct EpicBaseStreamingVideo_GetMediaPlayerOptions final
{
public:
	struct FMediaPlayerOptions                    ReturnValue;
};
static_assert(alignof(EpicBaseStreamingVideo_GetMediaPlayerOptions) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_GetMediaPlayerOptions");
static_assert(sizeof(EpicBaseStreamingVideo_GetMediaPlayerOptions) == 0x000030, "Wrong size on EpicBaseStreamingVideo_GetMediaPlayerOptions");
static_assert(offsetof(EpicBaseStreamingVideo_GetMediaPlayerOptions, ReturnValue) == 0x000000, "Member 'EpicBaseStreamingVideo_GetMediaPlayerOptions::ReturnValue' has a wrong offset!");

struct EpicBaseStreamingVideo_GetMediaSource final
{
public:
	class UEpicStreamMediaSource*                 ReturnValue;
};
static_assert(alignof(EpicBaseStreamingVideo_GetMediaSource) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_GetMediaSource");
static_assert(sizeof(EpicBaseStreamingVideo_GetMediaSource) == 0x000008, "Wrong size on EpicBaseStreamingVideo_GetMediaSource");
static_assert(offsetof(EpicBaseStreamingVideo_GetMediaSource, ReturnValue) == 0x000000, "Member 'EpicBaseStreamingVideo_GetMediaSource::ReturnValue' has a wrong offset!");

struct EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged final
{
public:
	EUCPTypes                                     UCPType;
};
static_assert(alignof(EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged) == 0x000001, "Wrong alignment on EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged");
static_assert(sizeof(EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged) == 0x000001, "Wrong size on EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged");
static_assert(offsetof(EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged, UCPType) == 0x000000, "Member 'EpicBaseStreamingVideo_HandleLicensedAudioTreatmentChanged::UCPType' has a wrong offset!");

struct EpicBaseStreamingVideo_HandleMediaOpenedFailed final
{
public:
	class FString                                 FailedUrl;
};
static_assert(alignof(EpicBaseStreamingVideo_HandleMediaOpenedFailed) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_HandleMediaOpenedFailed");
static_assert(sizeof(EpicBaseStreamingVideo_HandleMediaOpenedFailed) == 0x000010, "Wrong size on EpicBaseStreamingVideo_HandleMediaOpenedFailed");
static_assert(offsetof(EpicBaseStreamingVideo_HandleMediaOpenedFailed, FailedUrl) == 0x000000, "Member 'EpicBaseStreamingVideo_HandleMediaOpenedFailed::FailedUrl' has a wrong offset!");

struct EpicBaseStreamingVideo_Init final
{
public:
	class UMediaTexture*                          InVideoTexture;
	class UMediaPlayer*                           InMediaPlayer;
	class UEpicStreamMediaSource*                 InMediaSource;
	bool                                          InCDNFailover;
	bool                                          ReturnValue;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(EpicBaseStreamingVideo_Init) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_Init");
static_assert(sizeof(EpicBaseStreamingVideo_Init) == 0x000020, "Wrong size on EpicBaseStreamingVideo_Init");
static_assert(offsetof(EpicBaseStreamingVideo_Init, InVideoTexture) == 0x000000, "Member 'EpicBaseStreamingVideo_Init::InVideoTexture' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_Init, InMediaPlayer) == 0x000008, "Member 'EpicBaseStreamingVideo_Init::InMediaPlayer' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_Init, InMediaSource) == 0x000010, "Member 'EpicBaseStreamingVideo_Init::InMediaSource' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_Init, InCDNFailover) == 0x000018, "Member 'EpicBaseStreamingVideo_Init::InCDNFailover' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_Init, ReturnValue) == 0x000019, "Member 'EpicBaseStreamingVideo_Init::ReturnValue' has a wrong offset!");

struct EpicBaseStreamingVideo_OnFailedURL final
{
public:
	class FString                                 URL;
};
static_assert(alignof(EpicBaseStreamingVideo_OnFailedURL) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_OnFailedURL");
static_assert(sizeof(EpicBaseStreamingVideo_OnFailedURL) == 0x000010, "Wrong size on EpicBaseStreamingVideo_OnFailedURL");
static_assert(offsetof(EpicBaseStreamingVideo_OnFailedURL, URL) == 0x000000, "Member 'EpicBaseStreamingVideo_OnFailedURL::URL' has a wrong offset!");

struct EpicBaseStreamingVideo_OnSuccessfulURL final
{
public:
	class FString                                 URL;
};
static_assert(alignof(EpicBaseStreamingVideo_OnSuccessfulURL) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_OnSuccessfulURL");
static_assert(sizeof(EpicBaseStreamingVideo_OnSuccessfulURL) == 0x000010, "Wrong size on EpicBaseStreamingVideo_OnSuccessfulURL");
static_assert(offsetof(EpicBaseStreamingVideo_OnSuccessfulURL, URL) == 0x000000, "Member 'EpicBaseStreamingVideo_OnSuccessfulURL::URL' has a wrong offset!");

struct EpicBaseStreamingVideo_Open final
{
public:
	struct FMediaPlayerOptions                    InMediaOptions;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(EpicBaseStreamingVideo_Open) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_Open");
static_assert(sizeof(EpicBaseStreamingVideo_Open) == 0x000038, "Wrong size on EpicBaseStreamingVideo_Open");
static_assert(offsetof(EpicBaseStreamingVideo_Open, InMediaOptions) == 0x000000, "Member 'EpicBaseStreamingVideo_Open::InMediaOptions' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_Open, ReturnValue) == 0x000030, "Member 'EpicBaseStreamingVideo_Open::ReturnValue' has a wrong offset!");

struct EpicBaseStreamingVideo_RetryOnError final
{
public:
	bool                                          bFromPlayer;
};
static_assert(alignof(EpicBaseStreamingVideo_RetryOnError) == 0x000001, "Wrong alignment on EpicBaseStreamingVideo_RetryOnError");
static_assert(sizeof(EpicBaseStreamingVideo_RetryOnError) == 0x000001, "Wrong size on EpicBaseStreamingVideo_RetryOnError");
static_assert(offsetof(EpicBaseStreamingVideo_RetryOnError, bFromPlayer) == 0x000000, "Member 'EpicBaseStreamingVideo_RetryOnError::bFromPlayer' has a wrong offset!");

struct EpicBaseStreamingVideo_SetSoundSubmixes final
{
public:
	class UMediaSoundComponent*                   InSoundComponent;
	class USoundSubmixBase*                       InDefault;
	class USoundSubmixBase*                       InLicensed;
};
static_assert(alignof(EpicBaseStreamingVideo_SetSoundSubmixes) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_SetSoundSubmixes");
static_assert(sizeof(EpicBaseStreamingVideo_SetSoundSubmixes) == 0x000018, "Wrong size on EpicBaseStreamingVideo_SetSoundSubmixes");
static_assert(offsetof(EpicBaseStreamingVideo_SetSoundSubmixes, InSoundComponent) == 0x000000, "Member 'EpicBaseStreamingVideo_SetSoundSubmixes::InSoundComponent' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_SetSoundSubmixes, InDefault) == 0x000008, "Member 'EpicBaseStreamingVideo_SetSoundSubmixes::InDefault' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_SetSoundSubmixes, InLicensed) == 0x000010, "Member 'EpicBaseStreamingVideo_SetSoundSubmixes::InLicensed' has a wrong offset!");

struct EpicBaseStreamingVideo_SetVideoSize final
{
public:
	int32                                         Width;
	int32                                         Height;
};
static_assert(alignof(EpicBaseStreamingVideo_SetVideoSize) == 0x000004, "Wrong alignment on EpicBaseStreamingVideo_SetVideoSize");
static_assert(sizeof(EpicBaseStreamingVideo_SetVideoSize) == 0x000008, "Wrong size on EpicBaseStreamingVideo_SetVideoSize");
static_assert(offsetof(EpicBaseStreamingVideo_SetVideoSize, Width) == 0x000000, "Member 'EpicBaseStreamingVideo_SetVideoSize::Width' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_SetVideoSize, Height) == 0x000004, "Member 'EpicBaseStreamingVideo_SetVideoSize::Height' has a wrong offset!");

struct EpicBaseStreamingVideo_Start final
{
public:
	class FString                                 InVUID;
	class UMediaTexture*                          InVideoTexture;
};
static_assert(alignof(EpicBaseStreamingVideo_Start) == 0x000008, "Wrong alignment on EpicBaseStreamingVideo_Start");
static_assert(sizeof(EpicBaseStreamingVideo_Start) == 0x000018, "Wrong size on EpicBaseStreamingVideo_Start");
static_assert(offsetof(EpicBaseStreamingVideo_Start, InVUID) == 0x000000, "Member 'EpicBaseStreamingVideo_Start::InVUID' has a wrong offset!");
static_assert(offsetof(EpicBaseStreamingVideo_Start, InVideoTexture) == 0x000010, "Member 'EpicBaseStreamingVideo_Start::InVideoTexture' has a wrong offset!");

struct EpicBaseStreamingVideo_Stop final
{
public:
	bool                                          bRelease;
};
static_assert(alignof(EpicBaseStreamingVideo_Stop) == 0x000001, "Wrong alignment on EpicBaseStreamingVideo_Stop");
static_assert(sizeof(EpicBaseStreamingVideo_Stop) == 0x000001, "Wrong size on EpicBaseStreamingVideo_Stop");
static_assert(offsetof(EpicBaseStreamingVideo_Stop, bRelease) == 0x000000, "Member 'EpicBaseStreamingVideo_Stop::bRelease' has a wrong offset!");

}
