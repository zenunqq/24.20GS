#pragma once

#include "Basic.hpp"

#include "CommonUILegacy_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonUI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UFortCraftingListItem final : public UObject
{
public:
	uint8                                         Pad_28[0xD8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingListItem">();
	}
	static class UFortCraftingListItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingListItem>();
	}
};
static_assert(alignof(UFortCraftingListItem) == 0x000008, "Wrong alignment on UFortCraftingListItem");
static_assert(sizeof(UFortCraftingListItem) == 0x000100, "Wrong size on UFortCraftingListItem");

class UAthenaCraftingQuickBarButton final : public UAthenaQuickBarSlotButtonBase
{
public:
	uint8                                         Pad_13F0[0x20];

public:
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaCraftingQuickBarButton">();
	}
	static class UAthenaCraftingQuickBarButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCraftingQuickBarButton>();
	}
};
static_assert(alignof(UAthenaCraftingQuickBarButton) == 0x000010, "Wrong alignment on UAthenaCraftingQuickBarButton");
static_assert(sizeof(UAthenaCraftingQuickBarButton) == 0x001410, "Wrong size on UAthenaCraftingQuickBarButton");

class UAthenaEquippedItemCraftingIndicator final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x20];

public:
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaEquippedItemCraftingIndicator">();
	}
	static class UAthenaEquippedItemCraftingIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEquippedItemCraftingIndicator>();
	}
};
static_assert(alignof(UAthenaEquippedItemCraftingIndicator) == 0x000008, "Wrong alignment on UAthenaEquippedItemCraftingIndicator");
static_assert(sizeof(UAthenaEquippedItemCraftingIndicator) == 0x0002B0, "Wrong size on UAthenaEquippedItemCraftingIndicator");

class UAthenaInventoryItemInfoCraftingIndicator final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x20];

public:
	void HandleInventoryItemSelected(class UFortItem* SelectedItem);
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaInventoryItemInfoCraftingIndicator">();
	}
	static class UAthenaInventoryItemInfoCraftingIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryItemInfoCraftingIndicator>();
	}
};
static_assert(alignof(UAthenaInventoryItemInfoCraftingIndicator) == 0x000008, "Wrong alignment on UAthenaInventoryItemInfoCraftingIndicator");
static_assert(sizeof(UAthenaInventoryItemInfoCraftingIndicator) == 0x0002B0, "Wrong size on UAthenaInventoryItemInfoCraftingIndicator");

class UAthenaQuickBarSlotCraftingIndicator final : public UAthenaQuickBarSlotExtensionWidgetBase
{
public:
	uint8                                         Pad_298[0x20];
	bool                                          bCheckForIngredientChangesWhenCraftable;
	uint8                                         Pad_2B9[0xF];

public:
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIngredientChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaQuickBarSlotCraftingIndicator">();
	}
	static class UAthenaQuickBarSlotCraftingIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaQuickBarSlotCraftingIndicator>();
	}
};
static_assert(alignof(UAthenaQuickBarSlotCraftingIndicator) == 0x000008, "Wrong alignment on UAthenaQuickBarSlotCraftingIndicator");
static_assert(sizeof(UAthenaQuickBarSlotCraftingIndicator) == 0x0002C8, "Wrong size on UAthenaQuickBarSlotCraftingIndicator");
static_assert(offsetof(UAthenaQuickBarSlotCraftingIndicator, bCheckForIngredientChangesWhenCraftable) == 0x0002B8, "Member 'UAthenaQuickBarSlotCraftingIndicator::bCheckForIngredientChangesWhenCraftable' has a wrong offset!");

class UFortCookingScreen final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	struct FDataTableRowHandle                    CloseInputAction;
	uint8                                         Pad_3C0[0x8];
	class UCommonButtonLegacy*                    Button_EjectAll;
	class UCommonButtonLegacy*                    Button_Cancel;
	class UCommonTextBlock*                       Text_RecipeName;
	class UCommonTextBlock*                       Text_RecipeDescription;
	class UImage*                                 Image_Recipe;
	class UFortSlottedRadialMenu*                 RadialMenu_Recipes;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCookingScreen">();
	}
	static class UFortCookingScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCookingScreen>();
	}
};
static_assert(alignof(UFortCookingScreen) == 0x000008, "Wrong alignment on UFortCookingScreen");
static_assert(sizeof(UFortCookingScreen) == 0x0003F8, "Wrong size on UFortCookingScreen");
static_assert(offsetof(UFortCookingScreen, CloseInputAction) == 0x0003B0, "Member 'UFortCookingScreen::CloseInputAction' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Button_EjectAll) == 0x0003C8, "Member 'UFortCookingScreen::Button_EjectAll' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Button_Cancel) == 0x0003D0, "Member 'UFortCookingScreen::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Text_RecipeName) == 0x0003D8, "Member 'UFortCookingScreen::Text_RecipeName' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Text_RecipeDescription) == 0x0003E0, "Member 'UFortCookingScreen::Text_RecipeDescription' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Image_Recipe) == 0x0003E8, "Member 'UFortCookingScreen::Image_Recipe' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, RadialMenu_Recipes) == 0x0003F0, "Member 'UFortCookingScreen::RadialMenu_Recipes' has a wrong offset!");

class UFortCraftingFormulaIngredientsWidget final : public UCommonUserWidget
{
public:
	class UDynamicEntryBox*                       EntryBox_Ingredients;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingFormulaIngredientsWidget">();
	}
	static class UFortCraftingFormulaIngredientsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingFormulaIngredientsWidget>();
	}
};
static_assert(alignof(UFortCraftingFormulaIngredientsWidget) == 0x000008, "Wrong alignment on UFortCraftingFormulaIngredientsWidget");
static_assert(sizeof(UFortCraftingFormulaIngredientsWidget) == 0x000298, "Wrong size on UFortCraftingFormulaIngredientsWidget");
static_assert(offsetof(UFortCraftingFormulaIngredientsWidget, EntryBox_Ingredients) == 0x000290, "Member 'UFortCraftingFormulaIngredientsWidget::EntryBox_Ingredients' has a wrong offset!");

class UFortCraftingIngredientWidget final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x8];
	class UCommonTextBlock*                       Text_NumAvailable;
	class UCommonTextBlock*                       Text_NumRequired;
	class UAthenaItemIcon*                        ItemIcon;
	class UCommonLazyImage*                       LazyImage_Icon;

public:
	void OnIngredientWidgetUpdated(const int32 NumAvailable, const int32 NumRequired, const bool bIsPrimaryIngredient, const bool bIsLastIngredient);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingIngredientWidget">();
	}
	static class UFortCraftingIngredientWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingIngredientWidget>();
	}
};
static_assert(alignof(UFortCraftingIngredientWidget) == 0x000008, "Wrong alignment on UFortCraftingIngredientWidget");
static_assert(sizeof(UFortCraftingIngredientWidget) == 0x0002B8, "Wrong size on UFortCraftingIngredientWidget");
static_assert(offsetof(UFortCraftingIngredientWidget, Text_NumAvailable) == 0x000298, "Member 'UFortCraftingIngredientWidget::Text_NumAvailable' has a wrong offset!");
static_assert(offsetof(UFortCraftingIngredientWidget, Text_NumRequired) == 0x0002A0, "Member 'UFortCraftingIngredientWidget::Text_NumRequired' has a wrong offset!");
static_assert(offsetof(UFortCraftingIngredientWidget, ItemIcon) == 0x0002A8, "Member 'UFortCraftingIngredientWidget::ItemIcon' has a wrong offset!");
static_assert(offsetof(UFortCraftingIngredientWidget, LazyImage_Icon) == 0x0002B0, "Member 'UFortCraftingIngredientWidget::LazyImage_Icon' has a wrong offset!");

class UFortCraftingItemInfoWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class FText                                   RarityTextFormat;
	class UCommonTextBlock*                       Text_ItemName;
	class UCommonTextBlock*                       Text_ItemRarity;
	class UCommonTextBlock*                       Text_ItemCategory;
	class UFortItemCategoryIndicator*             ItemCategoryIndicator;
	class UCommonTextBlock*                       Text_ItemDescription;
	class UAthenaInventoryItemStatsWidget*        ItemStatsWidget;
	class UFortCraftingFormulaIngredientsWidget*  IngredientsWidget;
	class UCommonButtonLegacy*                    Button_StartCrafting;
	uint8                                         Pad_408[0x8];

public:
	void OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingItemInfoWidget">();
	}
	static class UFortCraftingItemInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingItemInfoWidget>();
	}
};
static_assert(alignof(UFortCraftingItemInfoWidget) == 0x000008, "Wrong alignment on UFortCraftingItemInfoWidget");
static_assert(sizeof(UFortCraftingItemInfoWidget) == 0x000410, "Wrong size on UFortCraftingItemInfoWidget");
static_assert(offsetof(UFortCraftingItemInfoWidget, RarityTextFormat) == 0x0003B0, "Member 'UFortCraftingItemInfoWidget::RarityTextFormat' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemName) == 0x0003C8, "Member 'UFortCraftingItemInfoWidget::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemRarity) == 0x0003D0, "Member 'UFortCraftingItemInfoWidget::Text_ItemRarity' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemCategory) == 0x0003D8, "Member 'UFortCraftingItemInfoWidget::Text_ItemCategory' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, ItemCategoryIndicator) == 0x0003E0, "Member 'UFortCraftingItemInfoWidget::ItemCategoryIndicator' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemDescription) == 0x0003E8, "Member 'UFortCraftingItemInfoWidget::Text_ItemDescription' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, ItemStatsWidget) == 0x0003F0, "Member 'UFortCraftingItemInfoWidget::ItemStatsWidget' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, IngredientsWidget) == 0x0003F8, "Member 'UFortCraftingItemInfoWidget::IngredientsWidget' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Button_StartCrafting) == 0x000400, "Member 'UFortCraftingItemInfoWidget::Button_StartCrafting' has a wrong offset!");

class UFortCraftingListEntry final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UAthenaItemIcon*                        ItemIcon;
	bool                                          bCanCraftItem;
	uint8                                         Pad_1441[0xF];

public:
	void OnCraftingListItemSet();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingListEntry">();
	}
	static class UFortCraftingListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingListEntry>();
	}
};
static_assert(alignof(UFortCraftingListEntry) == 0x000010, "Wrong alignment on UFortCraftingListEntry");
static_assert(sizeof(UFortCraftingListEntry) == 0x001450, "Wrong size on UFortCraftingListEntry");
static_assert(offsetof(UFortCraftingListEntry, ItemIcon) == 0x001438, "Member 'UFortCraftingListEntry::ItemIcon' has a wrong offset!");
static_assert(offsetof(UFortCraftingListEntry, bCanCraftItem) == 0x001440, "Member 'UFortCraftingListEntry::bCanCraftItem' has a wrong offset!");

class UFortCraftingTab final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class FName                                   TabNameID;
	uint8                                         Pad_3B4[0xC];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	struct FGameplayTagContainer                  PrimaryIngredientTags;
	class UFortCraftingItemInfoWidget*            CraftingItemInfo;
	class UCommonListView*                        ListView_Recipes;
	class UAthenaQuickbarEditorBase*              QuickbarEditor;
	uint8                                         Pad_4E8[0x8];

public:
	void HandleInventoryItemSelected(class UFortItem* Item);
	void OnFormulaListUpdated(const int32 NumFormulas);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingTab">();
	}
	static class UFortCraftingTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingTab>();
	}
};
static_assert(alignof(UFortCraftingTab) == 0x000010, "Wrong alignment on UFortCraftingTab");
static_assert(sizeof(UFortCraftingTab) == 0x0004F0, "Wrong size on UFortCraftingTab");
static_assert(offsetof(UFortCraftingTab, TabNameID) == 0x0003B0, "Member 'UFortCraftingTab::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, TabButtonLabelInfo) == 0x0003C0, "Member 'UFortCraftingTab::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, PrimaryIngredientTags) == 0x0004B0, "Member 'UFortCraftingTab::PrimaryIngredientTags' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, CraftingItemInfo) == 0x0004D0, "Member 'UFortCraftingTab::CraftingItemInfo' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, ListView_Recipes) == 0x0004D8, "Member 'UFortCraftingTab::ListView_Recipes' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, QuickbarEditor) == 0x0004E0, "Member 'UFortCraftingTab::QuickbarEditor' has a wrong offset!");

class UFortPotContentsPopup final : public UUserWidget
{
public:
	int32                                         MaxItemsToShow;
	uint8                                         Pad_26C[0xC];
	class UCommonTileView*                        TileView_PotContents;
	class UCommonTextBlock*                       Text_MoreItems;
	class UWidget*                                Overlay_Popup;

public:
	void SetOwningCraftingObject(class ACraftingObjectBGA* InCraftingObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPotContentsPopup">();
	}
	static class UFortPotContentsPopup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPotContentsPopup>();
	}
};
static_assert(alignof(UFortPotContentsPopup) == 0x000008, "Wrong alignment on UFortPotContentsPopup");
static_assert(sizeof(UFortPotContentsPopup) == 0x000290, "Wrong size on UFortPotContentsPopup");
static_assert(offsetof(UFortPotContentsPopup, MaxItemsToShow) == 0x000268, "Member 'UFortPotContentsPopup::MaxItemsToShow' has a wrong offset!");
static_assert(offsetof(UFortPotContentsPopup, TileView_PotContents) == 0x000278, "Member 'UFortPotContentsPopup::TileView_PotContents' has a wrong offset!");
static_assert(offsetof(UFortPotContentsPopup, Text_MoreItems) == 0x000280, "Member 'UFortPotContentsPopup::Text_MoreItems' has a wrong offset!");
static_assert(offsetof(UFortPotContentsPopup, Overlay_Popup) == 0x000288, "Member 'UFortPotContentsPopup::Overlay_Popup' has a wrong offset!");

class UFortPotContentsTile final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UCommonLazyImage*                       Image_Item;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPotContentsTile">();
	}
	static class UFortPotContentsTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPotContentsTile>();
	}
};
static_assert(alignof(UFortPotContentsTile) == 0x000010, "Wrong alignment on UFortPotContentsTile");
static_assert(sizeof(UFortPotContentsTile) == 0x001440, "Wrong size on UFortPotContentsTile");
static_assert(offsetof(UFortPotContentsTile, Image_Item) == 0x001438, "Member 'UFortPotContentsTile::Image_Item' has a wrong offset!");

class UFortUIGameFeatureAction_SetCraftMenuWidget final : public UFortUIGameFeatureAction
{
public:
	TSubclassOf<class ACraftingObjectBGA>         CraftingObject;
	TSoftClassPtr<class UClass>                   CraftingMenuWidget;
	uint8                                         Pad_58[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUIGameFeatureAction_SetCraftMenuWidget">();
	}
	static class UFortUIGameFeatureAction_SetCraftMenuWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUIGameFeatureAction_SetCraftMenuWidget>();
	}
};
static_assert(alignof(UFortUIGameFeatureAction_SetCraftMenuWidget) == 0x000008, "Wrong alignment on UFortUIGameFeatureAction_SetCraftMenuWidget");
static_assert(sizeof(UFortUIGameFeatureAction_SetCraftMenuWidget) == 0x000060, "Wrong size on UFortUIGameFeatureAction_SetCraftMenuWidget");
static_assert(offsetof(UFortUIGameFeatureAction_SetCraftMenuWidget, CraftingObject) == 0x000028, "Member 'UFortUIGameFeatureAction_SetCraftMenuWidget::CraftingObject' has a wrong offset!");
static_assert(offsetof(UFortUIGameFeatureAction_SetCraftMenuWidget, CraftingMenuWidget) == 0x000030, "Member 'UFortUIGameFeatureAction_SetCraftMenuWidget::CraftingMenuWidget' has a wrong offset!");

}
