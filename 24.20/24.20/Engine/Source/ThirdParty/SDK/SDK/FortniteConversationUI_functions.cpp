#pragma once

#include "Basic.hpp"

#include "FortniteConversationUI_classes.hpp"
#include "FortniteConversationUI_parameters.hpp"

namespace SDK
{

void UFortConversationOptionBrief::ConfigureBP(const struct FConversationContext& ClientContext, const struct FClientConversationOptionEntry& OptionEntry, const int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOptionBrief", "ConfigureBP");

	Params::FortConversationOptionBrief_ConfigureBP Parms{};

	Parms.ClientContext = std::move(ClientContext);
	Parms.OptionEntry = std::move(OptionEntry);
	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemTransactionBrief::OnTransactionInfoReceived(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemTransactionBrief", "OnTransactionInfoReceived");

	Params::FortItemTransactionBrief_OnTransactionInfoReceived Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortApplyAbilityBrief::OnAbleToPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortApplyAbilityBrief", "OnAbleToPurchase");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortApplyAbilityBrief::OnUnableToPurchase(EPreventAbilityUseReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortApplyAbilityBrief", "OnUnableToPurchase");

	Params::FortApplyAbilityBrief_OnUnableToPurchase Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBasicBrief::OnChoiceTextReceived(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBasicBrief", "OnChoiceTextReceived");

	Params::FortBasicBrief_OnChoiceTextReceived Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBasicItemBrief::OnAbleToUse(const bool bShowWarningMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBasicItemBrief", "OnAbleToUse");

	Params::FortBasicItemBrief_OnAbleToUse Parms{};

	Parms.bShowWarningMessage = bShowWarningMessage;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBasicItemBrief::OnItemInfoReceived(class UFortItem* Item, int32 StackSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBasicItemBrief", "OnItemInfoReceived");

	Params::FortBasicItemBrief_OnItemInfoReceived Parms{};

	Parms.Item = Item;
	Parms.StackSize = StackSize;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBasicItemBrief::OnUnableToUse(const class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBasicItemBrief", "OnUnableToUse");

	Params::FortBasicItemBrief_OnUnableToUse Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBasicItemBrief::OnUpdateDescriptionText(const class FText& DescriptionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBasicItemBrief", "OnUpdateDescriptionText");

	Params::FortBasicItemBrief_OnUpdateDescriptionText Parms{};

	Parms.DescriptionText = std::move(DescriptionText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBuyBrief::OnDisplayUnavailability(ECannotBuyReason CannotBuyReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuyBrief", "OnDisplayUnavailability");

	Params::FortBuyBrief_OnDisplayUnavailability Parms{};

	Parms.CannotBuyReason = CannotBuyReason;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortBuyBrief::OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuyBrief", "OnPurchaseDataReceived");

	Params::FortBuyBrief_OnPurchaseDataReceived Parms{};

	Parms.StackSize = StackSize;
	Parms.RemainingForSale = RemainingForSale;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMarker::OnCanInteract(bool bCanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMarker", "OnCanInteract");

	Params::FortConversationMarker_OnCanInteract Parms{};

	Parms.bCanInteract = bCanInteract;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMarker::OnConversationActorProximityChanged(EInteractionRange TargetInteractionRange, class UFortNonPlayerConversationParticipantComponent* ConversationComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMarker", "OnConversationActorProximityChanged");

	Params::FortConversationMarker_OnConversationActorProximityChanged Parms{};

	Parms.TargetInteractionRange = TargetInteractionRange;
	Parms.ConversationComponent = ConversationComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMarker::OnInteractionRangeChanged(EInteractionRange TargetInteractionRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMarker", "OnInteractionRangeChanged");

	Params::FortConversationMarker_OnInteractionRangeChanged Parms{};

	Parms.TargetInteractionRange = TargetInteractionRange;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMarker::OnMessageShownOverActor(class AActor* OverActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMarker", "OnMessageShownOverActor");

	Params::FortConversationMarker_OnMessageShownOverActor Parms{};

	Parms.OverActor = OverActor;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMarker::OnSetIndicatedActor(class AActor* NewIndicatorActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMarker", "OnSetIndicatedActor");

	Params::FortConversationMarker_OnSetIndicatedActor Parms{};

	Parms.NewIndicatorActor = NewIndicatorActor;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMessageWidget::OnMainMessageSet(const class FText& NPCName, const class FText& MessageBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnMainMessageSet");

	Params::FortConversationMessageWidget_OnMainMessageSet Parms{};

	Parms.NPCName = std::move(NPCName);
	Parms.MessageBody = std::move(MessageBody);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMessageWidget::OnMessageHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnMessageHidden");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortConversationMessageWidget::OnMessageShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnMessageShown");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortConversationMessageWidget::OnPreviewMessageSet(const class FText& PreviewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMessageWidget", "OnPreviewMessageSet");

	Params::FortConversationMessageWidget_OnPreviewMessageSet Parms{};

	Parms.PreviewText = std::move(PreviewText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationMessageWidget::SetPreviewMessage(const class FText& MessageToSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationMessageWidget", "SetPreviewMessage");

	Params::FortConversationMessageWidget_SetPreviewMessage Parms{};

	Parms.MessageToSet = std::move(MessageToSet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortConversationOption::OnOptionConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOption", "OnOptionConfirmed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortConversationOption::OnSetupFromDisplayAsset(class UObject* DisplayAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOption", "OnSetupFromDisplayAsset");

	Params::FortConversationOption_OnSetupFromDisplayAsset Parms{};

	Parms.DisplayAsset = DisplayAsset;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationOption::OnSetupFromItemDef(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOption", "OnSetupFromItemDef");

	Params::FortConversationOption_OnSetupFromItemDef Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationOption::OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOption", "OnSetupPivotFromRadialInformation");

	Params::FortConversationOption_OnSetupPivotFromRadialInformation Parms{};

	Parms.NumElements = NumElements;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortConversationOption::IsAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOption", "IsAvailable");

	Params::FortConversationOption_IsAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UPanelSlot* UFortConversationOptionsPanel::AddChildToDynamicPanel(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationOptionsPanel", "AddChildToDynamicPanel");

	Params::FortConversationOptionsPanel_AddChildToDynamicPanel Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortConversationScreen::EndConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "EndConversation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortConversationScreen::OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "OnConversationOptionUnavailable");

	Params::FortConversationScreen_OnConversationOptionUnavailable Parms{};

	Parms.SelectedEntry = SelectedEntry;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationScreen::OnConversationStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "OnConversationStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortConversationScreen::OnItemSelected(int32 OriginalIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "OnItemSelected");

	Params::FortConversationScreen_OnItemSelected Parms{};

	Parms.OriginalIndex = OriginalIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortConversationScreen::OnOptionsPopulated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "OnOptionsPopulated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortConversationScreen::OnSelectedItemAvailabilityChanged(bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "OnSelectedItemAvailabilityChanged");

	Params::FortConversationScreen_OnSelectedItemAvailabilityChanged Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortConversationScreen::ShouldBlockOptionIntroAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationScreen", "ShouldBlockOptionIntroAnim");

	Params::FortConversationScreen_ShouldBlockOptionIntroAnim Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortDataDrivenServiceBrief::OnAbleToPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnAbleToPurchase");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortDataDrivenServiceBrief::OnTransactionInfoReceived(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnTransactionInfoReceived");

	Params::FortDataDrivenServiceBrief_OnTransactionInfoReceived Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortDataDrivenServiceBrief::OnUnableToPurchase(const class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDataDrivenServiceBrief", "OnUnableToPurchase");

	Params::FortDataDrivenServiceBrief_OnUnableToPurchase Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortDuelBrief::DisplayLootItems(const TArray<class UFortItem*>& Items)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDuelBrief", "DisplayLootItems");

	Params::FortDuelBrief_DisplayLootItems Parms{};

	Parms.Items = std::move(Items);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortHireBrief::HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHireBrief", "HandleNPCDismissal");

	Params::FortHireBrief_HandleNPCDismissal Parms{};

	Parms.bAtMaxNPCNum = bAtMaxNPCNum;
	Parms.bWillDismissNPCAtHire = bWillDismissNPCAtHire;

	UObject::ProcessEvent(Func, &Parms);
}

const class FText UFortItemFundBrief::GetDataForKey(const class FString& Key, const bool bUseIndexAdjustment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemFundBrief", "GetDataForKey");

	Params::FortItemFundBrief_GetDataForKey Parms{};

	Parms.Key = std::move(Key);
	Parms.bUseIndexAdjustment = bUseIndexAdjustment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemFundBrief::InitializeFromContext(const struct FConversationContext& ConversationContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemFundBrief", "InitializeFromContext");

	Params::FortItemFundBrief_InitializeFromContext Parms{};

	Parms.ConversationContext = std::move(ConversationContext);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemFundBrief::OnIntializationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemFundBrief", "OnIntializationComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemFundBrief::OnProgressUpdated(const float CurrentFundingFraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemFundBrief", "OnProgressUpdated");

	Params::FortItemFundBrief_OnProgressUpdated Parms{};

	Parms.CurrentFundingFraction = CurrentFundingFraction;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMultiItemFundBrief::UpdateSelectedVisuals(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMultiItemFundBrief", "UpdateSelectedVisuals");

	Params::FortMultiItemFundBrief_UpdateSelectedVisuals Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNPCTextDisplay::OnItemNameUpdated(const class FString& ItemName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNPCTextDisplay", "OnItemNameUpdated");

	Params::FortNPCTextDisplay_OnItemNameUpdated Parms{};

	Parms.ItemName = std::move(ItemName);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortNPCTextDisplay::OnTextUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNPCTextDisplay", "OnTextUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerConversationUIComponent::OnMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationUIComponent", "OnMinigameStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestBrief::OnQuestExpirationTimeSet(const bool bDisplayExpirationTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestBrief", "OnQuestExpirationTimeSet");

	Params::FortQuestBrief_OnQuestExpirationTimeSet Parms{};

	Parms.bDisplayExpirationTime = bDisplayExpirationTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestBrief::OnQuestInformationRecieved(const class FText& Objective, const struct FFortRarityItemData& RarityData, const struct FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestBrief", "OnQuestInformationRecieved");

	Params::FortQuestBrief_OnQuestInformationRecieved Parms{};

	Parms.Objective = std::move(Objective);
	Parms.RarityData = std::move(RarityData);
	Parms.CategoryTag = std::move(CategoryTag);
	Parms.XPReward = XPReward;
	Parms.MoneyReward = MoneyReward;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortShowFutureStormCircleBrief::OnAbleToPurchase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortShowFutureStormCircleBrief", "OnAbleToPurchase");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortShowFutureStormCircleBrief::OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortShowFutureStormCircleBrief", "OnUnableToPurchase");

	Params::FortShowFutureStormCircleBrief_OnUnableToPurchase Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortTransactionStrip::HandleOnItemCountChanged(TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner, class UFortItemDefinition* Definition, int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTransactionStrip", "HandleOnItemCountChanged");

	Params::FortTransactionStrip_HandleOnItemCountChanged Parms{};

	Parms.InventoryOwner = InventoryOwner;
	Parms.Definition = Definition;
	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortTransactionStrip::OnSetTransactionCostVisibility(const bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTransactionStrip", "OnSetTransactionCostVisibility");

	Params::FortTransactionStrip_OnSetTransactionCostVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortTransactionStrip::OnTransactionInfoReceived(const struct FFortServiceTransactionInfo& TransactionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTransactionStrip", "OnTransactionInfoReceived");

	Params::FortTransactionStrip_OnTransactionInfoReceived Parms{};

	Parms.TransactionInfo = std::move(TransactionInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortUpgradeBrief::OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeBrief", "OnUnableToUpgrade");

	Params::FortUpgradeBrief_OnUnableToUpgrade Parms{};

	Parms.CannotUpgradeCause = CannotUpgradeCause;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortUpgradeBrief::OnUpgradeInfoReceived(class UFortItem* CurrentWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeBrief", "OnUpgradeInfoReceived");

	Params::FortUpgradeBrief_OnUpgradeInfoReceived Parms{};

	Parms.CurrentWeapon = CurrentWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

void UMobileConversationScreen::OnHandleConfirmClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MobileConversationScreen", "OnHandleConfirmClicked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
