#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FEpicMediaImageDataExt
{
public:
	class FString                                 URL;
	class FString                                 FullUrl;
	int32                                         Width;
	int32                                         Height;
	float                                         AspectRatio;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FEpicMediaImageDataExt) == 0x000008, "Wrong alignment on FEpicMediaImageDataExt");
static_assert(sizeof(FEpicMediaImageDataExt) == 0x000030, "Wrong size on FEpicMediaImageDataExt");
static_assert(offsetof(FEpicMediaImageDataExt, URL) == 0x000000, "Member 'FEpicMediaImageDataExt::URL' has a wrong offset!");
static_assert(offsetof(FEpicMediaImageDataExt, FullUrl) == 0x000010, "Member 'FEpicMediaImageDataExt::FullUrl' has a wrong offset!");
static_assert(offsetof(FEpicMediaImageDataExt, Width) == 0x000020, "Member 'FEpicMediaImageDataExt::Width' has a wrong offset!");
static_assert(offsetof(FEpicMediaImageDataExt, Height) == 0x000024, "Member 'FEpicMediaImageDataExt::Height' has a wrong offset!");
static_assert(offsetof(FEpicMediaImageDataExt, AspectRatio) == 0x000028, "Member 'FEpicMediaImageDataExt::AspectRatio' has a wrong offset!");

struct FEpicMediaAudioOnlyPeriodsDataExt
{
public:
	TMap<class FString, double>                   Period;
	struct FLinearColor                           Color;
	bool                                          bColorSet;
	uint8                                         Pad_61[0x7];
	class FString                                 StartKey;
	class FString                                 EndKey;
};
static_assert(alignof(FEpicMediaAudioOnlyPeriodsDataExt) == 0x000008, "Wrong alignment on FEpicMediaAudioOnlyPeriodsDataExt");
static_assert(sizeof(FEpicMediaAudioOnlyPeriodsDataExt) == 0x000088, "Wrong size on FEpicMediaAudioOnlyPeriodsDataExt");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodsDataExt, Period) == 0x000000, "Member 'FEpicMediaAudioOnlyPeriodsDataExt::Period' has a wrong offset!");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodsDataExt, Color) == 0x000050, "Member 'FEpicMediaAudioOnlyPeriodsDataExt::Color' has a wrong offset!");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodsDataExt, bColorSet) == 0x000060, "Member 'FEpicMediaAudioOnlyPeriodsDataExt::bColorSet' has a wrong offset!");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodsDataExt, StartKey) == 0x000068, "Member 'FEpicMediaAudioOnlyPeriodsDataExt::StartKey' has a wrong offset!");
static_assert(offsetof(FEpicMediaAudioOnlyPeriodsDataExt, EndKey) == 0x000078, "Member 'FEpicMediaAudioOnlyPeriodsDataExt::EndKey' has a wrong offset!");

struct FEpicMediaVolumeChangeDataExt
{
public:
	TMap<class FString, double>                   VolumeChange;
	class FString                                 FrameKey;
	class FString                                 LevelKey;
	class FString                                 LerpKey;
	uint8                                         Pad_80[0x10];
};
static_assert(alignof(FEpicMediaVolumeChangeDataExt) == 0x000008, "Wrong alignment on FEpicMediaVolumeChangeDataExt");
static_assert(sizeof(FEpicMediaVolumeChangeDataExt) == 0x000090, "Wrong size on FEpicMediaVolumeChangeDataExt");
static_assert(offsetof(FEpicMediaVolumeChangeDataExt, VolumeChange) == 0x000000, "Member 'FEpicMediaVolumeChangeDataExt::VolumeChange' has a wrong offset!");
static_assert(offsetof(FEpicMediaVolumeChangeDataExt, FrameKey) == 0x000050, "Member 'FEpicMediaVolumeChangeDataExt::FrameKey' has a wrong offset!");
static_assert(offsetof(FEpicMediaVolumeChangeDataExt, LevelKey) == 0x000060, "Member 'FEpicMediaVolumeChangeDataExt::LevelKey' has a wrong offset!");
static_assert(offsetof(FEpicMediaVolumeChangeDataExt, LerpKey) == 0x000070, "Member 'FEpicMediaVolumeChangeDataExt::LerpKey' has a wrong offset!");

struct FEpicMediaPlaylistExt
{
public:
	class FString                                 Language;
	class FString                                 Type;
	class FString                                 URL;
	class FString                                 RelUrl;
	class FString                                 Data;
	double                                        Duration;
	double                                        FPS;
	TArray<struct FEpicMediaImageDataExt>         Images;
	TArray<struct FEpicMediaAudioOnlyPeriodsDataExt> AudioOnlyPeriods;
	TArray<struct FEpicMediaVolumeChangeDataExt>  VolumeChanges;
	double                                        SkipBoundaryTime;
	double                                        PreEndEventTime;
};
static_assert(alignof(FEpicMediaPlaylistExt) == 0x000008, "Wrong alignment on FEpicMediaPlaylistExt");
static_assert(sizeof(FEpicMediaPlaylistExt) == 0x0000A0, "Wrong size on FEpicMediaPlaylistExt");
static_assert(offsetof(FEpicMediaPlaylistExt, Language) == 0x000000, "Member 'FEpicMediaPlaylistExt::Language' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, Type) == 0x000010, "Member 'FEpicMediaPlaylistExt::Type' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, URL) == 0x000020, "Member 'FEpicMediaPlaylistExt::URL' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, RelUrl) == 0x000030, "Member 'FEpicMediaPlaylistExt::RelUrl' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, Data) == 0x000040, "Member 'FEpicMediaPlaylistExt::Data' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, Duration) == 0x000050, "Member 'FEpicMediaPlaylistExt::Duration' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, FPS) == 0x000058, "Member 'FEpicMediaPlaylistExt::FPS' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, Images) == 0x000060, "Member 'FEpicMediaPlaylistExt::Images' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, AudioOnlyPeriods) == 0x000070, "Member 'FEpicMediaPlaylistExt::AudioOnlyPeriods' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, VolumeChanges) == 0x000080, "Member 'FEpicMediaPlaylistExt::VolumeChanges' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, SkipBoundaryTime) == 0x000090, "Member 'FEpicMediaPlaylistExt::SkipBoundaryTime' has a wrong offset!");
static_assert(offsetof(FEpicMediaPlaylistExt, PreEndEventTime) == 0x000098, "Member 'FEpicMediaPlaylistExt::PreEndEventTime' has a wrong offset!");

struct FEpicMediaRegionLockExt
{
public:
	bool                                          AllowOnError;
	uint8                                         Pad_1[0x7];
	class FString                                 Type;
	TArray<class FString>                         AllowList;
	TArray<class FString>                         DenyList;
	TMap<class FString, class FString>            Limits;
	class FString                                 ContentId;
	uint8                                         Pad_98[0x10];
};
static_assert(alignof(FEpicMediaRegionLockExt) == 0x000008, "Wrong alignment on FEpicMediaRegionLockExt");
static_assert(sizeof(FEpicMediaRegionLockExt) == 0x0000A8, "Wrong size on FEpicMediaRegionLockExt");
static_assert(offsetof(FEpicMediaRegionLockExt, AllowOnError) == 0x000000, "Member 'FEpicMediaRegionLockExt::AllowOnError' has a wrong offset!");
static_assert(offsetof(FEpicMediaRegionLockExt, Type) == 0x000008, "Member 'FEpicMediaRegionLockExt::Type' has a wrong offset!");
static_assert(offsetof(FEpicMediaRegionLockExt, AllowList) == 0x000018, "Member 'FEpicMediaRegionLockExt::AllowList' has a wrong offset!");
static_assert(offsetof(FEpicMediaRegionLockExt, DenyList) == 0x000028, "Member 'FEpicMediaRegionLockExt::DenyList' has a wrong offset!");
static_assert(offsetof(FEpicMediaRegionLockExt, Limits) == 0x000038, "Member 'FEpicMediaRegionLockExt::Limits' has a wrong offset!");
static_assert(offsetof(FEpicMediaRegionLockExt, ContentId) == 0x000088, "Member 'FEpicMediaRegionLockExt::ContentId' has a wrong offset!");

struct FEpicMediaMetadataExt
{
public:
	TArray<struct FEpicMediaPlaylistExt>          Playlists;
	TArray<struct FEpicMediaPlaylistExt>          SelectedPlaylists;
	class FString                                 Type;
	class FString                                 envelope;
	class FString                                 Limits;
	class FString                                 Subtitles;
	class FString                                 UserContentProtection;
	bool                                          Sharelock;
	bool                                          AudioOnly;
	uint8                                         Pad_72[0x2];
	float                                         AspectRatio;
	bool                                          PartySync;
	bool                                          Live;
	uint8                                         Pad_7A[0x6];
	class FString                                 DenyHTTPCode;
	struct FEpicMediaRegionLockExt                RegionLockData;
};
static_assert(alignof(FEpicMediaMetadataExt) == 0x000008, "Wrong alignment on FEpicMediaMetadataExt");
static_assert(sizeof(FEpicMediaMetadataExt) == 0x000138, "Wrong size on FEpicMediaMetadataExt");
static_assert(offsetof(FEpicMediaMetadataExt, Playlists) == 0x000000, "Member 'FEpicMediaMetadataExt::Playlists' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, SelectedPlaylists) == 0x000010, "Member 'FEpicMediaMetadataExt::SelectedPlaylists' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, Type) == 0x000020, "Member 'FEpicMediaMetadataExt::Type' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, envelope) == 0x000030, "Member 'FEpicMediaMetadataExt::envelope' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, Limits) == 0x000040, "Member 'FEpicMediaMetadataExt::Limits' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, Subtitles) == 0x000050, "Member 'FEpicMediaMetadataExt::Subtitles' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, UserContentProtection) == 0x000060, "Member 'FEpicMediaMetadataExt::UserContentProtection' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, Sharelock) == 0x000070, "Member 'FEpicMediaMetadataExt::Sharelock' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, AudioOnly) == 0x000071, "Member 'FEpicMediaMetadataExt::AudioOnly' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, AspectRatio) == 0x000074, "Member 'FEpicMediaMetadataExt::AspectRatio' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, PartySync) == 0x000078, "Member 'FEpicMediaMetadataExt::PartySync' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, Live) == 0x000079, "Member 'FEpicMediaMetadataExt::Live' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, DenyHTTPCode) == 0x000080, "Member 'FEpicMediaMetadataExt::DenyHTTPCode' has a wrong offset!");
static_assert(offsetof(FEpicMediaMetadataExt, RegionLockData) == 0x000090, "Member 'FEpicMediaMetadataExt::RegionLockData' has a wrong offset!");

}
