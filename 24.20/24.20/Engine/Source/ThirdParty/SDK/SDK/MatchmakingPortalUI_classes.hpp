#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UFortMatchmakingPortalCountdown final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UInputComponent*                        MatchmakingPortalInputComponent;
	class UFortActivityScalingTextBlock*          Text_IslandName;
	float                                         CountdownTime;
	uint8                                         Pad_3C4[0x4];
	TMulticastInlineDelegate<void()>              OnFinishedCountdown;

public:
	void FinishTimer();
	void HandleCancelClicked();
	void StartCountdown();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMatchmakingPortalCountdown">();
	}
	static class UFortMatchmakingPortalCountdown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMatchmakingPortalCountdown>();
	}
};
static_assert(alignof(UFortMatchmakingPortalCountdown) == 0x000008, "Wrong alignment on UFortMatchmakingPortalCountdown");
static_assert(sizeof(UFortMatchmakingPortalCountdown) == 0x0003D8, "Wrong size on UFortMatchmakingPortalCountdown");
static_assert(offsetof(UFortMatchmakingPortalCountdown, MatchmakingPortalInputComponent) == 0x0003B0, "Member 'UFortMatchmakingPortalCountdown::MatchmakingPortalInputComponent' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalCountdown, Text_IslandName) == 0x0003B8, "Member 'UFortMatchmakingPortalCountdown::Text_IslandName' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalCountdown, CountdownTime) == 0x0003C0, "Member 'UFortMatchmakingPortalCountdown::CountdownTime' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalCountdown, OnFinishedCountdown) == 0x0003C8, "Member 'UFortMatchmakingPortalCountdown::OnFinishedCountdown' has a wrong offset!");

class UFortMatchmakingPortalModal final : public UFortActivityView
{
public:
	struct FTimerHandle                           MatchmakingStartTimerHandle;
	uint8                                         Pad_400[0x358];
	TArray<class FString>                         XpTagMnemonicWhitelist;
	class UCommonRichTextBlock*                   Text_ActivityOrigin;
	class UCommonRichTextBlock*                   Text_LinkCode;
	class UCommonTextBlock*                       Text_ActivityName;
	class UCommonTextBlock*                       Text_ActivityDescription;
	class UScrollBox*                             ScrollBox_ActivityDescription;
	class UDynamicEntryBox*                       EntryBox_ActivityTags;
	class UFortSimpleMaterialProgressBar*         ProgressBar_ContentDownload;
	class UCommonButtonBase*                      Button_AcceptPublic;
	class UCommonButtonBase*                      Button_AcceptPrivate;
	class UCommonButtonBase*                      Button_Favorite;
	class UCommonButtonBase*                      Button_Cancel;
	class UFortModalBackground*                   ModalBackground;

public:
	class FText GetCodeTextFormat(const class FText& IslandCode);
	class FText GetCreatorTextFormat(const class FText& CreatorName);
	void HandleOnMatchmakingError();
	void OnAdditionalContentUpdate(const class FText& MatchmakingState, const float Progress, bool bShowProgressBar);
	void OnMatchmakingStarted(const class FText& MatchmakingState);
	void OnMatchmakingStopped();
	void SendLinkCodeToParty();
	void SetMatchmakingStateText(const class FText& MatchmakingStateText);
	void SetMatchmakingTimer();

	TArray<class FString> GetContentWarningStrings() const;
	EFortInvalidActivityReason GetInvalidActivityReason() const;
	bool IsDownloadRequired() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMatchmakingPortalModal">();
	}
	static class UFortMatchmakingPortalModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMatchmakingPortalModal>();
	}
};
static_assert(alignof(UFortMatchmakingPortalModal) == 0x000008, "Wrong alignment on UFortMatchmakingPortalModal");
static_assert(sizeof(UFortMatchmakingPortalModal) == 0x0007C8, "Wrong size on UFortMatchmakingPortalModal");
static_assert(offsetof(UFortMatchmakingPortalModal, MatchmakingStartTimerHandle) == 0x0003F8, "Member 'UFortMatchmakingPortalModal::MatchmakingStartTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, XpTagMnemonicWhitelist) == 0x000758, "Member 'UFortMatchmakingPortalModal::XpTagMnemonicWhitelist' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Text_ActivityOrigin) == 0x000768, "Member 'UFortMatchmakingPortalModal::Text_ActivityOrigin' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Text_LinkCode) == 0x000770, "Member 'UFortMatchmakingPortalModal::Text_LinkCode' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Text_ActivityName) == 0x000778, "Member 'UFortMatchmakingPortalModal::Text_ActivityName' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Text_ActivityDescription) == 0x000780, "Member 'UFortMatchmakingPortalModal::Text_ActivityDescription' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, ScrollBox_ActivityDescription) == 0x000788, "Member 'UFortMatchmakingPortalModal::ScrollBox_ActivityDescription' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, EntryBox_ActivityTags) == 0x000790, "Member 'UFortMatchmakingPortalModal::EntryBox_ActivityTags' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, ProgressBar_ContentDownload) == 0x000798, "Member 'UFortMatchmakingPortalModal::ProgressBar_ContentDownload' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Button_AcceptPublic) == 0x0007A0, "Member 'UFortMatchmakingPortalModal::Button_AcceptPublic' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Button_AcceptPrivate) == 0x0007A8, "Member 'UFortMatchmakingPortalModal::Button_AcceptPrivate' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Button_Favorite) == 0x0007B0, "Member 'UFortMatchmakingPortalModal::Button_Favorite' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, Button_Cancel) == 0x0007B8, "Member 'UFortMatchmakingPortalModal::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalModal, ModalBackground) == 0x0007C0, "Member 'UFortMatchmakingPortalModal::ModalBackground' has a wrong offset!");

class UFortMatchmakingPortalPopup final : public UFortPortalHUDDetails
{
public:
	uint8                                         Pad_3B0[0x10];
	class UFortGameActivity*                      CachedGameActivity;
	class UFortMatchmakingPortalModal*            MatchmakingPortalModalWidget;
	TSubclassOf<class UCommonActivatableWidget>   MatchmakingFeedbackClass;
	TSubclassOf<class UFortMatchmakingPortalCountdown> MatchmakingCountdownClass;
	struct FVector                                WorldPointerLocation;
	class FText                                   CreatorNameTextFormat;
	TWeakObjectPtr<class UHeaderDescriptionHUDComponent> CachedHUDComponent;
	TSubclassOf<class UFortMatchmakingPortalModal> IslandModal;
	struct FMatchmakingPortalPopupData            CachedIslandData;
	class FText                                   InvalidLinkCodeWarningText;
	float                                         MatchmakingFeedbackDelayTime;
	uint8                                         bIsWithinPortalRange : 1;
	uint8                                         Pad_49D[0x3];
	class UFortMatchmakingPortalCountdown*        MatchmakingCountdownWidget;
	class UCommonActivatableWidget*               MatchmakingFeedbackContainerWidget;
	class UFortAthenaCreativeMatchmakingWidget*   MatchmakingFeedbackWidget;
	class UCommonRichTextBlock*                   RichText_CreatorName;
	class UCommonTextBlock*                       Text_IslandName;
	class UDynamicEntryBox*                       EntryBox_ActivityTags;
	class UFortKeybindWidget*                     GlobalActionKeybindWidget;

public:
	void BindOverlapEvents();
	bool GetIslandData(struct FMatchmakingPortalPopupData* OutIslandData, class UHeaderDescriptionHUDComponent* HUDComponent);
	void HandleFinishedCountdown();
	void HandleHUDShow(const bool bShow, const bool bShouldAnimate);
	void HandleLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bLoadScreenEnabled, const class FText& HUDReason);
	void HandleOnPortalDetailsVisibilityCheck(bool bShowWidget);
	void HandleStartedRespawn(class AFortPlayerControllerZone* PlayerController);
	void HandleWidgetUpdate();
	bool IsInteractingDeviceAMatchmakingPortal();
	void OnPlayerCanInteractChanged(const bool bPlayerCanInteract);
	void OnShowPortalPopup(const bool bShow, const bool bAnimate);
	void UpdateVisuals(const class UHeaderDescriptionHUDComponent* HUDComponent);

	class UFortAthenaCreativeMatchmakingWidget* GetMatchmakingFeedbackWidget(const class UCommonActivatableWidget* MatchmakingFeedbackContainer) const;
	bool HasActivityToShow() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMatchmakingPortalPopup">();
	}
	static class UFortMatchmakingPortalPopup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMatchmakingPortalPopup>();
	}
};
static_assert(alignof(UFortMatchmakingPortalPopup) == 0x000008, "Wrong alignment on UFortMatchmakingPortalPopup");
static_assert(sizeof(UFortMatchmakingPortalPopup) == 0x0004D8, "Wrong size on UFortMatchmakingPortalPopup");
static_assert(offsetof(UFortMatchmakingPortalPopup, CachedGameActivity) == 0x0003C0, "Member 'UFortMatchmakingPortalPopup::CachedGameActivity' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingPortalModalWidget) == 0x0003C8, "Member 'UFortMatchmakingPortalPopup::MatchmakingPortalModalWidget' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingFeedbackClass) == 0x0003D0, "Member 'UFortMatchmakingPortalPopup::MatchmakingFeedbackClass' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingCountdownClass) == 0x0003D8, "Member 'UFortMatchmakingPortalPopup::MatchmakingCountdownClass' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, WorldPointerLocation) == 0x0003E0, "Member 'UFortMatchmakingPortalPopup::WorldPointerLocation' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, CreatorNameTextFormat) == 0x0003F8, "Member 'UFortMatchmakingPortalPopup::CreatorNameTextFormat' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, CachedHUDComponent) == 0x000410, "Member 'UFortMatchmakingPortalPopup::CachedHUDComponent' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, IslandModal) == 0x000418, "Member 'UFortMatchmakingPortalPopup::IslandModal' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, CachedIslandData) == 0x000420, "Member 'UFortMatchmakingPortalPopup::CachedIslandData' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, InvalidLinkCodeWarningText) == 0x000480, "Member 'UFortMatchmakingPortalPopup::InvalidLinkCodeWarningText' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingFeedbackDelayTime) == 0x000498, "Member 'UFortMatchmakingPortalPopup::MatchmakingFeedbackDelayTime' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingCountdownWidget) == 0x0004A0, "Member 'UFortMatchmakingPortalPopup::MatchmakingCountdownWidget' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingFeedbackContainerWidget) == 0x0004A8, "Member 'UFortMatchmakingPortalPopup::MatchmakingFeedbackContainerWidget' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, MatchmakingFeedbackWidget) == 0x0004B0, "Member 'UFortMatchmakingPortalPopup::MatchmakingFeedbackWidget' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, RichText_CreatorName) == 0x0004B8, "Member 'UFortMatchmakingPortalPopup::RichText_CreatorName' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, Text_IslandName) == 0x0004C0, "Member 'UFortMatchmakingPortalPopup::Text_IslandName' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, EntryBox_ActivityTags) == 0x0004C8, "Member 'UFortMatchmakingPortalPopup::EntryBox_ActivityTags' has a wrong offset!");
static_assert(offsetof(UFortMatchmakingPortalPopup, GlobalActionKeybindWidget) == 0x0004D0, "Member 'UFortMatchmakingPortalPopup::GlobalActionKeybindWidget' has a wrong offset!");

class UFortModalBackground final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x20];
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_BackBoard;
	class UCommonButtonBase*                      Button_MobileClose;

public:
	void OnPreviewImageChanged(const bool bIsLoading, const class UTexture* InTexture);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortModalBackground">();
	}
	static class UFortModalBackground* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortModalBackground>();
	}
};
static_assert(alignof(UFortModalBackground) == 0x000008, "Wrong alignment on UFortModalBackground");
static_assert(sizeof(UFortModalBackground) == 0x0003E0, "Wrong size on UFortModalBackground");
static_assert(offsetof(UFortModalBackground, Button_Back) == 0x0003C8, "Member 'UFortModalBackground::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortModalBackground, Button_BackBoard) == 0x0003D0, "Member 'UFortModalBackground::Button_BackBoard' has a wrong offset!");
static_assert(offsetof(UFortModalBackground, Button_MobileClose) == 0x0003D8, "Member 'UFortModalBackground::Button_MobileClose' has a wrong offset!");

class UFortUIGameFeatureAction_OverridePortalHUDDetails final : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UClass>                   SoftPortalHUDDetailsClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUIGameFeatureAction_OverridePortalHUDDetails">();
	}
	static class UFortUIGameFeatureAction_OverridePortalHUDDetails* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUIGameFeatureAction_OverridePortalHUDDetails>();
	}
};
static_assert(alignof(UFortUIGameFeatureAction_OverridePortalHUDDetails) == 0x000008, "Wrong alignment on UFortUIGameFeatureAction_OverridePortalHUDDetails");
static_assert(sizeof(UFortUIGameFeatureAction_OverridePortalHUDDetails) == 0x000050, "Wrong size on UFortUIGameFeatureAction_OverridePortalHUDDetails");
static_assert(offsetof(UFortUIGameFeatureAction_OverridePortalHUDDetails, SoftPortalHUDDetailsClass) == 0x000028, "Member 'UFortUIGameFeatureAction_OverridePortalHUDDetails::SoftPortalHUDDetailsClass' has a wrong offset!");

}
