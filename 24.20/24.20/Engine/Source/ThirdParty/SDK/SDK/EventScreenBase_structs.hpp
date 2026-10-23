#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EEventScreenView : uint8
{
	None                                     = 0,
	LandingPage                              = 1,
	RewardPreview                            = 2,
	MoreInfo                                 = 3,
	PurchaseReward                           = 4,
	LoadError                                = 5,
	EEventScreenView_MAX                     = 6,
};

struct FDoubleWidthItem final
{
public:
	TSoftObjectPtr<class UFortItemDefinition>     ItemDefinition;
	TSoftObjectPtr<class UTexture2D>              CustomItemTexture;
};
static_assert(alignof(FDoubleWidthItem) == 0x000008, "Wrong alignment on FDoubleWidthItem");
static_assert(sizeof(FDoubleWidthItem) == 0x000050, "Wrong size on FDoubleWidthItem");
static_assert(offsetof(FDoubleWidthItem, ItemDefinition) == 0x000000, "Member 'FDoubleWidthItem::ItemDefinition' has a wrong offset!");
static_assert(offsetof(FDoubleWidthItem, CustomItemTexture) == 0x000028, "Member 'FDoubleWidthItem::CustomItemTexture' has a wrong offset!");

struct FEventScreenTrackData final
{
public:
	struct FLinearColor                           TrackColorPrimary;
	struct FLinearColor                           TrackColorSecondary;
};
static_assert(alignof(FEventScreenTrackData) == 0x000004, "Wrong alignment on FEventScreenTrackData");
static_assert(sizeof(FEventScreenTrackData) == 0x000020, "Wrong size on FEventScreenTrackData");
static_assert(offsetof(FEventScreenTrackData, TrackColorPrimary) == 0x000000, "Member 'FEventScreenTrackData::TrackColorPrimary' has a wrong offset!");
static_assert(offsetof(FEventScreenTrackData, TrackColorSecondary) == 0x000010, "Member 'FEventScreenTrackData::TrackColorSecondary' has a wrong offset!");

struct FEventScreenCMSResourceGroupOverride final
{
public:
	int32                                         ResourceValue;
	uint8                                         Pad_4[0x4];
	class FString                                 KeyArtOverrideURL;
};
static_assert(alignof(FEventScreenCMSResourceGroupOverride) == 0x000008, "Wrong alignment on FEventScreenCMSResourceGroupOverride");
static_assert(sizeof(FEventScreenCMSResourceGroupOverride) == 0x000018, "Wrong size on FEventScreenCMSResourceGroupOverride");
static_assert(offsetof(FEventScreenCMSResourceGroupOverride, ResourceValue) == 0x000000, "Member 'FEventScreenCMSResourceGroupOverride::ResourceValue' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSResourceGroupOverride, KeyArtOverrideURL) == 0x000008, "Member 'FEventScreenCMSResourceGroupOverride::KeyArtOverrideURL' has a wrong offset!");

struct FEventScreenCMSData final
{
public:
	class FString                                 EventCMSId;
	class FText                                   EventName;
	class FText                                   EventDescription;
	class FText                                   ResourceHeader;
	class FText                                   StarterHeader;
	class FText                                   CompletionHeader;
	class FText                                   EventCTA;
	class FText                                   EventCTACompleted;
	class FText                                   HeaderCTA;
	class FText                                   ItemShopCallout;
	class FString                                 CTAIconURL;
	class FString                                 KeyArtURL;
	class FText                                   MoreInfoHeader;
	class FText                                   MoreInfoSubHeader;
	class FText                                   MoreInfoBody;
	class FText                                   MoreInfoLegal;
	class FText                                   PurchaseLegal;
	class FText                                   RewardTrackLegal;
	class FString                                 ItemShopOfferId;
	TArray<struct FEventScreenCMSResourceGroupOverride> ResourceGroupOverrides;
};
static_assert(alignof(FEventScreenCMSData) == 0x000008, "Wrong alignment on FEventScreenCMSData");
static_assert(sizeof(FEventScreenCMSData) == 0x0001B8, "Wrong size on FEventScreenCMSData");
static_assert(offsetof(FEventScreenCMSData, EventCMSId) == 0x000000, "Member 'FEventScreenCMSData::EventCMSId' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, EventName) == 0x000010, "Member 'FEventScreenCMSData::EventName' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, EventDescription) == 0x000028, "Member 'FEventScreenCMSData::EventDescription' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, ResourceHeader) == 0x000040, "Member 'FEventScreenCMSData::ResourceHeader' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, StarterHeader) == 0x000058, "Member 'FEventScreenCMSData::StarterHeader' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, CompletionHeader) == 0x000070, "Member 'FEventScreenCMSData::CompletionHeader' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, EventCTA) == 0x000088, "Member 'FEventScreenCMSData::EventCTA' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, EventCTACompleted) == 0x0000A0, "Member 'FEventScreenCMSData::EventCTACompleted' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, HeaderCTA) == 0x0000B8, "Member 'FEventScreenCMSData::HeaderCTA' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, ItemShopCallout) == 0x0000D0, "Member 'FEventScreenCMSData::ItemShopCallout' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, CTAIconURL) == 0x0000E8, "Member 'FEventScreenCMSData::CTAIconURL' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, KeyArtURL) == 0x0000F8, "Member 'FEventScreenCMSData::KeyArtURL' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, MoreInfoHeader) == 0x000108, "Member 'FEventScreenCMSData::MoreInfoHeader' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, MoreInfoSubHeader) == 0x000120, "Member 'FEventScreenCMSData::MoreInfoSubHeader' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, MoreInfoBody) == 0x000138, "Member 'FEventScreenCMSData::MoreInfoBody' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, MoreInfoLegal) == 0x000150, "Member 'FEventScreenCMSData::MoreInfoLegal' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, PurchaseLegal) == 0x000168, "Member 'FEventScreenCMSData::PurchaseLegal' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, RewardTrackLegal) == 0x000180, "Member 'FEventScreenCMSData::RewardTrackLegal' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, ItemShopOfferId) == 0x000198, "Member 'FEventScreenCMSData::ItemShopOfferId' has a wrong offset!");
static_assert(offsetof(FEventScreenCMSData, ResourceGroupOverrides) == 0x0001A8, "Member 'FEventScreenCMSData::ResourceGroupOverrides' has a wrong offset!");

struct FEventScreenCMSGroup final
{
public:
	TArray<struct FEventScreenCMSData>            EventScreens;
};
static_assert(alignof(FEventScreenCMSGroup) == 0x000008, "Wrong alignment on FEventScreenCMSGroup");
static_assert(sizeof(FEventScreenCMSGroup) == 0x000010, "Wrong size on FEventScreenCMSGroup");
static_assert(offsetof(FEventScreenCMSGroup, EventScreens) == 0x000000, "Member 'FEventScreenCMSGroup::EventScreens' has a wrong offset!");

}
