#pragma once

#include "Basic.hpp"

#include "EpicStreamMediaSource_structs.hpp"
#include "MediaAssets_classes.hpp"

namespace SDK
{

class UEpicStreamMediaSource : public UStreamMediaSource
{
public:
	class FString                                 VideoStreamSource;
	float                                         VideoStreamSourceAB;
	uint8                                         Pad_AC[0x4];
	TMap<class FString, class FString>            VideoId;
	bool                                          bIsLive;
	bool                                          bBlurlLive;
	uint8                                         Pad_102[0x2];
	int32                                         MaxResolution;
	int32                                         MaxBandwidth;
	float                                         AspectRatio;
	bool                                          bShareLock;
	bool                                          bAudioOnly;
	bool                                          bPartySync;
	uint8                                         Pad_113[0x1];
	float                                         MediaDuration;
	class FString                                 MimeType;
	class FString                                 StreamDenyHTTPCode;
	class UEpicMediaMetadataResolver*             MetadataResolver;
	class UEpicMediaCDNHostnames*                 CDNHostNames;
	uint8                                         Pad_148[0x1D8];
	TMulticastInlineDelegate<void(const class FString& RetrievedUrl)> OnVideoUrlSuccess;
	TMulticastInlineDelegate<void(const class FString& RetrievedUrl)> OnVideoUrlFailed;
	TMulticastInlineDelegate<void(const class FString& MediaMetadataResponse)> OnMetaDataFailure;
	TMulticastInlineDelegate<void(EUCPTypes UCPType)> OnMediaLicensedAudioTreatmentChanged;
	uint8                                         Pad_360[0x10];
	class UEpicMediaDownloadLocalizedOverlays*    EpicMediaDownloadLocalizedOverlays;
	class FString                                 ProtectUserFromAVSettings;
	class FString                                 StreamID;
	class FString                                 StreamID_Development;
	class UMediaSource*                           LocalFilePlaybackAsset;
	double                                        HighestFramerate;
	uint8                                         Pad_3B8[0x190];

public:
	void CancelVideoUrlRequest(bool bInCancelled);
	void DisableSharing();
	bool IsScreenRecordingInProgress();
	void MetadataResultHandler(const struct FEpicMediaMetadataExt& MetaData, bool bSuccess);
	void ReinstateSharing();
	void RequestVideoUrl(const class APlayerController* FortPC);
	void SetLocalizedOverlaysV2(class UEpicMediaDownloadLocalizedOverlays* InOverlays);
	void SetPlaybackStartTime(float StartTime);
	void SetUrl(class FString& InURL);
	EUCPTypes ShouldProtectPlayerFromContent();

	bool HasLocalFilePlayback() const;
	bool ShouldStreamBePlaying(const class UObject* WorldContextObject, const class UPrimitiveComponent* PrimitiveComponent, float CullRadius) const;
	struct FMediaPlayerOptions UpdatePlayerOptions(const struct FMediaPlayerOptions& PlayerOptions) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EpicStreamMediaSource">();
	}
	static class UEpicStreamMediaSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEpicStreamMediaSource>();
	}
};
static_assert(alignof(UEpicStreamMediaSource) == 0x000008, "Wrong alignment on UEpicStreamMediaSource");
static_assert(sizeof(UEpicStreamMediaSource) == 0x000548, "Wrong size on UEpicStreamMediaSource");
static_assert(offsetof(UEpicStreamMediaSource, VideoStreamSource) == 0x000098, "Member 'UEpicStreamMediaSource::VideoStreamSource' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, VideoStreamSourceAB) == 0x0000A8, "Member 'UEpicStreamMediaSource::VideoStreamSourceAB' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, VideoId) == 0x0000B0, "Member 'UEpicStreamMediaSource::VideoId' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, bIsLive) == 0x000100, "Member 'UEpicStreamMediaSource::bIsLive' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, bBlurlLive) == 0x000101, "Member 'UEpicStreamMediaSource::bBlurlLive' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, MaxResolution) == 0x000104, "Member 'UEpicStreamMediaSource::MaxResolution' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, MaxBandwidth) == 0x000108, "Member 'UEpicStreamMediaSource::MaxBandwidth' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, AspectRatio) == 0x00010C, "Member 'UEpicStreamMediaSource::AspectRatio' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, bShareLock) == 0x000110, "Member 'UEpicStreamMediaSource::bShareLock' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, bAudioOnly) == 0x000111, "Member 'UEpicStreamMediaSource::bAudioOnly' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, bPartySync) == 0x000112, "Member 'UEpicStreamMediaSource::bPartySync' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, MediaDuration) == 0x000114, "Member 'UEpicStreamMediaSource::MediaDuration' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, MimeType) == 0x000118, "Member 'UEpicStreamMediaSource::MimeType' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, StreamDenyHTTPCode) == 0x000128, "Member 'UEpicStreamMediaSource::StreamDenyHTTPCode' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, MetadataResolver) == 0x000138, "Member 'UEpicStreamMediaSource::MetadataResolver' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, CDNHostNames) == 0x000140, "Member 'UEpicStreamMediaSource::CDNHostNames' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, OnVideoUrlSuccess) == 0x000320, "Member 'UEpicStreamMediaSource::OnVideoUrlSuccess' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, OnVideoUrlFailed) == 0x000330, "Member 'UEpicStreamMediaSource::OnVideoUrlFailed' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, OnMetaDataFailure) == 0x000340, "Member 'UEpicStreamMediaSource::OnMetaDataFailure' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, OnMediaLicensedAudioTreatmentChanged) == 0x000350, "Member 'UEpicStreamMediaSource::OnMediaLicensedAudioTreatmentChanged' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, EpicMediaDownloadLocalizedOverlays) == 0x000370, "Member 'UEpicStreamMediaSource::EpicMediaDownloadLocalizedOverlays' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, ProtectUserFromAVSettings) == 0x000378, "Member 'UEpicStreamMediaSource::ProtectUserFromAVSettings' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, StreamID) == 0x000388, "Member 'UEpicStreamMediaSource::StreamID' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, StreamID_Development) == 0x000398, "Member 'UEpicStreamMediaSource::StreamID_Development' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, LocalFilePlaybackAsset) == 0x0003A8, "Member 'UEpicStreamMediaSource::LocalFilePlaybackAsset' has a wrong offset!");
static_assert(offsetof(UEpicStreamMediaSource, HighestFramerate) == 0x0003B0, "Member 'UEpicStreamMediaSource::HighestFramerate' has a wrong offset!");

}
