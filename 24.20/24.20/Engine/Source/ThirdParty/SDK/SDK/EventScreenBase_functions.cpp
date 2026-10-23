#pragma once

#include "Basic.hpp"

#include "EventScreenBase_classes.hpp"
#include "EventScreenBase_parameters.hpp"

namespace SDK
{

void UFortEventMoreInfoModal::ExitModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventMoreInfoModal", "ExitModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortEventMoreInfoModal::OnEventScreenDataSet(const class UFortEventScreenData* InEventScreenData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventMoreInfoModal", "OnEventScreenDataSet");

	Params::FortEventMoreInfoModal_OnEventScreenDataSet Parms{};

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventMoreInfoModal::OnModalBackout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventMoreInfoModal", "OnModalBackout");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortEventMoreInfoModal::SetModalText(const class FText& Header, const class FText& SubHeader, const class FText& Body, const class FText& Legal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventMoreInfoModal", "SetModalText");

	Params::FortEventMoreInfoModal_SetModalText Parms{};

	Parms.Header = std::move(Header);
	Parms.SubHeader = std::move(SubHeader);
	Parms.Body = std::move(Body);
	Parms.Legal = std::move(Legal);

	UObject::ProcessEvent(Func, &Parms);
}

const class UFortEventScreenData* UFortEventMoreInfoModal::GetEventScreenData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventMoreInfoModal", "GetEventScreenData");

	Params::FortEventMoreInfoModal_GetEventScreenData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortEventPurchaseModal::HandlePurchaseComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems, const class FString& InOfferId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "HandlePurchaseComplete");

	Params::FortEventPurchaseModal_HandlePurchaseComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = std::move(PurchasedItems);
	Parms.InOfferId = std::move(InOfferId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortEventPurchaseModal::OnAmountChangeButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "OnAmountChangeButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortEventPurchaseModal::OnCMSTextApplied(const class FText& LegalText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "OnCMSTextApplied");

	Params::FortEventPurchaseModal_OnCMSTextApplied Parms{};

	Parms.LegalText = std::move(LegalText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventPurchaseModal::OnEventScreenDataSet(const class UFortEventScreenData* InEventScreenData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "OnEventScreenDataSet");

	Params::FortEventPurchaseModal_OnEventScreenDataSet Parms{};

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventPurchaseModal::OnPurchaseAmountChanged(const int32 PurchaseQuantity, const int32 ResourceQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "OnPurchaseAmountChanged");

	Params::FortEventPurchaseModal_OnPurchaseAmountChanged Parms{};

	Parms.PurchaseQuantity = PurchaseQuantity;
	Parms.ResourceQuantity = ResourceQuantity;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventPurchaseModal::OnTotalPriceChanged(const int32 NewPrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "OnTotalPriceChanged");

	Params::FortEventPurchaseModal_OnTotalPriceChanged Parms{};

	Parms.NewPrice = NewPrice;

	UObject::ProcessEvent(Func, &Parms);
}

const class UFortEventScreenData* UFortEventPurchaseModal::GetEventScreenData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventPurchaseModal", "GetEventScreenData");

	Params::FortEventPurchaseModal_GetEventScreenData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortEventRewardTracksWidget::BPOnEventScreenDataSet(const class UFortEventScreenData* InEventScreenData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardTracksWidget", "BPOnEventScreenDataSet");

	Params::FortEventRewardTracksWidget_BPOnEventScreenDataSet Parms{};

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardTracksWidget::BPOnSetRewardItem(const int32 RequiredProgress, const int32 RemainingProgress, const float RewardProgressPercent, const float PreviewProgressPercent, const float OverallProgressPercent, const bool bInPreviewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardTracksWidget", "BPOnSetRewardItem");

	Params::FortEventRewardTracksWidget_BPOnSetRewardItem Parms{};

	Parms.RequiredProgress = RequiredProgress;
	Parms.RemainingProgress = RemainingProgress;
	Parms.RewardProgressPercent = RewardProgressPercent;
	Parms.PreviewProgressPercent = PreviewProgressPercent;
	Parms.OverallProgressPercent = OverallProgressPercent;
	Parms.bInPreviewMode = bInPreviewMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardTracksWidget::BPSetAllRewardsCollected(const bool bAllCollected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardTracksWidget", "BPSetAllRewardsCollected");

	Params::FortEventRewardTracksWidget_BPSetAllRewardsCollected Parms{};

	Parms.bAllCollected = bAllCollected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::OnEventScreenDataSet(const class UFortEventScreenData* InEventScreenData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "OnEventScreenDataSet");

	Params::FortEventRewardWidget_OnEventScreenDataSet Parms{};

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::OnInputMethodChanged(const ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "OnInputMethodChanged");

	Params::FortEventRewardWidget_OnInputMethodChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::OnSetRewardItem(const int32 RequiredProgress, const int32 RemainingProgress, const float RewardProgressPercent, const float PreviewProgressPercent, const float OverallProgressPercent, const bool bInPreviewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "OnSetRewardItem");

	Params::FortEventRewardWidget_OnSetRewardItem Parms{};

	Parms.RequiredProgress = RequiredProgress;
	Parms.RemainingProgress = RemainingProgress;
	Parms.RewardProgressPercent = RewardProgressPercent;
	Parms.PreviewProgressPercent = PreviewProgressPercent;
	Parms.OverallProgressPercent = OverallProgressPercent;
	Parms.bInPreviewMode = bInPreviewMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetAllRewardsCollected(const bool bAllCollected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetAllRewardsCollected");

	Params::FortEventRewardWidget_SetAllRewardsCollected Parms{};

	Parms.bAllCollected = bAllCollected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetCustomItemIcon(const class UTexture2D* CustomItemIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetCustomItemIcon");

	Params::FortEventRewardWidget_SetCustomItemIcon Parms{};

	Parms.CustomItemIcon = CustomItemIcon;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetDoubleWidth(const bool bDoubleWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetDoubleWidth");

	Params::FortEventRewardWidget_SetDoubleWidth Parms{};

	Parms.bDoubleWidth = bDoubleWidth;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetInPreviewedState(const bool bPreviewed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetInPreviewedState");

	Params::FortEventRewardWidget_SetInPreviewedState Parms{};

	Parms.bPreviewed = bPreviewed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetInPreviewSelectedState(const bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetInPreviewSelectedState");

	Params::FortEventRewardWidget_SetInPreviewSelectedState Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetInSelectedState(const bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetInSelectedState");

	Params::FortEventRewardWidget_SetInSelectedState Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetIsBannerItem(const bool bIsBanner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetIsBannerItem");

	Params::FortEventRewardWidget_SetIsBannerItem Parms{};

	Parms.bIsBanner = bIsBanner;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetProgressPercent(const float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetProgressPercent");

	Params::FortEventRewardWidget_SetProgressPercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventRewardWidget::SetTrackData(const struct FEventScreenTrackData& TrackData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "SetTrackData");

	Params::FortEventRewardWidget_SetTrackData Parms{};

	Parms.TrackData = std::move(TrackData);

	UObject::ProcessEvent(Func, &Parms);
}

const class UFortEventScreenData* UFortEventRewardWidget::GetEventScreenData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventRewardWidget", "GetEventScreenData");

	Params::FortEventRewardWidget_GetEventScreenData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortEventScreenBase::HandleGiftBoxClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "HandleGiftBoxClosed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortEventScreenBase::HandleItemShown(const class UFortAccountItemDefinition* AccountItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "HandleItemShown");

	Params::FortEventScreenBase_HandleItemShown Parms{};

	Parms.AccountItemDef = AccountItemDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortEventScreenBase::HandleToggleFullscreenMap(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "HandleToggleFullscreenMap");

	Params::FortEventScreenBase_HandleToggleFullscreenMap Parms{};

	Parms.bVisible = bVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortEventScreenBase::OnScreenViewEntered(const EEventScreenView NewScreenView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "OnScreenViewEntered");

	Params::FortEventScreenBase_OnScreenViewEntered Parms{};

	Parms.NewScreenView = NewScreenView;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventScreenBase::RegisterLayoutSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "RegisterLayoutSlots");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortEventScreenBase::SetItemShopCallout(const class FText& ItemShopCalloutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "SetItemShopCallout");

	Params::FortEventScreenBase_SetItemShopCallout Parms{};

	Parms.ItemShopCalloutText = std::move(ItemShopCalloutText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventScreenBase::SetItemShopOfferInfoVisibility(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "SetItemShopOfferInfoVisibility");

	Params::FortEventScreenBase_SetItemShopOfferInfoVisibility Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventScreenBase::SetRewardTrackLegal(const class FText& LegalText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "SetRewardTrackLegal");

	Params::FortEventScreenBase_SetRewardTrackLegal Parms{};

	Parms.LegalText = std::move(LegalText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventScreenBase::UpdateVariantCounter(int32 CurrentVariantIndex, int32 TotalNumVariants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventScreenBase", "UpdateVariantCounter");

	Params::FortEventScreenBase_UpdateVariantCounter Parms{};

	Parms.CurrentVariantIndex = CurrentVariantIndex;
	Parms.TotalNumVariants = TotalNumVariants;

	UObject::ProcessEvent(Func, &Parms);
}

const class UFortEventScreenData* UEventScreenListView::GetEventScreenData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventScreenListView", "GetEventScreenData");

	Params::EventScreenListView_GetEventScreenData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortEventTokenCollectionWidget::OnRefreshIcon(const bool IsCollected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTokenCollectionWidget", "OnRefreshIcon");

	Params::FortEventTokenCollectionWidget_OnRefreshIcon Parms{};

	Parms.IsCollected = IsCollected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule::OnModuleInitialized(const class UFortEventScreenData* InEventScreenData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule", "OnModuleInitialized");

	Params::FortEventTrackerModule_OnModuleInitialized Parms{};

	Parms.InEventScreenData = InEventScreenData;

	UObject::ProcessEvent(Func, &Parms);
}

const class UFortEventScreenData* UFortEventTrackerModule::GetEventScreenData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule", "GetEventScreenData");

	Params::FortEventTrackerModule_GetEventScreenData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortEventTrackerModule_EventDetails::OnPopulateEventDetailsText(const class FText& OutEventName, const class FText& OutEventDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_EventDetails", "OnPopulateEventDetailsText");

	Params::FortEventTrackerModule_EventDetails_OnPopulateEventDetailsText Parms{};

	Parms.OutEventName = std::move(OutEventName);
	Parms.OutEventDescription = std::move(OutEventDescription);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_EventDetails::UpdateEventTimeRemaining(const class FText& OutEventTimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_EventDetails", "UpdateEventTimeRemaining");

	Params::FortEventTrackerModule_EventDetails_UpdateEventTimeRemaining Parms{};

	Parms.OutEventTimeRemaining = std::move(OutEventTimeRemaining);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_Header::OnPopulateEventResourceHeader(const class FText& Header, const int32 ResourceValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_Header", "OnPopulateEventResourceHeader");

	Params::FortEventTrackerModule_Header_OnPopulateEventResourceHeader Parms{};

	Parms.Header = std::move(Header);
	Parms.ResourceValue = ResourceValue;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_Header::OnPopulateEventResourceStarterHeader(const class FText& Header)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_Header", "OnPopulateEventResourceStarterHeader");

	Params::FortEventTrackerModule_Header_OnPopulateEventResourceStarterHeader Parms{};

	Parms.Header = std::move(Header);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_RewardDetails::OnPopulateCompletedReward(const TArray<class FText>& RewardNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_RewardDetails", "OnPopulateCompletedReward");

	Params::FortEventTrackerModule_RewardDetails_OnPopulateCompletedReward Parms{};

	Parms.RewardNames = std::move(RewardNames);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_RewardDetails::OnPopulateNextReward(const TArray<class FText>& RewardNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_RewardDetails", "OnPopulateNextReward");

	Params::FortEventTrackerModule_RewardDetails_OnPopulateNextReward Parms{};

	Parms.RewardNames = std::move(RewardNames);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_RewardDetails::OnPopulateNextRewardDetails(const TArray<class FText>& RewardNames, const int32 ResourceNeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_RewardDetails", "OnPopulateNextRewardDetails");

	Params::FortEventTrackerModule_RewardDetails_OnPopulateNextRewardDetails Parms{};

	Parms.RewardNames = std::move(RewardNames);
	Parms.ResourceNeeded = ResourceNeeded;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_ProgressiveRewards::OnPopulateCompletionMessage(const bool bIsComplete, const class FText& CompletionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_ProgressiveRewards", "OnPopulateCompletionMessage");

	Params::FortEventTrackerModule_ProgressiveRewards_OnPopulateCompletionMessage Parms{};

	Parms.bIsComplete = bIsComplete;
	Parms.CompletionText = std::move(CompletionText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_Collection::OnGatherTokenCollectionWidgets(TArray<class UFortEventTokenCollectionWidget*>* OutCollectionWidgets) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_Collection", "OnGatherTokenCollectionWidgets");

	Params::FortEventTrackerModule_Collection_OnGatherTokenCollectionWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCollectionWidgets != nullptr)
		*OutCollectionWidgets = std::move(Parms.OutCollectionWidgets);
}

void UFortEventTrackerModule_Banner::OnCTACompleted(const bool bIsComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_Banner", "OnCTACompleted");

	Params::FortEventTrackerModule_Banner_OnCTACompleted Parms{};

	Parms.bIsComplete = bIsComplete;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_Banner::OnPopulateBannerText(const class FText& BannerText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_Banner", "OnPopulateBannerText");

	Params::FortEventTrackerModule_Banner_OnPopulateBannerText Parms{};

	Parms.BannerText = std::move(BannerText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortEventTrackerModule_Banner::OnPopulateHeaderCTAText(const class FText& HeaderCTAText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventTrackerModule_Banner", "OnPopulateHeaderCTAText");

	Params::FortEventTrackerModule_Banner_OnPopulateHeaderCTAText Parms{};

	Parms.HeaderCTAText = std::move(HeaderCTAText);

	UObject::ProcessEvent(Func, &Parms);
}

}
