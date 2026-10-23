#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

enum class EViewerNavigationDirection : uint8
{
	Previous                                 = 0,
	Next                                     = 1,
	EViewerNavigationDirection_MAX           = 2,
};

enum class EFortCollectionBookPopupButtonType : uint8
{
	Invalid                                  = 0,
	SelectItem                               = 1,
	Preview                                  = 2,
	Purchase                                 = 3,
	Unslot                                   = 4,
	Back                                     = 5,
	EFortCollectionBookPopupButtonType_MAX   = 6,
};

enum class ECollectionBookSectionNavTarget : uint8
{
	SlotSelect                               = 0,
	SlotPicker                               = 1,
	ECollectionBookSectionNavTarget_MAX      = 2,
};

enum class EHeroLoadoutSlotType : uint8
{
	CommanderSlot                            = 0,
	TeamPerkSlot                             = 1,
	CrewSlot                                 = 2,
	GadgetSlot                               = 3,
	EHeroLoadoutSlotType_MAX                 = 4,
};

enum class ESquadSlotSortType : uint8
{
	ByRating                                 = 0,
	ByLevel                                  = 1,
	ByRarity                                 = 2,
	ByBonus                                  = 3,
	ByMatch                                  = 4,
	ESquadSlotSortType_MAX                   = 5,
};

enum class EFrontEndRewardType : uint8
{
	Mission                                  = 0,
	Quest                                    = 1,
	EpicNewQuest                             = 2,
	Expedition                               = 3,
	CollectionBook                           = 4,
	MissionAlert                             = 5,
	DifficultyIncrease                       = 6,
	GiftBox                                  = 7,
	ItemCache                                = 8,
	PhoenixLevelUp                           = 9,
	EFrontEndRewardType_MAX                  = 10,
};

enum class ECollectionBookRewardStatus : uint8
{
	Unknown                                  = 0,
	Available                                = 1,
	Claimed                                  = 2,
	ECollectionBookRewardStatus_MAX          = 3,
};

enum class ECollectionBookPrimaryNavTarget : uint8
{
	Overview                                 = 0,
	SectionTileView                          = 1,
	ECollectionBookPrimaryNavTarget_MAX      = 2,
};

enum class EFortExpeditionListSort : uint8
{
	ByRating                                 = 0,
	ByDuration                               = 1,
	ByName                                   = 2,
	EFortExpeditionListSort_MAX              = 3,
};

enum class EFortRewardItemTypeSTW : uint8
{
	RewardedBadges                           = 0,
	MissedBadges                             = 1,
	RewardedItems                            = 2,
	RewardedAccountItems                     = 3,
	EFortRewardItemTypeSTW_MAX               = 4,
};

enum class EFortHeroPerkDisplayType : uint8
{
	CommanderPerk                            = 0,
	TeamPerk                                 = 1,
	ClassPerk                                = 2,
	StandardPerk                             = 3,
	Max_None                                 = 4,
	EFortHeroPerkDisplayType_MAX             = 5,
};

enum class EFortAlterationOptionType : uint8
{
	Upgrade                                  = 0,
	Replacement                              = 1,
	Max_NONE                                 = 2,
	EFortAlterationOptionType_MAX            = 3,
};

enum class EFortMissionActivationWidgetSTWState : uint8
{
	Default                                  = 0,
	StartObjective                           = 1,
	IncreaseDifficulty                       = 2,
	Invalid                                  = 3,
	EFortMissionActivationWidgetSTWState_MAX = 4,
};

enum class ECalloutNavigationDirection : uint8
{
	Previous                                 = 0,
	Next                                     = 1,
	ECalloutNavigationDirection_MAX          = 2,
};

enum class EFortUISurvivorSquadMatchType : uint8
{
	Multi                                    = 0,
	Single                                   = 1,
	Summary                                  = 2,
	Max_None                                 = 3,
	EFortUISurvivorSquadMatchType_MAX        = 4,
};

enum class EUpgradeInfoImageSize : uint8
{
	Small                                    = 0,
	Large                                    = 1,
	EUpgradeInfoImageSize_MAX                = 2,
};

struct FSquadSlotSortTypes final
{
public:
	TArray<ESquadSlotSortType>                    SortTypes;
};
static_assert(alignof(FSquadSlotSortTypes) == 0x000008, "Wrong alignment on FSquadSlotSortTypes");
static_assert(sizeof(FSquadSlotSortTypes) == 0x000010, "Wrong size on FSquadSlotSortTypes");
static_assert(offsetof(FSquadSlotSortTypes, SortTypes) == 0x000000, "Member 'FSquadSlotSortTypes::SortTypes' has a wrong offset!");

struct FFortRefundDescriptionsData final : public FTableRowBase
{
public:
	class FString                                 SearchString;
	class FString                                 TargetReleaseVersion;
	class FText                                   RefundDescriptionText;
};
static_assert(alignof(FFortRefundDescriptionsData) == 0x000008, "Wrong alignment on FFortRefundDescriptionsData");
static_assert(sizeof(FFortRefundDescriptionsData) == 0x000040, "Wrong size on FFortRefundDescriptionsData");
static_assert(offsetof(FFortRefundDescriptionsData, SearchString) == 0x000008, "Member 'FFortRefundDescriptionsData::SearchString' has a wrong offset!");
static_assert(offsetof(FFortRefundDescriptionsData, TargetReleaseVersion) == 0x000018, "Member 'FFortRefundDescriptionsData::TargetReleaseVersion' has a wrong offset!");
static_assert(offsetof(FFortRefundDescriptionsData, RefundDescriptionText) == 0x000028, "Member 'FFortRefundDescriptionsData::RefundDescriptionText' has a wrong offset!");

struct FExpeditionTabInfo final
{
public:
	class FName                                   TabNameID;
	uint8                                         Pad_4[0xC];
	struct FFortTabButtonLabelInfo                TabLabelInfo;
};
static_assert(alignof(FExpeditionTabInfo) == 0x000010, "Wrong alignment on FExpeditionTabInfo");
static_assert(sizeof(FExpeditionTabInfo) == 0x000100, "Wrong size on FExpeditionTabInfo");
static_assert(offsetof(FExpeditionTabInfo, TabNameID) == 0x000000, "Member 'FExpeditionTabInfo::TabNameID' has a wrong offset!");
static_assert(offsetof(FExpeditionTabInfo, TabLabelInfo) == 0x000010, "Member 'FExpeditionTabInfo::TabLabelInfo' has a wrong offset!");

struct FConsumedCriteriaData final
{
public:
	float                                         PowerMod;
	uint8                                         Pad_4[0x4];
	TArray<class FName>                           CriteriaNames;
};
static_assert(alignof(FConsumedCriteriaData) == 0x000008, "Wrong alignment on FConsumedCriteriaData");
static_assert(sizeof(FConsumedCriteriaData) == 0x000018, "Wrong size on FConsumedCriteriaData");
static_assert(offsetof(FConsumedCriteriaData, PowerMod) == 0x000000, "Member 'FConsumedCriteriaData::PowerMod' has a wrong offset!");
static_assert(offsetof(FConsumedCriteriaData, CriteriaNames) == 0x000008, "Member 'FConsumedCriteriaData::CriteriaNames' has a wrong offset!");

struct FFortHeroLoadoutHeroPickerTabConfiguration final
{
public:
	struct FFortItemFilterDefinition              Filter;
	struct FFortItemSorterDefinition              Sorter;
};
static_assert(alignof(FFortHeroLoadoutHeroPickerTabConfiguration) == 0x000010, "Wrong alignment on FFortHeroLoadoutHeroPickerTabConfiguration");
static_assert(sizeof(FFortHeroLoadoutHeroPickerTabConfiguration) == 0x0000B0, "Wrong size on FFortHeroLoadoutHeroPickerTabConfiguration");
static_assert(offsetof(FFortHeroLoadoutHeroPickerTabConfiguration, Filter) == 0x000000, "Member 'FFortHeroLoadoutHeroPickerTabConfiguration::Filter' has a wrong offset!");
static_assert(offsetof(FFortHeroLoadoutHeroPickerTabConfiguration, Sorter) == 0x000060, "Member 'FFortHeroLoadoutHeroPickerTabConfiguration::Sorter' has a wrong offset!");

struct FFortInGamePerkDisplayData final
{
public:
	EFortHeroPerkDisplayType                      PerkDisplayType;
	uint8                                         Pad_1[0x3];
	int32                                         Index;
	int32                                         Row;
	int32                                         Column;
};
static_assert(alignof(FFortInGamePerkDisplayData) == 0x000004, "Wrong alignment on FFortInGamePerkDisplayData");
static_assert(sizeof(FFortInGamePerkDisplayData) == 0x000010, "Wrong size on FFortInGamePerkDisplayData");
static_assert(offsetof(FFortInGamePerkDisplayData, PerkDisplayType) == 0x000000, "Member 'FFortInGamePerkDisplayData::PerkDisplayType' has a wrong offset!");
static_assert(offsetof(FFortInGamePerkDisplayData, Index) == 0x000004, "Member 'FFortInGamePerkDisplayData::Index' has a wrong offset!");
static_assert(offsetof(FFortInGamePerkDisplayData, Row) == 0x000008, "Member 'FFortInGamePerkDisplayData::Row' has a wrong offset!");
static_assert(offsetof(FFortInGamePerkDisplayData, Column) == 0x00000C, "Member 'FFortInGamePerkDisplayData::Column' has a wrong offset!");

struct FFortQuestMapEventQuestSideBarData final : public FTableRowBase
{
public:
	class UFortQuestItemDefinition*               QuestItemDefinition;
	TArray<class FString>                         EventFlags;
	bool                                          bShowAlways;
	uint8                                         Pad_21[0x3];
	float                                         CycleTime;
};
static_assert(alignof(FFortQuestMapEventQuestSideBarData) == 0x000008, "Wrong alignment on FFortQuestMapEventQuestSideBarData");
static_assert(sizeof(FFortQuestMapEventQuestSideBarData) == 0x000028, "Wrong size on FFortQuestMapEventQuestSideBarData");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, QuestItemDefinition) == 0x000008, "Member 'FFortQuestMapEventQuestSideBarData::QuestItemDefinition' has a wrong offset!");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, EventFlags) == 0x000010, "Member 'FFortQuestMapEventQuestSideBarData::EventFlags' has a wrong offset!");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, bShowAlways) == 0x000020, "Member 'FFortQuestMapEventQuestSideBarData::bShowAlways' has a wrong offset!");
static_assert(offsetof(FFortQuestMapEventQuestSideBarData, CycleTime) == 0x000024, "Member 'FFortQuestMapEventQuestSideBarData::CycleTime' has a wrong offset!");

struct FFortDailyRewardsItemData final
{
public:
	class UFortItem*                              RewardItem;
	int32                                         RewardDay;
	bool                                          IsCurrentReward;
	bool                                          IsClaimed;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FFortDailyRewardsItemData) == 0x000008, "Wrong alignment on FFortDailyRewardsItemData");
static_assert(sizeof(FFortDailyRewardsItemData) == 0x000010, "Wrong size on FFortDailyRewardsItemData");
static_assert(offsetof(FFortDailyRewardsItemData, RewardItem) == 0x000000, "Member 'FFortDailyRewardsItemData::RewardItem' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsItemData, RewardDay) == 0x000008, "Member 'FFortDailyRewardsItemData::RewardDay' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsItemData, IsCurrentReward) == 0x00000C, "Member 'FFortDailyRewardsItemData::IsCurrentReward' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsItemData, IsClaimed) == 0x00000D, "Member 'FFortDailyRewardsItemData::IsClaimed' has a wrong offset!");

struct FFortDailyRewardsScheduleData final
{
public:
	class FText                                   ScheduleTitle;
	class FText                                   ScheduleDescription;
	class FText                                   ScheduleItemDescription;
	class FText                                   ScheduleEpicItemDescription;
	int32                                         WeekOffset;
	int32                                         RewardsGiven;
	int32                                         RewardsAllowed;
	uint8                                         Pad_6C[0x4];
	TArray<struct FFortDailyRewardsItemData>      CalendarItems;
	TArray<struct FFortDailyRewardsItemData>      HighValueItems;
	bool                                          ClaimedToday;
	uint8                                         Pad_91[0x7];
};
static_assert(alignof(FFortDailyRewardsScheduleData) == 0x000008, "Wrong alignment on FFortDailyRewardsScheduleData");
static_assert(sizeof(FFortDailyRewardsScheduleData) == 0x000098, "Wrong size on FFortDailyRewardsScheduleData");
static_assert(offsetof(FFortDailyRewardsScheduleData, ScheduleTitle) == 0x000000, "Member 'FFortDailyRewardsScheduleData::ScheduleTitle' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, ScheduleDescription) == 0x000018, "Member 'FFortDailyRewardsScheduleData::ScheduleDescription' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, ScheduleItemDescription) == 0x000030, "Member 'FFortDailyRewardsScheduleData::ScheduleItemDescription' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, ScheduleEpicItemDescription) == 0x000048, "Member 'FFortDailyRewardsScheduleData::ScheduleEpicItemDescription' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, WeekOffset) == 0x000060, "Member 'FFortDailyRewardsScheduleData::WeekOffset' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, RewardsGiven) == 0x000064, "Member 'FFortDailyRewardsScheduleData::RewardsGiven' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, RewardsAllowed) == 0x000068, "Member 'FFortDailyRewardsScheduleData::RewardsAllowed' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, CalendarItems) == 0x000070, "Member 'FFortDailyRewardsScheduleData::CalendarItems' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, HighValueItems) == 0x000080, "Member 'FFortDailyRewardsScheduleData::HighValueItems' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsScheduleData, ClaimedToday) == 0x000090, "Member 'FFortDailyRewardsScheduleData::ClaimedToday' has a wrong offset!");

struct FFortDailyRewardsData final
{
public:
	int32                                         CurrentLoginDays;
	bool                                          bCanClaim;
	uint8                                         Pad_5[0x3];
	TArray<struct FFortDailyRewardsScheduleData>  Schedules;
};
static_assert(alignof(FFortDailyRewardsData) == 0x000008, "Wrong alignment on FFortDailyRewardsData");
static_assert(sizeof(FFortDailyRewardsData) == 0x000018, "Wrong size on FFortDailyRewardsData");
static_assert(offsetof(FFortDailyRewardsData, CurrentLoginDays) == 0x000000, "Member 'FFortDailyRewardsData::CurrentLoginDays' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsData, bCanClaim) == 0x000004, "Member 'FFortDailyRewardsData::bCanClaim' has a wrong offset!");
static_assert(offsetof(FFortDailyRewardsData, Schedules) == 0x000008, "Member 'FFortDailyRewardsData::Schedules' has a wrong offset!");

struct FFortLandingPageDefenderSummaryInfo final
{
public:
	class FName                                   SquadId;
	uint8                                         Pad_4[0x4];
	class FText                                   TheaterDisplayName;
	class FString                                 TheaterUniqueId;
};
static_assert(alignof(FFortLandingPageDefenderSummaryInfo) == 0x000008, "Wrong alignment on FFortLandingPageDefenderSummaryInfo");
static_assert(sizeof(FFortLandingPageDefenderSummaryInfo) == 0x000030, "Wrong size on FFortLandingPageDefenderSummaryInfo");
static_assert(offsetof(FFortLandingPageDefenderSummaryInfo, SquadId) == 0x000000, "Member 'FFortLandingPageDefenderSummaryInfo::SquadId' has a wrong offset!");
static_assert(offsetof(FFortLandingPageDefenderSummaryInfo, TheaterDisplayName) == 0x000008, "Member 'FFortLandingPageDefenderSummaryInfo::TheaterDisplayName' has a wrong offset!");
static_assert(offsetof(FFortLandingPageDefenderSummaryInfo, TheaterUniqueId) == 0x000020, "Member 'FFortLandingPageDefenderSummaryInfo::TheaterUniqueId' has a wrong offset!");

struct FFortAttributeModifierAccumulation final
{
public:
	struct FGameplayTag                           GameplayTag;
	uint8                                         Pad_4[0x4];
	struct FGameplayAttribute                     Attribute;
	EGameplayModOp                                ModifierOp;
	uint8                                         Pad_41[0x3];
	float                                         Magnitude;
};
static_assert(alignof(FFortAttributeModifierAccumulation) == 0x000008, "Wrong alignment on FFortAttributeModifierAccumulation");
static_assert(sizeof(FFortAttributeModifierAccumulation) == 0x000048, "Wrong size on FFortAttributeModifierAccumulation");
static_assert(offsetof(FFortAttributeModifierAccumulation, GameplayTag) == 0x000000, "Member 'FFortAttributeModifierAccumulation::GameplayTag' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierAccumulation, Attribute) == 0x000008, "Member 'FFortAttributeModifierAccumulation::Attribute' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierAccumulation, ModifierOp) == 0x000040, "Member 'FFortAttributeModifierAccumulation::ModifierOp' has a wrong offset!");
static_assert(offsetof(FFortAttributeModifierAccumulation, Magnitude) == 0x000044, "Member 'FFortAttributeModifierAccumulation::Magnitude' has a wrong offset!");

struct FFortSurvivorSquadSlottingFeedbackData final
{
public:
	bool                                          HadLeaderMatch;
	bool                                          HasLeaderMatch;
	uint8                                         Pad_2[0x6];
	TMap<struct FGameplayTag, int32>              PreviousSetBonusCounts;
	TMap<struct FGameplayTag, int32>              CurrentSetBonusCounts;
	int32                                         PreviousPersonalityMatchCount;
	int32                                         CurrentPersonalityMatchCount;
};
static_assert(alignof(FFortSurvivorSquadSlottingFeedbackData) == 0x000008, "Wrong alignment on FFortSurvivorSquadSlottingFeedbackData");
static_assert(sizeof(FFortSurvivorSquadSlottingFeedbackData) == 0x0000B0, "Wrong size on FFortSurvivorSquadSlottingFeedbackData");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, HadLeaderMatch) == 0x000000, "Member 'FFortSurvivorSquadSlottingFeedbackData::HadLeaderMatch' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, HasLeaderMatch) == 0x000001, "Member 'FFortSurvivorSquadSlottingFeedbackData::HasLeaderMatch' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, PreviousSetBonusCounts) == 0x000008, "Member 'FFortSurvivorSquadSlottingFeedbackData::PreviousSetBonusCounts' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, CurrentSetBonusCounts) == 0x000058, "Member 'FFortSurvivorSquadSlottingFeedbackData::CurrentSetBonusCounts' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, PreviousPersonalityMatchCount) == 0x0000A8, "Member 'FFortSurvivorSquadSlottingFeedbackData::PreviousPersonalityMatchCount' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSlottingFeedbackData, CurrentPersonalityMatchCount) == 0x0000AC, "Member 'FFortSurvivorSquadSlottingFeedbackData::CurrentPersonalityMatchCount' has a wrong offset!");

struct FFortSurvivorSquadSelectorButtonSummaryStats final
{
public:
	class FName                                   SquadId;
	uint8                                         Pad_4[0x4];
	struct FGameplayAttribute                     FortAttribute;
	float                                         FortAttributeValue;
	uint8                                         Pad_44[0x4];
	struct FGameplayAttribute                     FortTeamAttribute;
	float                                         TeamFortAttributeValue;
	float                                         SquadPowerValue;
	class FText                                   FortAttributeName;
};
static_assert(alignof(FFortSurvivorSquadSelectorButtonSummaryStats) == 0x000008, "Wrong alignment on FFortSurvivorSquadSelectorButtonSummaryStats");
static_assert(sizeof(FFortSurvivorSquadSelectorButtonSummaryStats) == 0x0000A0, "Wrong size on FFortSurvivorSquadSelectorButtonSummaryStats");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, SquadId) == 0x000000, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::SquadId' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortAttribute) == 0x000008, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::FortAttribute' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortAttributeValue) == 0x000040, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::FortAttributeValue' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortTeamAttribute) == 0x000048, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::FortTeamAttribute' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, TeamFortAttributeValue) == 0x000080, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::TeamFortAttributeValue' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, SquadPowerValue) == 0x000084, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::SquadPowerValue' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonSummaryStats, FortAttributeName) == 0x000088, "Member 'FFortSurvivorSquadSelectorButtonSummaryStats::FortAttributeName' has a wrong offset!");

struct FFortSurvivorSquadSelectorButtonPersonalityMatches final
{
public:
	int32                                         NumPersonalityMatches;
	int32                                         TotalNonLeaderSquadMembers;
	bool                                          HavePersonalityIcons;
	uint8                                         Pad_9[0x7];
	struct FFortMultiSizeBrush                    PersonalityIcons;
};
static_assert(alignof(FFortSurvivorSquadSelectorButtonPersonalityMatches) == 0x000010, "Wrong alignment on FFortSurvivorSquadSelectorButtonPersonalityMatches");
static_assert(sizeof(FFortSurvivorSquadSelectorButtonPersonalityMatches) == 0x000490, "Wrong size on FFortSurvivorSquadSelectorButtonPersonalityMatches");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, NumPersonalityMatches) == 0x000000, "Member 'FFortSurvivorSquadSelectorButtonPersonalityMatches::NumPersonalityMatches' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, TotalNonLeaderSquadMembers) == 0x000004, "Member 'FFortSurvivorSquadSelectorButtonPersonalityMatches::TotalNonLeaderSquadMembers' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, HavePersonalityIcons) == 0x000008, "Member 'FFortSurvivorSquadSelectorButtonPersonalityMatches::HavePersonalityIcons' has a wrong offset!");
static_assert(offsetof(FFortSurvivorSquadSelectorButtonPersonalityMatches, PersonalityIcons) == 0x000010, "Member 'FFortSurvivorSquadSelectorButtonPersonalityMatches::PersonalityIcons' has a wrong offset!");

struct FFortUISurvivorSquadStatMatch final
{
public:
	struct FFortMultiSizeBrush                    Icons;
	class FText                                   MagnitudeText;
	class FText                                   AttributeDisplayName;
	int32                                         NumMembersMeetingCriteria;
	int32                                         NumMembersRequired;
	EFortUISurvivorSquadMatchType                 MatchType;
	EFortBuffState                                PreviewEffect;
	uint8                                         Pad_4BA[0x6];
};
static_assert(alignof(FFortUISurvivorSquadStatMatch) == 0x000010, "Wrong alignment on FFortUISurvivorSquadStatMatch");
static_assert(sizeof(FFortUISurvivorSquadStatMatch) == 0x0004C0, "Wrong size on FFortUISurvivorSquadStatMatch");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, Icons) == 0x000000, "Member 'FFortUISurvivorSquadStatMatch::Icons' has a wrong offset!");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, MagnitudeText) == 0x000480, "Member 'FFortUISurvivorSquadStatMatch::MagnitudeText' has a wrong offset!");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, AttributeDisplayName) == 0x000498, "Member 'FFortUISurvivorSquadStatMatch::AttributeDisplayName' has a wrong offset!");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, NumMembersMeetingCriteria) == 0x0004B0, "Member 'FFortUISurvivorSquadStatMatch::NumMembersMeetingCriteria' has a wrong offset!");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, NumMembersRequired) == 0x0004B4, "Member 'FFortUISurvivorSquadStatMatch::NumMembersRequired' has a wrong offset!");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, MatchType) == 0x0004B8, "Member 'FFortUISurvivorSquadStatMatch::MatchType' has a wrong offset!");
static_assert(offsetof(FFortUISurvivorSquadStatMatch, PreviewEffect) == 0x0004B9, "Member 'FFortUISurvivorSquadStatMatch::PreviewEffect' has a wrong offset!");

struct FOfferGroup final
{
public:
	class FString                                 Name;
	int32                                         MaxNumberToShow;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FOfferGroup) == 0x000008, "Wrong alignment on FOfferGroup");
static_assert(sizeof(FOfferGroup) == 0x000018, "Wrong size on FOfferGroup");
static_assert(offsetof(FOfferGroup, Name) == 0x000000, "Member 'FOfferGroup::Name' has a wrong offset!");
static_assert(offsetof(FOfferGroup, MaxNumberToShow) == 0x000010, "Member 'FOfferGroup::MaxNumberToShow' has a wrong offset!");

struct FHomebaseNodeDisplayData final : public FTableRowBase
{
public:
	class FText                                   Title;
	class FText                                   Description;
	TSoftObjectPtr<class UTexture2D>              LargePreviewImage;
	TSoftObjectPtr<class UTexture2D>              SmallPreviewImage;
	class UMediaSource*                           PreviewVideoMediaSource;
};
static_assert(alignof(FHomebaseNodeDisplayData) == 0x000008, "Wrong alignment on FHomebaseNodeDisplayData");
static_assert(sizeof(FHomebaseNodeDisplayData) == 0x000090, "Wrong size on FHomebaseNodeDisplayData");
static_assert(offsetof(FHomebaseNodeDisplayData, Title) == 0x000008, "Member 'FHomebaseNodeDisplayData::Title' has a wrong offset!");
static_assert(offsetof(FHomebaseNodeDisplayData, Description) == 0x000020, "Member 'FHomebaseNodeDisplayData::Description' has a wrong offset!");
static_assert(offsetof(FHomebaseNodeDisplayData, LargePreviewImage) == 0x000038, "Member 'FHomebaseNodeDisplayData::LargePreviewImage' has a wrong offset!");
static_assert(offsetof(FHomebaseNodeDisplayData, SmallPreviewImage) == 0x000060, "Member 'FHomebaseNodeDisplayData::SmallPreviewImage' has a wrong offset!");
static_assert(offsetof(FHomebaseNodeDisplayData, PreviewVideoMediaSource) == 0x000088, "Member 'FHomebaseNodeDisplayData::PreviewVideoMediaSource' has a wrong offset!");

}
