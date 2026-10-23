#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "BattlePassBase_classes.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "BattlePassS24UI_structs.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UBattlePassBulkBuyPageS24 : public UFortBattlePassBulkBuyPageBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassBulkBuyPageS24">();
	}
	static class UBattlePassBulkBuyPageS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassBulkBuyPageS24>();
	}
};
static_assert(alignof(UBattlePassBulkBuyPageS24) == 0x000008, "Wrong alignment on UBattlePassBulkBuyPageS24");
static_assert(sizeof(UBattlePassBulkBuyPageS24) == 0x000530, "Wrong size on UBattlePassBulkBuyPageS24");

class UBattlePassLandingPageS24 : public UBattlePassLandingPageBase
{
public:
	class UBattlePassLandingPageButton*           Button_Rewards;
	class UBattlePassLandingPageButton*           Button_CharacterCustomizer;
	class UBattlePassLandingPageButton*           Button_BonusRewards;
	class UBattlePassLandingPageButton*           Button_Quests;
	class UBattlePassLandingPageButton*           Button_JoinSubscription;
	class UBattlePassLandingPageButton*           Button_WeeklyRewards;
	class UAthenaSeasonItemData_BattleStar*       SeasonData_BattleStar;
	uint8                                         Pad_520[0x28];

public:
	void OnBattlePassSubscriptionAllowed(const bool bSubscriptionAllowed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassLandingPageS24">();
	}
	static class UBattlePassLandingPageS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassLandingPageS24>();
	}
};
static_assert(alignof(UBattlePassLandingPageS24) == 0x000008, "Wrong alignment on UBattlePassLandingPageS24");
static_assert(sizeof(UBattlePassLandingPageS24) == 0x000548, "Wrong size on UBattlePassLandingPageS24");
static_assert(offsetof(UBattlePassLandingPageS24, Button_Rewards) == 0x0004E8, "Member 'UBattlePassLandingPageS24::Button_Rewards' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageS24, Button_CharacterCustomizer) == 0x0004F0, "Member 'UBattlePassLandingPageS24::Button_CharacterCustomizer' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageS24, Button_BonusRewards) == 0x0004F8, "Member 'UBattlePassLandingPageS24::Button_BonusRewards' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageS24, Button_Quests) == 0x000500, "Member 'UBattlePassLandingPageS24::Button_Quests' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageS24, Button_JoinSubscription) == 0x000508, "Member 'UBattlePassLandingPageS24::Button_JoinSubscription' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageS24, Button_WeeklyRewards) == 0x000510, "Member 'UBattlePassLandingPageS24::Button_WeeklyRewards' has a wrong offset!");
static_assert(offsetof(UBattlePassLandingPageS24, SeasonData_BattleStar) == 0x000518, "Member 'UBattlePassLandingPageS24::SeasonData_BattleStar' has a wrong offset!");

class UBattlePassRewardPageS24 : public UBattlePassRewardPageBase
{
public:
	TSubclassOf<class UFortBattlePassRewardTrack> RewardsTrackClass;
	class UFortBattlePassTile*                    FocusedReward;
	TArray<class UFortBattlePassRewardTrack*>     TrackPages;
	uint8                                         Pad_4D0[0x4];
	ERewardPageType                               RewardPageType;
	uint8                                         Pad_4D5[0x3];
	int32                                         HoldTileTooltip_ClaimedRewardsToHide;
	int32                                         HoldTileTooltip_ClaimedBattlePassToHide;
	int32                                         HoldTileTooltip_RequiredBattleStarsToShow;
	int32                                         LevelRequirementUnlockTooltip_RequiredLevel;
	int32                                         ClaimAllRewardsTooltip_RequiredLevelToShow;
	uint8                                         Pad_4EC[0x4];
	class UCommonAnimatedSwitcher*                Switcher_RewardTracks;
	class UFortBattlePassTutorialTooltipS24*      TutorialTooltip_LevelRequirementUnlock;
	class UFortBattlePassTutorialTooltipS24*      TutorialTooltip_ClaimAllRewards;
	class UFortBattlePassTutorialTooltipS24*      TutorialTooltip_HoldTile;
	class UAthenaSeasonItemData_BattleStar*       SeasonData_BattleStar;
	class UBattlePassBulkBuyInputData*            BulkBuyInputData;
	class UCommonButtonBase*                      Button_NextPage;
	class UCommonButtonBase*                      Button_PreviousPage;
	uint8                                         Pad_530[0x20];

public:
	class UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);
	void OnInitForPageType(const ERewardPageType InRewardPageType);
	void OnInputMethodChanged(const ECommonInputType InputType);
	void OnLoadingScreenSelectedChanged(bool bIsSelected);
	void OnPageChanged(const int32 PageNumber, const int32 RewardPageTotal);

	struct FVaultWorldBackgroundData GetRewardPageBackgroundData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassRewardPageS24">();
	}
	static class UBattlePassRewardPageS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassRewardPageS24>();
	}
};
static_assert(alignof(UBattlePassRewardPageS24) == 0x000008, "Wrong alignment on UBattlePassRewardPageS24");
static_assert(sizeof(UBattlePassRewardPageS24) == 0x000550, "Wrong size on UBattlePassRewardPageS24");
static_assert(offsetof(UBattlePassRewardPageS24, RewardsTrackClass) == 0x0004B0, "Member 'UBattlePassRewardPageS24::RewardsTrackClass' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, FocusedReward) == 0x0004B8, "Member 'UBattlePassRewardPageS24::FocusedReward' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, TrackPages) == 0x0004C0, "Member 'UBattlePassRewardPageS24::TrackPages' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, RewardPageType) == 0x0004D4, "Member 'UBattlePassRewardPageS24::RewardPageType' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, HoldTileTooltip_ClaimedRewardsToHide) == 0x0004D8, "Member 'UBattlePassRewardPageS24::HoldTileTooltip_ClaimedRewardsToHide' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, HoldTileTooltip_ClaimedBattlePassToHide) == 0x0004DC, "Member 'UBattlePassRewardPageS24::HoldTileTooltip_ClaimedBattlePassToHide' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, HoldTileTooltip_RequiredBattleStarsToShow) == 0x0004E0, "Member 'UBattlePassRewardPageS24::HoldTileTooltip_RequiredBattleStarsToShow' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, LevelRequirementUnlockTooltip_RequiredLevel) == 0x0004E4, "Member 'UBattlePassRewardPageS24::LevelRequirementUnlockTooltip_RequiredLevel' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, ClaimAllRewardsTooltip_RequiredLevelToShow) == 0x0004E8, "Member 'UBattlePassRewardPageS24::ClaimAllRewardsTooltip_RequiredLevelToShow' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, Switcher_RewardTracks) == 0x0004F0, "Member 'UBattlePassRewardPageS24::Switcher_RewardTracks' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, TutorialTooltip_LevelRequirementUnlock) == 0x0004F8, "Member 'UBattlePassRewardPageS24::TutorialTooltip_LevelRequirementUnlock' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, TutorialTooltip_ClaimAllRewards) == 0x000500, "Member 'UBattlePassRewardPageS24::TutorialTooltip_ClaimAllRewards' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, TutorialTooltip_HoldTile) == 0x000508, "Member 'UBattlePassRewardPageS24::TutorialTooltip_HoldTile' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, SeasonData_BattleStar) == 0x000510, "Member 'UBattlePassRewardPageS24::SeasonData_BattleStar' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, BulkBuyInputData) == 0x000518, "Member 'UBattlePassRewardPageS24::BulkBuyInputData' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, Button_NextPage) == 0x000520, "Member 'UBattlePassRewardPageS24::Button_NextPage' has a wrong offset!");
static_assert(offsetof(UBattlePassRewardPageS24, Button_PreviousPage) == 0x000528, "Member 'UBattlePassRewardPageS24::Button_PreviousPage' has a wrong offset!");

class UBattlePassScreenS24 : public UBattlePassScreenBase
{
public:
	TSubclassOf<class UFortBattlePassPurchaseResourcesWidget> ResourcePurchaseScreenClass;
	uint8                                         Pad_850[0x8];
	class UCommonButtonBase*                      Button_Close;
	class UCommonButtonLegacy*                    Button_TouchClose;
	class UCommonButtonBase*                      Button_ToggleViewDetails;
	class UCommonButtonBase*                      Button_ReplayTrailer;
	class UCommonButtonBase*                      Button_ReplayTrailer_Mobile;
	class UCommonButtonBase*                      Button_ShowAbout;
	class UCommonButtonBase*                      Button_ShowAbout_Mobile;
	class UCommonButtonBase*                      Button_ShowAboutCustomization;
	class UCommonButtonBase*                      Button_ShowAboutCustomization_Mobile;
	class UCommonButtonBase*                      Button_BulkBuyRewards;
	class UCommonButtonBase*                      Button_PageComplete;
	class UCommonButtonBase*                      Button_GiftBattlePass;
	class UCommonVisibilitySwitcher*              MobileVisibilitySwitcher;
	class UFortBattlePassResourcesWidgetBase*     BattlePassCurrencyPanel;
	class UAthenaExclusiveRewardBanner*           AthenaExclusiveRewardBanner;
	class UCommonTextBlock*                       Text_Description;
	class UCommonTextBlock*                       Text_ItemName;
	class UAthenaRewardItemTypeRarityTag*         ItemRewardTag;
	class UCommonTextBlock*                       Text_SetDetails;
	class UWidgetSwitcher*                        Switcher_PrerequisiteInfo;
	class UCommonTextBlock*                       Text_Prerequisite;
	class UWidget*                                Widget_PrerequisiteProgress;
	class UWidget*                                Widget_LevelUpMessageFree;
	class UWidget*                                Widget_LevelUpMessagePremium;
	class UWidget*                                Widget_CustomResourceMessage;
	class UWidgetSwitcher*                        Switcher_PrimaryAction;
	class UFortHoldableButton*                    Button_BuyLevels;
	class UFortHoldableButton*                    Button_BuyBattlePass;
	class UFortHoldableButton*                    Button_ClaimReward;
	class UCommonButtonBase*                      Button_ViewQuests;
	class UCommonButtonBase*                      Button_PreviewLoadingScreen;
	class UBorder*                                Tag_RequiresBP;
	class UBorder*                                Tag_PageLocked;
	class UBorder*                                Tag_BaseItem;
	class UBorder*                                Tag_Prerequisite;
	class UBorder*                                Tag_CompletePage;
	class UBorder*                                Tag_NotEnough_Currency;
	class UBorder*                                Tag_Cost;
	class UBorder*                                Tag_Owned;
	class UBorder*                                Tag_Delayed;
	struct FGameplayTag                           QuestCategoryParentTag;
	uint8                                         Pad_99C[0x4];
	TSubclassOf<class UAthenaLoadingScreenPreviewPanel> PreviewLoadingScreenWidgetClass;
	uint8                                         Pad_9A8[0x58];
	class UAthenaSeasonItemData_BattleStar*       SeasonData_BattleStar;
	class UAthenaSeasonItemEntryBase*             CurrentSelectedEntry;
	TArray<EBattlePassView>                       SwitcherSubPageTypes;
	class UCommonVisibilitySwitcher*              SubPageSwitcher;
	uint8                                         Pad_A28[0x100];
	class UFortItemDefinition*                    SeasonalBaseCustomizationItem;
	bool                                          bHasSubscription;
	uint8                                         Pad_B31[0x7];
	class UFortBattlePassTutorialTooltipS24*      TutorialTooltip_BattleStars;
	class UFortBattlePassTutorialTooltipS24*      TutorialTooltip_StylePoints;
	class UFortSwipePanel*                        SwipePanel_Navigation;
	uint8                                         Pad_B50[0x178];

public:
	void GoBackOneScreen();
	void HandleClaimRewardComplete(const bool bSuccess, const TArray<class FString>& OfferTemplateIdList);
	void HandleFullScreenMapToggled(bool bMapVisible);
	void HandleSwitcherVisibilityShown();
	void OnBattlePassGiftingAllowed(const bool bGiftingAllowed);
	void OnBattlePassOwned();
	void OnInsufficientFunds(const EBattlePassCurrencyType CurrencyType);
	void OnInsufficientResource(const class UFortPersistentResourceItemDefinition* PersistentResource);
	void OnItemDelayed(const struct FTimespan& Delay);
	void OnSetBaseRewardsInfo(const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages);
	void OnSetBonusRewardsInfo(const bool bIsUnlocked, const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages, const int32 ClaimedOutfits, const int32 TotalOutfits);
	void OnSetCoverPageData(const class FText& Title, const class FText& Description, const bool bPageComplete);
	void OnSetCrewInfo(bool bIsNextMonthRewards, const class FText& MonthText, const struct FTimespan& NextMonthlyRewardTimespan, const class FText& CharacterDisplayName, const class FText& CharacterDescription);
	void OnSetItemPrice(const int32 Cost, const EBattlePassCurrencyType CurrencyType);
	void OnSetPrerequisiteInfo(const class FText& Description, const int32 CurrentAmount, const int32 NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, const bool bShowPrerequisiteLock);
	void OnSetQuestRewardsInfo(const struct FTimespan& DelayTimespan, const int32 OwnedRewards, const int32 TotalRewards, const int32 CompletedPages, const int32 TotalPages);
	void OnSetResourcePrice(const int32 Cost, const class UFortPersistentResourceItemDefinition* PersistentResource);
	void OnSetWeeklyRewardsInfo(const struct FTimespan& DelayTimespan, const int32 AvailableRewards, const int32 OwnedRewards, const int32 TotalRewards, const int32 AvailablePages, const int32 CompletedPages, const int32 TotalPages);
	void OnTransitionItemDetails(const bool bTransitionForward);
	void OnUpdateBattlePassRequiredBar(const bool bPassRequiredVisible);
	void OnUpdateStatusBar(const class FText& StatusText, const EBattlePassStatusBarTypeS24& BarType);
	void OverviewShowAnimationFinished();

	struct FTimespan GetQuestPageDelay() const;
	bool IsSeasonalCustomizationItemOwned() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BattlePassScreenS24">();
	}
	static class UBattlePassScreenS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassScreenS24>();
	}
};
static_assert(alignof(UBattlePassScreenS24) == 0x000008, "Wrong alignment on UBattlePassScreenS24");
static_assert(sizeof(UBattlePassScreenS24) == 0x000CC8, "Wrong size on UBattlePassScreenS24");
static_assert(offsetof(UBattlePassScreenS24, ResourcePurchaseScreenClass) == 0x000848, "Member 'UBattlePassScreenS24::ResourcePurchaseScreenClass' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_Close) == 0x000858, "Member 'UBattlePassScreenS24::Button_Close' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_TouchClose) == 0x000860, "Member 'UBattlePassScreenS24::Button_TouchClose' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ToggleViewDetails) == 0x000868, "Member 'UBattlePassScreenS24::Button_ToggleViewDetails' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ReplayTrailer) == 0x000870, "Member 'UBattlePassScreenS24::Button_ReplayTrailer' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ReplayTrailer_Mobile) == 0x000878, "Member 'UBattlePassScreenS24::Button_ReplayTrailer_Mobile' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ShowAbout) == 0x000880, "Member 'UBattlePassScreenS24::Button_ShowAbout' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ShowAbout_Mobile) == 0x000888, "Member 'UBattlePassScreenS24::Button_ShowAbout_Mobile' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ShowAboutCustomization) == 0x000890, "Member 'UBattlePassScreenS24::Button_ShowAboutCustomization' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ShowAboutCustomization_Mobile) == 0x000898, "Member 'UBattlePassScreenS24::Button_ShowAboutCustomization_Mobile' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_BulkBuyRewards) == 0x0008A0, "Member 'UBattlePassScreenS24::Button_BulkBuyRewards' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_PageComplete) == 0x0008A8, "Member 'UBattlePassScreenS24::Button_PageComplete' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_GiftBattlePass) == 0x0008B0, "Member 'UBattlePassScreenS24::Button_GiftBattlePass' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, MobileVisibilitySwitcher) == 0x0008B8, "Member 'UBattlePassScreenS24::MobileVisibilitySwitcher' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, BattlePassCurrencyPanel) == 0x0008C0, "Member 'UBattlePassScreenS24::BattlePassCurrencyPanel' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, AthenaExclusiveRewardBanner) == 0x0008C8, "Member 'UBattlePassScreenS24::AthenaExclusiveRewardBanner' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Text_Description) == 0x0008D0, "Member 'UBattlePassScreenS24::Text_Description' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Text_ItemName) == 0x0008D8, "Member 'UBattlePassScreenS24::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, ItemRewardTag) == 0x0008E0, "Member 'UBattlePassScreenS24::ItemRewardTag' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Text_SetDetails) == 0x0008E8, "Member 'UBattlePassScreenS24::Text_SetDetails' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Switcher_PrerequisiteInfo) == 0x0008F0, "Member 'UBattlePassScreenS24::Switcher_PrerequisiteInfo' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Text_Prerequisite) == 0x0008F8, "Member 'UBattlePassScreenS24::Text_Prerequisite' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Widget_PrerequisiteProgress) == 0x000900, "Member 'UBattlePassScreenS24::Widget_PrerequisiteProgress' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Widget_LevelUpMessageFree) == 0x000908, "Member 'UBattlePassScreenS24::Widget_LevelUpMessageFree' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Widget_LevelUpMessagePremium) == 0x000910, "Member 'UBattlePassScreenS24::Widget_LevelUpMessagePremium' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Widget_CustomResourceMessage) == 0x000918, "Member 'UBattlePassScreenS24::Widget_CustomResourceMessage' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Switcher_PrimaryAction) == 0x000920, "Member 'UBattlePassScreenS24::Switcher_PrimaryAction' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_BuyLevels) == 0x000928, "Member 'UBattlePassScreenS24::Button_BuyLevels' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_BuyBattlePass) == 0x000930, "Member 'UBattlePassScreenS24::Button_BuyBattlePass' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ClaimReward) == 0x000938, "Member 'UBattlePassScreenS24::Button_ClaimReward' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_ViewQuests) == 0x000940, "Member 'UBattlePassScreenS24::Button_ViewQuests' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Button_PreviewLoadingScreen) == 0x000948, "Member 'UBattlePassScreenS24::Button_PreviewLoadingScreen' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_RequiresBP) == 0x000950, "Member 'UBattlePassScreenS24::Tag_RequiresBP' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_PageLocked) == 0x000958, "Member 'UBattlePassScreenS24::Tag_PageLocked' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_BaseItem) == 0x000960, "Member 'UBattlePassScreenS24::Tag_BaseItem' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_Prerequisite) == 0x000968, "Member 'UBattlePassScreenS24::Tag_Prerequisite' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_CompletePage) == 0x000970, "Member 'UBattlePassScreenS24::Tag_CompletePage' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_NotEnough_Currency) == 0x000978, "Member 'UBattlePassScreenS24::Tag_NotEnough_Currency' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_Cost) == 0x000980, "Member 'UBattlePassScreenS24::Tag_Cost' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_Owned) == 0x000988, "Member 'UBattlePassScreenS24::Tag_Owned' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, Tag_Delayed) == 0x000990, "Member 'UBattlePassScreenS24::Tag_Delayed' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, QuestCategoryParentTag) == 0x000998, "Member 'UBattlePassScreenS24::QuestCategoryParentTag' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, PreviewLoadingScreenWidgetClass) == 0x0009A0, "Member 'UBattlePassScreenS24::PreviewLoadingScreenWidgetClass' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, SeasonData_BattleStar) == 0x000A00, "Member 'UBattlePassScreenS24::SeasonData_BattleStar' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, CurrentSelectedEntry) == 0x000A08, "Member 'UBattlePassScreenS24::CurrentSelectedEntry' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, SwitcherSubPageTypes) == 0x000A10, "Member 'UBattlePassScreenS24::SwitcherSubPageTypes' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, SubPageSwitcher) == 0x000A20, "Member 'UBattlePassScreenS24::SubPageSwitcher' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, SeasonalBaseCustomizationItem) == 0x000B28, "Member 'UBattlePassScreenS24::SeasonalBaseCustomizationItem' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, bHasSubscription) == 0x000B30, "Member 'UBattlePassScreenS24::bHasSubscription' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, TutorialTooltip_BattleStars) == 0x000B38, "Member 'UBattlePassScreenS24::TutorialTooltip_BattleStars' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, TutorialTooltip_StylePoints) == 0x000B40, "Member 'UBattlePassScreenS24::TutorialTooltip_StylePoints' has a wrong offset!");
static_assert(offsetof(UBattlePassScreenS24, SwipePanel_Navigation) == 0x000B48, "Member 'UBattlePassScreenS24::SwipePanel_Navigation' has a wrong offset!");

class UFortBattlePassCustomSkinPageS24 : public UFortBattlePassCustomSkinPageBase
{
public:
	class FString                                 ClaimBaseItemTooltip_ClaimCheckTemplateId;
	class UFortBattlePassTutorialTooltip*         TutorialTooltip_ClaimBaseItem;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassCustomSkinPageS24">();
	}
	static class UFortBattlePassCustomSkinPageS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassCustomSkinPageS24>();
	}
};
static_assert(alignof(UFortBattlePassCustomSkinPageS24) == 0x000008, "Wrong alignment on UFortBattlePassCustomSkinPageS24");
static_assert(sizeof(UFortBattlePassCustomSkinPageS24) == 0x000578, "Wrong size on UFortBattlePassCustomSkinPageS24");
static_assert(offsetof(UFortBattlePassCustomSkinPageS24, ClaimBaseItemTooltip_ClaimCheckTemplateId) == 0x000560, "Member 'UFortBattlePassCustomSkinPageS24::ClaimBaseItemTooltip_ClaimCheckTemplateId' has a wrong offset!");
static_assert(offsetof(UFortBattlePassCustomSkinPageS24, TutorialTooltip_ClaimBaseItem) == 0x000570, "Member 'UFortBattlePassCustomSkinPageS24::TutorialTooltip_ClaimBaseItem' has a wrong offset!");

class UFortBattlePassResourcesWidgetS24 final : public UFortBattlePassResourcesWidgetBase
{
public:
	class UCommonTextBlock*                       Text_BattleStarsAmount;
	class UCommonTextBlock*                       Text_StylePointsAmount;
	class UBorder*                                Border_StylePointsRewardsTag;
	class UBorder*                                Border_BattleStarsRewardsTag;

public:
	void OnBattleStarRewardsSet(const int32 Rewards);
	void OnStylePointsRewardsSet(const int32 Rewards);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassResourcesWidgetS24">();
	}
	static class UFortBattlePassResourcesWidgetS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassResourcesWidgetS24>();
	}
};
static_assert(alignof(UFortBattlePassResourcesWidgetS24) == 0x000008, "Wrong alignment on UFortBattlePassResourcesWidgetS24");
static_assert(sizeof(UFortBattlePassResourcesWidgetS24) == 0x0002C0, "Wrong size on UFortBattlePassResourcesWidgetS24");
static_assert(offsetof(UFortBattlePassResourcesWidgetS24, Text_BattleStarsAmount) == 0x0002A0, "Member 'UFortBattlePassResourcesWidgetS24::Text_BattleStarsAmount' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourcesWidgetS24, Text_StylePointsAmount) == 0x0002A8, "Member 'UFortBattlePassResourcesWidgetS24::Text_StylePointsAmount' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourcesWidgetS24, Border_StylePointsRewardsTag) == 0x0002B0, "Member 'UFortBattlePassResourcesWidgetS24::Border_StylePointsRewardsTag' has a wrong offset!");
static_assert(offsetof(UFortBattlePassResourcesWidgetS24, Border_BattleStarsRewardsTag) == 0x0002B8, "Member 'UFortBattlePassResourcesWidgetS24::Border_BattleStarsRewardsTag' has a wrong offset!");

class UFortBattlePassTutorialTooltipS24 : public UCommonUserWidget
{
public:
	class UCommonRichTextBlock*                   Text_Tooltip;
	uint8                                         Pad_298[0x8];

public:
	void HideTooltip();
	void SetText(const class FText& Text);
	void ShowTooltip();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBattlePassTutorialTooltipS24">();
	}
	static class UFortBattlePassTutorialTooltipS24* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBattlePassTutorialTooltipS24>();
	}
};
static_assert(alignof(UFortBattlePassTutorialTooltipS24) == 0x000008, "Wrong alignment on UFortBattlePassTutorialTooltipS24");
static_assert(sizeof(UFortBattlePassTutorialTooltipS24) == 0x0002A0, "Wrong size on UFortBattlePassTutorialTooltipS24");
static_assert(offsetof(UFortBattlePassTutorialTooltipS24, Text_Tooltip) == 0x000290, "Member 'UFortBattlePassTutorialTooltipS24::Text_Tooltip' has a wrong offset!");

}
