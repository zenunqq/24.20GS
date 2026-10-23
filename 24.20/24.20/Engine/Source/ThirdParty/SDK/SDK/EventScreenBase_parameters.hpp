#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "EventScreenBase_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct FortEventMoreInfoModal_OnEventScreenDataSet final
{
public:
	const class UFortEventScreenData*             InEventScreenData;
};
static_assert(alignof(FortEventMoreInfoModal_OnEventScreenDataSet) == 0x000008, "Wrong alignment on FortEventMoreInfoModal_OnEventScreenDataSet");
static_assert(sizeof(FortEventMoreInfoModal_OnEventScreenDataSet) == 0x000008, "Wrong size on FortEventMoreInfoModal_OnEventScreenDataSet");
static_assert(offsetof(FortEventMoreInfoModal_OnEventScreenDataSet, InEventScreenData) == 0x000000, "Member 'FortEventMoreInfoModal_OnEventScreenDataSet::InEventScreenData' has a wrong offset!");

struct FortEventMoreInfoModal_SetModalText final
{
public:
	class FText                                   Header;
	class FText                                   SubHeader;
	class FText                                   Body;
	class FText                                   Legal;
};
static_assert(alignof(FortEventMoreInfoModal_SetModalText) == 0x000008, "Wrong alignment on FortEventMoreInfoModal_SetModalText");
static_assert(sizeof(FortEventMoreInfoModal_SetModalText) == 0x000060, "Wrong size on FortEventMoreInfoModal_SetModalText");
static_assert(offsetof(FortEventMoreInfoModal_SetModalText, Header) == 0x000000, "Member 'FortEventMoreInfoModal_SetModalText::Header' has a wrong offset!");
static_assert(offsetof(FortEventMoreInfoModal_SetModalText, SubHeader) == 0x000018, "Member 'FortEventMoreInfoModal_SetModalText::SubHeader' has a wrong offset!");
static_assert(offsetof(FortEventMoreInfoModal_SetModalText, Body) == 0x000030, "Member 'FortEventMoreInfoModal_SetModalText::Body' has a wrong offset!");
static_assert(offsetof(FortEventMoreInfoModal_SetModalText, Legal) == 0x000048, "Member 'FortEventMoreInfoModal_SetModalText::Legal' has a wrong offset!");

struct FortEventMoreInfoModal_GetEventScreenData final
{
public:
	const class UFortEventScreenData*             ReturnValue;
};
static_assert(alignof(FortEventMoreInfoModal_GetEventScreenData) == 0x000008, "Wrong alignment on FortEventMoreInfoModal_GetEventScreenData");
static_assert(sizeof(FortEventMoreInfoModal_GetEventScreenData) == 0x000008, "Wrong size on FortEventMoreInfoModal_GetEventScreenData");
static_assert(offsetof(FortEventMoreInfoModal_GetEventScreenData, ReturnValue) == 0x000000, "Member 'FortEventMoreInfoModal_GetEventScreenData::ReturnValue' has a wrong offset!");

struct FortEventPurchaseModal_HandlePurchaseComplete final
{
public:
	bool                                          bSuccess;
	uint8                                         Pad_1[0x7];
	TArray<struct FPurchasedItemInfo>             PurchasedItems;
	class FString                                 InOfferId;
};
static_assert(alignof(FortEventPurchaseModal_HandlePurchaseComplete) == 0x000008, "Wrong alignment on FortEventPurchaseModal_HandlePurchaseComplete");
static_assert(sizeof(FortEventPurchaseModal_HandlePurchaseComplete) == 0x000028, "Wrong size on FortEventPurchaseModal_HandlePurchaseComplete");
static_assert(offsetof(FortEventPurchaseModal_HandlePurchaseComplete, bSuccess) == 0x000000, "Member 'FortEventPurchaseModal_HandlePurchaseComplete::bSuccess' has a wrong offset!");
static_assert(offsetof(FortEventPurchaseModal_HandlePurchaseComplete, PurchasedItems) == 0x000008, "Member 'FortEventPurchaseModal_HandlePurchaseComplete::PurchasedItems' has a wrong offset!");
static_assert(offsetof(FortEventPurchaseModal_HandlePurchaseComplete, InOfferId) == 0x000018, "Member 'FortEventPurchaseModal_HandlePurchaseComplete::InOfferId' has a wrong offset!");

struct FortEventPurchaseModal_OnCMSTextApplied final
{
public:
	class FText                                   LegalText;
};
static_assert(alignof(FortEventPurchaseModal_OnCMSTextApplied) == 0x000008, "Wrong alignment on FortEventPurchaseModal_OnCMSTextApplied");
static_assert(sizeof(FortEventPurchaseModal_OnCMSTextApplied) == 0x000018, "Wrong size on FortEventPurchaseModal_OnCMSTextApplied");
static_assert(offsetof(FortEventPurchaseModal_OnCMSTextApplied, LegalText) == 0x000000, "Member 'FortEventPurchaseModal_OnCMSTextApplied::LegalText' has a wrong offset!");

struct FortEventPurchaseModal_OnEventScreenDataSet final
{
public:
	const class UFortEventScreenData*             InEventScreenData;
};
static_assert(alignof(FortEventPurchaseModal_OnEventScreenDataSet) == 0x000008, "Wrong alignment on FortEventPurchaseModal_OnEventScreenDataSet");
static_assert(sizeof(FortEventPurchaseModal_OnEventScreenDataSet) == 0x000008, "Wrong size on FortEventPurchaseModal_OnEventScreenDataSet");
static_assert(offsetof(FortEventPurchaseModal_OnEventScreenDataSet, InEventScreenData) == 0x000000, "Member 'FortEventPurchaseModal_OnEventScreenDataSet::InEventScreenData' has a wrong offset!");

struct FortEventPurchaseModal_OnPurchaseAmountChanged final
{
public:
	int32                                         PurchaseQuantity;
	int32                                         ResourceQuantity;
};
static_assert(alignof(FortEventPurchaseModal_OnPurchaseAmountChanged) == 0x000004, "Wrong alignment on FortEventPurchaseModal_OnPurchaseAmountChanged");
static_assert(sizeof(FortEventPurchaseModal_OnPurchaseAmountChanged) == 0x000008, "Wrong size on FortEventPurchaseModal_OnPurchaseAmountChanged");
static_assert(offsetof(FortEventPurchaseModal_OnPurchaseAmountChanged, PurchaseQuantity) == 0x000000, "Member 'FortEventPurchaseModal_OnPurchaseAmountChanged::PurchaseQuantity' has a wrong offset!");
static_assert(offsetof(FortEventPurchaseModal_OnPurchaseAmountChanged, ResourceQuantity) == 0x000004, "Member 'FortEventPurchaseModal_OnPurchaseAmountChanged::ResourceQuantity' has a wrong offset!");

struct FortEventPurchaseModal_OnTotalPriceChanged final
{
public:
	int32                                         NewPrice;
};
static_assert(alignof(FortEventPurchaseModal_OnTotalPriceChanged) == 0x000004, "Wrong alignment on FortEventPurchaseModal_OnTotalPriceChanged");
static_assert(sizeof(FortEventPurchaseModal_OnTotalPriceChanged) == 0x000004, "Wrong size on FortEventPurchaseModal_OnTotalPriceChanged");
static_assert(offsetof(FortEventPurchaseModal_OnTotalPriceChanged, NewPrice) == 0x000000, "Member 'FortEventPurchaseModal_OnTotalPriceChanged::NewPrice' has a wrong offset!");

struct FortEventPurchaseModal_GetEventScreenData final
{
public:
	const class UFortEventScreenData*             ReturnValue;
};
static_assert(alignof(FortEventPurchaseModal_GetEventScreenData) == 0x000008, "Wrong alignment on FortEventPurchaseModal_GetEventScreenData");
static_assert(sizeof(FortEventPurchaseModal_GetEventScreenData) == 0x000008, "Wrong size on FortEventPurchaseModal_GetEventScreenData");
static_assert(offsetof(FortEventPurchaseModal_GetEventScreenData, ReturnValue) == 0x000000, "Member 'FortEventPurchaseModal_GetEventScreenData::ReturnValue' has a wrong offset!");

struct FortEventRewardTracksWidget_BPOnEventScreenDataSet final
{
public:
	const class UFortEventScreenData*             InEventScreenData;
};
static_assert(alignof(FortEventRewardTracksWidget_BPOnEventScreenDataSet) == 0x000008, "Wrong alignment on FortEventRewardTracksWidget_BPOnEventScreenDataSet");
static_assert(sizeof(FortEventRewardTracksWidget_BPOnEventScreenDataSet) == 0x000008, "Wrong size on FortEventRewardTracksWidget_BPOnEventScreenDataSet");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnEventScreenDataSet, InEventScreenData) == 0x000000, "Member 'FortEventRewardTracksWidget_BPOnEventScreenDataSet::InEventScreenData' has a wrong offset!");

struct FortEventRewardTracksWidget_BPOnSetRewardItem final
{
public:
	int32                                         RequiredProgress;
	int32                                         RemainingProgress;
	float                                         RewardProgressPercent;
	float                                         PreviewProgressPercent;
	float                                         OverallProgressPercent;
	bool                                          bInPreviewMode;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FortEventRewardTracksWidget_BPOnSetRewardItem) == 0x000004, "Wrong alignment on FortEventRewardTracksWidget_BPOnSetRewardItem");
static_assert(sizeof(FortEventRewardTracksWidget_BPOnSetRewardItem) == 0x000018, "Wrong size on FortEventRewardTracksWidget_BPOnSetRewardItem");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnSetRewardItem, RequiredProgress) == 0x000000, "Member 'FortEventRewardTracksWidget_BPOnSetRewardItem::RequiredProgress' has a wrong offset!");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnSetRewardItem, RemainingProgress) == 0x000004, "Member 'FortEventRewardTracksWidget_BPOnSetRewardItem::RemainingProgress' has a wrong offset!");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnSetRewardItem, RewardProgressPercent) == 0x000008, "Member 'FortEventRewardTracksWidget_BPOnSetRewardItem::RewardProgressPercent' has a wrong offset!");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnSetRewardItem, PreviewProgressPercent) == 0x00000C, "Member 'FortEventRewardTracksWidget_BPOnSetRewardItem::PreviewProgressPercent' has a wrong offset!");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnSetRewardItem, OverallProgressPercent) == 0x000010, "Member 'FortEventRewardTracksWidget_BPOnSetRewardItem::OverallProgressPercent' has a wrong offset!");
static_assert(offsetof(FortEventRewardTracksWidget_BPOnSetRewardItem, bInPreviewMode) == 0x000014, "Member 'FortEventRewardTracksWidget_BPOnSetRewardItem::bInPreviewMode' has a wrong offset!");

struct FortEventRewardTracksWidget_BPSetAllRewardsCollected final
{
public:
	bool                                          bAllCollected;
};
static_assert(alignof(FortEventRewardTracksWidget_BPSetAllRewardsCollected) == 0x000001, "Wrong alignment on FortEventRewardTracksWidget_BPSetAllRewardsCollected");
static_assert(sizeof(FortEventRewardTracksWidget_BPSetAllRewardsCollected) == 0x000001, "Wrong size on FortEventRewardTracksWidget_BPSetAllRewardsCollected");
static_assert(offsetof(FortEventRewardTracksWidget_BPSetAllRewardsCollected, bAllCollected) == 0x000000, "Member 'FortEventRewardTracksWidget_BPSetAllRewardsCollected::bAllCollected' has a wrong offset!");

struct FortEventRewardWidget_OnEventScreenDataSet final
{
public:
	const class UFortEventScreenData*             InEventScreenData;
};
static_assert(alignof(FortEventRewardWidget_OnEventScreenDataSet) == 0x000008, "Wrong alignment on FortEventRewardWidget_OnEventScreenDataSet");
static_assert(sizeof(FortEventRewardWidget_OnEventScreenDataSet) == 0x000008, "Wrong size on FortEventRewardWidget_OnEventScreenDataSet");
static_assert(offsetof(FortEventRewardWidget_OnEventScreenDataSet, InEventScreenData) == 0x000000, "Member 'FortEventRewardWidget_OnEventScreenDataSet::InEventScreenData' has a wrong offset!");

struct FortEventRewardWidget_OnInputMethodChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(FortEventRewardWidget_OnInputMethodChanged) == 0x000001, "Wrong alignment on FortEventRewardWidget_OnInputMethodChanged");
static_assert(sizeof(FortEventRewardWidget_OnInputMethodChanged) == 0x000001, "Wrong size on FortEventRewardWidget_OnInputMethodChanged");
static_assert(offsetof(FortEventRewardWidget_OnInputMethodChanged, NewInputType) == 0x000000, "Member 'FortEventRewardWidget_OnInputMethodChanged::NewInputType' has a wrong offset!");

struct FortEventRewardWidget_OnSetRewardItem final
{
public:
	int32                                         RequiredProgress;
	int32                                         RemainingProgress;
	float                                         RewardProgressPercent;
	float                                         PreviewProgressPercent;
	float                                         OverallProgressPercent;
	bool                                          bInPreviewMode;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FortEventRewardWidget_OnSetRewardItem) == 0x000004, "Wrong alignment on FortEventRewardWidget_OnSetRewardItem");
static_assert(sizeof(FortEventRewardWidget_OnSetRewardItem) == 0x000018, "Wrong size on FortEventRewardWidget_OnSetRewardItem");
static_assert(offsetof(FortEventRewardWidget_OnSetRewardItem, RequiredProgress) == 0x000000, "Member 'FortEventRewardWidget_OnSetRewardItem::RequiredProgress' has a wrong offset!");
static_assert(offsetof(FortEventRewardWidget_OnSetRewardItem, RemainingProgress) == 0x000004, "Member 'FortEventRewardWidget_OnSetRewardItem::RemainingProgress' has a wrong offset!");
static_assert(offsetof(FortEventRewardWidget_OnSetRewardItem, RewardProgressPercent) == 0x000008, "Member 'FortEventRewardWidget_OnSetRewardItem::RewardProgressPercent' has a wrong offset!");
static_assert(offsetof(FortEventRewardWidget_OnSetRewardItem, PreviewProgressPercent) == 0x00000C, "Member 'FortEventRewardWidget_OnSetRewardItem::PreviewProgressPercent' has a wrong offset!");
static_assert(offsetof(FortEventRewardWidget_OnSetRewardItem, OverallProgressPercent) == 0x000010, "Member 'FortEventRewardWidget_OnSetRewardItem::OverallProgressPercent' has a wrong offset!");
static_assert(offsetof(FortEventRewardWidget_OnSetRewardItem, bInPreviewMode) == 0x000014, "Member 'FortEventRewardWidget_OnSetRewardItem::bInPreviewMode' has a wrong offset!");

struct FortEventRewardWidget_SetAllRewardsCollected final
{
public:
	bool                                          bAllCollected;
};
static_assert(alignof(FortEventRewardWidget_SetAllRewardsCollected) == 0x000001, "Wrong alignment on FortEventRewardWidget_SetAllRewardsCollected");
static_assert(sizeof(FortEventRewardWidget_SetAllRewardsCollected) == 0x000001, "Wrong size on FortEventRewardWidget_SetAllRewardsCollected");
static_assert(offsetof(FortEventRewardWidget_SetAllRewardsCollected, bAllCollected) == 0x000000, "Member 'FortEventRewardWidget_SetAllRewardsCollected::bAllCollected' has a wrong offset!");

struct FortEventRewardWidget_SetCustomItemIcon final
{
public:
	const class UTexture2D*                       CustomItemIcon;
};
static_assert(alignof(FortEventRewardWidget_SetCustomItemIcon) == 0x000008, "Wrong alignment on FortEventRewardWidget_SetCustomItemIcon");
static_assert(sizeof(FortEventRewardWidget_SetCustomItemIcon) == 0x000008, "Wrong size on FortEventRewardWidget_SetCustomItemIcon");
static_assert(offsetof(FortEventRewardWidget_SetCustomItemIcon, CustomItemIcon) == 0x000000, "Member 'FortEventRewardWidget_SetCustomItemIcon::CustomItemIcon' has a wrong offset!");

struct FortEventRewardWidget_SetDoubleWidth final
{
public:
	bool                                          bDoubleWidth;
};
static_assert(alignof(FortEventRewardWidget_SetDoubleWidth) == 0x000001, "Wrong alignment on FortEventRewardWidget_SetDoubleWidth");
static_assert(sizeof(FortEventRewardWidget_SetDoubleWidth) == 0x000001, "Wrong size on FortEventRewardWidget_SetDoubleWidth");
static_assert(offsetof(FortEventRewardWidget_SetDoubleWidth, bDoubleWidth) == 0x000000, "Member 'FortEventRewardWidget_SetDoubleWidth::bDoubleWidth' has a wrong offset!");

struct FortEventRewardWidget_SetInPreviewedState final
{
public:
	bool                                          bPreviewed;
};
static_assert(alignof(FortEventRewardWidget_SetInPreviewedState) == 0x000001, "Wrong alignment on FortEventRewardWidget_SetInPreviewedState");
static_assert(sizeof(FortEventRewardWidget_SetInPreviewedState) == 0x000001, "Wrong size on FortEventRewardWidget_SetInPreviewedState");
static_assert(offsetof(FortEventRewardWidget_SetInPreviewedState, bPreviewed) == 0x000000, "Member 'FortEventRewardWidget_SetInPreviewedState::bPreviewed' has a wrong offset!");

struct FortEventRewardWidget_SetInPreviewSelectedState final
{
public:
	bool                                          bSelected;
};
static_assert(alignof(FortEventRewardWidget_SetInPreviewSelectedState) == 0x000001, "Wrong alignment on FortEventRewardWidget_SetInPreviewSelectedState");
static_assert(sizeof(FortEventRewardWidget_SetInPreviewSelectedState) == 0x000001, "Wrong size on FortEventRewardWidget_SetInPreviewSelectedState");
static_assert(offsetof(FortEventRewardWidget_SetInPreviewSelectedState, bSelected) == 0x000000, "Member 'FortEventRewardWidget_SetInPreviewSelectedState::bSelected' has a wrong offset!");

struct FortEventRewardWidget_SetInSelectedState final
{
public:
	bool                                          bSelected;
};
static_assert(alignof(FortEventRewardWidget_SetInSelectedState) == 0x000001, "Wrong alignment on FortEventRewardWidget_SetInSelectedState");
static_assert(sizeof(FortEventRewardWidget_SetInSelectedState) == 0x000001, "Wrong size on FortEventRewardWidget_SetInSelectedState");
static_assert(offsetof(FortEventRewardWidget_SetInSelectedState, bSelected) == 0x000000, "Member 'FortEventRewardWidget_SetInSelectedState::bSelected' has a wrong offset!");

struct FortEventRewardWidget_SetIsBannerItem final
{
public:
	bool                                          bIsBanner;
};
static_assert(alignof(FortEventRewardWidget_SetIsBannerItem) == 0x000001, "Wrong alignment on FortEventRewardWidget_SetIsBannerItem");
static_assert(sizeof(FortEventRewardWidget_SetIsBannerItem) == 0x000001, "Wrong size on FortEventRewardWidget_SetIsBannerItem");
static_assert(offsetof(FortEventRewardWidget_SetIsBannerItem, bIsBanner) == 0x000000, "Member 'FortEventRewardWidget_SetIsBannerItem::bIsBanner' has a wrong offset!");

struct FortEventRewardWidget_SetProgressPercent final
{
public:
	float                                         Percent;
};
static_assert(alignof(FortEventRewardWidget_SetProgressPercent) == 0x000004, "Wrong alignment on FortEventRewardWidget_SetProgressPercent");
static_assert(sizeof(FortEventRewardWidget_SetProgressPercent) == 0x000004, "Wrong size on FortEventRewardWidget_SetProgressPercent");
static_assert(offsetof(FortEventRewardWidget_SetProgressPercent, Percent) == 0x000000, "Member 'FortEventRewardWidget_SetProgressPercent::Percent' has a wrong offset!");

struct FortEventRewardWidget_SetTrackData final
{
public:
	struct FEventScreenTrackData                  TrackData;
};
static_assert(alignof(FortEventRewardWidget_SetTrackData) == 0x000004, "Wrong alignment on FortEventRewardWidget_SetTrackData");
static_assert(sizeof(FortEventRewardWidget_SetTrackData) == 0x000020, "Wrong size on FortEventRewardWidget_SetTrackData");
static_assert(offsetof(FortEventRewardWidget_SetTrackData, TrackData) == 0x000000, "Member 'FortEventRewardWidget_SetTrackData::TrackData' has a wrong offset!");

struct FortEventRewardWidget_GetEventScreenData final
{
public:
	const class UFortEventScreenData*             ReturnValue;
};
static_assert(alignof(FortEventRewardWidget_GetEventScreenData) == 0x000008, "Wrong alignment on FortEventRewardWidget_GetEventScreenData");
static_assert(sizeof(FortEventRewardWidget_GetEventScreenData) == 0x000008, "Wrong size on FortEventRewardWidget_GetEventScreenData");
static_assert(offsetof(FortEventRewardWidget_GetEventScreenData, ReturnValue) == 0x000000, "Member 'FortEventRewardWidget_GetEventScreenData::ReturnValue' has a wrong offset!");

struct FortEventScreenBase_HandleItemShown final
{
public:
	const class UFortAccountItemDefinition*       AccountItemDef;
};
static_assert(alignof(FortEventScreenBase_HandleItemShown) == 0x000008, "Wrong alignment on FortEventScreenBase_HandleItemShown");
static_assert(sizeof(FortEventScreenBase_HandleItemShown) == 0x000008, "Wrong size on FortEventScreenBase_HandleItemShown");
static_assert(offsetof(FortEventScreenBase_HandleItemShown, AccountItemDef) == 0x000000, "Member 'FortEventScreenBase_HandleItemShown::AccountItemDef' has a wrong offset!");

struct FortEventScreenBase_HandleToggleFullscreenMap final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(FortEventScreenBase_HandleToggleFullscreenMap) == 0x000001, "Wrong alignment on FortEventScreenBase_HandleToggleFullscreenMap");
static_assert(sizeof(FortEventScreenBase_HandleToggleFullscreenMap) == 0x000001, "Wrong size on FortEventScreenBase_HandleToggleFullscreenMap");
static_assert(offsetof(FortEventScreenBase_HandleToggleFullscreenMap, bVisible) == 0x000000, "Member 'FortEventScreenBase_HandleToggleFullscreenMap::bVisible' has a wrong offset!");

struct FortEventScreenBase_OnScreenViewEntered final
{
public:
	EEventScreenView                              NewScreenView;
};
static_assert(alignof(FortEventScreenBase_OnScreenViewEntered) == 0x000001, "Wrong alignment on FortEventScreenBase_OnScreenViewEntered");
static_assert(sizeof(FortEventScreenBase_OnScreenViewEntered) == 0x000001, "Wrong size on FortEventScreenBase_OnScreenViewEntered");
static_assert(offsetof(FortEventScreenBase_OnScreenViewEntered, NewScreenView) == 0x000000, "Member 'FortEventScreenBase_OnScreenViewEntered::NewScreenView' has a wrong offset!");

struct FortEventScreenBase_SetItemShopCallout final
{
public:
	class FText                                   ItemShopCalloutText;
};
static_assert(alignof(FortEventScreenBase_SetItemShopCallout) == 0x000008, "Wrong alignment on FortEventScreenBase_SetItemShopCallout");
static_assert(sizeof(FortEventScreenBase_SetItemShopCallout) == 0x000018, "Wrong size on FortEventScreenBase_SetItemShopCallout");
static_assert(offsetof(FortEventScreenBase_SetItemShopCallout, ItemShopCalloutText) == 0x000000, "Member 'FortEventScreenBase_SetItemShopCallout::ItemShopCalloutText' has a wrong offset!");

struct FortEventScreenBase_SetItemShopOfferInfoVisibility final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(FortEventScreenBase_SetItemShopOfferInfoVisibility) == 0x000001, "Wrong alignment on FortEventScreenBase_SetItemShopOfferInfoVisibility");
static_assert(sizeof(FortEventScreenBase_SetItemShopOfferInfoVisibility) == 0x000001, "Wrong size on FortEventScreenBase_SetItemShopOfferInfoVisibility");
static_assert(offsetof(FortEventScreenBase_SetItemShopOfferInfoVisibility, bIsVisible) == 0x000000, "Member 'FortEventScreenBase_SetItemShopOfferInfoVisibility::bIsVisible' has a wrong offset!");

struct FortEventScreenBase_SetRewardTrackLegal final
{
public:
	class FText                                   LegalText;
};
static_assert(alignof(FortEventScreenBase_SetRewardTrackLegal) == 0x000008, "Wrong alignment on FortEventScreenBase_SetRewardTrackLegal");
static_assert(sizeof(FortEventScreenBase_SetRewardTrackLegal) == 0x000018, "Wrong size on FortEventScreenBase_SetRewardTrackLegal");
static_assert(offsetof(FortEventScreenBase_SetRewardTrackLegal, LegalText) == 0x000000, "Member 'FortEventScreenBase_SetRewardTrackLegal::LegalText' has a wrong offset!");

struct FortEventScreenBase_UpdateVariantCounter final
{
public:
	int32                                         CurrentVariantIndex;
	int32                                         TotalNumVariants;
};
static_assert(alignof(FortEventScreenBase_UpdateVariantCounter) == 0x000004, "Wrong alignment on FortEventScreenBase_UpdateVariantCounter");
static_assert(sizeof(FortEventScreenBase_UpdateVariantCounter) == 0x000008, "Wrong size on FortEventScreenBase_UpdateVariantCounter");
static_assert(offsetof(FortEventScreenBase_UpdateVariantCounter, CurrentVariantIndex) == 0x000000, "Member 'FortEventScreenBase_UpdateVariantCounter::CurrentVariantIndex' has a wrong offset!");
static_assert(offsetof(FortEventScreenBase_UpdateVariantCounter, TotalNumVariants) == 0x000004, "Member 'FortEventScreenBase_UpdateVariantCounter::TotalNumVariants' has a wrong offset!");

struct EventScreenListView_GetEventScreenData final
{
public:
	const class UFortEventScreenData*             ReturnValue;
};
static_assert(alignof(EventScreenListView_GetEventScreenData) == 0x000008, "Wrong alignment on EventScreenListView_GetEventScreenData");
static_assert(sizeof(EventScreenListView_GetEventScreenData) == 0x000008, "Wrong size on EventScreenListView_GetEventScreenData");
static_assert(offsetof(EventScreenListView_GetEventScreenData, ReturnValue) == 0x000000, "Member 'EventScreenListView_GetEventScreenData::ReturnValue' has a wrong offset!");

struct FortEventTokenCollectionWidget_OnRefreshIcon final
{
public:
	bool                                          IsCollected;
};
static_assert(alignof(FortEventTokenCollectionWidget_OnRefreshIcon) == 0x000001, "Wrong alignment on FortEventTokenCollectionWidget_OnRefreshIcon");
static_assert(sizeof(FortEventTokenCollectionWidget_OnRefreshIcon) == 0x000001, "Wrong size on FortEventTokenCollectionWidget_OnRefreshIcon");
static_assert(offsetof(FortEventTokenCollectionWidget_OnRefreshIcon, IsCollected) == 0x000000, "Member 'FortEventTokenCollectionWidget_OnRefreshIcon::IsCollected' has a wrong offset!");

struct FortEventTrackerModule_OnModuleInitialized final
{
public:
	const class UFortEventScreenData*             InEventScreenData;
};
static_assert(alignof(FortEventTrackerModule_OnModuleInitialized) == 0x000008, "Wrong alignment on FortEventTrackerModule_OnModuleInitialized");
static_assert(sizeof(FortEventTrackerModule_OnModuleInitialized) == 0x000008, "Wrong size on FortEventTrackerModule_OnModuleInitialized");
static_assert(offsetof(FortEventTrackerModule_OnModuleInitialized, InEventScreenData) == 0x000000, "Member 'FortEventTrackerModule_OnModuleInitialized::InEventScreenData' has a wrong offset!");

struct FortEventTrackerModule_GetEventScreenData final
{
public:
	const class UFortEventScreenData*             ReturnValue;
};
static_assert(alignof(FortEventTrackerModule_GetEventScreenData) == 0x000008, "Wrong alignment on FortEventTrackerModule_GetEventScreenData");
static_assert(sizeof(FortEventTrackerModule_GetEventScreenData) == 0x000008, "Wrong size on FortEventTrackerModule_GetEventScreenData");
static_assert(offsetof(FortEventTrackerModule_GetEventScreenData, ReturnValue) == 0x000000, "Member 'FortEventTrackerModule_GetEventScreenData::ReturnValue' has a wrong offset!");

struct FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText final
{
public:
	class FText                                   OutEventName;
	class FText                                   OutEventDescription;
};
static_assert(alignof(FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText) == 0x000008, "Wrong alignment on FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText");
static_assert(sizeof(FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText) == 0x000030, "Wrong size on FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText");
static_assert(offsetof(FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText, OutEventName) == 0x000000, "Member 'FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText::OutEventName' has a wrong offset!");
static_assert(offsetof(FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText, OutEventDescription) == 0x000018, "Member 'FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText::OutEventDescription' has a wrong offset!");

struct FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining final
{
public:
	class FText                                   OutEventTimeRemaining;
};
static_assert(alignof(FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining) == 0x000008, "Wrong alignment on FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining");
static_assert(sizeof(FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining) == 0x000018, "Wrong size on FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining");
static_assert(offsetof(FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining, OutEventTimeRemaining) == 0x000000, "Member 'FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining::OutEventTimeRemaining' has a wrong offset!");

struct FortEventTrackerModule_Header_OnPopulateEventResourceHeader final
{
public:
	class FText                                   Header;
	int32                                         ResourceValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FortEventTrackerModule_Header_OnPopulateEventResourceHeader) == 0x000008, "Wrong alignment on FortEventTrackerModule_Header_OnPopulateEventResourceHeader");
static_assert(sizeof(FortEventTrackerModule_Header_OnPopulateEventResourceHeader) == 0x000020, "Wrong size on FortEventTrackerModule_Header_OnPopulateEventResourceHeader");
static_assert(offsetof(FortEventTrackerModule_Header_OnPopulateEventResourceHeader, Header) == 0x000000, "Member 'FortEventTrackerModule_Header_OnPopulateEventResourceHeader::Header' has a wrong offset!");
static_assert(offsetof(FortEventTrackerModule_Header_OnPopulateEventResourceHeader, ResourceValue) == 0x000018, "Member 'FortEventTrackerModule_Header_OnPopulateEventResourceHeader::ResourceValue' has a wrong offset!");

struct FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader final
{
public:
	class FText                                   Header;
};
static_assert(alignof(FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader) == 0x000008, "Wrong alignment on FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader");
static_assert(sizeof(FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader) == 0x000018, "Wrong size on FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader");
static_assert(offsetof(FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader, Header) == 0x000000, "Member 'FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader::Header' has a wrong offset!");

struct FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward final
{
public:
	TArray<class FText>                           RewardNames;
};
static_assert(alignof(FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward) == 0x000008, "Wrong alignment on FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward");
static_assert(sizeof(FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward) == 0x000010, "Wrong size on FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward");
static_assert(offsetof(FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward, RewardNames) == 0x000000, "Member 'FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward::RewardNames' has a wrong offset!");

struct FortEventTrackerModule_RewardDetails_OnPopulateNextReward final
{
public:
	TArray<class FText>                           RewardNames;
};
static_assert(alignof(FortEventTrackerModule_RewardDetails_OnPopulateNextReward) == 0x000008, "Wrong alignment on FortEventTrackerModule_RewardDetails_OnPopulateNextReward");
static_assert(sizeof(FortEventTrackerModule_RewardDetails_OnPopulateNextReward) == 0x000010, "Wrong size on FortEventTrackerModule_RewardDetails_OnPopulateNextReward");
static_assert(offsetof(FortEventTrackerModule_RewardDetails_OnPopulateNextReward, RewardNames) == 0x000000, "Member 'FortEventTrackerModule_RewardDetails_OnPopulateNextReward::RewardNames' has a wrong offset!");

struct FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails final
{
public:
	TArray<class FText>                           RewardNames;
	int32                                         ResourceNeeded;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails) == 0x000008, "Wrong alignment on FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails");
static_assert(sizeof(FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails) == 0x000018, "Wrong size on FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails");
static_assert(offsetof(FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails, RewardNames) == 0x000000, "Member 'FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails::RewardNames' has a wrong offset!");
static_assert(offsetof(FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails, ResourceNeeded) == 0x000010, "Member 'FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails::ResourceNeeded' has a wrong offset!");

struct FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage final
{
public:
	bool                                          bIsComplete;
	uint8                                         Pad_1[0x7];
	class FText                                   CompletionText;
};
static_assert(alignof(FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage) == 0x000008, "Wrong alignment on FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage");
static_assert(sizeof(FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage) == 0x000020, "Wrong size on FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage");
static_assert(offsetof(FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage, bIsComplete) == 0x000000, "Member 'FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage::bIsComplete' has a wrong offset!");
static_assert(offsetof(FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage, CompletionText) == 0x000008, "Member 'FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage::CompletionText' has a wrong offset!");

struct FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets final
{
public:
	TArray<class UFortEventTokenCollectionWidget*> OutCollectionWidgets;
};
static_assert(alignof(FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets) == 0x000008, "Wrong alignment on FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets");
static_assert(sizeof(FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets) == 0x000010, "Wrong size on FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets");
static_assert(offsetof(FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets, OutCollectionWidgets) == 0x000000, "Member 'FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets::OutCollectionWidgets' has a wrong offset!");

struct FortEventTrackerModule_Banner_OnCTACompleted final
{
public:
	bool                                          bIsComplete;
};
static_assert(alignof(FortEventTrackerModule_Banner_OnCTACompleted) == 0x000001, "Wrong alignment on FortEventTrackerModule_Banner_OnCTACompleted");
static_assert(sizeof(FortEventTrackerModule_Banner_OnCTACompleted) == 0x000001, "Wrong size on FortEventTrackerModule_Banner_OnCTACompleted");
static_assert(offsetof(FortEventTrackerModule_Banner_OnCTACompleted, bIsComplete) == 0x000000, "Member 'FortEventTrackerModule_Banner_OnCTACompleted::bIsComplete' has a wrong offset!");

struct FortEventTrackerModule_Banner_OnPopulateBannerText final
{
public:
	class FText                                   BannerText;
};
static_assert(alignof(FortEventTrackerModule_Banner_OnPopulateBannerText) == 0x000008, "Wrong alignment on FortEventTrackerModule_Banner_OnPopulateBannerText");
static_assert(sizeof(FortEventTrackerModule_Banner_OnPopulateBannerText) == 0x000018, "Wrong size on FortEventTrackerModule_Banner_OnPopulateBannerText");
static_assert(offsetof(FortEventTrackerModule_Banner_OnPopulateBannerText, BannerText) == 0x000000, "Member 'FortEventTrackerModule_Banner_OnPopulateBannerText::BannerText' has a wrong offset!");

struct FortEventTrackerModule_Banner_OnPopulateHeaderCTAText final
{
public:
	class FText                                   HeaderCTAText;
};
static_assert(alignof(FortEventTrackerModule_Banner_OnPopulateHeaderCTAText) == 0x000008, "Wrong alignment on FortEventTrackerModule_Banner_OnPopulateHeaderCTAText");
static_assert(sizeof(FortEventTrackerModule_Banner_OnPopulateHeaderCTAText) == 0x000018, "Wrong size on FortEventTrackerModule_Banner_OnPopulateHeaderCTAText");
static_assert(offsetof(FortEventTrackerModule_Banner_OnPopulateHeaderCTAText, HeaderCTAText) == 0x000000, "Member 'FortEventTrackerModule_Banner_OnPopulateHeaderCTAText::HeaderCTAText' has a wrong offset!");

}
