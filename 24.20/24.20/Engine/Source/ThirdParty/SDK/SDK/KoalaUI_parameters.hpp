#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "KoalaUI_structs.hpp"

namespace SDK::Params
{

struct FortSidebarPanelKoala_OnConnectionChanged final
{
public:
	bool                                          bConnected;
};
static_assert(alignof(FortSidebarPanelKoala_OnConnectionChanged) == 0x000001, "Wrong alignment on FortSidebarPanelKoala_OnConnectionChanged");
static_assert(sizeof(FortSidebarPanelKoala_OnConnectionChanged) == 0x000001, "Wrong size on FortSidebarPanelKoala_OnConnectionChanged");
static_assert(offsetof(FortSidebarPanelKoala_OnConnectionChanged, bConnected) == 0x000000, "Member 'FortSidebarPanelKoala_OnConnectionChanged::bConnected' has a wrong offset!");

struct KoalaHUDWidget_GetTrackedClipCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(KoalaHUDWidget_GetTrackedClipCount) == 0x000004, "Wrong alignment on KoalaHUDWidget_GetTrackedClipCount");
static_assert(sizeof(KoalaHUDWidget_GetTrackedClipCount) == 0x000004, "Wrong size on KoalaHUDWidget_GetTrackedClipCount");
static_assert(offsetof(KoalaHUDWidget_GetTrackedClipCount, ReturnValue) == 0x000000, "Member 'KoalaHUDWidget_GetTrackedClipCount::ReturnValue' has a wrong offset!");

struct KoalaHUDWidget_HandleAthenaGamePhaseChanged final
{
public:
	EAthenaGamePhase                              GamePhase;
};
static_assert(alignof(KoalaHUDWidget_HandleAthenaGamePhaseChanged) == 0x000001, "Wrong alignment on KoalaHUDWidget_HandleAthenaGamePhaseChanged");
static_assert(sizeof(KoalaHUDWidget_HandleAthenaGamePhaseChanged) == 0x000001, "Wrong size on KoalaHUDWidget_HandleAthenaGamePhaseChanged");
static_assert(offsetof(KoalaHUDWidget_HandleAthenaGamePhaseChanged, GamePhase) == 0x000000, "Member 'KoalaHUDWidget_HandleAthenaGamePhaseChanged::GamePhase' has a wrong offset!");

struct KoalaHUDWidget_HandleLocalPlayerKilledPlayer final
{
public:
	const class AFortPlayerStateAthena*           Player;
};
static_assert(alignof(KoalaHUDWidget_HandleLocalPlayerKilledPlayer) == 0x000008, "Wrong alignment on KoalaHUDWidget_HandleLocalPlayerKilledPlayer");
static_assert(sizeof(KoalaHUDWidget_HandleLocalPlayerKilledPlayer) == 0x000008, "Wrong size on KoalaHUDWidget_HandleLocalPlayerKilledPlayer");
static_assert(offsetof(KoalaHUDWidget_HandleLocalPlayerKilledPlayer, Player) == 0x000000, "Member 'KoalaHUDWidget_HandleLocalPlayerKilledPlayer::Player' has a wrong offset!");

struct KoalaHUDWidget_HandlePlayerPawnEmoteStopped final
{
public:
	const class UFortItemDefinition*              MontageItemDef;
	class AFortPawn*                              PawnEmoting;
};
static_assert(alignof(KoalaHUDWidget_HandlePlayerPawnEmoteStopped) == 0x000008, "Wrong alignment on KoalaHUDWidget_HandlePlayerPawnEmoteStopped");
static_assert(sizeof(KoalaHUDWidget_HandlePlayerPawnEmoteStopped) == 0x000010, "Wrong size on KoalaHUDWidget_HandlePlayerPawnEmoteStopped");
static_assert(offsetof(KoalaHUDWidget_HandlePlayerPawnEmoteStopped, MontageItemDef) == 0x000000, "Member 'KoalaHUDWidget_HandlePlayerPawnEmoteStopped::MontageItemDef' has a wrong offset!");
static_assert(offsetof(KoalaHUDWidget_HandlePlayerPawnEmoteStopped, PawnEmoting) == 0x000008, "Member 'KoalaHUDWidget_HandlePlayerPawnEmoteStopped::PawnEmoting' has a wrong offset!");

struct KoalaHUDWidget_OnAvailabilityChanged final
{
public:
	EKoalaAvailability                            Availability;
};
static_assert(alignof(KoalaHUDWidget_OnAvailabilityChanged) == 0x000001, "Wrong alignment on KoalaHUDWidget_OnAvailabilityChanged");
static_assert(sizeof(KoalaHUDWidget_OnAvailabilityChanged) == 0x000001, "Wrong size on KoalaHUDWidget_OnAvailabilityChanged");
static_assert(offsetof(KoalaHUDWidget_OnAvailabilityChanged, Availability) == 0x000000, "Member 'KoalaHUDWidget_OnAvailabilityChanged::Availability' has a wrong offset!");

struct KoalaHUDWidget_OnClipStatusChanged final
{
public:
	int32                                         InClipID;
	EKoalaClipStatus                              InClipStatus;
	uint8                                         Pad_5[0x3];
	float                                         InUploadProgress;
};
static_assert(alignof(KoalaHUDWidget_OnClipStatusChanged) == 0x000004, "Wrong alignment on KoalaHUDWidget_OnClipStatusChanged");
static_assert(sizeof(KoalaHUDWidget_OnClipStatusChanged) == 0x00000C, "Wrong size on KoalaHUDWidget_OnClipStatusChanged");
static_assert(offsetof(KoalaHUDWidget_OnClipStatusChanged, InClipID) == 0x000000, "Member 'KoalaHUDWidget_OnClipStatusChanged::InClipID' has a wrong offset!");
static_assert(offsetof(KoalaHUDWidget_OnClipStatusChanged, InClipStatus) == 0x000004, "Member 'KoalaHUDWidget_OnClipStatusChanged::InClipStatus' has a wrong offset!");
static_assert(offsetof(KoalaHUDWidget_OnClipStatusChanged, InUploadProgress) == 0x000008, "Member 'KoalaHUDWidget_OnClipStatusChanged::InUploadProgress' has a wrong offset!");

struct KoalaHUDWidget_OnConnectionChanged final
{
public:
	EKoalaConnectionStatus                        InStatus;
};
static_assert(alignof(KoalaHUDWidget_OnConnectionChanged) == 0x000001, "Wrong alignment on KoalaHUDWidget_OnConnectionChanged");
static_assert(sizeof(KoalaHUDWidget_OnConnectionChanged) == 0x000001, "Wrong size on KoalaHUDWidget_OnConnectionChanged");
static_assert(offsetof(KoalaHUDWidget_OnConnectionChanged, InStatus) == 0x000000, "Member 'KoalaHUDWidget_OnConnectionChanged::InStatus' has a wrong offset!");

struct KoalaHUDWidget_OnInputProgress final
{
public:
	float                                         Progress;
};
static_assert(alignof(KoalaHUDWidget_OnInputProgress) == 0x000004, "Wrong alignment on KoalaHUDWidget_OnInputProgress");
static_assert(sizeof(KoalaHUDWidget_OnInputProgress) == 0x000004, "Wrong size on KoalaHUDWidget_OnInputProgress");
static_assert(offsetof(KoalaHUDWidget_OnInputProgress, Progress) == 0x000000, "Member 'KoalaHUDWidget_OnInputProgress::Progress' has a wrong offset!");

struct KoalaHUDWidget_OnRecordingStatusChanged final
{
public:
	EKoalaRecording                               InRecordingStatus;
};
static_assert(alignof(KoalaHUDWidget_OnRecordingStatusChanged) == 0x000001, "Wrong alignment on KoalaHUDWidget_OnRecordingStatusChanged");
static_assert(sizeof(KoalaHUDWidget_OnRecordingStatusChanged) == 0x000001, "Wrong size on KoalaHUDWidget_OnRecordingStatusChanged");
static_assert(offsetof(KoalaHUDWidget_OnRecordingStatusChanged, InRecordingStatus) == 0x000000, "Member 'KoalaHUDWidget_OnRecordingStatusChanged::InRecordingStatus' has a wrong offset!");

struct KoalaHUDWidget_OnReminderTimerStarted final
{
public:
	float                                         Time;
};
static_assert(alignof(KoalaHUDWidget_OnReminderTimerStarted) == 0x000004, "Wrong alignment on KoalaHUDWidget_OnReminderTimerStarted");
static_assert(sizeof(KoalaHUDWidget_OnReminderTimerStarted) == 0x000004, "Wrong size on KoalaHUDWidget_OnReminderTimerStarted");
static_assert(offsetof(KoalaHUDWidget_OnReminderTimerStarted, Time) == 0x000000, "Member 'KoalaHUDWidget_OnReminderTimerStarted::Time' has a wrong offset!");

struct KoalaHUDWidget_GetUploadingClipCount final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(KoalaHUDWidget_GetUploadingClipCount) == 0x000004, "Wrong alignment on KoalaHUDWidget_GetUploadingClipCount");
static_assert(sizeof(KoalaHUDWidget_GetUploadingClipCount) == 0x000004, "Wrong size on KoalaHUDWidget_GetUploadingClipCount");
static_assert(offsetof(KoalaHUDWidget_GetUploadingClipCount, ReturnValue) == 0x000000, "Member 'KoalaHUDWidget_GetUploadingClipCount::ReturnValue' has a wrong offset!");

struct KoalaSettingDetailExtension_OnAvailabilityChanged final
{
public:
	bool                                          bAvailable;
};
static_assert(alignof(KoalaSettingDetailExtension_OnAvailabilityChanged) == 0x000001, "Wrong alignment on KoalaSettingDetailExtension_OnAvailabilityChanged");
static_assert(sizeof(KoalaSettingDetailExtension_OnAvailabilityChanged) == 0x000001, "Wrong size on KoalaSettingDetailExtension_OnAvailabilityChanged");
static_assert(offsetof(KoalaSettingDetailExtension_OnAvailabilityChanged, bAvailable) == 0x000000, "Member 'KoalaSettingDetailExtension_OnAvailabilityChanged::bAvailable' has a wrong offset!");

struct KoalaSettingDetailExtension_OnConnectionChanged final
{
public:
	bool                                          bConnected;
};
static_assert(alignof(KoalaSettingDetailExtension_OnConnectionChanged) == 0x000001, "Wrong alignment on KoalaSettingDetailExtension_OnConnectionChanged");
static_assert(sizeof(KoalaSettingDetailExtension_OnConnectionChanged) == 0x000001, "Wrong size on KoalaSettingDetailExtension_OnConnectionChanged");
static_assert(offsetof(KoalaSettingDetailExtension_OnConnectionChanged, bConnected) == 0x000000, "Member 'KoalaSettingDetailExtension_OnConnectionChanged::bConnected' has a wrong offset!");

}
