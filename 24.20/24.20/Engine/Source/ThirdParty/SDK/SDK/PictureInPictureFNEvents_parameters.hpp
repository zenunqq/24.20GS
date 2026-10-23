#pragma once

#include "Basic.hpp"

#include "PictureInPictureDescriptors_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct LiveEventHUDAd_ShowAdvertisement final
{
public:
	bool                                          Result;
};
static_assert(alignof(LiveEventHUDAd_ShowAdvertisement) == 0x000001, "Wrong alignment on LiveEventHUDAd_ShowAdvertisement");
static_assert(sizeof(LiveEventHUDAd_ShowAdvertisement) == 0x000001, "Wrong size on LiveEventHUDAd_ShowAdvertisement");
static_assert(offsetof(LiveEventHUDAd_ShowAdvertisement, Result) == 0x000000, "Member 'LiveEventHUDAd_ShowAdvertisement::Result' has a wrong offset!");

struct PictureInPictureFNEventsCheatManager_AddPiPEvent final
{
public:
	class FString                                 EventName;
	class FString                                 VUID;
};
static_assert(alignof(PictureInPictureFNEventsCheatManager_AddPiPEvent) == 0x000008, "Wrong alignment on PictureInPictureFNEventsCheatManager_AddPiPEvent");
static_assert(sizeof(PictureInPictureFNEventsCheatManager_AddPiPEvent) == 0x000020, "Wrong size on PictureInPictureFNEventsCheatManager_AddPiPEvent");
static_assert(offsetof(PictureInPictureFNEventsCheatManager_AddPiPEvent, EventName) == 0x000000, "Member 'PictureInPictureFNEventsCheatManager_AddPiPEvent::EventName' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsCheatManager_AddPiPEvent, VUID) == 0x000010, "Member 'PictureInPictureFNEventsCheatManager_AddPiPEvent::VUID' has a wrong offset!");

struct PictureInPictureFNEventsCheatManager_RemovePiPEvent final
{
public:
	class FString                                 EventName;
};
static_assert(alignof(PictureInPictureFNEventsCheatManager_RemovePiPEvent) == 0x000008, "Wrong alignment on PictureInPictureFNEventsCheatManager_RemovePiPEvent");
static_assert(sizeof(PictureInPictureFNEventsCheatManager_RemovePiPEvent) == 0x000010, "Wrong size on PictureInPictureFNEventsCheatManager_RemovePiPEvent");
static_assert(offsetof(PictureInPictureFNEventsCheatManager_RemovePiPEvent, EventName) == 0x000000, "Member 'PictureInPictureFNEventsCheatManager_RemovePiPEvent::EventName' has a wrong offset!");

struct PictureInPictureFNEventsCheatManager_SelectPiPEvent final
{
public:
	class FString                                 EventName;
};
static_assert(alignof(PictureInPictureFNEventsCheatManager_SelectPiPEvent) == 0x000008, "Wrong alignment on PictureInPictureFNEventsCheatManager_SelectPiPEvent");
static_assert(sizeof(PictureInPictureFNEventsCheatManager_SelectPiPEvent) == 0x000010, "Wrong size on PictureInPictureFNEventsCheatManager_SelectPiPEvent");
static_assert(offsetof(PictureInPictureFNEventsCheatManager_SelectPiPEvent, EventName) == 0x000000, "Member 'PictureInPictureFNEventsCheatManager_SelectPiPEvent::EventName' has a wrong offset!");

struct PictureInPictureFNEventsController_AddPartnerActionAnalytics final
{
public:
	class FString                                 InPartnerName;
	EPictureInPictureAction                       InActionType;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(PictureInPictureFNEventsController_AddPartnerActionAnalytics) == 0x000008, "Wrong alignment on PictureInPictureFNEventsController_AddPartnerActionAnalytics");
static_assert(sizeof(PictureInPictureFNEventsController_AddPartnerActionAnalytics) == 0x000018, "Wrong size on PictureInPictureFNEventsController_AddPartnerActionAnalytics");
static_assert(offsetof(PictureInPictureFNEventsController_AddPartnerActionAnalytics, InPartnerName) == 0x000000, "Member 'PictureInPictureFNEventsController_AddPartnerActionAnalytics::InPartnerName' has a wrong offset!");
static_assert(offsetof(PictureInPictureFNEventsController_AddPartnerActionAnalytics, InActionType) == 0x000010, "Member 'PictureInPictureFNEventsController_AddPartnerActionAnalytics::InActionType' has a wrong offset!");

struct PictureInPictureFNEventsController_HandleFNMediaEventsStreams final
{
public:
	struct FFortMediaEventsStreamAssets           VideoStreamAssets;
};
static_assert(alignof(PictureInPictureFNEventsController_HandleFNMediaEventsStreams) == 0x000008, "Wrong alignment on PictureInPictureFNEventsController_HandleFNMediaEventsStreams");
static_assert(sizeof(PictureInPictureFNEventsController_HandleFNMediaEventsStreams) == 0x000060, "Wrong size on PictureInPictureFNEventsController_HandleFNMediaEventsStreams");
static_assert(offsetof(PictureInPictureFNEventsController_HandleFNMediaEventsStreams, VideoStreamAssets) == 0x000000, "Member 'PictureInPictureFNEventsController_HandleFNMediaEventsStreams::VideoStreamAssets' has a wrong offset!");

struct PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream final
{
public:
	class FString                                 InEventName;
};
static_assert(alignof(PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream) == 0x000008, "Wrong alignment on PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream");
static_assert(sizeof(PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream) == 0x000010, "Wrong size on PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream");
static_assert(offsetof(PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream, InEventName) == 0x000000, "Member 'PictureInPictureFNEventsController_HandleFNMediaRemoveEventsStream::InEventName' has a wrong offset!");

struct PictureInPictureFNEventsController_UpdateClientLoginState final
{
public:
	TArray<struct FPiPPartnerSource>              UpdatedSources;
};
static_assert(alignof(PictureInPictureFNEventsController_UpdateClientLoginState) == 0x000008, "Wrong alignment on PictureInPictureFNEventsController_UpdateClientLoginState");
static_assert(sizeof(PictureInPictureFNEventsController_UpdateClientLoginState) == 0x000010, "Wrong size on PictureInPictureFNEventsController_UpdateClientLoginState");
static_assert(offsetof(PictureInPictureFNEventsController_UpdateClientLoginState, UpdatedSources) == 0x000000, "Member 'PictureInPictureFNEventsController_UpdateClientLoginState::UpdatedSources' has a wrong offset!");

}
