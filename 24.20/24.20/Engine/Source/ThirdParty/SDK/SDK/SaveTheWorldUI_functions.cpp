#pragma once

#include "Basic.hpp"

#include "SaveTheWorldUI_classes.hpp"
#include "SaveTheWorldUI_parameters.hpp"

namespace SDK
{

void UFortQuestMapViewer::HandleLayoutOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer", "HandleLayoutOutroAnimationFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapViewer::OnPlayLayoutFadeInAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer", "OnPlayLayoutFadeInAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapViewer::OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer", "OnPlayLayoutOutroAnimation");

	Params::FortQuestMapViewer_OnPlayLayoutOutroAnimation Parms{};

	Parms.TravelDirection = TravelDirection;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapViewer::OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer", "OnTryUpdateUserWidgetColor");

	Params::FortQuestMapViewer_OnTryUpdateUserWidgetColor Parms{};

	Parms.Widget = Widget;
	Parms.OverrideColor = std::move(OverrideColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapViewer::UpdateViewerData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer", "UpdateViewerData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortArmoryScreen::PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoryScreen", "PushHeroLoadoutScreen");

	Params::FortArmoryScreen_PushHeroLoadoutScreen Parms{};

	Parms.HeroLoadout = HeroLoadout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortArmoryScreen::PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoryScreen", "PushItemInspectionScreen");

	Params::FortArmoryScreen_PushItemInspectionScreen Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.CycleTileView = CycleTileView;
	Parms.bReadOnly = bReadOnly;
	Parms.bAllowFavoriting = bAllowFavoriting;
	Parms.bIsTemporaryItem = bIsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortArmoryScreen::PushItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect, bool bShowAutoMulch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortArmoryScreen", "PushItemManagementScreen");

	Params::FortArmoryScreen_PushItemManagementScreen Parms{};

	Parms.ItemManagementFilter = ItemManagementFilter;
	Parms.ItemToSelect = ItemToSelect;
	Parms.bShowAutoMulch = bShowAutoMulch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCommandScreen::HandleShowAllStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCommandScreen", "HandleShowAllStats");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCommandScreen::HandleUpgradeInspectHero()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCommandScreen", "HandleUpgradeInspectHero");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCommandScreen::PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCommandScreen", "PushHeroLoadoutScreen");

	Params::FortCommandScreen_PushHeroLoadoutScreen Parms{};

	Parms.HeroLoadout = HeroLoadout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCommandScreen::PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCommandScreen", "PushItemInspectionScreen");

	Params::FortCommandScreen_PushItemInspectionScreen Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.CycleTileView = CycleTileView;
	Parms.bReadOnly = bReadOnly;
	Parms.bAllowFavoriting = bAllowFavoriting;
	Parms.bIsTemporaryItem = bIsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookGenericRewardWidget::ClearRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "ClearRewards");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookGenericRewardWidget::OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "OnRewardStatusChanged");

	Params::FortCollectionBookGenericRewardWidget_OnRewardStatusChanged Parms{};

	Parms.NewStatus = NewStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookGenericRewardWidget::SetCurrentItemToDisplay(class UFortItem* ItemToDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "SetCurrentItemToDisplay");

	Params::FortCollectionBookGenericRewardWidget_SetCurrentItemToDisplay Parms{};

	Parms.ItemToDisplay = ItemToDisplay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookGenericRewardWidget::SetRewards(const struct FFortRewardInfo& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "SetRewards");

	Params::FortCollectionBookGenericRewardWidget_SetRewards Parms{};

	Parms.Rewards = std::move(Rewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookGenericRewardWidget::SetRewardStatus(ECollectionBookRewardStatus Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "SetRewardStatus");

	Params::FortCollectionBookGenericRewardWidget_SetRewardStatus Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ECollectionBookRewardStatus UFortCollectionBookGenericRewardWidget::GetRewardStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "GetRewardStatus");

	Params::FortCollectionBookGenericRewardWidget_GetRewardStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortCollectionBookGenericRewardWidget::HasRewards() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookGenericRewardWidget", "HasRewards");

	Params::FortCollectionBookGenericRewardWidget_HasRewards Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortCollectionBookItemPopupMenu::CanItemBePurchased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "CanItemBePurchased");

	Params::FortCollectionBookItemPopupMenu_CanItemBePurchased Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortCollectionBookItemPopupMenu::CanItemBeUnslotted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "CanItemBeUnslotted");

	Params::FortCollectionBookItemPopupMenu_CanItemBeUnslotted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollectionBookItemPopupMenu::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "HandleItemChanged");

	Params::FortCollectionBookItemPopupMenu_HandleItemChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookItemPopupMenu::HandleItemUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "HandleItemUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

class UFortCollectionBookSlotButton* UFortCollectionBookItemPopupMenu::GetHostButton() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookItemPopupMenu", "GetHostButton");

	Params::FortCollectionBookItemPopupMenu_GetHostButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollectionBookOverviewWidget::HandlePagesChanged(class UFortCollectionBookManager* CBManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookOverviewWidget", "HandlePagesChanged");

	Params::FortCollectionBookOverviewWidget_HandlePagesChanged Parms{};

	Parms.CBManager = CBManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookOverviewWidget::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookOverviewWidget", "OnActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookOverviewWidget::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookOverviewWidget", "OnDeactivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageDetailsWidget::HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "HandleRewardDetailsModalWidgetDeactivated");

	Params::FortCollectionBookPageDetailsWidget_HandleRewardDetailsModalWidgetDeactivated Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageDetailsWidget::OnDetailsPageChanged(const class UFortCollectionBookPage* InNewDetailsPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnDetailsPageChanged");

	Params::FortCollectionBookPageDetailsWidget_OnDetailsPageChanged Parms{};

	Parms.InNewDetailsPage = InNewDetailsPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageDetailsWidget::OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnPageProgressionUpdated");

	Params::FortCollectionBookPageDetailsWidget_OnPageProgressionUpdated Parms{};

	Parms.TotalFilledSlots = TotalFilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageDetailsWidget::OnSlotItemComplete(const class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnSlotItemComplete");

	Params::FortCollectionBookPageDetailsWidget_OnSlotItemComplete Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageDetailsWidget::OnUnslotItemComplete(const class UFortAccountItem* SlottedItem, const class UFortAccountItem* OldItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageDetailsWidget", "OnUnslotItemComplete");

	Params::FortCollectionBookPageDetailsWidget_OnUnslotItemComplete Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.OldItem = OldItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageListWidget::OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "OnCategoryDetailsUpdated");

	Params::FortCollectionBookPageListWidget_OnCategoryDetailsUpdated Parms{};

	Parms.AvailableSlots = AvailableSlots;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookPageListWidget::OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, EFortCollectionBookState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "OnPageDetailsUpdated");

	Params::FortCollectionBookPageListWidget_OnPageDetailsUpdated Parms{};

	Parms.AvailableSlots = AvailableSlots;
	Parms.FilledSlots = FilledSlots;
	Parms.TotalSlots = TotalSlots;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookPageListWidget::OnSlottedItemOperationComplete(const class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "OnSlottedItemOperationComplete");

	Params::FortCollectionBookPageListWidget_OnSlottedItemOperationComplete Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPageListWidget::SetupAsCategory(class UFortCollectionBookCategory* category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "SetupAsCategory");

	Params::FortCollectionBookPageListWidget_SetupAsCategory Parms{};

	Parms.category = category;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookPageListWidget::SetupAsPage(class UFortCollectionBookPage* Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPageListWidget", "SetupAsPage");

	Params::FortCollectionBookPageListWidget_SetupAsPage Parms{};

	Parms.Page = Page;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookPicker::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPicker", "HideMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPicker::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPicker", "NotifyPanelActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPicker::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPicker", "NotifyPanelDeactivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPicker::OnCollectComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPicker", "OnCollectComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCollectionBookPicker::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPicker", "ShowMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPicker::ShowMulchDialogForItem(class UFortItem* ItemToMulch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPicker", "ShowMulchDialogForItem");

	Params::FortCollectionBookPicker_ShowMulchDialogForItem Parms{};

	Parms.ItemToMulch = ItemToMulch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPrimaryPanel::OnBackActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnBackActionExecuted");

	Params::FortCollectionBookPrimaryPanel_OnBackActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookPrimaryPanel::OnCollectionBookPageClicked(const class UFortCollectionBookPage* ClickedPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnCollectionBookPageClicked");

	Params::FortCollectionBookPrimaryPanel_OnCollectionBookPageClicked Parms{};

	Parms.ClickedPage = ClickedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPrimaryPanel::OnCollectionBookPageSelected(const class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnCollectionBookPageSelected");

	Params::FortCollectionBookPrimaryPanel_OnCollectionBookPageSelected Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPrimaryPanel::OnCollectionBookSectionClicked(const class UFortCollectionBookSection* ClickedSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnCollectionBookSectionClicked");

	Params::FortCollectionBookPrimaryPanel_OnCollectionBookSectionClicked Parms{};

	Parms.ClickedSection = ClickedSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPrimaryPanel::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnInputMethodChanged");

	Params::FortCollectionBookPrimaryPanel_OnInputMethodChanged Parms{};

	Parms.CurrentInputType = CurrentInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookPrimaryPanel::OnSummonInfoPanelExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookPrimaryPanel", "OnSummonInfoPanelExecuted");

	Params::FortCollectionBookPrimaryPanel_OnSummonInfoPanelExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookProgressionRewardDetailInspectWidget::OnXPRequiredChanged(int32 NewXPRequired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardDetailInspectWidget", "OnXPRequiredChanged");

	Params::FortCollectionBookProgressionRewardDetailInspectWidget_OnXPRequiredChanged Parms{};

	Parms.NewXPRequired = NewXPRequired;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookProgressionRewardDetailInspectWidget::SetAssociatedLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardDetailInspectWidget", "SetAssociatedLevel");

	Params::FortCollectionBookProgressionRewardDetailInspectWidget_SetAssociatedLevel Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UFortCollectionBookProgressionRewardDetailInspectWidget::GetXPRequired() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardDetailInspectWidget", "GetXPRequired");

	Params::FortCollectionBookProgressionRewardDetailInspectWidget_GetXPRequired Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollectionBookProgressionRewardsModalWidget::InspectItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardsModalWidget", "InspectItemBP");

	Params::FortCollectionBookProgressionRewardsModalWidget_InspectItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookProgressionRewardsModalWidget::OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardsModalWidget", "OnLevelProgressionSet");

	Params::FortCollectionBookProgressionRewardsModalWidget_OnLevelProgressionSet Parms{};

	Parms.CurrentLevel = CurrentLevel;
	Parms.NextLvlPct = NextLvlPct;
	Parms.MaxAchievedLevel = MaxAchievedLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressionRewardsModalWidget::OnSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardsModalWidget", "OnSelectedButtonChanged");

	Params::FortCollectionBookProgressionRewardsModalWidget_OnSelectedButtonChanged Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressionRewardWidget::SetAssociatedLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressionRewardWidget", "SetAssociatedLevel");

	Params::FortCollectionBookProgressionRewardWidget_SetAssociatedLevel Parms{};

	Parms.Level = Level;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "HandleDetailsModalWidgetDeactivated");

	Params::FortCollectionBookProgressWidget_HandleDetailsModalWidgetDeactivated Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::OnCollectionBookLevelChanged(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookLevelChanged");

	Params::FortCollectionBookProgressWidget_OnCollectionBookLevelChanged Parms{};

	Parms.NewLevel = NewLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::OnCollectionBookLevelProgressionChanged(float NewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookLevelProgressionChanged");

	Params::FortCollectionBookProgressWidget_OnCollectionBookLevelProgressionChanged Parms{};

	Parms.NewCompletionPct = NewCompletionPct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::OnCollectionBookPageSelected(const class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookPageSelected");

	Params::FortCollectionBookProgressWidget_OnCollectionBookPageSelected Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::OnCollectionBookPreviewXPChange(float PreviewCompletionPct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnCollectionBookPreviewXPChange");

	Params::FortCollectionBookProgressWidget_OnCollectionBookPreviewXPChange Parms{};

	Parms.PreviewCompletionPct = PreviewCompletionPct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::OnInventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnInventoryUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookProgressWidget::OnSlottedItemOperationComplete(const class UFortAccountItem* ItemSlotted, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookProgressWidget", "OnSlottedItemOperationComplete");

	Params::FortCollectionBookProgressWidget_OnSlottedItemOperationComplete Parms{};

	Parms.ItemSlotted = ItemSlotted;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookRecycleSlotResultsWidget::SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookRecycleSlotResultsWidget", "SetCurrentItemToRecycle");

	Params::FortCollectionBookRecycleSlotResultsWidget_SetCurrentItemToRecycle Parms{};

	Parms.InItemToRecycle = InItemToRecycle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookRewardCardWidget::ClearRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "ClearRewards");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookRewardCardWidget::SetRewards(const struct FFortRewardInfo& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "SetRewards");

	Params::FortCollectionBookRewardCardWidget_SetRewards Parms{};

	Parms.Rewards = std::move(Rewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortCollectionBookRewardCardWidget::HasRewards() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookRewardCardWidget", "HasRewards");

	Params::FortCollectionBookRewardCardWidget_HasRewards Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollectionBookSectionCompletionRewardWidget::HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionCompletionRewardWidget", "HandleRewardDetailsModalWidgetDeactivated");

	Params::FortCollectionBookSectionCompletionRewardWidget_HandleRewardDetailsModalWidgetDeactivated Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnBackActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnBackActionExecuted");

	Params::FortCollectionBookSectionPanel_OnBackActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnInspectActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnInspectActionExecuted");

	Params::FortCollectionBookSectionPanel_OnInspectActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnLogAllowedItemsActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnLogAllowedItemsActionExecuted");

	Params::FortCollectionBookSectionPanel_OnLogAllowedItemsActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnOpenPickerActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnOpenPickerActionExecuted");

	Params::FortCollectionBookSectionPanel_OnOpenPickerActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnPurchaseItemActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnPurchaseItemActionExecuted");

	Params::FortCollectionBookSectionPanel_OnPurchaseItemActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnResearchItemOperationComplete(const class UFortAccountItem* NewItem, const class FString& TemplateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnResearchItemOperationComplete");

	Params::FortCollectionBookSectionPanel_OnResearchItemOperationComplete Parms{};

	Parms.NewItem = NewItem;
	Parms.TemplateId = std::move(TemplateId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnSectionChanged(const class UFortCollectionBookSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSectionChanged");

	Params::FortCollectionBookSectionPanel_OnSectionChanged Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotButtonContextAction");

	Params::FortCollectionBookSectionPanel_OnSlotButtonContextAction Parms{};

	Parms.ContextAction = ContextAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnSlotButtonHovered(int32 ButtonIx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotButtonHovered");

	Params::FortCollectionBookSectionPanel_OnSlotButtonHovered Parms{};

	Parms.ButtonIx = ButtonIx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnSlotButtonSelected(const class UFortCollectionBookSlotButton* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotButtonSelected");

	Params::FortCollectionBookSectionPanel_OnSlotButtonSelected Parms{};

	Parms.SlotButton = SlotButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnSlotItemActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlotItemActionExecuted");

	Params::FortCollectionBookSectionPanel_OnSlotItemActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnSlottedItemOperationComplete(const class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnSlottedItemOperationComplete");

	Params::FortCollectionBookSectionPanel_OnSlottedItemOperationComplete Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionPanel::OnUnslotItemActionExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnUnslotItemActionExecuted");

	Params::FortCollectionBookSectionPanel_OnUnslotItemActionExecuted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortCollectionBookSectionPanel::OnUnslotItemComplete(const class UFortItem* UnslottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnUnslotItemComplete");

	Params::FortCollectionBookSectionPanel_OnUnslotItemComplete Parms{};

	Parms.UnslottedItem = UnslottedItem;
	Parms.SlotId = SlotId;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCollectionBookSectionPanel::OnUnslotItemOperationComplete(const class UFortAccountItem* UnslottedItem, const class UFortAccountItem* OldSlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionPanel", "OnUnslotItemOperationComplete");

	Params::FortCollectionBookSectionPanel_OnUnslotItemOperationComplete Parms{};

	Parms.UnslottedItem = UnslottedItem;
	Parms.OldSlottedItem = OldSlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionTileWidget::OnItemSlotted(const class UFortAccountItem* ItemSlotted, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionTileWidget", "OnItemSlotted");

	Params::FortCollectionBookSectionTileWidget_OnItemSlotted Parms{};

	Parms.ItemSlotted = ItemSlotted;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionTileWidget::OnItemUnslotted(const class UFortAccountItem* ItemUnslotted, const class UFortAccountItem* OldSlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionTileWidget", "OnItemUnslotted");

	Params::FortCollectionBookSectionTileWidget_OnItemUnslotted Parms{};

	Parms.ItemUnslotted = ItemUnslotted;
	Parms.OldSlottedItem = OldSlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSectionTileWidget::OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSectionTileWidget", "OnSectionSlotUpdate");

	Params::FortCollectionBookSectionTileWidget_OnSectionSlotUpdate Parms{};

	Parms.NumFilledSlots = NumFilledSlots;
	Parms.NumSlots = NumSlots;
	Parms.SectionState = SectionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UUserWidget* UFortCollectionBookSlotButton::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotButton", "GetPopupMenu");

	Params::FortCollectionBookSlotButton_GetPopupMenu Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollectionBookSlotButton::OnSlottedItemUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotButton", "OnSlottedItemUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotButton::PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotButton", "PopupMenuClosedWithAction");

	Params::FortCollectionBookSlotButton_PopupMenuClosedWithAction Parms{};

	Parms.Selection = Selection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotConfirmationModal::HandleSlotItemComplete(const class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotConfirmationModal", "HandleSlotItemComplete");

	Params::FortCollectionBookSlotConfirmationModal_HandleSlotItemComplete Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotConfirmationModal::OnSlotItemRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotConfirmationModal", "OnSlotItemRequested");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCollectionBookSlotConfirmationModal::OnSlotItemRequestedComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotConfirmationModal", "OnSlotItemRequestedComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCollectionBookSlotView::OnSelectedSlotButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotView", "OnSelectedSlotButtonChanged");

	Params::FortCollectionBookSlotView_OnSelectedSlotButtonChanged Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.ButtonIdx = ButtonIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotView::OnSlotButtonClicked(class UCommonButtonLegacy* ClickedButton, int32 ButtonIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotView", "OnSlotButtonClicked");

	Params::FortCollectionBookSlotView_OnSlotButtonClicked Parms{};

	Parms.ClickedButton = ClickedButton;
	Parms.ButtonIdx = ButtonIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotView::OnSlotButtonHovered(class UCommonButtonLegacy* HoveredButton, int32 ButtonIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotView", "OnSlotButtonHovered");

	Params::FortCollectionBookSlotView_OnSlotButtonHovered Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.ButtonIdx = ButtonIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotWidget::HandleResearchItemComplete(const class UFortAccountItem* ResearchedItem, const class FString& SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HandleResearchItemComplete");

	Params::FortCollectionBookSlotWidget_HandleResearchItemComplete Parms{};

	Parms.ResearchedItem = ResearchedItem;
	Parms.SlotId = std::move(SlotId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotWidget::HandleSlottedItemOperationComplete(const class UFortAccountItem* NewItem, class FName TemplateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HandleSlottedItemOperationComplete");

	Params::FortCollectionBookSlotWidget_HandleSlottedItemOperationComplete Parms{};

	Parms.NewItem = NewItem;
	Parms.TemplateId = TemplateId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotWidget::HandleUnslotItemComplete(const class UFortAccountItem* UnslottedItem, const class UFortAccountItem* OldItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HandleUnslotItemComplete");

	Params::FortCollectionBookSlotWidget_HandleUnslotItemComplete Parms{};

	Parms.UnslottedItem = UnslottedItem;
	Parms.OldItem = OldItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookSlotWidget::OnItemCardUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "OnItemCardUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCollectionBookSlotWidget::OnItemDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "OnItemDestroyed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UFortCollectionBookSlotWidget::GetNumItemsToSlot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "GetNumItemsToSlot");

	Params::FortCollectionBookSlotWidget_GetNumItemsToSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class FName UFortCollectionBookSlotWidget::GetSlotRowName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "GetSlotRowName");

	Params::FortCollectionBookSlotWidget_GetSlotRowName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortItem* UFortCollectionBookSlotWidget::GetSlottedItemRepresentation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "GetSlottedItemRepresentation");

	Params::FortCollectionBookSlotWidget_GetSlottedItemRepresentation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortCollectionBookSlotWidget::HasItemsToSlot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "HasItemsToSlot");

	Params::FortCollectionBookSlotWidget_HasItemsToSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortCollectionBookSlotWidget::IsItemSlotted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookSlotWidget", "IsItemSlotted");

	Params::FortCollectionBookSlotWidget_IsItemSlotted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCollectionBookWidget::OnCollectionBookPageClicked(const class UFortCollectionBookPage* ClickedPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookPageClicked");

	Params::FortCollectionBookWidget_OnCollectionBookPageClicked Parms{};

	Parms.ClickedPage = ClickedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookWidget::OnCollectionBookPageSelected(const class UFortCollectionBookPage* SelectedPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookPageSelected");

	Params::FortCollectionBookWidget_OnCollectionBookPageSelected Parms{};

	Parms.SelectedPage = SelectedPage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookWidget::OnCollectionBookSectionClicked(const class UFortCollectionBookSection* ClickedSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookSectionClicked");

	Params::FortCollectionBookWidget_OnCollectionBookSectionClicked Parms{};

	Parms.ClickedSection = ClickedSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookWidget::OnCollectionBookSectionCloseRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnCollectionBookSectionCloseRequest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookWidget::OnPreviewXPChangeRequest(int32 XPChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookWidget", "OnPreviewXPChangeRequest");

	Params::FortCollectionBookWidget_OnPreviewXPChangeRequest Parms{};

	Parms.XPChange = XPChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCollectionBookWidget::RequestToClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCollectionBookWidget", "RequestToClose");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAbilitySystemContext::RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, TDelegate<void()> Callback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAbilitySystemContext", "RegisterForAttributeChanged");

	Params::FortAbilitySystemContext_RegisterForAttributeChanged Parms{};

	Parms.Widget = Widget;
	Parms.ASC = ASC;
	Parms.Attribute = std::move(Attribute);
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAbilitySystemContext::RemoveDelegatesFromWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAbilitySystemContext", "RemoveDelegatesFromWidget");

	Params::FortAbilitySystemContext_RemoveDelegatesFromWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAbilitySystemContext::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAbilitySystemContext", "HasMatchingGameplayTag");

	Params::FortAbilitySystemContext_HasMatchingGameplayTag Parms{};

	Parms.TagToCheck = std::move(TagToCheck);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortDirectAcquisitionWidgetBase::HandleAffiliateButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "HandleAffiliateButtonClicked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortDirectAcquisitionWidgetBase::IsTabsLayout(bool bShouldDisplayTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "IsTabsLayout");

	Params::FortDirectAcquisitionWidgetBase_IsTabsLayout Parms{};

	Parms.bShouldDisplayTabs = bShouldDisplayTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortDirectAcquisitionWidgetBase::OnDisplayToast(const bool bDisplayToast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "OnDisplayToast");

	Params::FortDirectAcquisitionWidgetBase_OnDisplayToast Parms{};

	Parms.bDisplayToast = bDisplayToast;

	UObject::ProcessEvent(Func, &Parms);
}

struct FDateTime UFortDirectAcquisitionWidgetBase::GetDailyStoreEndDate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetDailyStoreEndDate");

	Params::FortDirectAcquisitionWidgetBase_GetDailyStoreEndDate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDateTime UFortDirectAcquisitionWidgetBase::GetSeasonStoreEndDate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetSeasonStoreEndDate");

	Params::FortDirectAcquisitionWidgetBase_GetSeasonStoreEndDate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortAccountItemDefinition*> UFortDirectAcquisitionWidgetBase::GetStoreCurrencies() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetStoreCurrencies");

	Params::FortDirectAcquisitionWidgetBase_GetStoreCurrencies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDateTime UFortDirectAcquisitionWidgetBase::GetWeeklyStoreEndDate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase", "GetWeeklyStoreEndDate");

	Params::FortDirectAcquisitionWidgetBase_GetWeeklyStoreEndDate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortDirectAcquisitionWidgetBase_Legacy::HandleAffiliateButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "HandleAffiliateButtonClicked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortDirectAcquisitionWidgetBase_Legacy::IsTabsLayout(bool bShouldDisplayTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "IsTabsLayout");

	Params::FortDirectAcquisitionWidgetBase_Legacy_IsTabsLayout Parms{};

	Parms.bShouldDisplayTabs = bShouldDisplayTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortDirectAcquisitionWidgetBase_Legacy::OnDisplayToast(const bool bDisplayToast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "OnDisplayToast");

	Params::FortDirectAcquisitionWidgetBase_Legacy_OnDisplayToast Parms{};

	Parms.bDisplayToast = bDisplayToast;

	UObject::ProcessEvent(Func, &Parms);
}

struct FDateTime UFortDirectAcquisitionWidgetBase_Legacy::GetDailyStoreEndDate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetDailyStoreEndDate");

	Params::FortDirectAcquisitionWidgetBase_Legacy_GetDailyStoreEndDate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDateTime UFortDirectAcquisitionWidgetBase_Legacy::GetSeasonStoreEndDate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetSeasonStoreEndDate");

	Params::FortDirectAcquisitionWidgetBase_Legacy_GetSeasonStoreEndDate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortAccountItemDefinition*> UFortDirectAcquisitionWidgetBase_Legacy::GetStoreCurrencies() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetStoreCurrencies");

	Params::FortDirectAcquisitionWidgetBase_Legacy_GetStoreCurrencies Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDateTime UFortDirectAcquisitionWidgetBase_Legacy::GetWeeklyStoreEndDate() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDirectAcquisitionWidgetBase_Legacy", "GetWeeklyStoreEndDate");

	Params::FortDirectAcquisitionWidgetBase_Legacy_GetWeeklyStoreEndDate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortExpeditionBuildSquadWidget::ClearTemporaryExpeditionSquadState(bool bPreviewOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "ClearTemporaryExpeditionSquadState");

	Params::FortExpeditionBuildSquadWidget_ClearTemporaryExpeditionSquadState Parms{};

	Parms.bPreviewOnly = bPreviewOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionBuildSquadWidget::HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "HandleDifferentSquadSlotSelected");

	Params::FortExpeditionBuildSquadWidget_HandleDifferentSquadSlotSelected Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionBuildSquadWidget::HandleRequestStartExpedition(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "HandleRequestStartExpedition");

	Params::FortExpeditionBuildSquadWidget_HandleRequestStartExpedition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

bool UFortExpeditionBuildSquadWidget::IsExpeditionValidToStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "IsExpeditionValidToStart");

	Params::FortExpeditionBuildSquadWidget_IsExpeditionValidToStart Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortExpeditionBuildSquadWidget::OnRefreshBuildSquadWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "OnRefreshBuildSquadWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionBuildSquadWidget::OnRequestClosePicker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "OnRequestClosePicker");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortExpeditionBuildSquadWidget::SetCurrentSquadId(class FName SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "SetCurrentSquadId");

	Params::FortExpeditionBuildSquadWidget_SetCurrentSquadId Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionBuildSquadWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "SetData");

	Params::FortExpeditionBuildSquadWidget_SetData Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortExpeditionBuildSquadWidget::IsSquadSlotLocked(int32 SlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionBuildSquadWidget", "IsSquadSlotLocked");

	Params::FortExpeditionBuildSquadWidget_IsSquadSlotLocked Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortExpeditionDetailsWidget::HandleAbandonExpeditionCompleted(const class UFortExpeditionItem* Expedition, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "HandleAbandonExpeditionCompleted");

	Params::FortExpeditionDetailsWidget_HandleAbandonExpeditionCompleted Parms{};

	Parms.Expedition = Expedition;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionDetailsWidget::RequestAbandonExpedition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "RequestAbandonExpedition");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionDetailsWidget::SetCurrentSquadId(class FName SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "SetCurrentSquadId");

	Params::FortExpeditionDetailsWidget_SetCurrentSquadId Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionDetailsWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionDetailsWidget", "SetData");

	Params::FortExpeditionDetailsWidget_SetData Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionExpiresWidget::OnExpeditionExpirationUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionExpiresWidget", "OnExpeditionExpirationUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionExpiresWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionExpiresWidget", "SetData");

	Params::FortExpeditionExpiresWidget_SetData Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionListItemWidget::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionListItemWidget", "OnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortExpeditionListViewWidget::SetExpeditionListSortType(EFortExpeditionListSort InSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionListViewWidget", "SetExpeditionListSortType");

	Params::FortExpeditionListViewWidget_SetExpeditionListSortType Parms{};

	Parms.InSortType = InSortType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UFortExpeditionListViewWidget::GetExpeditionListSortName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionListViewWidget", "GetExpeditionListSortName");

	Params::FortExpeditionListViewWidget_GetExpeditionListSortName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortExpeditionOverviewWidget::HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "HandleExpeditionTabButtonCreated");

	Params::FortExpeditionOverviewWidget_HandleExpeditionTabButtonCreated Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionOverviewWidget::HandleExpeditionTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "HandleExpeditionTabSelected");

	Params::FortExpeditionOverviewWidget_HandleExpeditionTabSelected Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionOverviewWidget::OnExpeditionOverviewRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "OnExpeditionOverviewRefresh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionOverviewWidget::OnExpeditionTabSelected(const class FName& TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "OnExpeditionTabSelected");

	Params::FortExpeditionOverviewWidget_OnExpeditionTabSelected Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionOverviewWidget::UpdateExpeditionTabs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionOverviewWidget", "UpdateExpeditionTabs");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionPickVehicleWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionPickVehicleWidget", "SetData");

	Params::FortExpeditionPickVehicleWidget_SetData Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionReturnsWidget::OnExpeditionInProgressUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionReturnsWidget", "OnExpeditionInProgressUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionReturnsWidget::SetData(class UFortExpeditionItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionReturnsWidget", "SetData");

	Params::FortExpeditionReturnsWidget_SetData Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionRewardsWidget::HandleCollectionExpeditionCompleted(bool bMcpSuccess, const class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, const TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionRewardsWidget", "HandleCollectionExpeditionCompleted");

	Params::FortExpeditionRewardsWidget_HandleCollectionExpeditionCompleted Parms{};

	Parms.bMcpSuccess = bMcpSuccess;
	Parms.Expedition = Expedition;
	Parms.bExpeditionSuccess = bExpeditionSuccess;
	Parms.Rewards = std::move(Rewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionRewardsWidget::ProcessNextReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionRewardsWidget", "ProcessNextReward");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionRewardsWidget::RefreshRewardsUI(const class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, const TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionRewardsWidget", "RefreshRewardsUI");

	Params::FortExpeditionRewardsWidget_RefreshRewardsUI Parms{};

	Parms.Expedition = Expedition;
	Parms.bExpeditionSucceeded = bExpeditionSucceeded;
	Parms.Rewards = std::move(Rewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionSummaryWidget::BindInventoryDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionSummaryWidget", "BindInventoryDelegates");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionSummaryWidget::OnRefreshSummaryWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionSummaryWidget", "OnRefreshSummaryWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortExpeditionSummaryWidget::UnbindInventoryDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortExpeditionSummaryWidget", "UnbindInventoryDelegates");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortExpeditionUtilities::AreAnyExpeditionsComplete(const class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "AreAnyExpeditionsComplete");

	Params::FortExpeditionUtilities_AreAnyExpeditionsComplete Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortExpeditionUtilities::AreExpeditionsUnlocked(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "AreExpeditionsUnlocked");

	Params::FortExpeditionUtilities_AreExpeditionsUnlocked Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.UniqueId = std::move(UniqueId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortExpeditionUtilities::CalculateExpeditionPercentageChanceForSuccess(const class UFortExpeditionItem* Expedition, const float TotalPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "CalculateExpeditionPercentageChanceForSuccess");

	Params::FortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess Parms{};

	Parms.Expedition = Expedition;
	Parms.TotalPower = TotalPower;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortExpeditionUtilities::CalculateGlobalAndItemRatingModValuesBP(const class UFortExpeditionItem* Expedition, const TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "CalculateGlobalAndItemRatingModValuesBP");

	Params::FortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP Parms{};

	Parms.Expedition = Expedition;
	Parms.SlottedItems = std::move(SlottedItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (GlobalPowerMod != nullptr)
		*GlobalPowerMod = Parms.GlobalPowerMod;

	if (SlottedItemMods != nullptr)
		*SlottedItemMods = std::move(Parms.SlottedItemMods);
}

float UFortExpeditionUtilities::CalculateTotalPower(class AFortPlayerController* FortPC, const class UFortExpeditionItem* Expedition, const class FName& SquadId, const TArray<class UFortItem*>& SlottedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "CalculateTotalPower");

	Params::FortExpeditionUtilities_CalculateTotalPower Parms{};

	Parms.FortPC = FortPC;
	Parms.Expedition = Expedition;
	Parms.SquadId = SquadId;
	Parms.SlottedItems = std::move(SlottedItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortExpeditionUtilities::GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetAllExpeditionSquadIds");

	Params::FortExpeditionUtilities_GetAllExpeditionSquadIds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExpeditionSquadIds != nullptr)
		*OutExpeditionSquadIds = std::move(Parms.OutExpeditionSquadIds);
}

float UFortExpeditionUtilities::GetExpeditionSquadPower(class AFortPlayerController* FortPC, const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetExpeditionSquadPower");

	Params::FortExpeditionUtilities_GetExpeditionSquadPower Parms{};

	Parms.FortPC = FortPC;
	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortExpeditionUtilities::GetExpeditionSquadsThatMatchRequirements(const struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetExpeditionSquadsThatMatchRequirements");

	Params::FortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements Parms{};

	Parms.RequirementTags = std::move(RequirementTags);
	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutExpeditionSquadIds != nullptr)
		*OutExpeditionSquadIds = std::move(Parms.OutExpeditionSquadIds);

	return Parms.ReturnValue;
}

void UFortExpeditionUtilities::GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, const TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetMatchedCriteriaTags");

	Params::FortExpeditionUtilities_GetMatchedCriteriaTags Parms{};

	Parms.Expedition = Expedition;
	Parms.SlottedItems = std::move(SlottedItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMatchedCriteria != nullptr)
		*OutMatchedCriteria = std::move(Parms.OutMatchedCriteria);
}

void UFortExpeditionUtilities::GetTotalExpeditionVehiclesAvailable(const class UWidget* Widget, class AFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetTotalExpeditionVehiclesAvailable");

	Params::FortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable Parms{};

	Parms.Widget = Widget;
	Parms.FortPC = FortPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLandVehicles != nullptr)
		*OutLandVehicles = Parms.OutLandVehicles;

	if (OutLandVehiclesAvailable != nullptr)
		*OutLandVehiclesAvailable = Parms.OutLandVehiclesAvailable;

	if (OutSeaVehicles != nullptr)
		*OutSeaVehicles = Parms.OutSeaVehicles;

	if (OutSeaVehiclesAvailable != nullptr)
		*OutSeaVehiclesAvailable = Parms.OutSeaVehiclesAvailable;

	if (OutAirVehicles != nullptr)
		*OutAirVehicles = Parms.OutAirVehicles;

	if (OutAirVehiclesAvailable != nullptr)
		*OutAirVehiclesAvailable = Parms.OutAirVehiclesAvailable;
}

bool UFortExpeditionUtilities::GetVehicleTagFromSquadId(const class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetVehicleTagFromSquadId");

	Params::FortExpeditionUtilities_GetVehicleTagFromSquadId Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFoundVehicleTag != nullptr)
		*OutFoundVehicleTag = std::move(Parms.OutFoundVehicleTag);

	return Parms.ReturnValue;
}

struct FGameplayTag UFortExpeditionUtilities::GetVehicleTagRequiredForExpedition(const class UFortExpeditionItem* Expedition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "GetVehicleTagRequiredForExpedition");

	Params::FortExpeditionUtilities_GetVehicleTagRequiredForExpedition Parms{};

	Parms.Expedition = Expedition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortExpeditionUtilities::IsSquadOnExpedition(const class UWidget* Widget, const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "IsSquadOnExpedition");

	Params::FortExpeditionUtilities_IsSquadOnExpedition Parms{};

	Parms.Widget = Widget;
	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortExpeditionUtilities::TotalUnseenExpeditionsForTab(const class UWidget* Widget, const class FName& TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortExpeditionUtilities", "TotalUnseenExpeditionsForTab");

	Params::FortExpeditionUtilities_TotalUnseenExpeditionsForTab Parms{};

	Parms.Widget = Widget;
	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortFeatureUnlockWidget::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortFeatureUnlockWidget::SetData(const class FString& ItemTemplateID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "SetData");

	Params::FortFeatureUnlockWidget_SetData Parms{};

	Parms.ItemTemplateID = std::move(ItemTemplateID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UFortFeatureUnlockWidget::GetDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetDescription");

	Params::FortFeatureUnlockWidget_GetDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSoftObjectPtr<class UTexture2D> UFortFeatureUnlockWidget::GetLargeIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetLargeIcon");

	Params::FortFeatureUnlockWidget_GetLargeIcon Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSoftObjectPtr<class UTexture2D> UFortFeatureUnlockWidget::GetSmallIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetSmallIcon");

	Params::FortFeatureUnlockWidget_GetSmallIcon Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortFeatureUnlockWidget::GetTitle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetTitle");

	Params::FortFeatureUnlockWidget_GetTitle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaSource* UFortFeatureUnlockWidget::GetVideo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortFeatureUnlockWidget", "GetVideo");

	Params::FortFeatureUnlockWidget_GetVideo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortResultsWidgetSTW::GetRewardsByType(EFortRewardItemTypeSTW Type, TArray<class UFortItem*>* OutRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetRewardsByType");

	Params::FortResultsWidgetSTW_GetRewardsByType Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRewards != nullptr)
		*OutRewards = std::move(Parms.OutRewards);
}

int32 UFortResultsWidgetSTW::GetTotalMissionPointsEarned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetTotalMissionPointsEarned");

	Params::FortResultsWidgetSTW_GetTotalMissionPointsEarned Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortResultsWidgetSTW::HandleEmoteClicked(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "HandleEmoteClicked");

	Params::FortResultsWidgetSTW_HandleEmoteClicked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortResultsWidgetSTW::HandlePickerCancel(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "HandlePickerCancel");

	Params::FortResultsWidgetSTW_HandlePickerCancel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortResultsWidgetSTW::LogXPData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "LogXPData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortResultsWidgetSTW::RequestExitZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "RequestExitZone");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortResultsWidgetSTW::SendEndOfRoundFriendInviteAnalytic(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "SendEndOfRoundFriendInviteAnalytic");

	Params::FortResultsWidgetSTW_SendEndOfRoundFriendInviteAnalytic Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetPlayerName = std::move(TargetPlayerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortResultsWidgetSTW::SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "SendEndOfRoundScreenAnalytic");

	Params::FortResultsWidgetSTW_SendEndOfRoundScreenAnalytic Parms{};

	Parms.ScreenName = std::move(ScreenName);
	Parms.Skipped = Skipped;
	Parms.TimeSpent = TimeSpent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortResultsWidgetSTW::SendEndOfRoundUpVoteAnalytic(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "SendEndOfRoundUpVoteAnalytic");

	Params::FortResultsWidgetSTW_SendEndOfRoundUpVoteAnalytic Parms{};

	Parms.TargetId = std::move(TargetId);
	Parms.TargetPlayerName = std::move(TargetPlayerName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortResultsWidgetSTW::ToggleChat(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "ToggleChat");

	Params::FortResultsWidgetSTW_ToggleChat Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortResultsWidgetSTW::TriggerSetupTeleportCameraEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "TriggerSetupTeleportCameraEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

EFortCompletionResult UFortResultsWidgetSTW::GetZoneCompletionResult() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetZoneCompletionResult");

	Params::FortResultsWidgetSTW_GetZoneCompletionResult Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortResultsWidgetSTW::GetZoneCompletionResultText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "GetZoneCompletionResultText");

	Params::FortResultsWidgetSTW_GetZoneCompletionResultText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortResultsWidgetSTW::IsDataFinalized() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResultsWidgetSTW", "IsDataFinalized");

	Params::FortResultsWidgetSTW_IsDataFinalized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemAutoMulchActivatablePanel_STW::CacheAutoMulchSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "CacheAutoMulchSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemAutoMulchActivatablePanel_STW::EnterMulchModeForAutoMulch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "EnterMulchModeForAutoMulch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemAutoMulchActivatablePanel_STW::RestoreAutoMulchSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "RestoreAutoMulchSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemAutoMulchActivatablePanel_STW::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "SaveSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemAutoMulchActivatablePanel_STW::SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "SetItemManagementScreen");

	Params::FortItemAutoMulchActivatablePanel_STW_SetItemManagementScreen Parms{};

	Parms.InItemManagementScreen = InItemManagementScreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

EFortFrontendInventoryFilter UFortItemAutoMulchActivatablePanel_STW::GetFrontendInventoryFilter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "GetFrontendInventoryFilter");

	Params::FortItemAutoMulchActivatablePanel_STW_GetFrontendInventoryFilter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<EFortAutoMulchCategory> UFortItemAutoMulchActivatablePanel_STW::GetMulchCategoriesForInventoryFilter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemAutoMulchActivatablePanel_STW", "GetMulchCategoriesForInventoryFilter");

	Params::FortItemAutoMulchActivatablePanel_STW_GetMulchCategoriesForInventoryFilter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemCraftingOptionsActivatablePanel_STW::CraftAndSlotTargetItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "CraftAndSlotTargetItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::CraftTargetItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "CraftTargetItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::DecreaseSelectedQuantity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "DecreaseSelectedQuantity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::IncreaseSelectedQuantity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "IncreaseSelectedQuantity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::OnBaseItemChanged(class UFortSchematicItem* NewBaseItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnBaseItemChanged");

	Params::FortItemCraftingOptionsActivatablePanel_STW_OnBaseItemChanged Parms{};

	Parms.NewBaseItem = NewBaseItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemCraftingOptionsActivatablePanel_STW::OnMaxQuantityChanged(int32 NewMaxQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnMaxQuantityChanged");

	Params::FortItemCraftingOptionsActivatablePanel_STW_OnMaxQuantityChanged Parms{};

	Parms.NewMaxQuantity = NewMaxQuantity;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemCraftingOptionsActivatablePanel_STW::OnSelectedQuantityChanged(int32 NewSelectedQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnSelectedQuantityChanged");

	Params::FortItemCraftingOptionsActivatablePanel_STW_OnSelectedQuantityChanged Parms{};

	Parms.NewSelectedQuantity = NewSelectedQuantity;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemCraftingOptionsActivatablePanel_STW::OnTargetItemChanged(class UFortSchematicItem* NewTargetItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "OnTargetItemChanged");

	Params::FortItemCraftingOptionsActivatablePanel_STW_OnTargetItemChanged Parms{};

	Parms.NewTargetItem = NewTargetItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemCraftingOptionsActivatablePanel_STW::SelectNextTier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SelectNextTier");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::SelectPreviousTier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SelectPreviousTier");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::SetBaseSchematicItem(class UFortSchematicItem* InBaseItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetBaseSchematicItem");

	Params::FortItemCraftingOptionsActivatablePanel_STW_SetBaseSchematicItem Parms{};

	Parms.InBaseItem = InBaseItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetItemManagementScreen");

	Params::FortItemCraftingOptionsActivatablePanel_STW_SetItemManagementScreen Parms{};

	Parms.InItemManagementScreen = InItemManagementScreen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::SetSelectedQuantity_BP(int32 NewQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetSelectedQuantity_BP");

	Params::FortItemCraftingOptionsActivatablePanel_STW_SetSelectedQuantity_BP Parms{};

	Parms.NewQuantity = NewQuantity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::SetTargetCraftingTierIndex(int32 NewTierIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "SetTargetCraftingTierIndex");

	Params::FortItemCraftingOptionsActivatablePanel_STW_SetTargetCraftingTierIndex Parms{};

	Parms.NewTierIndex = NewTierIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemCraftingOptionsActivatablePanel_STW::UpdateTierImages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemCraftingOptionsActivatablePanel_STW", "UpdateTierImages");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemDetailsActivatablePanel_STW::HandleConsumeItemProgressChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleConsumeItemProgressChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemDetailsActivatablePanel_STW::HandleDifferentItemToCompareSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleDifferentItemToCompareSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemDetailsActivatablePanel_STW::HandleDifferentItemToDetailSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleDifferentItemToDetailSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemDetailsActivatablePanel_STW::HandleItemToDetailTooltipAssetsLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemDetailsActivatablePanel_STW", "HandleItemToDetailTooltipAssetsLoaded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemDetailsModeActivatablePanel_STW::HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemDetailsModeActivatablePanel_STW", "HandleOnActiveWidgetChanged");

	Params::FortItemDetailsModeActivatablePanel_STW_HandleOnActiveWidgetChanged Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementCustomFilterModalWidget_STW::CommitCustomFilters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "CommitCustomFilters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementCustomFilterModalWidget_STW::DisableAllFilters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "DisableAllFilters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementCustomFilterModalWidget_STW::EnableAllFilters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "EnableAllFilters");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementCustomFilterModalWidget_STW::OnBeginCommitCustomFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "OnBeginCommitCustomFilter");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementCustomFilterModalWidget_STW::OnCustomFilterSetUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "OnCustomFilterSetUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementCustomFilterModalWidget_STW::OnEndCommitCustomFilter(bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "OnEndCommitCustomFilter");

	Params::FortItemManagementCustomFilterModalWidget_STW_OnEndCommitCustomFilter Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementCustomFilterModalWidget_STW::ToggleFilter(EFortInventoryCustomFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "ToggleFilter");

	Params::FortItemManagementCustomFilterModalWidget_STW_ToggleFilter Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortItemManagementCustomFilterModalWidget_STW::IsCustomFilterEnabled(EFortInventoryCustomFilter Filter) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementCustomFilterModalWidget_STW", "IsCustomFilterEnabled");

	Params::FortItemManagementCustomFilterModalWidget_STW_IsCustomFilterEnabled Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementInventoryPanel_STW::AddItemStackToMulch(class UFortItem* Item, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "AddItemStackToMulch");

	Params::FortItemManagementInventoryPanel_STW_AddItemStackToMulch Parms{};

	Parms.Item = Item;
	Parms.Count = Count;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::AdvanceSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "AdvanceSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::CycleSortType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "CycleSortType");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortItemManagementInventoryPanel_STW::GetShouldPrioritizeFavorites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetShouldPrioritizeFavorites");

	Params::FortItemManagementInventoryPanel_STW_GetShouldPrioritizeFavorites Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementInventoryPanel_STW::HandleCraftItemStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCraftItemStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCursorModeChanged");

	Params::FortItemManagementInventoryPanel_STW_HandleCursorModeChanged Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCursorModeChangedBP");

	Params::FortItemManagementInventoryPanel_STW_HandleCursorModeChangedBP Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementInventoryPanel_STW::HandleCustomInventoryFilterChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleCustomInventoryFilterChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleDifferentFilterSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentFilterSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementInventoryPanel_STW::HandleDifferentFrontendInventoryFilterSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentFrontendInventoryFilterSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementInventoryPanel_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentItemManagementModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementInventoryPanel_STW::HandleDifferentSortTypeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleDifferentSortTypeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementInventoryPanel_STW::HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleFilterTabButtonCreated");

	Params::FortItemManagementInventoryPanel_STW_HandleFilterTabButtonCreated Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleFilterTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleFilterTabSelected");

	Params::FortItemManagementInventoryPanel_STW_HandleFilterTabSelected Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleFocusEquipSlotsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleFocusEquipSlotsBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementInventoryPanel_STW::HandleInventoryUpdatedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleInventoryUpdatedEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleItemBeginDrag(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleItemBeginDrag");

	Params::FortItemManagementInventoryPanel_STW_HandleItemBeginDrag Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::HandleQuickBarChangedBP(EFortQuickBars QuickBarType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleQuickBarChangedBP");

	Params::FortItemManagementInventoryPanel_STW_HandleQuickBarChangedBP Parms{};

	Parms.QuickBarType = QuickBarType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementInventoryPanel_STW::HandleSetOfItemsToMulchChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HandleSetOfItemsToMulchChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementInventoryPanel_STW::MarkAllItemsAsSeen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "MarkAllItemsAsSeen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::OnMulchRestrictionTextShown(bool bShown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "OnMulchRestrictionTextShown");

	Params::FortItemManagementInventoryPanel_STW_OnMulchRestrictionTextShown Parms{};

	Parms.bShown = bShown;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementInventoryPanel_STW::RefreshCraftingSort()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "RefreshCraftingSort");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::RequestFocusEquipSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "RequestFocusEquipSlots");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::SetFilter(const class FName FilterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "SetFilter");

	Params::FortItemManagementInventoryPanel_STW_SetFilter Parms{};

	Parms.FilterName = FilterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::SetSortType(EInventoryContentSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "SetSortType");

	Params::FortItemManagementInventoryPanel_STW_SetSortType Parms{};

	Parms.SortType = SortType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::SwitchPanelFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "SwitchPanelFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::TogglePrioritizeFavorites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "TogglePrioritizeFavorites");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::ToggleTileSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "ToggleTileSize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementInventoryPanel_STW::UpdateSchematicTiles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "UpdateSchematicTiles");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortItemManagementInventoryPanel_STW::CanDragItems() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "CanDragItems");

	Params::FortItemManagementInventoryPanel_STW_CanDragItems Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortItemManagementInventoryPanel_STW::GetQualifiedFilterDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetQualifiedFilterDisplayName");

	Params::FortItemManagementInventoryPanel_STW_GetQualifiedFilterDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<EInventoryContentSortType> UFortItemManagementInventoryPanel_STW::GetSupportedSortTypesForCurrentInventory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetSupportedSortTypesForCurrentInventory");

	Params::FortItemManagementInventoryPanel_STW_GetSupportedSortTypesForCurrentInventory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortItemDefinition*> UFortItemManagementInventoryPanel_STW::GetUpgradeItemDefinitionsForCurrentInventory() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "GetUpgradeItemDefinitionsForCurrentInventory");

	Params::FortItemManagementInventoryPanel_STW_GetUpgradeItemDefinitionsForCurrentInventory Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementInventoryPanel_STW::HasUnlockedStorageSlots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "HasUnlockedStorageSlots");

	Params::FortItemManagementInventoryPanel_STW_HasUnlockedStorageSlots Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementInventoryPanel_STW::IsSelectedItem(const class UFortItem* Item) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "IsSelectedItem");

	Params::FortItemManagementInventoryPanel_STW_IsSelectedItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementInventoryPanel_STW::IsSwitchPanelAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementInventoryPanel_STW", "IsSwitchPanelAvailable");

	Params::FortItemManagementInventoryPanel_STW_IsSwitchPanelAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UFortItemManagementItemTileButton_STW::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "GetPopupMenu");

	Params::FortItemManagementItemTileButton_STW_GetPopupMenu Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementItemTileButton_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleDifferentItemManagementModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::HandleEquipSlotChanged(int32 EquipSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleEquipSlotChanged");

	Params::FortItemManagementItemTileButton_STW_HandleEquipSlotChanged Parms{};

	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementItemTileButton_STW::HandleHasItemToCompareDetailsWithChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleHasItemToCompareDetailsWithChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::HandleHasItemToDetailChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleHasItemToDetailChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::HandleItemChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleItemChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleItemMulchStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::HandleShowCollectionBookIndicatorChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleShowCollectionBookIndicatorChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::HandleShowRefundIndicatorChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "HandleShowRefundIndicatorChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemTileButton_STW::OnSlotItemComplete(const class UFortAccountItem* SlottedItem, class FName SlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "OnSlotItemComplete");

	Params::FortItemManagementItemTileButton_STW_OnSlotItemComplete Parms{};

	Parms.SlottedItem = SlottedItem;
	Parms.SlotId = SlotId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementItemTileButton_STW::PopulateEquipSlotOverlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "PopulateEquipSlotOverlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementItemTileButton_STW::UpdateEquipSlotOverlay(const int32 CurrentSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "UpdateEquipSlotOverlay");

	Params::FortItemManagementItemTileButton_STW_UpdateEquipSlotOverlay Parms{};

	Parms.CurrentSlotIndex = CurrentSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FHomebaseSquadSlotId UFortItemManagementItemTileButton_STW::GetHomebaseSquadSlotForItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "GetHomebaseSquadSlotForItem");

	Params::FortItemManagementItemTileButton_STW_GetHomebaseSquadSlotForItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortItemManagementMode UFortItemManagementItemTileButton_STW::GetItemManagementMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "GetItemManagementMode");

	Params::FortItemManagementItemTileButton_STW_GetItemManagementMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementItemTileButton_STW::IsValidEquipSlotOverlayIndex(const int32 SlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemTileButton_STW", "IsValidEquipSlotOverlayIndex");

	Params::FortItemManagementItemTileButton_STW_IsValidEquipSlotOverlayIndex Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortAmmoItemDefinition*> UFortItemManagementItemDetailsPanel_STW::GetAmmoTypeItemDefinitions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortItemManagementItemDetailsPanel_STW", "GetAmmoTypeItemDefinitions");

	Params::FortItemManagementItemDetailsPanel_STW_GetAmmoTypeItemDefinitions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementItemDetailsPanel_STW::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemDetailsPanel_STW", "HandleHasItemMarkedForMulchingChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementItemDetailsPanel_STW::HandleHostSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementItemDetailsPanel_STW", "HandleHostSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementMulchDetailsPanel_STW::CommitMulch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "CommitMulch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementMulchDetailsPanel_STW::HandleHostSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "HandleHostSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementMulchDetailsPanel_STW::HandleSetOfItemsToMulchChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "HandleSetOfItemsToMulchChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<int32> UFortItemManagementMulchDetailsPanel_STW::GetItemCountsToMulch() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "GetItemCountsToMulch");

	Params::FortItemManagementMulchDetailsPanel_STW_GetItemCountsToMulch Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UFortItem*> UFortItemManagementMulchDetailsPanel_STW::GetItemsToMulch() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "GetItemsToMulch");

	Params::FortItemManagementMulchDetailsPanel_STW_GetItemsToMulch Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementMulchDetailsPanel_STW::IsSpaceAvailableForMulch() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementMulchDetailsPanel_STW", "IsSpaceAvailableForMulch");

	Params::FortItemManagementMulchDetailsPanel_STW_IsSpaceAvailableForMulch Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementModeDetailsPanel_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementModeDetailsPanel_STW", "HandleDifferentItemManagementModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementModeDetailsPanel_STW::HandleHostSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementModeDetailsPanel_STW", "HandleHostSet");

	UObject::ProcessEvent(Func, nullptr);
}

EFortItemManagementMode UFortItemManagementModeDetailsPanel_STW::GetItemManagementMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementModeDetailsPanel_STW", "GetItemManagementMode");

	Params::FortItemManagementModeDetailsPanel_STW_GetItemManagementMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementScreen_STW::CancelInventoryPanelTileViewRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CancelInventoryPanelTileViewRefresh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortItemManagementScreen_STW::CanRequestPopupMenuForSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CanRequestPopupMenuForSelectedItem");

	Params::FortItemManagementScreen_STW_CanRequestPopupMenuForSelectedItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementScreen_STW::ConsumeItem(class UFortConsumableAccountItem* ConsumableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ConsumeItem");

	Params::FortItemManagementScreen_STW_ConsumeItem Parms{};

	Parms.ConsumableItem = ConsumableItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::CraftAndSlotItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CraftAndSlotItem");

	Params::FortItemManagementScreen_STW_CraftAndSlotItem Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::CraftItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CraftItem");

	Params::FortItemManagementScreen_STW_CraftItem Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::CycleSortType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CycleSortType");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::DropItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "DropItem");

	Params::FortItemManagementScreen_STW_DropItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterComparisonMode");

	Params::FortItemManagementScreen_STW_EnterComparisonMode Parms{};

	Parms.ItemToCompareDetailsWith = ItemToCompareDetailsWith;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::EnterDetailsMode(class UFortItem* ItemToDetail_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterDetailsMode");

	Params::FortItemManagementScreen_STW_EnterDetailsMode Parms{};

	Parms.ItemToDetail_0 = ItemToDetail_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::EnterMulchMode(class UFortItem* ItemToMulch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterMulchMode");

	Params::FortItemManagementScreen_STW_EnterMulchMode Parms{};

	Parms.ItemToMulch = ItemToMulch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::EnterMulchModeForAutoMulch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EnterMulchModeForAutoMulch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::EquipItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "EquipItem");

	Params::FortItemManagementScreen_STW_EquipItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortItemManagementScreen_STW::GuardActionForReadOnlyWIFE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GuardActionForReadOnlyWIFE");

	Params::FortItemManagementScreen_STW_GuardActionForReadOnlyWIFE Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemManagementScreen_STW::HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleConsumeItemBP");

	Params::FortItemManagementScreen_STW_HandleConsumeItemBP Parms{};

	Parms.ConsumableItem = ConsumableItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleCraftAndSlotItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleCraftAndSlotItemBP");

	Params::FortItemManagementScreen_STW_HandleCraftAndSlotItemBP Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleCraftItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleCraftItemBP");

	Params::FortItemManagementScreen_STW_HandleCraftItemBP Parms{};

	Parms.SchematicItem = SchematicItem;
	Parms.RequestedTier = RequestedTier;
	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleDifferentItemManagementModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleDifferentItemManagementModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementScreen_STW::HandleDropItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleDropItemBP");

	Params::FortItemManagementScreen_STW_HandleDropItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleEquipItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleEquipItemBP");

	Params::FortItemManagementScreen_STW_HandleEquipItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleInspectItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleInspectItemBP");

	Params::FortItemManagementScreen_STW_HandleInspectItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleItemToCompareWithChanged");

	Params::FortItemManagementScreen_STW_HandleItemToCompareWithChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleItemToDetailChanged");

	Params::FortItemManagementScreen_STW_HandleItemToDetailChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::HandleMulchQuantitySelection(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleMulchQuantitySelection");

	Params::FortItemManagementScreen_STW_HandleMulchQuantitySelection Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleOpenAutoMulchOptionsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleOpenAutoMulchOptionsBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemManagementScreen_STW::HandleOpenCraftingOptionsBP(class UFortSchematicItem* SchematicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleOpenCraftingOptionsBP");

	Params::FortItemManagementScreen_STW_HandleOpenCraftingOptionsBP Parms{};

	Parms.SchematicItem = SchematicItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HandleTransferItemBP(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HandleTransferItemBP");

	Params::FortItemManagementScreen_STW_HandleTransferItemBP Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::HideCustomFilterModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HideCustomFilterModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HideMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::InspectItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "InspectItem");

	Params::FortItemManagementScreen_STW_InspectItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::MarkAllItemsAsSeen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "MarkAllItemsAsSeen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "NotifyPanelActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "NotifyPanelDeactivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::OpenAutoMulchOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "OpenAutoMulchOptions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::OpenCraftingOptions(class UFortSchematicItem* SchematicItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "OpenCraftingOptions");

	Params::FortItemManagementScreen_STW_OpenCraftingOptions Parms{};

	Parms.SchematicItem = SchematicItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::RequestPopupMenuForSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "RequestPopupMenuForSelectedItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::SetConsumeItemRequestInProgress(bool InProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "SetConsumeItemRequestInProgress");

	Params::FortItemManagementScreen_STW_SetConsumeItemRequestInProgress Parms{};

	Parms.InProgress = InProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "SetFrontendInventoryFilter");

	Params::FortItemManagementScreen_STW_SetFrontendInventoryFilter Parms{};

	Parms.FrontendInventoryFilter_0 = FrontendInventoryFilter_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::ShowCustomFilterModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ShowCustomFilterModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ShowMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ShowWarningReadOnlyWIFE");

	Params::FortItemManagementScreen_STW_ShowWarningReadOnlyWIFE Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemManagementScreen_STW::ToggleShowCollectionBookIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ToggleShowCollectionBookIndicator");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::ToggleShowRefundIndicator()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "ToggleShowRefundIndicator");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemManagementScreen_STW::TransferItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "TransferItem");

	Params::FortItemManagementScreen_STW_TransferItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortItemManagementScreen_STW::CanEquipItem(class UFortItem* Item) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "CanEquipItem");

	Params::FortItemManagementScreen_STW_CanEquipItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortItem* UFortItemManagementScreen_STW::GetItemToCompareDetailsWith() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetItemToCompareDetailsWith");

	Params::FortItemManagementScreen_STW_GetItemToCompareDetailsWith Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortItem* UFortItemManagementScreen_STW::GetItemToDetail() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetItemToDetail");

	Params::FortItemManagementScreen_STW_GetItemToDetail Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementScreen_STW::GetShouldShowCollectionBookIndicator() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetShouldShowCollectionBookIndicator");

	Params::FortItemManagementScreen_STW_GetShouldShowCollectionBookIndicator Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementScreen_STW::GetShouldShowRefundIndicator() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "GetShouldShowRefundIndicator");

	Params::FortItemManagementScreen_STW_GetShouldShowRefundIndicator Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementScreen_STW::HasDefaultItemsToMulch() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HasDefaultItemsToMulch");

	Params::FortItemManagementScreen_STW_HasDefaultItemsToMulch Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementScreen_STW::HasItemBeenSeen(class UFortAccountItem* AccountItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "HasItemBeenSeen");

	Params::FortItemManagementScreen_STW_HasItemBeenSeen Parms{};

	Parms.AccountItem = AccountItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemManagementScreen_STW::IsScreenWIFE() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemManagementScreen_STW", "IsScreenWIFE");

	Params::FortItemManagementScreen_STW_IsScreenWIFE Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMainMenu_STW::TryShowModal(TSoftClassPtr<class UClass>& ModalWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_STW", "TryShowModal");

	Params::MainMenu_STW_TryShowModal Parms{};

	Parms.ModalWidgetClass = ModalWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	ModalWidgetClass = Parms.ModalWidgetClass;
}

void UMainMenu_STW::TryShowPrimaryContent(TSoftClassPtr<class UClass>& ContentWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_STW", "TryShowPrimaryContent");

	Params::MainMenu_STW_TryShowPrimaryContent Parms{};

	Parms.ContentWidgetClass = ContentWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	ContentWidgetClass = Parms.ContentWidgetClass;
}

bool UMainMenu_STW::IsActiveTabMainShop() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_STW", "IsActiveTabMainShop");

	Params::MainMenu_STW_IsActiveTabMainShop Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMainMenu_STW::ShouldShowLeaveExperienceButton() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainMenu_STW", "ShouldShowLeaveExperienceButton");

	Params::MainMenu_STW_ShouldShowLeaveExperienceButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortUIStateWidget_STWJoinServer::HandleLobbyDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleLobbyDisconnected");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUIStateWidget_STWJoinServer::HandleLobbyTimeUpdated(int32 TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleLobbyTimeUpdated");

	Params::FortUIStateWidget_STWJoinServer_HandleLobbyTimeUpdated Parms{};

	Parms.TimeRemaining = TimeRemaining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortUIStateWidget_STWJoinServer::HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleMatchmakingComplete");

	Params::FortUIStateWidget_STWJoinServer_HandleMatchmakingComplete Parms{};

	Parms.MatchmakingResult = MatchmakingResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortUIStateWidget_STWJoinServer::HandleMatchmakingStateChange(EMatchmakingState OldState, EMatchmakingState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "HandleMatchmakingStateChange");

	Params::FortUIStateWidget_STWJoinServer_HandleMatchmakingStateChange Parms{};

	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortUIStateWidget_STWJoinServer::OnShowTutorialDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUIStateWidget_STWJoinServer", "OnShowTutorialDialog");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBar_STW::OnShouldShowPhoenixDisplay(bool bShow, class UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_STW", "OnShouldShowPhoenixDisplay");

	Params::TopBar_STW_OnShouldShowPhoenixDisplay Parms{};

	Parms.bShow = bShow;
	Parms.PhoenixDisplayInfo = PhoenixDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopBar_STW::OnSocialMenuOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_STW", "OnSocialMenuOpened");

	UObject::ProcessEvent(Func, nullptr);
}

void UTopBar_STW::SetOnlineFriendsCount(int32 NewOnlineFriendsCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopBar_STW", "SetOnlineFriendsCount");

	Params::TopBar_STW_SetOnlineFriendsCount Parms{};

	Parms.NewOnlineFriendsCount = NewOnlineFriendsCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortHeroLoadoutGadgetPicker::HandleDifferentTargetLoadoutSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutGadgetPicker", "HandleDifferentTargetLoadoutSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortHeroLoadoutGadgetPicker::SetTargetLoadoutSlot(const class UFortCampaignHeroLoadoutItem* LoadoutItem, const int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutGadgetPicker", "SetTargetLoadoutSlot");

	Params::FortHeroLoadoutGadgetPicker_SetTargetLoadoutSlot Parms{};

	Parms.LoadoutItem = LoadoutItem;
	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHeroLoadoutHeroPicker::AssociateFilterTabList(const class UFortTabListWidgetBase_Legacy* ExternalFilterTabList_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "AssociateFilterTabList");

	Params::FortHeroLoadoutHeroPicker_AssociateFilterTabList Parms{};

	Parms.ExternalFilterTabList_0 = ExternalFilterTabList_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UFortHeroLoadoutHeroPicker::GetCurrentlySelectedTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "GetCurrentlySelectedTab");

	Params::FortHeroLoadoutHeroPicker_GetCurrentlySelectedTab Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortHeroLoadoutHeroPicker::HandleDifferentTargetLoadoutSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "HandleDifferentTargetLoadoutSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortHeroLoadoutHeroPicker::HandleFilterTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "HandleFilterTabSelected");

	Params::FortHeroLoadoutHeroPicker_HandleFilterTabSelected Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHeroLoadoutHeroPicker::HandleFilterTabSelectedBP(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "HandleFilterTabSelectedBP");

	Params::FortHeroLoadoutHeroPicker_HandleFilterTabSelectedBP Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortHeroLoadoutHeroPicker::SetTargetLoadoutSlot(const class UFortCampaignHeroLoadoutItem* LoadoutItem, const class FName& SlotName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "SetTargetLoadoutSlot");

	Params::FortHeroLoadoutHeroPicker_SetTargetLoadoutSlot Parms{};

	Parms.LoadoutItem = LoadoutItem;
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHeroLoadoutHeroPicker::UpdateFilterTabList(class FName PreviouslySelectedTab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutHeroPicker", "UpdateFilterTabList");

	Params::FortHeroLoadoutHeroPicker_UpdateFilterTabList Parms{};

	Parms.PreviouslySelectedTab = PreviouslySelectedTab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHeroLoadoutScreenBase::SetHeroLoadout(const class UFortCampaignHeroLoadoutItem* HeroLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "SetHeroLoadout");

	Params::FortHeroLoadoutScreenBase_SetHeroLoadout Parms{};

	Parms.HeroLoadout = HeroLoadout;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortHeroLoadoutScreenBase::GetIsReadOnly() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "GetIsReadOnly");

	Params::FortHeroLoadoutScreenBase_GetIsReadOnly Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortHeroLoadoutScreenBase::IsLoadoutSwitchingAllowed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutScreenBase", "IsLoadoutSwitchingAllowed");

	Params::FortHeroLoadoutScreenBase_IsLoadoutSwitchingAllowed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortHeroLoadoutSlotButton::HandleMenuOpenChanged(bool bIsMenuOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutSlotButton", "HandleMenuOpenChanged");

	Params::FortHeroLoadoutSlotButton_HandleMenuOpenChanged Parms{};

	Parms.bIsMenuOpen = bIsMenuOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortHeroLoadoutSlotButton::IsContextMenuOpen() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutSlotButton", "IsContextMenuOpen");

	Params::FortHeroLoadoutSlotButton_IsContextMenuOpen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortHeroLoadoutTeamPerkPicker::HandleDifferentTargetLoadoutSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutTeamPerkPicker", "HandleDifferentTargetLoadoutSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortHeroLoadoutTeamPerkPicker::SetTargetLoadout(const class UFortCampaignHeroLoadoutItem* LoadoutItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutTeamPerkPicker", "SetTargetLoadout");

	Params::FortHeroLoadoutTeamPerkPicker_SetTargetLoadout Parms{};

	Parms.LoadoutItem = LoadoutItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCampaignTabsScreenBase::ConstructTabs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "ConstructTabs");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCampaignTabsScreenBase::HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "HandleFeatureStateChanged");

	Params::FortCampaignTabsScreenBase_HandleFeatureStateChanged Parms{};

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCampaignTabsScreenBase::HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "HandleMainTabCreated");

	Params::FortCampaignTabsScreenBase_HandleMainTabCreated Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCampaignTabsScreenBase::HandleMainTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "HandleMainTabSelected");

	Params::FortCampaignTabsScreenBase_HandleMainTabSelected Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCampaignTabsScreenBase::UpdateItemShopButtonBang(const class FName Tab)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "UpdateItemShopButtonBang");

	Params::FortCampaignTabsScreenBase_UpdateItemShopButtonBang Parms{};

	Parms.Tab = Tab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortCampaignTabsScreenBase::ShouldShowItemShopBang() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase", "ShouldShowItemShopBang");

	Params::FortCampaignTabsScreenBase_ShouldShowItemShopBang Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortCampaignTabsScreenBase_Legacy::ConstructTabs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "ConstructTabs");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortCampaignTabsScreenBase_Legacy::HandleFeatureNavigateRequest(EFortUIFeature Feature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleFeatureNavigateRequest");

	Params::FortCampaignTabsScreenBase_Legacy_HandleFeatureNavigateRequest Parms{};

	Parms.Feature = Feature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCampaignTabsScreenBase_Legacy::HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleFeatureStateChanged");

	Params::FortCampaignTabsScreenBase_Legacy_HandleFeatureStateChanged Parms{};

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCampaignTabsScreenBase_Legacy::HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleMainTabCreated");

	Params::FortCampaignTabsScreenBase_Legacy_HandleMainTabCreated Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCampaignTabsScreenBase_Legacy::HandleMainTabSelected(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCampaignTabsScreenBase_Legacy", "HandleMainTabSelected");

	Params::FortCampaignTabsScreenBase_Legacy_HandleMainTabSelected Parms{};

	Parms.TabNameID = TabNameID;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortStoreSummary::CloseSummaryScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "CloseSummaryScreen");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortStoreSummary::FinalizeFavoriteStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "FinalizeFavoriteStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::HandleContextMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "HandleContextMenuOpenChanged");

	Params::FortStoreSummary_HandleContextMenuOpenChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::HandleContextMenuOpenChangedBP(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "HandleContextMenuOpenChangedBP");

	Params::FortStoreSummary_HandleContextMenuOpenChangedBP Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortStoreSummary::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "HideMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::MarkDefaultItemsForMulch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "MarkDefaultItemsForMulch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "NotifyPanelActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "NotifyPanelDeactivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::SetCards(const TArray<struct FCard>& Cards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "SetCards");

	Params::FortStoreSummary_SetCards Parms{};

	Parms.Cards = std::move(Cards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "SetIsInChoiceSelectionMode");

	Params::FortStoreSummary_SetIsInChoiceSelectionMode Parms{};

	Parms.InIsInChoiceSelectionMode = InIsInChoiceSelectionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "ShowMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortStoreSummary::GetIsInChoiceSelectionMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary", "GetIsInChoiceSelectionMode");

	Params::FortStoreSummary_GetIsInChoiceSelectionMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UFortStoreSummaryItemButton::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "GetPopupMenu");

	Params::FortStoreSummaryItemButton_GetPopupMenu Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortStoreSummaryItemButton::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "HandleItemMulchStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortStoreSummaryItemButton::HandleMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "HandleMenuOpenChanged");

	Params::FortStoreSummaryItemButton_HandleMenuOpenChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummaryItemButton::SetStoreCardObject(class UStoreCardObject* CardObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "SetStoreCardObject");

	Params::FortStoreSummaryItemButton_SetStoreCardObject Parms{};

	Parms.CardObject = CardObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummaryItemButton::UpdateMulchListWithItem(bool bAddingItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "UpdateMulchListWithItem");

	Params::FortStoreSummaryItemButton_UpdateMulchListWithItem Parms{};

	Parms.bAddingItem = bAddingItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UStoreCardObject* UFortStoreSummaryItemButton::GetStoreCardObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton", "GetStoreCardObject");

	Params::FortStoreSummaryItemButton_GetStoreCardObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUserWidget* UFortStoreSummaryItemButton_Legacy::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "GetPopupMenu");

	Params::FortStoreSummaryItemButton_Legacy_GetPopupMenu Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortStoreSummaryItemButton_Legacy::HandleItemMulchStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "HandleItemMulchStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortStoreSummaryItemButton_Legacy::HandleMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "HandleMenuOpenChanged");

	Params::FortStoreSummaryItemButton_Legacy_HandleMenuOpenChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummaryItemButton_Legacy::SetStoreCardObject(class UStoreCardObject* CardObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "SetStoreCardObject");

	Params::FortStoreSummaryItemButton_Legacy_SetStoreCardObject Parms{};

	Parms.CardObject = CardObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummaryItemButton_Legacy::UpdateMulchListWithItem(bool bAddingItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "UpdateMulchListWithItem");

	Params::FortStoreSummaryItemButton_Legacy_UpdateMulchListWithItem Parms{};

	Parms.bAddingItem = bAddingItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UStoreCardObject* UFortStoreSummaryItemButton_Legacy::GetStoreCardObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemButton_Legacy", "GetStoreCardObject");

	Params::FortStoreSummaryItemButton_Legacy_GetStoreCardObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortStoreSummaryItemPopupMenu::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu", "HandleItemChanged");

	Params::FortStoreSummaryItemPopupMenu_HandleItemChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortStoreSummaryItemPopupMenu::MulchItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu", "MulchItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFortStoreSummaryItemButton* UFortStoreSummaryItemPopupMenu::GetHostButton() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu", "GetHostButton");

	Params::FortStoreSummaryItemPopupMenu_GetHostButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortStoreSummaryItemPopupMenu_Legacy::HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu_Legacy", "HandleItemChanged");

	Params::FortStoreSummaryItemPopupMenu_Legacy_HandleItemChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortStoreSummaryItemPopupMenu_Legacy::MulchItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu_Legacy", "MulchItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFortStoreSummaryItemButton_Legacy* UFortStoreSummaryItemPopupMenu_Legacy::GetHostButton() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummaryItemPopupMenu_Legacy", "GetHostButton");

	Params::FortStoreSummaryItemPopupMenu_Legacy_GetHostButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortStoreSummary_Legacy::CloseSummaryScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "CloseSummaryScreen");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortStoreSummary_Legacy::FinalizeFavoriteStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "FinalizeFavoriteStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::HandleContextMenuOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "HandleContextMenuOpenChanged");

	Params::FortStoreSummary_Legacy_HandleContextMenuOpenChanged Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::HandleContextMenuOpenChangedBP(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "HandleContextMenuOpenChangedBP");

	Params::FortStoreSummary_Legacy_HandleContextMenuOpenChangedBP Parms{};

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortStoreSummary_Legacy::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "HideMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::MarkDefaultItemsForMulch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "MarkDefaultItemsForMulch");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "NotifyPanelActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "NotifyPanelDeactivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::SetCards(const TArray<struct FCard>& Cards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "SetCards");

	Params::FortStoreSummary_Legacy_SetCards Parms{};

	Parms.Cards = std::move(Cards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "SetIsInChoiceSelectionMode");

	Params::FortStoreSummary_Legacy_SetIsInChoiceSelectionMode Parms{};

	Parms.InIsInChoiceSelectionMode = InIsInChoiceSelectionMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStoreSummary_Legacy::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "ShowMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortStoreSummary_Legacy::GetIsInChoiceSelectionMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStoreSummary_Legacy", "GetIsInChoiceSelectionMode");

	Params::FortStoreSummary_Legacy_GetIsInChoiceSelectionMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortHeroLoadoutGadgetTileBase::OnGadgetUpdated(bool bIsValidGadget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutGadgetTileBase", "OnGadgetUpdated");

	Params::FortHeroLoadoutGadgetTileBase_OnGadgetUpdated Parms{};

	Parms.bIsValidGadget = bIsValidGadget;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortHeroLoadoutGadgetTileBase::SetGadgetToRepresent(const class UFortGadgetItemDefinition* GadgetItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutGadgetTileBase", "SetGadgetToRepresent");

	Params::FortHeroLoadoutGadgetTileBase_SetGadgetToRepresent Parms{};

	Parms.GadgetItemDefinition = GadgetItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHeroLoadoutInGameScreenBase::OnPerkWidgetAdded(class UGridSlot* GridSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutInGameScreenBase", "OnPerkWidgetAdded");

	Params::FortHeroLoadoutInGameScreenBase_OnPerkWidgetAdded Parms{};

	Parms.GridSlot = GridSlot;

	UObject::ProcessEvent(Func, &Parms);
}

class UFortGadgetItemDefinition* UFortHeroLoadoutInGameScreenBase::GetGadgetDefinitionBySlot(int32 SlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutInGameScreenBase", "GetGadgetDefinitionBySlot");

	Params::FortHeroLoadoutInGameScreenBase_GetGadgetDefinitionBySlot Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortHeroLoadoutPerkTileBase::OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroLoadoutPerkTileBase", "OnPerkInitialized");

	Params::FortHeroLoadoutPerkTileBase_OnPerkInitialized Parms{};

	Parms.InPerkType = InPerkType;
	Parms.bActive = bActive;
	Parms.bShowWarning = bShowWarning;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAlterationModOptinScreenBase::ConvertItemAlterations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "ConvertItemAlterations");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAlterationModOptinScreenBase::OnItemConversionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "OnItemConversionComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAlterationModOptinScreenBase::OnSetupItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "OnSetupItem");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAlterationModOptinScreenBase::RequestClose(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "RequestClose");

	Params::FortAlterationModOptinScreenBase_RequestClose Parms{};

	Parms.bCancelled = bCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAlterationModOptinScreenBase::SetupItem(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModOptinScreenBase", "SetupItem");

	Params::FortAlterationModOptinScreenBase_SetupItem Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAlterationModScreenBase::AreIngredientRequirementsMent(const TArray<struct FFortItemQuantityPair>& RequiredIngredients)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "AreIngredientRequirementsMent");

	Params::FortAlterationModScreenBase_AreIngredientRequirementsMent Parms{};

	Parms.RequiredIngredients = std::move(RequiredIngredients);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAlterationModScreenBase::CancelSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "CancelSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAlterationModScreenBase::ConfirmSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "ConfirmSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortAlterationModScreenBase::HandleBackAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "HandleBackAction");

	Params::FortAlterationModScreenBase_HandleBackAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortAlterationModScreenBase::OnAlterationModificationCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationModificationCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAlterationModScreenBase::OnAlterationModificationStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationModificationStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAlterationModScreenBase::OnAlterationModificationSucess(int32 ModifiedSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationModificationSucess");

	Params::FortAlterationModScreenBase_OnAlterationModificationSucess Parms{};

	Parms.ModifiedSlotIndex = ModifiedSlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAlterationModScreenBase::OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnAlterationOptionChanged");

	Params::FortAlterationModScreenBase_OnAlterationOptionChanged Parms{};

	Parms.CurrentAlterationOption = CurrentAlterationOption;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAlterationModScreenBase::OnItemSlotChanged(bool SelectedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "OnItemSlotChanged");

	Params::FortAlterationModScreenBase_OnItemSlotChanged Parms{};

	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAlterationModScreenBase::RefreshItemAndAlterationsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "RefreshItemAndAlterationsBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAlterationModScreenBase::SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationModScreenBase", "SetItemForAlterationsModding");

	Params::FortAlterationModScreenBase_SetItemForAlterationsModding Parms{};

	Parms.InAlterableItem = InAlterableItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectionScreen::DoAlterationModification()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "DoAlterationModification");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFortItemInspectCycleWidget* UFortItemInspectionScreen::GetCycleWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetCycleWidget");

	Params::FortItemInspectionScreen_GetCycleWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemInspectionScreen::HandleDifferentInspectionModeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleDifferentInspectionModeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemInspectionScreen::HandleDifferentItemToInspectSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleDifferentItemToInspectSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemInspectionScreen::HandleIsPreviewingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleIsPreviewingChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemInspectionScreen::HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectChanged");

	Params::FortItemInspectionScreen_HandleItemToInspectChanged Parms{};

	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectionScreen::HandleItemToInspectChangedBP(bool bWasFavoritedChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectChangedBP");

	Params::FortItemInspectionScreen_HandleItemToInspectChangedBP Parms{};

	Parms.bWasFavoritedChanged = bWasFavoritedChanged;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemInspectionScreen::HandleItemToInspectDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectDestroyed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectionScreen::HandleItemToInspectDestroyedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "HandleItemToInspectDestroyedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortItemInspectionScreen::OpenItemInspect(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32 QuantityOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "OpenItemInspect");

	Params::FortItemInspectionScreen_OpenItemInspect Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.Mode = Mode;
	Parms.ShouldAllowUpgrading = ShouldAllowUpgrading;
	Parms.ShouldAllowEvolution = ShouldAllowEvolution;
	Parms.ShouldAllowFavorite = ShouldAllowFavorite;
	Parms.IsTemporaryItem = IsTemporaryItem;
	Parms.bAllowRarityUpgrading = bAllowRarityUpgrading;
	Parms.QuantityOverride = QuantityOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectionScreen::SetAttemptingConversion(bool bIsAttemptingConversion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "SetAttemptingConversion");

	Params::FortItemInspectionScreen_SetAttemptingConversion Parms{};

	Parms.bIsAttemptingConversion = bIsAttemptingConversion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectionScreen::SetInspectionMode(EFortItemInspectionMode NewInspectMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "SetInspectionMode");

	Params::FortItemInspectionScreen_SetInspectionMode Parms{};

	Parms.NewInspectMode = NewInspectMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectionScreen::SetItemToRepresent(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "SetItemToRepresent");

	Params::FortItemInspectionScreen_SetItemToRepresent Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortItemInspectionScreen::DoesItemHaveLegacyAlterations() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "DoesItemHaveLegacyAlterations");

	Params::FortItemInspectionScreen_DoesItemHaveLegacyAlterations Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortItemInspectionScreen::GetItemQuantityOverride() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetItemQuantityOverride");

	Params::FortItemInspectionScreen_GetItemQuantityOverride Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortItemInspectionScreen::GetRefundDescriptionText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetRefundDescriptionText");

	Params::FortItemInspectionScreen_GetRefundDescriptionText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortAccountItem* UFortItemInspectionScreen::GetRefundResultItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "GetRefundResultItem");

	Params::FortItemInspectionScreen_GetRefundResultItem Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortItemInspectionScreen::IsItemSlottedInCollectionBook(const class UFortItem* Item) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectionScreen", "IsItemSlottedInCollectionBook");

	Params::FortItemInspectionScreen_IsItemSlottedInCollectionBook Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortItemInspectCycleWidget::OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "OnItemCycled");

	Params::FortItemInspectCycleWidget_OnItemCycled Parms{};

	Parms.OldItem = OldItem;
	Parms.NewItem = NewItem;
	Parms.OffsetFromPreviousItem = OffsetFromPreviousItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortItemInspectCycleWidget::SelectItemWithOffset(int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SelectItemWithOffset");

	Params::FortItemInspectCycleWidget_SelectItemWithOffset Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectCycleWidget::SelectNextItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SelectNextItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectCycleWidget::SelectPreviousItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SelectPreviousItem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectCycleWidget::SetItemToRepresent(const class UFortItem* NewItemToRepresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SetItemToRepresent");

	Params::FortItemInspectCycleWidget_SetItemToRepresent Parms{};

	Parms.NewItemToRepresent = NewItemToRepresent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectCycleWidget::SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SetOwningItemInspectScreen");

	Params::FortItemInspectCycleWidget_SetOwningItemInspectScreen Parms{};

	Parms.ItemInspect = ItemInspect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortItemInspectCycleWidget::SetupActionHandlers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "SetupActionHandlers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UFortItem* UFortItemInspectCycleWidget::GetItemWithOffset_BP(int32 IndexOffset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortItemInspectCycleWidget", "GetItemWithOffset_BP");

	Params::FortItemInspectCycleWidget_GetItemWithOffset_BP Parms{};

	Parms.IndexOffset = IndexOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAlterationOption::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAlterationOption::Setup(struct FAlterationOption* InAlterationOption, EFortAlterationOptionType InAlterationOptionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "Setup");

	Params::FortAlterationOption_Setup Parms{};

	Parms.InAlterationOptionType = InAlterationOptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InAlterationOption != nullptr)
		*InAlterationOption = std::move(Parms.InAlterationOption);
}

class UFortAlterationItemDefinition* UFortAlterationOption::GetAlterationDefinition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "GetAlterationDefinition");

	Params::FortAlterationOption_GetAlterationDefinition Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortAlterationOptionType UFortAlterationOption::GetAlterationOptionType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "GetAlterationOptionType");

	Params::FortAlterationOption_GetAlterationOptionType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAlterationOption::GetCurrentPipCount(float MaxPipCount) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "GetCurrentPipCount");

	Params::FortAlterationOption_GetCurrentPipCount Parms{};

	Parms.MaxPipCount = MaxPipCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortAlterationOption::GetNextPipCount(float MaxPipCount) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "GetNextPipCount");

	Params::FortAlterationOption_GetNextPipCount Parms{};

	Parms.MaxPipCount = MaxPipCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FFortItemQuantityPair> UFortAlterationOption::GetRequiredIngredients() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOption", "GetRequiredIngredients");

	Params::FortAlterationOption_GetRequiredIngredients Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortAlterationOptionsBase::HandleAlterationsOptionHovered(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "HandleAlterationsOptionHovered");

	Params::FortAlterationOptionsBase_HandleAlterationsOptionHovered Parms{};

	Parms.AlterationOptionButton = AlterationOptionButton;
	Parms.GroupIndex = GroupIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAlterationOptionsBase::HandleAlterationsOptionSelected(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "HandleAlterationsOptionSelected");

	Params::FortAlterationOptionsBase_HandleAlterationsOptionSelected Parms{};

	Parms.AlterationOptionButton = AlterationOptionButton;
	Parms.GroupIndex = GroupIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortAlterationOptionsBase::OnGenerateOption(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "OnGenerateOption");

	Params::FortAlterationOptionsBase_OnGenerateOption Parms{};

	Parms.OptionType = OptionType;
	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAlterationOptionsBase::OnItemChanged(bool bIntroAlterations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "OnItemChanged");

	Params::FortAlterationOptionsBase_OnItemChanged Parms{};

	Parms.bIntroAlterations = bIntroAlterations;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAlterationOptionsBase::ProcessAlterationOptions(bool bIntroAlterations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "ProcessAlterationOptions");

	Params::FortAlterationOptionsBase_ProcessAlterationOptions Parms{};

	Parms.bIntroAlterations = bIntroAlterations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortAlterationOptionsBase::DoAlterationOptionsExist(EFortAlterationOptionType OptionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "DoAlterationOptionsExist");

	Params::FortAlterationOptionsBase_DoAlterationOptionsExist Parms{};

	Parms.OptionType = OptionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortAlterationOptionsBase::IsValidAlterationSlot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAlterationOptionsBase", "IsValidAlterationSlot");

	Params::FortAlterationOptionsBase_IsValidAlterationSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortVoteArbitratorType UFortMissionActivationInfoSTW::GetArbitratorType(EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetArbitratorType");

	Params::FortMissionActivationInfoSTW_GetArbitratorType Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMissionActivationInfoSTW::GetVoteCounts(EFortVoteType VoteType, int32* OutYesVoteCount, int32* OutNoVoteCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetVoteCounts");

	Params::FortMissionActivationInfoSTW_GetVoteCounts Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutYesVoteCount != nullptr)
		*OutYesVoteCount = Parms.OutYesVoteCount;

	if (OutNoVoteCount != nullptr)
		*OutNoVoteCount = Parms.OutNoVoteCount;
}

TArray<struct FVoter> UFortMissionActivationInfoSTW::GetVoters(EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetVoters");

	Params::FortMissionActivationInfoSTW_GetVoters Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMissionActivationInfoSTW::HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<struct FVoter>& Voters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HandleGameplayVoteUpdated");

	Params::FortMissionActivationInfoSTW_HandleGameplayVoteUpdated Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteStatus = VoteStatus;
	Parms.VoteResult = VoteResult;
	Parms.Voters = std::move(Voters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMissionActivationInfoSTW::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HandleTeamMemberAdded");

	Params::FortMissionActivationInfoSTW_HandleTeamMemberAdded Parms{};

	Parms.NewInfo = std::move(NewInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMissionActivationInfoSTW::HandleTeamMemberRemoved(int32 RemovedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HandleTeamMemberRemoved");

	Params::FortMissionActivationInfoSTW_HandleTeamMemberRemoved Parms{};

	Parms.RemovedIndex = RemovedIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortMissionActivationInfoSTW::HasPlayerVoted(EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "HasPlayerVoted");

	Params::FortMissionActivationInfoSTW_HasPlayerVoted Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMissionActivationInfoSTW::RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "RequestVote");

	Params::FortMissionActivationInfoSTW_RequestVote Parms{};

	Parms.VoteType = VoteType;
	Parms.VoteDuration = VoteDuration;
	Parms.FailedVoteLockOutDuration = FailedVoteLockOutDuration;
	Parms.ArbitratorType = ArbitratorType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMissionActivationInfoSTW::SubmitVote(EFortVoteType VoteType, bool bApprove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "SubmitVote");

	Params::FortMissionActivationInfoSTW_SubmitVote Parms{};

	Parms.VoteType = VoteType;
	Parms.bApprove = bApprove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortMissionActivationInfoSTW::CanRequestVote(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "CanRequestVote");

	Params::FortMissionActivationInfoSTW_CanRequestVote Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMissionActivationInfoSTW::DoesPrimaryMissionContainTags(const struct FGameplayTagContainer& Tags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "DoesPrimaryMissionContainTags");

	Params::FortMissionActivationInfoSTW_DoesPrimaryMissionContainTags Parms{};

	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortMissionActivationInfoSTW::GetAvailableBluGloCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetAvailableBluGloCount");

	Params::FortMissionActivationInfoSTW_GetAvailableBluGloCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMissionActivationInfoSTW::GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* DeltaRewards) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetDeltaRewards");

	Params::FortMissionActivationInfoSTW_GetDeltaRewards Parms{};

	Parms.BaseDifficultyIncreaseTier = BaseDifficultyIncreaseTier;
	Parms.ComparedDifficultyIncreaseTier = ComparedDifficultyIncreaseTier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (DeltaRewards != nullptr)
		*DeltaRewards = std::move(Parms.DeltaRewards);
}

int32 UFortMissionActivationInfoSTW::GetIncreaseDifficultyBluGloRequirement() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetIncreaseDifficultyBluGloRequirement");

	Params::FortMissionActivationInfoSTW_GetIncreaseDifficultyBluGloRequirement Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FUniqueNetIdRepl UFortMissionActivationInfoSTW::GetInstigatorId(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetInstigatorId");

	Params::FortMissionActivationInfoSTW_GetInstigatorId Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortMissionActivationInfoSTW::GetLockoutTimeRemaining(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetLockoutTimeRemaining");

	Params::FortMissionActivationInfoSTW_GetLockoutTimeRemaining Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortMissionActivationInfoSTW::GetMissionObjectiveTimeRemaining() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetMissionObjectiveTimeRemaining");

	Params::FortMissionActivationInfoSTW_GetMissionObjectiveTimeRemaining Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortVoteType UFortMissionActivationInfoSTW::GetMissionVoteType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetMissionVoteType");

	Params::FortMissionActivationInfoSTW_GetMissionVoteType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortMission* UFortMissionActivationInfoSTW::GetPrimaryMission() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetPrimaryMission");

	Params::FortMissionActivationInfoSTW_GetPrimaryMission Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortMissionInfo* UFortMissionActivationInfoSTW::GetPrimaryMissionInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetPrimaryMissionInfo");

	Params::FortMissionActivationInfoSTW_GetPrimaryMissionInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortMissionActivationInfoSTW::GetStartObjectiveBluGloRequirement() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetStartObjectiveBluGloRequirement");

	Params::FortMissionActivationInfoSTW_GetStartObjectiveBluGloRequirement Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortMissionActivationInfoSTW::GetVoteTimeRemaining(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "GetVoteTimeRemaining");

	Params::FortMissionActivationInfoSTW_GetVoteTimeRemaining Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMissionActivationInfoSTW::IsAnyVoteActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsAnyVoteActive");

	Params::FortMissionActivationInfoSTW_IsAnyVoteActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMissionActivationInfoSTW::IsPlayerVoteInstigator(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsPlayerVoteInstigator");

	Params::FortMissionActivationInfoSTW_IsPlayerVoteInstigator Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMissionActivationInfoSTW::IsVoteActive(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsVoteActive");

	Params::FortMissionActivationInfoSTW_IsVoteActive Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortMissionActivationInfoSTW::IsVoteLocked(EFortVoteType VoteType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "IsVoteLocked");

	Params::FortMissionActivationInfoSTW_IsVoteLocked Parms{};

	Parms.VoteType = VoteType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortMissionActivationInfoSTW::TimeSecondsToText(float InSeconds) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationInfoSTW", "TimeSecondsToText");

	Params::FortMissionActivationInfoSTW_TimeSecondsToText Parms{};

	Parms.InSeconds = InSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortMissionActivationWidgetSTWPanel::InfoObjectUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "InfoObjectUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortMissionActivationWidgetSTWPanel::OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnActiveVoteChangedBP");

	Params::FortMissionActivationWidgetSTWPanel_OnActiveVoteChangedBP Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsVoteActive = bIsVoteActive;
	Parms.VoteResult = VoteResult;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTWPanel::OnMultiplayerChangedBP(bool bIsMultiplayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnMultiplayerChangedBP");

	Params::FortMissionActivationWidgetSTWPanel_OnMultiplayerChangedBP Parms{};

	Parms.bIsMultiplayer = bIsMultiplayer;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTWPanel::OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnVoteLockoutChangedBP");

	Params::FortMissionActivationWidgetSTWPanel_OnVoteLockoutChangedBP Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTWPanel::OnVoteUpdatedBP(EFortVoteType VoteType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "OnVoteUpdatedBP");

	Params::FortMissionActivationWidgetSTWPanel_OnVoteUpdatedBP Parms{};

	Parms.VoteType = VoteType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTWPanel::SetInfoObject(class UFortMissionActivationInfoSTW* NewInfoObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTWPanel", "SetInfoObject");

	Params::FortMissionActivationWidgetSTWPanel_SetInfoObject Parms{};

	Parms.NewInfoObject = NewInfoObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortMissionActivationWidgetSTW::OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnActiveVoteChangedBP");

	Params::FortMissionActivationWidgetSTW_OnActiveVoteChangedBP Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsVoteActive = bIsVoteActive;
	Parms.VoteResult = VoteResult;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTW::OnMultiplayerChangedBP(bool bIsMultiplayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnMultiplayerChangedBP");

	Params::FortMissionActivationWidgetSTW_OnMultiplayerChangedBP Parms{};

	Parms.bIsMultiplayer = bIsMultiplayer;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTW::OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnStateUpdated");

	Params::FortMissionActivationWidgetSTW_OnStateUpdated Parms{};

	Parms.ActiveState = ActiveState;
	Parms.PreviousState = PreviousState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTW::OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "OnVoteLockoutChangedBP");

	Params::FortMissionActivationWidgetSTW_OnVoteLockoutChangedBP Parms{};

	Parms.VoteType = VoteType;
	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortMissionActivationWidgetSTW::RequestDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "RequestDefaultState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMissionActivationWidgetSTW::RequestDifficultyIncreaseState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "RequestDifficultyIncreaseState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortMissionActivationWidgetSTW::RequestStartObjectiveState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "RequestStartObjectiveState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

EFortMissionActivationWidgetSTWState UFortMissionActivationWidgetSTW::GetCurrentState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMissionActivationWidgetSTW", "GetCurrentState");

	Params::FortMissionActivationWidgetSTW_GetCurrentState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortOutpostScreen::SetInputReflectorBoxVisibility(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortOutpostScreen", "SetInputReflectorBoxVisibility");

	Params::FortOutpostScreen_SetInputReflectorBoxVisibility Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortJournalQuestDetails::CanGotoQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "CanGotoQuest");

	Params::FortJournalQuestDetails_CanGotoQuest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortJournalQuestDetails::CanPartyLeaderPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "CanPartyLeaderPlayQuest");

	Params::FortJournalQuestDetails_CanPartyLeaderPlayQuest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortJournalQuestDetails::CanPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "CanPlayQuest");

	Params::FortJournalQuestDetails_CanPlayQuest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortTheaterMapTileType UFortJournalQuestDetails::GetActiveMissionTileType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetActiveMissionTileType");

	Params::FortJournalQuestDetails_GetActiveMissionTileType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortJournalQuestDetails::GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetFutureObjectives");

	Params::FortJournalQuestDetails_GetFutureObjectives Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (FutureObjectives != nullptr)
		*FutureObjectives = std::move(Parms.FutureObjectives);
}

void UFortJournalQuestDetails::GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetRewards");

	Params::FortJournalQuestDetails_GetRewards Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutRewards != nullptr)
		*OutRewards = std::move(Parms.OutRewards);

	if (OutSelectableRewards != nullptr)
		*OutSelectableRewards = std::move(Parms.OutSelectableRewards);
}

void UFortJournalQuestDetails::GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "GetVisibleObjectives");

	Params::FortJournalQuestDetails_GetVisibleObjectives Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (VisibleObjectives != nullptr)
		*VisibleObjectives = std::move(Parms.VisibleObjectives);
}

void UFortJournalQuestDetails::HandleCurrentQuestChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "HandleCurrentQuestChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortJournalQuestDetails::OnEndSpokenDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "OnEndSpokenDialog");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortJournalQuestDetails::RegisterEndSpokenDialogEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "RegisterEndSpokenDialogEvent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortJournalQuestDetails::SetCurrentQuest(class UFortQuestItem* InCurrentQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestDetails", "SetCurrentQuest");

	Params::FortJournalQuestDetails_SetCurrentQuest Parms{};

	Parms.InCurrentQuest = InCurrentQuest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortJournalQuestProgressBar::GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortJournalQuestProgressBar", "GetProgressDetails");

	Params::FortJournalQuestProgressBar_GetProgressDetails Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNumerator != nullptr)
		*OutNumerator = std::move(Parms.OutNumerator);

	if (OutDenominator != nullptr)
		*OutDenominator = std::move(Parms.OutDenominator);

	if (OutFraction != nullptr)
		*OutFraction = Parms.OutFraction;
}

void UFortProgressArrowButton::OnArrowColorSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton", "OnArrowColorSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressArrowButton::OnIsInteractiveSet(bool bIsInteractive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton", "OnIsInteractiveSet");

	Params::FortProgressArrowButton_OnIsInteractiveSet Parms{};

	Parms.bIsInteractive = bIsInteractive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressArrowButton::OnShadowColorSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton", "OnShadowColorSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressArrowButton::UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton", "UpdateArrowColor");

	Params::FortProgressArrowButton_UpdateArrowColor Parms{};

	Parms.Color = std::move(Color);
	Parms.HoverColor_0 = std::move(HoverColor_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortProgressArrowButton_Legacy::OnArrowColorSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "OnArrowColorSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressArrowButton_Legacy::OnIsInteractiveSet(bool bIsInteractive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "OnIsInteractiveSet");

	Params::FortProgressArrowButton_Legacy_OnIsInteractiveSet Parms{};

	Parms.bIsInteractive = bIsInteractive;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortProgressArrowButton_Legacy::OnShadowColorSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "OnShadowColorSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortProgressArrowButton_Legacy::UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortProgressArrowButton_Legacy", "UpdateArrowColor");

	Params::FortProgressArrowButton_Legacy_UpdateArrowColor Parms{};

	Parms.Color = std::move(Color);
	Parms.HoverColor_0 = std::move(HoverColor_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestExpiresWidget::OnQuestExpirationUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestExpiresWidget", "OnQuestExpirationUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestExpiresWidget::SetData(class UFortQuestItem* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestExpiresWidget", "SetData");

	Params::FortQuestExpiresWidget_SetData Parms{};

	Parms.InItem = InItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapCosmeticListWidget::UpdateCosmeticListDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapCosmeticListWidget", "UpdateCosmeticListDisplay");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<class UFortItemDefinition*> UFortQuestMapCosmeticListWidget::GetDisplayItemDefs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapCosmeticListWidget", "GetDisplayItemDefs");

	Params::FortQuestMapCosmeticListWidget_GetDisplayItemDefs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapDetailsPanelBase::HandleQuestsUpdatedInternal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapDetailsPanelBase", "HandleQuestsUpdatedInternal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapDetailsPanelBase::SetQuestToDisplay(class UFortQuestItemDefinition* QuestDef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapDetailsPanelBase", "SetQuestToDisplay");

	Params::FortQuestMapDetailsPanelBase_SetQuestToDisplay Parms{};

	Parms.QuestDef = QuestDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapDetailsPanelBase::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapDetailsPanelBase", "SetScrollWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::DeactivateCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "DeactivateCallout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::OnActivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnActivatePlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout::OnDeactivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnDeactivatePlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout::OnEventIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnEventIndexChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout::OnPlayFadeAnimation(bool bIsFadeOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnPlayFadeAnimation");

	Params::FortQuestMapEventCallout_OnPlayFadeAnimation Parms{};

	Parms.bIsFadeOut = bIsFadeOut;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapEventCallout::OnResetCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "OnResetCallout");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "PlayFadeIn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "PlayFadeOut");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::ResetCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "ResetCallout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::SetIsExpanded(bool Expanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "SetIsExpanded");

	Params::FortQuestMapEventCallout_SetIsExpanded Parms{};

	Parms.Expanded = Expanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::SetIsFaded(bool Faded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "SetIsFaded");

	Params::FortQuestMapEventCallout_SetIsFaded Parms{};

	Parms.Faded = Faded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::UpdateActiveEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "UpdateActiveEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::UpdateCalloutData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "UpdateCalloutData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout::UpdateGoButtonBangState(bool bClear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "UpdateGoButtonBangState");

	Params::FortQuestMapEventCallout_UpdateGoButtonBangState Parms{};

	Parms.bClear = bClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UFortQuestMapEventCallout::GetEventCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetEventCount");

	Params::FortQuestMapEventCallout_GetEventCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapEventCallout::GetIsExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetIsExpanded");

	Params::FortQuestMapEventCallout_GetIsExpanded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapEventCallout::GetIsFaded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetIsFaded");

	Params::FortQuestMapEventCallout_GetIsFaded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortQuestItemDefinition* UFortQuestMapEventCallout::GetRequiredQuestForCurrentEvent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "GetRequiredQuestForCurrentEvent");

	Params::FortQuestMapEventCallout_GetRequiredQuestForCurrentEvent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapEventCallout::IsCurrentEventUnlocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout", "IsCurrentEventUnlocked");

	Params::FortQuestMapEventCallout_IsCurrentEventUnlocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapEventCallout_Legacy::DeactivateCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "DeactivateCallout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::OnActivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnActivatePlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout_Legacy::OnDeactivatePlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnDeactivatePlayAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout_Legacy::OnEventIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnEventIndexChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout_Legacy::OnPlayFadeAnimation(bool bIsFadeOut)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnPlayFadeAnimation");

	Params::FortQuestMapEventCallout_Legacy_OnPlayFadeAnimation Parms{};

	Parms.bIsFadeOut = bIsFadeOut;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapEventCallout_Legacy::OnResetCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "OnResetCallout");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapEventCallout_Legacy::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "PlayFadeIn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::PlayFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "PlayFadeOut");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::ResetCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "ResetCallout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::SetIsExpanded(bool Expanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "SetIsExpanded");

	Params::FortQuestMapEventCallout_Legacy_SetIsExpanded Parms{};

	Parms.Expanded = Expanded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::SetIsFaded(bool Faded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "SetIsFaded");

	Params::FortQuestMapEventCallout_Legacy_SetIsFaded Parms{};

	Parms.Faded = Faded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::UpdateActiveEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "UpdateActiveEvents");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::UpdateCalloutData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "UpdateCalloutData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapEventCallout_Legacy::UpdateGoButtonBangState(bool bClear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "UpdateGoButtonBangState");

	Params::FortQuestMapEventCallout_Legacy_UpdateGoButtonBangState Parms{};

	Parms.bClear = bClear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UFortQuestMapEventCallout_Legacy::GetEventCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetEventCount");

	Params::FortQuestMapEventCallout_Legacy_GetEventCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapEventCallout_Legacy::GetIsExpanded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetIsExpanded");

	Params::FortQuestMapEventCallout_Legacy_GetIsExpanded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapEventCallout_Legacy::GetIsFaded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetIsFaded");

	Params::FortQuestMapEventCallout_Legacy_GetIsFaded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortQuestItemDefinition* UFortQuestMapEventCallout_Legacy::GetRequiredQuestForCurrentEvent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "GetRequiredQuestForCurrentEvent");

	Params::FortQuestMapEventCallout_Legacy_GetRequiredQuestForCurrentEvent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapEventCallout_Legacy::IsCurrentEventUnlocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapEventCallout_Legacy", "IsCurrentEventUnlocked");

	Params::FortQuestMapEventCallout_Legacy_IsCurrentEventUnlocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapNodeLayout::HandleQuestButtonSelected(class UCommonButtonBase* SelectedQuestButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapNodeLayout", "HandleQuestButtonSelected");

	Params::FortQuestMapNodeLayout_HandleQuestButtonSelected Parms{};

	Parms.SelectedQuestButton = SelectedQuestButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapNodeLayout::HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapNodeLayout", "HandleQuestIndexSelectionModelIndexChanged");

	Params::FortQuestMapNodeLayout_HandleQuestIndexSelectionModelIndexChanged Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapNodeLayout_Legacy::HandleQuestButtonSelected(class UCommonButtonLegacy* SelectedQuestButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapNodeLayout_Legacy", "HandleQuestButtonSelected");

	Params::FortQuestMapNodeLayout_Legacy_HandleQuestButtonSelected Parms{};

	Parms.SelectedQuestButton = SelectedQuestButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapNodeLayout_Legacy::HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapNodeLayout_Legacy", "HandleQuestIndexSelectionModelIndexChanged");

	Params::FortQuestMapNodeLayout_Legacy_HandleQuestIndexSelectionModelIndexChanged Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapQuestTile::HandleQuestDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapQuestTile", "HandleQuestDataChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapQuestTile::HandleSelectedChange(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapQuestTile", "HandleSelectedChange");

	Params::FortQuestMapQuestTile_HandleSelectedChange Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapQuestTile::GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapQuestTile", "GetQuestNodeData");

	Params::FortQuestMapQuestTile_GetQuestNodeData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (QuestItemDefinition != nullptr)
		*QuestItemDefinition = Parms.QuestItemDefinition;

	if (NodeData != nullptr)
		*NodeData = std::move(Parms.NodeData);
}

void UFortQuestMapQuestTile_Legacy::HandleQuestDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapQuestTile_Legacy", "HandleQuestDataChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapQuestTile_Legacy::HandleSelectedChange(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapQuestTile_Legacy", "HandleSelectedChange");

	Params::FortQuestMapQuestTile_Legacy_HandleSelectedChange Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapQuestTile_Legacy::GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapQuestTile_Legacy", "GetQuestNodeData");

	Params::FortQuestMapQuestTile_Legacy_GetQuestNodeData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (QuestItemDefinition != nullptr)
		*QuestItemDefinition = Parms.QuestItemDefinition;

	if (NodeData != nullptr)
		*NodeData = std::move(Parms.NodeData);
}

void UFortQuestMapScreen::CheckForNewMainQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "CheckForNewMainQuest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::ClaimQuestRewards(const class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "ClaimQuestRewards");

	Params::FortQuestMapScreen_ClaimQuestRewards Parms{};

	Parms.QuestItem = QuestItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapScreen::HandleBackInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleBackInputAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::HandleEventCalloutDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleEventCalloutDataChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::HandleEventQuestMapActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleEventQuestMapActivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::HandleMapModeSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleMapModeSwitch");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleMapViewerNavigationRequest");

	Params::FortQuestMapScreen_HandleMapViewerNavigationRequest Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleQuestDetailsUpdated");

	Params::FortQuestMapScreen_HandleQuestDetailsUpdated Parms{};

	Parms.QuestDefinition = QuestDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapScreen::HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleQuestIndexSelectionModelChanged");

	Params::FortQuestMapScreen_HandleQuestIndexSelectionModelChanged Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::HandleQuestPageChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "HandleQuestPageChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::InitializeQuestData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "InitializeQuestData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortQuestMapScreen::IsEventFlagActive(const class FString& EventFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "IsEventFlagActive");

	Params::FortQuestMapScreen_IsEventFlagActive Parms{};

	Parms.EventFlag = std::move(EventFlag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapScreen::OnEventCalloutButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "OnEventCalloutButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::OnEventCalloutExpandChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "OnEventCalloutExpandChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::OnShowCurrentQuestInputActionValueChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "OnShowCurrentQuestInputActionValueChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen::SetBeyondCutoffQuest(bool bBeyondCutoff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "SetBeyondCutoffQuest");

	Params::FortQuestMapScreen_SetBeyondCutoffQuest Parms{};

	Parms.bBeyondCutoff = bBeyondCutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::SetIgnorePageNavigation(bool bIgnoreNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "SetIgnorePageNavigation");

	Params::FortQuestMapScreen_SetIgnorePageNavigation Parms{};

	Parms.bIgnoreNavigation = bIgnoreNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::SetQuestMapViewer(class UFortQuestMapViewer* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "SetQuestMapViewer");

	Params::FortQuestMapScreen_SetQuestMapViewer Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::ShowModalNews()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "ShowModalNews");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::ShowQuestLog(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "ShowQuestLog");

	Params::FortQuestMapScreen_ShowQuestLog Parms{};

	Parms.QuestItem = QuestItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::ToggleQuestMapState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "ToggleQuestMapState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::UpdateInputActionStates(bool bShowingCallout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "UpdateInputActionStates");

	Params::FortQuestMapScreen_UpdateInputActionStates Parms{};

	Parms.bShowingCallout = bShowingCallout;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen::UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "UpdateQuestMapMode");

	Params::FortQuestMapScreen_UpdateQuestMapMode Parms{};

	Parms.QuestMapMode = QuestMapMode;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortQuestMapScreen::GetBeyondCutoffQuest() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "GetBeyondCutoffQuest");

	Params::FortQuestMapScreen_GetBeyondCutoffQuest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFrontEndCamera UFortQuestMapScreen::GetCurrentPageCameraMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "GetCurrentPageCameraMode");

	Params::FortQuestMapScreen_GetCurrentPageCameraMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapScreen::IsBeyondQuest(class UFortQuestItemDefinition* QuestDef) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen", "IsBeyondQuest");

	Params::FortQuestMapScreen_IsBeyondQuest Parms{};

	Parms.QuestDef = QuestDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapScreen_Legacy::CheckForNewMainQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "CheckForNewMainQuest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::HandleEventCalloutDataChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleEventCalloutDataChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen_Legacy::HandleEventQuestMapActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleEventQuestMapActivate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::HandleMapModeSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleMapModeSwitch");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen_Legacy::HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleMapViewerNavigationRequest");

	Params::FortQuestMapScreen_Legacy_HandleMapViewerNavigationRequest Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleQuestDetailsUpdated");

	Params::FortQuestMapScreen_Legacy_HandleQuestDetailsUpdated Parms{};

	Parms.QuestDefinition = QuestDefinition;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapScreen_Legacy::HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleQuestIndexSelectionModelChanged");

	Params::FortQuestMapScreen_Legacy_HandleQuestIndexSelectionModelChanged Parms{};

	Parms.bUpdateButtonSelection = bUpdateButtonSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::HandleQuestPageChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleQuestPageChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen_Legacy::HandleRequestCurrentQuestNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "HandleRequestCurrentQuestNavigation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::InitializeQuestData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "InitializeQuestData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortQuestMapScreen_Legacy::IsEventFlagActive(const class FString& EventFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "IsEventFlagActive");

	Params::FortQuestMapScreen_Legacy_IsEventFlagActive Parms{};

	Parms.EventFlag = std::move(EventFlag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapScreen_Legacy::OnEventCalloutButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "OnEventCalloutButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen_Legacy::OnEventCalloutExpandChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "OnEventCalloutExpandChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapScreen_Legacy::SetBeyondCutoffQuest(bool bBeyondCutoff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetBeyondCutoffQuest");

	Params::FortQuestMapScreen_Legacy_SetBeyondCutoffQuest Parms{};

	Parms.bBeyondCutoff = bBeyondCutoff;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::SetFindCurrentActionVisibility(EInputActionState ActionVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetFindCurrentActionVisibility");

	Params::FortQuestMapScreen_Legacy_SetFindCurrentActionVisibility Parms{};

	Parms.ActionVisibility = ActionVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapScreen_Legacy::SetIgnorePageNavigation(bool bIgnoreNavigation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetIgnorePageNavigation");

	Params::FortQuestMapScreen_Legacy_SetIgnorePageNavigation Parms{};

	Parms.bIgnoreNavigation = bIgnoreNavigation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::SetQuestMapViewer(class UFortQuestMapViewer_Legacy* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "SetQuestMapViewer");

	Params::FortQuestMapScreen_Legacy_SetQuestMapViewer Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::ToggleQuestMapState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "ToggleQuestMapState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapScreen_Legacy::UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "UpdateQuestMapMode");

	Params::FortQuestMapScreen_Legacy_UpdateQuestMapMode Parms{};

	Parms.QuestMapMode = QuestMapMode;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortQuestMapScreen_Legacy::GetBeyondCutoffQuest() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "GetBeyondCutoffQuest");

	Params::FortQuestMapScreen_Legacy_GetBeyondCutoffQuest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFrontEndCamera UFortQuestMapScreen_Legacy::GetCurrentPageCameraMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "GetCurrentPageCameraMode");

	Params::FortQuestMapScreen_Legacy_GetCurrentPageCameraMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortQuestMapScreen_Legacy::IsBeyondQuest(class UFortQuestItemDefinition* QuestDef) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapScreen_Legacy", "IsBeyondQuest");

	Params::FortQuestMapScreen_Legacy_IsBeyondQuest Parms{};

	Parms.QuestDef = QuestDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestMapViewer_Legacy::HandleLayoutOutroAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "HandleLayoutOutroAnimationFinished");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestMapViewer_Legacy::OnPlayLayoutFadeInAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "OnPlayLayoutFadeInAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestMapViewer_Legacy::OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "OnPlayLayoutOutroAnimation");

	Params::FortQuestMapViewer_Legacy_OnPlayLayoutOutroAnimation Parms{};

	Parms.TravelDirection = TravelDirection;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapViewer_Legacy::OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "OnTryUpdateUserWidgetColor");

	Params::FortQuestMapViewer_Legacy_OnTryUpdateUserWidgetColor Parms{};

	Parms.Widget = Widget;
	Parms.OverrideColor = std::move(OverrideColor);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestMapViewer_Legacy::UpdateViewerData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestMapViewer_Legacy", "UpdateViewerData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestPlayButton::AttemptToPlayQuest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "AttemptToPlayQuest");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestPlayButton::HandleLobbyDisconnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "HandleLobbyDisconnected");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestPlayButton::HandleMatchmakingComplete(EMatchmakingCompleteResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "HandleMatchmakingComplete");

	Params::FortQuestPlayButton_HandleMatchmakingComplete Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestPlayButton::HandleMatchmakingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "HandleMatchmakingStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestPlayButton::HandlePlayerStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "HandlePlayerStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestPlayButton::OnContentMissing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "OnContentMissing");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortQuestPlayButton::CanPlayQuest() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestPlayButton", "CanPlayQuest");

	Params::FortQuestPlayButton_CanPlayQuest Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortQuestTreeItemWidget::HandleQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "HandleQuestsUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestTreeItemWidget::OnQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "OnQuestsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestTreeItemWidget::SetupAsCategory(class UFortQuestCategory* category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "SetupAsCategory");

	Params::FortQuestTreeItemWidget_SetupAsCategory Parms{};

	Parms.category = category;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestTreeItemWidget::SetupAsQuest(class UFortQuestItem* category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget", "SetupAsQuest");

	Params::FortQuestTreeItemWidget_SetupAsQuest Parms{};

	Parms.category = category;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestTreeItemWidget_Legacy::HandleQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "HandleQuestsUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestTreeItemWidget_Legacy::OnQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "OnQuestsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestTreeItemWidget_Legacy::SetupAsCategory(class UFortQuestCategory* category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "SetupAsCategory");

	Params::FortQuestTreeItemWidget_Legacy_SetupAsCategory Parms{};

	Parms.category = category;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestTreeItemWidget_Legacy::SetupAsQuest(class UFortQuestItem* category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestTreeItemWidget_Legacy", "SetupAsQuest");

	Params::FortQuestTreeItemWidget_Legacy_SetupAsQuest Parms{};

	Parms.category = category;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestScreen::AttemptToPlayQuest(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "AttemptToPlayQuest");

	Params::FortQuestScreen_AttemptToPlayQuest Parms{};

	Parms.QuestItem = QuestItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestScreen::BP_HandleAbandonQuestAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleAbandonQuestAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleBackAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandleClaimRewardAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleClaimRewardAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandlePinQuestAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandlePinQuestAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandlePlayQuestAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandlePlayQuestAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandleReplayIntroAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleReplayIntroAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandleReplayOutroAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleReplayOutroAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandleStopConversationAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleStopConversationAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_HandleUnpinQuestAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_HandleUnpinQuestAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::BP_SetInitialQuestToSelect(class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "BP_SetInitialQuestToSelect");

	Params::FortQuestScreen_BP_SetInitialQuestToSelect Parms{};

	Parms.QuestItem = QuestItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortQuestScreen::OnContentMissing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "OnContentMissing");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortQuestScreen::ProcessPendingSeenQuestItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "ProcessPendingSeenQuestItems");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortQuestScreen::SetDisableClaimRewardButton(bool bToDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "SetDisableClaimRewardButton");

	Params::FortQuestScreen_SetDisableClaimRewardButton Parms{};

	Parms.bToDisable = bToDisable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestScreen::SetInputActionStates(const class UFortQuestItem* QuestItem, const bool bIsQuestAudioPlaying, const bool bShouldShowPlayQuest, const bool bAreQuestItemsDifferent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "SetInputActionStates");

	Params::FortQuestScreen_SetInputActionStates Parms{};

	Parms.QuestItem = QuestItem;
	Parms.bIsQuestAudioPlaying = bIsQuestAudioPlaying;
	Parms.bShouldShowPlayQuest = bShouldShowPlayQuest;
	Parms.bAreQuestItemsDifferent = bAreQuestItemsDifferent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestScreen::TriggerClaimRewardEvent(const class UFortQuestItem* QuestItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen", "TriggerClaimRewardEvent");

	Params::FortQuestScreen_TriggerClaimRewardEvent Parms{};

	Parms.QuestItem = QuestItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortQuestScreen_Legacy::ProcessPendingSeenQuestItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestScreen_Legacy", "ProcessPendingSeenQuestItems");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UFortResearchMenuBase::GetClaimableResearchPointEstimate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "GetClaimableResearchPointEstimate");

	Params::FortResearchMenuBase_GetClaimableResearchPointEstimate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortResearchMenuBase::OnPurchaseResearchLevelCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "OnPurchaseResearchLevelCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortResearchMenuBase::OnPurchaseResearchLevelStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "OnPurchaseResearchLevelStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortResearchMenuBase::OnUseResearchRespecTokenComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "OnUseResearchRespecTokenComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortResearchMenuBase::RequestPurchaseResearchLevel(const class FString& StatId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "RequestPurchaseResearchLevel");

	Params::FortResearchMenuBase_RequestPurchaseResearchLevel Parms{};

	Parms.StatId = std::move(StatId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortResearchMenuBase::UseResearchRespecToken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "UseResearchRespecToken");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortResearchMenuBase::AreResearchRespecTokensAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "AreResearchRespecTokensAvailable");

	Params::FortResearchMenuBase_AreResearchRespecTokensAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchMenuBase::GetResearchRespecTokenCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchMenuBase", "GetResearchRespecTokenCount");

	Params::FortResearchMenuBase_GetResearchRespecTokenCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortResearchStatTileWidget::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "OnStatChanged");

	UObject::ProcessEvent(Func, nullptr);
}

int32 UFortResearchStatTileWidget::GetCostToIncreaseStat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCostToIncreaseStat");

	Params::FortResearchStatTileWidget_GetCostToIncreaseStat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetCurrentCombinedStatValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentCombinedStatValue");

	Params::FortResearchStatTileWidget_GetCurrentCombinedStatValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetCurrentPersonalStatValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentPersonalStatValue");

	Params::FortResearchStatTileWidget_GetCurrentPersonalStatValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetCurrentResearchLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentResearchLevel");

	Params::FortResearchStatTileWidget_GetCurrentResearchLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetCurrentTeamStatValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetCurrentTeamStatValue");

	Params::FortResearchStatTileWidget_GetCurrentTeamStatValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetNextCombinedStatValueDelta() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetNextCombinedStatValueDelta");

	Params::FortResearchStatTileWidget_GetNextCombinedStatValueDelta Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetNextPersonalStatValueDelta() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetNextPersonalStatValueDelta");

	Params::FortResearchStatTileWidget_GetNextPersonalStatValueDelta Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortResearchStatTileWidget::GetNextTeamStatValueDelta() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetNextTeamStatValueDelta");

	Params::FortResearchStatTileWidget_GetNextTeamStatValueDelta Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EFortStatType UFortResearchStatTileWidget::GetPersonalStatType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetPersonalStatType");

	Params::FortResearchStatTileWidget_GetPersonalStatType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class FString UFortResearchStatTileWidget::GetStatIdName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "GetStatIdName");

	Params::FortResearchStatTileWidget_GetStatIdName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortResearchStatTileWidget::IsAtMaxResearchLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortResearchStatTileWidget", "IsAtMaxResearchLevel");

	Params::FortResearchStatTileWidget_IsAtMaxResearchLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortDailyRewards::SetupDailyRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDailyRewards", "SetupDailyRewards");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortDailyRewards::TryClaimDailyRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDailyRewards", "TryClaimDailyRewards");

	Params::FortDailyRewards_TryClaimDailyRewards Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortDailyRewards::TryGetDailyRewardsData(struct FFortDailyRewardsData* OutDailyRewardsData, int32 ItemCardsPerSchedule, int32 MinEpicRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDailyRewards", "TryGetDailyRewardsData");

	Params::FortDailyRewards_TryGetDailyRewardsData Parms{};

	Parms.ItemCardsPerSchedule = ItemCardsPerSchedule;
	Parms.MinEpicRewards = MinEpicRewards;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDailyRewardsData != nullptr)
		*OutDailyRewardsData = std::move(Parms.OutDailyRewardsData);

	return Parms.ReturnValue;
}

bool UFortRewardNotificationData::GetIconBrush(struct FSlateBrush* IconBrush, EFortBrushSize BrushSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationData", "GetIconBrush");

	Params::FortRewardNotificationData_GetIconBrush Parms{};

	Parms.BrushSize = BrushSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (IconBrush != nullptr)
		*IconBrush = std::move(Parms.IconBrush);

	return Parms.ReturnValue;
}

void UFortRewardNotificationSubWidget::AddInputActionHandler(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommittedEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "AddInputActionHandler");

	Params::FortRewardNotificationSubWidget_AddInputActionHandler Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommittedEvent = CommittedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::Init(class UFortRewardNotificationWidget* MainWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "Init");

	Params::FortRewardNotificationSubWidget_Init Parms{};

	Parms.MainWidget = MainWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "InspectItem");

	Params::FortRewardNotificationSubWidget_InspectItem Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.QuantityOverride = QuantityOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::IsPrimaryActionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "IsPrimaryActionEnabled");

	Params::FortRewardNotificationSubWidget_IsPrimaryActionEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}

void UFortRewardNotificationSubWidget::IsPrimaryActionHidden(bool* bHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "IsPrimaryActionHidden");

	Params::FortRewardNotificationSubWidget_IsPrimaryActionHidden Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bHidden != nullptr)
		*bHidden = Parms.bHidden;
}

void UFortRewardNotificationSubWidget::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::OnNavigationDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationDown");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationRight");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::OnNavigationUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnNavigationUp");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::OnPrimaryAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "OnPrimaryAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::RemoveAllInputActionHandlers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "RemoveAllInputActionHandlers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "RemoveInputActionHandler");

	Params::FortRewardNotificationSubWidget_RemoveInputActionHandler Parms{};

	Parms.InputActionRow = std::move(InputActionRow);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, EInputActionState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetInputActionHandlerState");

	Params::FortRewardNotificationSubWidget_SetInputActionHandlerState Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::SetPrimaryActionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetPrimaryActionEnabled");

	Params::FortRewardNotificationSubWidget_SetPrimaryActionEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::SetPrimaryActionHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetPrimaryActionHidden");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::SetPrimaryActionText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "SetPrimaryActionText");

	Params::FortRewardNotificationSubWidget_SetPrimaryActionText Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::TransitionIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionIn");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::TransitionInBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionInBegin");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationSubWidget::TransitionOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionOut");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationSubWidget::TransitionOutBegin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationSubWidget", "TransitionOutBegin");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardConversationWidget::GetDataFromSentence(const struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardConversationWidget", "GetDataFromSentence");

	Params::FortRewardConversationWidget_GetDataFromSentence Parms{};

	Parms.Sentence = std::move(Sentence);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (TalkingHeadTexture != nullptr)
		*TalkingHeadTexture = Parms.TalkingHeadTexture;
}

bool UFortRewardConversationWidget::IsValidConversation(const class UFortConversation* Conversation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardConversationWidget", "IsValidConversation");

	Params::FortRewardConversationWidget_IsValidConversation Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortRewardExpeditionWidget::CollectExpedition(class UFortExpeditionItem* Expedition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardExpeditionWidget", "CollectExpedition");

	Params::FortRewardExpeditionWidget_CollectExpedition Parms{};

	Parms.Expedition = Expedition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardExpeditionWidget::OnCollectExpeditionCompleted(const class UFortExpeditionItem* Expedition, bool bSucceeded, const TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardExpeditionWidget", "OnCollectExpeditionCompleted");

	Params::FortRewardExpeditionWidget_OnCollectExpeditionCompleted Parms{};

	Parms.Expedition = Expedition;
	Parms.bSucceeded = bSucceeded;
	Parms.Rewards = std::move(Rewards);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNewQuestWidget::GetDataFromSentence(const struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNewQuestWidget", "GetDataFromSentence");

	Params::FortRewardNewQuestWidget_GetDataFromSentence Parms{};

	Parms.Sentence = std::move(Sentence);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (TalkingHeadTexture != nullptr)
		*TalkingHeadTexture = Parms.TalkingHeadTexture;
}

bool UFortRewardNewQuestWidget::IsValidConversation(const class UFortConversation* Conversation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNewQuestWidget", "IsValidConversation");

	Params::FortRewardNewQuestWidget_IsValidConversation Parms{};

	Parms.Conversation = Conversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortRewardNotificationWidget::AddCollectionBookData(const struct FFortCollectionBookRewards& CollectionBookRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddCollectionBookData");

	Params::FortRewardNotificationWidget_AddCollectionBookData Parms{};

	Parms.CollectionBookRewards = std::move(CollectionBookRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddDifficultyIncreaseRewardData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddDifficultyIncreaseRewardData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddEpicQuestData(class UFortQuestItem* Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddEpicQuestData");

	Params::FortRewardNotificationWidget_AddEpicQuestData Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddExpeditionData(class UFortExpeditionItem* ExpeditionItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddExpeditionData");

	Params::FortRewardNotificationWidget_AddExpeditionData Parms{};

	Parms.ExpeditionItem = ExpeditionItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddGiftBoxData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddGiftBoxData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddItemCacheRewardData(class UFortItem* ItemCache)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddItemCacheRewardData");

	Params::FortRewardNotificationWidget_AddItemCacheRewardData Parms{};

	Parms.ItemCache = ItemCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddMissionAlertData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddMissionAlertData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddMissionData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddMissionData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddPhoenixLevelUpRewardData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddPhoenixLevelUpRewardData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::AddQuestData(class UFortQuestItem* Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "AddQuestData");

	Params::FortRewardNotificationWidget_AddQuestData Parms{};

	Parms.Quest = Quest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::BeginCloseRewardsScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "BeginCloseRewardsScreen");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnCollectionBookRewardClaimed(const struct FFortCollectionBookRewards& RewardClaimed, bool bSuccess, const TArray<struct FFortItemInstanceQuantityPair>& ActualRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnCollectionBookRewardClaimed");

	Params::FortRewardNotificationWidget_HandleOnCollectionBookRewardClaimed Parms{};

	Parms.RewardClaimed = std::move(RewardClaimed);
	Parms.bSuccess = bSuccess;
	Parms.ActualRewards = std::move(ActualRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnDifficultyIncreaseRewardsClaimed(const TArray<struct FFortItemInstanceQuantityPair>& DifficultyRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnDifficultyIncreaseRewardsClaimed");

	Params::FortRewardNotificationWidget_HandleOnDifficultyIncreaseRewardsClaimed Parms{};

	Parms.DifficultyRewards = std::move(DifficultyRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnDifficultyIncreaseRewardsClaimFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnDifficultyIncreaseRewardsClaimFailed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnItemCacheRewardsClaimed(const TArray<struct FFortItemInstanceQuantityPair>& ClaimedRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnItemCacheRewardsClaimed");

	Params::FortRewardNotificationWidget_HandleOnItemCacheRewardsClaimed Parms{};

	Parms.ClaimedRewards = std::move(ClaimedRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnItemCacheRewardsClaimFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnItemCacheRewardsClaimFailed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnMissionAlertRewardsOpened(const TArray<struct FFortItemInstanceQuantityPair>& AlertRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnMissionAlertRewardsOpened");

	Params::FortRewardNotificationWidget_HandleOnMissionAlertRewardsOpened Parms{};

	Parms.AlertRewards = std::move(AlertRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnMissionRewardsOpened(const TArray<struct FFortItemInstanceQuantityPair>& MissionRewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnMissionRewardsOpened");

	Params::FortRewardNotificationWidget_HandleOnMissionRewardsOpened Parms{};

	Parms.MissionRewards = std::move(MissionRewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnMissionRewardsOpenFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnMissionRewardsOpenFailed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnNoQuestRewardsToClaim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnNoQuestRewardsToClaim");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HandleOnQuestRewardClaimed(const class UFortQuestItem* Quest, const TArray<struct FFortItemInstanceQuantityPair>& Rewards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HandleOnQuestRewardClaimed");

	Params::FortRewardNotificationWidget_HandleOnQuestRewardClaimed Parms{};

	Parms.Quest = Quest;
	Parms.Rewards = std::move(Rewards);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::HideMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "HideMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "InspectItem");

	Params::FortRewardNotificationWidget_InspectItem Parms{};

	Parms.ItemToInspect = ItemToInspect;
	Parms.QuantityOverride = QuantityOverride;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::IsPrimaryActionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "IsPrimaryActionEnabled");

	Params::FortRewardNotificationWidget_IsPrimaryActionEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}

void UFortRewardNotificationWidget::IsPrimaryActionHidden(bool* bHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "IsPrimaryActionHidden");

	Params::FortRewardNotificationWidget_IsPrimaryActionHidden Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bHidden != nullptr)
		*bHidden = Parms.bHidden;
}

void UFortRewardNotificationWidget::MarkDefaultItemsForMulch(const TArray<struct FFortItemInstanceQuantityPair>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "MarkDefaultItemsForMulch");

	Params::FortRewardNotificationWidget_MarkDefaultItemsForMulch Parms{};

	Parms.ItemList = std::move(ItemList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::NotifyPanelActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "NotifyPanelActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::NotifyPanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "NotifyPanelDeactivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::OnMulchCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnMulchCompleted");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnNavigationDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationDown");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationRight");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnNavigationUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnNavigationUp");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnPopulateChoiceRewards(const TArray<struct FFortItemInstanceQuantityPair>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateChoiceRewards");

	Params::FortRewardNotificationWidget_OnPopulateChoiceRewards Parms{};

	Parms.ItemList = std::move(ItemList);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::OnPopulateExpeditionReward(const class UFortRewardExpeditionData* ExpeditionReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateExpeditionReward");

	Params::FortRewardNotificationWidget_OnPopulateExpeditionReward Parms{};

	Parms.ExpeditionReward = ExpeditionReward;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::OnPopulateGiftBoxReward(const class UFortRewardGiftBoxData* GiftBoxReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateGiftBoxReward");

	Params::FortRewardNotificationWidget_OnPopulateGiftBoxReward Parms{};

	Parms.GiftBoxReward = GiftBoxReward;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::OnPopulateNewQuestReward(const class UFortRewardEpicQuestData* QuestReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPopulateNewQuestReward");

	Params::FortRewardNotificationWidget_OnPopulateNewQuestReward Parms{};

	Parms.QuestReward = QuestReward;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::OnPrimaryActionDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnPrimaryActionEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnPrimaryActionHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionHidden");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnPrimaryActionTextChanged(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnPrimaryActionTextChanged");

	Params::FortRewardNotificationWidget_OnPrimaryActionTextChanged Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::OnRewardsClaimed(const TArray<struct FFortItemInstanceQuantityPair>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnRewardsClaimed");

	Params::FortRewardNotificationWidget_OnRewardsClaimed Parms{};

	Parms.ItemList = std::move(ItemList);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRewardNotificationWidget::OnRewardsClaimFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnRewardsClaimFailed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::OnRewardsScreenClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "OnRewardsScreenClosed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRewardNotificationWidget::PopulateReward(const class UFortRewardNotificationData* Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "PopulateReward");

	Params::FortRewardNotificationWidget_PopulateReward Parms{};

	Parms.Reward = Reward;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::ResetAllRewardData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "ResetAllRewardData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::SetPrimaryActionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "SetPrimaryActionEnabled");

	Params::FortRewardNotificationWidget_SetPrimaryActionEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::SetPrimaryActionHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "SetPrimaryActionHidden");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::SetPrimaryActionText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "SetPrimaryActionText");

	Params::FortRewardNotificationWidget_SetPrimaryActionText Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortRewardNotificationWidget::ShowMulchConfirmationModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRewardNotificationWidget", "ShowMulchConfirmationModal");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSelectorButton::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSelectorButton", "HandleDifferentSquadSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSelectorButton::HandleSquadChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSelectorButton", "HandleSquadChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSelectorButton::SetIdOfSquadToManageBP(const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSelectorButton", "SetIdOfSquadToManageBP");

	Params::FortSquadSelectorButton_SetIdOfSquadToManageBP Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UFortSquadSelectorButton::GetIdOfSquadToManageBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSelectorButton", "GetIdOfSquadToManageBP");

	Params::FortSquadSelectorButton_GetIdOfSquadToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSelectorButton::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSelectorButton", "TryGetStaticSquadDataBP");

	Params::FortSquadSelectorButton_TryGetStaticSquadDataBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = std::move(Parms.OutSquadData);

	return Parms.ReturnValue;
}

bool UFortDefenderSquadSelectorButton::TryGetPowerLevel(int32* OutPowerLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDefenderSquadSelectorButton", "TryGetPowerLevel");

	Params::FortDefenderSquadSelectorButton_TryGetPowerLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPowerLevel != nullptr)
		*OutPowerLevel = Parms.OutPowerLevel;

	return Parms.ReturnValue;
}

bool UFortDefenderSquadSelectorButton::TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDefenderSquadSelectorButton", "TryGetTheaterUniqueId");

	Params::FortDefenderSquadSelectorButton_TryGetTheaterUniqueId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutTheaterUniqueId != nullptr)
		*OutTheaterUniqueId = std::move(Parms.OutTheaterUniqueId);

	if (OutIsUnlocked != nullptr)
		*OutIsUnlocked = Parms.OutIsUnlocked;

	return Parms.ReturnValue;
}

void UFortSquadManagementScreenBase::ClearSquad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "ClearSquad");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleBackInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleBackInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleClosePickerInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleClosePickerInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleCyclePickerSortInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleCyclePickerSortInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleDifferentSquadSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadManagementScreenBase::HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleDifferentSquadSlotSelected");

	Params::FortSquadManagementScreenBase_HandleDifferentSquadSlotSelected Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleInspectInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleInspectInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleInventoryInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleInventoryInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleManageInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleManageInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleNextSquadInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleNextSquadInputAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadManagementScreenBase::HandleOpenSquadSlot(const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleOpenSquadSlot");

	Params::FortSquadManagementScreenBase_HandleOpenSquadSlot Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandlePickerSelectionChanged(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandlePickerSelectionChanged");

	Params::FortSquadManagementScreenBase_HandlePickerSelectionChanged Parms{};

	Parms.SelectedItem = SelectedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandlePickerSelectionCommitted(class UFortItem* CommittedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandlePickerSelectionCommitted");

	Params::FortSquadManagementScreenBase_HandlePickerSelectionCommitted Parms{};

	Parms.CommittedItem = CommittedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandlePreviousSquadInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandlePreviousSquadInputAction");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadManagementScreenBase::HandleSelectPickerSlotInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSelectPickerSlotInputAction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleShouldAutoSlotSurvivorSquadsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleShouldAutoSlotSurvivorSquadsChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::HandleSquadSlotPickerHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSquadSlotPickerHidden");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadManagementScreenBase::HandleSquadSlotPickerShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSquadSlotPickerShown");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadManagementScreenBase::HandleSquadStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleSquadStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadManagementScreenBase::HandleViewInAll(const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "HandleViewInAll");

	Params::FortSquadManagementScreenBase_HandleViewInAll Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::NavigateToSquadSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "NavigateToSquadSlot");

	Params::FortSquadManagementScreenBase_NavigateToSquadSlot Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::SelectNextSquad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SelectNextSquad");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::SelectPreviousSquad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SelectPreviousSquad");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::SelectSquadWithOffset(int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SelectSquadWithOffset");

	Params::FortSquadManagementScreenBase_SelectSquadWithOffset Parms{};

	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::SetIdOfSquadToManageBP(const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SetIdOfSquadToManageBP");

	Params::FortSquadManagementScreenBase_SetIdOfSquadToManageBP Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::SetupInputHandlers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "SetupInputHandlers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadManagementScreenBase::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "ShowWarningReadOnlyWIFE");

	Params::FortSquadManagementScreenBase_ShowWarningReadOnlyWIFE Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}

class FName UFortSquadManagementScreenBase::GetIdOfSquadToManageBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "GetIdOfSquadToManageBP");

	Params::FortSquadManagementScreenBase_GetIdOfSquadToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortSquadManagementScreenBase::GetNumUnlockedSquads() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "GetNumUnlockedSquads");

	Params::FortSquadManagementScreenBase_GetNumUnlockedSquads Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadManagementScreenBase::IsScreenWIFE() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "IsScreenWIFE");

	Params::FortSquadManagementScreenBase_IsScreenWIFE Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadManagementScreenBase::TryGetAttributeValueFromSquad(float* OutValue, const struct FGameplayAttribute& Attribute) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetAttributeValueFromSquad");

	Params::FortSquadManagementScreenBase_TryGetAttributeValueFromSquad Parms{};

	Parms.Attribute = std::move(Attribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutValue != nullptr)
		*OutValue = Parms.OutValue;

	return Parms.ReturnValue;
}

bool UFortSquadManagementScreenBase::TryGetSquadMainAttribute(struct FGameplayAttribute* OutGameplayAttribute) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetSquadMainAttribute");

	Params::FortSquadManagementScreenBase_TryGetSquadMainAttribute Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGameplayAttribute != nullptr)
		*OutGameplayAttribute = std::move(Parms.OutGameplayAttribute);

	return Parms.ReturnValue;
}

bool UFortSquadManagementScreenBase::TryGetSquadTeamAttribute(struct FGameplayAttribute* OutGameplayAttribute) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetSquadTeamAttribute");

	Params::FortSquadManagementScreenBase_TryGetSquadTeamAttribute Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGameplayAttribute != nullptr)
		*OutGameplayAttribute = std::move(Parms.OutGameplayAttribute);

	return Parms.ReturnValue;
}

bool UFortSquadManagementScreenBase::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadManagementScreenBase", "TryGetStaticSquadDataBP");

	Params::FortSquadManagementScreenBase_TryGetStaticSquadDataBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = std::move(Parms.OutSquadData);

	return Parms.ReturnValue;
}

void UFortHeroSquadManagementScreen::PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortHeroSquadManagementScreen", "PlayFeedbackForSlottingPerson");

	Params::FortHeroSquadManagementScreen_PlayFeedbackForSlottingPerson Parms{};

	Parms.Character = Character;
	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadIcon::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadIcon", "HandleDifferentSquadSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadIcon::SetSquad(const class FName& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadIcon", "SetSquad");

	Params::FortSquadIcon_SetSquad Parms{};

	Parms.InName = InName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadLandingPageDefenderSquadDetails::HandleAddDefenderSquadMemberBP(const class FName& SquadId, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetails", "HandleAddDefenderSquadMemberBP");

	Params::FortSquadLandingPageDefenderSquadDetails_HandleAddDefenderSquadMemberBP Parms{};

	Parms.SquadId = SquadId;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadLandingPageDefenderSquadDetails::HandleDefenderSquadInfoSetBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetails", "HandleDefenderSquadInfoSetBP");

	Params::FortSquadLandingPageDefenderSquadDetails_HandleDefenderSquadInfoSetBP Parms{};

	Parms.DefenderSummaryInfo = std::move(DefenderSummaryInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadLandingPageDefenderSquadDetails::SetDefenderSquadInfo(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetails", "SetDefenderSquadInfo");

	Params::FortSquadLandingPageDefenderSquadDetails_SetDefenderSquadInfo Parms{};

	Parms.DefenderSummaryInfo = std::move(DefenderSummaryInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadLandingPageDefenderSquadDetailsLocked::SetDefenderSquadInfo(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSquadDetailsLocked", "SetDefenderSquadInfo");

	Params::FortSquadLandingPageDefenderSquadDetailsLocked_SetDefenderSquadInfo Parms{};

	Parms.DefenderSummaryInfo = std::move(DefenderSummaryInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadLandingPageDefenderSummary::HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSummary", "HandleAddDefenderSquadDetailsBP");

	Params::FortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP Parms{};

	Parms.DefenderSummaryInfo = std::move(DefenderSummaryInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadLandingPageDefenderSummary::HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSummary", "HandleAddLockedDefenderSquadDetailsBP");

	Params::FortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP Parms{};

	Parms.DefenderSummaryInfo = std::move(DefenderSummaryInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadLandingPageDefenderSummary::HandleClearDefenderSquadDetailsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageDefenderSummary", "HandleClearDefenderSquadDetailsBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadLandingPageSurvivorSummary::HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageSurvivorSummary", "HandleAddSetBonusSummaryLineItemBP");

	Params::FortSquadLandingPageSurvivorSummary_HandleAddSetBonusSummaryLineItemBP Parms{};

	Parms.AttributeModifierAccumulation = std::move(AttributeModifierAccumulation);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadLandingPageSurvivorSummary::HandleClearSetBonusSummaryLineItemsBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadLandingPageSurvivorSummary", "HandleClearSetBonusSummaryLineItemsBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotDetailsPanel::HandleDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "HandleDifferentSquadSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotDetailsPanel::HandleSquadSlotRestrictionFactorsChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "HandleSquadSlotRestrictionFactorsChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotDetailsPanel::HandleSquadSlotStateChangedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "HandleSquadSlotStateChangedBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotDetailsPanel::SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "SetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotDetailsPanel_SetIdOfSquadSlotToManageBP Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotDetailsPanel::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "SetScrollWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotDetailsPanel::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "GetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotDetailsPanel_GetIdOfSquadSlotToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;
}

class UFortItem* UFortSquadSlotDetailsPanel::GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "GetItemInSquadSlotBP");

	Params::FortSquadSlotDetailsPanel_GetItemInSquadSlotBP Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<EFortSquadSlottingRestrictionReason> UFortSquadSlotDetailsPanel::GetSlottingRestrictionReasons() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "GetSlottingRestrictionReasons");

	Params::FortSquadSlotDetailsPanel_GetSlottingRestrictionReasons Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotDetailsPanel::IsSquadSlotLockedBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "IsSquadSlotLockedBP");

	Params::FortSquadSlotDetailsPanel_IsSquadSlotLockedBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotDetailsPanel::TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotDetailsPanel", "TryGetItemToPreviewInSlot");

	Params::FortSquadSlotDetailsPanel_TryGetItemToPreviewInSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutItemToPreviewInSlot != nullptr)
		*OutItemToPreviewInSlot = Parms.OutItemToPreviewInSlot;

	return Parms.ReturnValue;
}

void UFortSquadSlotItemDetailElementWidget::HandlePostDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "HandlePostDifferentSquadSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotItemDetailElementWidget::SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "SetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotItemDetailElementWidget::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "GetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;
}

class UFortItem* UFortSquadSlotItemDetailElementWidget::GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "GetItemInSquadSlotBP");

	Params::FortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotItemDetailElementWidget::IsSquadSlotLockedBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailElementWidget", "IsSquadSlotLockedBP");

	Params::FortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSquadSlotItemDetailsHostPanel::SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "SetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotItemDetailsHostPanel::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "GetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;
}

class UFortItem* UFortSquadSlotItemDetailsHostPanel::GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "GetItemInSquadSlotBP");

	Params::FortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotItemDetailsHostPanel::IsSquadSlotLockedBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemDetailsHostPanel", "IsSquadSlotLockedBP");

	Params::FortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSquadSlotItemPicker::CycleSortType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "CycleSortType");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotItemPicker::SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "SetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotItemPicker::SetSortTypes(const struct FSquadSlotSortTypes& SquadSlotSortTypes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "SetSortTypes");

	Params::FortSquadSlotItemPicker_SetSortTypes Parms{};

	Parms.SquadSlotSortTypes = std::move(SquadSlotSortTypes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotItemPicker::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPicker", "GetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;
}

void UFortSquadSlotItemPickerTileButton::HandleItemSlottedToDifferentSquad(const struct FHomebaseSquadSlotId& SquadSlotId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPickerTileButton", "HandleItemSlottedToDifferentSquad");

	Params::FortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad Parms{};

	Parms.SquadSlotId = std::move(SquadSlotId);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadSlotItemPickerTileButton::HandleSlottingRestrictionReasonsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPickerTileButton", "HandleSlottingRestrictionReasonsChanged");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<EFortSquadSlottingRestrictionReason> UFortSquadSlotItemPickerTileButton::GetSlottingRestrictionReasons() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotItemPickerTileButton", "GetSlottingRestrictionReasons");

	Params::FortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortSquadSlotSelectorButton* UFortSquadSlotSelectorPopupMenu::GetHostButton() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorPopupMenu", "GetHostButton");

	Params::FortSquadSlotSelectorPopupMenu_GetHostButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotSelectorPopupMenu::IsScreenWIFE() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorPopupMenu", "IsScreenWIFE");

	Params::FortSquadSlotSelectorPopupMenu_IsScreenWIFE Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSquadSlotSurvivorTraitMatchesDetailWidget::HandleTraitValuesUpdatedBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSurvivorTraitMatchesDetailWidget", "HandleTraitValuesUpdatedBP");

	UObject::ProcessEvent(Func, nullptr);
}

class UUserWidget* UFortSquadSlotSelectorButton::GetPopupMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "GetPopupMenu");

	Params::FortSquadSlotSelectorButton_GetPopupMenu Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSquadSlotSelectorButton::HandlePostDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "HandlePostDifferentSquadSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotSelectorButton::HandlePreDifferentSquadSlotSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "HandlePreDifferentSquadSlotSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadSlotSelectorButton::OpenSquadSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "OpenSquadSlot");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotSelectorButton::SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "SetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotSelectorButton_SetIdOfSquadSlotToManageBP Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotSelectorButton::SquadSlotWidgetUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "SquadSlotWidgetUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotSelectorButton::ViewInAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "ViewInAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotSelectorButton::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "GetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotSelectorButton_GetIdOfSquadSlotToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;
}

bool UFortSquadSlotSelectorButton::GetInPreviewMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "GetInPreviewMode");

	Params::FortSquadSlotSelectorButton_GetInPreviewMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotSelectorButton::IsSquadSlotLockedBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotSelectorButton", "IsSquadSlotLockedBP");

	Params::FortSquadSlotSelectorButton_IsSquadSlotLockedBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortSquadSlotSelectorButton* UFortSquadSlotsView::CreateAndAddSquadSlotButton(const int32 SquadSlotIndex, const struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "CreateAndAddSquadSlotButton");

	Params::FortSquadSlotsView_CreateAndAddSquadSlotButton Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;
	Parms.SquadSlotDefinition = std::move(SquadSlotDefinition);

	UObject::ProcessEvent(Func, &Parms);

	if (OutSquadSlotButtonHost != nullptr)
		*OutSquadSlotButtonHost = Parms.OutSquadSlotButtonHost;

	return Parms.ReturnValue;
}

void UFortSquadSlotsView::HandleButtonClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleButtonClicked");

	Params::FortSquadSlotsView_HandleButtonClicked Parms{};

	Parms.CommittedButton = CommittedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::HandleButtonDoubleClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleButtonDoubleClicked");

	Params::FortSquadSlotsView_HandleButtonDoubleClicked Parms{};

	Parms.CommittedButton = CommittedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::HandleHoveredButtonChanged(class UCommonButtonLegacy* HoveredButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleHoveredButtonChanged");

	Params::FortSquadSlotsView_HandleHoveredButtonChanged Parms{};

	Parms.HoveredButton = HoveredButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::HandleRequestOpenSquadSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleRequestOpenSquadSlot");

	Params::FortSquadSlotsView_HandleRequestOpenSquadSlot Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::HandleRequestViewInAll(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleRequestViewInAll");

	Params::FortSquadSlotsView_HandleRequestViewInAll Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::HandleSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "HandleSelectedButtonChanged");

	Params::FortSquadSlotsView_HandleSelectedButtonChanged Parms{};

	Parms.SelectedButton = SelectedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::SelectSlot(int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "SelectSlot");

	Params::FortSquadSlotsView_SelectSlot Parms{};

	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::SetIdOfSquadToManageBP(const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "SetIdOfSquadToManageBP");

	Params::FortSquadSlotsView_SetIdOfSquadToManageBP Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::SetInPreviewMode(const bool bPreview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "SetInPreviewMode");

	Params::FortSquadSlotsView_SetInPreviewMode Parms{};

	Parms.bPreview = bPreview;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotsView::SetIsSelectionLocked(const bool ShouldSelectionBeLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "SetIsSelectionLocked");

	Params::FortSquadSlotsView_SetIsSelectionLocked Parms{};

	Parms.ShouldSelectionBeLocked = ShouldSelectionBeLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortSquadSlotsView::TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes* OutSlotSortTypes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "TryGetSelectedSquadSlotSortTypes");

	Params::FortSquadSlotsView_TryGetSelectedSquadSlotSortTypes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSlotSortTypes != nullptr)
		*OutSlotSortTypes = std::move(Parms.OutSlotSortTypes);

	return Parms.ReturnValue;
}

class FName UFortSquadSlotsView::GetIdOfSquadToManageBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "GetIdOfSquadToManageBP");

	Params::FortSquadSlotsView_GetIdOfSquadToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortSquadSlotsView::GetIndexOfSelectedSquadSlot() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "GetIndexOfSelectedSquadSlot");

	Params::FortSquadSlotsView_GetIndexOfSelectedSquadSlot Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotsView::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotsView", "TryGetStaticSquadDataBP");

	Params::FortSquadSlotsView_TryGetStaticSquadDataBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = std::move(Parms.OutSquadData);

	return Parms.ReturnValue;
}

void UFortSquadSlotWidget::SetCardSize(const EFortItemCardSize CardSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotWidget", "SetCardSize");

	Params::FortSquadSlotWidget_SetCardSize Parms{};

	Parms.CardSize = CardSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotWidget::SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotWidget", "SetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotWidget_SetIdOfSquadSlotToManageBP Parms{};

	Parms.SquadId = SquadId;
	Parms.SquadSlotIndex = SquadSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSquadSlotWidget::GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotWidget", "GetIdOfSquadSlotToManageBP");

	Params::FortSquadSlotWidget_GetIdOfSquadSlotToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	if (OutSquadSlotIndex != nullptr)
		*OutSquadSlotIndex = Parms.OutSquadSlotIndex;
}

class UFortItem* UFortSquadSlotWidget::GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotWidget", "GetItemInSquadSlotBP");

	Params::FortSquadSlotWidget_GetItemInSquadSlotBP Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSquadSlotWidget::IsSquadSlotLockedBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadSlotWidget", "IsSquadSlotLockedBP");

	Params::FortSquadSlotWidget_IsSquadSlotLockedBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSquadStatsWidgetBase::HandlePowerRatingChanged_BP(bool bHasTeamMebers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "HandlePowerRatingChanged_BP");

	Params::FortSquadStatsWidgetBase_HandlePowerRatingChanged_BP Parms{};

	Parms.bHasTeamMebers = bHasTeamMebers;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSquadStatsWidgetBase::HandleSquadSlottingPreviewStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "HandleSquadSlottingPreviewStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSquadStatsWidgetBase::RequestShowPreviewStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "RequestShowPreviewStats");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadStatsWidgetBase::RequestStatsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "RequestStatsUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FUniqueNetIdRepl UFortSquadStatsWidgetBase::GetLocalPlayerId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadStatsWidgetBase", "GetLocalPlayerId");

	Params::FortSquadStatsWidgetBase_GetLocalPlayerId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSquadStatValueWithIcon::HandleDifferentAttributeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadStatValueWithIcon", "HandleDifferentAttributeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

class UFortSquadSelectorButton* UFortSquadTypeLandingPageBase::CreateAndAddSquadButton(const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "CreateAndAddSquadButton");

	Params::FortSquadTypeLandingPageBase_CreateAndAddSquadButton Parms{};

	Parms.SquadId = SquadId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortSquadTypeLandingPageBase::HandleBackInputAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "HandleBackInputAction");

	Params::FortSquadTypeLandingPageBase_HandleBackInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UFortSquadTypeLandingPageBase::HandlePendingNavigationOp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "HandlePendingNavigationOp");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortSquadTypeLandingPageBase::ShowWarningReadOnlyWIFE(bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "ShowWarningReadOnlyWIFE");

	Params::FortSquadTypeLandingPageBase_ShowWarningReadOnlyWIFE Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortSquadTypeLandingPageBase::IsScreenWIFE() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSquadTypeLandingPageBase", "IsScreenWIFE");

	Params::FortSquadTypeLandingPageBase_IsScreenWIFE Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortStatIcon::HandleDifferentAttributeSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStatIcon", "HandleDifferentAttributeSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortStatIcon::SetAttribute(const struct FGameplayAttribute& InAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStatIcon", "SetAttribute");

	Params::FortStatIcon_SetAttribute Parms{};

	Parms.InAttribute = std::move(InAttribute);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSurvivorSquadManagementScreen::PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32 SlotIndex, const struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadManagementScreen", "PlayFeedbackForSlottingPerson");

	Params::FortSurvivorSquadManagementScreen_PlayFeedbackForSlottingPerson Parms{};

	Parms.Worker = Worker;
	Parms.SlotIndex = SlotIndex;
	Parms.FeedbackData = std::move(FeedbackData);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSurvivorSquadManagementScreen::ShowHelpDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadManagementScreen", "ShowHelpDialog");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSurvivorSquadManagementScreen::UpdateCycleButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadManagementScreen", "UpdateCycleButtons");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortSurvivorSquadSelectorButton::TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadSelectorButton", "TryGetPersonalityMatches");

	Params::FortSurvivorSquadSelectorButton_TryGetPersonalityMatches Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPersonalityMatches != nullptr)
		*OutPersonalityMatches = std::move(Parms.OutPersonalityMatches);

	return Parms.ReturnValue;
}

bool UFortSurvivorSquadSelectorButton::TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadSelectorButton", "TryGetSquadMembers");

	Params::FortSurvivorSquadSelectorButton_TryGetSquadMembers Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadMembers != nullptr)
		*OutSquadMembers = std::move(Parms.OutSquadMembers);

	return Parms.ReturnValue;
}

bool UFortSurvivorSquadSelectorButton::TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadSelectorButton", "TryGetSummaryStats");

	Params::FortSurvivorSquadSelectorButton_TryGetSummaryStats Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSummaryStats != nullptr)
		*OutSummaryStats = std::move(Parms.OutSummaryStats);

	return Parms.ReturnValue;
}

void UFortSurvivorSquadStatMatchBase::OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchBase", "OnStatMatchUpdated");

	Params::FortSurvivorSquadStatMatchBase_OnStatMatchUpdated Parms{};

	Parms.UpdatedMatch = std::move(UpdatedMatch);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSurvivorSquadStatMatchesBase::AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "AddStatMatch");

	Params::FortSurvivorSquadStatMatchesBase_AddStatMatch Parms{};

	Parms.SetBonus = SetBonus;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortSurvivorSquadStatMatchesBase::HandleDifferentSquadSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "HandleDifferentSquadSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortSurvivorSquadStatMatchesBase::SetIdOfSquadToManageBP(const class FName& SquadId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "SetIdOfSquadToManageBP");

	Params::FortSurvivorSquadStatMatchesBase_SetIdOfSquadToManageBP Parms{};

	Parms.SquadId = SquadId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSurvivorSquadStatMatchesBase::SetSummaryView(bool bInSummaryView)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "SetSummaryView");

	Params::FortSurvivorSquadStatMatchesBase_SetSummaryView Parms{};

	Parms.bInSummaryView = bInSummaryView;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UFortSurvivorSquadStatMatchesBase::GetIdOfSquadToManageBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "GetIdOfSquadToManageBP");

	Params::FortSurvivorSquadStatMatchesBase_GetIdOfSquadToManageBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortSurvivorSquadStatMatchesBase::TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadStatMatchesBase", "TryGetStaticSquadDataBP");

	Params::FortSurvivorSquadStatMatchesBase_TryGetStaticSquadDataBP Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutSquadData != nullptr)
		*OutSquadData = std::move(Parms.OutSquadData);

	return Parms.ReturnValue;
}

void UFortSurvivorSquadSummaryStatItem::SetAttributeModifierAccumulation(const struct FFortAttributeModifierAccumulation& Accumulation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSurvivorSquadSummaryStatItem", "SetAttributeModifierAccumulation");

	Params::FortSurvivorSquadSummaryStatItem_SetAttributeModifierAccumulation Parms{};

	Parms.Accumulation = std::move(Accumulation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortWorkerSetBonusIcon::HandleDifferentGameplayTagSetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWorkerSetBonusIcon", "HandleDifferentGameplayTagSetBP");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortWorkerSetBonusIcon::SetGameplayTag(const struct FGameplayTag& InGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWorkerSetBonusIcon", "SetGameplayTag");

	Params::FortWorkerSetBonusIcon_SetGameplayTag Parms{};

	Parms.InGameplayTag = std::move(InGameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStatsOverviewDetailsBase::ListenForChanges(bool bListen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStatsOverviewDetailsBase", "ListenForChanges");

	Params::FortStatsOverviewDetailsBase_ListenForChanges Parms{};

	Parms.bListen = bListen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortStatsOverviewDetailsBase::RequestStatsUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStatsOverviewDetailsBase", "RequestStatsUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

struct FUniqueNetIdRepl UFortStatsOverviewDetailsBase::GetLocalPlayerId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortStatsOverviewDetailsBase", "GetLocalPlayerId");

	Params::FortStatsOverviewDetailsBase_GetLocalPlayerId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortLlamaStoreBase::CreateTencentPuchaseOpenModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "CreateTencentPuchaseOpenModal");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreBase::HandleAddVBucks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "HandleAddVBucks");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreBase::HandleTencentDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "HandleTencentDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreBase::OnStorePurchaseCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "OnStorePurchaseCompleted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreBase::OnStoreStateChanged(EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "OnStoreStateChanged");

	Params::FortLlamaStoreBase_OnStoreStateChanged Parms{};

	Parms.NewStoreState = NewStoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreBase::SetupFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "SetupFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreBase::SwapToCardEnterState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase", "SwapToCardEnterState");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreBase_Legacy::CreateTencentPuchaseOpenModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "CreateTencentPuchaseOpenModal");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreBase_Legacy::OnStorePurchaseCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "OnStorePurchaseCompleted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreBase_Legacy::OnStoreStateChanged(EFortStoreState NewStoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "OnStoreStateChanged");

	Params::FortLlamaStoreBase_Legacy_OnStoreStateChanged Parms{};

	Parms.NewStoreState = NewStoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreBase_Legacy::SetupFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "SetupFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreBase_Legacy::SwapToCardEnterState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreBase_Legacy", "SwapToCardEnterState");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreDetailsBase::OnOfferInfoChanged(int32 CurrentOfferRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "OnOfferInfoChanged");

	Params::FortLlamaStoreDetailsBase_OnOfferInfoChanged Parms{};

	Parms.CurrentOfferRarity = CurrentOfferRarity;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortLlamaStoreDetailsBase::SetScrollWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "SetScrollWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortLlamaStoreDetailsBase::StartUpgradingToGold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "StartUpgradingToGold");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortLlamaStoreDetailsBase::StartUpgradingToSilver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "StartUpgradingToSilver");

	UObject::ProcessEvent(Func, nullptr);
}

int32 UFortLlamaStoreDetailsBase::GetChoiceItemCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "GetChoiceItemCount");

	Params::FortLlamaStoreDetailsBase_GetChoiceItemCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortLlamaStoreDetailsBase::GetNewItemCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "GetNewItemCount");

	Params::FortLlamaStoreDetailsBase_GetNewItemCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortLlamaStoreDetailsBase::GetNotInCollectionBookCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreDetailsBase", "GetNotInCollectionBookCount");

	Params::FortLlamaStoreDetailsBase_GetNotInCollectionBookCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EInputActionState UFortLlamaStoreInspectionScreen::GetInspectChoiceInputState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreInspectionScreen", "GetInspectChoiceInputState");

	Params::FortLlamaStoreInspectionScreen_GetInspectChoiceInputState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortCardPackItem* UFortLlamaStoreInspectionScreen::GetSelectedCardPack() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreInspectionScreen", "GetSelectedCardPack");

	Params::FortLlamaStoreInspectionScreen_GetSelectedCardPack Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortLlamaStoreInspectionScreen::IsItemChoicePack(class UObject* ItemToCheck) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLlamaStoreInspectionScreen", "IsItemChoicePack");

	Params::FortLlamaStoreInspectionScreen_IsItemChoicePack Parms{};

	Parms.ItemToCheck = ItemToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStWHUD::HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StWHUD", "HandleCursorModeChanged");

	Params::StWHUD_HandleCursorModeChanged Parms{};

	Parms.bCursorModeEnabled = bCursorModeEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentWidget = CursorModeContentWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStWHUD::HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StWHUD", "HandlePickerOpenRequest");

	Params::StWHUD_HandlePickerOpenRequest Parms{};

	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.bIgnoreFirstAccept = bIgnoreFirstAccept;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStWHUD::NativeHandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StWHUD", "NativeHandleWeaponEquipped");

	Params::StWHUD_NativeHandleWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortTheaterSelect::OnNavigationLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTheaterSelect", "OnNavigationLeft");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortTheaterSelect::OnNavigationRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTheaterSelect", "OnNavigationRight");

	UObject::ProcessEvent(Func, nullptr);
}

bool UFortTheaterSelect::GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortTheaterSelect", "GetTheaterRecommendedRatingRange");

	Params::FortTheaterSelect_GetTheaterRecommendedRatingRange Parms{};

	Parms.UniqueId = std::move(UniqueId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Minimum != nullptr)
		*Minimum = Parms.Minimum;

	if (Maximum != nullptr)
		*Maximum = Parms.Maximum;

	return Parms.ReturnValue;
}

void UFortUpgradeDetailsBase::OnPurchaseComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnPurchaseComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeDetailsBase::OnScreenActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnScreenActive");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeDetailsBase::OnShowIcon(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnShowIcon");

	Params::FortUpgradeDetailsBase_OnShowIcon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortUpgradeDetailsBase::OnUpgradeToDetailChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "OnUpgradeToDetailChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeDetailsBase::RequestPurchaseNode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeDetailsBase", "RequestPurchaseNode");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeInfo::BackwardPreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "BackwardPreview");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeInfo::ForwardPreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "ForwardPreview");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortUpgradeInfo::CanAffordUpgrade() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "CanAffordUpgrade");

	Params::FortUpgradeInfo_CanAffordUpgrade Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeInfo::CanPreview() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "CanPreview");

	Params::FortUpgradeInfo_CanPreview Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeInfo::GetCost() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetCost");

	Params::FortUpgradeInfo_GetCost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeInfo::GetCurrentLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetCurrentLevel");

	Params::FortUpgradeInfo_GetCurrentLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortUpgradeInfo::GetDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetDescription");

	Params::FortUpgradeInfo_GetDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeInfo::GetDisplayAttributes(TArray<struct FFortDisplayAttribute>* OutDisplayAttributes) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetDisplayAttributes");

	Params::FortUpgradeInfo_GetDisplayAttributes Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutDisplayAttributes != nullptr)
		*OutDisplayAttributes = std::move(Parms.OutDisplayAttributes);

	return Parms.ReturnValue;
}

TSoftObjectPtr<class UTexture2D> UFortUpgradeInfo::GetIcon(EUpgradeInfoImageSize ImageSize) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetIcon");

	Params::FortUpgradeInfo_GetIcon Parms{};

	Parms.ImageSize = ImageSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortUpgradeInfo::GetItemName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetItemName");

	Params::FortUpgradeInfo_GetItemName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeInfo::GetMaxLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetMaxLevel");

	Params::FortUpgradeInfo_GetMaxLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeInfo::GetNextLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetNextLevel");

	Params::FortUpgradeInfo_GetNextLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortUpgradeInfo::GetNextLevelDescription() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetNextLevelDescription");

	Params::FortUpgradeInfo_GetNextLevelDescription Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortUpgradeInfo::GetNextLevelTitle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetNextLevelTitle");

	Params::FortUpgradeInfo_GetNextLevelTitle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UFortUpgradeInfo::GetTitle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetTitle");

	Params::FortUpgradeInfo_GetTitle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeInfo::GetUpgradeUnlockLevel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetUpgradeUnlockLevel");

	Params::FortUpgradeInfo_GetUpgradeUnlockLevel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMediaSource* UFortUpgradeInfo::GetVideo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "GetVideo");

	Params::FortUpgradeInfo_GetVideo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeInfo::IsPreviewing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "IsPreviewing");

	Params::FortUpgradeInfo_IsPreviewing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeInfo::IsUpgradeUnlocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeInfo", "IsUpgradeUnlocked");

	Params::FortUpgradeInfo_IsUpgradeUnlocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortUpgradeScreenBase::HandleTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "HandleTabSelected");

	Params::FortUpgradeScreenBase_HandleTabSelected Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeScreenBase::OnPurchaseNodeComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "OnPurchaseNodeComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeScreenBase::OnUpgradeInfoChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "OnUpgradeInfoChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeScreenBase::OnUseUpgradesRespecTokenComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "OnUseUpgradesRespecTokenComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeScreenBase::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "RefreshFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeScreenBase::TogglePreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "TogglePreview");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeScreenBase::UseUpgradesRespecToken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "UseUpgradesRespecToken");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortUpgradeScreenBase::AreUpgradesRespecTokensAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "AreUpgradesRespecTokensAvailable");

	Params::FortUpgradeScreenBase_AreUpgradesRespecTokensAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeScreenBase::CanPreview() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "CanPreview");

	Params::FortUpgradeScreenBase_CanPreview Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeScreenBase::GetUpgradesRespecTokenCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "GetUpgradesRespecTokenCount");

	Params::FortUpgradeScreenBase_GetUpgradesRespecTokenCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeScreenBase::IsPreviewing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase", "IsPreviewing");

	Params::FortUpgradeScreenBase_IsPreviewing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortUpgradeScreenBase_Legacy::HandleTabSelected(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "HandleTabSelected");

	Params::FortUpgradeScreenBase_Legacy_HandleTabSelected Parms{};

	Parms.TabId = TabId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeScreenBase_Legacy::OnPurchaseNodeComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "OnPurchaseNodeComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeScreenBase_Legacy::OnUpgradeInfoChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "OnUpgradeInfoChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeScreenBase_Legacy::OnUseUpgradesRespecTokenComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "OnUseUpgradesRespecTokenComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortUpgradeScreenBase_Legacy::RefreshFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "RefreshFocus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeScreenBase_Legacy::TogglePreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "TogglePreview");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortUpgradeScreenBase_Legacy::UseUpgradesRespecToken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "UseUpgradesRespecToken");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UFortUpgradeScreenBase_Legacy::AreUpgradesRespecTokensAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "AreUpgradesRespecTokensAvailable");

	Params::FortUpgradeScreenBase_Legacy_AreUpgradesRespecTokensAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeScreenBase_Legacy::CanPreview() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "CanPreview");

	Params::FortUpgradeScreenBase_Legacy_CanPreview Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UFortUpgradeScreenBase_Legacy::GetUpgradesRespecTokenCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "GetUpgradesRespecTokenCount");

	Params::FortUpgradeScreenBase_Legacy_GetUpgradesRespecTokenCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortUpgradeScreenBase_Legacy::IsPreviewing() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeScreenBase_Legacy", "IsPreviewing");

	Params::FortUpgradeScreenBase_Legacy_IsPreviewing Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortUpgradeTileBase::OnDataRefresh(bool bUpgrade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeTileBase", "OnDataRefresh");

	Params::FortUpgradeTileBase_OnDataRefresh Parms{};

	Parms.bUpgrade = bUpgrade;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortUpgradeTileBase_Legacy::OnDataRefresh(bool bUpgrade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortUpgradeTileBase_Legacy", "OnDataRefresh");

	Params::FortUpgradeTileBase_Legacy_OnDataRefresh Parms{};

	Parms.bUpgrade = bUpgrade;

	UObject::ProcessEvent(Func, &Parms);
}

}
