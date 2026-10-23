#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CrewUI_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct BattlePassCrewPurchaseContainer_OnContentStateUpdated final
{
public:
	EBattlePassCrewContentState                   InState;
	bool                                          bInScreenOpened;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_OnContentStateUpdated) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_OnContentStateUpdated");
static_assert(sizeof(BattlePassCrewPurchaseContainer_OnContentStateUpdated) == 0x000002, "Wrong size on BattlePassCrewPurchaseContainer_OnContentStateUpdated");
static_assert(offsetof(BattlePassCrewPurchaseContainer_OnContentStateUpdated, InState) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_OnContentStateUpdated::InState' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_OnContentStateUpdated, bInScreenOpened) == 0x000001, "Member 'BattlePassCrewPurchaseContainer_OnContentStateUpdated::bInScreenOpened' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation final
{
public:
	bool                                          bCanClaimRewards;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation");
static_assert(sizeof(BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation");
static_assert(offsetof(BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation, bCanClaimRewards) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation::bCanClaimRewards' has a wrong offset!");

struct BattlePassPurchaseScreen_OnPurchaseStateChanged final
{
public:
	EBattlePassPurchaseState                      InCurrentState;
};
static_assert(alignof(BattlePassPurchaseScreen_OnPurchaseStateChanged) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_OnPurchaseStateChanged");
static_assert(sizeof(BattlePassPurchaseScreen_OnPurchaseStateChanged) == 0x000001, "Wrong size on BattlePassPurchaseScreen_OnPurchaseStateChanged");
static_assert(offsetof(BattlePassPurchaseScreen_OnPurchaseStateChanged, InCurrentState) == 0x000000, "Member 'BattlePassPurchaseScreen_OnPurchaseStateChanged::InCurrentState' has a wrong offset!");

struct BattlePassPurchaseScreen_OnSetNavButtonNotificationText final
{
public:
	class FText                                   NotificationText;
};
static_assert(alignof(BattlePassPurchaseScreen_OnSetNavButtonNotificationText) == 0x000008, "Wrong alignment on BattlePassPurchaseScreen_OnSetNavButtonNotificationText");
static_assert(sizeof(BattlePassPurchaseScreen_OnSetNavButtonNotificationText) == 0x000018, "Wrong size on BattlePassPurchaseScreen_OnSetNavButtonNotificationText");
static_assert(offsetof(BattlePassPurchaseScreen_OnSetNavButtonNotificationText, NotificationText) == 0x000000, "Member 'BattlePassPurchaseScreen_OnSetNavButtonNotificationText::NotificationText' has a wrong offset!");

struct BattlePassPurchaseScreen_OnSetScreenInteractable final
{
public:
	bool                                          bInteractable;
};
static_assert(alignof(BattlePassPurchaseScreen_OnSetScreenInteractable) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_OnSetScreenInteractable");
static_assert(sizeof(BattlePassPurchaseScreen_OnSetScreenInteractable) == 0x000001, "Wrong size on BattlePassPurchaseScreen_OnSetScreenInteractable");
static_assert(offsetof(BattlePassPurchaseScreen_OnSetScreenInteractable, bInteractable) == 0x000000, "Member 'BattlePassPurchaseScreen_OnSetScreenInteractable::bInteractable' has a wrong offset!");

struct BattlePassPurchaseScreen_OnShowNavButtonNotification final
{
public:
	bool                                          bShowNotification;
};
static_assert(alignof(BattlePassPurchaseScreen_OnShowNavButtonNotification) == 0x000001, "Wrong alignment on BattlePassPurchaseScreen_OnShowNavButtonNotification");
static_assert(sizeof(BattlePassPurchaseScreen_OnShowNavButtonNotification) == 0x000001, "Wrong size on BattlePassPurchaseScreen_OnShowNavButtonNotification");
static_assert(offsetof(BattlePassPurchaseScreen_OnShowNavButtonNotification, bShowNotification) == 0x000000, "Member 'BattlePassPurchaseScreen_OnShowNavButtonNotification::bShowNotification' has a wrong offset!");

struct CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL final
{
public:
	class FString                                 MoreInfoUrl;
};
static_assert(alignof(CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL) == 0x000008, "Wrong alignment on CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL");
static_assert(sizeof(CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL) == 0x000010, "Wrong size on CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL");
static_assert(offsetof(CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL, MoreInfoUrl) == 0x000000, "Member 'CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL::MoreInfoUrl' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable final
{
public:
	TArray<struct FCrewTableRow>                  PriceChangeByRegionRows;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable) == 0x000010, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable, PriceChangeByRegionRows) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable::PriceChangeByRegionRows' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText final
{
public:
	class FText                                   BodyText;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText, BodyText) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText::BodyText' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText final
{
public:
	class FText                                   CancelSubscriptionButtonText;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText, CancelSubscriptionButtonText) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText::CancelSubscriptionButtonText' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText final
{
public:
	class FText                                   CheckboxText;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText, CheckboxText) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText::CheckboxText' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText final
{
public:
	class FText                                   ConfirmButtonText;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText, ConfirmButtonText) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText::ConfirmButtonText' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText final
{
public:
	class FText                                   ConfirmButtonText;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText, ConfirmButtonText) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText::ConfirmButtonText' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl final
{
public:
	class FText                                   MoreInfoUrl;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl, MoreInfoUrl) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl::MoreInfoUrl' has a wrong offset!");

struct CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle final
{
public:
	class FText                                   Title;
};
static_assert(alignof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle) == 0x000008, "Wrong alignment on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle");
static_assert(sizeof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle) == 0x000018, "Wrong size on CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle");
static_assert(offsetof(CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle, Title) == 0x000000, "Member 'CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle::Title' has a wrong offset!");

struct CrewPurchaseScreen_BeginProgress final
{
public:
	class FText                                   ProgressLabel;
};
static_assert(alignof(CrewPurchaseScreen_BeginProgress) == 0x000008, "Wrong alignment on CrewPurchaseScreen_BeginProgress");
static_assert(sizeof(CrewPurchaseScreen_BeginProgress) == 0x000018, "Wrong size on CrewPurchaseScreen_BeginProgress");
static_assert(offsetof(CrewPurchaseScreen_BeginProgress, ProgressLabel) == 0x000000, "Member 'CrewPurchaseScreen_BeginProgress::ProgressLabel' has a wrong offset!");

struct CrewPurchaseScreen_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(CrewPurchaseScreen_BlockScreenContent) == 0x000008, "Wrong alignment on CrewPurchaseScreen_BlockScreenContent");
static_assert(sizeof(CrewPurchaseScreen_BlockScreenContent) == 0x000020, "Wrong size on CrewPurchaseScreen_BlockScreenContent");
static_assert(offsetof(CrewPurchaseScreen_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'CrewPurchaseScreen_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'CrewPurchaseScreen_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct CrewPurchaseScreen_OnContainerTabVisibilityUpdated final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x3];
	float                                         SpacingAdjustmentForTabs;
};
static_assert(alignof(CrewPurchaseScreen_OnContainerTabVisibilityUpdated) == 0x000004, "Wrong alignment on CrewPurchaseScreen_OnContainerTabVisibilityUpdated");
static_assert(sizeof(CrewPurchaseScreen_OnContainerTabVisibilityUpdated) == 0x000008, "Wrong size on CrewPurchaseScreen_OnContainerTabVisibilityUpdated");
static_assert(offsetof(CrewPurchaseScreen_OnContainerTabVisibilityUpdated, bTabsVisible) == 0x000000, "Member 'CrewPurchaseScreen_OnContainerTabVisibilityUpdated::bTabsVisible' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_OnContainerTabVisibilityUpdated, SpacingAdjustmentForTabs) == 0x000004, "Member 'CrewPurchaseScreen_OnContainerTabVisibilityUpdated::SpacingAdjustmentForTabs' has a wrong offset!");

struct CrewPurchaseScreen_OnSetNavButtonNotificationText final
{
public:
	class FText                                   NotificationText;
};
static_assert(alignof(CrewPurchaseScreen_OnSetNavButtonNotificationText) == 0x000008, "Wrong alignment on CrewPurchaseScreen_OnSetNavButtonNotificationText");
static_assert(sizeof(CrewPurchaseScreen_OnSetNavButtonNotificationText) == 0x000018, "Wrong size on CrewPurchaseScreen_OnSetNavButtonNotificationText");
static_assert(offsetof(CrewPurchaseScreen_OnSetNavButtonNotificationText, NotificationText) == 0x000000, "Member 'CrewPurchaseScreen_OnSetNavButtonNotificationText::NotificationText' has a wrong offset!");

struct CrewPurchaseScreen_OnShowNavButtonNotification final
{
public:
	bool                                          bShowNotification;
};
static_assert(alignof(CrewPurchaseScreen_OnShowNavButtonNotification) == 0x000001, "Wrong alignment on CrewPurchaseScreen_OnShowNavButtonNotification");
static_assert(sizeof(CrewPurchaseScreen_OnShowNavButtonNotification) == 0x000001, "Wrong size on CrewPurchaseScreen_OnShowNavButtonNotification");
static_assert(offsetof(CrewPurchaseScreen_OnShowNavButtonNotification, bShowNotification) == 0x000000, "Member 'CrewPurchaseScreen_OnShowNavButtonNotification::bShowNotification' has a wrong offset!");

struct CrewPurchaseScreen_OnUpdatePurchaseButtonState final
{
public:
	ECrewPurchaseButtonState                      ButtonState;
};
static_assert(alignof(CrewPurchaseScreen_OnUpdatePurchaseButtonState) == 0x000001, "Wrong alignment on CrewPurchaseScreen_OnUpdatePurchaseButtonState");
static_assert(sizeof(CrewPurchaseScreen_OnUpdatePurchaseButtonState) == 0x000001, "Wrong size on CrewPurchaseScreen_OnUpdatePurchaseButtonState");
static_assert(offsetof(CrewPurchaseScreen_OnUpdatePurchaseButtonState, ButtonState) == 0x000000, "Member 'CrewPurchaseScreen_OnUpdatePurchaseButtonState::ButtonState' has a wrong offset!");

struct CrewPurchaseScreen_OnUpdateVBuckRefundVisibility final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(CrewPurchaseScreen_OnUpdateVBuckRefundVisibility) == 0x000001, "Wrong alignment on CrewPurchaseScreen_OnUpdateVBuckRefundVisibility");
static_assert(sizeof(CrewPurchaseScreen_OnUpdateVBuckRefundVisibility) == 0x000001, "Wrong size on CrewPurchaseScreen_OnUpdateVBuckRefundVisibility");
static_assert(offsetof(CrewPurchaseScreen_OnUpdateVBuckRefundVisibility, bVisible) == 0x000000, "Member 'CrewPurchaseScreen_OnUpdateVBuckRefundVisibility::bVisible' has a wrong offset!");

struct CrewPurchaseScreen_OnUserInformationTextsUpdated final
{
public:
	class FText                                   UserInformationText1;
	class FText                                   UserInformationText2;
	EMcpSubscriptionState                         SubscriptionState;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(CrewPurchaseScreen_OnUserInformationTextsUpdated) == 0x000008, "Wrong alignment on CrewPurchaseScreen_OnUserInformationTextsUpdated");
static_assert(sizeof(CrewPurchaseScreen_OnUserInformationTextsUpdated) == 0x000038, "Wrong size on CrewPurchaseScreen_OnUserInformationTextsUpdated");
static_assert(offsetof(CrewPurchaseScreen_OnUserInformationTextsUpdated, UserInformationText1) == 0x000000, "Member 'CrewPurchaseScreen_OnUserInformationTextsUpdated::UserInformationText1' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_OnUserInformationTextsUpdated, UserInformationText2) == 0x000018, "Member 'CrewPurchaseScreen_OnUserInformationTextsUpdated::UserInformationText2' has a wrong offset!");
static_assert(offsetof(CrewPurchaseScreen_OnUserInformationTextsUpdated, SubscriptionState) == 0x000030, "Member 'CrewPurchaseScreen_OnUserInformationTextsUpdated::SubscriptionState' has a wrong offset!");

struct CrewRewardTile_OnDownloadTileImageComplete final
{
public:
	class UTexture2D*                             Texture;
};
static_assert(alignof(CrewRewardTile_OnDownloadTileImageComplete) == 0x000008, "Wrong alignment on CrewRewardTile_OnDownloadTileImageComplete");
static_assert(sizeof(CrewRewardTile_OnDownloadTileImageComplete) == 0x000008, "Wrong size on CrewRewardTile_OnDownloadTileImageComplete");
static_assert(offsetof(CrewRewardTile_OnDownloadTileImageComplete, Texture) == 0x000000, "Member 'CrewRewardTile_OnDownloadTileImageComplete::Texture' has a wrong offset!");

struct CrewRewardTile_OnUpdateOwnedState final
{
public:
	bool                                          bOwned;
};
static_assert(alignof(CrewRewardTile_OnUpdateOwnedState) == 0x000001, "Wrong alignment on CrewRewardTile_OnUpdateOwnedState");
static_assert(sizeof(CrewRewardTile_OnUpdateOwnedState) == 0x000001, "Wrong size on CrewRewardTile_OnUpdateOwnedState");
static_assert(offsetof(CrewRewardTile_OnUpdateOwnedState, bOwned) == 0x000000, "Member 'CrewRewardTile_OnUpdateOwnedState::bOwned' has a wrong offset!");

struct CrewRewardTile_IsMonthlyBenefit final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(CrewRewardTile_IsMonthlyBenefit) == 0x000001, "Wrong alignment on CrewRewardTile_IsMonthlyBenefit");
static_assert(sizeof(CrewRewardTile_IsMonthlyBenefit) == 0x000001, "Wrong size on CrewRewardTile_IsMonthlyBenefit");
static_assert(offsetof(CrewRewardTile_IsMonthlyBenefit, ReturnValue) == 0x000000, "Member 'CrewRewardTile_IsMonthlyBenefit::ReturnValue' has a wrong offset!");

struct CrewSubscriptionContentContainer_OnTabSelected final
{
public:
	int32                                         TabIndex;
};
static_assert(alignof(CrewSubscriptionContentContainer_OnTabSelected) == 0x000004, "Wrong alignment on CrewSubscriptionContentContainer_OnTabSelected");
static_assert(sizeof(CrewSubscriptionContentContainer_OnTabSelected) == 0x000004, "Wrong size on CrewSubscriptionContentContainer_OnTabSelected");
static_assert(offsetof(CrewSubscriptionContentContainer_OnTabSelected, TabIndex) == 0x000000, "Member 'CrewSubscriptionContentContainer_OnTabSelected::TabIndex' has a wrong offset!");

struct CrewTileDetailsTag_OnTagSetup final
{
public:
	ECrewDetailsTag                               RewardTag;
	bool                                          bIsOwnedTag;
};
static_assert(alignof(CrewTileDetailsTag_OnTagSetup) == 0x000001, "Wrong alignment on CrewTileDetailsTag_OnTagSetup");
static_assert(sizeof(CrewTileDetailsTag_OnTagSetup) == 0x000002, "Wrong size on CrewTileDetailsTag_OnTagSetup");
static_assert(offsetof(CrewTileDetailsTag_OnTagSetup, RewardTag) == 0x000000, "Member 'CrewTileDetailsTag_OnTagSetup::RewardTag' has a wrong offset!");
static_assert(offsetof(CrewTileDetailsTag_OnTagSetup, bIsOwnedTag) == 0x000001, "Member 'CrewTileDetailsTag_OnTagSetup::bIsOwnedTag' has a wrong offset!");

struct FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated final
{
public:
	bool                                          bTabsVisible;
	uint8                                         Pad_1[0x3];
	float                                         SpacingAdjustmentForTabs;
};
static_assert(alignof(FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated) == 0x000004, "Wrong alignment on FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated");
static_assert(sizeof(FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated) == 0x000008, "Wrong size on FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated");
static_assert(offsetof(FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated, bTabsVisible) == 0x000000, "Member 'FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated::bTabsVisible' has a wrong offset!");
static_assert(offsetof(FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated, SpacingAdjustmentForTabs) == 0x000004, "Member 'FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated::SpacingAdjustmentForTabs' has a wrong offset!");

struct FortProgressiveItemScreen_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(FortProgressiveItemScreen_BlockScreenContent) == 0x000008, "Wrong alignment on FortProgressiveItemScreen_BlockScreenContent");
static_assert(sizeof(FortProgressiveItemScreen_BlockScreenContent) == 0x000020, "Wrong size on FortProgressiveItemScreen_BlockScreenContent");
static_assert(offsetof(FortProgressiveItemScreen_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'FortProgressiveItemScreen_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(FortProgressiveItemScreen_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'FortProgressiveItemScreen_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct FortProgressiveItemScreen_OnErrorStateTextUpdated final
{
public:
	class FText                                   ErrorStateText;
};
static_assert(alignof(FortProgressiveItemScreen_OnErrorStateTextUpdated) == 0x000008, "Wrong alignment on FortProgressiveItemScreen_OnErrorStateTextUpdated");
static_assert(sizeof(FortProgressiveItemScreen_OnErrorStateTextUpdated) == 0x000018, "Wrong size on FortProgressiveItemScreen_OnErrorStateTextUpdated");
static_assert(offsetof(FortProgressiveItemScreen_OnErrorStateTextUpdated, ErrorStateText) == 0x000000, "Member 'FortProgressiveItemScreen_OnErrorStateTextUpdated::ErrorStateText' has a wrong offset!");

struct FortProgressiveItemScreen_OnSetIsSoloScreen final
{
public:
	bool                                          bInIsSoloScreen;
};
static_assert(alignof(FortProgressiveItemScreen_OnSetIsSoloScreen) == 0x000001, "Wrong alignment on FortProgressiveItemScreen_OnSetIsSoloScreen");
static_assert(sizeof(FortProgressiveItemScreen_OnSetIsSoloScreen) == 0x000001, "Wrong size on FortProgressiveItemScreen_OnSetIsSoloScreen");
static_assert(offsetof(FortProgressiveItemScreen_OnSetIsSoloScreen, bInIsSoloScreen) == 0x000000, "Member 'FortProgressiveItemScreen_OnSetIsSoloScreen::bInIsSoloScreen' has a wrong offset!");

struct FortProgressiveItemScreen_OnUpdateSubscriptionState final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(FortProgressiveItemScreen_OnUpdateSubscriptionState) == 0x000001, "Wrong alignment on FortProgressiveItemScreen_OnUpdateSubscriptionState");
static_assert(sizeof(FortProgressiveItemScreen_OnUpdateSubscriptionState) == 0x000001, "Wrong size on FortProgressiveItemScreen_OnUpdateSubscriptionState");
static_assert(offsetof(FortProgressiveItemScreen_OnUpdateSubscriptionState, bSubscribed) == 0x000000, "Member 'FortProgressiveItemScreen_OnUpdateSubscriptionState::bSubscribed' has a wrong offset!");

struct FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo final
{
public:
	class FText                                   Subheading;
	bool                                          bSubscribed;
	uint8                                         Pad_19[0x3];
	int32                                         UnlockedStages;
	int32                                         MaxStages;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo) == 0x000008, "Wrong alignment on FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo");
static_assert(sizeof(FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo) == 0x000028, "Wrong size on FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo");
static_assert(offsetof(FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo, Subheading) == 0x000000, "Member 'FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo::Subheading' has a wrong offset!");
static_assert(offsetof(FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo, bSubscribed) == 0x000018, "Member 'FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo::bSubscribed' has a wrong offset!");
static_assert(offsetof(FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo, UnlockedStages) == 0x00001C, "Member 'FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo::UnlockedStages' has a wrong offset!");
static_assert(offsetof(FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo, MaxStages) == 0x000020, "Member 'FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo::MaxStages' has a wrong offset!");

struct FortProgressiveItemWidget_OnPeekStateChanged final
{
public:
	bool                                          bIsInPeekState;
};
static_assert(alignof(FortProgressiveItemWidget_OnPeekStateChanged) == 0x000001, "Wrong alignment on FortProgressiveItemWidget_OnPeekStateChanged");
static_assert(sizeof(FortProgressiveItemWidget_OnPeekStateChanged) == 0x000001, "Wrong size on FortProgressiveItemWidget_OnPeekStateChanged");
static_assert(offsetof(FortProgressiveItemWidget_OnPeekStateChanged, bIsInPeekState) == 0x000000, "Member 'FortProgressiveItemWidget_OnPeekStateChanged::bIsInPeekState' has a wrong offset!");

struct FortProgressiveItemWidget_OnStageItemChanged final
{
public:
	struct FProgressiveStageItemInfo              InStageItemInfo;
};
static_assert(alignof(FortProgressiveItemWidget_OnStageItemChanged) == 0x000008, "Wrong alignment on FortProgressiveItemWidget_OnStageItemChanged");
static_assert(sizeof(FortProgressiveItemWidget_OnStageItemChanged) == 0x000070, "Wrong size on FortProgressiveItemWidget_OnStageItemChanged");
static_assert(offsetof(FortProgressiveItemWidget_OnStageItemChanged, InStageItemInfo) == 0x000000, "Member 'FortProgressiveItemWidget_OnStageItemChanged::InStageItemInfo' has a wrong offset!");

struct FortProgressiveItemWidget_OnTileMaterialLoaded final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(FortProgressiveItemWidget_OnTileMaterialLoaded) == 0x000001, "Wrong alignment on FortProgressiveItemWidget_OnTileMaterialLoaded");
static_assert(sizeof(FortProgressiveItemWidget_OnTileMaterialLoaded) == 0x000001, "Wrong size on FortProgressiveItemWidget_OnTileMaterialLoaded");
static_assert(offsetof(FortProgressiveItemWidget_OnTileMaterialLoaded, bSubscribed) == 0x000000, "Member 'FortProgressiveItemWidget_OnTileMaterialLoaded::bSubscribed' has a wrong offset!");

struct FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails final
{
public:
	class FText                                   SetName;
	class FText                                   ExpiringText;
	bool                                          bCompleted;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails) == 0x000008, "Wrong alignment on FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails");
static_assert(sizeof(FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails) == 0x000038, "Wrong size on FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails");
static_assert(offsetof(FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails, SetName) == 0x000000, "Member 'FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails::SetName' has a wrong offset!");
static_assert(offsetof(FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails, ExpiringText) == 0x000018, "Member 'FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails::ExpiringText' has a wrong offset!");
static_assert(offsetof(FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails, bCompleted) == 0x000030, "Member 'FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails::bCompleted' has a wrong offset!");

struct FortProgressiveSetList_AddSetTile final
{
public:
	class UFortProgressiveSetTile*                ReturnValue;
};
static_assert(alignof(FortProgressiveSetList_AddSetTile) == 0x000008, "Wrong alignment on FortProgressiveSetList_AddSetTile");
static_assert(sizeof(FortProgressiveSetList_AddSetTile) == 0x000008, "Wrong size on FortProgressiveSetList_AddSetTile");
static_assert(offsetof(FortProgressiveSetList_AddSetTile, ReturnValue) == 0x000000, "Member 'FortProgressiveSetList_AddSetTile::ReturnValue' has a wrong offset!");

struct FortProgressiveSetTile_BP_OnInitializeSetInfo final
{
public:
	struct FProgressiveSetInfo                    InSetInfo;
	class FText                                   BottomText;
	class FText                                   BottomSubtext;
	bool                                          bSubscribed;
	uint8                                         Pad_99[0x7];
};
static_assert(alignof(FortProgressiveSetTile_BP_OnInitializeSetInfo) == 0x000008, "Wrong alignment on FortProgressiveSetTile_BP_OnInitializeSetInfo");
static_assert(sizeof(FortProgressiveSetTile_BP_OnInitializeSetInfo) == 0x0000A0, "Wrong size on FortProgressiveSetTile_BP_OnInitializeSetInfo");
static_assert(offsetof(FortProgressiveSetTile_BP_OnInitializeSetInfo, InSetInfo) == 0x000000, "Member 'FortProgressiveSetTile_BP_OnInitializeSetInfo::InSetInfo' has a wrong offset!");
static_assert(offsetof(FortProgressiveSetTile_BP_OnInitializeSetInfo, BottomText) == 0x000068, "Member 'FortProgressiveSetTile_BP_OnInitializeSetInfo::BottomText' has a wrong offset!");
static_assert(offsetof(FortProgressiveSetTile_BP_OnInitializeSetInfo, BottomSubtext) == 0x000080, "Member 'FortProgressiveSetTile_BP_OnInitializeSetInfo::BottomSubtext' has a wrong offset!");
static_assert(offsetof(FortProgressiveSetTile_BP_OnInitializeSetInfo, bSubscribed) == 0x000098, "Member 'FortProgressiveSetTile_BP_OnInitializeSetInfo::bSubscribed' has a wrong offset!");

struct FortProgressiveSetTile_BP_OnTileMaterialLoaded final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(FortProgressiveSetTile_BP_OnTileMaterialLoaded) == 0x000001, "Wrong alignment on FortProgressiveSetTile_BP_OnTileMaterialLoaded");
static_assert(sizeof(FortProgressiveSetTile_BP_OnTileMaterialLoaded) == 0x000001, "Wrong size on FortProgressiveSetTile_BP_OnTileMaterialLoaded");
static_assert(offsetof(FortProgressiveSetTile_BP_OnTileMaterialLoaded, bSubscribed) == 0x000000, "Member 'FortProgressiveSetTile_BP_OnTileMaterialLoaded::bSubscribed' has a wrong offset!");

struct FortProgressiveStageList_AddStageWidget final
{
public:
	class UFortProgressiveStageWidget*            ReturnValue;
};
static_assert(alignof(FortProgressiveStageList_AddStageWidget) == 0x000008, "Wrong alignment on FortProgressiveStageList_AddStageWidget");
static_assert(sizeof(FortProgressiveStageList_AddStageWidget) == 0x000008, "Wrong size on FortProgressiveStageList_AddStageWidget");
static_assert(offsetof(FortProgressiveStageList_AddStageWidget, ReturnValue) == 0x000000, "Member 'FortProgressiveStageList_AddStageWidget::ReturnValue' has a wrong offset!");

struct FortProgressiveStageList_SelectStageInDirection final
{
public:
	int32                                         Direction;
};
static_assert(alignof(FortProgressiveStageList_SelectStageInDirection) == 0x000004, "Wrong alignment on FortProgressiveStageList_SelectStageInDirection");
static_assert(sizeof(FortProgressiveStageList_SelectStageInDirection) == 0x000004, "Wrong size on FortProgressiveStageList_SelectStageInDirection");
static_assert(offsetof(FortProgressiveStageList_SelectStageInDirection, Direction) == 0x000000, "Member 'FortProgressiveStageList_SelectStageInDirection::Direction' has a wrong offset!");

struct FortProgressiveStageWidget_AddStageItemWidget final
{
public:
	class UFortProgressiveItemWidget*             ReturnValue;
};
static_assert(alignof(FortProgressiveStageWidget_AddStageItemWidget) == 0x000008, "Wrong alignment on FortProgressiveStageWidget_AddStageItemWidget");
static_assert(sizeof(FortProgressiveStageWidget_AddStageItemWidget) == 0x000008, "Wrong size on FortProgressiveStageWidget_AddStageItemWidget");
static_assert(offsetof(FortProgressiveStageWidget_AddStageItemWidget, ReturnValue) == 0x000000, "Member 'FortProgressiveStageWidget_AddStageItemWidget::ReturnValue' has a wrong offset!");

struct FortProgressiveStageWidget_OnPeekStateChanged final
{
public:
	bool                                          bIsInPeekState;
};
static_assert(alignof(FortProgressiveStageWidget_OnPeekStateChanged) == 0x000001, "Wrong alignment on FortProgressiveStageWidget_OnPeekStateChanged");
static_assert(sizeof(FortProgressiveStageWidget_OnPeekStateChanged) == 0x000001, "Wrong size on FortProgressiveStageWidget_OnPeekStateChanged");
static_assert(offsetof(FortProgressiveStageWidget_OnPeekStateChanged, bIsInPeekState) == 0x000000, "Member 'FortProgressiveStageWidget_OnPeekStateChanged::bIsInPeekState' has a wrong offset!");

struct FortProgressiveStageWidget_OnSetTooltipText final
{
public:
	class FText                                   InToolTipText;
};
static_assert(alignof(FortProgressiveStageWidget_OnSetTooltipText) == 0x000008, "Wrong alignment on FortProgressiveStageWidget_OnSetTooltipText");
static_assert(sizeof(FortProgressiveStageWidget_OnSetTooltipText) == 0x000018, "Wrong size on FortProgressiveStageWidget_OnSetTooltipText");
static_assert(offsetof(FortProgressiveStageWidget_OnSetTooltipText, InToolTipText) == 0x000000, "Member 'FortProgressiveStageWidget_OnSetTooltipText::InToolTipText' has a wrong offset!");

struct FortProgressiveStageWidget_OnSetTooltipVisible final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(FortProgressiveStageWidget_OnSetTooltipVisible) == 0x000001, "Wrong alignment on FortProgressiveStageWidget_OnSetTooltipVisible");
static_assert(sizeof(FortProgressiveStageWidget_OnSetTooltipVisible) == 0x000001, "Wrong size on FortProgressiveStageWidget_OnSetTooltipVisible");
static_assert(offsetof(FortProgressiveStageWidget_OnSetTooltipVisible, bVisible) == 0x000000, "Member 'FortProgressiveStageWidget_OnSetTooltipVisible::bVisible' has a wrong offset!");

struct FortProgressiveTableOfContentsScreen_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(FortProgressiveTableOfContentsScreen_BlockScreenContent) == 0x000008, "Wrong alignment on FortProgressiveTableOfContentsScreen_BlockScreenContent");
static_assert(sizeof(FortProgressiveTableOfContentsScreen_BlockScreenContent) == 0x000020, "Wrong size on FortProgressiveTableOfContentsScreen_BlockScreenContent");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'FortProgressiveTableOfContentsScreen_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'FortProgressiveTableOfContentsScreen_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText final
{
public:
	class FText                                   ProductDescription;
};
static_assert(alignof(FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText) == 0x000008, "Wrong alignment on FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText");
static_assert(sizeof(FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText) == 0x000018, "Wrong size on FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText, ProductDescription) == 0x000000, "Member 'FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText::ProductDescription' has a wrong offset!");

struct FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner final
{
public:
	class FText                                   BannerText;
	bool                                          bAllSetsCompleted;
	bool                                          bSubscribed;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner) == 0x000008, "Wrong alignment on FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner");
static_assert(sizeof(FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner) == 0x000020, "Wrong size on FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner, BannerText) == 0x000000, "Member 'FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner::BannerText' has a wrong offset!");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner, bAllSetsCompleted) == 0x000018, "Member 'FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner::bAllSetsCompleted' has a wrong offset!");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner, bSubscribed) == 0x000019, "Member 'FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner::bSubscribed' has a wrong offset!");

struct FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText final
{
public:
	class FText                                   ErrorStateText;
};
static_assert(alignof(FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText) == 0x000008, "Wrong alignment on FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText");
static_assert(sizeof(FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText) == 0x000018, "Wrong size on FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText, ErrorStateText) == 0x000000, "Member 'FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText::ErrorStateText' has a wrong offset!");

struct FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable final
{
public:
	int32                                         NumTiles;
};
static_assert(alignof(FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable) == 0x000004, "Wrong alignment on FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable");
static_assert(sizeof(FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable) == 0x000004, "Wrong size on FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable, NumTiles) == 0x000000, "Member 'FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable::NumTiles' has a wrong offset!");

struct FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState final
{
public:
	bool                                          bSubscribed;
};
static_assert(alignof(FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState) == 0x000001, "Wrong alignment on FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState");
static_assert(sizeof(FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState) == 0x000001, "Wrong size on FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState");
static_assert(offsetof(FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState, bSubscribed) == 0x000000, "Member 'FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState::bSubscribed' has a wrong offset!");

}
