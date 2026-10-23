#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "KoalaUI_structs.hpp"

namespace SDK
{

class UFortGameSettingRegistryExtension_Koala final : public UFortGameSettingRegistryExtension
{
public:
	uint8                                         Pad_28[0x8];
	struct FFortSettingNameExtensions             SettingExtensions;
	uint8                                         Pad_48[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameSettingRegistryExtension_Koala">();
	}
	static class UFortGameSettingRegistryExtension_Koala* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameSettingRegistryExtension_Koala>();
	}
};
static_assert(alignof(UFortGameSettingRegistryExtension_Koala) == 0x000008, "Wrong alignment on UFortGameSettingRegistryExtension_Koala");
static_assert(sizeof(UFortGameSettingRegistryExtension_Koala) == 0x000068, "Wrong size on UFortGameSettingRegistryExtension_Koala");
static_assert(offsetof(UFortGameSettingRegistryExtension_Koala, SettingExtensions) == 0x000030, "Member 'UFortGameSettingRegistryExtension_Koala::SettingExtensions' has a wrong offset!");

class UFortSidebarPanelKoala : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class UCommonButtonBase*                      Button_KoalaDummy;
	class UFortLazyImage*                         QrCodeImage;
	class FString                                 QRCodeURL;

public:
	void OnConnectionChanged(bool bConnected);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSidebarPanelKoala">();
	}
	static class UFortSidebarPanelKoala* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSidebarPanelKoala>();
	}
};
static_assert(alignof(UFortSidebarPanelKoala) == 0x000008, "Wrong alignment on UFortSidebarPanelKoala");
static_assert(sizeof(UFortSidebarPanelKoala) == 0x0003E0, "Wrong size on UFortSidebarPanelKoala");
static_assert(offsetof(UFortSidebarPanelKoala, Button_KoalaDummy) == 0x0003C0, "Member 'UFortSidebarPanelKoala::Button_KoalaDummy' has a wrong offset!");
static_assert(offsetof(UFortSidebarPanelKoala, QrCodeImage) == 0x0003C8, "Member 'UFortSidebarPanelKoala::QrCodeImage' has a wrong offset!");
static_assert(offsetof(UFortSidebarPanelKoala, QRCodeURL) == 0x0003D0, "Member 'UFortSidebarPanelKoala::QRCodeURL' has a wrong offset!");

class UFortUIGameFeatureAction_AttemptKoalaModal final : public UFortUIGameFeatureAction_PostFrontendFlowActions
{
public:
	TSoftClassPtr<class UClass>                   KoalaGraphicsModalClass;
	uint8                                         Pad_58[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUIGameFeatureAction_AttemptKoalaModal">();
	}
	static class UFortUIGameFeatureAction_AttemptKoalaModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUIGameFeatureAction_AttemptKoalaModal>();
	}
};
static_assert(alignof(UFortUIGameFeatureAction_AttemptKoalaModal) == 0x000008, "Wrong alignment on UFortUIGameFeatureAction_AttemptKoalaModal");
static_assert(sizeof(UFortUIGameFeatureAction_AttemptKoalaModal) == 0x000070, "Wrong size on UFortUIGameFeatureAction_AttemptKoalaModal");
static_assert(offsetof(UFortUIGameFeatureAction_AttemptKoalaModal, KoalaGraphicsModalClass) == 0x000030, "Member 'UFortUIGameFeatureAction_AttemptKoalaModal::KoalaGraphicsModalClass' has a wrong offset!");

class UKoalaGraphicsModal final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class UCommonButtonBase*                      Button_KeepEnabled;
	class UCommonButtonBase*                      Button_Disable;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KoalaGraphicsModal">();
	}
	static class UKoalaGraphicsModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKoalaGraphicsModal>();
	}
};
static_assert(alignof(UKoalaGraphicsModal) == 0x000008, "Wrong alignment on UKoalaGraphicsModal");
static_assert(sizeof(UKoalaGraphicsModal) == 0x0003D0, "Wrong size on UKoalaGraphicsModal");
static_assert(offsetof(UKoalaGraphicsModal, Button_KeepEnabled) == 0x0003C0, "Member 'UKoalaGraphicsModal::Button_KeepEnabled' has a wrong offset!");
static_assert(offsetof(UKoalaGraphicsModal, Button_Disable) == 0x0003C8, "Member 'UKoalaGraphicsModal::Button_Disable' has a wrong offset!");

class UKoalaHUDWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	float                                         ClipDebounceTime;
	float                                         PlayerKilledPlayerReminderTime;
	float                                         MatchEndedReminderTime;
	float                                         ClipReminderCooldownTime;
	float                                         EliminationClipReminderDelayTime;
	uint8                                         Pad_3C4[0x4];
	class USoundSubmix*                           ClipAudioSubmix;
	class UCommonActionWidget*                    ClipActionWidget;
	struct FDataTableRowHandle                    ClipObjectInputAction;
	uint8                                         Pad_3E8[0x8];
	TMap<int32, struct FKoalaClipInfo>            ClipTracker;
	uint8                                         Pad_440[0x8];
	int32                                         LastClipID;
	uint8                                         Pad_44C[0x16];
	EKoalaMockClipMode                            MockClipMode;
	uint8                                         Pad_463[0x1];
	int32                                         MockClipUploadShortTime;
	int32                                         MockClipUploadLongTime;
	int32                                         MockClipCreateShortTime;
	int32                                         MockClipCreateLongTime;
	uint8                                         Pad_474[0x74];

public:
	int32 GetTrackedClipCount();
	void HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase);
	void HandleLocalPlayerKilledPlayer(const class AFortPlayerStateAthena* Player);
	void HandlePlayerMatchWon();
	void HandlePlayerPawnEmoteStopped(const class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting);
	void OnAvailabilityChanged(EKoalaAvailability Availability);
	void OnClipStatusChanged(int32 InClipID, EKoalaClipStatus InClipStatus, float InUploadProgress);
	void OnConnectionChanged(EKoalaConnectionStatus InStatus);
	void OnInputComplete();
	void OnInputProgress(float Progress);
	void OnRecordingStatusChanged(EKoalaRecording InRecordingStatus);
	void OnReminderEnded();
	void OnReminderTimerStarted(float Time);
	void OnTouchAreaMouseDown();
	void RegisterClipButtonInput();
	void UnregisterClipButtonInput();

	int32 GetUploadingClipCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KoalaHUDWidget">();
	}
	static class UKoalaHUDWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKoalaHUDWidget>();
	}
};
static_assert(alignof(UKoalaHUDWidget) == 0x000008, "Wrong alignment on UKoalaHUDWidget");
static_assert(sizeof(UKoalaHUDWidget) == 0x0004E8, "Wrong size on UKoalaHUDWidget");
static_assert(offsetof(UKoalaHUDWidget, ClipDebounceTime) == 0x0003B0, "Member 'UKoalaHUDWidget::ClipDebounceTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, PlayerKilledPlayerReminderTime) == 0x0003B4, "Member 'UKoalaHUDWidget::PlayerKilledPlayerReminderTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, MatchEndedReminderTime) == 0x0003B8, "Member 'UKoalaHUDWidget::MatchEndedReminderTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, ClipReminderCooldownTime) == 0x0003BC, "Member 'UKoalaHUDWidget::ClipReminderCooldownTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, EliminationClipReminderDelayTime) == 0x0003C0, "Member 'UKoalaHUDWidget::EliminationClipReminderDelayTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, ClipAudioSubmix) == 0x0003C8, "Member 'UKoalaHUDWidget::ClipAudioSubmix' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, ClipActionWidget) == 0x0003D0, "Member 'UKoalaHUDWidget::ClipActionWidget' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, ClipObjectInputAction) == 0x0003D8, "Member 'UKoalaHUDWidget::ClipObjectInputAction' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, ClipTracker) == 0x0003F0, "Member 'UKoalaHUDWidget::ClipTracker' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, LastClipID) == 0x000448, "Member 'UKoalaHUDWidget::LastClipID' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, MockClipMode) == 0x000462, "Member 'UKoalaHUDWidget::MockClipMode' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, MockClipUploadShortTime) == 0x000464, "Member 'UKoalaHUDWidget::MockClipUploadShortTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, MockClipUploadLongTime) == 0x000468, "Member 'UKoalaHUDWidget::MockClipUploadLongTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, MockClipCreateShortTime) == 0x00046C, "Member 'UKoalaHUDWidget::MockClipCreateShortTime' has a wrong offset!");
static_assert(offsetof(UKoalaHUDWidget, MockClipCreateLongTime) == 0x000470, "Member 'UKoalaHUDWidget::MockClipCreateLongTime' has a wrong offset!");

class UKoalaMainMenuButton final : public UFortMainMenuButtonExtension
{
public:
	uint8                                         Pad_1560[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KoalaMainMenuButton">();
	}
	static class UKoalaMainMenuButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKoalaMainMenuButton>();
	}
};
static_assert(alignof(UKoalaMainMenuButton) == 0x000010, "Wrong alignment on UKoalaMainMenuButton");
static_assert(sizeof(UKoalaMainMenuButton) == 0x001570, "Wrong size on UKoalaMainMenuButton");

class UKoalaSettingDetailExtension final : public UFortSettingDetailExtension
{
public:
	uint8                                         Pad_270[0x8];

public:
	void OnAvailabilityChanged(bool bAvailable);
	void OnConnectionChanged(bool bConnected);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KoalaSettingDetailExtension">();
	}
	static class UKoalaSettingDetailExtension* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKoalaSettingDetailExtension>();
	}
};
static_assert(alignof(UKoalaSettingDetailExtension) == 0x000008, "Wrong alignment on UKoalaSettingDetailExtension");
static_assert(sizeof(UKoalaSettingDetailExtension) == 0x000278, "Wrong size on UKoalaSettingDetailExtension");

}
