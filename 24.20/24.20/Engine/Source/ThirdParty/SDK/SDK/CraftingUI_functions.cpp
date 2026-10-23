#pragma once

#include "Basic.hpp"

#include "CraftingUI_classes.hpp"
#include "CraftingUI_parameters.hpp"

namespace SDK
{

void UAthenaCraftingQuickBarButton::OnCanCraftNowChanged(const bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCraftingQuickBarButton", "OnCanCraftNowChanged");

	Params::AthenaCraftingQuickBarButton_OnCanCraftNowChanged Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCraftingQuickBarButton::OnIsCraftableItemChanged(const bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCraftingQuickBarButton", "OnIsCraftableItemChanged");

	Params::AthenaCraftingQuickBarButton_OnIsCraftableItemChanged Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaEquippedItemCraftingIndicator::HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "HandleWeaponEquipped");

	Params::AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaEquippedItemCraftingIndicator::OnCanCraftNowChanged(const bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "OnCanCraftNowChanged");

	Params::AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaEquippedItemCraftingIndicator::OnIsCraftableItemChanged(const bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEquippedItemCraftingIndicator", "OnIsCraftableItemChanged");

	Params::AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaInventoryItemInfoCraftingIndicator::HandleInventoryItemSelected(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "HandleInventoryItemSelected");

	Params::AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected Parms{};

	Parms.SelectedItem = SelectedItem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaInventoryItemInfoCraftingIndicator::OnCanCraftNowChanged(const bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "OnCanCraftNowChanged");

	Params::AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaInventoryItemInfoCraftingIndicator::OnIsCraftableItemChanged(const bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfoCraftingIndicator", "OnIsCraftableItemChanged");

	Params::AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaQuickBarSlotCraftingIndicator::HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "HandleWeaponEquipped");

	Params::AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaQuickBarSlotCraftingIndicator::OnCanCraftNowChanged(const bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnCanCraftNowChanged");

	Params::AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaQuickBarSlotCraftingIndicator::OnIngredientChanged(const bool bCanCraftNow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnIngredientChanged");

	Params::AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged Parms{};

	Parms.bCanCraftNow = bCanCraftNow;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaQuickBarSlotCraftingIndicator::OnIsCraftableItemChanged(const bool bIsCraftableItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaQuickBarSlotCraftingIndicator", "OnIsCraftableItemChanged");

	Params::AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged Parms{};

	Parms.bIsCraftableItem = bIsCraftableItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCraftingIngredientWidget::OnIngredientWidgetUpdated(const int32 NumAvailable, const int32 NumRequired, const bool bIsPrimaryIngredient, const bool bIsLastIngredient)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCraftingIngredientWidget", "OnIngredientWidgetUpdated");

	Params::FortCraftingIngredientWidget_OnIngredientWidgetUpdated Parms{};

	Parms.NumAvailable = NumAvailable;
	Parms.NumRequired = NumRequired;
	Parms.bIsPrimaryIngredient = bIsPrimaryIngredient;
	Parms.bIsLastIngredient = bIsLastIngredient;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCraftingItemInfoWidget::OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCraftingItemInfoWidget", "OnItemRaritySet");

	Params::FortCraftingItemInfoWidget_OnItemRaritySet Parms{};

	Parms.Rarity = Rarity;
	Parms.RarityItemData = std::move(RarityItemData);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortCraftingListEntry::OnCraftingListItemSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCraftingListEntry", "OnCraftingListItemSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortCraftingTab::HandleInventoryItemSelected(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCraftingTab", "HandleInventoryItemSelected");

	Params::FortCraftingTab_HandleInventoryItemSelected Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortCraftingTab::OnFormulaListUpdated(const int32 NumFormulas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCraftingTab", "OnFormulaListUpdated");

	Params::FortCraftingTab_OnFormulaListUpdated Parms{};

	Parms.NumFormulas = NumFormulas;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPotContentsPopup::SetOwningCraftingObject(class ACraftingObjectBGA* InCraftingObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPotContentsPopup", "SetOwningCraftingObject");

	Params::FortPotContentsPopup_SetOwningCraftingObject Parms{};

	Parms.InCraftingObject = InCraftingObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
