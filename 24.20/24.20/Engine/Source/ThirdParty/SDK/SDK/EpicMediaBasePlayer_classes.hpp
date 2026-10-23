#pragma once

#include "Basic.hpp"

#include "EpicMediaBasePlayer_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "EpicStreamMediaSource_structs.hpp"

namespace SDK
{

class UEpicBaseStreamingVideo : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	TMulticastInlineDelegate<void(EBaseMediaTerminalErrorReason Reason)> VideoOnTerminalError;
	TMulticastInlineDelegate<void()>              VideoOnSuccess;
	TMulticastInlineDelegate<void()>              OnResumedEvent;
	class UEpicStreamMediaSource*                 MediaSource;
	class UMediaPlayer*                           MediaPlayer;
	struct FIntPoint                              VideoSize;
	uint8                                         Pad_78[0x50];
	class USoundSubmixBase*                       DefaultSubmix;
	class USoundSubmixBase*                       LicensedSubmix;
	class UMediaSoundComponent*                   MediaSoundComponent;

public:
	class UMediaPlayer* GetMediaPlayer();
	struct FMediaPlayerOptions GetMediaPlayerOptions();
	class UEpicStreamMediaSource* GetMediaSource();
	void HandleLicensedAudioTreatmentChanged(EUCPTypes UCPType);
	void HandleMediaClosed();
	void HandleMediaOpenedFailed(const class FString& FailedUrl);
	void HandleMediaPlayerPlaybackResumed();
	bool Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover);
	void OnFailedURL(const class FString& URL);
	void OnSuccessfulURL(const class FString& URL);
	bool Open(const struct FMediaPlayerOptions& InMediaOptions);
	void Release();
	void RetryOnError(bool bFromPlayer);
	void SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed);
	void SetVideoSize(const int32 Width, const int32 Height);
	void Start(const class FString& InVUID, class UMediaTexture* InVideoTexture);
	void Stop(bool bRelease);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicBaseStreamingVideo">();
	}
	static class UEpicBaseStreamingVideo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicBaseStreamingVideo>();
	}
};
static_assert(alignof(UEpicBaseStreamingVideo) == 0x000008, "Wrong alignment on UEpicBaseStreamingVideo");
static_assert(sizeof(UEpicBaseStreamingVideo) == 0x0000E0, "Wrong size on UEpicBaseStreamingVideo");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnTerminalError) == 0x000030, "Member 'UEpicBaseStreamingVideo::VideoOnTerminalError' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoOnSuccess) == 0x000040, "Member 'UEpicBaseStreamingVideo::VideoOnSuccess' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, OnResumedEvent) == 0x000050, "Member 'UEpicBaseStreamingVideo::OnResumedEvent' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, MediaSource) == 0x000060, "Member 'UEpicBaseStreamingVideo::MediaSource' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, MediaPlayer) == 0x000068, "Member 'UEpicBaseStreamingVideo::MediaPlayer' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, VideoSize) == 0x000070, "Member 'UEpicBaseStreamingVideo::VideoSize' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, DefaultSubmix) == 0x0000C8, "Member 'UEpicBaseStreamingVideo::DefaultSubmix' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, LicensedSubmix) == 0x0000D0, "Member 'UEpicBaseStreamingVideo::LicensedSubmix' has a wrong offset!");
static_assert(offsetof(UEpicBaseStreamingVideo, MediaSoundComponent) == 0x0000D8, "Member 'UEpicBaseStreamingVideo::MediaSoundComponent' has a wrong offset!");

}
