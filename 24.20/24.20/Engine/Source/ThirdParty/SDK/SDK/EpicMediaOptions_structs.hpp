#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FEpicMediaOptions final
{
public:
	uint8                                         Pad_0[0x4];
	int32                                         FrameRate;
	int32                                         MaxResolutionForMediaStreaming;
	int32                                         MaxElectraVerticalResolutionOf60fpsVideos;
	int32                                         MaxElectraVerticalResolutionOfWindowsSWD;
	bool                                          bElectraLiveUseConservativePresentationOffset;
	bool                                          bElectraUseDedicatedMediaSegmentDownloadThreads;
	uint8                                         Pad_16[0x2];
	double                                        ElectraLivePresentationOffset;
	double                                        ElectraLiveAudioPresentationOffset;
	int32                                         StreamPlaylistFetchMethodOrder;
	bool                                          bDisableBlastURLStreamSource;
	bool                                          bIsCN;
	uint8                                         Pad_2E[0x2];
	TArray<class FString>                         VideoEVMap;
	TArray<float>                                 CDNDistribution;
	TArray<class FString>                         VODHostNames;
	TArray<class FString>                         VODHostNamesCN;
	TArray<class FString>                         LiveHostNames;
	TArray<class FString>                         LiveHostNamesCN;
	TArray<class FString>                         VODHostNamesDev;
	TArray<class FString>                         LiveHostNamesDev;
	TArray<class FString>                         VODHostNamesHF;
	TArray<class FString>                         LiveHostNamesHF;
	TArray<class FString>                         VODHostNamesCNHF;
	TArray<class FString>                         LiveHostNamesCNHF;
	uint8                                         Pad_F0[0x10];
};
static_assert(alignof(FEpicMediaOptions) == 0x000008, "Wrong alignment on FEpicMediaOptions");
static_assert(sizeof(FEpicMediaOptions) == 0x000100, "Wrong size on FEpicMediaOptions");
static_assert(offsetof(FEpicMediaOptions, FrameRate) == 0x000004, "Member 'FEpicMediaOptions::FrameRate' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, MaxResolutionForMediaStreaming) == 0x000008, "Member 'FEpicMediaOptions::MaxResolutionForMediaStreaming' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, MaxElectraVerticalResolutionOf60fpsVideos) == 0x00000C, "Member 'FEpicMediaOptions::MaxElectraVerticalResolutionOf60fpsVideos' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, MaxElectraVerticalResolutionOfWindowsSWD) == 0x000010, "Member 'FEpicMediaOptions::MaxElectraVerticalResolutionOfWindowsSWD' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, bElectraLiveUseConservativePresentationOffset) == 0x000014, "Member 'FEpicMediaOptions::bElectraLiveUseConservativePresentationOffset' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, bElectraUseDedicatedMediaSegmentDownloadThreads) == 0x000015, "Member 'FEpicMediaOptions::bElectraUseDedicatedMediaSegmentDownloadThreads' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, ElectraLivePresentationOffset) == 0x000018, "Member 'FEpicMediaOptions::ElectraLivePresentationOffset' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, ElectraLiveAudioPresentationOffset) == 0x000020, "Member 'FEpicMediaOptions::ElectraLiveAudioPresentationOffset' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, StreamPlaylistFetchMethodOrder) == 0x000028, "Member 'FEpicMediaOptions::StreamPlaylistFetchMethodOrder' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, bDisableBlastURLStreamSource) == 0x00002C, "Member 'FEpicMediaOptions::bDisableBlastURLStreamSource' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, bIsCN) == 0x00002D, "Member 'FEpicMediaOptions::bIsCN' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, VideoEVMap) == 0x000030, "Member 'FEpicMediaOptions::VideoEVMap' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, CDNDistribution) == 0x000040, "Member 'FEpicMediaOptions::CDNDistribution' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, VODHostNames) == 0x000050, "Member 'FEpicMediaOptions::VODHostNames' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesCN) == 0x000060, "Member 'FEpicMediaOptions::VODHostNamesCN' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, LiveHostNames) == 0x000070, "Member 'FEpicMediaOptions::LiveHostNames' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesCN) == 0x000080, "Member 'FEpicMediaOptions::LiveHostNamesCN' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesDev) == 0x000090, "Member 'FEpicMediaOptions::VODHostNamesDev' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesDev) == 0x0000A0, "Member 'FEpicMediaOptions::LiveHostNamesDev' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesHF) == 0x0000B0, "Member 'FEpicMediaOptions::VODHostNamesHF' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesHF) == 0x0000C0, "Member 'FEpicMediaOptions::LiveHostNamesHF' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, VODHostNamesCNHF) == 0x0000D0, "Member 'FEpicMediaOptions::VODHostNamesCNHF' has a wrong offset!");
static_assert(offsetof(FEpicMediaOptions, LiveHostNamesCNHF) == 0x0000E0, "Member 'FEpicMediaOptions::LiveHostNamesCNHF' has a wrong offset!");

}
