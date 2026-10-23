#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

enum class EBattlePassLandingPageSpecialEntryType : uint8
{
	None                                     = 0,
	Subscription                             = 1,
	CharacterCustomizer                      = 2,
	SpecialCharacter                         = 3,
	Weekly                                   = 4,
	COUNT                                    = 5,
	EBattlePassLandingPageSpecialEntryType_MAX = 6,
};

enum class EFBattlePassLandingPageButtonDisplayBehavior : uint8
{
	None                                     = 0,
	MainRewards                              = 1,
	BonusRewards                             = 2,
	WeeklyRewards                            = 3,
	QuestRewards                             = 4,
	Subscription                             = 5,
	Customization                            = 6,
	FBattlePassLandingPageButtonDisplayBehavior_MAX = 7,
};

enum class EBattlePassTileAvailabilityStates : uint8
{
	Invalid                                  = 0,
	Available                                = 1,
	Owned                                    = 2,
	Locked                                   = 3,
	BattlePassTileAvailabilityStates_MAX     = 4,
};

struct alignas(0x08) FBattlePassEntrySelectedParams final
{
public:
	uint8                                         Pad_0[0x58];
};
static_assert(alignof(FBattlePassEntrySelectedParams) == 0x000008, "Wrong alignment on FBattlePassEntrySelectedParams");
static_assert(sizeof(FBattlePassEntrySelectedParams) == 0x000058, "Wrong size on FBattlePassEntrySelectedParams");

struct alignas(0x08) FBattlePassCoverPageParams final
{
public:
	uint8                                         Pad_0[0x48];
};
static_assert(alignof(FBattlePassCoverPageParams) == 0x000008, "Wrong alignment on FBattlePassCoverPageParams");
static_assert(sizeof(FBattlePassCoverPageParams) == 0x000048, "Wrong size on FBattlePassCoverPageParams");

struct FBattlePassLandingPageButtonTexts final
{
public:
	class FText                                   TileText;
	class FText                                   LandingPageTitleText;
	class FText                                   LandingPageDescriptionText;
};
static_assert(alignof(FBattlePassLandingPageButtonTexts) == 0x000008, "Wrong alignment on FBattlePassLandingPageButtonTexts");
static_assert(sizeof(FBattlePassLandingPageButtonTexts) == 0x000048, "Wrong size on FBattlePassLandingPageButtonTexts");
static_assert(offsetof(FBattlePassLandingPageButtonTexts, TileText) == 0x000000, "Member 'FBattlePassLandingPageButtonTexts::TileText' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonTexts, LandingPageTitleText) == 0x000018, "Member 'FBattlePassLandingPageButtonTexts::LandingPageTitleText' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonTexts, LandingPageDescriptionText) == 0x000030, "Member 'FBattlePassLandingPageButtonTexts::LandingPageDescriptionText' has a wrong offset!");

struct FBattlePassLandingPageButtonDisplayBehaviorData final
{
public:
	EFBattlePassLandingPageButtonDisplayBehavior  DisplayBehavior;
	uint8                                         Pad_1[0x7];
	struct FTimespan                              BehaviorTimespan;
	bool                                          bIsDisplayActive;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FBattlePassLandingPageButtonDisplayBehaviorData) == 0x000008, "Wrong alignment on FBattlePassLandingPageButtonDisplayBehaviorData");
static_assert(sizeof(FBattlePassLandingPageButtonDisplayBehaviorData) == 0x000018, "Wrong size on FBattlePassLandingPageButtonDisplayBehaviorData");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayBehaviorData, DisplayBehavior) == 0x000000, "Member 'FBattlePassLandingPageButtonDisplayBehaviorData::DisplayBehavior' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayBehaviorData, BehaviorTimespan) == 0x000008, "Member 'FBattlePassLandingPageButtonDisplayBehaviorData::BehaviorTimespan' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayBehaviorData, bIsDisplayActive) == 0x000010, "Member 'FBattlePassLandingPageButtonDisplayBehaviorData::bIsDisplayActive' has a wrong offset!");

struct FBattlePassLandingPageButtonDisplayDetails final
{
public:
	struct FBattlePassLandingPageButtonTexts      ButtonTexts;
	bool                                          bIsBPLocked;
	uint8                                         Pad_49[0x7];
	class FText                                   MissingCosmeticNameText;
	struct FTimespan                              DelayTimespan;
};
static_assert(alignof(FBattlePassLandingPageButtonDisplayDetails) == 0x000008, "Wrong alignment on FBattlePassLandingPageButtonDisplayDetails");
static_assert(sizeof(FBattlePassLandingPageButtonDisplayDetails) == 0x000070, "Wrong size on FBattlePassLandingPageButtonDisplayDetails");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayDetails, ButtonTexts) == 0x000000, "Member 'FBattlePassLandingPageButtonDisplayDetails::ButtonTexts' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayDetails, bIsBPLocked) == 0x000048, "Member 'FBattlePassLandingPageButtonDisplayDetails::bIsBPLocked' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayDetails, MissingCosmeticNameText) == 0x000050, "Member 'FBattlePassLandingPageButtonDisplayDetails::MissingCosmeticNameText' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageButtonDisplayDetails, DelayTimespan) == 0x000068, "Member 'FBattlePassLandingPageButtonDisplayDetails::DelayTimespan' has a wrong offset!");

struct FBattlePassLandingPageEntryPreviewInfo final
{
public:
	EBattlePassLandingPageSpecialEntryType        SpecialEntryType;
	uint8                                         Pad_1[0x7];
	TArray<EFortItemType>                         SubscriptionItemTypesToDisplay;
	struct FGameplayTag                           SpecialCharacterVariantChannelToModify;
	struct FGameplayTag                           SpecialCharacterActiveVariantTag;
	TMap<class FString, TSoftObjectPtr<class UMaterialInstance>> TemplateIdTileRenderMap;
	TArray<TSoftObjectPtr<class UFortItemDefinition>> PreviewItems;
	bool                                          bEnableDynamicWeeklyPreview;
	uint8                                         Pad_81[0x3];
	float                                         TransitionTime;
	uint8                                         Pad_88[0x8];
};
static_assert(alignof(FBattlePassLandingPageEntryPreviewInfo) == 0x000008, "Wrong alignment on FBattlePassLandingPageEntryPreviewInfo");
static_assert(sizeof(FBattlePassLandingPageEntryPreviewInfo) == 0x000090, "Wrong size on FBattlePassLandingPageEntryPreviewInfo");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, SpecialEntryType) == 0x000000, "Member 'FBattlePassLandingPageEntryPreviewInfo::SpecialEntryType' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, SubscriptionItemTypesToDisplay) == 0x000008, "Member 'FBattlePassLandingPageEntryPreviewInfo::SubscriptionItemTypesToDisplay' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, SpecialCharacterVariantChannelToModify) == 0x000018, "Member 'FBattlePassLandingPageEntryPreviewInfo::SpecialCharacterVariantChannelToModify' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, SpecialCharacterActiveVariantTag) == 0x00001C, "Member 'FBattlePassLandingPageEntryPreviewInfo::SpecialCharacterActiveVariantTag' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, TemplateIdTileRenderMap) == 0x000020, "Member 'FBattlePassLandingPageEntryPreviewInfo::TemplateIdTileRenderMap' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, PreviewItems) == 0x000070, "Member 'FBattlePassLandingPageEntryPreviewInfo::PreviewItems' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, bEnableDynamicWeeklyPreview) == 0x000080, "Member 'FBattlePassLandingPageEntryPreviewInfo::bEnableDynamicWeeklyPreview' has a wrong offset!");
static_assert(offsetof(FBattlePassLandingPageEntryPreviewInfo, TransitionTime) == 0x000084, "Member 'FBattlePassLandingPageEntryPreviewInfo::TransitionTime' has a wrong offset!");

struct FSeasonalResourceList final
{
public:
	TArray<class UFortPersistentResourceItemDefinition*> SeasonalResources;
};
static_assert(alignof(FSeasonalResourceList) == 0x000008, "Wrong alignment on FSeasonalResourceList");
static_assert(sizeof(FSeasonalResourceList) == 0x000010, "Wrong size on FSeasonalResourceList");
static_assert(offsetof(FSeasonalResourceList, SeasonalResources) == 0x000000, "Member 'FSeasonalResourceList::SeasonalResources' has a wrong offset!");

}
