#pragma once

#include "Basic.hpp"

#include "AudioMixer_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MediaAssets_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMediaTexture final : public UTexture
{
public:
	ETextureAddress                               AddressX;
	ETextureAddress                               AddressY;
	bool                                          AutoClear;
	uint8                                         Pad_143[0x1];
	struct FLinearColor                           ClearColor;
	bool                                          EnableGenMips;
	uint8                                         NumMips;
	bool                                          NewStyleOutput;
	EMediaTextureOutputFormat                     OutputFormat;
	float                                         CurrentAspectRatio;
	EMediaTextureOrientation                      CurrentOrientation;
	uint8                                         Pad_15D[0x3];
	class UMediaPlayer*                           MediaPlayer;
	uint8                                         Pad_168[0xB8];

public:
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void UpdateResource();

	float GetAspectRatio() const;
	int32 GetHeight() const;
	class UMediaPlayer* GetMediaPlayer() const;
	int32 GetTextureNumMips() const;
	int32 GetWidth() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaTexture">();
	}
	static class UMediaTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaTexture>();
	}
};
static_assert(alignof(UMediaTexture) == 0x000008, "Wrong alignment on UMediaTexture");
static_assert(sizeof(UMediaTexture) == 0x000220, "Wrong size on UMediaTexture");
static_assert(offsetof(UMediaTexture, AddressX) == 0x000140, "Member 'UMediaTexture::AddressX' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AddressY) == 0x000141, "Member 'UMediaTexture::AddressY' has a wrong offset!");
static_assert(offsetof(UMediaTexture, AutoClear) == 0x000142, "Member 'UMediaTexture::AutoClear' has a wrong offset!");
static_assert(offsetof(UMediaTexture, ClearColor) == 0x000144, "Member 'UMediaTexture::ClearColor' has a wrong offset!");
static_assert(offsetof(UMediaTexture, EnableGenMips) == 0x000154, "Member 'UMediaTexture::EnableGenMips' has a wrong offset!");
static_assert(offsetof(UMediaTexture, NumMips) == 0x000155, "Member 'UMediaTexture::NumMips' has a wrong offset!");
static_assert(offsetof(UMediaTexture, NewStyleOutput) == 0x000156, "Member 'UMediaTexture::NewStyleOutput' has a wrong offset!");
static_assert(offsetof(UMediaTexture, OutputFormat) == 0x000157, "Member 'UMediaTexture::OutputFormat' has a wrong offset!");
static_assert(offsetof(UMediaTexture, CurrentAspectRatio) == 0x000158, "Member 'UMediaTexture::CurrentAspectRatio' has a wrong offset!");
static_assert(offsetof(UMediaTexture, CurrentOrientation) == 0x00015C, "Member 'UMediaTexture::CurrentOrientation' has a wrong offset!");
static_assert(offsetof(UMediaTexture, MediaPlayer) == 0x000160, "Member 'UMediaTexture::MediaPlayer' has a wrong offset!");

class UMediaSource : public UObject
{
public:
	uint8                                         Pad_28[0x58];

public:
	void SetMediaOptionBool(const class FName& Key, bool Value);
	void SetMediaOptionFloat(const class FName& Key, float Value);
	void SetMediaOptionInt64(const class FName& Key, int64 Value);
	void SetMediaOptionString(const class FName& Key, const class FString& Value);

	class FString GetUrl() const;
	bool Validate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSource">();
	}
	static class UMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSource>();
	}
};
static_assert(alignof(UMediaSource) == 0x000008, "Wrong alignment on UMediaSource");
static_assert(sizeof(UMediaSource) == 0x000080, "Wrong size on UMediaSource");

class UBaseMediaSource : public UMediaSource
{
public:
	class FName                                   PlayerName;
	uint8                                         Pad_84[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseMediaSource">();
	}
	static class UBaseMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseMediaSource>();
	}
};
static_assert(alignof(UBaseMediaSource) == 0x000008, "Wrong alignment on UBaseMediaSource");
static_assert(sizeof(UBaseMediaSource) == 0x000088, "Wrong size on UBaseMediaSource");
static_assert(offsetof(UBaseMediaSource, PlayerName) == 0x000080, "Member 'UBaseMediaSource::PlayerName' has a wrong offset!");

class UFileMediaSource final : public UBaseMediaSource
{
public:
	class FString                                 FilePath;
	bool                                          PrecacheFile;
	uint8                                         Pad_99[0x17];

public:
	void SetFilePath(const class FString& Path);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileMediaSource">();
	}
	static class UFileMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileMediaSource>();
	}
};
static_assert(alignof(UFileMediaSource) == 0x000008, "Wrong alignment on UFileMediaSource");
static_assert(sizeof(UFileMediaSource) == 0x0000B0, "Wrong size on UFileMediaSource");
static_assert(offsetof(UFileMediaSource, FilePath) == 0x000088, "Member 'UFileMediaSource::FilePath' has a wrong offset!");
static_assert(offsetof(UFileMediaSource, PrecacheFile) == 0x000098, "Member 'UFileMediaSource::PrecacheFile' has a wrong offset!");

class UMediaComponent final : public UActorComponent
{
public:
	class UMediaTexture*                          MediaTexture;
	class UMediaPlayer*                           MediaPlayer;

public:
	class UMediaPlayer* GetMediaPlayer() const;
	class UMediaTexture* GetMediaTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaComponent">();
	}
	static class UMediaComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaComponent>();
	}
};
static_assert(alignof(UMediaComponent) == 0x000008, "Wrong alignment on UMediaComponent");
static_assert(sizeof(UMediaComponent) == 0x0000B0, "Wrong size on UMediaComponent");
static_assert(offsetof(UMediaComponent, MediaTexture) == 0x0000A0, "Member 'UMediaComponent::MediaTexture' has a wrong offset!");
static_assert(offsetof(UMediaComponent, MediaPlayer) == 0x0000A8, "Member 'UMediaComponent::MediaPlayer' has a wrong offset!");

class UMediaTimeStampInfo final : public UObject
{
public:
	struct FTimespan                              Time;
	int64                                         SequenceIndex;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaTimeStampInfo">();
	}
	static class UMediaTimeStampInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaTimeStampInfo>();
	}
};
static_assert(alignof(UMediaTimeStampInfo) == 0x000008, "Wrong alignment on UMediaTimeStampInfo");
static_assert(sizeof(UMediaTimeStampInfo) == 0x000038, "Wrong size on UMediaTimeStampInfo");
static_assert(offsetof(UMediaTimeStampInfo, Time) == 0x000028, "Member 'UMediaTimeStampInfo::Time' has a wrong offset!");
static_assert(offsetof(UMediaTimeStampInfo, SequenceIndex) == 0x000030, "Member 'UMediaTimeStampInfo::SequenceIndex' has a wrong offset!");

class UMediaPlayer final : public UObject
{
public:
	TMulticastInlineDelegate<void()>              OnEndReached;
	TMulticastInlineDelegate<void()>              OnMediaClosed;
	TMulticastInlineDelegate<void(const class FString& OpenedUrl)> OnMediaOpened;
	TMulticastInlineDelegate<void(const class FString& FailedUrl)> OnMediaOpenFailed;
	TMulticastInlineDelegate<void()>              OnPlaybackResumed;
	TMulticastInlineDelegate<void()>              OnPlaybackSuspended;
	TMulticastInlineDelegate<void()>              OnSeekCompleted;
	TMulticastInlineDelegate<void()>              OnTracksChanged;
	TMulticastInlineDelegate<void()>              OnMetadataChanged;
	struct FTimespan                              CacheAhead;
	struct FTimespan                              CacheBehind;
	struct FTimespan                              CacheBehindGame;
	bool                                          NativeAudioOut;
	bool                                          PlayOnOpen;
	uint8                                         Pad_D2[0x2];
	uint8                                         Shuffle : 1;
	uint8                                         Loop : 1;
	uint8                                         Pad_D5[0x3];
	class UMediaPlaylist*                         Playlist;
	int32                                         PlaylistIndex;
	uint8                                         Pad_E4[0x4];
	struct FTimespan                              TimeDelay;
	float                                         HorizontalFieldOfView;
	float                                         VerticalFieldOfView;
	struct FRotator                               ViewRotation;
	uint8                                         Pad_110[0x28];
	struct FGuid                                  PlayerGuid;
	uint8                                         Pad_148[0x8];

public:
	bool CanPlaySource(class UMediaSource* MediaSource);
	bool CanPlayUrl(const class FString& URL);
	void Close();
	bool Next();
	bool OpenFile(const class FString& FilePath);
	bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
	bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index_0);
	bool OpenSource(class UMediaSource* MediaSource);
	void OpenSourceLatent(const class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess);
	bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
	bool OpenUrl(const class FString& URL);
	bool Pause();
	bool Play();
	void PlayAndSeek();
	bool Previous();
	bool Reopen();
	bool Rewind();
	bool Seek(const struct FTimespan& Time);
	bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
	void SetBlockOnTime(const struct FTimespan& Time);
	void SetDesiredPlayerName(class FName PlayerName);
	bool SetLooping(bool Looping);
	void SetMediaOptions(const class UMediaSource* Options);
	bool SetNativeVolume(float Volume);
	bool SetRate(float Rate);
	void SetTimeDelay(const struct FTimespan& TimeDelay_0);
	bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
	bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
	bool SetViewField(float Horizontal, float Vertical, bool Absolute);
	bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);

	bool CanPause() const;
	int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;
	int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;
	class FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;
	class FName GetDesiredPlayerName() const;
	struct FTimespan GetDuration() const;
	float GetHorizontalFieldOfView() const;
	class FText GetMediaName() const;
	int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	int32 GetNumTracks(EMediaPlayerTrack TrackType) const;
	class FName GetPlayerName() const;
	class UMediaPlaylist* GetPlaylist() const;
	int32 GetPlaylistIndex() const;
	float GetRate() const;
	int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;
	void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned) const;
	struct FTimespan GetTime() const;
	struct FTimespan GetTimeDelay() const;
	class UMediaTimeStampInfo* GetTimeStamp() const;
	class FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;
	class FString GetUrl() const;
	float GetVerticalFieldOfView() const;
	float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;
	struct FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;
	float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;
	struct FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;
	class FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;
	struct FRotator GetViewRotation() const;
	bool HasError() const;
	bool IsBuffering() const;
	bool IsClosed() const;
	bool IsConnecting() const;
	bool IsLooping() const;
	bool IsPaused() const;
	bool IsPlaying() const;
	bool IsPreparing() const;
	bool IsReady() const;
	bool SupportsRate(float Rate, bool Unthinned) const;
	bool SupportsScrubbing() const;
	bool SupportsSeeking() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlayer">();
	}
	static class UMediaPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlayer>();
	}
};
static_assert(alignof(UMediaPlayer) == 0x000008, "Wrong alignment on UMediaPlayer");
static_assert(sizeof(UMediaPlayer) == 0x000150, "Wrong size on UMediaPlayer");
static_assert(offsetof(UMediaPlayer, OnEndReached) == 0x000028, "Member 'UMediaPlayer::OnEndReached' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaClosed) == 0x000038, "Member 'UMediaPlayer::OnMediaClosed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpened) == 0x000048, "Member 'UMediaPlayer::OnMediaOpened' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMediaOpenFailed) == 0x000058, "Member 'UMediaPlayer::OnMediaOpenFailed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackResumed) == 0x000068, "Member 'UMediaPlayer::OnPlaybackResumed' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnPlaybackSuspended) == 0x000078, "Member 'UMediaPlayer::OnPlaybackSuspended' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnSeekCompleted) == 0x000088, "Member 'UMediaPlayer::OnSeekCompleted' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnTracksChanged) == 0x000098, "Member 'UMediaPlayer::OnTracksChanged' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, OnMetadataChanged) == 0x0000A8, "Member 'UMediaPlayer::OnMetadataChanged' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheAhead) == 0x0000B8, "Member 'UMediaPlayer::CacheAhead' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheBehind) == 0x0000C0, "Member 'UMediaPlayer::CacheBehind' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, CacheBehindGame) == 0x0000C8, "Member 'UMediaPlayer::CacheBehindGame' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, NativeAudioOut) == 0x0000D0, "Member 'UMediaPlayer::NativeAudioOut' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayOnOpen) == 0x0000D1, "Member 'UMediaPlayer::PlayOnOpen' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, Playlist) == 0x0000D8, "Member 'UMediaPlayer::Playlist' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlaylistIndex) == 0x0000E0, "Member 'UMediaPlayer::PlaylistIndex' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, TimeDelay) == 0x0000E8, "Member 'UMediaPlayer::TimeDelay' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, HorizontalFieldOfView) == 0x0000F0, "Member 'UMediaPlayer::HorizontalFieldOfView' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, VerticalFieldOfView) == 0x0000F4, "Member 'UMediaPlayer::VerticalFieldOfView' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, ViewRotation) == 0x0000F8, "Member 'UMediaPlayer::ViewRotation' has a wrong offset!");
static_assert(offsetof(UMediaPlayer, PlayerGuid) == 0x000138, "Member 'UMediaPlayer::PlayerGuid' has a wrong offset!");

class IMediaPlayerProxyInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlayerProxyInterface">();
	}
	static class IMediaPlayerProxyInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMediaPlayerProxyInterface>();
	}
};
static_assert(alignof(IMediaPlayerProxyInterface) == 0x000008, "Wrong alignment on IMediaPlayerProxyInterface");
static_assert(sizeof(IMediaPlayerProxyInterface) == 0x000028, "Wrong size on IMediaPlayerProxyInterface");

class UMediaPlaylist final : public UObject
{
public:
	TArray<class UMediaSource*>                   Items;

public:
	bool Add(class UMediaSource* MediaSource);
	bool AddFile(const class FString& FilePath);
	bool AddUrl(const class FString& URL);
	class UMediaSource* Get(int32 Index_0);
	class UMediaSource* GetNext(int32* InOutIndex);
	class UMediaSource* GetPrevious(int32* InOutIndex);
	class UMediaSource* GetRandom(int32* OutIndex);
	void Insert(class UMediaSource* MediaSource, int32 Index_0);
	int32 Num();
	bool Remove(class UMediaSource* MediaSource);
	bool RemoveAt(int32 Index_0);
	bool Replace(int32 Index_0, class UMediaSource* Replacement);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaPlaylist">();
	}
	static class UMediaPlaylist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaPlaylist>();
	}
};
static_assert(alignof(UMediaPlaylist) == 0x000008, "Wrong alignment on UMediaPlaylist");
static_assert(sizeof(UMediaPlaylist) == 0x000038, "Wrong size on UMediaPlaylist");
static_assert(offsetof(UMediaPlaylist, Items) == 0x000028, "Member 'UMediaPlaylist::Items' has a wrong offset!");

class UMediaSoundComponent final : public USynthComponent
{
public:
	EMediaSoundChannels                           Channels;
	bool                                          DynamicRateAdjustment;
	uint8                                         Pad_925[0x3];
	float                                         RateAdjustmentFactor;
	struct FFloatRange                            RateAdjustmentRange;
	uint8                                         Pad_93C[0x4];
	class UMediaPlayer*                           MediaPlayer;
	uint8                                         Pad_948[0xB8];

public:
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
	TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
	TArray<struct FMediaSoundComponentSpectralData> GetSpectralData();
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
	void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	void SetSpectralAnalysisSettings(const TArray<float>& InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);

	float GetEnvelopeValue() const;
	class UMediaPlayer* GetMediaPlayer() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaSoundComponent">();
	}
	static class UMediaSoundComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaSoundComponent>();
	}
};
static_assert(alignof(UMediaSoundComponent) == 0x000010, "Wrong alignment on UMediaSoundComponent");
static_assert(sizeof(UMediaSoundComponent) == 0x000A00, "Wrong size on UMediaSoundComponent");
static_assert(offsetof(UMediaSoundComponent, Channels) == 0x000920, "Member 'UMediaSoundComponent::Channels' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, DynamicRateAdjustment) == 0x000924, "Member 'UMediaSoundComponent::DynamicRateAdjustment' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentFactor) == 0x000928, "Member 'UMediaSoundComponent::RateAdjustmentFactor' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentRange) == 0x00092C, "Member 'UMediaSoundComponent::RateAdjustmentRange' has a wrong offset!");
static_assert(offsetof(UMediaSoundComponent, MediaPlayer) == 0x000940, "Member 'UMediaSoundComponent::MediaPlayer' has a wrong offset!");

class UPlatformMediaSource final : public UMediaSource
{
public:
	class UMediaSource*                           MediaSource;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlatformMediaSource">();
	}
	static class UPlatformMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformMediaSource>();
	}
};
static_assert(alignof(UPlatformMediaSource) == 0x000008, "Wrong alignment on UPlatformMediaSource");
static_assert(sizeof(UPlatformMediaSource) == 0x000088, "Wrong size on UPlatformMediaSource");
static_assert(offsetof(UPlatformMediaSource, MediaSource) == 0x000080, "Member 'UPlatformMediaSource::MediaSource' has a wrong offset!");

class UStreamMediaSource : public UBaseMediaSource
{
public:
	class FString                                 StreamUrl;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamMediaSource">();
	}
	static class UStreamMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamMediaSource>();
	}
};
static_assert(alignof(UStreamMediaSource) == 0x000008, "Wrong alignment on UStreamMediaSource");
static_assert(sizeof(UStreamMediaSource) == 0x000098, "Wrong size on UStreamMediaSource");
static_assert(offsetof(UStreamMediaSource, StreamUrl) == 0x000088, "Member 'UStreamMediaSource::StreamUrl' has a wrong offset!");

class UTimeSynchronizableMediaSource final : public UBaseMediaSource
{
public:
	bool                                          bUseTimeSynchronization;
	uint8                                         Pad_89[0x3];
	int32                                         FrameDelay;
	double                                        TimeDelay;
	bool                                          bAutoDetectInput;
	uint8                                         Pad_99[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynchronizableMediaSource">();
	}
	static class UTimeSynchronizableMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynchronizableMediaSource>();
	}
};
static_assert(alignof(UTimeSynchronizableMediaSource) == 0x000008, "Wrong alignment on UTimeSynchronizableMediaSource");
static_assert(sizeof(UTimeSynchronizableMediaSource) == 0x0000A0, "Wrong size on UTimeSynchronizableMediaSource");
static_assert(offsetof(UTimeSynchronizableMediaSource, bUseTimeSynchronization) == 0x000088, "Member 'UTimeSynchronizableMediaSource::bUseTimeSynchronization' has a wrong offset!");
static_assert(offsetof(UTimeSynchronizableMediaSource, FrameDelay) == 0x00008C, "Member 'UTimeSynchronizableMediaSource::FrameDelay' has a wrong offset!");
static_assert(offsetof(UTimeSynchronizableMediaSource, TimeDelay) == 0x000090, "Member 'UTimeSynchronizableMediaSource::TimeDelay' has a wrong offset!");
static_assert(offsetof(UTimeSynchronizableMediaSource, bAutoDetectInput) == 0x000098, "Member 'UTimeSynchronizableMediaSource::bAutoDetectInput' has a wrong offset!");

class UMediaBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	static void EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);
	static void EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32 Filter);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MediaBlueprintFunctionLibrary">();
	}
	static class UMediaBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediaBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UMediaBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UMediaBlueprintFunctionLibrary");
static_assert(sizeof(UMediaBlueprintFunctionLibrary) == 0x000028, "Wrong size on UMediaBlueprintFunctionLibrary");

}
