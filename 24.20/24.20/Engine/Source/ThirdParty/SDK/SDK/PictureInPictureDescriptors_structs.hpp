#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

enum class EPictureInPictureAction : uint8
{
	NEXT                                     = 0,
	PREVIOUS                                 = 1,
	PLAY                                     = 2,
	PAUSE                                    = 3,
	PLAYPAUSE                                = 4,
	LIKE                                     = 5,
	REPORT                                   = 6,
	EXIT                                     = 7,
	UNLIKE                                   = 8,
	TOGGLELIKE                               = 9,
	TOGGLEFULLSCREEN                         = 10,
	Count                                    = 11,
	PictureInPictureAction_MAX               = 12,
};

enum class EPictureInPictureSourceType : uint8
{
	NONE                                     = 0,
	URL                                      = 1,
	BLURL                                    = 2,
	EXTERNAL_ASSETS                          = 3,
	PictureInPictureSourceType_MAX           = 4,
};

struct FPiPPartnerSource final
{
public:
	uint8                                         Pad_0[0x48];
	EPictureInPictureSourceType                   SourceType;
	uint8                                         Pad_49[0x7];
	class FString                                 Name;
	struct FDateTime                              StartTime;
	struct FDateTime                              EndTime;
	struct FFortMediaEventsStreamAssets           AssetConfig;
	class FString                                 EventIconUrl;
	class UEpicCMSImage*                          CMSImage;
	class UPictureInPictureSourceActionData*      ActionData;
	TArray<class FString>                         PlatformBlacklist;
	TArray<class FString>                         GameplayTagBlacklist;
	TArray<class FString>                         GameplayTagWhitelist;
	bool                                          bManual;
	uint8                                         Pad_121[0x7];
};
static_assert(alignof(FPiPPartnerSource) == 0x000008, "Wrong alignment on FPiPPartnerSource");
static_assert(sizeof(FPiPPartnerSource) == 0x000128, "Wrong size on FPiPPartnerSource");
static_assert(offsetof(FPiPPartnerSource, SourceType) == 0x000048, "Member 'FPiPPartnerSource::SourceType' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, Name) == 0x000050, "Member 'FPiPPartnerSource::Name' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, StartTime) == 0x000060, "Member 'FPiPPartnerSource::StartTime' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, EndTime) == 0x000068, "Member 'FPiPPartnerSource::EndTime' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, AssetConfig) == 0x000070, "Member 'FPiPPartnerSource::AssetConfig' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, EventIconUrl) == 0x0000D0, "Member 'FPiPPartnerSource::EventIconUrl' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, CMSImage) == 0x0000E0, "Member 'FPiPPartnerSource::CMSImage' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, ActionData) == 0x0000E8, "Member 'FPiPPartnerSource::ActionData' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, PlatformBlacklist) == 0x0000F0, "Member 'FPiPPartnerSource::PlatformBlacklist' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, GameplayTagBlacklist) == 0x000100, "Member 'FPiPPartnerSource::GameplayTagBlacklist' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, GameplayTagWhitelist) == 0x000110, "Member 'FPiPPartnerSource::GameplayTagWhitelist' has a wrong offset!");
static_assert(offsetof(FPiPPartnerSource, bManual) == 0x000120, "Member 'FPiPPartnerSource::bManual' has a wrong offset!");

struct FPIPVideoPlayerAssetConfig final
{
public:
	class UMediaTexture*                          VideoTexture;
	class UMediaPlayer*                           VideoPlayer;
	class UMaterialInterface*                     VideoMaterial;
	class UMaterialInterface*                     ThumbnailMaterial;
	struct FVector2D                              LoadingScreenSize;
	struct FVector2D                              LoadingScreenPosition;
	class UFortStreamMediaSource*                 MediaSource;
	class UMediaSoundComponent*                   SoundComponent;
	class USoundClass*                            SoundClass;
	class USoundMix*                              ActiveSoundMix;
	class USoundSubmixBase*                       DefaultSubmix;
	class USoundSubmixBase*                       LicensedSubmix;
	class UFortMediaSubtitlesPlayer*              SubtitlePlayer;
	class ULocalizedOverlays*                     SubtitleOverlays;
	class USubtitleDisplayOptions*                SubtitleDisplayOptions;
};
static_assert(alignof(FPIPVideoPlayerAssetConfig) == 0x000008, "Wrong alignment on FPIPVideoPlayerAssetConfig");
static_assert(sizeof(FPIPVideoPlayerAssetConfig) == 0x000088, "Wrong size on FPIPVideoPlayerAssetConfig");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, VideoTexture) == 0x000000, "Member 'FPIPVideoPlayerAssetConfig::VideoTexture' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, VideoPlayer) == 0x000008, "Member 'FPIPVideoPlayerAssetConfig::VideoPlayer' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, VideoMaterial) == 0x000010, "Member 'FPIPVideoPlayerAssetConfig::VideoMaterial' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, ThumbnailMaterial) == 0x000018, "Member 'FPIPVideoPlayerAssetConfig::ThumbnailMaterial' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, LoadingScreenSize) == 0x000020, "Member 'FPIPVideoPlayerAssetConfig::LoadingScreenSize' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, LoadingScreenPosition) == 0x000030, "Member 'FPIPVideoPlayerAssetConfig::LoadingScreenPosition' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, MediaSource) == 0x000040, "Member 'FPIPVideoPlayerAssetConfig::MediaSource' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, SoundComponent) == 0x000048, "Member 'FPIPVideoPlayerAssetConfig::SoundComponent' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, SoundClass) == 0x000050, "Member 'FPIPVideoPlayerAssetConfig::SoundClass' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, ActiveSoundMix) == 0x000058, "Member 'FPIPVideoPlayerAssetConfig::ActiveSoundMix' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, DefaultSubmix) == 0x000060, "Member 'FPIPVideoPlayerAssetConfig::DefaultSubmix' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, LicensedSubmix) == 0x000068, "Member 'FPIPVideoPlayerAssetConfig::LicensedSubmix' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, SubtitlePlayer) == 0x000070, "Member 'FPIPVideoPlayerAssetConfig::SubtitlePlayer' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, SubtitleOverlays) == 0x000078, "Member 'FPIPVideoPlayerAssetConfig::SubtitleOverlays' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerAssetConfig, SubtitleDisplayOptions) == 0x000080, "Member 'FPIPVideoPlayerAssetConfig::SubtitleDisplayOptions' has a wrong offset!");

struct FPIPVideoPlayerConfig final
{
public:
	class FString                                 MimeType;
	class FString                                 BlurlVUID;
	bool                                          bLoopEnabled;
	bool                                          bAutoPlay;
	uint8                                         Pad_22[0x6];
	class FString                                 VideoURL;
	bool                                          bShareBlocked;
	uint8                                         Pad_39[0x7];
	struct FDateTime                              EventStartTime;
};
static_assert(alignof(FPIPVideoPlayerConfig) == 0x000008, "Wrong alignment on FPIPVideoPlayerConfig");
static_assert(sizeof(FPIPVideoPlayerConfig) == 0x000048, "Wrong size on FPIPVideoPlayerConfig");
static_assert(offsetof(FPIPVideoPlayerConfig, MimeType) == 0x000000, "Member 'FPIPVideoPlayerConfig::MimeType' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerConfig, BlurlVUID) == 0x000010, "Member 'FPIPVideoPlayerConfig::BlurlVUID' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerConfig, bLoopEnabled) == 0x000020, "Member 'FPIPVideoPlayerConfig::bLoopEnabled' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerConfig, bAutoPlay) == 0x000021, "Member 'FPIPVideoPlayerConfig::bAutoPlay' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerConfig, VideoURL) == 0x000028, "Member 'FPIPVideoPlayerConfig::VideoURL' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerConfig, bShareBlocked) == 0x000038, "Member 'FPIPVideoPlayerConfig::bShareBlocked' has a wrong offset!");
static_assert(offsetof(FPIPVideoPlayerConfig, EventStartTime) == 0x000040, "Member 'FPIPVideoPlayerConfig::EventStartTime' has a wrong offset!");

struct FPictureInPictureActionConfig final
{
public:
	EPictureInPictureAction                       ActionType;
	uint8                                         Pad_1[0xF];
	struct FSlateBrush                            ActionBrush;
	class FText                                   ActionText;
	uint8                                         Pad_E8[0x8];
};
static_assert(alignof(FPictureInPictureActionConfig) == 0x000010, "Wrong alignment on FPictureInPictureActionConfig");
static_assert(sizeof(FPictureInPictureActionConfig) == 0x0000F0, "Wrong size on FPictureInPictureActionConfig");
static_assert(offsetof(FPictureInPictureActionConfig, ActionType) == 0x000000, "Member 'FPictureInPictureActionConfig::ActionType' has a wrong offset!");
static_assert(offsetof(FPictureInPictureActionConfig, ActionBrush) == 0x000010, "Member 'FPictureInPictureActionConfig::ActionBrush' has a wrong offset!");
static_assert(offsetof(FPictureInPictureActionConfig, ActionText) == 0x0000D0, "Member 'FPictureInPictureActionConfig::ActionText' has a wrong offset!");

struct FPictureInPictureAnalyticsPayload final
{
public:
	TMap<EPictureInPictureAction, int32>          PartnerActionTally;
	uint8                                         Pad_50[0x48];
};
static_assert(alignof(FPictureInPictureAnalyticsPayload) == 0x000008, "Wrong alignment on FPictureInPictureAnalyticsPayload");
static_assert(sizeof(FPictureInPictureAnalyticsPayload) == 0x000098, "Wrong size on FPictureInPictureAnalyticsPayload");
static_assert(offsetof(FPictureInPictureAnalyticsPayload, PartnerActionTally) == 0x000000, "Member 'FPictureInPictureAnalyticsPayload::PartnerActionTally' has a wrong offset!");

}
