#pragma once

#include "Basic.hpp"

#include "CrewUI_classes.hpp"
#include "CrewUI_parameters.hpp"

namespace SDK
{

void UBattlePassCrewPurchaseButton::OnCurrencyUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseButton", "OnCurrencyUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassCrewPurchaseContainer::OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnContentStateUpdated");

	Params::BattlePassCrewPurchaseContainer_OnContentStateUpdated Parms{};

	Parms.InState = InState;
	Parms.bInScreenOpened = bInScreenOpened;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassCrewPurchaseContainer::OnTriggerIntroAnimation(bool bCanClaimRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassCrewPurchaseContainer", "OnTriggerIntroAnimation");

	Params::BattlePassCrewPurchaseContainer_OnTriggerIntroAnimation Parms{};

	Parms.bCanClaimRewards = bCanClaimRewards;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen::OnPurchaseConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseConfirmed");

	UObject::ProcessEvent(Func, nullptr);
}

void UBattlePassPurchaseScreen::OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnPurchaseStateChanged");

	Params::BattlePassPurchaseScreen_OnPurchaseStateChanged Parms{};

	Parms.InCurrentState = InCurrentState;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen::OnSetNavButtonNotificationText(const class FText& NotificationText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetNavButtonNotificationText");

	Params::BattlePassPurchaseScreen_OnSetNavButtonNotificationText Parms{};

	Parms.NotificationText = std::move(NotificationText);

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen::OnSetScreenInteractable(bool bInteractable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnSetScreenInteractable");

	Params::BattlePassPurchaseScreen_OnSetScreenInteractable Parms{};

	Parms.bInteractable = bInteractable;

	UObject::ProcessEvent(Func, &Parms);
}

void UBattlePassPurchaseScreen::OnShowNavButtonNotification(const bool bShowNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattlePassPurchaseScreen", "OnShowNavButtonNotification");

	Params::BattlePassPurchaseScreen_OnShowNavButtonNotification Parms{};

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewMultiSubscriptionAlertModal::OnSetHowToCancelURL(const class FString& MoreInfoUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewMultiSubscriptionAlertModal", "OnSetHowToCancelURL");

	Params::CrewMultiSubscriptionAlertModal_OnSetHowToCancelURL Parms{};

	Parms.MoreInfoUrl = std::move(MoreInfoUrl);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::ExitModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "ExitModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCrewPriceChangeAcknowledgeModal::OnModalBackout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnModalBackout");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeBodyTable(const TArray<struct FCrewTableRow>& PriceChangeByRegionRows)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeBodyTable");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyTable Parms{};

	Parms.PriceChangeByRegionRows = std::move(PriceChangeByRegionRows);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeBodyText(const class FText& BodyText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeBodyText");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeBodyText Parms{};

	Parms.BodyText = std::move(BodyText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(const class FText& CancelSubscriptionButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText Parms{};

	Parms.CancelSubscriptionButtonText = std::move(CancelSubscriptionButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeCheckboxText(const class FText& CheckboxText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeCheckboxText");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeCheckboxText Parms{};

	Parms.CheckboxText = std::move(CheckboxText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeConfirmButtonText(const class FText& ConfirmButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeConfirmButtonText");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeConfirmButtonText Parms{};

	Parms.ConfirmButtonText = std::move(ConfirmButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeMoreInfoText(const class FText& ConfirmButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeMoreInfoText");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoText Parms{};

	Parms.ConfirmButtonText = std::move(ConfirmButtonText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeMoreInfoUrl(const class FText& MoreInfoUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeMoreInfoUrl");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeMoreInfoUrl Parms{};

	Parms.MoreInfoUrl = std::move(MoreInfoUrl);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPriceChangeAcknowledgeModal::OnSetPriceChangeAcknowledgeTitle(const class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPriceChangeAcknowledgeModal", "OnSetPriceChangeAcknowledgeTitle");

	Params::CrewPriceChangeAcknowledgeModal_OnSetPriceChangeAcknowledgeTitle Parms{};

	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::BeginProgress(const class FText& ProgressLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "BeginProgress");

	Params::CrewPurchaseScreen_BeginProgress Parms{};

	Parms.ProgressLabel = std::move(ProgressLabel);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "BlockScreenContent");

	Params::CrewPurchaseScreen_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::EndProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "EndProgress");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewPurchaseScreen::OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnContainerTabVisibilityUpdated");

	Params::CrewPurchaseScreen_OnContainerTabVisibilityUpdated Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::OnSetNavButtonNotificationText(const class FText& NotificationText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnSetNavButtonNotificationText");

	Params::CrewPurchaseScreen_OnSetNavButtonNotificationText Parms{};

	Parms.NotificationText = std::move(NotificationText);

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::OnShowNavButtonNotification(const bool bShowNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnShowNavButtonNotification");

	Params::CrewPurchaseScreen_OnShowNavButtonNotification Parms{};

	Parms.bShowNotification = bShowNotification;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdatePurchaseButtonState");

	Params::CrewPurchaseScreen_OnUpdatePurchaseButtonState Parms{};

	Parms.ButtonState = ButtonState;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::OnUpdateVBuckRefundVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUpdateVBuckRefundVisibility");

	Params::CrewPurchaseScreen_OnUpdateVBuckRefundVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewPurchaseScreen::OnUserInformationTextsUpdated(const class FText& UserInformationText1, const class FText& UserInformationText2, EMcpSubscriptionState SubscriptionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewPurchaseScreen", "OnUserInformationTextsUpdated");

	Params::CrewPurchaseScreen_OnUserInformationTextsUpdated Parms{};

	Parms.UserInformationText1 = std::move(UserInformationText1);
	Parms.UserInformationText2 = std::move(UserInformationText2);
	Parms.SubscriptionState = SubscriptionState;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewRewardTile::OnDownloadTileImageComplete(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewRewardTile", "OnDownloadTileImageComplete");

	Params::CrewRewardTile_OnDownloadTileImageComplete Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewRewardTile::OnStartingDownloadTileImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewRewardTile", "OnStartingDownloadTileImage");

	UObject::ProcessEvent(Func, nullptr);
}

void UCrewRewardTile::OnUpdateOwnedState(bool bOwned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewRewardTile", "OnUpdateOwnedState");

	Params::CrewRewardTile_OnUpdateOwnedState Parms{};

	Parms.bOwned = bOwned;

	UObject::ProcessEvent(Func, &Parms);
}

bool UCrewRewardTile::IsMonthlyBenefit() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewRewardTile", "IsMonthlyBenefit");

	Params::CrewRewardTile_IsMonthlyBenefit Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCrewSubscriptionContentContainer::OnTabSelected(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewSubscriptionContentContainer", "OnTabSelected");

	Params::CrewSubscriptionContentContainer_OnTabSelected Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewTileDetailsTag::OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewTileDetailsTag", "OnTagSetup");

	Params::CrewTileDetailsTag_OnTagSetup Parms{};

	Parms.RewardTag = RewardTag;
	Parms.bIsOwnedTag = bIsOwnedTag;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveScreenBase::BP_OnContainerTabVisibilityUpdated(const bool bTabsVisible, const float SpacingAdjustmentForTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveScreenBase", "BP_OnContainerTabVisibilityUpdated");

	Params::FortProgressiveScreenBase_BP_OnContainerTabVisibilityUpdated Parms{};

	Parms.bTabsVisible = bTabsVisible;
	Parms.SpacingAdjustmentForTabs = SpacingAdjustmentForTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemScreen::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemScreen", "BlockScreenContent");

	Params::FortProgressiveItemScreen_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemScreen::OnErrorStateTextUpdated(const class FText& ErrorStateText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnErrorStateTextUpdated");

	Params::FortProgressiveItemScreen_OnErrorStateTextUpdated Parms{};

	Parms.ErrorStateText = std::move(ErrorStateText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemScreen::OnItemSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnItemSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressiveItemScreen::OnSetIsSoloScreen(const bool bInIsSoloScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnSetIsSoloScreen");

	Params::FortProgressiveItemScreen_OnSetIsSoloScreen Parms{};

	Parms.bInIsSoloScreen = bInIsSoloScreen;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemScreen::OnUpdateSubscriptionState(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemScreen", "OnUpdateSubscriptionState");

	Params::FortProgressiveItemScreen_OnUpdateSubscriptionState Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemStateTitleWidget::BP_OnSetHeaderInfo(const class FText& Subheading, const bool bSubscribed, const int32 UnlockedStages, const int32 MaxStages)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemStateTitleWidget", "BP_OnSetHeaderInfo");

	Params::FortProgressiveItemStateTitleWidget_BP_OnSetHeaderInfo Parms{};

	Parms.Subheading = std::move(Subheading);
	Parms.bSubscribed = bSubscribed;
	Parms.UnlockedStages = UnlockedStages;
	Parms.MaxStages = MaxStages;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemWidget::OnHighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnHighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressiveItemWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnPeekStateChanged");

	Params::FortProgressiveItemWidget_OnPeekStateChanged Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemWidget::OnStageItemChanged(const struct FProgressiveStageItemInfo& InStageItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnStageItemChanged");

	Params::FortProgressiveItemWidget_OnStageItemChanged Parms{};

	Parms.InStageItemInfo = std::move(InStageItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemWidget::OnTileMaterialLoaded(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnTileMaterialLoaded");

	Params::FortProgressiveItemWidget_OnTileMaterialLoaded Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveItemWidget::OnUnhighlighted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveItemWidget", "OnUnhighlighted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressiveSetDetailsWidget::BP_OnUpdateSetDetails(const class FText& SetName, const class FText& ExpiringText, const bool bCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveSetDetailsWidget", "BP_OnUpdateSetDetails");

	Params::FortProgressiveSetDetailsWidget_BP_OnUpdateSetDetails Parms{};

	Parms.SetName = std::move(SetName);
	Parms.ExpiringText = std::move(ExpiringText);
	Parms.bCompleted = bCompleted;

	UObject::ProcessEvent(Func, &Parms);
}

class UFortProgressiveSetTile* UFortProgressiveSetList::AddSetTile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveSetList", "AddSetTile");

	Params::FortProgressiveSetList_AddSetTile Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortProgressiveSetList::ClearSetTiles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveSetList", "ClearSetTiles");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressiveSetTile::BP_OnInitializeSetInfo(const struct FProgressiveSetInfo& InSetInfo, const class FText& BottomText, const class FText& BottomSubtext, const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveSetTile", "BP_OnInitializeSetInfo");

	Params::FortProgressiveSetTile_BP_OnInitializeSetInfo Parms{};

	Parms.InSetInfo = std::move(InSetInfo);
	Parms.BottomText = std::move(BottomText);
	Parms.BottomSubtext = std::move(BottomSubtext);
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveSetTile::BP_OnTileMaterialLoaded(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveSetTile", "BP_OnTileMaterialLoaded");

	Params::FortProgressiveSetTile_BP_OnTileMaterialLoaded Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

class UFortProgressiveStageWidget* UFortProgressiveStageList::AddStageWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageList", "AddStageWidget");

	Params::FortProgressiveStageList_AddStageWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortProgressiveStageList::ClearStageWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageList", "ClearStageWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressiveStageList::SelectStageInDirection(const int32 Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageList", "SelectStageInDirection");

	Params::FortProgressiveStageList_SelectStageInDirection Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UFortProgressiveItemWidget* UFortProgressiveStageWidget::AddStageItemWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageWidget", "AddStageItemWidget");

	Params::FortProgressiveStageWidget_AddStageItemWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortProgressiveStageWidget::ClearStageItemWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageWidget", "ClearStageItemWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressiveStageWidget::OnPeekStateChanged(bool bIsInPeekState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnPeekStateChanged");

	Params::FortProgressiveStageWidget_OnPeekStateChanged Parms{};

	Parms.bIsInPeekState = bIsInPeekState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveStageWidget::OnSetTooltipText(const class FText& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnSetTooltipText");

	Params::FortProgressiveStageWidget_OnSetTooltipText Parms{};

	Parms.InToolTipText = std::move(InToolTipText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveStageWidget::OnSetTooltipVisible(const bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveStageWidget", "OnSetTooltipVisible");

	Params::FortProgressiveStageWidget_OnSetTooltipVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveTableOfContentsScreen::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BlockScreenContent");

	Params::FortProgressiveTableOfContentsScreen_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveTableOfContentsScreen::BP_OnSetDescriptionText(const class FText& ProductDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnSetDescriptionText");

	Params::FortProgressiveTableOfContentsScreen_BP_OnSetDescriptionText Parms{};

	Parms.ProductDescription = std::move(ProductDescription);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateBanner(const class FText& BannerText, const bool bAllSetsCompleted, const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateBanner");

	Params::FortProgressiveTableOfContentsScreen_BP_OnUpdateBanner Parms{};

	Parms.BannerText = std::move(BannerText);
	Parms.bAllSetsCompleted = bAllSetsCompleted;
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateErrorStateText(const class FText& ErrorStateText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateErrorStateText");

	Params::FortProgressiveTableOfContentsScreen_BP_OnUpdateErrorStateText Parms{};

	Parms.ErrorStateText = std::move(ErrorStateText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateNumTilesAvailable(const int32 NumTiles)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateNumTilesAvailable");

	Params::FortProgressiveTableOfContentsScreen_BP_OnUpdateNumTilesAvailable Parms{};

	Parms.NumTiles = NumTiles;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressiveTableOfContentsScreen::BP_OnUpdateSubscriptionState(const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressiveTableOfContentsScreen", "BP_OnUpdateSubscriptionState");

	Params::FortProgressiveTableOfContentsScreen_BP_OnUpdateSubscriptionState Parms{};

	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

}
