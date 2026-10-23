#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct AthenaCraftingQuickBarButton_OnCanCraftNowChanged final
{
public:
	bool                                          bCanCraftNow;
};
static_assert(alignof(AthenaCraftingQuickBarButton_OnCanCraftNowChanged) == 0x000001, "Wrong alignment on AthenaCraftingQuickBarButton_OnCanCraftNowChanged");
static_assert(sizeof(AthenaCraftingQuickBarButton_OnCanCraftNowChanged) == 0x000001, "Wrong size on AthenaCraftingQuickBarButton_OnCanCraftNowChanged");
static_assert(offsetof(AthenaCraftingQuickBarButton_OnCanCraftNowChanged, bCanCraftNow) == 0x000000, "Member 'AthenaCraftingQuickBarButton_OnCanCraftNowChanged::bCanCraftNow' has a wrong offset!");

struct AthenaCraftingQuickBarButton_OnIsCraftableItemChanged final
{
public:
	bool                                          bIsCraftableItem;
};
static_assert(alignof(AthenaCraftingQuickBarButton_OnIsCraftableItemChanged) == 0x000001, "Wrong alignment on AthenaCraftingQuickBarButton_OnIsCraftableItemChanged");
static_assert(sizeof(AthenaCraftingQuickBarButton_OnIsCraftableItemChanged) == 0x000001, "Wrong size on AthenaCraftingQuickBarButton_OnIsCraftableItemChanged");
static_assert(offsetof(AthenaCraftingQuickBarButton_OnIsCraftableItemChanged, bIsCraftableItem) == 0x000000, "Member 'AthenaCraftingQuickBarButton_OnIsCraftableItemChanged::bIsCraftableItem' has a wrong offset!");

struct AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped) == 0x000008, "Wrong alignment on AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped");
static_assert(sizeof(AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped) == 0x000010, "Wrong size on AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped");
static_assert(offsetof(AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped, NewWeapon) == 0x000000, "Member 'AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped, PrevWeapon) == 0x000008, "Member 'AthenaEquippedItemCraftingIndicator_HandleWeaponEquipped::PrevWeapon' has a wrong offset!");

struct AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged final
{
public:
	bool                                          bCanCraftNow;
};
static_assert(alignof(AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged) == 0x000001, "Wrong alignment on AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged");
static_assert(sizeof(AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged) == 0x000001, "Wrong size on AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged");
static_assert(offsetof(AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged, bCanCraftNow) == 0x000000, "Member 'AthenaEquippedItemCraftingIndicator_OnCanCraftNowChanged::bCanCraftNow' has a wrong offset!");

struct AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged final
{
public:
	bool                                          bIsCraftableItem;
};
static_assert(alignof(AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged) == 0x000001, "Wrong alignment on AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged");
static_assert(sizeof(AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged) == 0x000001, "Wrong size on AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged");
static_assert(offsetof(AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged, bIsCraftableItem) == 0x000000, "Member 'AthenaEquippedItemCraftingIndicator_OnIsCraftableItemChanged::bIsCraftableItem' has a wrong offset!");

struct AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected final
{
public:
	class UFortItem*                              SelectedItem;
};
static_assert(alignof(AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected) == 0x000008, "Wrong alignment on AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected");
static_assert(sizeof(AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected) == 0x000008, "Wrong size on AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected");
static_assert(offsetof(AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected, SelectedItem) == 0x000000, "Member 'AthenaInventoryItemInfoCraftingIndicator_HandleInventoryItemSelected::SelectedItem' has a wrong offset!");

struct AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged final
{
public:
	bool                                          bCanCraftNow;
};
static_assert(alignof(AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged) == 0x000001, "Wrong alignment on AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged");
static_assert(sizeof(AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged) == 0x000001, "Wrong size on AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged");
static_assert(offsetof(AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged, bCanCraftNow) == 0x000000, "Member 'AthenaInventoryItemInfoCraftingIndicator_OnCanCraftNowChanged::bCanCraftNow' has a wrong offset!");

struct AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged final
{
public:
	bool                                          bIsCraftableItem;
};
static_assert(alignof(AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged) == 0x000001, "Wrong alignment on AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged");
static_assert(sizeof(AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged) == 0x000001, "Wrong size on AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged");
static_assert(offsetof(AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged, bIsCraftableItem) == 0x000000, "Member 'AthenaInventoryItemInfoCraftingIndicator_OnIsCraftableItemChanged::bIsCraftableItem' has a wrong offset!");

struct AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped) == 0x000008, "Wrong alignment on AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped");
static_assert(sizeof(AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped) == 0x000010, "Wrong size on AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped");
static_assert(offsetof(AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped, NewWeapon) == 0x000000, "Member 'AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped, PrevWeapon) == 0x000008, "Member 'AthenaQuickBarSlotCraftingIndicator_HandleWeaponEquipped::PrevWeapon' has a wrong offset!");

struct AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged final
{
public:
	bool                                          bCanCraftNow;
};
static_assert(alignof(AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged) == 0x000001, "Wrong alignment on AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged");
static_assert(sizeof(AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged) == 0x000001, "Wrong size on AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged");
static_assert(offsetof(AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged, bCanCraftNow) == 0x000000, "Member 'AthenaQuickBarSlotCraftingIndicator_OnCanCraftNowChanged::bCanCraftNow' has a wrong offset!");

struct AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged final
{
public:
	bool                                          bCanCraftNow;
};
static_assert(alignof(AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged) == 0x000001, "Wrong alignment on AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged");
static_assert(sizeof(AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged) == 0x000001, "Wrong size on AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged");
static_assert(offsetof(AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged, bCanCraftNow) == 0x000000, "Member 'AthenaQuickBarSlotCraftingIndicator_OnIngredientChanged::bCanCraftNow' has a wrong offset!");

struct AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged final
{
public:
	bool                                          bIsCraftableItem;
};
static_assert(alignof(AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged) == 0x000001, "Wrong alignment on AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged");
static_assert(sizeof(AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged) == 0x000001, "Wrong size on AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged");
static_assert(offsetof(AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged, bIsCraftableItem) == 0x000000, "Member 'AthenaQuickBarSlotCraftingIndicator_OnIsCraftableItemChanged::bIsCraftableItem' has a wrong offset!");

struct FortCraftingIngredientWidget_OnIngredientWidgetUpdated final
{
public:
	int32                                         NumAvailable;
	int32                                         NumRequired;
	bool                                          bIsPrimaryIngredient;
	bool                                          bIsLastIngredient;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FortCraftingIngredientWidget_OnIngredientWidgetUpdated) == 0x000004, "Wrong alignment on FortCraftingIngredientWidget_OnIngredientWidgetUpdated");
static_assert(sizeof(FortCraftingIngredientWidget_OnIngredientWidgetUpdated) == 0x00000C, "Wrong size on FortCraftingIngredientWidget_OnIngredientWidgetUpdated");
static_assert(offsetof(FortCraftingIngredientWidget_OnIngredientWidgetUpdated, NumAvailable) == 0x000000, "Member 'FortCraftingIngredientWidget_OnIngredientWidgetUpdated::NumAvailable' has a wrong offset!");
static_assert(offsetof(FortCraftingIngredientWidget_OnIngredientWidgetUpdated, NumRequired) == 0x000004, "Member 'FortCraftingIngredientWidget_OnIngredientWidgetUpdated::NumRequired' has a wrong offset!");
static_assert(offsetof(FortCraftingIngredientWidget_OnIngredientWidgetUpdated, bIsPrimaryIngredient) == 0x000008, "Member 'FortCraftingIngredientWidget_OnIngredientWidgetUpdated::bIsPrimaryIngredient' has a wrong offset!");
static_assert(offsetof(FortCraftingIngredientWidget_OnIngredientWidgetUpdated, bIsLastIngredient) == 0x000009, "Member 'FortCraftingIngredientWidget_OnIngredientWidgetUpdated::bIsLastIngredient' has a wrong offset!");

struct FortCraftingItemInfoWidget_OnItemRaritySet final
{
public:
	EFortRarity                                   Rarity;
	uint8                                         Pad_1[0x7];
	struct FFortRarityItemData                    RarityItemData;
};
static_assert(alignof(FortCraftingItemInfoWidget_OnItemRaritySet) == 0x000008, "Wrong alignment on FortCraftingItemInfoWidget_OnItemRaritySet");
static_assert(sizeof(FortCraftingItemInfoWidget_OnItemRaritySet) == 0x000088, "Wrong size on FortCraftingItemInfoWidget_OnItemRaritySet");
static_assert(offsetof(FortCraftingItemInfoWidget_OnItemRaritySet, Rarity) == 0x000000, "Member 'FortCraftingItemInfoWidget_OnItemRaritySet::Rarity' has a wrong offset!");
static_assert(offsetof(FortCraftingItemInfoWidget_OnItemRaritySet, RarityItemData) == 0x000008, "Member 'FortCraftingItemInfoWidget_OnItemRaritySet::RarityItemData' has a wrong offset!");

struct FortCraftingTab_HandleInventoryItemSelected final
{
public:
	class UFortItem*                              Item;
};
static_assert(alignof(FortCraftingTab_HandleInventoryItemSelected) == 0x000008, "Wrong alignment on FortCraftingTab_HandleInventoryItemSelected");
static_assert(sizeof(FortCraftingTab_HandleInventoryItemSelected) == 0x000008, "Wrong size on FortCraftingTab_HandleInventoryItemSelected");
static_assert(offsetof(FortCraftingTab_HandleInventoryItemSelected, Item) == 0x000000, "Member 'FortCraftingTab_HandleInventoryItemSelected::Item' has a wrong offset!");

struct FortCraftingTab_OnFormulaListUpdated final
{
public:
	int32                                         NumFormulas;
};
static_assert(alignof(FortCraftingTab_OnFormulaListUpdated) == 0x000004, "Wrong alignment on FortCraftingTab_OnFormulaListUpdated");
static_assert(sizeof(FortCraftingTab_OnFormulaListUpdated) == 0x000004, "Wrong size on FortCraftingTab_OnFormulaListUpdated");
static_assert(offsetof(FortCraftingTab_OnFormulaListUpdated, NumFormulas) == 0x000000, "Member 'FortCraftingTab_OnFormulaListUpdated::NumFormulas' has a wrong offset!");

struct FortPotContentsPopup_SetOwningCraftingObject final
{
public:
	class ACraftingObjectBGA*                     InCraftingObject;
};
static_assert(alignof(FortPotContentsPopup_SetOwningCraftingObject) == 0x000008, "Wrong alignment on FortPotContentsPopup_SetOwningCraftingObject");
static_assert(sizeof(FortPotContentsPopup_SetOwningCraftingObject) == 0x000008, "Wrong size on FortPotContentsPopup_SetOwningCraftingObject");
static_assert(offsetof(FortPotContentsPopup_SetOwningCraftingObject, InCraftingObject) == 0x000000, "Member 'FortPotContentsPopup_SetOwningCraftingObject::InCraftingObject' has a wrong offset!");

}
