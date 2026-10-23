#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CrewUI_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonUI_classes.hpp"
#include "GameSubCatalog_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class IBattlePassCrewContentInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassCrewContentInterface">();
	}
	static class IBattlePassCrewContentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBattlePassCrewContentInterface>();
	}
};
static_assert(alignof(IBattlePassCrewContentInterface) == 0x000008, "Wrong alignment on IBattlePassCrewContentInterface");
static_assert(sizeof(IBattlePassCrewContentInterface) == 0x000028, "Wrong size on IBattlePassCrewContentInterface");

class IFortProgressiveContentInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveContentInterface">();
	}
	static class IFortProgressiveContentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortProgressiveContentInterface>();
	}
};
static_assert(alignof(IFortProgressiveContentInterface) == 0x000008, "Wrong alignment on IFortProgressiveContentInterface");
static_assert(sizeof(IFortProgressiveContentInterface) == 0x000028, "Wrong size on IFortProgressiveContentInterface");

class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{
public:
	EBattlePassPurchaseButtonCurrencyType         CurrencyType;
	uint8                                         Pad_1479[0x7];
	class UCommonTextBlock*                       Text_Label;
	class UCommonTextBlock*                       Text_SecondaryLabel;
	class UCommonTextBlock*                       Text_FinalCost;
	class UWidget*                                Container_SecondaryLabel;

public:
	void OnCurrencyUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassCrewPurchaseButton">();
	}
	static class UBattlePassCrewPurchaseButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassCrewPurchaseButton>();
	}
};
static_assert(alignof(UBattlePassCrewPurchaseButton) == 0x000010, "Wrong alignment on UBattlePassCrewPurchaseButton");
static_assert(sizeof(UBattlePassCrewPurchaseButton) == 0x0014A0, "Wrong size on UBattlePassCrewPurchaseButton");
static_assert(offsetof(UBattlePassCrewPurchaseButton, CurrencyType) == 0x001478, "Member 'UBattlePassCrewPurchaseButton::CurrencyType' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseButton, Text_Label) == 0x001480, "Member 'UBattlePassCrewPurchaseButton::Text_Label' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseButton, Text_SecondaryLabel) == 0x001488, "Member 'UBattlePassCrewPurchaseButton::Text_SecondaryLabel' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseButton, Text_FinalCost) == 0x001490, "Member 'UBattlePassCrewPurchaseButton::Text_FinalCost' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseButton, Container_SecondaryLabel) == 0x001498, "Member 'UBattlePassCrewPurchaseButton::Container_SecondaryLabel' has a wrong offset!");

class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x20];
	float                                         CrewUpsellTransitionDelayTime;
	uint8                                         Pad_3CC[0xC];
	class UCommonActivatableWidgetSwitcher*       Switcher_ContentContainer;
	class UBattlePassPurchaseScreen*              BattlePassPurchaseScreen;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       QuickIntro;
	class UWidgetAnimation*                       CrewBenefitsIntro;
	TSubclassOf<class UCrewSubscriptionErrorModal> CrewSubscriptionErrorModalClass;
	uint8                                         Pad_408[0x20];

public:
	void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened);
	void OnTriggerIntroAnimation(bool bCanClaimRewards);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassCrewPurchaseContainer">();
	}
	static class UBattlePassCrewPurchaseContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassCrewPurchaseContainer>();
	}
};
static_assert(alignof(UBattlePassCrewPurchaseContainer) == 0x000008, "Wrong alignment on UBattlePassCrewPurchaseContainer");
static_assert(sizeof(UBattlePassCrewPurchaseContainer) == 0x000428, "Wrong size on UBattlePassCrewPurchaseContainer");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, CrewUpsellTransitionDelayTime) == 0x0003C8, "Member 'UBattlePassCrewPurchaseContainer::CrewUpsellTransitionDelayTime' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, Switcher_ContentContainer) == 0x0003D8, "Member 'UBattlePassCrewPurchaseContainer::Switcher_ContentContainer' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, BattlePassPurchaseScreen) == 0x0003E0, "Member 'UBattlePassCrewPurchaseContainer::BattlePassPurchaseScreen' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, Intro) == 0x0003E8, "Member 'UBattlePassCrewPurchaseContainer::Intro' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, QuickIntro) == 0x0003F0, "Member 'UBattlePassCrewPurchaseContainer::QuickIntro' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, CrewBenefitsIntro) == 0x0003F8, "Member 'UBattlePassCrewPurchaseContainer::CrewBenefitsIntro' has a wrong offset!");
static_assert(offsetof(UBattlePassCrewPurchaseContainer, CrewSubscriptionErrorModalClass) == 0x000400, "Member 'UBattlePassCrewPurchaseContainer::CrewSubscriptionErrorModalClass' has a wrong offset!");

class UBattlePassSeasonHeading : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                   Text_Season;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassSeasonHeading">();
	}
	static class UBattlePassSeasonHeading* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassSeasonHeading>();
	}
};
static_assert(alignof(UBattlePassSeasonHeading) == 0x000008, "Wrong alignment on UBattlePassSeasonHeading");
static_assert(sizeof(UBattlePassSeasonHeading) == 0x000298, "Wrong size on UBattlePassSeasonHeading");
static_assert(offsetof(UBattlePassSeasonHeading, Text_Season) == 0x000290, "Member 'UBattlePassSeasonHeading::Text_Season' has a wrong offset!");

class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{
public:
	uint8                                         Pad_3E8[0xA0];
	TSubclassOf<class UCommonActivatableWidget>   PurchaseCompleteModal;
	class UCommonButtonBase*                      Button_ToCrew;
	class UBattlePassCrewPurchaseButton*          Button_Purchase;
	class UCommonButtonBase*                      Button_MoreInfo;
	class UCommonButtonBase*                      Button_GiftBattlePass;
	class UBattlePassCrewPurchaseButton*          Button_ConfirmBase;
	class UBattlePassCrewPurchaseButton*          Button_ConfirmBundle;
	class UBattlePassSeasonHeading*               Heading_Primary;
	class UBattlePassSeasonHeading*               Heading_Secondary;
	class UCommonRichTextBlock*                   RichText_Disclaimer;
	class UCommonTextBlock*                       Text_Description;
	class UCommonAnimatedSwitcher*                Switcher_PurchaseState;
	uint8                                         Pad_4E8[0x18];

public:
	void OnPurchaseConfirmed();
	void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState);
	void OnSetNavButtonNotificationText(const class FText& NotificationText);
	void OnSetScreenInteractable(bool bInteractable);
	void OnShowNavButtonNotification(const bool bShowNotification);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassPurchaseScreen">();
	}
	static class UBattlePassPurchaseScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassPurchaseScreen>();
	}
};
static_assert(alignof(UBattlePassPurchaseScreen) == 0x000008, "Wrong alignment on UBattlePassPurchaseScreen");
static_assert(sizeof(UBattlePassPurchaseScreen) == 0x000500, "Wrong size on UBattlePassPurchaseScreen");
static_assert(offsetof(UBattlePassPurchaseScreen, PurchaseCompleteModal) == 0x000488, "Member 'UBattlePassPurchaseScreen::PurchaseCompleteModal' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Button_ToCrew) == 0x000490, "Member 'UBattlePassPurchaseScreen::Button_ToCrew' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Button_Purchase) == 0x000498, "Member 'UBattlePassPurchaseScreen::Button_Purchase' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Button_MoreInfo) == 0x0004A0, "Member 'UBattlePassPurchaseScreen::Button_MoreInfo' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Button_GiftBattlePass) == 0x0004A8, "Member 'UBattlePassPurchaseScreen::Button_GiftBattlePass' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Button_ConfirmBase) == 0x0004B0, "Member 'UBattlePassPurchaseScreen::Button_ConfirmBase' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Button_ConfirmBundle) == 0x0004B8, "Member 'UBattlePassPurchaseScreen::Button_ConfirmBundle' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Heading_Primary) == 0x0004C0, "Member 'UBattlePassPurchaseScreen::Heading_Primary' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Heading_Secondary) == 0x0004C8, "Member 'UBattlePassPurchaseScreen::Heading_Secondary' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, RichText_Disclaimer) == 0x0004D0, "Member 'UBattlePassPurchaseScreen::RichText_Disclaimer' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Text_Description) == 0x0004D8, "Member 'UBattlePassPurchaseScreen::Text_Description' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseScreen, Switcher_PurchaseState) == 0x0004E0, "Member 'UBattlePassPurchaseScreen::Switcher_PurchaseState' has a wrong offset!");

class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UDynamicEntryBox*                       EntryBox_BulletPoints;
	class UCommonButtonBase*                      Button_OpenHowToURL;
	class UCommonButtonBase*                      Button_TextURL;
	class UCommonButtonBase*                      Button_DoNotRemind;
	class UCommonButtonBase*                      Button_Close;
	TArray<class FText>                           BulletPoints;
	TMap<EAppStore, class FText>                  AppStorePlatformMapping;
	class FString                                 HowToCancelURL;
	uint8                                         Pad_448[0x20];
	class FText                                   PlatformTextStyle;

public:
	void OnSetHowToCancelURL(const class FString& MoreInfoUrl);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewMultiSubscriptionAlertModal">();
	}
	static class UCrewMultiSubscriptionAlertModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewMultiSubscriptionAlertModal>();
	}
};
static_assert(alignof(UCrewMultiSubscriptionAlertModal) == 0x000008, "Wrong alignment on UCrewMultiSubscriptionAlertModal");
static_assert(sizeof(UCrewMultiSubscriptionAlertModal) == 0x000480, "Wrong size on UCrewMultiSubscriptionAlertModal");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, EntryBox_BulletPoints) == 0x0003B0, "Member 'UCrewMultiSubscriptionAlertModal::EntryBox_BulletPoints' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, Button_OpenHowToURL) == 0x0003B8, "Member 'UCrewMultiSubscriptionAlertModal::Button_OpenHowToURL' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, Button_TextURL) == 0x0003C0, "Member 'UCrewMultiSubscriptionAlertModal::Button_TextURL' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, Button_DoNotRemind) == 0x0003C8, "Member 'UCrewMultiSubscriptionAlertModal::Button_DoNotRemind' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, Button_Close) == 0x0003D0, "Member 'UCrewMultiSubscriptionAlertModal::Button_Close' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, BulletPoints) == 0x0003D8, "Member 'UCrewMultiSubscriptionAlertModal::BulletPoints' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, AppStorePlatformMapping) == 0x0003E8, "Member 'UCrewMultiSubscriptionAlertModal::AppStorePlatformMapping' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, HowToCancelURL) == 0x000438, "Member 'UCrewMultiSubscriptionAlertModal::HowToCancelURL' has a wrong offset!");
static_assert(offsetof(UCrewMultiSubscriptionAlertModal, PlatformTextStyle) == 0x000468, "Member 'UCrewMultiSubscriptionAlertModal::PlatformTextStyle' has a wrong offset!");

class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UCommonButtonBase*                      Button_Accept;
	class UCommonButtonBase*                      Button_CancelSubscription;
	class UCommonButtonBase*                      Button_MoreInfo;
	class UCommonButtonBase*                      Button_TextURL;
	TSoftClassPtr<class UClass>                   CancellationInfoModalClass;
	uint8                                         Pad_3F8[0x150];

public:
	void ExitModal();
	void OnModalBackout();
	void OnSetPriceChangeAcknowledgeBodyTable(const TArray<struct FCrewTableRow>& PriceChangeByRegionRows);
	void OnSetPriceChangeAcknowledgeBodyText(const class FText& BodyText);
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(const class FText& CancelSubscriptionButtonText);
	void OnSetPriceChangeAcknowledgeCheckboxText(const class FText& CheckboxText);
	void OnSetPriceChangeAcknowledgeConfirmButtonText(const class FText& ConfirmButtonText);
	void OnSetPriceChangeAcknowledgeMoreInfoText(const class FText& ConfirmButtonText);
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(const class FText& MoreInfoUrl);
	void OnSetPriceChangeAcknowledgeTitle(const class FText& Title);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewPriceChangeAcknowledgeModal">();
	}
	static class UCrewPriceChangeAcknowledgeModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewPriceChangeAcknowledgeModal>();
	}
};
static_assert(alignof(UCrewPriceChangeAcknowledgeModal) == 0x000008, "Wrong alignment on UCrewPriceChangeAcknowledgeModal");
static_assert(sizeof(UCrewPriceChangeAcknowledgeModal) == 0x000548, "Wrong size on UCrewPriceChangeAcknowledgeModal");
static_assert(offsetof(UCrewPriceChangeAcknowledgeModal, Button_Accept) == 0x0003B0, "Member 'UCrewPriceChangeAcknowledgeModal::Button_Accept' has a wrong offset!");
static_assert(offsetof(UCrewPriceChangeAcknowledgeModal, Button_CancelSubscription) == 0x0003B8, "Member 'UCrewPriceChangeAcknowledgeModal::Button_CancelSubscription' has a wrong offset!");
static_assert(offsetof(UCrewPriceChangeAcknowledgeModal, Button_MoreInfo) == 0x0003C0, "Member 'UCrewPriceChangeAcknowledgeModal::Button_MoreInfo' has a wrong offset!");
static_assert(offsetof(UCrewPriceChangeAcknowledgeModal, Button_TextURL) == 0x0003C8, "Member 'UCrewPriceChangeAcknowledgeModal::Button_TextURL' has a wrong offset!");
static_assert(offsetof(UCrewPriceChangeAcknowledgeModal, CancellationInfoModalClass) == 0x0003D0, "Member 'UCrewPriceChangeAcknowledgeModal::CancellationInfoModalClass' has a wrong offset!");

class UCrewPurchaseScreen : public UCMSBackgroundWidget
{
public:
	uint8                                         Pad_3E8[0x68];
	bool                                          bManagementModeEnabled;
	uint8                                         Pad_451[0x7];
	class UWidget*                                ContentPurchasedFocusWidget;
	class UWidget*                                FocusWidget;
	class UCommonButtonGroupBase*                 ButtonGroup_BenefitsTiles;
	TSoftClassPtr<class UClass>                   CancellationInfoModalClass;
	TSoftClassPtr<class UClass>                   LegalInfoModalClass;
	TSoftClassPtr<class UClass>                   ResolveIssueModalClass;
	TSoftClassPtr<class UClass>                   RejoinModalClass;
	class UCommonButtonBase*                      Button_ToBattlePass;
	class UBattlePassCrewPurchaseButton*          Button_Purchase;
	class UBattlePassCrewPurchaseButton*          Button_Rejoin;
	class UCommonButtonBase*                      Button_ResolvePayment;
	class UCommonButtonBase*                      Button_WatchTrailer;
	class UCommonButtonBase*                      Button_Terms;
	class UCommonButtonBase*                      Button_CancellationInfo;
	class UDynamicEntryBox*                       EntryBox_RecurringRewards;
	class UDynamicEntryBox*                       EntryBox_LimitedTimeRewards;
	class UCrewTileDetails*                       Details_CurrentCrewTile;
	class UCommonTextBlock*                       Text_LimitedTime;
	class UOverlay*                               Overlay_UserInformation;
	class UCommonTextBlock*                       Text_UserInformation;
	class UCommonTextBlock*                       Text_CrewDisclaimer;

public:
	void BeginProgress(const class FText& ProgressLabel);
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void EndProgress();
	void OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs);
	void OnSetNavButtonNotificationText(const class FText& NotificationText);
	void OnShowNavButtonNotification(const bool bShowNotification);
	void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState);
	void OnUpdateVBuckRefundVisibility(bool bVisible);
	void OnUserInformationTextsUpdated(const class FText& UserInformationText1, const class FText& UserInformationText2, EMcpSubscriptionState SubscriptionState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewPurchaseScreen">();
	}
	static class UCrewPurchaseScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewPurchaseScreen>();
	}
};
static_assert(alignof(UCrewPurchaseScreen) == 0x000008, "Wrong alignment on UCrewPurchaseScreen");
static_assert(sizeof(UCrewPurchaseScreen) == 0x000580, "Wrong size on UCrewPurchaseScreen");
static_assert(offsetof(UCrewPurchaseScreen, bManagementModeEnabled) == 0x000450, "Member 'UCrewPurchaseScreen::bManagementModeEnabled' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, ContentPurchasedFocusWidget) == 0x000458, "Member 'UCrewPurchaseScreen::ContentPurchasedFocusWidget' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, FocusWidget) == 0x000460, "Member 'UCrewPurchaseScreen::FocusWidget' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, ButtonGroup_BenefitsTiles) == 0x000468, "Member 'UCrewPurchaseScreen::ButtonGroup_BenefitsTiles' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, CancellationInfoModalClass) == 0x000470, "Member 'UCrewPurchaseScreen::CancellationInfoModalClass' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, LegalInfoModalClass) == 0x000498, "Member 'UCrewPurchaseScreen::LegalInfoModalClass' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, ResolveIssueModalClass) == 0x0004C0, "Member 'UCrewPurchaseScreen::ResolveIssueModalClass' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, RejoinModalClass) == 0x0004E8, "Member 'UCrewPurchaseScreen::RejoinModalClass' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_ToBattlePass) == 0x000510, "Member 'UCrewPurchaseScreen::Button_ToBattlePass' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_Purchase) == 0x000518, "Member 'UCrewPurchaseScreen::Button_Purchase' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_Rejoin) == 0x000520, "Member 'UCrewPurchaseScreen::Button_Rejoin' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_ResolvePayment) == 0x000528, "Member 'UCrewPurchaseScreen::Button_ResolvePayment' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_WatchTrailer) == 0x000530, "Member 'UCrewPurchaseScreen::Button_WatchTrailer' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_Terms) == 0x000538, "Member 'UCrewPurchaseScreen::Button_Terms' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Button_CancellationInfo) == 0x000540, "Member 'UCrewPurchaseScreen::Button_CancellationInfo' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, EntryBox_RecurringRewards) == 0x000548, "Member 'UCrewPurchaseScreen::EntryBox_RecurringRewards' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, EntryBox_LimitedTimeRewards) == 0x000550, "Member 'UCrewPurchaseScreen::EntryBox_LimitedTimeRewards' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Details_CurrentCrewTile) == 0x000558, "Member 'UCrewPurchaseScreen::Details_CurrentCrewTile' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Text_LimitedTime) == 0x000560, "Member 'UCrewPurchaseScreen::Text_LimitedTime' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Overlay_UserInformation) == 0x000568, "Member 'UCrewPurchaseScreen::Overlay_UserInformation' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Text_UserInformation) == 0x000570, "Member 'UCrewPurchaseScreen::Text_UserInformation' has a wrong offset!");
static_assert(offsetof(UCrewPurchaseScreen, Text_CrewDisclaimer) == 0x000578, "Member 'UCrewPurchaseScreen::Text_CrewDisclaimer' has a wrong offset!");

class UCrewRewardTile : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x40];
	float                                         TileImageStreamoutSeconds;
	uint8                                         Pad_1424[0x4];
	class UImage*                                 Image_TileImage;
	class UCommonTextBlock*                       Text_TileLabel;
	uint8                                         Pad_1438[0x8];

public:
	void OnDownloadTileImageComplete(class UTexture2D* Texture);
	void OnStartingDownloadTileImage();
	void OnUpdateOwnedState(bool bOwned);

	bool IsMonthlyBenefit() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewRewardTile">();
	}
	static class UCrewRewardTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewRewardTile>();
	}
};
static_assert(alignof(UCrewRewardTile) == 0x000010, "Wrong alignment on UCrewRewardTile");
static_assert(sizeof(UCrewRewardTile) == 0x001440, "Wrong size on UCrewRewardTile");
static_assert(offsetof(UCrewRewardTile, TileImageStreamoutSeconds) == 0x001420, "Member 'UCrewRewardTile::TileImageStreamoutSeconds' has a wrong offset!");
static_assert(offsetof(UCrewRewardTile, Image_TileImage) == 0x001428, "Member 'UCrewRewardTile::Image_TileImage' has a wrong offset!");
static_assert(offsetof(UCrewRewardTile, Text_TileLabel) == 0x001430, "Member 'UCrewRewardTile::Text_TileLabel' has a wrong offset!");

class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{
public:
	uint8                                         Pad_3E8[0x38];
	TSoftClassPtr<class UClass>                   ResolveIssueModalClass;
	class UBattlePassSeasonHeading*               Heading_SeasonInfo;
	class UCommonTextBlock*                       Text_Description;
	class UCommonButtonBase*                      Button_Claim;
	class UCommonButtonBase*                      Button_ResolveIssue;
	class UCommonButtonBase*                      Button_GiftBattlePass;
	class UCommonRichTextBlock*                   RichText_Disclaimer;
	uint8                                         Pad_478[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewSeasonLaunchScreen">();
	}
	static class UCrewSeasonLaunchScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewSeasonLaunchScreen>();
	}
};
static_assert(alignof(UCrewSeasonLaunchScreen) == 0x000008, "Wrong alignment on UCrewSeasonLaunchScreen");
static_assert(sizeof(UCrewSeasonLaunchScreen) == 0x0004D8, "Wrong size on UCrewSeasonLaunchScreen");
static_assert(offsetof(UCrewSeasonLaunchScreen, ResolveIssueModalClass) == 0x000420, "Member 'UCrewSeasonLaunchScreen::ResolveIssueModalClass' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen, Heading_SeasonInfo) == 0x000448, "Member 'UCrewSeasonLaunchScreen::Heading_SeasonInfo' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen, Text_Description) == 0x000450, "Member 'UCrewSeasonLaunchScreen::Text_Description' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen, Button_Claim) == 0x000458, "Member 'UCrewSeasonLaunchScreen::Button_Claim' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen, Button_ResolveIssue) == 0x000460, "Member 'UCrewSeasonLaunchScreen::Button_ResolveIssue' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen, Button_GiftBattlePass) == 0x000468, "Member 'UCrewSeasonLaunchScreen::Button_GiftBattlePass' has a wrong offset!");
static_assert(offsetof(UCrewSeasonLaunchScreen, RichText_Disclaimer) == 0x000470, "Member 'UCrewSeasonLaunchScreen::RichText_Disclaimer' has a wrong offset!");

class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend
{
public:
	class UCrewSubscriptionContentContainer*      Widget_CrewContentContainer;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewStandaloneSubscriptionContentContainer">();
	}
	static class UCrewStandaloneSubscriptionContentContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewStandaloneSubscriptionContentContainer>();
	}
};
static_assert(alignof(UCrewStandaloneSubscriptionContentContainer) == 0x000008, "Wrong alignment on UCrewStandaloneSubscriptionContentContainer");
static_assert(sizeof(UCrewStandaloneSubscriptionContentContainer) == 0x0005E8, "Wrong size on UCrewStandaloneSubscriptionContentContainer");
static_assert(offsetof(UCrewStandaloneSubscriptionContentContainer, Widget_CrewContentContainer) == 0x0005E0, "Member 'UCrewStandaloneSubscriptionContentContainer::Widget_CrewContentContainer' has a wrong offset!");

class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x30];
	TArray<struct FCrewSubscriptionContentTabData> TabsData;
	struct FDataTableRowHandle                    NextTabInputAction;
	struct FDataTableRowHandle                    PreviousTabInputAction;
	class UDynamicEntryBox*                       EntryBox_Tabs;
	class UCommonButtonGroupBase*                 ButtonGroup_Tabs;
	class UCommonActivatableWidgetSwitcher*       Switcher_Tabs;
	class UWidget*                                Widget_TabsContainer;
	float                                         SpacingAdjustmentForTabs;
	struct FPrimaryContentSetup                   ContentSetup;
	uint8                                         Pad_42F[0x19];

public:
	void OnTabSelected(int32 TabIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewSubscriptionContentContainer">();
	}
	static class UCrewSubscriptionContentContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewSubscriptionContentContainer>();
	}
};
static_assert(alignof(UCrewSubscriptionContentContainer) == 0x000008, "Wrong alignment on UCrewSubscriptionContentContainer");
static_assert(sizeof(UCrewSubscriptionContentContainer) == 0x000448, "Wrong size on UCrewSubscriptionContentContainer");
static_assert(offsetof(UCrewSubscriptionContentContainer, TabsData) == 0x0003D8, "Member 'UCrewSubscriptionContentContainer::TabsData' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, NextTabInputAction) == 0x0003E8, "Member 'UCrewSubscriptionContentContainer::NextTabInputAction' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, PreviousTabInputAction) == 0x0003F8, "Member 'UCrewSubscriptionContentContainer::PreviousTabInputAction' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, EntryBox_Tabs) == 0x000408, "Member 'UCrewSubscriptionContentContainer::EntryBox_Tabs' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, ButtonGroup_Tabs) == 0x000410, "Member 'UCrewSubscriptionContentContainer::ButtonGroup_Tabs' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, Switcher_Tabs) == 0x000418, "Member 'UCrewSubscriptionContentContainer::Switcher_Tabs' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, Widget_TabsContainer) == 0x000420, "Member 'UCrewSubscriptionContentContainer::Widget_TabsContainer' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, SpacingAdjustmentForTabs) == 0x000428, "Member 'UCrewSubscriptionContentContainer::SpacingAdjustmentForTabs' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionContentContainer, ContentSetup) == 0x00042C, "Member 'UCrewSubscriptionContentContainer::ContentSetup' has a wrong offset!");

class UCrewSubscriptionErrorModal : public UCommonActivatableWidget
{
public:
	class UCommonButtonBase*                      Button_Confirm;
	class UCommonButtonBase*                      Button_CloseMobile;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewSubscriptionErrorModal">();
	}
	static class UCrewSubscriptionErrorModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewSubscriptionErrorModal>();
	}
};
static_assert(alignof(UCrewSubscriptionErrorModal) == 0x000008, "Wrong alignment on UCrewSubscriptionErrorModal");
static_assert(sizeof(UCrewSubscriptionErrorModal) == 0x0003B8, "Wrong size on UCrewSubscriptionErrorModal");
static_assert(offsetof(UCrewSubscriptionErrorModal, Button_Confirm) == 0x0003A8, "Member 'UCrewSubscriptionErrorModal::Button_Confirm' has a wrong offset!");
static_assert(offsetof(UCrewSubscriptionErrorModal, Button_CloseMobile) == 0x0003B0, "Member 'UCrewSubscriptionErrorModal::Button_CloseMobile' has a wrong offset!");

class UCrewTileDetails : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x28];
	class UCommonTextBlock*                       Text_Title;
	class UCommonRichTextBlock*                   RichText_Description;
	class UDynamicEntryBox*                       EntryBox_Tags;
	class UCommonButtonBase*                      Button_MobileMoreInfo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewTileDetails">();
	}
	static class UCrewTileDetails* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewTileDetails>();
	}
};
static_assert(alignof(UCrewTileDetails) == 0x000008, "Wrong alignment on UCrewTileDetails");
static_assert(sizeof(UCrewTileDetails) == 0x0002D8, "Wrong size on UCrewTileDetails");
static_assert(offsetof(UCrewTileDetails, Text_Title) == 0x0002B8, "Member 'UCrewTileDetails::Text_Title' has a wrong offset!");
static_assert(offsetof(UCrewTileDetails, RichText_Description) == 0x0002C0, "Member 'UCrewTileDetails::RichText_Description' has a wrong offset!");
static_assert(offsetof(UCrewTileDetails, EntryBox_Tags) == 0x0002C8, "Member 'UCrewTileDetails::EntryBox_Tags' has a wrong offset!");
static_assert(offsetof(UCrewTileDetails, Button_MobileMoreInfo) == 0x0002D0, "Member 'UCrewTileDetails::Button_MobileMoreInfo' has a wrong offset!");

class UCrewTileDetailsTag : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                   Text_Label;

public:
	void OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewTileDetailsTag">();
	}
	static class UCrewTileDetailsTag* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewTileDetailsTag>();
	}
};
static_assert(alignof(UCrewTileDetailsTag) == 0x000008, "Wrong alignment on UCrewTileDetailsTag");
static_assert(sizeof(UCrewTileDetailsTag) == 0x000298, "Wrong size on UCrewTileDetailsTag");
static_assert(offsetof(UCrewTileDetailsTag, Text_Label) == 0x000290, "Member 'UCrewTileDetailsTag::Text_Label' has a wrong offset!");

class UCrewUIGameFeatureAction final : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UClass>                   BattlePassCrewContainerClass;
	TSoftClassPtr<class UClass>                   CrewContentContainerClass;
	TSoftClassPtr<class UClass>                   CrewStandaloneContentContainerClass;
	TSoftClassPtr<class UClass>                   CrewPurchaseScreenClass;
	TSoftClassPtr<class UClass>                   ProgressionScreenClass;
	TSoftClassPtr<class UClass>                   CrewPriceChangeAcknowledgeModalClass;
	TSoftClassPtr<class UClass>                   MultiSubAlertModalClass;
	TArray<struct FFortProgressiveSet>            ProgressiveCosmeticSets;
	uint8                                         Pad_150[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrewUIGameFeatureAction">();
	}
	static class UCrewUIGameFeatureAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrewUIGameFeatureAction>();
	}
};
static_assert(alignof(UCrewUIGameFeatureAction) == 0x000008, "Wrong alignment on UCrewUIGameFeatureAction");
static_assert(sizeof(UCrewUIGameFeatureAction) == 0x000160, "Wrong size on UCrewUIGameFeatureAction");
static_assert(offsetof(UCrewUIGameFeatureAction, BattlePassCrewContainerClass) == 0x000028, "Member 'UCrewUIGameFeatureAction::BattlePassCrewContainerClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, CrewContentContainerClass) == 0x000050, "Member 'UCrewUIGameFeatureAction::CrewContentContainerClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, CrewStandaloneContentContainerClass) == 0x000078, "Member 'UCrewUIGameFeatureAction::CrewStandaloneContentContainerClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, CrewPurchaseScreenClass) == 0x0000A0, "Member 'UCrewUIGameFeatureAction::CrewPurchaseScreenClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, ProgressionScreenClass) == 0x0000C8, "Member 'UCrewUIGameFeatureAction::ProgressionScreenClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, CrewPriceChangeAcknowledgeModalClass) == 0x0000F0, "Member 'UCrewUIGameFeatureAction::CrewPriceChangeAcknowledgeModalClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, MultiSubAlertModalClass) == 0x000118, "Member 'UCrewUIGameFeatureAction::MultiSubAlertModalClass' has a wrong offset!");
static_assert(offsetof(UCrewUIGameFeatureAction, ProgressiveCosmeticSets) == 0x000140, "Member 'UCrewUIGameFeatureAction::ProgressiveCosmeticSets' has a wrong offset!");

class UFortProgressiveContentContainer : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x38];
	class UCommonActivatableWidgetSwitcher*       Switcher_PrimaryContent;
	class UFortProgressiveTableOfContentsScreen*  Widget_ProgressiveTableOfContentsScreen;
	class UFortProgressiveItemScreen*             Widget_ProgressiveItemScreen;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveContentContainer">();
	}
	static class UFortProgressiveContentContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveContentContainer>();
	}
};
static_assert(alignof(UFortProgressiveContentContainer) == 0x000008, "Wrong alignment on UFortProgressiveContentContainer");
static_assert(sizeof(UFortProgressiveContentContainer) == 0x0003F8, "Wrong size on UFortProgressiveContentContainer");
static_assert(offsetof(UFortProgressiveContentContainer, Switcher_PrimaryContent) == 0x0003E0, "Member 'UFortProgressiveContentContainer::Switcher_PrimaryContent' has a wrong offset!");
static_assert(offsetof(UFortProgressiveContentContainer, Widget_ProgressiveTableOfContentsScreen) == 0x0003E8, "Member 'UFortProgressiveContentContainer::Widget_ProgressiveTableOfContentsScreen' has a wrong offset!");
static_assert(offsetof(UFortProgressiveContentContainer, Widget_ProgressiveItemScreen) == 0x0003F0, "Member 'UFortProgressiveContentContainer::Widget_ProgressiveItemScreen' has a wrong offset!");

class UFortProgressiveItemDetailsWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                       Text_CosmeticStage;
	class UCommonRichTextBlock*                   Text_UnlockCriteria;
	class UWidget*                                Widget_UnlockCriteriaContainer;
	class UAthenaRewardItemTypeRarityTag*         Widget_ItemTypeRarityTag;
	class UWidget*                                Tag_Owned;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveItemDetailsWidget">();
	}
	static class UFortProgressiveItemDetailsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveItemDetailsWidget>();
	}
};
static_assert(alignof(UFortProgressiveItemDetailsWidget) == 0x000008, "Wrong alignment on UFortProgressiveItemDetailsWidget");
static_assert(sizeof(UFortProgressiveItemDetailsWidget) == 0x000290, "Wrong size on UFortProgressiveItemDetailsWidget");
static_assert(offsetof(UFortProgressiveItemDetailsWidget, Text_CosmeticStage) == 0x000268, "Member 'UFortProgressiveItemDetailsWidget::Text_CosmeticStage' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemDetailsWidget, Text_UnlockCriteria) == 0x000270, "Member 'UFortProgressiveItemDetailsWidget::Text_UnlockCriteria' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemDetailsWidget, Widget_UnlockCriteriaContainer) == 0x000278, "Member 'UFortProgressiveItemDetailsWidget::Widget_UnlockCriteriaContainer' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemDetailsWidget, Widget_ItemTypeRarityTag) == 0x000280, "Member 'UFortProgressiveItemDetailsWidget::Widget_ItemTypeRarityTag' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemDetailsWidget, Tag_Owned) == 0x000288, "Member 'UFortProgressiveItemDetailsWidget::Tag_Owned' has a wrong offset!");

class UFortProgressiveScreenBase : public UFortItemPreviewScreen
{
public:
	uint8                                         Pad_670[0x54];
	float                                         VariantPreviewTime;
	uint8                                         Pad_6C8[0x10];

public:
	void BP_OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveScreenBase">();
	}
	static class UFortProgressiveScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveScreenBase>();
	}
};
static_assert(alignof(UFortProgressiveScreenBase) == 0x000008, "Wrong alignment on UFortProgressiveScreenBase");
static_assert(sizeof(UFortProgressiveScreenBase) == 0x0006D8, "Wrong size on UFortProgressiveScreenBase");
static_assert(offsetof(UFortProgressiveScreenBase, VariantPreviewTime) == 0x0006C4, "Member 'UFortProgressiveScreenBase::VariantPreviewTime' has a wrong offset!");

class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{
public:
	class UWidget*                                ContentPurchasedFocusWidget;
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_MobileBack;
	class UCommonButtonBase*                      Button_MoreInfo;
	class UBattlePassCrewPurchaseButton*          Button_Subscribe;
	class UCommonButtonBase*                      Button_PreviewStyles;
	class UCommonTextBlock*                       Text_ExpirationFinePrint;
	class UCommonTextBlock*                       Text_NewStagesUnlockFinePrint;
	class UDynamicEntryBox*                       EntryBox_StagesPips;
	class UCommonButtonGroupBase*                 ButtonGroup_StagesPips;
	class UFortProgressiveItemDetailsWidget*      Widget_ProgressiveItemDetails;
	class UFortProgressiveStageList*              Widget_ProgressiveStageList;
	class UFortProgressiveItemStateTitleWidget*   ProgressiveItemStateTitle;
	TSoftClassPtr<class UClass>                   MoreInfoModalClass;
	class FName                                   SubscribedMaterialParameterName;
	uint8                                         Pad_76C[0x8C];

public:
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void OnErrorStateTextUpdated(const class FText& ErrorStateText);
	void OnItemSelected();
	void OnSetIsSoloScreen(const bool bInIsSoloScreen);
	void OnUpdateSubscriptionState(const bool bSubscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveItemScreen">();
	}
	static class UFortProgressiveItemScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveItemScreen>();
	}
};
static_assert(alignof(UFortProgressiveItemScreen) == 0x000008, "Wrong alignment on UFortProgressiveItemScreen");
static_assert(sizeof(UFortProgressiveItemScreen) == 0x0007F8, "Wrong size on UFortProgressiveItemScreen");
static_assert(offsetof(UFortProgressiveItemScreen, ContentPurchasedFocusWidget) == 0x0006D8, "Member 'UFortProgressiveItemScreen::ContentPurchasedFocusWidget' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Button_Back) == 0x0006E0, "Member 'UFortProgressiveItemScreen::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Button_MobileBack) == 0x0006E8, "Member 'UFortProgressiveItemScreen::Button_MobileBack' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Button_MoreInfo) == 0x0006F0, "Member 'UFortProgressiveItemScreen::Button_MoreInfo' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Button_Subscribe) == 0x0006F8, "Member 'UFortProgressiveItemScreen::Button_Subscribe' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Button_PreviewStyles) == 0x000700, "Member 'UFortProgressiveItemScreen::Button_PreviewStyles' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Text_ExpirationFinePrint) == 0x000708, "Member 'UFortProgressiveItemScreen::Text_ExpirationFinePrint' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Text_NewStagesUnlockFinePrint) == 0x000710, "Member 'UFortProgressiveItemScreen::Text_NewStagesUnlockFinePrint' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, EntryBox_StagesPips) == 0x000718, "Member 'UFortProgressiveItemScreen::EntryBox_StagesPips' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, ButtonGroup_StagesPips) == 0x000720, "Member 'UFortProgressiveItemScreen::ButtonGroup_StagesPips' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Widget_ProgressiveItemDetails) == 0x000728, "Member 'UFortProgressiveItemScreen::Widget_ProgressiveItemDetails' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, Widget_ProgressiveStageList) == 0x000730, "Member 'UFortProgressiveItemScreen::Widget_ProgressiveStageList' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, ProgressiveItemStateTitle) == 0x000738, "Member 'UFortProgressiveItemScreen::ProgressiveItemStateTitle' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, MoreInfoModalClass) == 0x000740, "Member 'UFortProgressiveItemScreen::MoreInfoModalClass' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemScreen, SubscribedMaterialParameterName) == 0x000768, "Member 'UFortProgressiveItemScreen::SubscribedMaterialParameterName' has a wrong offset!");

class UFortProgressiveItemStateTitleWidget : public UUserWidget
{
public:
	void BP_OnSetHeaderInfo(const class FText& Subheading, const bool bSubscribed, const int32 UnlockedStages, const int32 MaxStages);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveItemStateTitleWidget">();
	}
	static class UFortProgressiveItemStateTitleWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveItemStateTitleWidget>();
	}
};
static_assert(alignof(UFortProgressiveItemStateTitleWidget) == 0x000008, "Wrong alignment on UFortProgressiveItemStateTitleWidget");
static_assert(sizeof(UFortProgressiveItemStateTitleWidget) == 0x000268, "Wrong size on UFortProgressiveItemStateTitleWidget");

class UFortProgressiveItemWidget : public UCommonButtonBase
{
public:
	class UAthenaItemShopReactiveTileText*        TileText_ItemName;
	struct FProgressiveStageItemInfo              StageItemInfo;
	uint8                                         Pad_1458[0x18];

public:
	void OnHighlighted();
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnStageItemChanged(const struct FProgressiveStageItemInfo& InStageItemInfo);
	void OnTileMaterialLoaded(const bool bSubscribed);
	void OnUnhighlighted();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveItemWidget">();
	}
	static class UFortProgressiveItemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveItemWidget>();
	}
};
static_assert(alignof(UFortProgressiveItemWidget) == 0x000010, "Wrong alignment on UFortProgressiveItemWidget");
static_assert(sizeof(UFortProgressiveItemWidget) == 0x001470, "Wrong size on UFortProgressiveItemWidget");
static_assert(offsetof(UFortProgressiveItemWidget, TileText_ItemName) == 0x0013E0, "Member 'UFortProgressiveItemWidget::TileText_ItemName' has a wrong offset!");
static_assert(offsetof(UFortProgressiveItemWidget, StageItemInfo) == 0x0013E8, "Member 'UFortProgressiveItemWidget::StageItemInfo' has a wrong offset!");

class UFortProgressiveSetDetailsWidget : public UUserWidget
{
public:
	class UCommonButtonBase*                      Button_MoreInfo;
	uint8                                         Pad_270[0x28];

public:
	void BP_OnUpdateSetDetails(const class FText& SetName, const class FText& ExpiringText, const bool bCompleted);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveSetDetailsWidget">();
	}
	static class UFortProgressiveSetDetailsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveSetDetailsWidget>();
	}
};
static_assert(alignof(UFortProgressiveSetDetailsWidget) == 0x000008, "Wrong alignment on UFortProgressiveSetDetailsWidget");
static_assert(sizeof(UFortProgressiveSetDetailsWidget) == 0x000298, "Wrong size on UFortProgressiveSetDetailsWidget");
static_assert(offsetof(UFortProgressiveSetDetailsWidget, Button_MoreInfo) == 0x000268, "Member 'UFortProgressiveSetDetailsWidget::Button_MoreInfo' has a wrong offset!");

class UFortProgressiveSetList : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class UAthenaScrollBox*                       ScrollBox_SetList;
	class UFortSwipePanel*                        SwipePanel_Navigation;
	class UCommonButtonGroupBase*                 ButtonGroup_SetTiles;
	int32                                         NumTilesPerPage;
	uint8                                         Pad_3CC[0x4];
	TArray<class UFortProgressiveSetTile*>        SetTiles;
	uint8                                         Pad_3E0[0x48];

public:
	class UFortProgressiveSetTile* AddSetTile();
	void ClearSetTiles();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveSetList">();
	}
	static class UFortProgressiveSetList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveSetList>();
	}
};
static_assert(alignof(UFortProgressiveSetList) == 0x000008, "Wrong alignment on UFortProgressiveSetList");
static_assert(sizeof(UFortProgressiveSetList) == 0x000428, "Wrong size on UFortProgressiveSetList");
static_assert(offsetof(UFortProgressiveSetList, ScrollBox_SetList) == 0x0003B0, "Member 'UFortProgressiveSetList::ScrollBox_SetList' has a wrong offset!");
static_assert(offsetof(UFortProgressiveSetList, SwipePanel_Navigation) == 0x0003B8, "Member 'UFortProgressiveSetList::SwipePanel_Navigation' has a wrong offset!");
static_assert(offsetof(UFortProgressiveSetList, ButtonGroup_SetTiles) == 0x0003C0, "Member 'UFortProgressiveSetList::ButtonGroup_SetTiles' has a wrong offset!");
static_assert(offsetof(UFortProgressiveSetList, NumTilesPerPage) == 0x0003C8, "Member 'UFortProgressiveSetList::NumTilesPerPage' has a wrong offset!");
static_assert(offsetof(UFortProgressiveSetList, SetTiles) == 0x0003D0, "Member 'UFortProgressiveSetList::SetTiles' has a wrong offset!");

class UFortProgressiveSetTile : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0xB0];

public:
	void BP_OnInitializeSetInfo(const struct FProgressiveSetInfo& InSetInfo, const class FText& BottomText, const class FText& BottomSubtext, const bool bSubscribed);
	void BP_OnTileMaterialLoaded(const bool bSubscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveSetTile">();
	}
	static class UFortProgressiveSetTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveSetTile>();
	}
};
static_assert(alignof(UFortProgressiveSetTile) == 0x000010, "Wrong alignment on UFortProgressiveSetTile");
static_assert(sizeof(UFortProgressiveSetTile) == 0x001490, "Wrong size on UFortProgressiveSetTile");

class UFortProgressiveStageList : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class UCommonButtonGroupBase*                 ButtonGroup_StageItems;
	class UAthenaScrollBox*                       ScrollBox_StageList;
	class UFortSwipePanel*                        SwipePanel_Navigation;
	uint8                                         Pad_3D8[0x8];
	TArray<class UFortProgressiveStageWidget*>    Stages;
	uint8                                         Pad_3F0[0x8];

public:
	class UFortProgressiveStageWidget* AddStageWidget();
	void ClearStageWidgets();
	void SelectStageInDirection(const int32 Direction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveStageList">();
	}
	static class UFortProgressiveStageList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveStageList>();
	}
};
static_assert(alignof(UFortProgressiveStageList) == 0x000008, "Wrong alignment on UFortProgressiveStageList");
static_assert(sizeof(UFortProgressiveStageList) == 0x0003F8, "Wrong size on UFortProgressiveStageList");
static_assert(offsetof(UFortProgressiveStageList, ButtonGroup_StageItems) == 0x0003C0, "Member 'UFortProgressiveStageList::ButtonGroup_StageItems' has a wrong offset!");
static_assert(offsetof(UFortProgressiveStageList, ScrollBox_StageList) == 0x0003C8, "Member 'UFortProgressiveStageList::ScrollBox_StageList' has a wrong offset!");
static_assert(offsetof(UFortProgressiveStageList, SwipePanel_Navigation) == 0x0003D0, "Member 'UFortProgressiveStageList::SwipePanel_Navigation' has a wrong offset!");
static_assert(offsetof(UFortProgressiveStageList, Stages) == 0x0003E0, "Member 'UFortProgressiveStageList::Stages' has a wrong offset!");

class UFortProgressiveStageWidget : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       Text_Month;
	uint8                                         Pad_298[0x18];

public:
	class UFortProgressiveItemWidget* AddStageItemWidget();
	void ClearStageItemWidgets();
	void OnPeekStateChanged(bool bIsInPeekState);
	void OnSetTooltipText(const class FText& InToolTipText);
	void OnSetTooltipVisible(const bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveStageWidget">();
	}
	static class UFortProgressiveStageWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveStageWidget>();
	}
};
static_assert(alignof(UFortProgressiveStageWidget) == 0x000008, "Wrong alignment on UFortProgressiveStageWidget");
static_assert(sizeof(UFortProgressiveStageWidget) == 0x0002B0, "Wrong size on UFortProgressiveStageWidget");
static_assert(offsetof(UFortProgressiveStageWidget, Text_Month) == 0x000290, "Member 'UFortProgressiveStageWidget::Text_Month' has a wrong offset!");

class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{
public:
	class UWidget*                                ContentPurchasedFocusWidget;
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_MobileBack;
	class UCommonButtonBase*                      Button_MoreInfo;
	class UBattlePassCrewPurchaseButton*          Button_Subscribe;
	class UFortProgressiveSetList*                Widget_SetList;
	class UFortProgressiveSetDetailsWidget*       Widget_SetDetails;
	class UFortProgressiveItemStateTitleWidget*   Widget_ItemStateTitle;
	class UDynamicEntryBox*                       EntryBox_SetPagesPips;
	class UCommonButtonGroupBase*                 ButtonGroup_SetPagesPips;
	TSoftClassPtr<class UClass>                   MoreInfoModalClass;
	class FName                                   SubscribedMaterialParameterName;
	uint8                                         Pad_754[0x14];

public:
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void BP_OnSetDescriptionText(const class FText& ProductDescription);
	void BP_OnUpdateBanner(const class FText& BannerText, const bool bAllSetsCompleted, const bool bSubscribed);
	void BP_OnUpdateErrorStateText(const class FText& ErrorStateText);
	void BP_OnUpdateNumTilesAvailable(const int32 NumTiles);
	void BP_OnUpdateSubscriptionState(const bool bSubscribed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressiveTableOfContentsScreen">();
	}
	static class UFortProgressiveTableOfContentsScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressiveTableOfContentsScreen>();
	}
};
static_assert(alignof(UFortProgressiveTableOfContentsScreen) == 0x000008, "Wrong alignment on UFortProgressiveTableOfContentsScreen");
static_assert(sizeof(UFortProgressiveTableOfContentsScreen) == 0x000768, "Wrong size on UFortProgressiveTableOfContentsScreen");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, ContentPurchasedFocusWidget) == 0x0006D8, "Member 'UFortProgressiveTableOfContentsScreen::ContentPurchasedFocusWidget' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Button_Back) == 0x0006E0, "Member 'UFortProgressiveTableOfContentsScreen::Button_Back' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Button_MobileBack) == 0x0006E8, "Member 'UFortProgressiveTableOfContentsScreen::Button_MobileBack' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Button_MoreInfo) == 0x0006F0, "Member 'UFortProgressiveTableOfContentsScreen::Button_MoreInfo' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Button_Subscribe) == 0x0006F8, "Member 'UFortProgressiveTableOfContentsScreen::Button_Subscribe' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Widget_SetList) == 0x000700, "Member 'UFortProgressiveTableOfContentsScreen::Widget_SetList' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Widget_SetDetails) == 0x000708, "Member 'UFortProgressiveTableOfContentsScreen::Widget_SetDetails' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, Widget_ItemStateTitle) == 0x000710, "Member 'UFortProgressiveTableOfContentsScreen::Widget_ItemStateTitle' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, EntryBox_SetPagesPips) == 0x000718, "Member 'UFortProgressiveTableOfContentsScreen::EntryBox_SetPagesPips' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, ButtonGroup_SetPagesPips) == 0x000720, "Member 'UFortProgressiveTableOfContentsScreen::ButtonGroup_SetPagesPips' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, MoreInfoModalClass) == 0x000728, "Member 'UFortProgressiveTableOfContentsScreen::MoreInfoModalClass' has a wrong offset!");
static_assert(offsetof(UFortProgressiveTableOfContentsScreen, SubscribedMaterialParameterName) == 0x000750, "Member 'UFortProgressiveTableOfContentsScreen::SubscribedMaterialParameterName' has a wrong offset!");

}
