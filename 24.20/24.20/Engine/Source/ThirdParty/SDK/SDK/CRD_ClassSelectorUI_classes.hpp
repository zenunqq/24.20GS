#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "CRD_ClassSelectorRuntime_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UClassSelectorLoadoutContainer final : public UCommonUserWidget
{
public:
	class UWrapBox*                               WrapBox;
	TSubclassOf<class UAthenaItemElementWidgetBase> EntryWidgetClass;
	TArray<class UAthenaItemElementWidgetBase*>   EntryWidgets;
	class UFortItemDefinition*                    PreviewItemDef;
	int32                                         NumPreviewEntries;
	uint8                                         Pad_2BC[0x1C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassSelectorLoadoutContainer">();
	}
	static class UClassSelectorLoadoutContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassSelectorLoadoutContainer>();
	}
};
static_assert(alignof(UClassSelectorLoadoutContainer) == 0x000008, "Wrong alignment on UClassSelectorLoadoutContainer");
static_assert(sizeof(UClassSelectorLoadoutContainer) == 0x0002D8, "Wrong size on UClassSelectorLoadoutContainer");
static_assert(offsetof(UClassSelectorLoadoutContainer, WrapBox) == 0x000290, "Member 'UClassSelectorLoadoutContainer::WrapBox' has a wrong offset!");
static_assert(offsetof(UClassSelectorLoadoutContainer, EntryWidgetClass) == 0x000298, "Member 'UClassSelectorLoadoutContainer::EntryWidgetClass' has a wrong offset!");
static_assert(offsetof(UClassSelectorLoadoutContainer, EntryWidgets) == 0x0002A0, "Member 'UClassSelectorLoadoutContainer::EntryWidgets' has a wrong offset!");
static_assert(offsetof(UClassSelectorLoadoutContainer, PreviewItemDef) == 0x0002B0, "Member 'UClassSelectorLoadoutContainer::PreviewItemDef' has a wrong offset!");
static_assert(offsetof(UClassSelectorLoadoutContainer, NumPreviewEntries) == 0x0002B8, "Member 'UClassSelectorLoadoutContainer::NumPreviewEntries' has a wrong offset!");

class UClassSelectorTabButtons final : public UCommonUserWidget
{
public:
	class UCommonActionWidget*                    LeftActionWidget;
	class UCommonActionWidget*                    RightActionWidget;
	class UScrollBox*                             TabButtonsScrollBox;
	class UCommonButtonBase*                      LeftButton;
	class UCommonButtonBase*                      RightButton;
	struct FDataTableRowHandle                    LeftInputAction;
	uint8                                         Pad_2C8[0x8];
	struct FDataTableRowHandle                    RightInputAction;
	uint8                                         Pad_2E0[0x8];
	TArray<class UClassSelectorTeamTile*>         TabButtons;
	TSubclassOf<class UClassSelectorTeamTile>     TabButtonClass;
	struct FMargin                                TabButtonPadding;
	uint8                                         Pad_310[0x8];
	TArray<class FText>                           DesignerPreviewTabNames;
	float                                         ButtonScrollAmount;
	uint8                                         Pad_32C[0x1C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassSelectorTabButtons">();
	}
	static class UClassSelectorTabButtons* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassSelectorTabButtons>();
	}
};
static_assert(alignof(UClassSelectorTabButtons) == 0x000008, "Wrong alignment on UClassSelectorTabButtons");
static_assert(sizeof(UClassSelectorTabButtons) == 0x000348, "Wrong size on UClassSelectorTabButtons");
static_assert(offsetof(UClassSelectorTabButtons, LeftActionWidget) == 0x000290, "Member 'UClassSelectorTabButtons::LeftActionWidget' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, RightActionWidget) == 0x000298, "Member 'UClassSelectorTabButtons::RightActionWidget' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, TabButtonsScrollBox) == 0x0002A0, "Member 'UClassSelectorTabButtons::TabButtonsScrollBox' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, LeftButton) == 0x0002A8, "Member 'UClassSelectorTabButtons::LeftButton' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, RightButton) == 0x0002B0, "Member 'UClassSelectorTabButtons::RightButton' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, LeftInputAction) == 0x0002B8, "Member 'UClassSelectorTabButtons::LeftInputAction' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, RightInputAction) == 0x0002D0, "Member 'UClassSelectorTabButtons::RightInputAction' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, TabButtons) == 0x0002E8, "Member 'UClassSelectorTabButtons::TabButtons' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, TabButtonClass) == 0x0002F8, "Member 'UClassSelectorTabButtons::TabButtonClass' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, TabButtonPadding) == 0x000300, "Member 'UClassSelectorTabButtons::TabButtonPadding' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, DesignerPreviewTabNames) == 0x000318, "Member 'UClassSelectorTabButtons::DesignerPreviewTabNames' has a wrong offset!");
static_assert(offsetof(UClassSelectorTabButtons, ButtonScrollAmount) == 0x000328, "Member 'UClassSelectorTabButtons::ButtonScrollAmount' has a wrong offset!");

class UClassSelectorTeamInfoWidget final : public UUserWidget
{
public:
	class UCommonTextBlock*                       TeamName;
	class UCommonTextBlock*                       TeamCountText;
	class UCommonTextBlock*                       TeamDescription;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassSelectorTeamInfoWidget">();
	}
	static class UClassSelectorTeamInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassSelectorTeamInfoWidget>();
	}
};
static_assert(alignof(UClassSelectorTeamInfoWidget) == 0x000008, "Wrong alignment on UClassSelectorTeamInfoWidget");
static_assert(sizeof(UClassSelectorTeamInfoWidget) == 0x000280, "Wrong size on UClassSelectorTeamInfoWidget");
static_assert(offsetof(UClassSelectorTeamInfoWidget, TeamName) == 0x000268, "Member 'UClassSelectorTeamInfoWidget::TeamName' has a wrong offset!");
static_assert(offsetof(UClassSelectorTeamInfoWidget, TeamCountText) == 0x000270, "Member 'UClassSelectorTeamInfoWidget::TeamCountText' has a wrong offset!");
static_assert(offsetof(UClassSelectorTeamInfoWidget, TeamDescription) == 0x000278, "Member 'UClassSelectorTeamInfoWidget::TeamDescription' has a wrong offset!");

class UCreativeClassSelectorButton : public UCommonButtonBase
{
public:
	class UCommonTextBlock*                       ButtonTextBlock;
	class UCommonActionWidget*                    ActionWidget;
	class FText                                   ButtonText;
	struct FDataTableRowHandle                    buttonInputAction;
	bool                                          bAutoCapitalize;
	uint8                                         Pad_1419[0x7];

public:
	void SetButtonText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeClassSelectorButton">();
	}
	static class UCreativeClassSelectorButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeClassSelectorButton>();
	}
};
static_assert(alignof(UCreativeClassSelectorButton) == 0x000010, "Wrong alignment on UCreativeClassSelectorButton");
static_assert(sizeof(UCreativeClassSelectorButton) == 0x001420, "Wrong size on UCreativeClassSelectorButton");
static_assert(offsetof(UCreativeClassSelectorButton, ButtonTextBlock) == 0x0013E0, "Member 'UCreativeClassSelectorButton::ButtonTextBlock' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelectorButton, ActionWidget) == 0x0013E8, "Member 'UCreativeClassSelectorButton::ActionWidget' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelectorButton, ButtonText) == 0x0013F0, "Member 'UCreativeClassSelectorButton::ButtonText' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelectorButton, buttonInputAction) == 0x001408, "Member 'UCreativeClassSelectorButton::buttonInputAction' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelectorButton, bAutoCapitalize) == 0x001418, "Member 'UCreativeClassSelectorButton::bAutoCapitalize' has a wrong offset!");

class UClassSelectorTeamTile final : public UCreativeClassSelectorButton
{
public:
	uint8                                         Pad_1420[0x90];
	class UTextBlock*                             PlayerCount;
	class UCommonLazyImage*                       TeamIconImage;
	uint8                                         Pad_14C0[0x10];

public:
	void OnPlayerCountSet(int32 NewPlayerCount);
	void OnTeamColorIndexSet(int32 TeamColorIndex);
	void OnTeamIconSet(const struct FCreativeIconOption& NewTeamIcon);
	void OnTeamSet(const struct FMinigameTeam& NewTeamData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassSelectorTeamTile">();
	}
	static class UClassSelectorTeamTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassSelectorTeamTile>();
	}
};
static_assert(alignof(UClassSelectorTeamTile) == 0x000010, "Wrong alignment on UClassSelectorTeamTile");
static_assert(sizeof(UClassSelectorTeamTile) == 0x0014D0, "Wrong size on UClassSelectorTeamTile");
static_assert(offsetof(UClassSelectorTeamTile, PlayerCount) == 0x0014B0, "Member 'UClassSelectorTeamTile::PlayerCount' has a wrong offset!");
static_assert(offsetof(UClassSelectorTeamTile, TeamIconImage) == 0x0014B8, "Member 'UClassSelectorTeamTile::TeamIconImage' has a wrong offset!");

class UClassSelectorTeamTiles final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x8];
	TArray<class UClassSelectorTeamTile*>         TeamTiles;
	class UUniformGridPanel*                      RootPanel;
	TSubclassOf<class UClassSelectorTeamTile>     EntryClass;
	int32                                         DesignerPreviewEntries;
	uint8                                         Pad_2BC[0x1C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClassSelectorTeamTiles">();
	}
	static class UClassSelectorTeamTiles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassSelectorTeamTiles>();
	}
};
static_assert(alignof(UClassSelectorTeamTiles) == 0x000008, "Wrong alignment on UClassSelectorTeamTiles");
static_assert(sizeof(UClassSelectorTeamTiles) == 0x0002D8, "Wrong size on UClassSelectorTeamTiles");
static_assert(offsetof(UClassSelectorTeamTiles, TeamTiles) == 0x000298, "Member 'UClassSelectorTeamTiles::TeamTiles' has a wrong offset!");
static_assert(offsetof(UClassSelectorTeamTiles, RootPanel) == 0x0002A8, "Member 'UClassSelectorTeamTiles::RootPanel' has a wrong offset!");
static_assert(offsetof(UClassSelectorTeamTiles, EntryClass) == 0x0002B0, "Member 'UClassSelectorTeamTiles::EntryClass' has a wrong offset!");
static_assert(offsetof(UClassSelectorTeamTiles, DesignerPreviewEntries) == 0x0002B8, "Member 'UClassSelectorTeamTiles::DesignerPreviewEntries' has a wrong offset!");

class UCreativeClassItemInfo final : public UObject
{
public:
	struct FMinigameClassSlot                     ClassSlot;
	uint8                                         Pad_68[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeClassItemInfo">();
	}
	static class UCreativeClassItemInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeClassItemInfo>();
	}
};
static_assert(alignof(UCreativeClassItemInfo) == 0x000008, "Wrong alignment on UCreativeClassItemInfo");
static_assert(sizeof(UCreativeClassItemInfo) == 0x000070, "Wrong size on UCreativeClassItemInfo");
static_assert(offsetof(UCreativeClassItemInfo, ClassSlot) == 0x000028, "Member 'UCreativeClassItemInfo::ClassSlot' has a wrong offset!");

class UCreativeClassEntry final : public UCreativeClassSelectorButton
{
public:
	uint8                                         Pad_1420[0x8];
	class UCreativeClassItemInfo*                 ItemInfo;

public:
	void OnBrowsingLoadout(const bool bBrowsingLoadout);
	void OnClassEntryDataSet(const bool bIsCurrentClass, const bool bIsPendingClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeClassEntry">();
	}
	static class UCreativeClassEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeClassEntry>();
	}
};
static_assert(alignof(UCreativeClassEntry) == 0x000010, "Wrong alignment on UCreativeClassEntry");
static_assert(sizeof(UCreativeClassEntry) == 0x001430, "Wrong size on UCreativeClassEntry");
static_assert(offsetof(UCreativeClassEntry, ItemInfo) == 0x001428, "Member 'UCreativeClassEntry::ItemInfo' has a wrong offset!");

class UCreativeClassSelector final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x10];
	class UClassSelectorTabButtons*               TabButtons_TeamSelection;
	class UCommonListView*                        ListView_Classes;
	TArray<class UCreativeClassItemInfo*>         ClassItemInfos;
	class UScrollBox*                             LoadoutScrollBox;
	class UClassSelectorLoadoutContainer*         LoadoutContainer_Inventory;
	class UClassSelectorLoadoutContainer*         LoadoutContainer_Resources;
	class UCommonButtonBase*                      Button_SelectLoadout;
	class UCommonButtonBase*                      Button_RandomClass;
	class UWidgetSwitcher*                        Switcher_Descriptions;
	class UPanelWidget*                           ClassAndTeamDescriptionContainer;
	class UPanelWidget*                           ItemDescriptionContainer;
	class UPanelWidget*                           InventoryPanel;
	class UPanelWidget*                           ResourcesPanel;
	class UCommonTextBlock*                       ItemRarity;
	class UCommonTextBlock*                       ItemName;
	class UCommonTextBlock*                       ItemDescription;
	class UPanelWidget*                           TeamDescriptionContainer;
	class UClassSelectorTeamInfoWidget*           TeamInfoWidget_FullView;
	class UClassSelectorTeamInfoWidget*           TeamInfoWidget_TeamsOnly;
	class UWidgetSwitcher*                        DisplaySwitcher;
	class UPanelWidget*                           ClassAndTeamSelectionContainer;
	class UPanelWidget*                           OnlyTeamSelectionContainer;
	class UPanelWidget*                           InvalidDataContainer;
	class UClassSelectorTeamTiles*                TeamTiles;
	TSubclassOf<class UCreativeClassSelectorButton> TeamSelectionTabClass;
	bool                                          bIsModalVersion;
	bool                                          bEnableModalTimeLimit;
	uint8                                         Pad_48A[0x2];
	int32                                         ModalTimeLimitInSeconds;
	uint8                                         Pad_490[0x10];
	EClassSelectorDisplayMode                     DisplayMode;
	bool                                          bDeferRespawn;
	uint8                                         Pad_4A2[0x6];
	struct FDataTableRowHandle                    ReturnToClassSelectionInputAction;
	float                                         LoadoutScrollPadding;
	uint8                                         Pad_4BC[0x1C];
	class UCreativeClassItemInfo*                 SelectedClassItemInfo;

public:
	void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void OnClassSelectionChanged(const class FText& NewClassName, const class FText& NewClassDescription);
	void OnClassSelectorUIPopulated(const bool bHasValidData);
	void OnLoadoutCommitted(const class FText& NewClassName, const class FText& NewTeamName, const bool bNewLoadout);
	void OnTimerCountdown(const int32 RemainingTime);

	class UWidget* GetFirstLoadoutItem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeClassSelector">();
	}
	static class UCreativeClassSelector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeClassSelector>();
	}
};
static_assert(alignof(UCreativeClassSelector) == 0x000008, "Wrong alignment on UCreativeClassSelector");
static_assert(sizeof(UCreativeClassSelector) == 0x0004E0, "Wrong size on UCreativeClassSelector");
static_assert(offsetof(UCreativeClassSelector, TabButtons_TeamSelection) == 0x0003B8, "Member 'UCreativeClassSelector::TabButtons_TeamSelection' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ListView_Classes) == 0x0003C0, "Member 'UCreativeClassSelector::ListView_Classes' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ClassItemInfos) == 0x0003C8, "Member 'UCreativeClassSelector::ClassItemInfos' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, LoadoutScrollBox) == 0x0003D8, "Member 'UCreativeClassSelector::LoadoutScrollBox' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, LoadoutContainer_Inventory) == 0x0003E0, "Member 'UCreativeClassSelector::LoadoutContainer_Inventory' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, LoadoutContainer_Resources) == 0x0003E8, "Member 'UCreativeClassSelector::LoadoutContainer_Resources' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, Button_SelectLoadout) == 0x0003F0, "Member 'UCreativeClassSelector::Button_SelectLoadout' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, Button_RandomClass) == 0x0003F8, "Member 'UCreativeClassSelector::Button_RandomClass' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, Switcher_Descriptions) == 0x000400, "Member 'UCreativeClassSelector::Switcher_Descriptions' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ClassAndTeamDescriptionContainer) == 0x000408, "Member 'UCreativeClassSelector::ClassAndTeamDescriptionContainer' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ItemDescriptionContainer) == 0x000410, "Member 'UCreativeClassSelector::ItemDescriptionContainer' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, InventoryPanel) == 0x000418, "Member 'UCreativeClassSelector::InventoryPanel' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ResourcesPanel) == 0x000420, "Member 'UCreativeClassSelector::ResourcesPanel' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ItemRarity) == 0x000428, "Member 'UCreativeClassSelector::ItemRarity' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ItemName) == 0x000430, "Member 'UCreativeClassSelector::ItemName' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ItemDescription) == 0x000438, "Member 'UCreativeClassSelector::ItemDescription' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, TeamDescriptionContainer) == 0x000440, "Member 'UCreativeClassSelector::TeamDescriptionContainer' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, TeamInfoWidget_FullView) == 0x000448, "Member 'UCreativeClassSelector::TeamInfoWidget_FullView' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, TeamInfoWidget_TeamsOnly) == 0x000450, "Member 'UCreativeClassSelector::TeamInfoWidget_TeamsOnly' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, DisplaySwitcher) == 0x000458, "Member 'UCreativeClassSelector::DisplaySwitcher' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ClassAndTeamSelectionContainer) == 0x000460, "Member 'UCreativeClassSelector::ClassAndTeamSelectionContainer' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, OnlyTeamSelectionContainer) == 0x000468, "Member 'UCreativeClassSelector::OnlyTeamSelectionContainer' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, InvalidDataContainer) == 0x000470, "Member 'UCreativeClassSelector::InvalidDataContainer' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, TeamTiles) == 0x000478, "Member 'UCreativeClassSelector::TeamTiles' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, TeamSelectionTabClass) == 0x000480, "Member 'UCreativeClassSelector::TeamSelectionTabClass' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, bIsModalVersion) == 0x000488, "Member 'UCreativeClassSelector::bIsModalVersion' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, bEnableModalTimeLimit) == 0x000489, "Member 'UCreativeClassSelector::bEnableModalTimeLimit' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ModalTimeLimitInSeconds) == 0x00048C, "Member 'UCreativeClassSelector::ModalTimeLimitInSeconds' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, DisplayMode) == 0x0004A0, "Member 'UCreativeClassSelector::DisplayMode' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, bDeferRespawn) == 0x0004A1, "Member 'UCreativeClassSelector::bDeferRespawn' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, ReturnToClassSelectionInputAction) == 0x0004A8, "Member 'UCreativeClassSelector::ReturnToClassSelectionInputAction' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, LoadoutScrollPadding) == 0x0004B8, "Member 'UCreativeClassSelector::LoadoutScrollPadding' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelector, SelectedClassItemInfo) == 0x0004D8, "Member 'UCreativeClassSelector::SelectedClassItemInfo' has a wrong offset!");

class UCreativeClassSelectorMapTab final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x10];
	struct FAthenaMapScreenContainerTabInfo       MapTabInfo;
	class UCreativeClassSelector*                 CreativeClassSelector;

public:
	void OnTabAdded();
	void SetTabName(const class FText& TabName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeClassSelectorMapTab">();
	}
	static class UCreativeClassSelectorMapTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeClassSelectorMapTab>();
	}
};
static_assert(alignof(UCreativeClassSelectorMapTab) == 0x000008, "Wrong alignment on UCreativeClassSelectorMapTab");
static_assert(sizeof(UCreativeClassSelectorMapTab) == 0x000410, "Wrong size on UCreativeClassSelectorMapTab");
static_assert(offsetof(UCreativeClassSelectorMapTab, MapTabInfo) == 0x0003B8, "Member 'UCreativeClassSelectorMapTab::MapTabInfo' has a wrong offset!");
static_assert(offsetof(UCreativeClassSelectorMapTab, CreativeClassSelector) == 0x000408, "Member 'UCreativeClassSelectorMapTab::CreativeClassSelector' has a wrong offset!");

class AMutator_ClassSelectorUI final : public AFortAthenaMutator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Mutator_ClassSelectorUI">();
	}
	static class AMutator_ClassSelectorUI* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMutator_ClassSelectorUI>();
	}
};
static_assert(alignof(AMutator_ClassSelectorUI) == 0x000008, "Wrong alignment on AMutator_ClassSelectorUI");
static_assert(sizeof(AMutator_ClassSelectorUI) == 0x000330, "Wrong size on AMutator_ClassSelectorUI");

}
