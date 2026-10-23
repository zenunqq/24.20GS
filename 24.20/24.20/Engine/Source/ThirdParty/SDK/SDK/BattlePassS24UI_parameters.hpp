#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "BattlePassS24UI_structs.hpp"

namespace SDK::Params
{

struct BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed final
{
public:
	bool                                          bSubscriptionAllowed;
};
static_assert(alignof(BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed) == 0x000001, "Wrong alignment on BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed");
static_assert(sizeof(BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed) == 0x000001, "Wrong size on BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed");
static_assert(offsetof(BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed, bSubscriptionAllowed) == 0x000000, "Member 'BattlePassLandingPageS24_OnBattlePassSubscriptionAllowed::bSubscriptionAllowed' has a wrong offset!");

struct BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation final
{
public:
	EUINavigation                                 InNavigation;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
};
static_assert(alignof(BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation) == 0x000008, "Wrong alignment on BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation");
static_assert(sizeof(BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation) == 0x000010, "Wrong size on BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation");
static_assert(offsetof(BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation, InNavigation) == 0x000000, "Member 'BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation::InNavigation' has a wrong offset!");
static_assert(offsetof(BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation, ReturnValue) == 0x000008, "Member 'BattlePassRewardPageS24_HandleRewardTracksBoundaryNavigation::ReturnValue' has a wrong offset!");

struct BattlePassRewardPageS24_OnInitForPageType final
{
public:
	ERewardPageType                               InRewardPageType;
};
static_assert(alignof(BattlePassRewardPageS24_OnInitForPageType) == 0x000001, "Wrong alignment on BattlePassRewardPageS24_OnInitForPageType");
static_assert(sizeof(BattlePassRewardPageS24_OnInitForPageType) == 0x000001, "Wrong size on BattlePassRewardPageS24_OnInitForPageType");
static_assert(offsetof(BattlePassRewardPageS24_OnInitForPageType, InRewardPageType) == 0x000000, "Member 'BattlePassRewardPageS24_OnInitForPageType::InRewardPageType' has a wrong offset!");

struct BattlePassRewardPageS24_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;
};
static_assert(alignof(BattlePassRewardPageS24_OnInputMethodChanged) == 0x000001, "Wrong alignment on BattlePassRewardPageS24_OnInputMethodChanged");
static_assert(sizeof(BattlePassRewardPageS24_OnInputMethodChanged) == 0x000001, "Wrong size on BattlePassRewardPageS24_OnInputMethodChanged");
static_assert(offsetof(BattlePassRewardPageS24_OnInputMethodChanged, InputType) == 0x000000, "Member 'BattlePassRewardPageS24_OnInputMethodChanged::InputType' has a wrong offset!");

struct BattlePassRewardPageS24_OnLoadingScreenSelectedChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(BattlePassRewardPageS24_OnLoadingScreenSelectedChanged) == 0x000001, "Wrong alignment on BattlePassRewardPageS24_OnLoadingScreenSelectedChanged");
static_assert(sizeof(BattlePassRewardPageS24_OnLoadingScreenSelectedChanged) == 0x000001, "Wrong size on BattlePassRewardPageS24_OnLoadingScreenSelectedChanged");
static_assert(offsetof(BattlePassRewardPageS24_OnLoadingScreenSelectedChanged, bIsSelected) == 0x000000, "Member 'BattlePassRewardPageS24_OnLoadingScreenSelectedChanged::bIsSelected' has a wrong offset!");

struct BattlePassRewardPageS24_OnPageChanged final
{
public:
	int32                                         PageNumber;
	int32                                         RewardPageTotal;
};
static_assert(alignof(BattlePassRewardPageS24_OnPageChanged) == 0x000004, "Wrong alignment on BattlePassRewardPageS24_OnPageChanged");
static_assert(sizeof(BattlePassRewardPageS24_OnPageChanged) == 0x000008, "Wrong size on BattlePassRewardPageS24_OnPageChanged");
static_assert(offsetof(BattlePassRewardPageS24_OnPageChanged, PageNumber) == 0x000000, "Member 'BattlePassRewardPageS24_OnPageChanged::PageNumber' has a wrong offset!");
static_assert(offsetof(BattlePassRewardPageS24_OnPageChanged, RewardPageTotal) == 0x000004, "Member 'BattlePassRewardPageS24_OnPageChanged::RewardPageTotal' has a wrong offset!");

struct BattlePassRewardPageS24_GetRewardPageBackgroundData final
{
public:
	struct FVaultWorldBackgroundData              ReturnValue;
};
static_assert(alignof(BattlePassRewardPageS24_GetRewardPageBackgroundData) == 0x000008, "Wrong alignment on BattlePassRewardPageS24_GetRewardPageBackgroundData");
static_assert(sizeof(BattlePassRewardPageS24_GetRewardPageBackgroundData) == 0x000060, "Wrong size on BattlePassRewardPageS24_GetRewardPageBackgroundData");
static_assert(offsetof(BattlePassRewardPageS24_GetRewardPageBackgroundData, ReturnValue) == 0x000000, "Member 'BattlePassRewardPageS24_GetRewardPageBackgroundData::ReturnValue' has a wrong offset!");

struct BattlePassScreenS24_HandleClaimRewardComplete final
{
public:
	bool                                          bSuccess;
	uint8                                         Pad_1[0x7];
	TArray<class FString>                         OfferTemplateIdList;
};
static_assert(alignof(BattlePassScreenS24_HandleClaimRewardComplete) == 0x000008, "Wrong alignment on BattlePassScreenS24_HandleClaimRewardComplete");
static_assert(sizeof(BattlePassScreenS24_HandleClaimRewardComplete) == 0x000018, "Wrong size on BattlePassScreenS24_HandleClaimRewardComplete");
static_assert(offsetof(BattlePassScreenS24_HandleClaimRewardComplete, bSuccess) == 0x000000, "Member 'BattlePassScreenS24_HandleClaimRewardComplete::bSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_HandleClaimRewardComplete, OfferTemplateIdList) == 0x000008, "Member 'BattlePassScreenS24_HandleClaimRewardComplete::OfferTemplateIdList' has a wrong offset!");

struct BattlePassScreenS24_HandleFullScreenMapToggled final
{
public:
	bool                                          bMapVisible;
};
static_assert(alignof(BattlePassScreenS24_HandleFullScreenMapToggled) == 0x000001, "Wrong alignment on BattlePassScreenS24_HandleFullScreenMapToggled");
static_assert(sizeof(BattlePassScreenS24_HandleFullScreenMapToggled) == 0x000001, "Wrong size on BattlePassScreenS24_HandleFullScreenMapToggled");
static_assert(offsetof(BattlePassScreenS24_HandleFullScreenMapToggled, bMapVisible) == 0x000000, "Member 'BattlePassScreenS24_HandleFullScreenMapToggled::bMapVisible' has a wrong offset!");

struct BattlePassScreenS24_OnBattlePassGiftingAllowed final
{
public:
	bool                                          bGiftingAllowed;
};
static_assert(alignof(BattlePassScreenS24_OnBattlePassGiftingAllowed) == 0x000001, "Wrong alignment on BattlePassScreenS24_OnBattlePassGiftingAllowed");
static_assert(sizeof(BattlePassScreenS24_OnBattlePassGiftingAllowed) == 0x000001, "Wrong size on BattlePassScreenS24_OnBattlePassGiftingAllowed");
static_assert(offsetof(BattlePassScreenS24_OnBattlePassGiftingAllowed, bGiftingAllowed) == 0x000000, "Member 'BattlePassScreenS24_OnBattlePassGiftingAllowed::bGiftingAllowed' has a wrong offset!");

struct BattlePassScreenS24_OnInsufficientFunds final
{
public:
	EBattlePassCurrencyType                       CurrencyType;
};
static_assert(alignof(BattlePassScreenS24_OnInsufficientFunds) == 0x000001, "Wrong alignment on BattlePassScreenS24_OnInsufficientFunds");
static_assert(sizeof(BattlePassScreenS24_OnInsufficientFunds) == 0x000001, "Wrong size on BattlePassScreenS24_OnInsufficientFunds");
static_assert(offsetof(BattlePassScreenS24_OnInsufficientFunds, CurrencyType) == 0x000000, "Member 'BattlePassScreenS24_OnInsufficientFunds::CurrencyType' has a wrong offset!");

struct BattlePassScreenS24_OnInsufficientResource final
{
public:
	const class UFortPersistentResourceItemDefinition* PersistentResource;
};
static_assert(alignof(BattlePassScreenS24_OnInsufficientResource) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnInsufficientResource");
static_assert(sizeof(BattlePassScreenS24_OnInsufficientResource) == 0x000008, "Wrong size on BattlePassScreenS24_OnInsufficientResource");
static_assert(offsetof(BattlePassScreenS24_OnInsufficientResource, PersistentResource) == 0x000000, "Member 'BattlePassScreenS24_OnInsufficientResource::PersistentResource' has a wrong offset!");

struct BattlePassScreenS24_OnItemDelayed final
{
public:
	struct FTimespan                              Delay;
};
static_assert(alignof(BattlePassScreenS24_OnItemDelayed) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnItemDelayed");
static_assert(sizeof(BattlePassScreenS24_OnItemDelayed) == 0x000008, "Wrong size on BattlePassScreenS24_OnItemDelayed");
static_assert(offsetof(BattlePassScreenS24_OnItemDelayed, Delay) == 0x000000, "Member 'BattlePassScreenS24_OnItemDelayed::Delay' has a wrong offset!");

struct BattlePassScreenS24_OnSetBaseRewardsInfo final
{
public:
	int32                                         OwnedRewards;
	int32                                         TotalRewards;
	int32                                         CompletedPages;
	int32                                         TotalPages;
};
static_assert(alignof(BattlePassScreenS24_OnSetBaseRewardsInfo) == 0x000004, "Wrong alignment on BattlePassScreenS24_OnSetBaseRewardsInfo");
static_assert(sizeof(BattlePassScreenS24_OnSetBaseRewardsInfo) == 0x000010, "Wrong size on BattlePassScreenS24_OnSetBaseRewardsInfo");
static_assert(offsetof(BattlePassScreenS24_OnSetBaseRewardsInfo, OwnedRewards) == 0x000000, "Member 'BattlePassScreenS24_OnSetBaseRewardsInfo::OwnedRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBaseRewardsInfo, TotalRewards) == 0x000004, "Member 'BattlePassScreenS24_OnSetBaseRewardsInfo::TotalRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBaseRewardsInfo, CompletedPages) == 0x000008, "Member 'BattlePassScreenS24_OnSetBaseRewardsInfo::CompletedPages' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBaseRewardsInfo, TotalPages) == 0x00000C, "Member 'BattlePassScreenS24_OnSetBaseRewardsInfo::TotalPages' has a wrong offset!");

struct BattlePassScreenS24_OnSetBonusRewardsInfo final
{
public:
	bool                                          bIsUnlocked;
	uint8                                         Pad_1[0x3];
	int32                                         OwnedRewards;
	int32                                         TotalRewards;
	int32                                         CompletedPages;
	int32                                         TotalPages;
	int32                                         ClaimedOutfits;
	int32                                         TotalOutfits;
};
static_assert(alignof(BattlePassScreenS24_OnSetBonusRewardsInfo) == 0x000004, "Wrong alignment on BattlePassScreenS24_OnSetBonusRewardsInfo");
static_assert(sizeof(BattlePassScreenS24_OnSetBonusRewardsInfo) == 0x00001C, "Wrong size on BattlePassScreenS24_OnSetBonusRewardsInfo");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, bIsUnlocked) == 0x000000, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::bIsUnlocked' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, OwnedRewards) == 0x000004, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::OwnedRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, TotalRewards) == 0x000008, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::TotalRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, CompletedPages) == 0x00000C, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::CompletedPages' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, TotalPages) == 0x000010, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::TotalPages' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, ClaimedOutfits) == 0x000014, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::ClaimedOutfits' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetBonusRewardsInfo, TotalOutfits) == 0x000018, "Member 'BattlePassScreenS24_OnSetBonusRewardsInfo::TotalOutfits' has a wrong offset!");

struct BattlePassScreenS24_OnSetCoverPageData final
{
public:
	class FText                                   Title;
	class FText                                   Description;
	bool                                          bPageComplete;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(BattlePassScreenS24_OnSetCoverPageData) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnSetCoverPageData");
static_assert(sizeof(BattlePassScreenS24_OnSetCoverPageData) == 0x000038, "Wrong size on BattlePassScreenS24_OnSetCoverPageData");
static_assert(offsetof(BattlePassScreenS24_OnSetCoverPageData, Title) == 0x000000, "Member 'BattlePassScreenS24_OnSetCoverPageData::Title' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetCoverPageData, Description) == 0x000018, "Member 'BattlePassScreenS24_OnSetCoverPageData::Description' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetCoverPageData, bPageComplete) == 0x000030, "Member 'BattlePassScreenS24_OnSetCoverPageData::bPageComplete' has a wrong offset!");

struct BattlePassScreenS24_OnSetCrewInfo final
{
public:
	bool                                          bIsNextMonthRewards;
	uint8                                         Pad_1[0x7];
	class FText                                   MonthText;
	struct FTimespan                              NextMonthlyRewardTimespan;
	class FText                                   CharacterDisplayName;
	class FText                                   CharacterDescription;
};
static_assert(alignof(BattlePassScreenS24_OnSetCrewInfo) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnSetCrewInfo");
static_assert(sizeof(BattlePassScreenS24_OnSetCrewInfo) == 0x000058, "Wrong size on BattlePassScreenS24_OnSetCrewInfo");
static_assert(offsetof(BattlePassScreenS24_OnSetCrewInfo, bIsNextMonthRewards) == 0x000000, "Member 'BattlePassScreenS24_OnSetCrewInfo::bIsNextMonthRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetCrewInfo, MonthText) == 0x000008, "Member 'BattlePassScreenS24_OnSetCrewInfo::MonthText' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetCrewInfo, NextMonthlyRewardTimespan) == 0x000020, "Member 'BattlePassScreenS24_OnSetCrewInfo::NextMonthlyRewardTimespan' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetCrewInfo, CharacterDisplayName) == 0x000028, "Member 'BattlePassScreenS24_OnSetCrewInfo::CharacterDisplayName' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetCrewInfo, CharacterDescription) == 0x000040, "Member 'BattlePassScreenS24_OnSetCrewInfo::CharacterDescription' has a wrong offset!");

struct BattlePassScreenS24_OnSetItemPrice final
{
public:
	int32                                         Cost;
	EBattlePassCurrencyType                       CurrencyType;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(BattlePassScreenS24_OnSetItemPrice) == 0x000004, "Wrong alignment on BattlePassScreenS24_OnSetItemPrice");
static_assert(sizeof(BattlePassScreenS24_OnSetItemPrice) == 0x000008, "Wrong size on BattlePassScreenS24_OnSetItemPrice");
static_assert(offsetof(BattlePassScreenS24_OnSetItemPrice, Cost) == 0x000000, "Member 'BattlePassScreenS24_OnSetItemPrice::Cost' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetItemPrice, CurrencyType) == 0x000004, "Member 'BattlePassScreenS24_OnSetItemPrice::CurrencyType' has a wrong offset!");

struct BattlePassScreenS24_OnSetPrerequisiteInfo final
{
public:
	class FText                                   Description;
	int32                                         CurrentAmount;
	int32                                         NeededAmount;
	EBattlePassRewardPrerequisiteType             PrerequisiteType;
	bool                                          bShowPrerequisiteLock;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(BattlePassScreenS24_OnSetPrerequisiteInfo) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnSetPrerequisiteInfo");
static_assert(sizeof(BattlePassScreenS24_OnSetPrerequisiteInfo) == 0x000028, "Wrong size on BattlePassScreenS24_OnSetPrerequisiteInfo");
static_assert(offsetof(BattlePassScreenS24_OnSetPrerequisiteInfo, Description) == 0x000000, "Member 'BattlePassScreenS24_OnSetPrerequisiteInfo::Description' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetPrerequisiteInfo, CurrentAmount) == 0x000018, "Member 'BattlePassScreenS24_OnSetPrerequisiteInfo::CurrentAmount' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetPrerequisiteInfo, NeededAmount) == 0x00001C, "Member 'BattlePassScreenS24_OnSetPrerequisiteInfo::NeededAmount' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetPrerequisiteInfo, PrerequisiteType) == 0x000020, "Member 'BattlePassScreenS24_OnSetPrerequisiteInfo::PrerequisiteType' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetPrerequisiteInfo, bShowPrerequisiteLock) == 0x000021, "Member 'BattlePassScreenS24_OnSetPrerequisiteInfo::bShowPrerequisiteLock' has a wrong offset!");

struct BattlePassScreenS24_OnSetQuestRewardsInfo final
{
public:
	struct FTimespan                              DelayTimespan;
	int32                                         OwnedRewards;
	int32                                         TotalRewards;
	int32                                         CompletedPages;
	int32                                         TotalPages;
};
static_assert(alignof(BattlePassScreenS24_OnSetQuestRewardsInfo) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnSetQuestRewardsInfo");
static_assert(sizeof(BattlePassScreenS24_OnSetQuestRewardsInfo) == 0x000018, "Wrong size on BattlePassScreenS24_OnSetQuestRewardsInfo");
static_assert(offsetof(BattlePassScreenS24_OnSetQuestRewardsInfo, DelayTimespan) == 0x000000, "Member 'BattlePassScreenS24_OnSetQuestRewardsInfo::DelayTimespan' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetQuestRewardsInfo, OwnedRewards) == 0x000008, "Member 'BattlePassScreenS24_OnSetQuestRewardsInfo::OwnedRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetQuestRewardsInfo, TotalRewards) == 0x00000C, "Member 'BattlePassScreenS24_OnSetQuestRewardsInfo::TotalRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetQuestRewardsInfo, CompletedPages) == 0x000010, "Member 'BattlePassScreenS24_OnSetQuestRewardsInfo::CompletedPages' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetQuestRewardsInfo, TotalPages) == 0x000014, "Member 'BattlePassScreenS24_OnSetQuestRewardsInfo::TotalPages' has a wrong offset!");

struct BattlePassScreenS24_OnSetResourcePrice final
{
public:
	int32                                         Cost;
	uint8                                         Pad_4[0x4];
	const class UFortPersistentResourceItemDefinition* PersistentResource;
};
static_assert(alignof(BattlePassScreenS24_OnSetResourcePrice) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnSetResourcePrice");
static_assert(sizeof(BattlePassScreenS24_OnSetResourcePrice) == 0x000010, "Wrong size on BattlePassScreenS24_OnSetResourcePrice");
static_assert(offsetof(BattlePassScreenS24_OnSetResourcePrice, Cost) == 0x000000, "Member 'BattlePassScreenS24_OnSetResourcePrice::Cost' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetResourcePrice, PersistentResource) == 0x000008, "Member 'BattlePassScreenS24_OnSetResourcePrice::PersistentResource' has a wrong offset!");

struct BattlePassScreenS24_OnSetWeeklyRewardsInfo final
{
public:
	struct FTimespan                              DelayTimespan;
	int32                                         AvailableRewards;
	int32                                         OwnedRewards;
	int32                                         TotalRewards;
	int32                                         AvailablePages;
	int32                                         CompletedPages;
	int32                                         TotalPages;
};
static_assert(alignof(BattlePassScreenS24_OnSetWeeklyRewardsInfo) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnSetWeeklyRewardsInfo");
static_assert(sizeof(BattlePassScreenS24_OnSetWeeklyRewardsInfo) == 0x000020, "Wrong size on BattlePassScreenS24_OnSetWeeklyRewardsInfo");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, DelayTimespan) == 0x000000, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::DelayTimespan' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, AvailableRewards) == 0x000008, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::AvailableRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, OwnedRewards) == 0x00000C, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::OwnedRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, TotalRewards) == 0x000010, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::TotalRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, AvailablePages) == 0x000014, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::AvailablePages' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, CompletedPages) == 0x000018, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::CompletedPages' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnSetWeeklyRewardsInfo, TotalPages) == 0x00001C, "Member 'BattlePassScreenS24_OnSetWeeklyRewardsInfo::TotalPages' has a wrong offset!");

struct BattlePassScreenS24_OnTransitionItemDetails final
{
public:
	bool                                          bTransitionForward;
};
static_assert(alignof(BattlePassScreenS24_OnTransitionItemDetails) == 0x000001, "Wrong alignment on BattlePassScreenS24_OnTransitionItemDetails");
static_assert(sizeof(BattlePassScreenS24_OnTransitionItemDetails) == 0x000001, "Wrong size on BattlePassScreenS24_OnTransitionItemDetails");
static_assert(offsetof(BattlePassScreenS24_OnTransitionItemDetails, bTransitionForward) == 0x000000, "Member 'BattlePassScreenS24_OnTransitionItemDetails::bTransitionForward' has a wrong offset!");

struct BattlePassScreenS24_OnUpdateBattlePassRequiredBar final
{
public:
	bool                                          bPassRequiredVisible;
};
static_assert(alignof(BattlePassScreenS24_OnUpdateBattlePassRequiredBar) == 0x000001, "Wrong alignment on BattlePassScreenS24_OnUpdateBattlePassRequiredBar");
static_assert(sizeof(BattlePassScreenS24_OnUpdateBattlePassRequiredBar) == 0x000001, "Wrong size on BattlePassScreenS24_OnUpdateBattlePassRequiredBar");
static_assert(offsetof(BattlePassScreenS24_OnUpdateBattlePassRequiredBar, bPassRequiredVisible) == 0x000000, "Member 'BattlePassScreenS24_OnUpdateBattlePassRequiredBar::bPassRequiredVisible' has a wrong offset!");

struct BattlePassScreenS24_OnUpdateStatusBar final
{
public:
	class FText                                   StatusText;
	EBattlePassStatusBarTypeS24                   BarType;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(BattlePassScreenS24_OnUpdateStatusBar) == 0x000008, "Wrong alignment on BattlePassScreenS24_OnUpdateStatusBar");
static_assert(sizeof(BattlePassScreenS24_OnUpdateStatusBar) == 0x000020, "Wrong size on BattlePassScreenS24_OnUpdateStatusBar");
static_assert(offsetof(BattlePassScreenS24_OnUpdateStatusBar, StatusText) == 0x000000, "Member 'BattlePassScreenS24_OnUpdateStatusBar::StatusText' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS24_OnUpdateStatusBar, BarType) == 0x000018, "Member 'BattlePassScreenS24_OnUpdateStatusBar::BarType' has a wrong offset!");

struct BattlePassScreenS24_GetQuestPageDelay final
{
public:
	struct FTimespan                              ReturnValue;
};
static_assert(alignof(BattlePassScreenS24_GetQuestPageDelay) == 0x000008, "Wrong alignment on BattlePassScreenS24_GetQuestPageDelay");
static_assert(sizeof(BattlePassScreenS24_GetQuestPageDelay) == 0x000008, "Wrong size on BattlePassScreenS24_GetQuestPageDelay");
static_assert(offsetof(BattlePassScreenS24_GetQuestPageDelay, ReturnValue) == 0x000000, "Member 'BattlePassScreenS24_GetQuestPageDelay::ReturnValue' has a wrong offset!");

struct BattlePassScreenS24_IsSeasonalCustomizationItemOwned final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BattlePassScreenS24_IsSeasonalCustomizationItemOwned) == 0x000001, "Wrong alignment on BattlePassScreenS24_IsSeasonalCustomizationItemOwned");
static_assert(sizeof(BattlePassScreenS24_IsSeasonalCustomizationItemOwned) == 0x000001, "Wrong size on BattlePassScreenS24_IsSeasonalCustomizationItemOwned");
static_assert(offsetof(BattlePassScreenS24_IsSeasonalCustomizationItemOwned, ReturnValue) == 0x000000, "Member 'BattlePassScreenS24_IsSeasonalCustomizationItemOwned::ReturnValue' has a wrong offset!");

struct FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet final
{
public:
	int32                                         Rewards;
};
static_assert(alignof(FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet) == 0x000004, "Wrong alignment on FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet");
static_assert(sizeof(FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet) == 0x000004, "Wrong size on FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet");
static_assert(offsetof(FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet, Rewards) == 0x000000, "Member 'FortBattlePassResourcesWidgetS24_OnBattleStarRewardsSet::Rewards' has a wrong offset!");

struct FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet final
{
public:
	int32                                         Rewards;
};
static_assert(alignof(FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet) == 0x000004, "Wrong alignment on FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet");
static_assert(sizeof(FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet) == 0x000004, "Wrong size on FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet");
static_assert(offsetof(FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet, Rewards) == 0x000000, "Member 'FortBattlePassResourcesWidgetS24_OnStylePointsRewardsSet::Rewards' has a wrong offset!");

struct FortBattlePassTutorialTooltipS24_SetText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(FortBattlePassTutorialTooltipS24_SetText) == 0x000008, "Wrong alignment on FortBattlePassTutorialTooltipS24_SetText");
static_assert(sizeof(FortBattlePassTutorialTooltipS24_SetText) == 0x000018, "Wrong size on FortBattlePassTutorialTooltipS24_SetText");
static_assert(offsetof(FortBattlePassTutorialTooltipS24_SetText, Text) == 0x000000, "Member 'FortBattlePassTutorialTooltipS24_SetText::Text' has a wrong offset!");

}
