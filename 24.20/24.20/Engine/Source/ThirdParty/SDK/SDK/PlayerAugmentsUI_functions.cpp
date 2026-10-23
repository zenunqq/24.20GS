#pragma once

#include "Basic.hpp"

#include "PlayerAugmentsUI_classes.hpp"
#include "PlayerAugmentsUI_parameters.hpp"

namespace SDK
{

void UFortPlayerAugmentInventoryInfoWidget::OnItemNewOrBorrowedSet(const bool bIsNew, const bool bIsBorrowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryInfoWidget", "OnItemNewOrBorrowedSet");

	Params::FortPlayerAugmentInventoryInfoWidget_OnItemNewOrBorrowedSet Parms{};

	Parms.bIsNew = bIsNew;
	Parms.bIsBorrowed = bIsBorrowed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInventoryInfoWidget::OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryInfoWidget", "OnItemRaritySet");

	Params::FortPlayerAugmentInventoryInfoWidget_OnItemRaritySet Parms{};

	Parms.Rarity = Rarity;
	Parms.RarityItemData = std::move(RarityItemData);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::OnAugmentToolViewSwap(const bool bIsInInventoryView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileButtonBehaviorComponent_AugmentsListIconPicker", "OnAugmentToolViewSwap");

	Params::FortMobileButtonBehaviorComponent_AugmentsListIconPicker_OnAugmentToolViewSwap Parms{};

	Parms.bIsInInventoryView = bIsInInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMobileButtonBehaviorComponent_AugmentsListVisibility::HandleAugmentToolOpenedStatusChanged(const bool bIsOpened, const bool bInIsInventoryView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileButtonBehaviorComponent_AugmentsListVisibility", "HandleAugmentToolOpenedStatusChanged");

	Params::FortMobileButtonBehaviorComponent_AugmentsListVisibility_HandleAugmentToolOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bInIsInventoryView = bInIsInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMobileButtonBehaviorComponent_AugmentsListVisibility::HandleAugmentToolViewSwap(const bool bInIsInventoryView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileButtonBehaviorComponent_AugmentsListVisibility", "HandleAugmentToolViewSwap");

	Params::FortMobileButtonBehaviorComponent_AugmentsListVisibility_HandleAugmentToolViewSwap Parms{};

	Parms.bInIsInventoryView = bInIsInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "CloseWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::OnEventAdded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "OnEventAdded");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::OnStompedByOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "OnStompedByOtherWidget");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentSpecialAcquiredNotificationWidget::OpenWidget(const class UFortPlayerAugmentItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "OpenWidget");

	Params::FortPlayerAugmentSpecialAcquiredNotificationWidget_OpenWidget Parms{};

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);
}

class FText UFortPlayerAugmentSpecialAcquiredNotificationWidget::ConstructEventDescription(const class UFortPlayerAugmentItemDefinition* ItemDef) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "ConstructEventDescription");

	Params::FortPlayerAugmentSpecialAcquiredNotificationWidget_ConstructEventDescription Parms{};

	Parms.ItemDef = ItemDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPlayerAugmentSpecialAcquiredNotificationWidget::HasMoreAugmentEvents() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentSpecialAcquiredNotificationWidget", "HasMoreAugmentEvents");

	Params::FortPlayerAugmentSpecialAcquiredNotificationWidget_HasMoreAugmentEvents Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMobilePlayerAugmentTimer::HandleAugmentSelectionMenuOpenedStatusChanged(const bool bIsOpened, const bool bInIsInventoryView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobilePlayerAugmentTimer", "HandleAugmentSelectionMenuOpenedStatusChanged");

	Params::FortMobilePlayerAugmentTimer_HandleAugmentSelectionMenuOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bInIsInventoryView = bInIsInventoryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMobilePlayerAugmentTimer::HandlePlayerLandedAfterSkydive(class AFortPlayerControllerZone* FortPCZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobilePlayerAugmentTimer", "HandlePlayerLandedAfterSkydive");

	Params::FortMobilePlayerAugmentTimer_HandlePlayerLandedAfterSkydive Parms{};

	Parms.FortPCZone = FortPCZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleAugmentHighlighted(int32 HighlightedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentHighlighted");

	Params::FortPlayerAugmentGranterWidget_HandleAugmentHighlighted Parms{};

	Parms.HighlightedAugmentIndex = HighlightedAugmentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleAugmentSelectionStarted(const int32 SelectedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentSelectionStarted");

	Params::FortPlayerAugmentGranterWidget_HandleAugmentSelectionStarted Parms{};

	Parms.SelectedAugmentIndex = SelectedAugmentIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentSelectorOpenedStatusChanged");

	Params::FortPlayerAugmentGranterWidget_HandleAugmentSelectorOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleAugmentSelectorToolViewSwapped(const bool bViewingAugmentsInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAugmentSelectorToolViewSwapped");

	Params::FortPlayerAugmentGranterWidget_HandleAugmentSelectorToolViewSwapped Parms{};

	Parms.bViewingAugmentsInventory = bViewingAugmentsInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleAvailableAugmentsForGrantingUpdated");

	Params::FortPlayerAugmentGranterWidget_HandleAvailableAugmentsForGrantingUpdated Parms{};

	Parms.GrantingComponent = GrantingComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleCanSelectAugmentChanged");

	Params::FortPlayerAugmentGranterWidget_HandleCanSelectAugmentChanged Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleRerollAugments");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleSelectedAugmentForGrant");

	Params::FortPlayerAugmentGranterWidget_HandleSelectedAugmentForGrant Parms{};

	Parms.SelectedAugment = SelectedAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::HandleTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "HandleTimerUpdated");

	Params::FortPlayerAugmentGranterWidget_HandleTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentGranterWidget::OnAugmentHighlighted(int32 HighlightedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentHighlighted");

	Params::FortPlayerAugmentGranterWidget_OnAugmentHighlighted Parms{};

	Parms.HighlightedAugmentIndex = HighlightedAugmentIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnAugmentScrollDownEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentScrollDownEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentGranterWidget::OnAugmentScrollUpEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentScrollUpEvent");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentGranterWidget::OnAugmentSelectionStarted(const int32 SelectedAugmentIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentSelectionStarted");

	Params::FortPlayerAugmentGranterWidget_OnAugmentSelectionStarted Parms{};

	Parms.SelectedAugmentIndex = SelectedAugmentIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentSelectorOpenedStatusChanged");

	Params::FortPlayerAugmentGranterWidget_OnAugmentSelectorOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnAugmentSelectorToolViewSwapped(const bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnAugmentSelectorToolViewSwapped");

	Params::FortPlayerAugmentGranterWidget_OnAugmentSelectorToolViewSwapped Parms{};

	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnCanSelectAugmentChanged");

	Params::FortPlayerAugmentGranterWidget_OnCanSelectAugmentChanged Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnInputTypeChanged(const ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnInputTypeChanged");

	Params::FortPlayerAugmentGranterWidget_OnInputTypeChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnPopulateAvailableAugmentsHUD(const TArray<class UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnPopulateAvailableAugmentsHUD");

	Params::FortPlayerAugmentGranterWidget_OnPopulateAvailableAugmentsHUD Parms{};

	Parms.AugmentItemDefinition = std::move(AugmentItemDefinition);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnRerollAugments");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentGranterWidget::OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnSelectedAugmentForGrant");

	Params::FortPlayerAugmentGranterWidget_OnSelectedAugmentForGrant Parms{};

	Parms.HighlightedAugment = HighlightedAugment;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentGranterWidget::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "OnTimerUpdated");

	Params::FortPlayerAugmentGranterWidget_OnTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);
}

int32 UFortPlayerAugmentGranterWidget::GetPendingAugmentsToGrant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentGranterWidget", "GetPendingAugmentsToGrant");

	Params::FortPlayerAugmentGranterWidget_GetPendingAugmentsToGrant Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPlayerAugmentHUDQuickbarWidget::OnAugmentsUpdated(const TArray<class UFortPlayerAugmentItemDefinition*>& ActiveAugments)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDQuickbarWidget", "OnAugmentsUpdated");

	Params::FortPlayerAugmentHUDQuickbarWidget_OnAugmentsUpdated Parms{};

	Parms.ActiveAugments = std::move(ActiveAugments);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDRerollWidget::EndRerollHoldProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "EndRerollHoldProgress");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDRerollWidget::HandleFreeRerollsUpdated(const int32 NewNumFreeRerolls)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "HandleFreeRerollsUpdated");

	Params::FortPlayerAugmentHUDRerollWidget_HandleFreeRerollsUpdated Parms{};

	Parms.NewNumFreeRerolls = NewNumFreeRerolls;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDRerollWidget::HandleRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "HandleRerollAugments");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDRerollWidget::OnFreeRerollsUpdated(const int32 NewNumFreeRerolls)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "OnFreeRerollsUpdated");

	Params::FortPlayerAugmentHUDRerollWidget_OnFreeRerollsUpdated Parms{};

	Parms.NewNumFreeRerolls = NewNumFreeRerolls;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDRerollWidget::OnRerollAugments()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "OnRerollAugments");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentHUDRerollWidget::OnUpdateCurrency(const int32 OwnedCurrency, const int32 RerollCost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "OnUpdateCurrency");

	Params::FortPlayerAugmentHUDRerollWidget_OnUpdateCurrency Parms{};

	Parms.OwnedCurrency = OwnedCurrency;
	Parms.RerollCost = RerollCost;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDRerollWidget::StartRerollHoldProgress(const float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDRerollWidget", "StartRerollHoldProgress");

	Params::FortPlayerAugmentHUDRerollWidget_StartRerollHoldProgress Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleAugmentGrantingTimersFinishedForMatch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleAugmentGrantingTimersResetForMatch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingAugmentInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleAugmentSelectorOpenedStatusChanged");

	Params::FortPlayerAugmentHUDTimerWidget_HandleAugmentSelectorOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;
	Parms.bViewingAugmentInventory = bViewingAugmentInventory;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleCanSelectAugmentChanged");

	Params::FortPlayerAugmentHUDTimerWidget_HandleCanSelectAugmentChanged Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleHUDElementVisibilityChanged");

	Params::FortPlayerAugmentHUDTimerWidget_HandleHUDElementVisibilityChanged Parms{};

	Parms.HiddenElementTagContainer = std::move(HiddenElementTagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleMovementModeChanged");

	Params::FortPlayerAugmentHUDTimerWidget_HandleMovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleNumPendingAugmentsToGrantUpdated");

	Params::FortPlayerAugmentHUDTimerWidget_HandleNumPendingAugmentsToGrantUpdated Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleSelectedAugmentForGrant");

	Params::FortPlayerAugmentHUDTimerWidget_HandleSelectedAugmentForGrant Parms{};

	Parms.SelectedAugment = SelectedAugment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::HandleTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "HandleTimerUpdated");

	Params::FortPlayerAugmentHUDTimerWidget_HandleTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentHUDTimerWidget::OnAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnAugmentGrantingTimersFinishedForMatch");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentHUDTimerWidget::OnAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnAugmentGrantingTimersResetForMatch");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentHUDTimerWidget::OnAugmentSelectorOpenedStatusChanged(const bool bIsOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnAugmentSelectorOpenedStatusChanged");

	Params::FortPlayerAugmentHUDTimerWidget_OnAugmentSelectorOpenedStatusChanged Parms{};

	Parms.bIsOpened = bIsOpened;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDTimerWidget::OnCanSelectAugmentChanged(bool bCanSelectAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnCanSelectAugmentChanged");

	Params::FortPlayerAugmentHUDTimerWidget_OnCanSelectAugmentChanged Parms{};

	Parms.bCanSelectAugment = bCanSelectAugment;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDTimerWidget::OnHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenElementTagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnHUDElementVisibilityChanged");

	Params::FortPlayerAugmentHUDTimerWidget_OnHUDElementVisibilityChanged Parms{};

	Parms.HiddenElementTagContainer = std::move(HiddenElementTagContainer);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDTimerWidget::OnMovementModeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnMovementModeChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentHUDTimerWidget::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnNumPendingAugmentsToGrantUpdated");

	Params::FortPlayerAugmentHUDTimerWidget_OnNumPendingAugmentsToGrantUpdated Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDTimerWidget::OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnSelectedAugmentForGrant");

	Params::FortPlayerAugmentHUDTimerWidget_OnSelectedAugmentForGrant Parms{};

	Parms.HighlightedAugment = HighlightedAugment;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentHUDTimerWidget::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "OnTimerUpdated");

	Params::FortPlayerAugmentHUDTimerWidget_OnTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortPlayerAugmentHUDTimerWidget::CanEquipSelectionTool() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "CanEquipSelectionTool");

	Params::FortPlayerAugmentHUDTimerWidget_CanEquipSelectionTool Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPlayerAugmentHUDTimerWidget::CanSelectAugment() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "CanSelectAugment");

	Params::FortPlayerAugmentHUDTimerWidget_CanSelectAugment Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortPlayerAugmentHUDTimerWidget::GetPendingAugmentsToGrant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentHUDTimerWidget", "GetPendingAugmentsToGrant");

	Params::FortPlayerAugmentHUDTimerWidget_GetPendingAugmentsToGrant Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPlayerAugmentInfoEntryWidget::OnItemNewOrBorrowedSet(const bool bIsNew, const bool bIsBorrowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "OnItemNewOrBorrowedSet");

	Params::FortPlayerAugmentInfoEntryWidget_OnItemNewOrBorrowedSet Parms{};

	Parms.bIsNew = bIsNew;
	Parms.bIsBorrowed = bIsBorrowed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInfoEntryWidget::OnItemPinColorSet(const struct FLinearColor& PinColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "OnItemPinColorSet");

	Params::FortPlayerAugmentInfoEntryWidget_OnItemPinColorSet Parms{};

	Parms.PinColor = std::move(PinColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInfoEntryWidget::OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "OnItemRaritySet");

	Params::FortPlayerAugmentInfoEntryWidget_OnItemRaritySet Parms{};

	Parms.Rarity = Rarity;
	Parms.RarityItemData = std::move(RarityItemData);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInfoEntryWidget::UpdateAugment(const class UFortPlayerAugmentItemDefinition* AugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInfoEntryWidget", "UpdateAugment");

	Params::FortPlayerAugmentInfoEntryWidget_UpdateAugment Parms{};

	Parms.AugmentItemDefinition = AugmentItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentInGameCarriedWidget::HandleExitBus(class AFortPlayerControllerZone* FortPCZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInGameCarriedWidget", "HandleExitBus");

	Params::FortPlayerAugmentInGameCarriedWidget_HandleExitBus Parms{};

	Parms.FortPCZone = FortPCZone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentInGameCarriedWidget::OnShowInitialAugment(const class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInGameCarriedWidget", "OnShowInitialAugment");

	Params::FortPlayerAugmentInGameCarriedWidget_OnShowInitialAugment Parms{};

	Parms.PlayerAugmentItemDefinition = PlayerAugmentItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInventoryListEntry::OnAugmentListItemSet(const class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryListEntry", "OnAugmentListItemSet");

	Params::FortPlayerAugmentInventoryListEntry_OnAugmentListItemSet Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInventoryTab::HandleAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleAugmentGrantingTimersFinishedForMatch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentInventoryTab::HandleAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleAugmentGrantingTimersResetForMatch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentInventoryTab::HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleNumPendingAugmentsToGrantUpdated");

	Params::FortPlayerAugmentInventoryTab_HandleNumPendingAugmentsToGrantUpdated Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentInventoryTab::HandleTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "HandleTimerUpdated");

	Params::FortPlayerAugmentInventoryTab_HandleTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPlayerAugmentInventoryTab::OnAugmentGrantingTimersFinishedForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnAugmentGrantingTimersFinishedForMatch");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentInventoryTab::OnAugmentGrantingTimersResetForMatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnAugmentGrantingTimersResetForMatch");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPlayerAugmentInventoryTab::OnAugmentListUpdated(const int32 NumAugments)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnAugmentListUpdated");

	Params::FortPlayerAugmentInventoryTab_OnAugmentListUpdated Parms{};

	Parms.NumAugments = NumAugments;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInventoryTab::OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnNumPendingAugmentsToGrantUpdated");

	Params::FortPlayerAugmentInventoryTab_OnNumPendingAugmentsToGrantUpdated Parms{};

	Parms.NumPendingAugmentsToGrant = NumPendingAugmentsToGrant;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInventoryTab::OnTimerUpdated(float TimeRemaining, float TimePercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "OnTimerUpdated");

	Params::FortPlayerAugmentInventoryTab_OnTimerUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.TimePercentage = TimePercentage;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentInventoryTab::RequestOpenSelector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "RequestOpenSelector");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UFortPlayerAugmentInventoryTab::GetPendingAugmentsToGrant() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentInventoryTab", "GetPendingAugmentsToGrant");

	Params::FortPlayerAugmentInventoryTab_GetPendingAugmentsToGrant Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPlayerAugmentLobbyWidget::OnShowInitialAugment(const class UFortPlayerAugmentItemDefinition* CarriedAugment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentLobbyWidget", "OnShowInitialAugment");

	Params::FortPlayerAugmentLobbyWidget_OnShowInitialAugment Parms{};

	Parms.CarriedAugment = CarriedAugment;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPlayerAugmentPostMatchUnlocksWidget::OnShowUnlockedAugments(const TArray<class UFortPlayerAugmentItemDefinition*>& UnlockedAugments)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerAugmentPostMatchUnlocksWidget", "OnShowUnlockedAugments");

	Params::FortPlayerAugmentPostMatchUnlocksWidget_OnShowUnlockedAugments Parms{};

	Parms.UnlockedAugments = std::move(UnlockedAugments);

	UObject::ProcessEvent(Func, &Parms);
}

}
