#pragma once

#include "Basic.hpp"

#include "CommonUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SaveTheWorldUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CommonInput_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "SaveTheWorldRuntime_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "BlueprintContext_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UFortQuestMapViewer final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];
	class UCommonButtonBase*                      Button_PageRight;
	class UCommonButtonBase*                      Button_PageLeft;
	class UCommonTextBlock*                       Text_Title;
	class UCommonTextBlock*                       Text_Page;
	class USizeBox*                               SizeBox_Viewer;
	class UCanvasPanel*                           CanvasPanel_Cosmetic;
	class UFortQuestMapScreen*                    ParentScreen;
	class UFortQuestMapNodeLayout*                NodeLayout;
	uint8                                         Pad_2E0[0x30];

public:
	void HandleLayoutOutroAnimationFinished();
	void OnPlayLayoutFadeInAnimation();
	void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);
	void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor);
	void UpdateViewerData();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapViewer">();
	}
	static class UFortQuestMapViewer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapViewer>();
	}
};
static_assert(alignof(UFortQuestMapViewer) == 0x000008, "Wrong alignment on UFortQuestMapViewer");
static_assert(sizeof(UFortQuestMapViewer) == 0x000310, "Wrong size on UFortQuestMapViewer");
static_assert(offsetof(UFortQuestMapViewer, Button_PageRight) == 0x0002A0, "Member 'UFortQuestMapViewer::Button_PageRight' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, Button_PageLeft) == 0x0002A8, "Member 'UFortQuestMapViewer::Button_PageLeft' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, Text_Title) == 0x0002B0, "Member 'UFortQuestMapViewer::Text_Title' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, Text_Page) == 0x0002B8, "Member 'UFortQuestMapViewer::Text_Page' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, SizeBox_Viewer) == 0x0002C0, "Member 'UFortQuestMapViewer::SizeBox_Viewer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, CanvasPanel_Cosmetic) == 0x0002C8, "Member 'UFortQuestMapViewer::CanvasPanel_Cosmetic' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, ParentScreen) == 0x0002D0, "Member 'UFortQuestMapViewer::ParentScreen' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer, NodeLayout) == 0x0002D8, "Member 'UFortQuestMapViewer::NodeLayout' has a wrong offset!");

class UFortArmoryScreen final : public UCommonActivatableWidget
{
public:
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);
	void PushItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter, class UFortItem* ItemToSelect, bool bShowAutoMulch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortArmoryScreen">();
	}
	static class UFortArmoryScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortArmoryScreen>();
	}
};
static_assert(alignof(UFortArmoryScreen) == 0x000008, "Wrong alignment on UFortArmoryScreen");
static_assert(sizeof(UFortArmoryScreen) == 0x0003A8, "Wrong size on UFortArmoryScreen");

class UFortArmoryScreen_Legacy final : public UFortActivatablePanel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortArmoryScreen_Legacy">();
	}
	static class UFortArmoryScreen_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortArmoryScreen_Legacy>();
	}
};
static_assert(alignof(UFortArmoryScreen_Legacy) == 0x000008, "Wrong alignment on UFortArmoryScreen_Legacy");
static_assert(sizeof(UFortArmoryScreen_Legacy) == 0x000518, "Wrong size on UFortArmoryScreen_Legacy");

class UFortCommandScreen final : public UCommonActivatableWidget
{
public:
	struct FDataTableRowHandle                    ShowAllStatsActionData;
	struct FDataTableRowHandle                    InspectHeroActionData;
	uint8                                         Pad_3C8[0x8];

public:
	void HandleShowAllStats();
	void HandleUpgradeInspectHero();
	void PushHeroLoadoutScreen(class UFortCampaignHeroLoadoutItem* HeroLoadout);
	void PushItemInspectionScreen(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, class UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCommandScreen">();
	}
	static class UFortCommandScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCommandScreen>();
	}
};
static_assert(alignof(UFortCommandScreen) == 0x000008, "Wrong alignment on UFortCommandScreen");
static_assert(sizeof(UFortCommandScreen) == 0x0003D0, "Wrong size on UFortCommandScreen");
static_assert(offsetof(UFortCommandScreen, ShowAllStatsActionData) == 0x0003A8, "Member 'UFortCommandScreen::ShowAllStatsActionData' has a wrong offset!");
static_assert(offsetof(UFortCommandScreen, InspectHeroActionData) == 0x0003B8, "Member 'UFortCommandScreen::InspectHeroActionData' has a wrong offset!");

class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{
public:
	uint8                                         bUpdateVisibilityBasedOnRewardExistence : 1;
	uint8                                         Pad_291[0x3];
	ESlateVisibility                              VisibilityWhenNoRewardSpecified;
	ESlateVisibility                              VisibilityWhenRewardSpecified;
	uint8                                         Pad_296[0x2];
	class UFortCollectionBookRewardCardWidget*    RewardCardWidget;
	ECollectionBookRewardStatus                   RewardStatus;
	uint8                                         Pad_2A1[0x7];

public:
	void ClearRewards();
	void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus);
	void SetCurrentItemToDisplay(class UFortItem* ItemToDisplay);
	void SetRewards(const struct FFortRewardInfo& Rewards);
	void SetRewardStatus(ECollectionBookRewardStatus Status);

	ECollectionBookRewardStatus GetRewardStatus() const;
	bool HasRewards() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookGenericRewardWidget">();
	}
	static class UFortCollectionBookGenericRewardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookGenericRewardWidget>();
	}
};
static_assert(alignof(UFortCollectionBookGenericRewardWidget) == 0x000008, "Wrong alignment on UFortCollectionBookGenericRewardWidget");
static_assert(sizeof(UFortCollectionBookGenericRewardWidget) == 0x0002A8, "Wrong size on UFortCollectionBookGenericRewardWidget");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, VisibilityWhenNoRewardSpecified) == 0x000294, "Member 'UFortCollectionBookGenericRewardWidget::VisibilityWhenNoRewardSpecified' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, VisibilityWhenRewardSpecified) == 0x000295, "Member 'UFortCollectionBookGenericRewardWidget::VisibilityWhenRewardSpecified' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, RewardCardWidget) == 0x000298, "Member 'UFortCollectionBookGenericRewardWidget::RewardCardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookGenericRewardWidget, RewardStatus) == 0x0002A0, "Member 'UFortCollectionBookGenericRewardWidget::RewardStatus' has a wrong offset!");

class UFortCollectionBookHelpWidget final : public UFortActivatablePanel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookHelpWidget">();
	}
	static class UFortCollectionBookHelpWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookHelpWidget>();
	}
};
static_assert(alignof(UFortCollectionBookHelpWidget) == 0x000008, "Wrong alignment on UFortCollectionBookHelpWidget");
static_assert(sizeof(UFortCollectionBookHelpWidget) == 0x000518, "Wrong size on UFortCollectionBookHelpWidget");

class UFortCollectionBookItemPopupMenu final : public UFortPopupMenu_Legacy
{
public:
	uint8                                         Pad_500[0x8];

public:
	bool CanItemBePurchased();
	bool CanItemBeUnslotted();
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemUpdated();

	class UFortCollectionBookSlotButton* GetHostButton() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookItemPopupMenu">();
	}
	static class UFortCollectionBookItemPopupMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookItemPopupMenu>();
	}
};
static_assert(alignof(UFortCollectionBookItemPopupMenu) == 0x000008, "Wrong alignment on UFortCollectionBookItemPopupMenu");
static_assert(sizeof(UFortCollectionBookItemPopupMenu) == 0x000508, "Wrong size on UFortCollectionBookItemPopupMenu");

class UFortCollectionBookOverviewWidget final : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void(class UFortCollectionBookPage* SelectedPage)> OnCollectionBookPageSelected;
	TMulticastInlineDelegate<void(class UFortCollectionBookPage* ClickedPage)> OnCollectionBookPageClicked;
	class UFortCollectionBookPage*                LastSelectedPage;
	class UFortCollectionBookCategory*            LastSelectedCategory;
	TArray<class UFortCollectionBookCategory*>    CategoryObjectPool;
	class UCommonTreeView*                        PageTreeViewWidget;

public:
	void HandlePagesChanged(class UFortCollectionBookManager* CBManager);
	void OnActivated();
	void OnDeactivated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookOverviewWidget">();
	}
	static class UFortCollectionBookOverviewWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookOverviewWidget>();
	}
};
static_assert(alignof(UFortCollectionBookOverviewWidget) == 0x000008, "Wrong alignment on UFortCollectionBookOverviewWidget");
static_assert(sizeof(UFortCollectionBookOverviewWidget) == 0x0002D8, "Wrong size on UFortCollectionBookOverviewWidget");
static_assert(offsetof(UFortCollectionBookOverviewWidget, OnCollectionBookPageSelected) == 0x000290, "Member 'UFortCollectionBookOverviewWidget::OnCollectionBookPageSelected' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookOverviewWidget, OnCollectionBookPageClicked) == 0x0002A0, "Member 'UFortCollectionBookOverviewWidget::OnCollectionBookPageClicked' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookOverviewWidget, LastSelectedPage) == 0x0002B0, "Member 'UFortCollectionBookOverviewWidget::LastSelectedPage' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookOverviewWidget, LastSelectedCategory) == 0x0002B8, "Member 'UFortCollectionBookOverviewWidget::LastSelectedCategory' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookOverviewWidget, CategoryObjectPool) == 0x0002C0, "Member 'UFortCollectionBookOverviewWidget::CategoryObjectPool' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookOverviewWidget, PageTreeViewWidget) == 0x0002D0, "Member 'UFortCollectionBookOverviewWidget::PageTreeViewWidget' has a wrong offset!");

class UFortCollectionBookPageCompletionRewardWidget final : public UFortCollectionBookGenericRewardWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookPageCompletionRewardWidget">();
	}
	static class UFortCollectionBookPageCompletionRewardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookPageCompletionRewardWidget>();
	}
};
static_assert(alignof(UFortCollectionBookPageCompletionRewardWidget) == 0x000008, "Wrong alignment on UFortCollectionBookPageCompletionRewardWidget");
static_assert(sizeof(UFortCollectionBookPageCompletionRewardWidget) == 0x0002A8, "Wrong size on UFortCollectionBookPageCompletionRewardWidget");

class UFortCollectionBookPageDetailsWidget final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       PageCompletionText;
	class UFortMaterialProgressBar*               ProgressBar;
	class UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;
	class UCommonButtonLegacy*                    RewardDetailsButton;
	class UFortCollectionBookPage*                DetailsPage;
	TSoftClassPtr<class UClass>                   RewardDetailsModalWidgetClass;
	class FText                                   ModalTitle;
	class UFortCollectionBookRewardModalWidget*   RewardDetailsModalWidget;

public:
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
	void OnDetailsPageChanged(const class UFortCollectionBookPage* InNewDetailsPage);
	void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, EFortCollectionBookState State);
	void OnSlotItemComplete(const class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnUnslotItemComplete(const class UFortAccountItem* SlottedItem, const class UFortAccountItem* OldItem, class FName SlotId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookPageDetailsWidget">();
	}
	static class UFortCollectionBookPageDetailsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookPageDetailsWidget>();
	}
};
static_assert(alignof(UFortCollectionBookPageDetailsWidget) == 0x000008, "Wrong alignment on UFortCollectionBookPageDetailsWidget");
static_assert(sizeof(UFortCollectionBookPageDetailsWidget) == 0x000300, "Wrong size on UFortCollectionBookPageDetailsWidget");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, PageCompletionText) == 0x000290, "Member 'UFortCollectionBookPageDetailsWidget::PageCompletionText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, ProgressBar) == 0x000298, "Member 'UFortCollectionBookPageDetailsWidget::ProgressBar' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, PageRewardWidget) == 0x0002A0, "Member 'UFortCollectionBookPageDetailsWidget::PageRewardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, RewardDetailsButton) == 0x0002A8, "Member 'UFortCollectionBookPageDetailsWidget::RewardDetailsButton' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, DetailsPage) == 0x0002B0, "Member 'UFortCollectionBookPageDetailsWidget::DetailsPage' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, RewardDetailsModalWidgetClass) == 0x0002B8, "Member 'UFortCollectionBookPageDetailsWidget::RewardDetailsModalWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, ModalTitle) == 0x0002E0, "Member 'UFortCollectionBookPageDetailsWidget::ModalTitle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageDetailsWidget, RewardDetailsModalWidget) == 0x0002F8, "Member 'UFortCollectionBookPageDetailsWidget::RewardDetailsModalWidget' has a wrong offset!");

class UFortCollectionBookPageListWidget final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UCommonTextBlock*                       PageNameWidget;
	class UCommonNumericTextBlock*                AvailableSlotsWidget;
	class UCommonTextBlock*                       PageCompletionWidget;
	TWeakObjectPtr<class UObject>                 AssociatedPageOrCategory;
	bool                                          bIsExpanded;
	uint8                                         Pad_1459[0x7];

public:
	void OnCategoryDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots);
	void OnPageDetailsUpdated(int32 AvailableSlots, int32 FilledSlots, int32 TotalSlots, EFortCollectionBookState State);
	void OnSlottedItemOperationComplete(const class UFortAccountItem* SlottedItem, class FName SlotId);
	void SetupAsCategory(class UFortCollectionBookCategory* category);
	void SetupAsPage(class UFortCollectionBookPage* Page);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookPageListWidget">();
	}
	static class UFortCollectionBookPageListWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookPageListWidget>();
	}
};
static_assert(alignof(UFortCollectionBookPageListWidget) == 0x000010, "Wrong alignment on UFortCollectionBookPageListWidget");
static_assert(sizeof(UFortCollectionBookPageListWidget) == 0x001460, "Wrong size on UFortCollectionBookPageListWidget");
static_assert(offsetof(UFortCollectionBookPageListWidget, PageNameWidget) == 0x001438, "Member 'UFortCollectionBookPageListWidget::PageNameWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageListWidget, AvailableSlotsWidget) == 0x001440, "Member 'UFortCollectionBookPageListWidget::AvailableSlotsWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageListWidget, PageCompletionWidget) == 0x001448, "Member 'UFortCollectionBookPageListWidget::PageCompletionWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageListWidget, AssociatedPageOrCategory) == 0x001450, "Member 'UFortCollectionBookPageListWidget::AssociatedPageOrCategory' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPageListWidget, bIsExpanded) == 0x001458, "Member 'UFortCollectionBookPageListWidget::bIsExpanded' has a wrong offset!");

class UFortCollectionBookPicker final : public UFortItemPickerBase
{
public:
	uint8                                         Pad_3D0[0x8];
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
	uint8                                         Pad_3E0[0x8];
	class UFortAccountItem*                       CurrentSlottedItem;
	class UFortMulchConfirmationModalWidget*      MulchConfirmationModal;

public:
	void HideMulchConfirmationModal();
	void NotifyPanelActivated();
	void NotifyPanelDeactivated();
	void OnCollectComplete();
	void ShowMulchConfirmationModal();
	void ShowMulchDialogForItem(class UFortItem* ItemToMulch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookPicker">();
	}
	static class UFortCollectionBookPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookPicker>();
	}
};
static_assert(alignof(UFortCollectionBookPicker) == 0x000008, "Wrong alignment on UFortCollectionBookPicker");
static_assert(sizeof(UFortCollectionBookPicker) == 0x0003F8, "Wrong size on UFortCollectionBookPicker");
static_assert(offsetof(UFortCollectionBookPicker, MulchConfirmationModalClass) == 0x0003D8, "Member 'UFortCollectionBookPicker::MulchConfirmationModalClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPicker, CurrentSlottedItem) == 0x0003E8, "Member 'UFortCollectionBookPicker::CurrentSlottedItem' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPicker, MulchConfirmationModal) == 0x0003F0, "Member 'UFortCollectionBookPicker::MulchConfirmationModal' has a wrong offset!");

class UFortCollectionBookPrimaryPanel final : public UCommonActivatablePanelLegacy
{
public:
	TMulticastInlineDelegate<void(class UFortCollectionBookPage* SelectedPage)> OnCollectionBookPageSelectedDelegate;
	TMulticastInlineDelegate<void(class UFortCollectionBookPage* ClickedPage)> OnCollectionBookPageClickedDelegate;
	TMulticastInlineDelegate<void(class UFortCollectionBookSection* ClickedSection)> OnCollectionBookSectionClickedDelegate;
	struct FDataTableRowHandle                    BackActionRowHandle;
	struct FDataTableRowHandle                    SummonInfoPanelActionRowHandle;
	class UFortCollectionBookOverviewWidget*      OverviewWidget;
	class UCommonTileView*                        SectionTileViewWidget;
	ECollectionBookPrimaryNavTarget               CurrentNavTarget;
	uint8                                         Pad_541[0x7];
	class UFortCollectionBookSection*             LastClickedSection;
	uint8                                         Pad_550[0x50];

public:
	void OnBackActionExecuted(bool* bPassThrough);
	void OnCollectionBookPageClicked(const class UFortCollectionBookPage* ClickedPage);
	void OnCollectionBookPageSelected(const class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookSectionClicked(const class UFortCollectionBookSection* ClickedSection);
	void OnInputMethodChanged(ECommonInputType CurrentInputType);
	void OnSummonInfoPanelExecuted(bool* bPassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookPrimaryPanel">();
	}
	static class UFortCollectionBookPrimaryPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookPrimaryPanel>();
	}
};
static_assert(alignof(UFortCollectionBookPrimaryPanel) == 0x000008, "Wrong alignment on UFortCollectionBookPrimaryPanel");
static_assert(sizeof(UFortCollectionBookPrimaryPanel) == 0x0005A0, "Wrong size on UFortCollectionBookPrimaryPanel");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OnCollectionBookPageSelectedDelegate) == 0x0004E0, "Member 'UFortCollectionBookPrimaryPanel::OnCollectionBookPageSelectedDelegate' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OnCollectionBookPageClickedDelegate) == 0x0004F0, "Member 'UFortCollectionBookPrimaryPanel::OnCollectionBookPageClickedDelegate' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OnCollectionBookSectionClickedDelegate) == 0x000500, "Member 'UFortCollectionBookPrimaryPanel::OnCollectionBookSectionClickedDelegate' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, BackActionRowHandle) == 0x000510, "Member 'UFortCollectionBookPrimaryPanel::BackActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, SummonInfoPanelActionRowHandle) == 0x000520, "Member 'UFortCollectionBookPrimaryPanel::SummonInfoPanelActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, OverviewWidget) == 0x000530, "Member 'UFortCollectionBookPrimaryPanel::OverviewWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, SectionTileViewWidget) == 0x000538, "Member 'UFortCollectionBookPrimaryPanel::SectionTileViewWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, CurrentNavTarget) == 0x000540, "Member 'UFortCollectionBookPrimaryPanel::CurrentNavTarget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookPrimaryPanel, LastClickedSection) == 0x000548, "Member 'UFortCollectionBookPrimaryPanel::LastClickedSection' has a wrong offset!");

class UFortCollectionBookProgressionRewardDetailInspectWidget final : public UCommonUserWidget
{
public:
	class UCommonNumericTextBlock*                LevelTextWidget;
	class UFortRewardInfoWidget_Legacy*           RewardWidget;
	class UWidget*                                CheckmarkImage;
	uint8                                         Pad_2A8[0x8];

public:
	void OnXPRequiredChanged(int32 NewXPRequired);
	void SetAssociatedLevel(int32 Level);

	int32 GetXPRequired() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookProgressionRewardDetailInspectWidget">();
	}
	static class UFortCollectionBookProgressionRewardDetailInspectWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookProgressionRewardDetailInspectWidget>();
	}
};
static_assert(alignof(UFortCollectionBookProgressionRewardDetailInspectWidget) == 0x000008, "Wrong alignment on UFortCollectionBookProgressionRewardDetailInspectWidget");
static_assert(sizeof(UFortCollectionBookProgressionRewardDetailInspectWidget) == 0x0002B0, "Wrong size on UFortCollectionBookProgressionRewardDetailInspectWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardDetailInspectWidget, LevelTextWidget) == 0x000290, "Member 'UFortCollectionBookProgressionRewardDetailInspectWidget::LevelTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardDetailInspectWidget, RewardWidget) == 0x000298, "Member 'UFortCollectionBookProgressionRewardDetailInspectWidget::RewardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardDetailInspectWidget, CheckmarkImage) == 0x0002A0, "Member 'UFortCollectionBookProgressionRewardDetailInspectWidget::CheckmarkImage' has a wrong offset!");

class UFortCollectionBookProgressionRewardsModalWidget final : public UFortActivatablePanel
{
public:
	TSoftClassPtr<class UClass>                   RewardWidgetClass;
	struct FMargin                                RewardWidgetPadding;
	int32                                         NumRewardsToShow;
	uint8                                         Pad_554[0x4];
	class UVerticalBox*                           RewardBoxWidget;
	class UVerticalBox*                           MajorRewardBoxWidget;
	class UCommonTextBlock*                       XPTextWidget;
	class UCommonNumericTextBlock*                LevelTextWidget;
	class UCommonButtonGroupLegacy*               ButtonGroup;

public:
	void InspectItemBP(class UFortItem* Item);
	void OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel);
	void OnSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookProgressionRewardsModalWidget">();
	}
	static class UFortCollectionBookProgressionRewardsModalWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookProgressionRewardsModalWidget>();
	}
};
static_assert(alignof(UFortCollectionBookProgressionRewardsModalWidget) == 0x000008, "Wrong alignment on UFortCollectionBookProgressionRewardsModalWidget");
static_assert(sizeof(UFortCollectionBookProgressionRewardsModalWidget) == 0x000580, "Wrong size on UFortCollectionBookProgressionRewardsModalWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, RewardWidgetClass) == 0x000518, "Member 'UFortCollectionBookProgressionRewardsModalWidget::RewardWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, RewardWidgetPadding) == 0x000540, "Member 'UFortCollectionBookProgressionRewardsModalWidget::RewardWidgetPadding' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, NumRewardsToShow) == 0x000550, "Member 'UFortCollectionBookProgressionRewardsModalWidget::NumRewardsToShow' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, RewardBoxWidget) == 0x000558, "Member 'UFortCollectionBookProgressionRewardsModalWidget::RewardBoxWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, MajorRewardBoxWidget) == 0x000560, "Member 'UFortCollectionBookProgressionRewardsModalWidget::MajorRewardBoxWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, XPTextWidget) == 0x000568, "Member 'UFortCollectionBookProgressionRewardsModalWidget::XPTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, LevelTextWidget) == 0x000570, "Member 'UFortCollectionBookProgressionRewardsModalWidget::LevelTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsModalWidget, ButtonGroup) == 0x000578, "Member 'UFortCollectionBookProgressionRewardsModalWidget::ButtonGroup' has a wrong offset!");

class UFortCollectionBookProgressionRewardsPreviewWidget final : public UCommonUserWidget
{
public:
	class UFortCollectionBookProgressionRewardWidget* NextRewardWidget;
	class UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookProgressionRewardsPreviewWidget">();
	}
	static class UFortCollectionBookProgressionRewardsPreviewWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookProgressionRewardsPreviewWidget>();
	}
};
static_assert(alignof(UFortCollectionBookProgressionRewardsPreviewWidget) == 0x000008, "Wrong alignment on UFortCollectionBookProgressionRewardsPreviewWidget");
static_assert(sizeof(UFortCollectionBookProgressionRewardsPreviewWidget) == 0x0002A0, "Wrong size on UFortCollectionBookProgressionRewardsPreviewWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardsPreviewWidget, NextRewardWidget) == 0x000290, "Member 'UFortCollectionBookProgressionRewardsPreviewWidget::NextRewardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardsPreviewWidget, NextMajorRewardWidget) == 0x000298, "Member 'UFortCollectionBookProgressionRewardsPreviewWidget::NextMajorRewardWidget' has a wrong offset!");

class UFortCollectionBookProgressionRewardWidget final : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonNumericTextBlock*                LevelTextWidget;
	class UCommonTextBlock*                       DisplayNameWidget;

public:
	void SetAssociatedLevel(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookProgressionRewardWidget">();
	}
	static class UFortCollectionBookProgressionRewardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookProgressionRewardWidget>();
	}
};
static_assert(alignof(UFortCollectionBookProgressionRewardWidget) == 0x000008, "Wrong alignment on UFortCollectionBookProgressionRewardWidget");
static_assert(sizeof(UFortCollectionBookProgressionRewardWidget) == 0x0002B8, "Wrong size on UFortCollectionBookProgressionRewardWidget");
static_assert(offsetof(UFortCollectionBookProgressionRewardWidget, LevelTextWidget) == 0x0002A8, "Member 'UFortCollectionBookProgressionRewardWidget::LevelTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressionRewardWidget, DisplayNameWidget) == 0x0002B0, "Member 'UFortCollectionBookProgressionRewardWidget::DisplayNameWidget' has a wrong offset!");

class UFortCollectionBookProgressWidget final : public UCommonUserWidget
{
public:
	int32                                         CachedXPLevel;
	float                                         CachedXPCompletionPct;
	TSoftClassPtr<class UClass>                   RewardDetailsModalWidgetClass;
	class UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;
	class UCommonTextBlock*                       XPTextWidget;
	class UCommonNumericTextBlock*                LevelTextWidget;
	class UCommonButtonLegacy*                    DetailsButtonWidget;
	class UFortCollectionBookPageDetailsWidget*   PageDetailsWidget;
	class UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;

public:
	void HandleDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
	void OnCollectionBookLevelChanged(int32 NewLevel);
	void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
	void OnCollectionBookPageSelected(const class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
	void OnInventoryUpdated();
	void OnSlottedItemOperationComplete(const class UFortAccountItem* ItemSlotted, class FName SlotId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookProgressWidget">();
	}
	static class UFortCollectionBookProgressWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookProgressWidget>();
	}
};
static_assert(alignof(UFortCollectionBookProgressWidget) == 0x000008, "Wrong alignment on UFortCollectionBookProgressWidget");
static_assert(sizeof(UFortCollectionBookProgressWidget) == 0x0002F0, "Wrong size on UFortCollectionBookProgressWidget");
static_assert(offsetof(UFortCollectionBookProgressWidget, CachedXPLevel) == 0x000290, "Member 'UFortCollectionBookProgressWidget::CachedXPLevel' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, CachedXPCompletionPct) == 0x000294, "Member 'UFortCollectionBookProgressWidget::CachedXPCompletionPct' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, RewardDetailsModalWidgetClass) == 0x000298, "Member 'UFortCollectionBookProgressWidget::RewardDetailsModalWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, ProgressionRewardsPreviewWidget) == 0x0002C0, "Member 'UFortCollectionBookProgressWidget::ProgressionRewardsPreviewWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, XPTextWidget) == 0x0002C8, "Member 'UFortCollectionBookProgressWidget::XPTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, LevelTextWidget) == 0x0002D0, "Member 'UFortCollectionBookProgressWidget::LevelTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, DetailsButtonWidget) == 0x0002D8, "Member 'UFortCollectionBookProgressWidget::DetailsButtonWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, PageDetailsWidget) == 0x0002E0, "Member 'UFortCollectionBookProgressWidget::PageDetailsWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookProgressWidget, DetailsModalWidget) == 0x0002E8, "Member 'UFortCollectionBookProgressWidget::DetailsModalWidget' has a wrong offset!");

class UFortCollectionBookRecycleSlotResultsWidget final : public UCommonUserWidget
{
public:
	class UPanelWidget*                           RecycleResultsWidget;
	EFortItemCardSize                             ItemCardSize;
	uint8                                         Pad_299[0x7];
	class UFortAccountItem*                       ItemToRecycle;

public:
	void SetCurrentItemToRecycle(class UFortAccountItem* InItemToRecycle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookRecycleSlotResultsWidget">();
	}
	static class UFortCollectionBookRecycleSlotResultsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookRecycleSlotResultsWidget>();
	}
};
static_assert(alignof(UFortCollectionBookRecycleSlotResultsWidget) == 0x000008, "Wrong alignment on UFortCollectionBookRecycleSlotResultsWidget");
static_assert(sizeof(UFortCollectionBookRecycleSlotResultsWidget) == 0x0002A8, "Wrong size on UFortCollectionBookRecycleSlotResultsWidget");
static_assert(offsetof(UFortCollectionBookRecycleSlotResultsWidget, RecycleResultsWidget) == 0x000290, "Member 'UFortCollectionBookRecycleSlotResultsWidget::RecycleResultsWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRecycleSlotResultsWidget, ItemCardSize) == 0x000298, "Member 'UFortCollectionBookRecycleSlotResultsWidget::ItemCardSize' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRecycleSlotResultsWidget, ItemToRecycle) == 0x0002A0, "Member 'UFortCollectionBookRecycleSlotResultsWidget::ItemToRecycle' has a wrong offset!");

class UFortCollectionBookRewardCardWidget final : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void(class UFortItem* DisplayedItem)> OnDisplayedItemChangedEvent;
	class UFortMultiSizeItemCard*                 ItemCardWidget;
	class UWidget*                                MultiItemRewardOverlay;
	class UWidget*                                ChoiceRewardOverlay;
	class UWidget*                                CheckmarkImage;
	float                                         UpdateCardInterval;
	EFortItemCardSize                             ItemCardSize;
	bool                                          bDisplayAsRewardCard;
	uint8                                         Pad_2C6[0x2];
	struct FFortRewardInfo                        RepresentedRewards;
	TArray<class UFortItem*>                      DummyItems;
	struct FTimerHandle                           UpdateCardTimer;
	uint8                                         Pad_310[0x8];

public:
	void ClearRewards();
	void SetRewards(const struct FFortRewardInfo& Rewards);

	bool HasRewards() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookRewardCardWidget">();
	}
	static class UFortCollectionBookRewardCardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookRewardCardWidget>();
	}
};
static_assert(alignof(UFortCollectionBookRewardCardWidget) == 0x000008, "Wrong alignment on UFortCollectionBookRewardCardWidget");
static_assert(sizeof(UFortCollectionBookRewardCardWidget) == 0x000318, "Wrong size on UFortCollectionBookRewardCardWidget");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, OnDisplayedItemChangedEvent) == 0x000290, "Member 'UFortCollectionBookRewardCardWidget::OnDisplayedItemChangedEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, ItemCardWidget) == 0x0002A0, "Member 'UFortCollectionBookRewardCardWidget::ItemCardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, MultiItemRewardOverlay) == 0x0002A8, "Member 'UFortCollectionBookRewardCardWidget::MultiItemRewardOverlay' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, ChoiceRewardOverlay) == 0x0002B0, "Member 'UFortCollectionBookRewardCardWidget::ChoiceRewardOverlay' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, CheckmarkImage) == 0x0002B8, "Member 'UFortCollectionBookRewardCardWidget::CheckmarkImage' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, UpdateCardInterval) == 0x0002C0, "Member 'UFortCollectionBookRewardCardWidget::UpdateCardInterval' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, ItemCardSize) == 0x0002C4, "Member 'UFortCollectionBookRewardCardWidget::ItemCardSize' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, bDisplayAsRewardCard) == 0x0002C5, "Member 'UFortCollectionBookRewardCardWidget::bDisplayAsRewardCard' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, RepresentedRewards) == 0x0002C8, "Member 'UFortCollectionBookRewardCardWidget::RepresentedRewards' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, DummyItems) == 0x0002F8, "Member 'UFortCollectionBookRewardCardWidget::DummyItems' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardCardWidget, UpdateCardTimer) == 0x000308, "Member 'UFortCollectionBookRewardCardWidget::UpdateCardTimer' has a wrong offset!");

class UFortCollectionBookRewardModalWidget final : public UCommonActivatablePanelLegacy
{
public:
	class UCommonTextBlock*                       TitleWidget;
	class UFortRewardInfoWidget_Legacy*           RewardWidget;
	class UFortMaterialProgressBar*               ProgressBar;
	class UCommonTextBlock*                       ProgressTextWidget;
	uint8                                         Pad_500[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookRewardModalWidget">();
	}
	static class UFortCollectionBookRewardModalWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookRewardModalWidget>();
	}
};
static_assert(alignof(UFortCollectionBookRewardModalWidget) == 0x000008, "Wrong alignment on UFortCollectionBookRewardModalWidget");
static_assert(sizeof(UFortCollectionBookRewardModalWidget) == 0x000530, "Wrong size on UFortCollectionBookRewardModalWidget");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, TitleWidget) == 0x0004E0, "Member 'UFortCollectionBookRewardModalWidget::TitleWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, RewardWidget) == 0x0004E8, "Member 'UFortCollectionBookRewardModalWidget::RewardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, ProgressBar) == 0x0004F0, "Member 'UFortCollectionBookRewardModalWidget::ProgressBar' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookRewardModalWidget, ProgressTextWidget) == 0x0004F8, "Member 'UFortCollectionBookRewardModalWidget::ProgressTextWidget' has a wrong offset!");

class UFortCollectionBookSectionCompletionRewardWidget final : public UFortCollectionBookGenericRewardWidget
{
public:
	class UCommonButtonLegacy*                    RewardDetailsButton;
	TSoftClassPtr<class UClass>                   RewardDetailsModalWidgetClass;
	class FText                                   ModalTitle;
	class UFortCollectionBookRewardModalWidget*   RewardDetailsModalWidget;
	class UFortCollectionBookSection*             Section;

public:
	void HandleRewardDetailsModalWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSectionCompletionRewardWidget">();
	}
	static class UFortCollectionBookSectionCompletionRewardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSectionCompletionRewardWidget>();
	}
};
static_assert(alignof(UFortCollectionBookSectionCompletionRewardWidget) == 0x000008, "Wrong alignment on UFortCollectionBookSectionCompletionRewardWidget");
static_assert(sizeof(UFortCollectionBookSectionCompletionRewardWidget) == 0x000300, "Wrong size on UFortCollectionBookSectionCompletionRewardWidget");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, RewardDetailsButton) == 0x0002A8, "Member 'UFortCollectionBookSectionCompletionRewardWidget::RewardDetailsButton' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, RewardDetailsModalWidgetClass) == 0x0002B0, "Member 'UFortCollectionBookSectionCompletionRewardWidget::RewardDetailsModalWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, ModalTitle) == 0x0002D8, "Member 'UFortCollectionBookSectionCompletionRewardWidget::ModalTitle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, RewardDetailsModalWidget) == 0x0002F0, "Member 'UFortCollectionBookSectionCompletionRewardWidget::RewardDetailsModalWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionCompletionRewardWidget, Section) == 0x0002F8, "Member 'UFortCollectionBookSectionCompletionRewardWidget::Section' has a wrong offset!");

class UFortCollectionBookSectionPanel final : public UCommonActivatablePanelLegacy
{
public:
	TMulticastInlineDelegate<void()>              OnSectionCloseRequest;
	TMulticastInlineDelegate<void(int32 XPChange)> OnPreviewXPChangeEvent;
	class UCommonTextBlock*                       SectionNameTextWidget;
	class UFortCollectionBookSlotView*            SlotViewWidget;
	class UFortCollectionBookPicker*              SlotItemPicker;
	class UWidget*                                ContextOverlayWidget;
	class UTextBlock*                             ContextTextWidget;
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget;
	class UWidget*                                ItemAcquisitionSourceContainerWidget;
	class UCommonTextBlock*                       ItemAcquisitionSourceDescWidget;
	class UCommonTextBlock*                       ItemAcquisitionSourceDesc2Widget;
	class UWidget*                                ResearchRecruitUnslotContainerWidget;
	class UCommonTextBlock*                       PersonRecruitUnavailableMessageWidget;
	class UCommonTextBlock*                       ItemResearchUnavailableMessageWidget;
	class UCommonTextBlock*                       UnslotUnavailableMessageWidget;
	struct FDataTableRowHandle                    BackActionRowHandle;
	struct FDataTableRowHandle                    CloseActionRowHandle;
	struct FDataTableRowHandle                    SlotItemActionRowHandle;
	struct FDataTableRowHandle                    InspectItemActionRowHandle;
	struct FDataTableRowHandle                    InspectCollectionBookItemActionRowHandle;
	struct FDataTableRowHandle                    InspectPreviewItemActionRowHandle;
	struct FDataTableRowHandle                    OpenPickerActionRowHandle;
	struct FDataTableRowHandle                    LogAllowedItemsActionRowHandle;
	struct FDataTableRowHandle                    ResearchItemActionRowHandle;
	struct FDataTableRowHandle                    RecruitActionRowHandle;
	struct FDataTableRowHandle                    UnslotItemActionRowHandle;
	ECollectionBookSectionNavTarget               CurrentNavTarget;
	uint8                                         Pad_619[0x7];
	class UFortCollectionBookSection*             AssociatedSection;
	bool                                          bHasSummonedPanel;
	uint8                                         Pad_629[0x3];
	struct FFortDialogExternalLatentActionHandle  SlotConfirmationDialogLatentHandle;
	TMulticastInlineDelegate<void(class UFortItem* SelectedItem)> OnShowItemDetailEvent;
	TMulticastInlineDelegate<void(class UFortItem* SelectedItem)> OnSlotItemConfirmEvent;
	TMulticastInlineDelegate<void(class UFortItem* SelectedItem, struct FFortCollectionBookSlotData& SlotData)> OnResearchItemConfirmEvent;
	TMulticastInlineDelegate<void(class UFortItem* SelectedItem)> OnUnslotItemConfirmEvent;
	TMulticastInlineDelegate<void(class UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem)> OnInspectItemEvent;
	uint8                                         Pad_680[0x28];
	TSubclassOf<class UFortCollectionBookSlotConfirmationModal> SlotConfirmationModalClass;

public:
	void OnBackActionExecuted(bool* bPassThrough);
	void OnInspectActionExecuted(bool* bPassThrough);
	void OnLogAllowedItemsActionExecuted(bool* bPassThrough);
	void OnOpenPickerActionExecuted(bool* bPassThrough);
	void OnPurchaseItemActionExecuted(bool* bPassThrough);
	void OnResearchItemOperationComplete(const class UFortAccountItem* NewItem, const class FString& TemplateId);
	void OnSectionChanged(const class UFortCollectionBookSection* Section);
	void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction);
	void OnSlotButtonHovered(int32 ButtonIx);
	void OnSlotButtonSelected(const class UFortCollectionBookSlotButton* SlotButton);
	void OnSlotItemActionExecuted(bool* bPassThrough);
	void OnSlottedItemOperationComplete(const class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnUnslotItemActionExecuted(bool* bPassThrough);
	void OnUnslotItemComplete(const class UFortItem* UnslottedItem, class FName SlotId);
	void OnUnslotItemOperationComplete(const class UFortAccountItem* UnslottedItem, const class UFortAccountItem* OldSlottedItem, class FName SlotId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSectionPanel">();
	}
	static class UFortCollectionBookSectionPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSectionPanel>();
	}
};
static_assert(alignof(UFortCollectionBookSectionPanel) == 0x000008, "Wrong alignment on UFortCollectionBookSectionPanel");
static_assert(sizeof(UFortCollectionBookSectionPanel) == 0x0006B0, "Wrong size on UFortCollectionBookSectionPanel");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnSectionCloseRequest) == 0x0004E0, "Member 'UFortCollectionBookSectionPanel::OnSectionCloseRequest' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnPreviewXPChangeEvent) == 0x0004F0, "Member 'UFortCollectionBookSectionPanel::OnPreviewXPChangeEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SectionNameTextWidget) == 0x000500, "Member 'UFortCollectionBookSectionPanel::SectionNameTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotViewWidget) == 0x000508, "Member 'UFortCollectionBookSectionPanel::SlotViewWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotItemPicker) == 0x000510, "Member 'UFortCollectionBookSectionPanel::SlotItemPicker' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ContextOverlayWidget) == 0x000518, "Member 'UFortCollectionBookSectionPanel::ContextOverlayWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ContextTextWidget) == 0x000520, "Member 'UFortCollectionBookSectionPanel::ContextTextWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SectionRewardWidget) == 0x000528, "Member 'UFortCollectionBookSectionPanel::SectionRewardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemAcquisitionSourceContainerWidget) == 0x000530, "Member 'UFortCollectionBookSectionPanel::ItemAcquisitionSourceContainerWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemAcquisitionSourceDescWidget) == 0x000538, "Member 'UFortCollectionBookSectionPanel::ItemAcquisitionSourceDescWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemAcquisitionSourceDesc2Widget) == 0x000540, "Member 'UFortCollectionBookSectionPanel::ItemAcquisitionSourceDesc2Widget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ResearchRecruitUnslotContainerWidget) == 0x000548, "Member 'UFortCollectionBookSectionPanel::ResearchRecruitUnslotContainerWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, PersonRecruitUnavailableMessageWidget) == 0x000550, "Member 'UFortCollectionBookSectionPanel::PersonRecruitUnavailableMessageWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ItemResearchUnavailableMessageWidget) == 0x000558, "Member 'UFortCollectionBookSectionPanel::ItemResearchUnavailableMessageWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, UnslotUnavailableMessageWidget) == 0x000560, "Member 'UFortCollectionBookSectionPanel::UnslotUnavailableMessageWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, BackActionRowHandle) == 0x000568, "Member 'UFortCollectionBookSectionPanel::BackActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, CloseActionRowHandle) == 0x000578, "Member 'UFortCollectionBookSectionPanel::CloseActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotItemActionRowHandle) == 0x000588, "Member 'UFortCollectionBookSectionPanel::SlotItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, InspectItemActionRowHandle) == 0x000598, "Member 'UFortCollectionBookSectionPanel::InspectItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, InspectCollectionBookItemActionRowHandle) == 0x0005A8, "Member 'UFortCollectionBookSectionPanel::InspectCollectionBookItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, InspectPreviewItemActionRowHandle) == 0x0005B8, "Member 'UFortCollectionBookSectionPanel::InspectPreviewItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OpenPickerActionRowHandle) == 0x0005C8, "Member 'UFortCollectionBookSectionPanel::OpenPickerActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, LogAllowedItemsActionRowHandle) == 0x0005D8, "Member 'UFortCollectionBookSectionPanel::LogAllowedItemsActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, ResearchItemActionRowHandle) == 0x0005E8, "Member 'UFortCollectionBookSectionPanel::ResearchItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, RecruitActionRowHandle) == 0x0005F8, "Member 'UFortCollectionBookSectionPanel::RecruitActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, UnslotItemActionRowHandle) == 0x000608, "Member 'UFortCollectionBookSectionPanel::UnslotItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, CurrentNavTarget) == 0x000618, "Member 'UFortCollectionBookSectionPanel::CurrentNavTarget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, AssociatedSection) == 0x000620, "Member 'UFortCollectionBookSectionPanel::AssociatedSection' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, bHasSummonedPanel) == 0x000628, "Member 'UFortCollectionBookSectionPanel::bHasSummonedPanel' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotConfirmationDialogLatentHandle) == 0x00062C, "Member 'UFortCollectionBookSectionPanel::SlotConfirmationDialogLatentHandle' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnShowItemDetailEvent) == 0x000630, "Member 'UFortCollectionBookSectionPanel::OnShowItemDetailEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnSlotItemConfirmEvent) == 0x000640, "Member 'UFortCollectionBookSectionPanel::OnSlotItemConfirmEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnResearchItemConfirmEvent) == 0x000650, "Member 'UFortCollectionBookSectionPanel::OnResearchItemConfirmEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnUnslotItemConfirmEvent) == 0x000660, "Member 'UFortCollectionBookSectionPanel::OnUnslotItemConfirmEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, OnInspectItemEvent) == 0x000670, "Member 'UFortCollectionBookSectionPanel::OnInspectItemEvent' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionPanel, SlotConfirmationModalClass) == 0x0006A8, "Member 'UFortCollectionBookSectionPanel::SlotConfirmationModalClass' has a wrong offset!");

class UFortCollectionBookSectionTileWidget final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	TSoftClassPtr<class UClass>                   SlotWidgetClass;
	struct FMargin                                SlotWidgetPadding;
	EHorizontalAlignment                          SlotWidgetHorizontalAlignment;
	EVerticalAlignment                            SlotWidgetVerticalAlignment;
	uint8                                         Pad_1472[0x2];
	int32                                         MaxNumSlotsSupported;
	class UHorizontalBox*                         SlotBoxWidget;
	class UCommonTextBlock*                       SectionNameWidget;
	class UFortCollectionBookGenericRewardWidget* SectionRewardWidget;
	class UFortCollectionBookSection*             AssociatedSection;
	TArray<class UFortCollectionBookSlotWidget*>  SlotWidgets;
	uint8                                         Pad_14A8[0x8];

public:
	void OnItemSlotted(const class UFortAccountItem* ItemSlotted, class FName SlotId);
	void OnItemUnslotted(const class UFortAccountItem* ItemUnslotted, const class UFortAccountItem* OldSlottedItem, class FName SlotId);
	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSectionTileWidget">();
	}
	static class UFortCollectionBookSectionTileWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSectionTileWidget>();
	}
};
static_assert(alignof(UFortCollectionBookSectionTileWidget) == 0x000010, "Wrong alignment on UFortCollectionBookSectionTileWidget");
static_assert(sizeof(UFortCollectionBookSectionTileWidget) == 0x0014B0, "Wrong size on UFortCollectionBookSectionTileWidget");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetClass) == 0x001438, "Member 'UFortCollectionBookSectionTileWidget::SlotWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetPadding) == 0x001460, "Member 'UFortCollectionBookSectionTileWidget::SlotWidgetPadding' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetHorizontalAlignment) == 0x001470, "Member 'UFortCollectionBookSectionTileWidget::SlotWidgetHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgetVerticalAlignment) == 0x001471, "Member 'UFortCollectionBookSectionTileWidget::SlotWidgetVerticalAlignment' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, MaxNumSlotsSupported) == 0x001474, "Member 'UFortCollectionBookSectionTileWidget::MaxNumSlotsSupported' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotBoxWidget) == 0x001478, "Member 'UFortCollectionBookSectionTileWidget::SlotBoxWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SectionNameWidget) == 0x001480, "Member 'UFortCollectionBookSectionTileWidget::SectionNameWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SectionRewardWidget) == 0x001488, "Member 'UFortCollectionBookSectionTileWidget::SectionRewardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, AssociatedSection) == 0x001490, "Member 'UFortCollectionBookSectionTileWidget::AssociatedSection' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSectionTileWidget, SlotWidgets) == 0x001498, "Member 'UFortCollectionBookSectionTileWidget::SlotWidgets' has a wrong offset!");

class UFortCollectionBookSlotButton final : public UCommonButtonLegacy
{
public:
	class UFortCollectionBookSlotWidget*          CollectionBookSlotWidget;
	class UMenuAnchor*                            PopupMenuAnchor;
	uint8                                         Pad_1440[0x30];

public:
	class UUserWidget* GetPopupMenu();
	void OnSlottedItemUpdated();
	void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSlotButton">();
	}
	static class UFortCollectionBookSlotButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSlotButton>();
	}
};
static_assert(alignof(UFortCollectionBookSlotButton) == 0x000010, "Wrong alignment on UFortCollectionBookSlotButton");
static_assert(sizeof(UFortCollectionBookSlotButton) == 0x001470, "Wrong size on UFortCollectionBookSlotButton");
static_assert(offsetof(UFortCollectionBookSlotButton, CollectionBookSlotWidget) == 0x001430, "Member 'UFortCollectionBookSlotButton::CollectionBookSlotWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotButton, PopupMenuAnchor) == 0x001438, "Member 'UFortCollectionBookSlotButton::PopupMenuAnchor' has a wrong offset!");

class UFortCollectionBookSlotConfirmationModal final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_518[0x8];
	class UFortAccountItem*                       CurrentlySlottedItem;
	class UFortAccountItem*                       NewItemToSlot;
	class UCommonTextBlock*                       Text_SlottingDescription;
	class UFortMultiSizeItemCard*                 ItemCard_NewlySlottedItem;
	class UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget;
	class UCommonButtonLegacy*                    Button_SlotItem;
	class UCommonButtonLegacy*                    Button_Back;
	uint8                                         Pad_558[0x18];

public:
	void HandleSlotItemComplete(const class UFortAccountItem* SlottedItem, class FName SlotId);
	void OnSlotItemRequested();
	void OnSlotItemRequestedComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSlotConfirmationModal">();
	}
	static class UFortCollectionBookSlotConfirmationModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSlotConfirmationModal>();
	}
};
static_assert(alignof(UFortCollectionBookSlotConfirmationModal) == 0x000008, "Wrong alignment on UFortCollectionBookSlotConfirmationModal");
static_assert(sizeof(UFortCollectionBookSlotConfirmationModal) == 0x000570, "Wrong size on UFortCollectionBookSlotConfirmationModal");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, CurrentlySlottedItem) == 0x000520, "Member 'UFortCollectionBookSlotConfirmationModal::CurrentlySlottedItem' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, NewItemToSlot) == 0x000528, "Member 'UFortCollectionBookSlotConfirmationModal::NewItemToSlot' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, Text_SlottingDescription) == 0x000530, "Member 'UFortCollectionBookSlotConfirmationModal::Text_SlottingDescription' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, ItemCard_NewlySlottedItem) == 0x000538, "Member 'UFortCollectionBookSlotConfirmationModal::ItemCard_NewlySlottedItem' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, RecycleSlotResultsWidget) == 0x000540, "Member 'UFortCollectionBookSlotConfirmationModal::RecycleSlotResultsWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, Button_SlotItem) == 0x000548, "Member 'UFortCollectionBookSlotConfirmationModal::Button_SlotItem' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotConfirmationModal, Button_Back) == 0x000550, "Member 'UFortCollectionBookSlotConfirmationModal::Button_Back' has a wrong offset!");

class UFortCollectionBookSlotDetailsWidget final : public UCommonUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSlotDetailsWidget">();
	}
	static class UFortCollectionBookSlotDetailsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSlotDetailsWidget>();
	}
};
static_assert(alignof(UFortCollectionBookSlotDetailsWidget) == 0x000008, "Wrong alignment on UFortCollectionBookSlotDetailsWidget");
static_assert(sizeof(UFortCollectionBookSlotDetailsWidget) == 0x000290, "Wrong size on UFortCollectionBookSlotDetailsWidget");

class UFortCollectionBookSlotView final : public UCommonUserWidget
{
public:
	TSoftClassPtr<class UClass>                   CollectionBookButtonClass;
	class UHorizontalBox*                         CollectionBookButtonBox;
	class UCommonButtonGroupLegacy*               CollectionBookSlotButtonGroup;
	TArray<class UFortCollectionBookSlotButton*>  CollectionBookSlotButtons;
	class UFortCollectionBookSection*             AssociatedSection;
	uint8                                         Pad_2E0[0x48];
	int32                                         PreviousSelectedButtonIdx;
	int32                                         CurrentSelectedButtonIdx;
	uint8                                         Pad_330[0x8];

public:
	void OnSelectedSlotButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIdx);
	void OnSlotButtonClicked(class UCommonButtonLegacy* ClickedButton, int32 ButtonIdx);
	void OnSlotButtonHovered(class UCommonButtonLegacy* HoveredButton, int32 ButtonIdx);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSlotView">();
	}
	static class UFortCollectionBookSlotView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSlotView>();
	}
};
static_assert(alignof(UFortCollectionBookSlotView) == 0x000008, "Wrong alignment on UFortCollectionBookSlotView");
static_assert(sizeof(UFortCollectionBookSlotView) == 0x000338, "Wrong size on UFortCollectionBookSlotView");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookButtonClass) == 0x000290, "Member 'UFortCollectionBookSlotView::CollectionBookButtonClass' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookButtonBox) == 0x0002B8, "Member 'UFortCollectionBookSlotView::CollectionBookButtonBox' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookSlotButtonGroup) == 0x0002C0, "Member 'UFortCollectionBookSlotView::CollectionBookSlotButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotView, CollectionBookSlotButtons) == 0x0002C8, "Member 'UFortCollectionBookSlotView::CollectionBookSlotButtons' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotView, AssociatedSection) == 0x0002D8, "Member 'UFortCollectionBookSlotView::AssociatedSection' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotView, PreviousSelectedButtonIdx) == 0x000328, "Member 'UFortCollectionBookSlotView::PreviousSelectedButtonIdx' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotView, CurrentSelectedButtonIdx) == 0x00032C, "Member 'UFortCollectionBookSlotView::CurrentSelectedButtonIdx' has a wrong offset!");

class UFortCollectionBookSlotWidget final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];
	EFortItemCardSize                             ItemCardSize;
	bool                                          bIsRewardCard;
	uint8                                         Pad_2A2[0x6];
	class UFortMultiSizeItemCard*                 ItemCardWidget;
	class UWidget*                                UnslottedOverlayWidget;
	class UWidget*                                ReadyToSlotOverlayWidget;
	class UWidget*                                UnslottedButReadyOverlayWidget;
	class FName                                   SlotRowName;
	uint8                                         Pad_2CC[0x4];
	class FText                                   ItemAvailableToSlotText;
	class FText                                   NoItemsAvailableToSlotText;
	class FText                                   HigherQualityItemsAvailableToSlotAndUpgradeAvailableText;
	class FText                                   HigherQualityItemsAvailableToSlotAndEvolveAvailableText;
	class FText                                   HigherQualityItemsAvailableToSlotText;
	class FText                                   ItemInSlotFullyUpgradedText;
	class FText                                   ItemInSlotCanBeUpgradedText;
	class FText                                   ItemInSlotCanBeEvolvedText;
	class UFortItem*                              SlottedItemRepresentation;
	uint8                                         Pad_398[0x20];

public:
	void HandleResearchItemComplete(const class UFortAccountItem* ResearchedItem, const class FString& SlotId);
	void HandleSlottedItemOperationComplete(const class UFortAccountItem* NewItem, class FName TemplateId);
	void HandleUnslotItemComplete(const class UFortAccountItem* UnslottedItem, const class UFortAccountItem* OldItem, class FName SlotId);
	void OnItemCardUpdated();
	void OnItemDestroyed();

	int32 GetNumItemsToSlot() const;
	const class FName GetSlotRowName() const;
	class UFortItem* GetSlottedItemRepresentation() const;
	bool HasItemsToSlot() const;
	bool IsItemSlotted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookSlotWidget">();
	}
	static class UFortCollectionBookSlotWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookSlotWidget>();
	}
};
static_assert(alignof(UFortCollectionBookSlotWidget) == 0x000008, "Wrong alignment on UFortCollectionBookSlotWidget");
static_assert(sizeof(UFortCollectionBookSlotWidget) == 0x0003B8, "Wrong size on UFortCollectionBookSlotWidget");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemCardSize) == 0x0002A0, "Member 'UFortCollectionBookSlotWidget::ItemCardSize' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, bIsRewardCard) == 0x0002A1, "Member 'UFortCollectionBookSlotWidget::bIsRewardCard' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemCardWidget) == 0x0002A8, "Member 'UFortCollectionBookSlotWidget::ItemCardWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, UnslottedOverlayWidget) == 0x0002B0, "Member 'UFortCollectionBookSlotWidget::UnslottedOverlayWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, ReadyToSlotOverlayWidget) == 0x0002B8, "Member 'UFortCollectionBookSlotWidget::ReadyToSlotOverlayWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, UnslottedButReadyOverlayWidget) == 0x0002C0, "Member 'UFortCollectionBookSlotWidget::UnslottedButReadyOverlayWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, SlotRowName) == 0x0002C8, "Member 'UFortCollectionBookSlotWidget::SlotRowName' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemAvailableToSlotText) == 0x0002D0, "Member 'UFortCollectionBookSlotWidget::ItemAvailableToSlotText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, NoItemsAvailableToSlotText) == 0x0002E8, "Member 'UFortCollectionBookSlotWidget::NoItemsAvailableToSlotText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, HigherQualityItemsAvailableToSlotAndUpgradeAvailableText) == 0x000300, "Member 'UFortCollectionBookSlotWidget::HigherQualityItemsAvailableToSlotAndUpgradeAvailableText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, HigherQualityItemsAvailableToSlotAndEvolveAvailableText) == 0x000318, "Member 'UFortCollectionBookSlotWidget::HigherQualityItemsAvailableToSlotAndEvolveAvailableText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, HigherQualityItemsAvailableToSlotText) == 0x000330, "Member 'UFortCollectionBookSlotWidget::HigherQualityItemsAvailableToSlotText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemInSlotFullyUpgradedText) == 0x000348, "Member 'UFortCollectionBookSlotWidget::ItemInSlotFullyUpgradedText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemInSlotCanBeUpgradedText) == 0x000360, "Member 'UFortCollectionBookSlotWidget::ItemInSlotCanBeUpgradedText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, ItemInSlotCanBeEvolvedText) == 0x000378, "Member 'UFortCollectionBookSlotWidget::ItemInSlotCanBeEvolvedText' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookSlotWidget, SlottedItemRepresentation) == 0x000390, "Member 'UFortCollectionBookSlotWidget::SlottedItemRepresentation' has a wrong offset!");

class UFortCollectionBookWidget final : public UFortActivatablePanel
{
public:
	class UFortCollectionBookProgressWidget*      ProgressWidget;
	class UCommonWidgetSwitcherLegacy*            MainWidgetSwitcher;
	class UFortCollectionBookPrimaryPanel*        PrimaryPanelWidget;
	class UFortCollectionBookSectionPanel*        SectionPanelWidget;
	int32                                         PrimaryPanelIdx;
	int32                                         SectionPanelIdx;
	uint8                                         Pad_540[0x8];

public:
	void OnCollectionBookPageClicked(const class UFortCollectionBookPage* ClickedPage);
	void OnCollectionBookPageSelected(const class UFortCollectionBookPage* SelectedPage);
	void OnCollectionBookSectionClicked(const class UFortCollectionBookSection* ClickedSection);
	void OnCollectionBookSectionCloseRequest();
	void OnPreviewXPChangeRequest(int32 XPChange);
	void RequestToClose();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCollectionBookWidget">();
	}
	static class UFortCollectionBookWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCollectionBookWidget>();
	}
};
static_assert(alignof(UFortCollectionBookWidget) == 0x000008, "Wrong alignment on UFortCollectionBookWidget");
static_assert(sizeof(UFortCollectionBookWidget) == 0x000548, "Wrong size on UFortCollectionBookWidget");
static_assert(offsetof(UFortCollectionBookWidget, ProgressWidget) == 0x000518, "Member 'UFortCollectionBookWidget::ProgressWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookWidget, MainWidgetSwitcher) == 0x000520, "Member 'UFortCollectionBookWidget::MainWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookWidget, PrimaryPanelWidget) == 0x000528, "Member 'UFortCollectionBookWidget::PrimaryPanelWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookWidget, SectionPanelWidget) == 0x000530, "Member 'UFortCollectionBookWidget::SectionPanelWidget' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookWidget, PrimaryPanelIdx) == 0x000538, "Member 'UFortCollectionBookWidget::PrimaryPanelIdx' has a wrong offset!");
static_assert(offsetof(UFortCollectionBookWidget, SectionPanelIdx) == 0x00053C, "Member 'UFortCollectionBookWidget::SectionPanelIdx' has a wrong offset!");

class UFortAbilitySystemContext final : public UBlueprintContextBase
{
public:
	uint8                                         Pad_30[0x50];

public:
	void RegisterForAttributeChanged(class UWidget* Widget, class UAbilitySystemComponent* ASC, const struct FGameplayAttribute& Attribute, TDelegate<void()> Callback);
	void RemoveDelegatesFromWidget(class UWidget* Widget);

	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAbilitySystemContext">();
	}
	static class UFortAbilitySystemContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAbilitySystemContext>();
	}
};
static_assert(alignof(UFortAbilitySystemContext) == 0x000008, "Wrong alignment on UFortAbilitySystemContext");
static_assert(sizeof(UFortAbilitySystemContext) == 0x000080, "Wrong size on UFortAbilitySystemContext");

class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{
public:
	uint8                                         Pad_430[0x8];
	bool                                          bShowIneligible;
	uint8                                         Pad_439[0x7];
	class UUserWidget*                            FirstOfferGenerated;
	uint8                                         Pad_448[0x10];
	class UHorizontalBox*                         HorizontalBox_LargeTile;
	class UGridPanel*                             GridPanel_SmallTile;
	class UHorizontalBox*                         HorizontalBox_ReorderedItems;
	class UVerticalBox*                           VerticalBox_FeatureItems;
	class UVerticalBox*                           VerticalBox_DailyItems;
	class UScaleBox*                              ScaleBox_Main;

public:
	void HandleAffiliateButtonClicked();
	void IsTabsLayout(bool bShouldDisplayTabs);
	void OnDisplayToast(const bool bDisplayToast);

	struct FDateTime GetDailyStoreEndDate() const;
	struct FDateTime GetSeasonStoreEndDate() const;
	TArray<class UFortAccountItemDefinition*> GetStoreCurrencies() const;
	struct FDateTime GetWeeklyStoreEndDate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDirectAcquisitionWidgetBase">();
	}
	static class UFortDirectAcquisitionWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDirectAcquisitionWidgetBase>();
	}
};
static_assert(alignof(UFortDirectAcquisitionWidgetBase) == 0x000008, "Wrong alignment on UFortDirectAcquisitionWidgetBase");
static_assert(sizeof(UFortDirectAcquisitionWidgetBase) == 0x000488, "Wrong size on UFortDirectAcquisitionWidgetBase");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, bShowIneligible) == 0x000438, "Member 'UFortDirectAcquisitionWidgetBase::bShowIneligible' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, FirstOfferGenerated) == 0x000440, "Member 'UFortDirectAcquisitionWidgetBase::FirstOfferGenerated' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, HorizontalBox_LargeTile) == 0x000458, "Member 'UFortDirectAcquisitionWidgetBase::HorizontalBox_LargeTile' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, GridPanel_SmallTile) == 0x000460, "Member 'UFortDirectAcquisitionWidgetBase::GridPanel_SmallTile' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, HorizontalBox_ReorderedItems) == 0x000468, "Member 'UFortDirectAcquisitionWidgetBase::HorizontalBox_ReorderedItems' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, VerticalBox_FeatureItems) == 0x000470, "Member 'UFortDirectAcquisitionWidgetBase::VerticalBox_FeatureItems' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, VerticalBox_DailyItems) == 0x000478, "Member 'UFortDirectAcquisitionWidgetBase::VerticalBox_DailyItems' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase, ScaleBox_Main) == 0x000480, "Member 'UFortDirectAcquisitionWidgetBase::ScaleBox_Main' has a wrong offset!");

class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{
public:
	uint8                                         Pad_5A0[0x8];
	bool                                          bShowIneligible;
	uint8                                         Pad_5A9[0x7];
	class UUserWidget*                            FirstOfferGenerated;
	uint8                                         Pad_5B8[0x10];
	class UHorizontalBox*                         HorizontalBox_LargeTile;
	class UGridPanel*                             GridPanel_SmallTile;
	class UHorizontalBox*                         HorizontalBox_ReorderedItems;
	class UVerticalBox*                           VerticalBox_FeatureItems;
	class UVerticalBox*                           VerticalBox_DailyItems;
	class UScaleBox*                              ScaleBox_Main;

public:
	void HandleAffiliateButtonClicked();
	void IsTabsLayout(bool bShouldDisplayTabs);
	void OnDisplayToast(const bool bDisplayToast);

	struct FDateTime GetDailyStoreEndDate() const;
	struct FDateTime GetSeasonStoreEndDate() const;
	TArray<class UFortAccountItemDefinition*> GetStoreCurrencies() const;
	struct FDateTime GetWeeklyStoreEndDate() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDirectAcquisitionWidgetBase_Legacy">();
	}
	static class UFortDirectAcquisitionWidgetBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDirectAcquisitionWidgetBase_Legacy>();
	}
};
static_assert(alignof(UFortDirectAcquisitionWidgetBase_Legacy) == 0x000008, "Wrong alignment on UFortDirectAcquisitionWidgetBase_Legacy");
static_assert(sizeof(UFortDirectAcquisitionWidgetBase_Legacy) == 0x0005F8, "Wrong size on UFortDirectAcquisitionWidgetBase_Legacy");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, bShowIneligible) == 0x0005A8, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::bShowIneligible' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, FirstOfferGenerated) == 0x0005B0, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::FirstOfferGenerated' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, HorizontalBox_LargeTile) == 0x0005C8, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::HorizontalBox_LargeTile' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, GridPanel_SmallTile) == 0x0005D0, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::GridPanel_SmallTile' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, HorizontalBox_ReorderedItems) == 0x0005D8, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::HorizontalBox_ReorderedItems' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, VerticalBox_FeatureItems) == 0x0005E0, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::VerticalBox_FeatureItems' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, VerticalBox_DailyItems) == 0x0005E8, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::VerticalBox_DailyItems' has a wrong offset!");
static_assert(offsetof(UFortDirectAcquisitionWidgetBase_Legacy, ScaleBox_Main) == 0x0005F0, "Member 'UFortDirectAcquisitionWidgetBase_Legacy::ScaleBox_Main' has a wrong offset!");

class UFortExpeditionBuildSquadWidget final : public UCommonActivatablePanelLegacy
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>     Item;
	class FName                                   CurrentSquadId;
	uint8                                         Pad_4EC[0x4];
	class UFortSquadSlotsView*                    ExpeditionSquadSlotsView;
	class UFortSquadSlotDetailsPanel*             ExpeditionSquadSlotDetails;
	class UFortSquadSlotItemPicker*               ExpeditionSquadSlotPicker;
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;
	uint8                                         Pad_518[0x28];

public:
	void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
	void HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex);
	void HandleRequestStartExpedition(bool* bPassThrough);
	bool IsExpeditionValidToStart();
	void OnRefreshBuildSquadWidget();
	void OnRequestClosePicker();
	void SetCurrentSquadId(class FName SquadId);
	void SetData(class UFortExpeditionItem* InItem);

	bool IsSquadSlotLocked(int32 SlotIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionBuildSquadWidget">();
	}
	static class UFortExpeditionBuildSquadWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionBuildSquadWidget>();
	}
};
static_assert(alignof(UFortExpeditionBuildSquadWidget) == 0x000008, "Wrong alignment on UFortExpeditionBuildSquadWidget");
static_assert(sizeof(UFortExpeditionBuildSquadWidget) == 0x000540, "Wrong size on UFortExpeditionBuildSquadWidget");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, Item) == 0x0004E0, "Member 'UFortExpeditionBuildSquadWidget::Item' has a wrong offset!");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, CurrentSquadId) == 0x0004E8, "Member 'UFortExpeditionBuildSquadWidget::CurrentSquadId' has a wrong offset!");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ExpeditionSquadSlotsView) == 0x0004F0, "Member 'UFortExpeditionBuildSquadWidget::ExpeditionSquadSlotsView' has a wrong offset!");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ExpeditionSquadSlotDetails) == 0x0004F8, "Member 'UFortExpeditionBuildSquadWidget::ExpeditionSquadSlotDetails' has a wrong offset!");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ExpeditionSquadSlotPicker) == 0x000500, "Member 'UFortExpeditionBuildSquadWidget::ExpeditionSquadSlotPicker' has a wrong offset!");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ItemViewContext_ExpeditionSlotsView) == 0x000508, "Member 'UFortExpeditionBuildSquadWidget::ItemViewContext_ExpeditionSlotsView' has a wrong offset!");
static_assert(offsetof(UFortExpeditionBuildSquadWidget, ItemViewContext_ExpeditionSlotItemPicker) == 0x000510, "Member 'UFortExpeditionBuildSquadWidget::ItemViewContext_ExpeditionSlotItemPicker' has a wrong offset!");

class UFortExpeditionDetailsWidget final : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>     Item;
	class UFortSquadSlotsView*                    ExpeditionSquadSlotsView;
	class FName                                   CurrentSquadId;
	uint8                                         Pad_2A4[0x4];
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;
	uint8                                         Pad_2B0[0x20];

public:
	void HandleAbandonExpeditionCompleted(const class UFortExpeditionItem* Expedition, bool bSuccess);
	void RequestAbandonExpedition();
	void SetCurrentSquadId(class FName SquadId);
	void SetData(class UFortExpeditionItem* InItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionDetailsWidget">();
	}
	static class UFortExpeditionDetailsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionDetailsWidget>();
	}
};
static_assert(alignof(UFortExpeditionDetailsWidget) == 0x000008, "Wrong alignment on UFortExpeditionDetailsWidget");
static_assert(sizeof(UFortExpeditionDetailsWidget) == 0x0002D0, "Wrong size on UFortExpeditionDetailsWidget");
static_assert(offsetof(UFortExpeditionDetailsWidget, Item) == 0x000290, "Member 'UFortExpeditionDetailsWidget::Item' has a wrong offset!");
static_assert(offsetof(UFortExpeditionDetailsWidget, ExpeditionSquadSlotsView) == 0x000298, "Member 'UFortExpeditionDetailsWidget::ExpeditionSquadSlotsView' has a wrong offset!");
static_assert(offsetof(UFortExpeditionDetailsWidget, CurrentSquadId) == 0x0002A0, "Member 'UFortExpeditionDetailsWidget::CurrentSquadId' has a wrong offset!");
static_assert(offsetof(UFortExpeditionDetailsWidget, ItemViewContext_ExpeditionSlotsView) == 0x0002A8, "Member 'UFortExpeditionDetailsWidget::ItemViewContext_ExpeditionSlotsView' has a wrong offset!");

class UFortExpeditionExpiresWidget final : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>     Item;
	uint8                                         Pad_298[0x8];

public:
	void OnExpeditionExpirationUpdated();
	void SetData(class UFortExpeditionItem* InItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionExpiresWidget">();
	}
	static class UFortExpeditionExpiresWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionExpiresWidget>();
	}
};
static_assert(alignof(UFortExpeditionExpiresWidget) == 0x000008, "Wrong alignment on UFortExpeditionExpiresWidget");
static_assert(sizeof(UFortExpeditionExpiresWidget) == 0x0002A0, "Wrong size on UFortExpeditionExpiresWidget");
static_assert(offsetof(UFortExpeditionExpiresWidget, Item) == 0x000290, "Member 'UFortExpeditionExpiresWidget::Item' has a wrong offset!");

class UFortExpeditionListItemWidget final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	TWeakObjectPtr<class UFortExpeditionItem>     Item;
	uint8                                         Pad_1440[0x10];

public:
	void OnItemChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionListItemWidget">();
	}
	static class UFortExpeditionListItemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionListItemWidget>();
	}
};
static_assert(alignof(UFortExpeditionListItemWidget) == 0x000010, "Wrong alignment on UFortExpeditionListItemWidget");
static_assert(sizeof(UFortExpeditionListItemWidget) == 0x001450, "Wrong size on UFortExpeditionListItemWidget");
static_assert(offsetof(UFortExpeditionListItemWidget, Item) == 0x001438, "Member 'UFortExpeditionListItemWidget::Item' has a wrong offset!");

class UFortExpeditionListViewWidget final : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void(class UFortExpeditionItem* Item)> OnExpeditionSelected;
	TMulticastInlineDelegate<void()>              OnExpeditionListViewRefreshed;
	class UCommonListView*                        ExpeditionListView;
	class FName                                   CurrentTabNameId;
	EFortExpeditionListSort                       SortType;
	uint8                                         Pad_2BD[0x3];

public:
	void SetExpeditionListSortType(EFortExpeditionListSort InSortType);

	class FText GetExpeditionListSortName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionListViewWidget">();
	}
	static class UFortExpeditionListViewWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionListViewWidget>();
	}
};
static_assert(alignof(UFortExpeditionListViewWidget) == 0x000008, "Wrong alignment on UFortExpeditionListViewWidget");
static_assert(sizeof(UFortExpeditionListViewWidget) == 0x0002C0, "Wrong size on UFortExpeditionListViewWidget");
static_assert(offsetof(UFortExpeditionListViewWidget, OnExpeditionSelected) == 0x000290, "Member 'UFortExpeditionListViewWidget::OnExpeditionSelected' has a wrong offset!");
static_assert(offsetof(UFortExpeditionListViewWidget, OnExpeditionListViewRefreshed) == 0x0002A0, "Member 'UFortExpeditionListViewWidget::OnExpeditionListViewRefreshed' has a wrong offset!");
static_assert(offsetof(UFortExpeditionListViewWidget, ExpeditionListView) == 0x0002B0, "Member 'UFortExpeditionListViewWidget::ExpeditionListView' has a wrong offset!");
static_assert(offsetof(UFortExpeditionListViewWidget, CurrentTabNameId) == 0x0002B8, "Member 'UFortExpeditionListViewWidget::CurrentTabNameId' has a wrong offset!");
static_assert(offsetof(UFortExpeditionListViewWidget, SortType) == 0x0002BC, "Member 'UFortExpeditionListViewWidget::SortType' has a wrong offset!");

class UFortExpeditionMasterWidget final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4E0[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionMasterWidget">();
	}
	static class UFortExpeditionMasterWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionMasterWidget>();
	}
};
static_assert(alignof(UFortExpeditionMasterWidget) == 0x000008, "Wrong alignment on UFortExpeditionMasterWidget");
static_assert(sizeof(UFortExpeditionMasterWidget) == 0x000500, "Wrong size on UFortExpeditionMasterWidget");

class UFortExpeditionOverviewWidget final : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButtonBase>          TabButtonType;
	TArray<struct FExpeditionTabInfo>             TabListRegistrationInfo;
	class UFortTabListWidgetBase_Legacy*          ExpeditionTabList;
	class UFortExpeditionListViewWidget*          ExpeditionListView;

public:
	void HandleExpeditionTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleExpeditionTabSelected(class FName TabNameID);
	void OnExpeditionOverviewRefresh();
	void OnExpeditionTabSelected(const class FName& TabNameID);
	void UpdateExpeditionTabs();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionOverviewWidget">();
	}
	static class UFortExpeditionOverviewWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionOverviewWidget>();
	}
};
static_assert(alignof(UFortExpeditionOverviewWidget) == 0x000008, "Wrong alignment on UFortExpeditionOverviewWidget");
static_assert(sizeof(UFortExpeditionOverviewWidget) == 0x0002B8, "Wrong size on UFortExpeditionOverviewWidget");
static_assert(offsetof(UFortExpeditionOverviewWidget, TabButtonType) == 0x000290, "Member 'UFortExpeditionOverviewWidget::TabButtonType' has a wrong offset!");
static_assert(offsetof(UFortExpeditionOverviewWidget, TabListRegistrationInfo) == 0x000298, "Member 'UFortExpeditionOverviewWidget::TabListRegistrationInfo' has a wrong offset!");
static_assert(offsetof(UFortExpeditionOverviewWidget, ExpeditionTabList) == 0x0002A8, "Member 'UFortExpeditionOverviewWidget::ExpeditionTabList' has a wrong offset!");
static_assert(offsetof(UFortExpeditionOverviewWidget, ExpeditionListView) == 0x0002B0, "Member 'UFortExpeditionOverviewWidget::ExpeditionListView' has a wrong offset!");

class UFortExpeditionPickVehicleWidget final : public UCommonActivatablePanelLegacy
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>     Item;

public:
	void SetData(class UFortExpeditionItem* InItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionPickVehicleWidget">();
	}
	static class UFortExpeditionPickVehicleWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionPickVehicleWidget>();
	}
};
static_assert(alignof(UFortExpeditionPickVehicleWidget) == 0x000008, "Wrong alignment on UFortExpeditionPickVehicleWidget");
static_assert(sizeof(UFortExpeditionPickVehicleWidget) == 0x0004E8, "Wrong size on UFortExpeditionPickVehicleWidget");
static_assert(offsetof(UFortExpeditionPickVehicleWidget, Item) == 0x0004E0, "Member 'UFortExpeditionPickVehicleWidget::Item' has a wrong offset!");

class UFortExpeditionReturnsWidget final : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortExpeditionItem>     Item;
	uint8                                         Pad_298[0x8];

public:
	void OnExpeditionInProgressUpdated();
	void SetData(class UFortExpeditionItem* InItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionReturnsWidget">();
	}
	static class UFortExpeditionReturnsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionReturnsWidget>();
	}
};
static_assert(alignof(UFortExpeditionReturnsWidget) == 0x000008, "Wrong alignment on UFortExpeditionReturnsWidget");
static_assert(sizeof(UFortExpeditionReturnsWidget) == 0x0002A0, "Wrong size on UFortExpeditionReturnsWidget");
static_assert(offsetof(UFortExpeditionReturnsWidget, Item) == 0x000290, "Member 'UFortExpeditionReturnsWidget::Item' has a wrong offset!");

class UFortExpeditionRewardsWidget final : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void()>              OnAllExpeditionsCollected;
	class UCommonTileView*                        RewardsTileView;
	bool                                          bPendingCollection;
	uint8                                         Pad_2A9[0xF];

public:
	void HandleCollectionExpeditionCompleted(bool bMcpSuccess, const class UFortExpeditionItem* Expedition, bool bExpeditionSuccess, const TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void ProcessNextReward();
	void RefreshRewardsUI(const class UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, const TArray<struct FFortItemInstanceQuantityPair>& Rewards);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionRewardsWidget">();
	}
	static class UFortExpeditionRewardsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionRewardsWidget>();
	}
};
static_assert(alignof(UFortExpeditionRewardsWidget) == 0x000008, "Wrong alignment on UFortExpeditionRewardsWidget");
static_assert(sizeof(UFortExpeditionRewardsWidget) == 0x0002B8, "Wrong size on UFortExpeditionRewardsWidget");
static_assert(offsetof(UFortExpeditionRewardsWidget, OnAllExpeditionsCollected) == 0x000290, "Member 'UFortExpeditionRewardsWidget::OnAllExpeditionsCollected' has a wrong offset!");
static_assert(offsetof(UFortExpeditionRewardsWidget, RewardsTileView) == 0x0002A0, "Member 'UFortExpeditionRewardsWidget::RewardsTileView' has a wrong offset!");
static_assert(offsetof(UFortExpeditionRewardsWidget, bPendingCollection) == 0x0002A8, "Member 'UFortExpeditionRewardsWidget::bPendingCollection' has a wrong offset!");

class UFortExpeditionSummaryWidget final : public UCommonUserWidget
{
public:
	int32                                         AvailableExpeditions;
	int32                                         CompletedExpeditions;
	int32                                         LandVehiclesTotal;
	int32                                         LandVehiclesAvailable;
	int32                                         AirVehiclesTotal;
	int32                                         AirVehiclesAvailable;
	int32                                         SeaVehiclesTotal;
	int32                                         SeaVehiclesAvailable;
	int32                                         LandExpeditionsTotal;
	int32                                         LandExpeditionsAvailable;
	int32                                         AirExpeditionsTotal;
	int32                                         AirExpeditionsAvailable;
	int32                                         SeaExpeditionsTotal;
	int32                                         SeaExpeditionsAvailable;
	TArray<class UFortExpeditionItem*>            InProgressExpeditions;
	uint8                                         Pad_2D8[0x10];

public:
	void BindInventoryDelegates();
	void OnRefreshSummaryWidget();
	void UnbindInventoryDelegates();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionSummaryWidget">();
	}
	static class UFortExpeditionSummaryWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionSummaryWidget>();
	}
};
static_assert(alignof(UFortExpeditionSummaryWidget) == 0x000008, "Wrong alignment on UFortExpeditionSummaryWidget");
static_assert(sizeof(UFortExpeditionSummaryWidget) == 0x0002E8, "Wrong size on UFortExpeditionSummaryWidget");
static_assert(offsetof(UFortExpeditionSummaryWidget, AvailableExpeditions) == 0x000290, "Member 'UFortExpeditionSummaryWidget::AvailableExpeditions' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, CompletedExpeditions) == 0x000294, "Member 'UFortExpeditionSummaryWidget::CompletedExpeditions' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandVehiclesTotal) == 0x000298, "Member 'UFortExpeditionSummaryWidget::LandVehiclesTotal' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandVehiclesAvailable) == 0x00029C, "Member 'UFortExpeditionSummaryWidget::LandVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirVehiclesTotal) == 0x0002A0, "Member 'UFortExpeditionSummaryWidget::AirVehiclesTotal' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirVehiclesAvailable) == 0x0002A4, "Member 'UFortExpeditionSummaryWidget::AirVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaVehiclesTotal) == 0x0002A8, "Member 'UFortExpeditionSummaryWidget::SeaVehiclesTotal' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaVehiclesAvailable) == 0x0002AC, "Member 'UFortExpeditionSummaryWidget::SeaVehiclesAvailable' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandExpeditionsTotal) == 0x0002B0, "Member 'UFortExpeditionSummaryWidget::LandExpeditionsTotal' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, LandExpeditionsAvailable) == 0x0002B4, "Member 'UFortExpeditionSummaryWidget::LandExpeditionsAvailable' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirExpeditionsTotal) == 0x0002B8, "Member 'UFortExpeditionSummaryWidget::AirExpeditionsTotal' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, AirExpeditionsAvailable) == 0x0002BC, "Member 'UFortExpeditionSummaryWidget::AirExpeditionsAvailable' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaExpeditionsTotal) == 0x0002C0, "Member 'UFortExpeditionSummaryWidget::SeaExpeditionsTotal' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, SeaExpeditionsAvailable) == 0x0002C4, "Member 'UFortExpeditionSummaryWidget::SeaExpeditionsAvailable' has a wrong offset!");
static_assert(offsetof(UFortExpeditionSummaryWidget, InProgressExpeditions) == 0x0002C8, "Member 'UFortExpeditionSummaryWidget::InProgressExpeditions' has a wrong offset!");

class UFortExpeditionUtilities final : public UBlueprintFunctionLibrary
{
public:
	static bool AreAnyExpeditionsComplete(const class UWidget* Widget);
	static bool AreExpeditionsUnlocked(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& UniqueId);
	static float CalculateExpeditionPercentageChanceForSuccess(const class UFortExpeditionItem* Expedition, const float TotalPower);
	static void CalculateGlobalAndItemRatingModValuesBP(const class UFortExpeditionItem* Expedition, const TArray<class UFortItem*>& SlottedItems, float* GlobalPowerMod, TArray<float>* SlottedItemMods);
	static float CalculateTotalPower(class AFortPlayerController* FortPC, const class UFortExpeditionItem* Expedition, const class FName& SquadId, const TArray<class UFortItem*>& SlottedItems);
	static void GetAllExpeditionSquadIds(TArray<class FName>* OutExpeditionSquadIds);
	static float GetExpeditionSquadPower(class AFortPlayerController* FortPC, const class FName& SquadId);
	static bool GetExpeditionSquadsThatMatchRequirements(const struct FGameplayTagContainer& RequirementTags, class AFortPlayerController* FortPC, TArray<class FName>* OutExpeditionSquadIds);
	static void GetMatchedCriteriaTags(class UFortExpeditionItem* Expedition, const TArray<class UFortItem*>& SlottedItems, TArray<struct FGameplayTag>* OutMatchedCriteria);
	static void GetTotalExpeditionVehiclesAvailable(const class UWidget* Widget, class AFortPlayerController* FortPC, int32* OutLandVehicles, int32* OutLandVehiclesAvailable, int32* OutSeaVehicles, int32* OutSeaVehiclesAvailable, int32* OutAirVehicles, int32* OutAirVehiclesAvailable);
	static bool GetVehicleTagFromSquadId(const class FName& SquadId, struct FGameplayTag* OutFoundVehicleTag);
	static struct FGameplayTag GetVehicleTagRequiredForExpedition(const class UFortExpeditionItem* Expedition);
	static bool IsSquadOnExpedition(const class UWidget* Widget, const class FName& SquadId);
	static int32 TotalUnseenExpeditionsForTab(const class UWidget* Widget, const class FName& TabNameID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionUtilities">();
	}
	static class UFortExpeditionUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionUtilities>();
	}
};
static_assert(alignof(UFortExpeditionUtilities) == 0x000008, "Wrong alignment on UFortExpeditionUtilities");
static_assert(sizeof(UFortExpeditionUtilities) == 0x000028, "Wrong size on UFortExpeditionUtilities");

class UFortExpeditionVehicleTileItemWidget final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	TWeakObjectPtr<class UObject>                 SquadId;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExpeditionVehicleTileItemWidget">();
	}
	static class UFortExpeditionVehicleTileItemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortExpeditionVehicleTileItemWidget>();
	}
};
static_assert(alignof(UFortExpeditionVehicleTileItemWidget) == 0x000010, "Wrong alignment on UFortExpeditionVehicleTileItemWidget");
static_assert(sizeof(UFortExpeditionVehicleTileItemWidget) == 0x001440, "Wrong size on UFortExpeditionVehicleTileItemWidget");
static_assert(offsetof(UFortExpeditionVehicleTileItemWidget, SquadId) == 0x001438, "Member 'UFortExpeditionVehicleTileItemWidget::SquadId' has a wrong offset!");

class UFortFeatureUnlockWidget final : public UFortActivatablePanel
{
public:
	class UCommonWidgetSwitcherLegacy*            MediaSwitcher;
	class UWidget*                                VideoContent;
	class UWidget*                                ImageContent;
	class UFortVideoPlayerWidget*                 VideoWidget;
	class UCommonLazyImage*                       ImageWidget;
	uint8                                         Pad_540[0x10];

public:
	void RefreshDataBP();
	void SetData(const class FString& ItemTemplateID);

	class FText GetDescription() const;
	TSoftObjectPtr<class UTexture2D> GetLargeIcon() const;
	TSoftObjectPtr<class UTexture2D> GetSmallIcon() const;
	class FText GetTitle() const;
	class UMediaSource* GetVideo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortFeatureUnlockWidget">();
	}
	static class UFortFeatureUnlockWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortFeatureUnlockWidget>();
	}
};
static_assert(alignof(UFortFeatureUnlockWidget) == 0x000008, "Wrong alignment on UFortFeatureUnlockWidget");
static_assert(sizeof(UFortFeatureUnlockWidget) == 0x000550, "Wrong size on UFortFeatureUnlockWidget");
static_assert(offsetof(UFortFeatureUnlockWidget, MediaSwitcher) == 0x000518, "Member 'UFortFeatureUnlockWidget::MediaSwitcher' has a wrong offset!");
static_assert(offsetof(UFortFeatureUnlockWidget, VideoContent) == 0x000520, "Member 'UFortFeatureUnlockWidget::VideoContent' has a wrong offset!");
static_assert(offsetof(UFortFeatureUnlockWidget, ImageContent) == 0x000528, "Member 'UFortFeatureUnlockWidget::ImageContent' has a wrong offset!");
static_assert(offsetof(UFortFeatureUnlockWidget, VideoWidget) == 0x000530, "Member 'UFortFeatureUnlockWidget::VideoWidget' has a wrong offset!");
static_assert(offsetof(UFortFeatureUnlockWidget, ImageWidget) == 0x000538, "Member 'UFortFeatureUnlockWidget::ImageWidget' has a wrong offset!");

class UFortResultsWidgetSTW final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x78];
	int32                                         AdditionalGrantedMissionPoints;
	uint8                                         Pad_424[0x4];
	TArray<class UFortItem*>                      RewardedBadges;
	TArray<class UFortItem*>                      MissedBadges;
	TArray<class UFortItem*>                      RewardedItems;
	TArray<class UFortItem*>                      RewardedAccountItems;
	class UCommonUserWidget*                      Radial_Picker;

public:
	void GetRewardsByType(EFortRewardItemTypeSTW Type, TArray<class UFortItem*>* OutRewards);
	int32 GetTotalMissionPointsEarned();
	void HandleEmoteClicked(bool* bPassThrough);
	void HandlePickerCancel(bool* bPassThrough);
	void LogXPData();
	void RequestExitZone();
	void SendEndOfRoundFriendInviteAnalytic(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void SendEndOfRoundScreenAnalytic(const class FString& ScreenName, bool Skipped, float TimeSpent);
	void SendEndOfRoundUpVoteAnalytic(const struct FUniqueNetIdRepl& TargetId, const class FString& TargetPlayerName);
	void ToggleChat(bool bShow);
	void TriggerSetupTeleportCameraEvent();

	EFortCompletionResult GetZoneCompletionResult() const;
	class FText GetZoneCompletionResultText() const;
	bool IsDataFinalized() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortResultsWidgetSTW">();
	}
	static class UFortResultsWidgetSTW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortResultsWidgetSTW>();
	}
};
static_assert(alignof(UFortResultsWidgetSTW) == 0x000008, "Wrong alignment on UFortResultsWidgetSTW");
static_assert(sizeof(UFortResultsWidgetSTW) == 0x000470, "Wrong size on UFortResultsWidgetSTW");
static_assert(offsetof(UFortResultsWidgetSTW, AdditionalGrantedMissionPoints) == 0x000420, "Member 'UFortResultsWidgetSTW::AdditionalGrantedMissionPoints' has a wrong offset!");
static_assert(offsetof(UFortResultsWidgetSTW, RewardedBadges) == 0x000428, "Member 'UFortResultsWidgetSTW::RewardedBadges' has a wrong offset!");
static_assert(offsetof(UFortResultsWidgetSTW, MissedBadges) == 0x000438, "Member 'UFortResultsWidgetSTW::MissedBadges' has a wrong offset!");
static_assert(offsetof(UFortResultsWidgetSTW, RewardedItems) == 0x000448, "Member 'UFortResultsWidgetSTW::RewardedItems' has a wrong offset!");
static_assert(offsetof(UFortResultsWidgetSTW, RewardedAccountItems) == 0x000458, "Member 'UFortResultsWidgetSTW::RewardedAccountItems' has a wrong offset!");
static_assert(offsetof(UFortResultsWidgetSTW, Radial_Picker) == 0x000468, "Member 'UFortResultsWidgetSTW::Radial_Picker' has a wrong offset!");

class UFortSTWUIData final : public UFortSTWUIDataBase
{
public:
	TSoftObjectPtr<class UDataTable>              UpgradesDisplayDataTable;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSTWUIData">();
	}
	static class UFortSTWUIData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSTWUIData>();
	}
};
static_assert(alignof(UFortSTWUIData) == 0x000008, "Wrong alignment on UFortSTWUIData");
static_assert(sizeof(UFortSTWUIData) == 0x000058, "Wrong size on UFortSTWUIData");
static_assert(offsetof(UFortSTWUIData, UpgradesDisplayDataTable) == 0x000030, "Member 'UFortSTWUIData::UpgradesDisplayDataTable' has a wrong offset!");

class UFortRootViewportLayout_STW final : public UFortRootViewportLayout
{
public:
	class UTalkingHead*                           TalkingHead;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRootViewportLayout_STW">();
	}
	static class UFortRootViewportLayout_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRootViewportLayout_STW>();
	}
};
static_assert(alignof(UFortRootViewportLayout_STW) == 0x000008, "Wrong alignment on UFortRootViewportLayout_STW");
static_assert(sizeof(UFortRootViewportLayout_STW) == 0x0003C8, "Wrong size on UFortRootViewportLayout_STW");
static_assert(offsetof(UFortRootViewportLayout_STW, TalkingHead) == 0x0003C0, "Member 'UFortRootViewportLayout_STW::TalkingHead' has a wrong offset!");

class UFortItemAutoMulchActivatablePanel_STW final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_518[0x58];

public:
	void CacheAutoMulchSettings();
	void EnterMulchModeForAutoMulch();
	void RestoreAutoMulchSettings();
	void SaveSettings();
	void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);

	EFortFrontendInventoryFilter GetFrontendInventoryFilter() const;
	TArray<EFortAutoMulchCategory> GetMulchCategoriesForInventoryFilter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemAutoMulchActivatablePanel_STW">();
	}
	static class UFortItemAutoMulchActivatablePanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemAutoMulchActivatablePanel_STW>();
	}
};
static_assert(alignof(UFortItemAutoMulchActivatablePanel_STW) == 0x000008, "Wrong alignment on UFortItemAutoMulchActivatablePanel_STW");
static_assert(sizeof(UFortItemAutoMulchActivatablePanel_STW) == 0x000570, "Wrong size on UFortItemAutoMulchActivatablePanel_STW");

class UFortItemCraftingOptionsActivatablePanel_STW final : public UFortActivatablePanel
{
public:
	class UFortSchematicItem*                     BaseItem;
	class UFortSchematicItem*                     TargetItem;
	int32                                         MaxCraftingTierIndex;
	int32                                         TargetCraftingTierIndex;
	int32                                         TargetPromotionTierIndex;
	int32                                         MaxQuantity;
	int32                                         SelectedQuantity;
	bool                                          CanCraftTargetItem;
	uint8                                         Pad_53D[0x3];
	class UWidget*                                TierImageParent_1;
	class UWidget*                                TierImageParent_2;
	class UWidget*                                TierImageParent_3;
	class UWidget*                                TierImageParent_4;
	class UWidget*                                TierImageParent_5;
	class UImage*                                 TierImage_1;
	class UImage*                                 TierImage_2;
	class UImage*                                 TierImage_3;
	class UImage*                                 TierImage_4;
	class UImage*                                 TierImage_5;
	uint8                                         Pad_590[0x28];

public:
	void CraftAndSlotTargetItem();
	void CraftTargetItem();
	void DecreaseSelectedQuantity();
	void IncreaseSelectedQuantity();
	void OnBaseItemChanged(class UFortSchematicItem* NewBaseItem);
	void OnMaxQuantityChanged(int32 NewMaxQuantity);
	void OnSelectedQuantityChanged(int32 NewSelectedQuantity);
	void OnTargetItemChanged(class UFortSchematicItem* NewTargetItem);
	void SelectNextTier();
	void SelectPreviousTier();
	void SetBaseSchematicItem(class UFortSchematicItem* InBaseItem);
	void SetItemManagementScreen(class UFortItemManagementScreen_STW* InItemManagementScreen);
	void SetSelectedQuantity_BP(int32 NewQuantity);
	void SetTargetCraftingTierIndex(int32 NewTierIndex);
	void UpdateTierImages();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemCraftingOptionsActivatablePanel_STW">();
	}
	static class UFortItemCraftingOptionsActivatablePanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemCraftingOptionsActivatablePanel_STW>();
	}
};
static_assert(alignof(UFortItemCraftingOptionsActivatablePanel_STW) == 0x000008, "Wrong alignment on UFortItemCraftingOptionsActivatablePanel_STW");
static_assert(sizeof(UFortItemCraftingOptionsActivatablePanel_STW) == 0x0005B8, "Wrong size on UFortItemCraftingOptionsActivatablePanel_STW");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, BaseItem) == 0x000518, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::BaseItem' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TargetItem) == 0x000520, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TargetItem' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, MaxCraftingTierIndex) == 0x000528, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::MaxCraftingTierIndex' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TargetCraftingTierIndex) == 0x00052C, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TargetCraftingTierIndex' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TargetPromotionTierIndex) == 0x000530, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TargetPromotionTierIndex' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, MaxQuantity) == 0x000534, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::MaxQuantity' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, SelectedQuantity) == 0x000538, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::SelectedQuantity' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, CanCraftTargetItem) == 0x00053C, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::CanCraftTargetItem' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_1) == 0x000540, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_1' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_2) == 0x000548, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_2' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_3) == 0x000550, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_3' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_4) == 0x000558, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_4' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImageParent_5) == 0x000560, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImageParent_5' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_1) == 0x000568, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImage_1' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_2) == 0x000570, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImage_2' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_3) == 0x000578, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImage_3' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_4) == 0x000580, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImage_4' has a wrong offset!");
static_assert(offsetof(UFortItemCraftingOptionsActivatablePanel_STW, TierImage_5) == 0x000588, "Member 'UFortItemCraftingOptionsActivatablePanel_STW::TierImage_5' has a wrong offset!");

class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{
public:
	TWeakObjectPtr<class UFortItem>               ItemToDetail;
	TWeakObjectPtr<class UFortItem>               ItemToCompareWith;
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;
	uint8                                         Pad_3C0[0x20];
	class UFortTooltipLoadingWrapper*             ItemToDetailLoadingWrapper;
	class UCommonLoadGuard*                       ItemToDetailLoadGuard;

public:
	void HandleConsumeItemProgressChangedBP();
	void HandleDifferentItemToCompareSetBP();
	void HandleDifferentItemToDetailSetBP();
	void HandleItemToDetailTooltipAssetsLoaded();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemDetailsActivatablePanel_STW">();
	}
	static class UFortItemDetailsActivatablePanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemDetailsActivatablePanel_STW>();
	}
};
static_assert(alignof(UFortItemDetailsActivatablePanel_STW) == 0x000008, "Wrong alignment on UFortItemDetailsActivatablePanel_STW");
static_assert(sizeof(UFortItemDetailsActivatablePanel_STW) == 0x0003F0, "Wrong size on UFortItemDetailsActivatablePanel_STW");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToDetail) == 0x0003A8, "Member 'UFortItemDetailsActivatablePanel_STW::ItemToDetail' has a wrong offset!");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToCompareWith) == 0x0003B0, "Member 'UFortItemDetailsActivatablePanel_STW::ItemToCompareWith' has a wrong offset!");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, HostItemManagementScreen) == 0x0003B8, "Member 'UFortItemDetailsActivatablePanel_STW::HostItemManagementScreen' has a wrong offset!");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToDetailLoadingWrapper) == 0x0003E0, "Member 'UFortItemDetailsActivatablePanel_STW::ItemToDetailLoadingWrapper' has a wrong offset!");
static_assert(offsetof(UFortItemDetailsActivatablePanel_STW, ItemToDetailLoadGuard) == 0x0003E8, "Member 'UFortItemDetailsActivatablePanel_STW::ItemToDetailLoadGuard' has a wrong offset!");

class UFortItemDetailsModeActivatablePanel_STW final : public UFortItemDetailsActivatablePanel_STW
{
public:
	class UCommonWidgetSwitcherLegacy*            DetailPanelWidgetSwitcher;

public:
	void HandleOnActiveWidgetChanged(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemDetailsModeActivatablePanel_STW">();
	}
	static class UFortItemDetailsModeActivatablePanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemDetailsModeActivatablePanel_STW>();
	}
};
static_assert(alignof(UFortItemDetailsModeActivatablePanel_STW) == 0x000008, "Wrong alignment on UFortItemDetailsModeActivatablePanel_STW");
static_assert(sizeof(UFortItemDetailsModeActivatablePanel_STW) == 0x0003F8, "Wrong size on UFortItemDetailsModeActivatablePanel_STW");
static_assert(offsetof(UFortItemDetailsModeActivatablePanel_STW, DetailPanelWidgetSwitcher) == 0x0003F0, "Member 'UFortItemDetailsModeActivatablePanel_STW::DetailPanelWidgetSwitcher' has a wrong offset!");

class UFortItemCompareModeActivatablePanel_STW final : public UFortItemDetailsActivatablePanel_STW
{
public:
	class UFortItemManagementItemDetailsPanel_STW* ComparisonModeLeftItemDetailsPanel;
	class UFortItemManagementItemDetailsPanel_STW* ComparisonModeRightItemDetailsPanel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemCompareModeActivatablePanel_STW">();
	}
	static class UFortItemCompareModeActivatablePanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemCompareModeActivatablePanel_STW>();
	}
};
static_assert(alignof(UFortItemCompareModeActivatablePanel_STW) == 0x000008, "Wrong alignment on UFortItemCompareModeActivatablePanel_STW");
static_assert(sizeof(UFortItemCompareModeActivatablePanel_STW) == 0x000400, "Wrong size on UFortItemCompareModeActivatablePanel_STW");
static_assert(offsetof(UFortItemCompareModeActivatablePanel_STW, ComparisonModeLeftItemDetailsPanel) == 0x0003F0, "Member 'UFortItemCompareModeActivatablePanel_STW::ComparisonModeLeftItemDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortItemCompareModeActivatablePanel_STW, ComparisonModeRightItemDetailsPanel) == 0x0003F8, "Member 'UFortItemCompareModeActivatablePanel_STW::ComparisonModeRightItemDetailsPanel' has a wrong offset!");

class UFortItemMulchModeActivatablePanel_STW final : public UFortItemDetailsActivatablePanel_STW
{
public:
	class UFortItemManagementItemDetailsPanel_STW* MulchModeItemDetailsPanel;
	class UFortItemManagementMulchDetailsPanel_STW* MulchDetailsPanel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemMulchModeActivatablePanel_STW">();
	}
	static class UFortItemMulchModeActivatablePanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemMulchModeActivatablePanel_STW>();
	}
};
static_assert(alignof(UFortItemMulchModeActivatablePanel_STW) == 0x000008, "Wrong alignment on UFortItemMulchModeActivatablePanel_STW");
static_assert(sizeof(UFortItemMulchModeActivatablePanel_STW) == 0x000400, "Wrong size on UFortItemMulchModeActivatablePanel_STW");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, MulchModeItemDetailsPanel) == 0x0003F0, "Member 'UFortItemMulchModeActivatablePanel_STW::MulchModeItemDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortItemMulchModeActivatablePanel_STW, MulchDetailsPanel) == 0x0003F8, "Member 'UFortItemMulchModeActivatablePanel_STW::MulchDetailsPanel' has a wrong offset!");

class UFortItemManagementCustomFilterModalWidget_STW final : public UFortActivatablePanel
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;
	TArray<EFortInventoryCustomFilter>            AvailableFilters;
	TSet<EFortInventoryCustomFilter>              LocalCustomFilterSet;

public:
	void CommitCustomFilters();
	void DisableAllFilters();
	void EnableAllFilters();
	void OnBeginCommitCustomFilter();
	void OnCustomFilterSetUpdated();
	void OnEndCommitCustomFilter(bool bWasSuccessful);
	void ToggleFilter(EFortInventoryCustomFilter Filter);

	bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementCustomFilterModalWidget_STW">();
	}
	static class UFortItemManagementCustomFilterModalWidget_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementCustomFilterModalWidget_STW>();
	}
};
static_assert(alignof(UFortItemManagementCustomFilterModalWidget_STW) == 0x000008, "Wrong alignment on UFortItemManagementCustomFilterModalWidget_STW");
static_assert(sizeof(UFortItemManagementCustomFilterModalWidget_STW) == 0x000580, "Wrong size on UFortItemManagementCustomFilterModalWidget_STW");
static_assert(offsetof(UFortItemManagementCustomFilterModalWidget_STW, HostItemManagementScreen) == 0x000518, "Member 'UFortItemManagementCustomFilterModalWidget_STW::HostItemManagementScreen' has a wrong offset!");
static_assert(offsetof(UFortItemManagementCustomFilterModalWidget_STW, AvailableFilters) == 0x000520, "Member 'UFortItemManagementCustomFilterModalWidget_STW::AvailableFilters' has a wrong offset!");
static_assert(offsetof(UFortItemManagementCustomFilterModalWidget_STW, LocalCustomFilterSet) == 0x000530, "Member 'UFortItemManagementCustomFilterModalWidget_STW::LocalCustomFilterSet' has a wrong offset!");

class UFortItemManagementInventoryPanel_STW final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x50];
	class FName                                   CurrentFilterName;
	EInventoryContentSortType                     CurrentSortType;
	uint8                                         Pad_2E5[0x3];
	TSubclassOf<class UCommonButtonBase>          FilterTabButtonType;
	TSubclassOf<class UCommonButtonStyle>         FilterTabButtonStyle;
	TArray<struct FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray;
	class UFortTabListWidgetBase*                 FilterTabList;
	class UCommonLoadGuard*                       TileViewLoadGuard;
	class UFortItemTileView*                      TileView;
	class UPanelWidget*                           CraftingPanel;
	class UCommonLoadGuard*                       CraftingTileViewLoadGuard;
	class UFortItemTileView*                      CraftingTileView;
	class UPanelWidget*                           StoragePanel;
	class UCommonLoadGuard*                       StorageTileViewLoadGuard;
	class UFortItemTileView*                      StorageTileView;
	class UCommonTextBlock*                       MulchRestrictionReasonText;
	EFortItemCardSize                             SmallTileSize;
	EFortItemCardSize                             LargeTileSize;
	uint8                                         Pad_35A[0x2];
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;
	bool                                          bCanDragItems;
	uint8                                         Pad_365[0x3];
	TArray<struct FQuickbarEquipSlotIndicesConfig> DefaultQuickbarEquipSlotIndicesConfigs;
	TMap<class FName, int32>                      QuickbarEquipSlotIndices;
	uint8                                         Pad_3C8[0x90];
	class UFortInventoryContext*                  InventoryContext;
	class UWidget*                                WidgetToCenter;

public:
	void AddItemStackToMulch(class UFortItem* Item, int32 Count);
	void AdvanceSelection();
	void CycleSortType();
	bool GetShouldPrioritizeFavorites();
	void HandleCraftItemStarted();
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCursorModeChangedBP(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandleCustomInventoryFilterChanged();
	void HandleDifferentFilterSetBP();
	void HandleDifferentFrontendInventoryFilterSetBP();
	void HandleDifferentItemManagementModeSetBP();
	void HandleDifferentSortTypeSetBP();
	void HandleFilterTabButtonCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleFilterTabSelected(class FName TabNameID);
	void HandleFocusEquipSlotsBP();
	void HandleInventoryUpdatedEvent();
	void HandleItemBeginDrag(class UObject* Item);
	void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);
	void HandleSetOfItemsToMulchChangedBP();
	void MarkAllItemsAsSeen();
	void OnMulchRestrictionTextShown(bool bShown);
	void RefreshCraftingSort();
	void RequestFocusEquipSlots();
	void SetFilter(const class FName FilterName);
	void SetSortType(EInventoryContentSortType SortType);
	void SwitchPanelFocus();
	void TogglePrioritizeFavorites();
	void ToggleTileSize();
	void UpdateSchematicTiles();

	bool CanDragItems() const;
	class FText GetQualifiedFilterDisplayName() const;
	TArray<EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory() const;
	TArray<class UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory() const;
	bool HasUnlockedStorageSlots() const;
	bool IsSelectedItem(const class UFortItem* Item) const;
	bool IsSwitchPanelAvailable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementInventoryPanel_STW">();
	}
	static class UFortItemManagementInventoryPanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementInventoryPanel_STW>();
	}
};
static_assert(alignof(UFortItemManagementInventoryPanel_STW) == 0x000008, "Wrong alignment on UFortItemManagementInventoryPanel_STW");
static_assert(sizeof(UFortItemManagementInventoryPanel_STW) == 0x000468, "Wrong size on UFortItemManagementInventoryPanel_STW");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CurrentFilterName) == 0x0002E0, "Member 'UFortItemManagementInventoryPanel_STW::CurrentFilterName' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CurrentSortType) == 0x0002E4, "Member 'UFortItemManagementInventoryPanel_STW::CurrentSortType' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabButtonType) == 0x0002E8, "Member 'UFortItemManagementInventoryPanel_STW::FilterTabButtonType' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabButtonStyle) == 0x0002F0, "Member 'UFortItemManagementInventoryPanel_STW::FilterTabButtonStyle' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabLabelInfoArray) == 0x0002F8, "Member 'UFortItemManagementInventoryPanel_STW::FilterTabLabelInfoArray' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, FilterTabList) == 0x000308, "Member 'UFortItemManagementInventoryPanel_STW::FilterTabList' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, TileViewLoadGuard) == 0x000310, "Member 'UFortItemManagementInventoryPanel_STW::TileViewLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, TileView) == 0x000318, "Member 'UFortItemManagementInventoryPanel_STW::TileView' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CraftingPanel) == 0x000320, "Member 'UFortItemManagementInventoryPanel_STW::CraftingPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CraftingTileViewLoadGuard) == 0x000328, "Member 'UFortItemManagementInventoryPanel_STW::CraftingTileViewLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, CraftingTileView) == 0x000330, "Member 'UFortItemManagementInventoryPanel_STW::CraftingTileView' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, StoragePanel) == 0x000338, "Member 'UFortItemManagementInventoryPanel_STW::StoragePanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, StorageTileViewLoadGuard) == 0x000340, "Member 'UFortItemManagementInventoryPanel_STW::StorageTileViewLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, StorageTileView) == 0x000348, "Member 'UFortItemManagementInventoryPanel_STW::StorageTileView' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, MulchRestrictionReasonText) == 0x000350, "Member 'UFortItemManagementInventoryPanel_STW::MulchRestrictionReasonText' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, SmallTileSize) == 0x000358, "Member 'UFortItemManagementInventoryPanel_STW::SmallTileSize' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, LargeTileSize) == 0x000359, "Member 'UFortItemManagementInventoryPanel_STW::LargeTileSize' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, HostItemManagementScreen) == 0x00035C, "Member 'UFortItemManagementInventoryPanel_STW::HostItemManagementScreen' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, bCanDragItems) == 0x000364, "Member 'UFortItemManagementInventoryPanel_STW::bCanDragItems' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, DefaultQuickbarEquipSlotIndicesConfigs) == 0x000368, "Member 'UFortItemManagementInventoryPanel_STW::DefaultQuickbarEquipSlotIndicesConfigs' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, QuickbarEquipSlotIndices) == 0x000378, "Member 'UFortItemManagementInventoryPanel_STW::QuickbarEquipSlotIndices' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, InventoryContext) == 0x000458, "Member 'UFortItemManagementInventoryPanel_STW::InventoryContext' has a wrong offset!");
static_assert(offsetof(UFortItemManagementInventoryPanel_STW, WidgetToCenter) == 0x000460, "Member 'UFortItemManagementInventoryPanel_STW::WidgetToCenter' has a wrong offset!");

class UFortItemManagementItemTileButton_STW final : public UFortItemTileButton
{
public:
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;
	bool                                          HasTheItemToDetail;
	bool                                          HasTheItemToCompareDetailsWith;
	bool                                          HasAnItemMarkedForMulching;
	uint8                                         Pad_1473[0x1];
	int32                                         MulchCount;
	class UOverlay*                               NotCraftableOverlay;
	class UFortDynamicEntryBox*                   EquipSlotOverlay;
	class UMenuAnchor*                            PopupMenuAnchor;
	bool                                          ShowCollectionBookIndicator;
	bool                                          ShowRefundIndicator;
	uint8                                         Pad_1492[0x46];
	class UFortInventoryContext*                  InventoryContext;

public:
	class UUserWidget* GetPopupMenu();
	void HandleDifferentItemManagementModeSetBP();
	void HandleEquipSlotChanged(int32 EquipSlot);
	void HandleHasItemToCompareDetailsWithChanged();
	void HandleHasItemToDetailChanged();
	void HandleItemChangedBP();
	void HandleItemMulchStateChanged();
	void HandleShowCollectionBookIndicatorChanged();
	void HandleShowRefundIndicatorChanged();
	void OnSlotItemComplete(const class UFortAccountItem* SlottedItem, class FName SlotId);
	void PopulateEquipSlotOverlay();
	void UpdateEquipSlotOverlay(const int32 CurrentSlotIndex);

	struct FHomebaseSquadSlotId GetHomebaseSquadSlotForItem() const;
	EFortItemManagementMode GetItemManagementMode() const;
	bool IsValidEquipSlotOverlayIndex(const int32 SlotIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementItemTileButton_STW">();
	}
	static class UFortItemManagementItemTileButton_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementItemTileButton_STW>();
	}
};
static_assert(alignof(UFortItemManagementItemTileButton_STW) == 0x000010, "Wrong alignment on UFortItemManagementItemTileButton_STW");
static_assert(sizeof(UFortItemManagementItemTileButton_STW) == 0x0014E0, "Wrong size on UFortItemManagementItemTileButton_STW");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HostItemManagementScreen) == 0x001468, "Member 'UFortItemManagementItemTileButton_STW::HostItemManagementScreen' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HasTheItemToDetail) == 0x001470, "Member 'UFortItemManagementItemTileButton_STW::HasTheItemToDetail' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HasTheItemToCompareDetailsWith) == 0x001471, "Member 'UFortItemManagementItemTileButton_STW::HasTheItemToCompareDetailsWith' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, HasAnItemMarkedForMulching) == 0x001472, "Member 'UFortItemManagementItemTileButton_STW::HasAnItemMarkedForMulching' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, MulchCount) == 0x001474, "Member 'UFortItemManagementItemTileButton_STW::MulchCount' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, NotCraftableOverlay) == 0x001478, "Member 'UFortItemManagementItemTileButton_STW::NotCraftableOverlay' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, EquipSlotOverlay) == 0x001480, "Member 'UFortItemManagementItemTileButton_STW::EquipSlotOverlay' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, PopupMenuAnchor) == 0x001488, "Member 'UFortItemManagementItemTileButton_STW::PopupMenuAnchor' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, ShowCollectionBookIndicator) == 0x001490, "Member 'UFortItemManagementItemTileButton_STW::ShowCollectionBookIndicator' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, ShowRefundIndicator) == 0x001491, "Member 'UFortItemManagementItemTileButton_STW::ShowRefundIndicator' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemTileButton_STW, InventoryContext) == 0x0014D8, "Member 'UFortItemManagementItemTileButton_STW::InventoryContext' has a wrong offset!");

class UFortItemManagementItemDetailsPanel_STW final : public UFortItemDetailsHostPanel
{
public:
	bool                                          HasItemMarkedForMulching;
	uint8                                         Pad_369[0x3];
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;
	uint8                                         Pad_374[0xC];
	class UFortInventoryContext*                  InventoryContext;

public:
	static TArray<class UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions();

	void HandleHasItemMarkedForMulchingChanged();
	void HandleHostSet();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementItemDetailsPanel_STW">();
	}
	static class UFortItemManagementItemDetailsPanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementItemDetailsPanel_STW>();
	}
};
static_assert(alignof(UFortItemManagementItemDetailsPanel_STW) == 0x000008, "Wrong alignment on UFortItemManagementItemDetailsPanel_STW");
static_assert(sizeof(UFortItemManagementItemDetailsPanel_STW) == 0x000388, "Wrong size on UFortItemManagementItemDetailsPanel_STW");
static_assert(offsetof(UFortItemManagementItemDetailsPanel_STW, HasItemMarkedForMulching) == 0x000368, "Member 'UFortItemManagementItemDetailsPanel_STW::HasItemMarkedForMulching' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemDetailsPanel_STW, HostItemManagementScreen) == 0x00036C, "Member 'UFortItemManagementItemDetailsPanel_STW::HostItemManagementScreen' has a wrong offset!");
static_assert(offsetof(UFortItemManagementItemDetailsPanel_STW, InventoryContext) == 0x000380, "Member 'UFortItemManagementItemDetailsPanel_STW::InventoryContext' has a wrong offset!");

class UFortItemManagementMulchDetailsPanel_STW final : public UCommonUserWidget
{
public:
	class UFortItemQuantityListBase*              ResourceList;
	TScriptInterface<class IFortItemManagementMulchPanel> HostItemManagementMulchPanel;
	uint8                                         Pad_2A8[0x8];
	class UFortInventoryContext*                  InventoryContext;

public:
	void CommitMulch();
	void HandleHostSet();
	void HandleSetOfItemsToMulchChangedBP();

	TArray<int32> GetItemCountsToMulch() const;
	TArray<class UFortItem*> GetItemsToMulch() const;
	bool IsSpaceAvailableForMulch() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementMulchDetailsPanel_STW">();
	}
	static class UFortItemManagementMulchDetailsPanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementMulchDetailsPanel_STW>();
	}
};
static_assert(alignof(UFortItemManagementMulchDetailsPanel_STW) == 0x000008, "Wrong alignment on UFortItemManagementMulchDetailsPanel_STW");
static_assert(sizeof(UFortItemManagementMulchDetailsPanel_STW) == 0x0002B8, "Wrong size on UFortItemManagementMulchDetailsPanel_STW");
static_assert(offsetof(UFortItemManagementMulchDetailsPanel_STW, ResourceList) == 0x000290, "Member 'UFortItemManagementMulchDetailsPanel_STW::ResourceList' has a wrong offset!");
static_assert(offsetof(UFortItemManagementMulchDetailsPanel_STW, HostItemManagementMulchPanel) == 0x000298, "Member 'UFortItemManagementMulchDetailsPanel_STW::HostItemManagementMulchPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementMulchDetailsPanel_STW, InventoryContext) == 0x0002B0, "Member 'UFortItemManagementMulchDetailsPanel_STW::InventoryContext' has a wrong offset!");

class UFortItemManagementModeDetailsPanel_STW final : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcherLegacy*            ModeWidgetSwitcher;
	class UFortItemDetailsActivatablePanel_STW*   DetailsModeItemDetailsPanel;
	class UFortItemDetailsActivatablePanel_STW*   ComparisonModeItemDetailsPanel;
	class UFortItemDetailsActivatablePanel_STW*   MulchModeItemDetailsPanel;
	TWeakObjectPtr<class UFortItemManagementScreen_STW> HostItemManagementScreen;
	uint8                                         Pad_2B8[0x8];

public:
	void HandleDifferentItemManagementModeSetBP();
	void HandleHostSet();

	EFortItemManagementMode GetItemManagementMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementModeDetailsPanel_STW">();
	}
	static class UFortItemManagementModeDetailsPanel_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementModeDetailsPanel_STW>();
	}
};
static_assert(alignof(UFortItemManagementModeDetailsPanel_STW) == 0x000008, "Wrong alignment on UFortItemManagementModeDetailsPanel_STW");
static_assert(sizeof(UFortItemManagementModeDetailsPanel_STW) == 0x0002C0, "Wrong size on UFortItemManagementModeDetailsPanel_STW");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, ModeWidgetSwitcher) == 0x000290, "Member 'UFortItemManagementModeDetailsPanel_STW::ModeWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, DetailsModeItemDetailsPanel) == 0x000298, "Member 'UFortItemManagementModeDetailsPanel_STW::DetailsModeItemDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, ComparisonModeItemDetailsPanel) == 0x0002A0, "Member 'UFortItemManagementModeDetailsPanel_STW::ComparisonModeItemDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, MulchModeItemDetailsPanel) == 0x0002A8, "Member 'UFortItemManagementModeDetailsPanel_STW::MulchModeItemDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementModeDetailsPanel_STW, HostItemManagementScreen) == 0x0002B0, "Member 'UFortItemManagementModeDetailsPanel_STW::HostItemManagementScreen' has a wrong offset!");

class UFortItemManagementScreen_STW final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	TMulticastInlineDelegate<void()>              OnItemViewRefreshed;
	uint8                                         Pad_3C0[0xC0];
	EFortItemManagementMode                       Mode;
	EFortFrontendInventoryFilter                  FrontendInventoryFilter;
	bool                                          bReadOnlyModeWIFE;
	bool                                          ConsumeItemRequestInProgress;
	uint8                                         Pad_484[0x4];
	class UFortItemManagementInventoryPanel_STW*  InventoryPanel;
	class UFortItemManagementModeDetailsPanel_STW* ModeDetailsPanel;
	TWeakObjectPtr<class UFortItem>               ItemToDetail;
	uint8                                         Pad_4A0[0x8];
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
	TSubclassOf<class UFortItemManagementCustomFilterModalWidget_STW> CustomFilterModalClass;
	uint8                                         Pad_4B8[0x18];
	class UFortMulchConfirmationModalWidget*      MulchConfirmationModal;
	class UFortItemManagementCustomFilterModalWidget_STW* CustomFilterModal;
	uint8                                         Pad_4E0[0x8];
	class UFortInventoryContext*                  InventoryContext;
	uint8                                         Pad_4F0[0x10];

public:
	void CancelInventoryPanelTileViewRefresh();
	bool CanRequestPopupMenuForSelectedItem();
	void ConsumeItem(class UFortConsumableAccountItem* ConsumableItem);
	void CraftAndSlotItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
	void CraftItem(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
	void CycleSortType();
	void DropItem(class UFortItem* Item);
	void EnterComparisonMode(class UFortItem* ItemToCompareDetailsWith);
	void EnterDetailsMode(class UFortItem* ItemToDetail_0);
	void EnterMulchMode(class UFortItem* ItemToMulch);
	void EnterMulchModeForAutoMulch();
	void EquipItem(class UFortItem* Item);
	bool GuardActionForReadOnlyWIFE();
	void HandleConsumeItemBP(class UFortConsumableAccountItem* ConsumableItem);
	void HandleCraftAndSlotItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
	void HandleCraftItemBP(class UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount);
	void HandleDifferentItemManagementModeSetBP();
	void HandleDropItemBP(class UFortItem* Item);
	void HandleEquipItemBP(class UFortItem* Item);
	void HandleInspectItemBP(class UFortItem* Item);
	void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleMulchQuantitySelection(class UFortItem* Item);
	void HandleOpenAutoMulchOptionsBP();
	void HandleOpenCraftingOptionsBP(class UFortSchematicItem* SchematicItem);
	void HandleTransferItemBP(class UFortItem* Item);
	void HideCustomFilterModal();
	void HideMulchConfirmationModal();
	void InspectItem(class UFortItem* Item);
	void MarkAllItemsAsSeen();
	void NotifyPanelActivated();
	void NotifyPanelDeactivated();
	void OpenAutoMulchOptions();
	void OpenCraftingOptions(class UFortSchematicItem* SchematicItem);
	void RequestPopupMenuForSelectedItem();
	void SetConsumeItemRequestInProgress(bool InProgress);
	void SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter_0);
	void ShowCustomFilterModal();
	void ShowMulchConfirmationModal();
	void ShowWarningReadOnlyWIFE(bool Force);
	void ToggleShowCollectionBookIndicator();
	void ToggleShowRefundIndicator();
	void TransferItem(class UFortItem* Item);

	bool CanEquipItem(class UFortItem* Item) const;
	class UFortItem* GetItemToCompareDetailsWith() const;
	class UFortItem* GetItemToDetail() const;
	bool GetShouldShowCollectionBookIndicator() const;
	bool GetShouldShowRefundIndicator() const;
	bool HasDefaultItemsToMulch() const;
	bool HasItemBeenSeen(class UFortAccountItem* AccountItem) const;
	bool IsScreenWIFE() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemManagementScreen_STW">();
	}
	static class UFortItemManagementScreen_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemManagementScreen_STW>();
	}
};
static_assert(alignof(UFortItemManagementScreen_STW) == 0x000008, "Wrong alignment on UFortItemManagementScreen_STW");
static_assert(sizeof(UFortItemManagementScreen_STW) == 0x000500, "Wrong size on UFortItemManagementScreen_STW");
static_assert(offsetof(UFortItemManagementScreen_STW, OnItemViewRefreshed) == 0x0003B0, "Member 'UFortItemManagementScreen_STW::OnItemViewRefreshed' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, Mode) == 0x000480, "Member 'UFortItemManagementScreen_STW::Mode' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, FrontendInventoryFilter) == 0x000481, "Member 'UFortItemManagementScreen_STW::FrontendInventoryFilter' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, bReadOnlyModeWIFE) == 0x000482, "Member 'UFortItemManagementScreen_STW::bReadOnlyModeWIFE' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, ConsumeItemRequestInProgress) == 0x000483, "Member 'UFortItemManagementScreen_STW::ConsumeItemRequestInProgress' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, InventoryPanel) == 0x000488, "Member 'UFortItemManagementScreen_STW::InventoryPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, ModeDetailsPanel) == 0x000490, "Member 'UFortItemManagementScreen_STW::ModeDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, ItemToDetail) == 0x000498, "Member 'UFortItemManagementScreen_STW::ItemToDetail' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, MulchConfirmationModalClass) == 0x0004A8, "Member 'UFortItemManagementScreen_STW::MulchConfirmationModalClass' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, CustomFilterModalClass) == 0x0004B0, "Member 'UFortItemManagementScreen_STW::CustomFilterModalClass' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, MulchConfirmationModal) == 0x0004D0, "Member 'UFortItemManagementScreen_STW::MulchConfirmationModal' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, CustomFilterModal) == 0x0004D8, "Member 'UFortItemManagementScreen_STW::CustomFilterModal' has a wrong offset!");
static_assert(offsetof(UFortItemManagementScreen_STW, InventoryContext) == 0x0004E8, "Member 'UFortItemManagementScreen_STW::InventoryContext' has a wrong offset!");

class UMainMenu_STW final : public UCommonActivatableWidget
{
public:
	class FText                                   DefaultHelpText;
	class UCommonTextBlock*                       Text_CountDownTimer;
	class UCommonButtonBase*                      Button_LeaveExperience;
	class UCommonUserWidget*                      Button_Leave;
	class UCommonTextBlock*                       ContextualHelpText;
	class UCommonButtonBase*                      Button_BackBoard;
	class UBackgroundBlur*                        BackgroundBlur;
	class UBorder*                                BackgroundDarkener;
	class UCommonButtonBase*                      Button_ReportPlayer;
	class UCommonButtonBase*                      Button_Logout;
	class UCommonButtonBase*                      Button_Support;
	class UCommonButtonBase*                      Button_Exit;
	class UCommonButtonBase*                      Button_Settings;
	struct FDataTableRowHandle                    CloseMenuAction;
	struct FDataTableRowHandle                    SwitchProfileAction;
	TSubclassOf<class UFortOptionsMenu>           SettingsScreenClass;
	class FText                                   LogoutTitle;
	class FText                                   LogoutDescription;
	class FText                                   ExitTitle;
	class FText                                   ExitDescription;
	uint8                                         Pad_4A8[0x20];

public:
	void TryShowModal(TSoftClassPtr<class UClass>& ModalWidgetClass);
	void TryShowPrimaryContent(TSoftClassPtr<class UClass>& ContentWidgetClass);

	bool IsActiveTabMainShop() const;
	bool ShouldShowLeaveExperienceButton() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MainMenu_STW">();
	}
	static class UMainMenu_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_STW>();
	}
};
static_assert(alignof(UMainMenu_STW) == 0x000008, "Wrong alignment on UMainMenu_STW");
static_assert(sizeof(UMainMenu_STW) == 0x0004C8, "Wrong size on UMainMenu_STW");
static_assert(offsetof(UMainMenu_STW, DefaultHelpText) == 0x0003A8, "Member 'UMainMenu_STW::DefaultHelpText' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Text_CountDownTimer) == 0x0003C0, "Member 'UMainMenu_STW::Text_CountDownTimer' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_LeaveExperience) == 0x0003C8, "Member 'UMainMenu_STW::Button_LeaveExperience' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_Leave) == 0x0003D0, "Member 'UMainMenu_STW::Button_Leave' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, ContextualHelpText) == 0x0003D8, "Member 'UMainMenu_STW::ContextualHelpText' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_BackBoard) == 0x0003E0, "Member 'UMainMenu_STW::Button_BackBoard' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, BackgroundBlur) == 0x0003E8, "Member 'UMainMenu_STW::BackgroundBlur' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, BackgroundDarkener) == 0x0003F0, "Member 'UMainMenu_STW::BackgroundDarkener' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_ReportPlayer) == 0x0003F8, "Member 'UMainMenu_STW::Button_ReportPlayer' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_Logout) == 0x000400, "Member 'UMainMenu_STW::Button_Logout' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_Support) == 0x000408, "Member 'UMainMenu_STW::Button_Support' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_Exit) == 0x000410, "Member 'UMainMenu_STW::Button_Exit' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, Button_Settings) == 0x000418, "Member 'UMainMenu_STW::Button_Settings' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, CloseMenuAction) == 0x000420, "Member 'UMainMenu_STW::CloseMenuAction' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, SwitchProfileAction) == 0x000430, "Member 'UMainMenu_STW::SwitchProfileAction' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, SettingsScreenClass) == 0x000440, "Member 'UMainMenu_STW::SettingsScreenClass' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, LogoutTitle) == 0x000448, "Member 'UMainMenu_STW::LogoutTitle' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, LogoutDescription) == 0x000460, "Member 'UMainMenu_STW::LogoutDescription' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, ExitTitle) == 0x000478, "Member 'UMainMenu_STW::ExitTitle' has a wrong offset!");
static_assert(offsetof(UMainMenu_STW, ExitDescription) == 0x000490, "Member 'UMainMenu_STW::ExitDescription' has a wrong offset!");

class UFortUIStateWidget_STWFrontend final : public UFortUIStateWidgetBase
{
public:
	uint8                                         Pad_3C0[0x8];
	class UTopBar_STW*                            TopBar_STW;
	class UCommonUserWidget*                      BottomBar_STW;
	class UFortActivatableChatWidget*             ChatWidget_STW;
	TWeakObjectPtr<class UFortCampaignTabsScreenBase> MainTabsScreen;
	TSubclassOf<class UFortPlayerBanned>          PlayerBannedScreenClass;
	TArray<TSubclassOf<class AFortScriptedAction>> ScriptedActionsToRegister;
	TArray<EFortStoreState>                       DeferredSquadAutoSlottingStoreStates;
	uint8                                         Pad_410[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUIStateWidget_STWFrontend">();
	}
	static class UFortUIStateWidget_STWFrontend* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUIStateWidget_STWFrontend>();
	}
};
static_assert(alignof(UFortUIStateWidget_STWFrontend) == 0x000008, "Wrong alignment on UFortUIStateWidget_STWFrontend");
static_assert(sizeof(UFortUIStateWidget_STWFrontend) == 0x000430, "Wrong size on UFortUIStateWidget_STWFrontend");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, TopBar_STW) == 0x0003C8, "Member 'UFortUIStateWidget_STWFrontend::TopBar_STW' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, BottomBar_STW) == 0x0003D0, "Member 'UFortUIStateWidget_STWFrontend::BottomBar_STW' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, ChatWidget_STW) == 0x0003D8, "Member 'UFortUIStateWidget_STWFrontend::ChatWidget_STW' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, MainTabsScreen) == 0x0003E0, "Member 'UFortUIStateWidget_STWFrontend::MainTabsScreen' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, PlayerBannedScreenClass) == 0x0003E8, "Member 'UFortUIStateWidget_STWFrontend::PlayerBannedScreenClass' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, ScriptedActionsToRegister) == 0x0003F0, "Member 'UFortUIStateWidget_STWFrontend::ScriptedActionsToRegister' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWFrontend, DeferredSquadAutoSlottingStoreStates) == 0x000400, "Member 'UFortUIStateWidget_STWFrontend::DeferredSquadAutoSlottingStoreStates' has a wrong offset!");

class UFortUIStateWidget_STWJoinServer final : public UFortUIStateWidgetBase
{
public:
	class UFortRejoinWindowBase*                  RejoinWindow;
	struct FDataTableRowHandle                    TutorialCompleteStatHandle;
	TSubclassOf<class UFortRejoinWindowBase>      RejoinWindowClass;
	uint8                                         Pad_3E0[0x8];

public:
	void HandleLobbyDisconnected();
	void HandleLobbyTimeUpdated(int32 TimeRemaining);
	void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult);
	void HandleMatchmakingStateChange(EMatchmakingState OldState, EMatchmakingState NewState);
	void OnShowTutorialDialog();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUIStateWidget_STWJoinServer">();
	}
	static class UFortUIStateWidget_STWJoinServer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUIStateWidget_STWJoinServer>();
	}
};
static_assert(alignof(UFortUIStateWidget_STWJoinServer) == 0x000008, "Wrong alignment on UFortUIStateWidget_STWJoinServer");
static_assert(sizeof(UFortUIStateWidget_STWJoinServer) == 0x0003E8, "Wrong size on UFortUIStateWidget_STWJoinServer");
static_assert(offsetof(UFortUIStateWidget_STWJoinServer, RejoinWindow) == 0x0003C0, "Member 'UFortUIStateWidget_STWJoinServer::RejoinWindow' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWJoinServer, TutorialCompleteStatHandle) == 0x0003C8, "Member 'UFortUIStateWidget_STWJoinServer::TutorialCompleteStatHandle' has a wrong offset!");
static_assert(offsetof(UFortUIStateWidget_STWJoinServer, RejoinWindowClass) == 0x0003D8, "Member 'UFortUIStateWidget_STWJoinServer::RejoinWindowClass' has a wrong offset!");

class UTopBar_STW final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x10];
	class UDataTable*                             PhoenixSeasonDisplayInfoMap;
	TMap<EFortUIFeatureStateReason, class FText>  ReasonDescriptions;
	class UCommonButtonLegacy*                    Button_MainMenu;
	class UMainMenu_STW*                          MainMenu;
	class UImage*                                 Image_ActiveInvitesNotification;
	class UCommonButtonLegacy*                    Button_Social;
	uint8                                         Pad_430[0x10];

public:
	void OnShouldShowPhoenixDisplay(bool bShow, class UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo);
	void OnSocialMenuOpened();
	void SetOnlineFriendsCount(int32 NewOnlineFriendsCount);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TopBar_STW">();
	}
	static class UTopBar_STW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTopBar_STW>();
	}
};
static_assert(alignof(UTopBar_STW) == 0x000008, "Wrong alignment on UTopBar_STW");
static_assert(sizeof(UTopBar_STW) == 0x000440, "Wrong size on UTopBar_STW");
static_assert(offsetof(UTopBar_STW, PhoenixSeasonDisplayInfoMap) == 0x0003B8, "Member 'UTopBar_STW::PhoenixSeasonDisplayInfoMap' has a wrong offset!");
static_assert(offsetof(UTopBar_STW, ReasonDescriptions) == 0x0003C0, "Member 'UTopBar_STW::ReasonDescriptions' has a wrong offset!");
static_assert(offsetof(UTopBar_STW, Button_MainMenu) == 0x000410, "Member 'UTopBar_STW::Button_MainMenu' has a wrong offset!");
static_assert(offsetof(UTopBar_STW, MainMenu) == 0x000418, "Member 'UTopBar_STW::MainMenu' has a wrong offset!");
static_assert(offsetof(UTopBar_STW, Image_ActiveInvitesNotification) == 0x000420, "Member 'UTopBar_STW::Image_ActiveInvitesNotification' has a wrong offset!");
static_assert(offsetof(UTopBar_STW, Button_Social) == 0x000428, "Member 'UTopBar_STW::Button_Social' has a wrong offset!");

class UFortHeroLoadoutGadgetPicker final : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem;
	int32                                         TargetSlotIndex;
	uint8                                         Pad_3DC[0x4];
	TArray<class UFortItem*>                      TemporaryGadgetItemInstances;

public:
	void HandleDifferentTargetLoadoutSlotSetBP();
	void SetTargetLoadoutSlot(const class UFortCampaignHeroLoadoutItem* LoadoutItem, const int32 SlotIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutGadgetPicker">();
	}
	static class UFortHeroLoadoutGadgetPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutGadgetPicker>();
	}
};
static_assert(alignof(UFortHeroLoadoutGadgetPicker) == 0x000008, "Wrong alignment on UFortHeroLoadoutGadgetPicker");
static_assert(sizeof(UFortHeroLoadoutGadgetPicker) == 0x0003F0, "Wrong size on UFortHeroLoadoutGadgetPicker");
static_assert(offsetof(UFortHeroLoadoutGadgetPicker, TargetLoadoutItem) == 0x0003D0, "Member 'UFortHeroLoadoutGadgetPicker::TargetLoadoutItem' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutGadgetPicker, TargetSlotIndex) == 0x0003D8, "Member 'UFortHeroLoadoutGadgetPicker::TargetSlotIndex' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutGadgetPicker, TemporaryGadgetItemInstances) == 0x0003E0, "Member 'UFortHeroLoadoutGadgetPicker::TemporaryGadgetItemInstances' has a wrong offset!");

class UFortHeroLoadoutHeroPicker final : public UFortItemPickerBase
{
public:
	class UFortTabListWidgetBase_Legacy*          ExternalFilterTabList;
	TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem;
	class FName                                   TargetSlotName;
	uint8                                         Pad_3E4[0x4];
	TSubclassOf<class UCommonButtonLegacy>        FilterTabButtonType;
	TMap<class FName, struct FFortTabButtonLabelInfo> TabButtonLabelInfoMap;
	uint8                                         Pad_440[0x50];

public:
	void AssociateFilterTabList(const class UFortTabListWidgetBase_Legacy* ExternalFilterTabList_0);
	class FName GetCurrentlySelectedTab();
	void HandleDifferentTargetLoadoutSetBP();
	void HandleFilterTabSelected(class FName TabId);
	void HandleFilterTabSelectedBP(class FName TabId);
	void SetTargetLoadoutSlot(const class UFortCampaignHeroLoadoutItem* LoadoutItem, const class FName& SlotName);
	void UpdateFilterTabList(class FName PreviouslySelectedTab);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutHeroPicker">();
	}
	static class UFortHeroLoadoutHeroPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutHeroPicker>();
	}
};
static_assert(alignof(UFortHeroLoadoutHeroPicker) == 0x000008, "Wrong alignment on UFortHeroLoadoutHeroPicker");
static_assert(sizeof(UFortHeroLoadoutHeroPicker) == 0x000490, "Wrong size on UFortHeroLoadoutHeroPicker");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, ExternalFilterTabList) == 0x0003D0, "Member 'UFortHeroLoadoutHeroPicker::ExternalFilterTabList' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, TargetLoadoutItem) == 0x0003D8, "Member 'UFortHeroLoadoutHeroPicker::TargetLoadoutItem' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, TargetSlotName) == 0x0003E0, "Member 'UFortHeroLoadoutHeroPicker::TargetSlotName' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, FilterTabButtonType) == 0x0003E8, "Member 'UFortHeroLoadoutHeroPicker::FilterTabButtonType' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutHeroPicker, TabButtonLabelInfoMap) == 0x0003F0, "Member 'UFortHeroLoadoutHeroPicker::TabButtonLabelInfoMap' has a wrong offset!");

class UFortHeroLoadoutHeroPickerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutHeroPickerFunctionLibrary">();
	}
	static class UFortHeroLoadoutHeroPickerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutHeroPickerFunctionLibrary>();
	}
};
static_assert(alignof(UFortHeroLoadoutHeroPickerFunctionLibrary) == 0x000008, "Wrong alignment on UFortHeroLoadoutHeroPickerFunctionLibrary");
static_assert(sizeof(UFortHeroLoadoutHeroPickerFunctionLibrary) == 0x000028, "Wrong size on UFortHeroLoadoutHeroPickerFunctionLibrary");

class UFortHeroLoadoutScreenBase final : public UFortActivatablePanelWithItemPreview
{
public:
	void SetHeroLoadout(const class UFortCampaignHeroLoadoutItem* HeroLoadout);

	bool GetIsReadOnly() const;
	bool IsLoadoutSwitchingAllowed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutScreenBase">();
	}
	static class UFortHeroLoadoutScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutScreenBase>();
	}
};
static_assert(alignof(UFortHeroLoadoutScreenBase) == 0x000008, "Wrong alignment on UFortHeroLoadoutScreenBase");
static_assert(sizeof(UFortHeroLoadoutScreenBase) == 0x000660, "Wrong size on UFortHeroLoadoutScreenBase");

class UFortHeroLoadoutSlotButton final : public UCommonButtonLegacy
{
public:
	class FName                                   SlotName;
	int32                                         SlotIndex;
	EHeroLoadoutSlotType                          SlotType;
	uint8                                         Pad_1439[0x7];
	TMulticastInlineDelegate<void(class UFortHeroLoadoutSlotButton* SlotButton)> OnRequestChangeHero;
	TMulticastInlineDelegate<void(class UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen)> OnContextMenuOpenChanged;
	class UMenuAnchor*                            ContextMenuAnchor;
	uint8                                         Pad_1468[0x8];

public:
	void HandleMenuOpenChanged(bool bIsMenuOpen);

	bool IsContextMenuOpen() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutSlotButton">();
	}
	static class UFortHeroLoadoutSlotButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutSlotButton>();
	}
};
static_assert(alignof(UFortHeroLoadoutSlotButton) == 0x000010, "Wrong alignment on UFortHeroLoadoutSlotButton");
static_assert(sizeof(UFortHeroLoadoutSlotButton) == 0x001470, "Wrong size on UFortHeroLoadoutSlotButton");
static_assert(offsetof(UFortHeroLoadoutSlotButton, SlotName) == 0x001430, "Member 'UFortHeroLoadoutSlotButton::SlotName' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutSlotButton, SlotIndex) == 0x001434, "Member 'UFortHeroLoadoutSlotButton::SlotIndex' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutSlotButton, SlotType) == 0x001438, "Member 'UFortHeroLoadoutSlotButton::SlotType' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutSlotButton, OnRequestChangeHero) == 0x001440, "Member 'UFortHeroLoadoutSlotButton::OnRequestChangeHero' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutSlotButton, OnContextMenuOpenChanged) == 0x001450, "Member 'UFortHeroLoadoutSlotButton::OnContextMenuOpenChanged' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutSlotButton, ContextMenuAnchor) == 0x001460, "Member 'UFortHeroLoadoutSlotButton::ContextMenuAnchor' has a wrong offset!");

class UFortHeroLoadoutTeamPerkPicker final : public UFortItemPickerBase
{
public:
	TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem;

public:
	void HandleDifferentTargetLoadoutSetBP();
	void SetTargetLoadout(const class UFortCampaignHeroLoadoutItem* LoadoutItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutTeamPerkPicker">();
	}
	static class UFortHeroLoadoutTeamPerkPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutTeamPerkPicker>();
	}
};
static_assert(alignof(UFortHeroLoadoutTeamPerkPicker) == 0x000008, "Wrong alignment on UFortHeroLoadoutTeamPerkPicker");
static_assert(sizeof(UFortHeroLoadoutTeamPerkPicker) == 0x0003D8, "Wrong size on UFortHeroLoadoutTeamPerkPicker");
static_assert(offsetof(UFortHeroLoadoutTeamPerkPicker, TargetLoadoutItem) == 0x0003D0, "Member 'UFortHeroLoadoutTeamPerkPicker::TargetLoadoutItem' has a wrong offset!");

class UFortCampaignTabsScreenBase final : public UCommonActivatableWidget
{
public:
	TMap<EFortUIFeature, class FName>             FeaturesTabsMap;
	class UHorizontalBox*                         TopTabContainer;
	class UFortTabListWidgetBase*                 TopTabList;
	TSubclassOf<class UFortTabListWidgetBase>     MainTabSet;
	uint8                                         Pad_410[0x8];
	class UCommonAnimatedSwitcher*                Switcher_TabContent;

public:
	void ConstructTabs();
	void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleMainTabSelected(class FName TabNameID);
	void UpdateItemShopButtonBang(const class FName Tab);

	bool ShouldShowItemShopBang() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCampaignTabsScreenBase">();
	}
	static class UFortCampaignTabsScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCampaignTabsScreenBase>();
	}
};
static_assert(alignof(UFortCampaignTabsScreenBase) == 0x000008, "Wrong alignment on UFortCampaignTabsScreenBase");
static_assert(sizeof(UFortCampaignTabsScreenBase) == 0x000420, "Wrong size on UFortCampaignTabsScreenBase");
static_assert(offsetof(UFortCampaignTabsScreenBase, FeaturesTabsMap) == 0x0003A8, "Member 'UFortCampaignTabsScreenBase::FeaturesTabsMap' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase, TopTabContainer) == 0x0003F8, "Member 'UFortCampaignTabsScreenBase::TopTabContainer' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase, TopTabList) == 0x000400, "Member 'UFortCampaignTabsScreenBase::TopTabList' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase, MainTabSet) == 0x000408, "Member 'UFortCampaignTabsScreenBase::MainTabSet' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase, Switcher_TabContent) == 0x000418, "Member 'UFortCampaignTabsScreenBase::Switcher_TabContent' has a wrong offset!");

class UFortCampaignTabsScreenBase_Legacy final : public UCommonActivatablePanelLegacy
{
public:
	TMap<EFortUIFeature, class FName>             FeaturesTabsMap;
	class UHorizontalBox*                         TopTabContainer;
	class UFortTabListWidgetBase_Legacy*          TopTabList;
	TSubclassOf<class UFortTabListWidgetBase_Legacy> MainTabSet;
	uint8                                         Pad_548[0x8];

public:
	void ConstructTabs();
	void HandleFeatureNavigateRequest(EFortUIFeature Feature);
	void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason);
	void HandleMainTabCreated(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleMainTabSelected(class FName TabNameID);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCampaignTabsScreenBase_Legacy">();
	}
	static class UFortCampaignTabsScreenBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCampaignTabsScreenBase_Legacy>();
	}
};
static_assert(alignof(UFortCampaignTabsScreenBase_Legacy) == 0x000008, "Wrong alignment on UFortCampaignTabsScreenBase_Legacy");
static_assert(sizeof(UFortCampaignTabsScreenBase_Legacy) == 0x000550, "Wrong size on UFortCampaignTabsScreenBase_Legacy");
static_assert(offsetof(UFortCampaignTabsScreenBase_Legacy, FeaturesTabsMap) == 0x0004E0, "Member 'UFortCampaignTabsScreenBase_Legacy::FeaturesTabsMap' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase_Legacy, TopTabContainer) == 0x000530, "Member 'UFortCampaignTabsScreenBase_Legacy::TopTabContainer' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase_Legacy, TopTabList) == 0x000538, "Member 'UFortCampaignTabsScreenBase_Legacy::TopTabList' has a wrong offset!");
static_assert(offsetof(UFortCampaignTabsScreenBase_Legacy, MainTabSet) == 0x000540, "Member 'UFortCampaignTabsScreenBase_Legacy::MainTabSet' has a wrong offset!");

class UStoreCardObject final : public UObject
{
public:
	struct FCard                                  Card;
	int32                                         OriginalIndex;
	uint8                                         Pad_44[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StoreCardObject">();
	}
	static class UStoreCardObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreCardObject>();
	}
};
static_assert(alignof(UStoreCardObject) == 0x000008, "Wrong alignment on UStoreCardObject");
static_assert(sizeof(UStoreCardObject) == 0x000048, "Wrong size on UStoreCardObject");
static_assert(offsetof(UStoreCardObject, Card) == 0x000028, "Member 'UStoreCardObject::Card' has a wrong offset!");
static_assert(offsetof(UStoreCardObject, OriginalIndex) == 0x000040, "Member 'UStoreCardObject::OriginalIndex' has a wrong offset!");

class UFortStoreSummary final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4E0[0x8];
	TArray<class UStoreCardObject*>               StoreCardObjects;
	class UCommonTileView*                        TileView;
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
	uint8                                         Pad_508[0x18];
	class UFortMulchConfirmationModalWidget*      MulchConfirmationModal;

public:
	void CloseSummaryScreen();
	void FinalizeFavoriteStatus();
	void HandleContextMenuOpenChanged(bool bIsOpen);
	void HandleContextMenuOpenChangedBP(bool bIsOpen);
	void HideMulchConfirmationModal();
	void MarkDefaultItemsForMulch();
	void NotifyPanelActivated();
	void NotifyPanelDeactivated();
	void SetCards(const TArray<struct FCard>& Cards);
	void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);
	void ShowMulchConfirmationModal();

	bool GetIsInChoiceSelectionMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSummary">();
	}
	static class UFortStoreSummary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSummary>();
	}
};
static_assert(alignof(UFortStoreSummary) == 0x000008, "Wrong alignment on UFortStoreSummary");
static_assert(sizeof(UFortStoreSummary) == 0x000528, "Wrong size on UFortStoreSummary");
static_assert(offsetof(UFortStoreSummary, StoreCardObjects) == 0x0004E8, "Member 'UFortStoreSummary::StoreCardObjects' has a wrong offset!");
static_assert(offsetof(UFortStoreSummary, TileView) == 0x0004F8, "Member 'UFortStoreSummary::TileView' has a wrong offset!");
static_assert(offsetof(UFortStoreSummary, MulchConfirmationModalClass) == 0x000500, "Member 'UFortStoreSummary::MulchConfirmationModalClass' has a wrong offset!");
static_assert(offsetof(UFortStoreSummary, MulchConfirmationModal) == 0x000520, "Member 'UFortStoreSummary::MulchConfirmationModal' has a wrong offset!");

class UFortStoreSummaryItemButton final : public UCommonButtonLegacy
{
public:
	bool                                          HasAnItemMarkedForMulching;
	uint8                                         Pad_1431[0x2F];
	class UMenuAnchor*                            PopupMenuAnchor;
	class UStoreCardObject*                       StoreCardObject;
	class UFortInventoryContext*                  InventoryContext;
	uint8                                         Pad_1478[0x8];

public:
	class UUserWidget* GetPopupMenu();
	void HandleItemMulchStateChanged();
	void HandleMenuOpenChanged(bool bIsOpen);
	void SetStoreCardObject(class UStoreCardObject* CardObject);
	void UpdateMulchListWithItem(bool bAddingItem);

	class UStoreCardObject* GetStoreCardObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSummaryItemButton">();
	}
	static class UFortStoreSummaryItemButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSummaryItemButton>();
	}
};
static_assert(alignof(UFortStoreSummaryItemButton) == 0x000010, "Wrong alignment on UFortStoreSummaryItemButton");
static_assert(sizeof(UFortStoreSummaryItemButton) == 0x001480, "Wrong size on UFortStoreSummaryItemButton");
static_assert(offsetof(UFortStoreSummaryItemButton, HasAnItemMarkedForMulching) == 0x001430, "Member 'UFortStoreSummaryItemButton::HasAnItemMarkedForMulching' has a wrong offset!");
static_assert(offsetof(UFortStoreSummaryItemButton, PopupMenuAnchor) == 0x001460, "Member 'UFortStoreSummaryItemButton::PopupMenuAnchor' has a wrong offset!");
static_assert(offsetof(UFortStoreSummaryItemButton, StoreCardObject) == 0x001468, "Member 'UFortStoreSummaryItemButton::StoreCardObject' has a wrong offset!");
static_assert(offsetof(UFortStoreSummaryItemButton, InventoryContext) == 0x001470, "Member 'UFortStoreSummaryItemButton::InventoryContext' has a wrong offset!");

class UFortStoreSummaryItemButton_Legacy final : public UCommonButtonLegacy
{
public:
	bool                                          HasAnItemMarkedForMulching;
	uint8                                         Pad_1431[0x2F];
	class UMenuAnchor*                            PopupMenuAnchor;
	class UStoreCardObject*                       StoreCardObject;
	class UFortInventoryContext*                  InventoryContext;
	uint8                                         Pad_1478[0x8];

public:
	class UUserWidget* GetPopupMenu();
	void HandleItemMulchStateChanged();
	void HandleMenuOpenChanged(bool bIsOpen);
	void SetStoreCardObject(class UStoreCardObject* CardObject);
	void UpdateMulchListWithItem(bool bAddingItem);

	class UStoreCardObject* GetStoreCardObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSummaryItemButton_Legacy">();
	}
	static class UFortStoreSummaryItemButton_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSummaryItemButton_Legacy>();
	}
};
static_assert(alignof(UFortStoreSummaryItemButton_Legacy) == 0x000010, "Wrong alignment on UFortStoreSummaryItemButton_Legacy");
static_assert(sizeof(UFortStoreSummaryItemButton_Legacy) == 0x001480, "Wrong size on UFortStoreSummaryItemButton_Legacy");
static_assert(offsetof(UFortStoreSummaryItemButton_Legacy, HasAnItemMarkedForMulching) == 0x001430, "Member 'UFortStoreSummaryItemButton_Legacy::HasAnItemMarkedForMulching' has a wrong offset!");
static_assert(offsetof(UFortStoreSummaryItemButton_Legacy, PopupMenuAnchor) == 0x001460, "Member 'UFortStoreSummaryItemButton_Legacy::PopupMenuAnchor' has a wrong offset!");
static_assert(offsetof(UFortStoreSummaryItemButton_Legacy, StoreCardObject) == 0x001468, "Member 'UFortStoreSummaryItemButton_Legacy::StoreCardObject' has a wrong offset!");
static_assert(offsetof(UFortStoreSummaryItemButton_Legacy, InventoryContext) == 0x001470, "Member 'UFortStoreSummaryItemButton_Legacy::InventoryContext' has a wrong offset!");

class UFortStoreSummaryItemPopupMenu final : public UFortPopupMenu
{
public:
	uint8                                         Pad_500[0x8];

public:
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void MulchItem();

	class UFortStoreSummaryItemButton* GetHostButton() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSummaryItemPopupMenu">();
	}
	static class UFortStoreSummaryItemPopupMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSummaryItemPopupMenu>();
	}
};
static_assert(alignof(UFortStoreSummaryItemPopupMenu) == 0x000008, "Wrong alignment on UFortStoreSummaryItemPopupMenu");
static_assert(sizeof(UFortStoreSummaryItemPopupMenu) == 0x000508, "Wrong size on UFortStoreSummaryItemPopupMenu");

class UFortStoreSummaryItemPopupMenu_Legacy final : public UFortPopupMenu_Legacy
{
public:
	uint8                                         Pad_500[0x8];

public:
	void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void MulchItem();

	class UFortStoreSummaryItemButton_Legacy* GetHostButton() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSummaryItemPopupMenu_Legacy">();
	}
	static class UFortStoreSummaryItemPopupMenu_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSummaryItemPopupMenu_Legacy>();
	}
};
static_assert(alignof(UFortStoreSummaryItemPopupMenu_Legacy) == 0x000008, "Wrong alignment on UFortStoreSummaryItemPopupMenu_Legacy");
static_assert(sizeof(UFortStoreSummaryItemPopupMenu_Legacy) == 0x000508, "Wrong size on UFortStoreSummaryItemPopupMenu_Legacy");

class UFortStoreSummary_Legacy final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4E0[0x8];
	TArray<class UStoreCardObject*>               StoreCardObjects;
	class UCommonTileView*                        TileView;
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
	uint8                                         Pad_508[0x18];
	class UFortMulchConfirmationModalWidget*      MulchConfirmationModal;

public:
	void CloseSummaryScreen();
	void FinalizeFavoriteStatus();
	void HandleContextMenuOpenChanged(bool bIsOpen);
	void HandleContextMenuOpenChangedBP(bool bIsOpen);
	void HideMulchConfirmationModal();
	void MarkDefaultItemsForMulch();
	void NotifyPanelActivated();
	void NotifyPanelDeactivated();
	void SetCards(const TArray<struct FCard>& Cards);
	void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);
	void ShowMulchConfirmationModal();

	bool GetIsInChoiceSelectionMode() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStoreSummary_Legacy">();
	}
	static class UFortStoreSummary_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSummary_Legacy>();
	}
};
static_assert(alignof(UFortStoreSummary_Legacy) == 0x000008, "Wrong alignment on UFortStoreSummary_Legacy");
static_assert(sizeof(UFortStoreSummary_Legacy) == 0x000528, "Wrong size on UFortStoreSummary_Legacy");
static_assert(offsetof(UFortStoreSummary_Legacy, StoreCardObjects) == 0x0004E8, "Member 'UFortStoreSummary_Legacy::StoreCardObjects' has a wrong offset!");
static_assert(offsetof(UFortStoreSummary_Legacy, TileView) == 0x0004F8, "Member 'UFortStoreSummary_Legacy::TileView' has a wrong offset!");
static_assert(offsetof(UFortStoreSummary_Legacy, MulchConfirmationModalClass) == 0x000500, "Member 'UFortStoreSummary_Legacy::MulchConfirmationModalClass' has a wrong offset!");
static_assert(offsetof(UFortStoreSummary_Legacy, MulchConfirmationModal) == 0x000520, "Member 'UFortStoreSummary_Legacy::MulchConfirmationModal' has a wrong offset!");

class UFortHeroLoadoutGadgetTileBase final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       Text_GadgetName;
	class UCommonLazyImage*                       Image_Icon;
	class URichTextBlock*                         RichText_Description;
	class UFortGadgetItemDefinition*              GadgetToRepresent;

public:
	void OnGadgetUpdated(bool bIsValidGadget);
	void SetGadgetToRepresent(const class UFortGadgetItemDefinition* GadgetItemDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutGadgetTileBase">();
	}
	static class UFortHeroLoadoutGadgetTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutGadgetTileBase>();
	}
};
static_assert(alignof(UFortHeroLoadoutGadgetTileBase) == 0x000008, "Wrong alignment on UFortHeroLoadoutGadgetTileBase");
static_assert(sizeof(UFortHeroLoadoutGadgetTileBase) == 0x0002B0, "Wrong size on UFortHeroLoadoutGadgetTileBase");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, Text_GadgetName) == 0x000290, "Member 'UFortHeroLoadoutGadgetTileBase::Text_GadgetName' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, Image_Icon) == 0x000298, "Member 'UFortHeroLoadoutGadgetTileBase::Image_Icon' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, RichText_Description) == 0x0002A0, "Member 'UFortHeroLoadoutGadgetTileBase::RichText_Description' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutGadgetTileBase, GadgetToRepresent) == 0x0002A8, "Member 'UFortHeroLoadoutGadgetTileBase::GadgetToRepresent' has a wrong offset!");

class UFortHeroLoadoutInGameScreenBase final : public UCommonActivatablePanelLegacy
{
public:
	TArray<struct FFortInGamePerkDisplayData>     PerksDisplayData;
	TSubclassOf<class UFortHeroLoadoutPerkTileBase> TileClass;
	class UScrollBox*                             ScrollBox_Content;
	class UFortItemDetailsHostPanel*              ItemDetailsHostPanel_Header;
	class UGridPanel*                             GridPanel_Perks;
	class UFortHeroLoadoutGadgetTileBase*         GadgetTile_Gadget1;
	class UFortHeroLoadoutGadgetTileBase*         GadgetTile_Gadget2;
	TArray<class UFortHeroLoadoutGadgetTileBase*> GadgetTiles;

public:
	void OnPerkWidgetAdded(class UGridSlot* GridSlot);

	class UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32 SlotIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutInGameScreenBase">();
	}
	static class UFortHeroLoadoutInGameScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutInGameScreenBase>();
	}
};
static_assert(alignof(UFortHeroLoadoutInGameScreenBase) == 0x000008, "Wrong alignment on UFortHeroLoadoutInGameScreenBase");
static_assert(sizeof(UFortHeroLoadoutInGameScreenBase) == 0x000530, "Wrong size on UFortHeroLoadoutInGameScreenBase");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, PerksDisplayData) == 0x0004E0, "Member 'UFortHeroLoadoutInGameScreenBase::PerksDisplayData' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, TileClass) == 0x0004F0, "Member 'UFortHeroLoadoutInGameScreenBase::TileClass' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, ScrollBox_Content) == 0x0004F8, "Member 'UFortHeroLoadoutInGameScreenBase::ScrollBox_Content' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, ItemDetailsHostPanel_Header) == 0x000500, "Member 'UFortHeroLoadoutInGameScreenBase::ItemDetailsHostPanel_Header' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GridPanel_Perks) == 0x000508, "Member 'UFortHeroLoadoutInGameScreenBase::GridPanel_Perks' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GadgetTile_Gadget1) == 0x000510, "Member 'UFortHeroLoadoutInGameScreenBase::GadgetTile_Gadget1' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GadgetTile_Gadget2) == 0x000518, "Member 'UFortHeroLoadoutInGameScreenBase::GadgetTile_Gadget2' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutInGameScreenBase, GadgetTiles) == 0x000520, "Member 'UFortHeroLoadoutInGameScreenBase::GadgetTiles' has a wrong offset!");

class UFortHeroLoadoutPerkTileBase final : public UCommonUserWidget
{
public:
	EFortBrushSize                                BrushSize;
	bool                                          bShowSummaryDescription;
	uint8                                         Pad_292[0x6];
	class UCommonTextBlock*                       Text_PerkName;
	class URichTextBlock*                         Text_Description;
	class UFortLazyImage*                         Image_PerkIcon;
	class UHorizontalBox*                         Hbox_PerkDetails;
	class FText                                   ActiveText;
	class FText                                   InactiveText;
	float                                         InactiveOpacity;
	float                                         ActiveOpacity;
	class UFortAbilityKit*                        AbilityKit;
	uint8                                         Pad_2F8[0x20];

public:
	void OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroLoadoutPerkTileBase">();
	}
	static class UFortHeroLoadoutPerkTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroLoadoutPerkTileBase>();
	}
};
static_assert(alignof(UFortHeroLoadoutPerkTileBase) == 0x000008, "Wrong alignment on UFortHeroLoadoutPerkTileBase");
static_assert(sizeof(UFortHeroLoadoutPerkTileBase) == 0x000318, "Wrong size on UFortHeroLoadoutPerkTileBase");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, BrushSize) == 0x000290, "Member 'UFortHeroLoadoutPerkTileBase::BrushSize' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, bShowSummaryDescription) == 0x000291, "Member 'UFortHeroLoadoutPerkTileBase::bShowSummaryDescription' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Text_PerkName) == 0x000298, "Member 'UFortHeroLoadoutPerkTileBase::Text_PerkName' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Text_Description) == 0x0002A0, "Member 'UFortHeroLoadoutPerkTileBase::Text_Description' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Image_PerkIcon) == 0x0002A8, "Member 'UFortHeroLoadoutPerkTileBase::Image_PerkIcon' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, Hbox_PerkDetails) == 0x0002B0, "Member 'UFortHeroLoadoutPerkTileBase::Hbox_PerkDetails' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, ActiveText) == 0x0002B8, "Member 'UFortHeroLoadoutPerkTileBase::ActiveText' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, InactiveText) == 0x0002D0, "Member 'UFortHeroLoadoutPerkTileBase::InactiveText' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, InactiveOpacity) == 0x0002E8, "Member 'UFortHeroLoadoutPerkTileBase::InactiveOpacity' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, ActiveOpacity) == 0x0002EC, "Member 'UFortHeroLoadoutPerkTileBase::ActiveOpacity' has a wrong offset!");
static_assert(offsetof(UFortHeroLoadoutPerkTileBase, AbilityKit) == 0x0002F0, "Member 'UFortHeroLoadoutPerkTileBase::AbilityKit' has a wrong offset!");

class UFortAlterationModOptinScreenBase final : public UCommonActivatablePanelLegacy
{
public:
	class UFortItem*                              ItemToOptin;
	uint8                                         Pad_4E8[0x10];

public:
	void ConvertItemAlterations();
	void OnItemConversionComplete();
	void OnSetupItem();
	void RequestClose(bool bCancelled);
	void SetupItem(class UFortItem* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAlterationModOptinScreenBase">();
	}
	static class UFortAlterationModOptinScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAlterationModOptinScreenBase>();
	}
};
static_assert(alignof(UFortAlterationModOptinScreenBase) == 0x000008, "Wrong alignment on UFortAlterationModOptinScreenBase");
static_assert(sizeof(UFortAlterationModOptinScreenBase) == 0x0004F8, "Wrong size on UFortAlterationModOptinScreenBase");
static_assert(offsetof(UFortAlterationModOptinScreenBase, ItemToOptin) == 0x0004E0, "Member 'UFortAlterationModOptinScreenBase::ItemToOptin' has a wrong offset!");

class UFortAlterationModScreenBase final : public UFortActivatablePanel
{
public:
	class UFortAlterationsWidget*                 AlterationsToEdit;
	class UFortAlterationOptionsBase*             AlterationSlotOptions;
	class UFortItemDetailsHostPanel*              ItemInspectionMainItemDetailsHostPanel;
	class UFortItemDetailsHostPanel*              AlterationsExtraDetailsPanel;
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;
	struct FDataTableRowHandle                    BackInputAction;
	TWeakObjectPtr<class UFortAlterableItem>      AlterableItem;
	class UFortAlterationOption*                  CurrentAlterationOptionInternal;
	uint8                                         Pad_560[0x18];

public:
	bool AreIngredientRequirementsMent(const TArray<struct FFortItemQuantityPair>& RequiredIngredients);
	void CancelSelection();
	void ConfirmSelection();
	void HandleBackAction(bool* bPassThrough);
	void OnAlterationModificationCompleted();
	void OnAlterationModificationStarted();
	void OnAlterationModificationSucess(int32 ModifiedSlotIndex);
	void OnAlterationOptionChanged(class UFortAlterationOption* CurrentAlterationOption);
	void OnItemSlotChanged(bool SelectedSlot);
	void RefreshItemAndAlterationsBP();
	void SetItemForAlterationsModding(class UFortAlterableItem* InAlterableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAlterationModScreenBase">();
	}
	static class UFortAlterationModScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAlterationModScreenBase>();
	}
};
static_assert(alignof(UFortAlterationModScreenBase) == 0x000008, "Wrong alignment on UFortAlterationModScreenBase");
static_assert(sizeof(UFortAlterationModScreenBase) == 0x000578, "Wrong size on UFortAlterationModScreenBase");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationsToEdit) == 0x000518, "Member 'UFortAlterationModScreenBase::AlterationsToEdit' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationSlotOptions) == 0x000520, "Member 'UFortAlterationModScreenBase::AlterationSlotOptions' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, ItemInspectionMainItemDetailsHostPanel) == 0x000528, "Member 'UFortAlterationModScreenBase::ItemInspectionMainItemDetailsHostPanel' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationsExtraDetailsPanel) == 0x000530, "Member 'UFortAlterationModScreenBase::AlterationsExtraDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, AlterationModOptinScreenClass) == 0x000538, "Member 'UFortAlterationModScreenBase::AlterationModOptinScreenClass' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, BackInputAction) == 0x000540, "Member 'UFortAlterationModScreenBase::BackInputAction' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, AlterableItem) == 0x000550, "Member 'UFortAlterationModScreenBase::AlterableItem' has a wrong offset!");
static_assert(offsetof(UFortAlterationModScreenBase, CurrentAlterationOptionInternal) == 0x000558, "Member 'UFortAlterationModScreenBase::CurrentAlterationOptionInternal' has a wrong offset!");

class UFortItemInspectionScreen final : public UFortActivatablePanelWithItemPreview
{
public:
	EFortItemInspectionMode                       CurrentInspectMode;
	uint8                                         Pad_661[0x3];
	TWeakObjectPtr<class UFortItem>               InspectedItem;
	bool                                          UpgradeAllowed;
	bool                                          EvolveAllowed;
	bool                                          FavoriteAllowed;
	bool                                          RarityUpgradingAllowed;
	bool                                          IsPreviewing;
	bool                                          bHasSeenRefundHelpPrompt;
	uint8                                         Pad_672[0x6];
	class UFortItemInspectCycleWidget*            CycleWidget;
	struct FGameplayTagQuery                      InspectAnimationTag;
	TSubclassOf<class UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;
	TSubclassOf<class UFortAlterationModScreenBase> AlterationModScreenClass;
	TSoftObjectPtr<class UDataTable>              RefundDescriptionsDataTable;
	uint8                                         Pad_700[0x60];

public:
	void DoAlterationModification();
	class UFortItemInspectCycleWidget* GetCycleWidget();
	void HandleDifferentInspectionModeSetBP();
	void HandleDifferentItemToInspectSetBP();
	void HandleIsPreviewingChanged();
	void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void HandleItemToInspectChangedBP(bool bWasFavoritedChanged);
	void HandleItemToInspectDestroyed();
	void HandleItemToInspectDestroyedBP();
	void OpenItemInspect(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32 QuantityOverride);
	void SetAttemptingConversion(bool bIsAttemptingConversion);
	void SetInspectionMode(EFortItemInspectionMode NewInspectMode);
	void SetItemToRepresent(class UFortItem* Item);

	bool DoesItemHaveLegacyAlterations() const;
	int32 GetItemQuantityOverride() const;
	class FText GetRefundDescriptionText() const;
	class UFortAccountItem* GetRefundResultItem() const;
	bool IsItemSlottedInCollectionBook(const class UFortItem* Item) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemInspectionScreen">();
	}
	static class UFortItemInspectionScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemInspectionScreen>();
	}
};
static_assert(alignof(UFortItemInspectionScreen) == 0x000008, "Wrong alignment on UFortItemInspectionScreen");
static_assert(sizeof(UFortItemInspectionScreen) == 0x000760, "Wrong size on UFortItemInspectionScreen");
static_assert(offsetof(UFortItemInspectionScreen, CurrentInspectMode) == 0x000660, "Member 'UFortItemInspectionScreen::CurrentInspectMode' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, InspectedItem) == 0x000664, "Member 'UFortItemInspectionScreen::InspectedItem' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, UpgradeAllowed) == 0x00066C, "Member 'UFortItemInspectionScreen::UpgradeAllowed' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, EvolveAllowed) == 0x00066D, "Member 'UFortItemInspectionScreen::EvolveAllowed' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, FavoriteAllowed) == 0x00066E, "Member 'UFortItemInspectionScreen::FavoriteAllowed' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, RarityUpgradingAllowed) == 0x00066F, "Member 'UFortItemInspectionScreen::RarityUpgradingAllowed' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, IsPreviewing) == 0x000670, "Member 'UFortItemInspectionScreen::IsPreviewing' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, bHasSeenRefundHelpPrompt) == 0x000671, "Member 'UFortItemInspectionScreen::bHasSeenRefundHelpPrompt' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, CycleWidget) == 0x000678, "Member 'UFortItemInspectionScreen::CycleWidget' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, InspectAnimationTag) == 0x000680, "Member 'UFortItemInspectionScreen::InspectAnimationTag' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, AlterationModOptinScreenClass) == 0x0006C8, "Member 'UFortItemInspectionScreen::AlterationModOptinScreenClass' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, AlterationModScreenClass) == 0x0006D0, "Member 'UFortItemInspectionScreen::AlterationModScreenClass' has a wrong offset!");
static_assert(offsetof(UFortItemInspectionScreen, RefundDescriptionsDataTable) == 0x0006D8, "Member 'UFortItemInspectionScreen::RefundDescriptionsDataTable' has a wrong offset!");

class UFortItemInspectCycleWidget final : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void(class UFortItem* NewItemToRepresent)> OnItemToRepresentChanged;
	TWeakObjectPtr<class UFortItemTileView>       ItemTileView;
	TWeakObjectPtr<class UFortItem>               ItemToRepresent;
	struct FDataTableRowHandle                    PreviousItemActionRowHandle;
	struct FDataTableRowHandle                    NextItemActionRowHandle;
	uint8                                         Pad_2D0[0x10];

public:
	void OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem);
	void SelectItemWithOffset(int32 Offset);
	void SelectNextItem();
	void SelectPreviousItem();
	void SetItemToRepresent(const class UFortItem* NewItemToRepresent);
	void SetOwningItemInspectScreen(class UFortItemInspectionScreen* ItemInspect);
	void SetupActionHandlers();

	class UFortItem* GetItemWithOffset_BP(int32 IndexOffset) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemInspectCycleWidget">();
	}
	static class UFortItemInspectCycleWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemInspectCycleWidget>();
	}
};
static_assert(alignof(UFortItemInspectCycleWidget) == 0x000008, "Wrong alignment on UFortItemInspectCycleWidget");
static_assert(sizeof(UFortItemInspectCycleWidget) == 0x0002E0, "Wrong size on UFortItemInspectCycleWidget");
static_assert(offsetof(UFortItemInspectCycleWidget, OnItemToRepresentChanged) == 0x000290, "Member 'UFortItemInspectCycleWidget::OnItemToRepresentChanged' has a wrong offset!");
static_assert(offsetof(UFortItemInspectCycleWidget, ItemTileView) == 0x0002A0, "Member 'UFortItemInspectCycleWidget::ItemTileView' has a wrong offset!");
static_assert(offsetof(UFortItemInspectCycleWidget, ItemToRepresent) == 0x0002A8, "Member 'UFortItemInspectCycleWidget::ItemToRepresent' has a wrong offset!");
static_assert(offsetof(UFortItemInspectCycleWidget, PreviousItemActionRowHandle) == 0x0002B0, "Member 'UFortItemInspectCycleWidget::PreviousItemActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortItemInspectCycleWidget, NextItemActionRowHandle) == 0x0002C0, "Member 'UFortItemInspectCycleWidget::NextItemActionRowHandle' has a wrong offset!");

class UFortAlterationOption final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	struct FAlterationOption                      AlterationOption;
	uint8                                         Pad_1470[0x10];

public:
	void OnSetup();
	void Setup(struct FAlterationOption* InAlterationOption, EFortAlterationOptionType InAlterationOptionType);

	class UFortAlterationItemDefinition* GetAlterationDefinition() const;
	EFortAlterationOptionType GetAlterationOptionType() const;
	float GetCurrentPipCount(float MaxPipCount) const;
	float GetNextPipCount(float MaxPipCount) const;
	TArray<struct FFortItemQuantityPair> GetRequiredIngredients() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAlterationOption">();
	}
	static class UFortAlterationOption* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAlterationOption>();
	}
};
static_assert(alignof(UFortAlterationOption) == 0x000010, "Wrong alignment on UFortAlterationOption");
static_assert(sizeof(UFortAlterationOption) == 0x001480, "Wrong size on UFortAlterationOption");
static_assert(offsetof(UFortAlterationOption, AlterationOption) == 0x001438, "Member 'UFortAlterationOption::AlterationOption' has a wrong offset!");

class UFortAlterationOptionsBase final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];
	TSubclassOf<class UFortAlterationOption>      AlterationOptionClass;
	class UCommonButtonGroupLegacy*               AlterationOptionButtons;
	uint8                                         Pad_2B0[0x20];
	class UFortAlterableItem*                     Item;
	int32                                         SlotIndex;
	bool                                          bUpgradeOptionExists;
	uint8                                         Pad_2DD[0x3];
	struct FAlterationOption                      UpgradeOption;
	TArray<struct FAlterationOption>              RespecOptions;
	uint8                                         Pad_328[0x10];

public:
	void HandleAlterationsOptionHovered(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex);
	void HandleAlterationsOptionSelected(class UCommonButtonLegacy* AlterationOptionButton, int32 GroupIndex);
	void OnGenerateOption(EFortAlterationOptionType OptionType, class UFortAlterationOption* OptionWidget);
	void OnItemChanged(bool bIntroAlterations);
	void ProcessAlterationOptions(bool bIntroAlterations);

	bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType) const;
	bool IsValidAlterationSlot() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAlterationOptionsBase">();
	}
	static class UFortAlterationOptionsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAlterationOptionsBase>();
	}
};
static_assert(alignof(UFortAlterationOptionsBase) == 0x000008, "Wrong alignment on UFortAlterationOptionsBase");
static_assert(sizeof(UFortAlterationOptionsBase) == 0x000338, "Wrong size on UFortAlterationOptionsBase");
static_assert(offsetof(UFortAlterationOptionsBase, AlterationOptionClass) == 0x0002A0, "Member 'UFortAlterationOptionsBase::AlterationOptionClass' has a wrong offset!");
static_assert(offsetof(UFortAlterationOptionsBase, AlterationOptionButtons) == 0x0002A8, "Member 'UFortAlterationOptionsBase::AlterationOptionButtons' has a wrong offset!");
static_assert(offsetof(UFortAlterationOptionsBase, Item) == 0x0002D0, "Member 'UFortAlterationOptionsBase::Item' has a wrong offset!");
static_assert(offsetof(UFortAlterationOptionsBase, SlotIndex) == 0x0002D8, "Member 'UFortAlterationOptionsBase::SlotIndex' has a wrong offset!");
static_assert(offsetof(UFortAlterationOptionsBase, bUpgradeOptionExists) == 0x0002DC, "Member 'UFortAlterationOptionsBase::bUpgradeOptionExists' has a wrong offset!");
static_assert(offsetof(UFortAlterationOptionsBase, UpgradeOption) == 0x0002E0, "Member 'UFortAlterationOptionsBase::UpgradeOption' has a wrong offset!");
static_assert(offsetof(UFortAlterationOptionsBase, RespecOptions) == 0x000318, "Member 'UFortAlterationOptionsBase::RespecOptions' has a wrong offset!");

class UFortMissionActivationInfoSTW final : public UObject
{
public:
	bool                                          bIsMultiplayer;
	uint8                                         Pad_29[0x77];
	class AFortPlayerController*                  FortPC;
	class AFortGameStateZone*                     GameStateZone;
	class UCurveFloat*                            DifficultyIncreaseBluGloCurve;
	uint8                                         Pad_B8[0xC0];

public:
	EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType);
	void GetVoteCounts(EFortVoteType VoteType, int32* OutYesVoteCount, int32* OutNoVoteCount);
	TArray<struct FVoter> GetVoters(EFortVoteType VoteType);
	void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<struct FVoter>& Voters);
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewInfo);
	void HandleTeamMemberRemoved(int32 RemovedIndex);
	bool HasPlayerVoted(EFortVoteType VoteType);
	void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType);
	void SubmitVote(EFortVoteType VoteType, bool bApprove);

	bool CanRequestVote(EFortVoteType VoteType) const;
	bool DoesPrimaryMissionContainTags(const struct FGameplayTagContainer& Tags) const;
	int32 GetAvailableBluGloCount() const;
	void GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<struct FFortItemDelta>* DeltaRewards) const;
	int32 GetIncreaseDifficultyBluGloRequirement() const;
	struct FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType) const;
	class FText GetLockoutTimeRemaining(EFortVoteType VoteType) const;
	float GetMissionObjectiveTimeRemaining() const;
	EFortVoteType GetMissionVoteType() const;
	class AFortMission* GetPrimaryMission() const;
	class UFortMissionInfo* GetPrimaryMissionInfo() const;
	int32 GetStartObjectiveBluGloRequirement() const;
	float GetVoteTimeRemaining(EFortVoteType VoteType) const;
	bool IsAnyVoteActive() const;
	bool IsPlayerVoteInstigator(EFortVoteType VoteType) const;
	bool IsVoteActive(EFortVoteType VoteType) const;
	bool IsVoteLocked(EFortVoteType VoteType) const;
	class FText TimeSecondsToText(float InSeconds) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMissionActivationInfoSTW">();
	}
	static class UFortMissionActivationInfoSTW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMissionActivationInfoSTW>();
	}
};
static_assert(alignof(UFortMissionActivationInfoSTW) == 0x000008, "Wrong alignment on UFortMissionActivationInfoSTW");
static_assert(sizeof(UFortMissionActivationInfoSTW) == 0x000178, "Wrong size on UFortMissionActivationInfoSTW");
static_assert(offsetof(UFortMissionActivationInfoSTW, bIsMultiplayer) == 0x000028, "Member 'UFortMissionActivationInfoSTW::bIsMultiplayer' has a wrong offset!");
static_assert(offsetof(UFortMissionActivationInfoSTW, FortPC) == 0x0000A0, "Member 'UFortMissionActivationInfoSTW::FortPC' has a wrong offset!");
static_assert(offsetof(UFortMissionActivationInfoSTW, GameStateZone) == 0x0000A8, "Member 'UFortMissionActivationInfoSTW::GameStateZone' has a wrong offset!");
static_assert(offsetof(UFortMissionActivationInfoSTW, DifficultyIncreaseBluGloCurve) == 0x0000B0, "Member 'UFortMissionActivationInfoSTW::DifficultyIncreaseBluGloCurve' has a wrong offset!");

class UFortMissionActivationWidgetSTWPanel final : public UCommonUserWidget
{
public:
	class UFortMissionActivationInfoSTW*          InfoObject;
	uint8                                         Pad_298[0x20];

public:
	void InfoObjectUpdated();
	void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);
	void OnVoteUpdatedBP(EFortVoteType VoteType);
	void SetInfoObject(class UFortMissionActivationInfoSTW* NewInfoObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMissionActivationWidgetSTWPanel">();
	}
	static class UFortMissionActivationWidgetSTWPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMissionActivationWidgetSTWPanel>();
	}
};
static_assert(alignof(UFortMissionActivationWidgetSTWPanel) == 0x000008, "Wrong alignment on UFortMissionActivationWidgetSTWPanel");
static_assert(sizeof(UFortMissionActivationWidgetSTWPanel) == 0x0002B8, "Wrong size on UFortMissionActivationWidgetSTWPanel");
static_assert(offsetof(UFortMissionActivationWidgetSTWPanel, InfoObject) == 0x000290, "Member 'UFortMissionActivationWidgetSTWPanel::InfoObject' has a wrong offset!");

class UFortMissionActivationWidgetSTW final : public UCommonActivatableWidget
{
public:
	class UFortMissionActivationInfoSTW*          InfoObject;
	struct FGameplayTagContainer                  ReadyUpObjectiveHandle;
	class UCurveFloat*                            DifficultyIncreaseBluGloCurve;
	uint8                                         Pad_3D8[0x20];

public:
	void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
	void OnMultiplayerChangedBP(bool bIsMultiplayer);
	void OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState);
	void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);
	void RequestDefaultState();
	void RequestDifficultyIncreaseState();
	void RequestStartObjectiveState();

	EFortMissionActivationWidgetSTWState GetCurrentState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMissionActivationWidgetSTW">();
	}
	static class UFortMissionActivationWidgetSTW* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMissionActivationWidgetSTW>();
	}
};
static_assert(alignof(UFortMissionActivationWidgetSTW) == 0x000008, "Wrong alignment on UFortMissionActivationWidgetSTW");
static_assert(sizeof(UFortMissionActivationWidgetSTW) == 0x0003F8, "Wrong size on UFortMissionActivationWidgetSTW");
static_assert(offsetof(UFortMissionActivationWidgetSTW, InfoObject) == 0x0003A8, "Member 'UFortMissionActivationWidgetSTW::InfoObject' has a wrong offset!");
static_assert(offsetof(UFortMissionActivationWidgetSTW, ReadyUpObjectiveHandle) == 0x0003B0, "Member 'UFortMissionActivationWidgetSTW::ReadyUpObjectiveHandle' has a wrong offset!");
static_assert(offsetof(UFortMissionActivationWidgetSTW, DifficultyIncreaseBluGloCurve) == 0x0003D0, "Member 'UFortMissionActivationWidgetSTW::DifficultyIncreaseBluGloCurve' has a wrong offset!");

class UFortOutpostScreen final : public UFortUserWidget
{
public:
	void SetInputReflectorBoxVisibility(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortOutpostScreen">();
	}
	static class UFortOutpostScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortOutpostScreen>();
	}
};
static_assert(alignof(UFortOutpostScreen) == 0x000008, "Wrong alignment on UFortOutpostScreen");
static_assert(sizeof(UFortOutpostScreen) == 0x000278, "Wrong size on UFortOutpostScreen");

class UFortCampaignPlayFlow final : public UCommonActivatableWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCampaignPlayFlow">();
	}
	static class UFortCampaignPlayFlow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCampaignPlayFlow>();
	}
};
static_assert(alignof(UFortCampaignPlayFlow) == 0x000008, "Wrong alignment on UFortCampaignPlayFlow");
static_assert(sizeof(UFortCampaignPlayFlow) == 0x0003A8, "Wrong size on UFortCampaignPlayFlow");

class UFortJournalQuestDetails final : public UCommonUserWidget
{
public:
	class UFortQuestItem*                         CurrentQuest;

public:
	bool CanGotoQuest();
	bool CanPartyLeaderPlayQuest();
	bool CanPlayQuest();
	EFortTheaterMapTileType GetActiveMissionTileType();
	void GetFutureObjectives(TArray<class UFortQuestObjectiveInfo*>* FutureObjectives);
	void GetRewards(TArray<struct FFortItemInstanceQuantityPair>* OutRewards, TArray<struct FFortItemInstanceQuantityPair>* OutSelectableRewards);
	void GetVisibleObjectives(TArray<class UFortQuestObjectiveInfo*>* VisibleObjectives);
	void HandleCurrentQuestChangedBP();
	void OnEndSpokenDialog();
	void RegisterEndSpokenDialogEvent();
	void SetCurrentQuest(class UFortQuestItem* InCurrentQuest);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortJournalQuestDetails">();
	}
	static class UFortJournalQuestDetails* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortJournalQuestDetails>();
	}
};
static_assert(alignof(UFortJournalQuestDetails) == 0x000008, "Wrong alignment on UFortJournalQuestDetails");
static_assert(sizeof(UFortJournalQuestDetails) == 0x000298, "Wrong size on UFortJournalQuestDetails");
static_assert(offsetof(UFortJournalQuestDetails, CurrentQuest) == 0x000290, "Member 'UFortJournalQuestDetails::CurrentQuest' has a wrong offset!");

class UFortJournalQuestProgressBar final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x8];
	TWeakObjectPtr<class UFortQuestObjectiveInfo> QuestObjectiveInfo;

public:
	void GetProgressDetails(class FText* OutNumerator, class FText* OutDenominator, float* OutFraction);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortJournalQuestProgressBar">();
	}
	static class UFortJournalQuestProgressBar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortJournalQuestProgressBar>();
	}
};
static_assert(alignof(UFortJournalQuestProgressBar) == 0x000008, "Wrong alignment on UFortJournalQuestProgressBar");
static_assert(sizeof(UFortJournalQuestProgressBar) == 0x0002A0, "Wrong size on UFortJournalQuestProgressBar");
static_assert(offsetof(UFortJournalQuestProgressBar, QuestObjectiveInfo) == 0x000298, "Member 'UFortJournalQuestProgressBar::QuestObjectiveInfo' has a wrong offset!");

class UFortLayoutQuestNode final : public UCommonUserWidget
{
public:
	class UFortQuestMapQuestTile*                 QuestTile;
	int32                                         QuestNodeIndex;
	uint8                                         Pad_29C[0x4];
	struct FFortQuestMapNode                      QuestMapNode;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLayoutQuestNode">();
	}
	static class UFortLayoutQuestNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLayoutQuestNode>();
	}
};
static_assert(alignof(UFortLayoutQuestNode) == 0x000008, "Wrong alignment on UFortLayoutQuestNode");
static_assert(sizeof(UFortLayoutQuestNode) == 0x0002B8, "Wrong size on UFortLayoutQuestNode");
static_assert(offsetof(UFortLayoutQuestNode, QuestTile) == 0x000290, "Member 'UFortLayoutQuestNode::QuestTile' has a wrong offset!");
static_assert(offsetof(UFortLayoutQuestNode, QuestNodeIndex) == 0x000298, "Member 'UFortLayoutQuestNode::QuestNodeIndex' has a wrong offset!");
static_assert(offsetof(UFortLayoutQuestNode, QuestMapNode) == 0x0002A0, "Member 'UFortLayoutQuestNode::QuestMapNode' has a wrong offset!");

class UFortLayoutQuestNode_Legacy final : public UCommonUserWidget
{
public:
	class UFortQuestMapQuestTile_Legacy*          QuestTile;
	int32                                         QuestNodeIndex;
	uint8                                         Pad_29C[0x4];
	struct FFortQuestMapNode                      QuestMapNode;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLayoutQuestNode_Legacy">();
	}
	static class UFortLayoutQuestNode_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLayoutQuestNode_Legacy>();
	}
};
static_assert(alignof(UFortLayoutQuestNode_Legacy) == 0x000008, "Wrong alignment on UFortLayoutQuestNode_Legacy");
static_assert(sizeof(UFortLayoutQuestNode_Legacy) == 0x0002B8, "Wrong size on UFortLayoutQuestNode_Legacy");
static_assert(offsetof(UFortLayoutQuestNode_Legacy, QuestTile) == 0x000290, "Member 'UFortLayoutQuestNode_Legacy::QuestTile' has a wrong offset!");
static_assert(offsetof(UFortLayoutQuestNode_Legacy, QuestNodeIndex) == 0x000298, "Member 'UFortLayoutQuestNode_Legacy::QuestNodeIndex' has a wrong offset!");
static_assert(offsetof(UFortLayoutQuestNode_Legacy, QuestMapNode) == 0x0002A0, "Member 'UFortLayoutQuestNode_Legacy::QuestMapNode' has a wrong offset!");

class UFortProgressArrowButton final : public UCommonButtonBase
{
public:
	struct FSlateColor                            ArrowColor;
	struct FSlateColor                            HoverColor;
	struct FSlateColor                            ShadowColor;
	uint8                                         Pad_141C[0x4];

public:
	void OnArrowColorSet();
	void OnIsInteractiveSet(bool bIsInteractive);
	void OnShadowColorSet();
	void UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressArrowButton">();
	}
	static class UFortProgressArrowButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressArrowButton>();
	}
};
static_assert(alignof(UFortProgressArrowButton) == 0x000010, "Wrong alignment on UFortProgressArrowButton");
static_assert(sizeof(UFortProgressArrowButton) == 0x001420, "Wrong size on UFortProgressArrowButton");
static_assert(offsetof(UFortProgressArrowButton, ArrowColor) == 0x0013E0, "Member 'UFortProgressArrowButton::ArrowColor' has a wrong offset!");
static_assert(offsetof(UFortProgressArrowButton, HoverColor) == 0x0013F4, "Member 'UFortProgressArrowButton::HoverColor' has a wrong offset!");
static_assert(offsetof(UFortProgressArrowButton, ShadowColor) == 0x001408, "Member 'UFortProgressArrowButton::ShadowColor' has a wrong offset!");

class UFortProgressArrowButton_Legacy final : public UCommonButtonLegacy
{
public:
	struct FSlateColor                            ArrowColor;
	struct FSlateColor                            HoverColor;
	struct FSlateColor                            ShadowColor;
	uint8                                         Pad_146C[0x4];

public:
	void OnArrowColorSet();
	void OnIsInteractiveSet(bool bIsInteractive);
	void OnShadowColorSet();
	void UpdateArrowColor(const struct FSlateColor& Color, const struct FSlateColor& HoverColor_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProgressArrowButton_Legacy">();
	}
	static class UFortProgressArrowButton_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProgressArrowButton_Legacy>();
	}
};
static_assert(alignof(UFortProgressArrowButton_Legacy) == 0x000010, "Wrong alignment on UFortProgressArrowButton_Legacy");
static_assert(sizeof(UFortProgressArrowButton_Legacy) == 0x001470, "Wrong size on UFortProgressArrowButton_Legacy");
static_assert(offsetof(UFortProgressArrowButton_Legacy, ArrowColor) == 0x001430, "Member 'UFortProgressArrowButton_Legacy::ArrowColor' has a wrong offset!");
static_assert(offsetof(UFortProgressArrowButton_Legacy, HoverColor) == 0x001444, "Member 'UFortProgressArrowButton_Legacy::HoverColor' has a wrong offset!");
static_assert(offsetof(UFortProgressArrowButton_Legacy, ShadowColor) == 0x001458, "Member 'UFortProgressArrowButton_Legacy::ShadowColor' has a wrong offset!");

class UFortQuestExpiresWidget final : public UCommonUserWidget
{
public:
	TWeakObjectPtr<class UFortQuestItem>          Item;
	uint8                                         Pad_298[0x8];

public:
	void OnQuestExpirationUpdated();
	void SetData(class UFortQuestItem* InItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestExpiresWidget">();
	}
	static class UFortQuestExpiresWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestExpiresWidget>();
	}
};
static_assert(alignof(UFortQuestExpiresWidget) == 0x000008, "Wrong alignment on UFortQuestExpiresWidget");
static_assert(sizeof(UFortQuestExpiresWidget) == 0x0002A0, "Wrong size on UFortQuestExpiresWidget");
static_assert(offsetof(UFortQuestExpiresWidget, Item) == 0x000290, "Member 'UFortQuestExpiresWidget::Item' has a wrong offset!");

class UFortQuestMapCosmeticListWidget final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];

public:
	void UpdateCosmeticListDisplay();

	TArray<class UFortItemDefinition*> GetDisplayItemDefs() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapCosmeticListWidget">();
	}
	static class UFortQuestMapCosmeticListWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapCosmeticListWidget>();
	}
};
static_assert(alignof(UFortQuestMapCosmeticListWidget) == 0x000008, "Wrong alignment on UFortQuestMapCosmeticListWidget");
static_assert(sizeof(UFortQuestMapCosmeticListWidget) == 0x0002A0, "Wrong size on UFortQuestMapCosmeticListWidget");

class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{
public:
	TSubclassOf<class AFortClientAnnouncement_Conversation> QuestConversationClass;
	float                                         QuestUpdateDelayTime;
	uint8                                         Pad_29C[0x4];
	struct FTimerHandle                           QuestUpdateTimerHandle;

public:
	void HandleQuestsUpdatedInternal();
	void SetQuestToDisplay(class UFortQuestItemDefinition* QuestDef);
	void SetScrollWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapDetailsPanelBase">();
	}
	static class UFortQuestMapDetailsPanelBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapDetailsPanelBase>();
	}
};
static_assert(alignof(UFortQuestMapDetailsPanelBase) == 0x000008, "Wrong alignment on UFortQuestMapDetailsPanelBase");
static_assert(sizeof(UFortQuestMapDetailsPanelBase) == 0x0002A8, "Wrong size on UFortQuestMapDetailsPanelBase");
static_assert(offsetof(UFortQuestMapDetailsPanelBase, QuestConversationClass) == 0x000290, "Member 'UFortQuestMapDetailsPanelBase::QuestConversationClass' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanelBase, QuestUpdateDelayTime) == 0x000298, "Member 'UFortQuestMapDetailsPanelBase::QuestUpdateDelayTime' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanelBase, QuestUpdateTimerHandle) == 0x0002A0, "Member 'UFortQuestMapDetailsPanelBase::QuestUpdateTimerHandle' has a wrong offset!");

class UFortQuestMapDetailsPanel final : public UFortQuestMapDetailsPanelBase
{
public:
	struct FDataTableRowHandle                    PlayButtonTriggeringAction;
	TArray<TSubclassOf<class UCommonActivatableWidget>> PriorityActivatableWidgetClassList;
	TSubclassOf<class UCommonBorderStyle>         CurrentQuestBorder;
	TSubclassOf<class UCommonBorderStyle>         CompletedQuestBorder;
	class UFortJournalQuestDetails*               Panel_JournalDetails;
	class UCommonTextBlock*                       Text_QuestTitle;
	class UCommonTextBlock*                       Text_QuestDescription;
	class UCommonTextBlock*                       Text_Header;
	class UCommonTextBlock*                       Text_NotOwnedHeader;
	class UCommonTextBlock*                       Text_InactiveQuestName;
	class UImage*                                 Image_QuestIcon;
	class UCommonListView*                        List_Tasks;
	class UCommonBorder*                          Border_Header;
	class UWidgetSwitcher*                        Switcher_Body;
	class UFortRewardInfoWidget*                  Widget_FutureQuestRewardInfo;
	class UScrollBox*                             ScrollBox_Quest;
	class UScrollBox*                             ScrollBox_NoQuest;
	TArray<class UFortQuestObjectiveInfo*>        VisibleObjectives;
	class UFortQuestItem*                         CurrentQuestItem;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapDetailsPanel">();
	}
	static class UFortQuestMapDetailsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapDetailsPanel>();
	}
};
static_assert(alignof(UFortQuestMapDetailsPanel) == 0x000008, "Wrong alignment on UFortQuestMapDetailsPanel");
static_assert(sizeof(UFortQuestMapDetailsPanel) == 0x000358, "Wrong size on UFortQuestMapDetailsPanel");
static_assert(offsetof(UFortQuestMapDetailsPanel, PlayButtonTriggeringAction) == 0x0002A8, "Member 'UFortQuestMapDetailsPanel::PlayButtonTriggeringAction' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, PriorityActivatableWidgetClassList) == 0x0002B8, "Member 'UFortQuestMapDetailsPanel::PriorityActivatableWidgetClassList' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, CurrentQuestBorder) == 0x0002C8, "Member 'UFortQuestMapDetailsPanel::CurrentQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, CompletedQuestBorder) == 0x0002D0, "Member 'UFortQuestMapDetailsPanel::CompletedQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Panel_JournalDetails) == 0x0002D8, "Member 'UFortQuestMapDetailsPanel::Panel_JournalDetails' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_QuestTitle) == 0x0002E0, "Member 'UFortQuestMapDetailsPanel::Text_QuestTitle' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_QuestDescription) == 0x0002E8, "Member 'UFortQuestMapDetailsPanel::Text_QuestDescription' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_Header) == 0x0002F0, "Member 'UFortQuestMapDetailsPanel::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_NotOwnedHeader) == 0x0002F8, "Member 'UFortQuestMapDetailsPanel::Text_NotOwnedHeader' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Text_InactiveQuestName) == 0x000300, "Member 'UFortQuestMapDetailsPanel::Text_InactiveQuestName' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Image_QuestIcon) == 0x000308, "Member 'UFortQuestMapDetailsPanel::Image_QuestIcon' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, List_Tasks) == 0x000310, "Member 'UFortQuestMapDetailsPanel::List_Tasks' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Border_Header) == 0x000318, "Member 'UFortQuestMapDetailsPanel::Border_Header' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Switcher_Body) == 0x000320, "Member 'UFortQuestMapDetailsPanel::Switcher_Body' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, Widget_FutureQuestRewardInfo) == 0x000328, "Member 'UFortQuestMapDetailsPanel::Widget_FutureQuestRewardInfo' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, ScrollBox_Quest) == 0x000330, "Member 'UFortQuestMapDetailsPanel::ScrollBox_Quest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, ScrollBox_NoQuest) == 0x000338, "Member 'UFortQuestMapDetailsPanel::ScrollBox_NoQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, VisibleObjectives) == 0x000340, "Member 'UFortQuestMapDetailsPanel::VisibleObjectives' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel, CurrentQuestItem) == 0x000350, "Member 'UFortQuestMapDetailsPanel::CurrentQuestItem' has a wrong offset!");

class UFortQuestMapDetailsPanel_Legacy final : public UFortQuestMapDetailsPanelBase
{
public:
	struct FDataTableRowHandle                    PlayButtonTriggeringAction;
	TArray<TSubclassOf<class UCommonActivatablePanelLegacy>> PriorityActivatablePanelClassList;
	TSubclassOf<class UCommonBorderStyle>         CurrentQuestBorder;
	TSubclassOf<class UCommonBorderStyle>         CompletedQuestBorder;
	class UFortJournalQuestDetails*               Panel_JournalDetails;
	class UCommonTextBlock*                       Text_QuestTitle;
	class UCommonTextBlock*                       Text_QuestDescription;
	class UCommonTextBlock*                       Text_Header;
	class UCommonTextBlock*                       Text_NotOwnedHeader;
	class UCommonTextBlock*                       Text_InactiveQuestName;
	class UImage*                                 Image_QuestIcon;
	class UCommonListView*                        List_Tasks;
	class UCommonBorder*                          Border_Header;
	class UWidgetSwitcher*                        Switcher_Body;
	class UFortRewardInfoWidget_Legacy*           Widget_FutureQuestRewardInfo;
	class UScrollBox*                             ScrollBox_Quest;
	class UScrollBox*                             ScrollBox_NoQuest;
	TArray<class UFortQuestObjectiveInfo*>        VisibleObjectives;
	class UFortQuestItem*                         CurrentQuestItem;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapDetailsPanel_Legacy">();
	}
	static class UFortQuestMapDetailsPanel_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapDetailsPanel_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapDetailsPanel_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapDetailsPanel_Legacy");
static_assert(sizeof(UFortQuestMapDetailsPanel_Legacy) == 0x000358, "Wrong size on UFortQuestMapDetailsPanel_Legacy");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, PlayButtonTriggeringAction) == 0x0002A8, "Member 'UFortQuestMapDetailsPanel_Legacy::PlayButtonTriggeringAction' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, PriorityActivatablePanelClassList) == 0x0002B8, "Member 'UFortQuestMapDetailsPanel_Legacy::PriorityActivatablePanelClassList' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, CurrentQuestBorder) == 0x0002C8, "Member 'UFortQuestMapDetailsPanel_Legacy::CurrentQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, CompletedQuestBorder) == 0x0002D0, "Member 'UFortQuestMapDetailsPanel_Legacy::CompletedQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Panel_JournalDetails) == 0x0002D8, "Member 'UFortQuestMapDetailsPanel_Legacy::Panel_JournalDetails' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_QuestTitle) == 0x0002E0, "Member 'UFortQuestMapDetailsPanel_Legacy::Text_QuestTitle' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_QuestDescription) == 0x0002E8, "Member 'UFortQuestMapDetailsPanel_Legacy::Text_QuestDescription' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_Header) == 0x0002F0, "Member 'UFortQuestMapDetailsPanel_Legacy::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_NotOwnedHeader) == 0x0002F8, "Member 'UFortQuestMapDetailsPanel_Legacy::Text_NotOwnedHeader' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Text_InactiveQuestName) == 0x000300, "Member 'UFortQuestMapDetailsPanel_Legacy::Text_InactiveQuestName' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Image_QuestIcon) == 0x000308, "Member 'UFortQuestMapDetailsPanel_Legacy::Image_QuestIcon' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, List_Tasks) == 0x000310, "Member 'UFortQuestMapDetailsPanel_Legacy::List_Tasks' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Border_Header) == 0x000318, "Member 'UFortQuestMapDetailsPanel_Legacy::Border_Header' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Switcher_Body) == 0x000320, "Member 'UFortQuestMapDetailsPanel_Legacy::Switcher_Body' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, Widget_FutureQuestRewardInfo) == 0x000328, "Member 'UFortQuestMapDetailsPanel_Legacy::Widget_FutureQuestRewardInfo' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, ScrollBox_Quest) == 0x000330, "Member 'UFortQuestMapDetailsPanel_Legacy::ScrollBox_Quest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, ScrollBox_NoQuest) == 0x000338, "Member 'UFortQuestMapDetailsPanel_Legacy::ScrollBox_NoQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, VisibleObjectives) == 0x000340, "Member 'UFortQuestMapDetailsPanel_Legacy::VisibleObjectives' has a wrong offset!");
static_assert(offsetof(UFortQuestMapDetailsPanel_Legacy, CurrentQuestItem) == 0x000350, "Member 'UFortQuestMapDetailsPanel_Legacy::CurrentQuestItem' has a wrong offset!");

class UFortQuestMapEventCallout final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x48];
	class UFortBangWrapper_NUI*                   BangWrapper_GoButton;
	class UFortProgressArrowButton*               Button_LeftNav;
	class UFortProgressArrowButton*               Button_RightNav;
	class UCommonButtonBase*                      Button_SwitchMode;
	class UFortQuestMapNewBangWrapper*            BangWrapper_Arrow;
	class UFortQuestMapEventSequence*             Sequence_EventProgress;
	class UHorizontalBox*                         HorizontalBox_NavButtons;
	class UCommonTextBlock*                       Text_Header;
	class UCommonTextBlock*                       Text_Body;
	class UImage*                                 Image_Callout;
	class UFortBangWrapper_NUI*                   BangWrapper_UnHover;
	class USoundBase*                             DefaultSound;
	class UFortQuestItemDefinition*               DefaultRequiredCompletedQuest;
	class USoundBase*                             OverrideSound;
	class UAudioComponent*                        SoundLoop;
	class UFortQuestMapData*                      QuestMapData;
	uint8                                         Pad_470[0x70];

public:
	void DeactivateCallout();
	void OnActivatePlayAnimation();
	void OnDeactivatePlayAnimation();
	void OnEventIndexChanged();
	void OnPlayFadeAnimation(bool bIsFadeOut);
	void OnResetCallout();
	void PlayFadeIn();
	void PlayFadeOut();
	void ResetCallout();
	void SetIsExpanded(bool Expanded);
	void SetIsFaded(bool Faded);
	void UpdateActiveEvents();
	void UpdateCalloutData();
	void UpdateGoButtonBangState(bool bClear);

	int32 GetEventCount() const;
	bool GetIsExpanded() const;
	bool GetIsFaded() const;
	class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent() const;
	bool IsCurrentEventUnlocked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventCallout">();
	}
	static class UFortQuestMapEventCallout* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventCallout>();
	}
};
static_assert(alignof(UFortQuestMapEventCallout) == 0x000008, "Wrong alignment on UFortQuestMapEventCallout");
static_assert(sizeof(UFortQuestMapEventCallout) == 0x0004E0, "Wrong size on UFortQuestMapEventCallout");
static_assert(offsetof(UFortQuestMapEventCallout, BangWrapper_GoButton) == 0x0003F0, "Member 'UFortQuestMapEventCallout::BangWrapper_GoButton' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Button_LeftNav) == 0x0003F8, "Member 'UFortQuestMapEventCallout::Button_LeftNav' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Button_RightNav) == 0x000400, "Member 'UFortQuestMapEventCallout::Button_RightNav' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Button_SwitchMode) == 0x000408, "Member 'UFortQuestMapEventCallout::Button_SwitchMode' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, BangWrapper_Arrow) == 0x000410, "Member 'UFortQuestMapEventCallout::BangWrapper_Arrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Sequence_EventProgress) == 0x000418, "Member 'UFortQuestMapEventCallout::Sequence_EventProgress' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, HorizontalBox_NavButtons) == 0x000420, "Member 'UFortQuestMapEventCallout::HorizontalBox_NavButtons' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Text_Header) == 0x000428, "Member 'UFortQuestMapEventCallout::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Text_Body) == 0x000430, "Member 'UFortQuestMapEventCallout::Text_Body' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, Image_Callout) == 0x000438, "Member 'UFortQuestMapEventCallout::Image_Callout' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, BangWrapper_UnHover) == 0x000440, "Member 'UFortQuestMapEventCallout::BangWrapper_UnHover' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, DefaultSound) == 0x000448, "Member 'UFortQuestMapEventCallout::DefaultSound' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, DefaultRequiredCompletedQuest) == 0x000450, "Member 'UFortQuestMapEventCallout::DefaultRequiredCompletedQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, OverrideSound) == 0x000458, "Member 'UFortQuestMapEventCallout::OverrideSound' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, SoundLoop) == 0x000460, "Member 'UFortQuestMapEventCallout::SoundLoop' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout, QuestMapData) == 0x000468, "Member 'UFortQuestMapEventCallout::QuestMapData' has a wrong offset!");

class UFortQuestMapEventCallout_Legacy final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_518[0x48];
	class UFortBangWrapper_NUI*                   BangWrapper_GoButton;
	class UFortProgressArrowButton_Legacy*        Button_LeftNav;
	class UFortProgressArrowButton_Legacy*        Button_RightNav;
	class UCommonButtonLegacy*                    Button_SwitchMode;
	class UFortQuestMapNewBangWrapper_Legacy*     BangWrapper_Arrow;
	class UFortQuestMapEventSequence*             Sequence_EventProgress;
	class UHorizontalBox*                         HorizontalBox_NavButtons;
	class UCommonTextBlock*                       Text_Header;
	class UCommonTextBlock*                       Text_Body;
	class UImage*                                 Image_Callout;
	class UFortBangWrapper_NUI*                   BangWrapper_UnHover;
	class USoundBase*                             DefaultSound;
	class UFortQuestItemDefinition*               DefaultRequiredCompletedQuest;
	class USoundBase*                             OverrideSound;
	class UAudioComponent*                        SoundLoop;
	class UFortQuestMapData*                      QuestMapData;
	uint8                                         Pad_5E0[0x70];

public:
	void DeactivateCallout();
	void OnActivatePlayAnimation();
	void OnDeactivatePlayAnimation();
	void OnEventIndexChanged();
	void OnPlayFadeAnimation(bool bIsFadeOut);
	void OnResetCallout();
	void PlayFadeIn();
	void PlayFadeOut();
	void ResetCallout();
	void SetIsExpanded(bool Expanded);
	void SetIsFaded(bool Faded);
	void UpdateActiveEvents();
	void UpdateCalloutData();
	void UpdateGoButtonBangState(bool bClear);

	int32 GetEventCount() const;
	bool GetIsExpanded() const;
	bool GetIsFaded() const;
	class UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent() const;
	bool IsCurrentEventUnlocked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventCallout_Legacy">();
	}
	static class UFortQuestMapEventCallout_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventCallout_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapEventCallout_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapEventCallout_Legacy");
static_assert(sizeof(UFortQuestMapEventCallout_Legacy) == 0x000650, "Wrong size on UFortQuestMapEventCallout_Legacy");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, BangWrapper_GoButton) == 0x000560, "Member 'UFortQuestMapEventCallout_Legacy::BangWrapper_GoButton' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Button_LeftNav) == 0x000568, "Member 'UFortQuestMapEventCallout_Legacy::Button_LeftNav' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Button_RightNav) == 0x000570, "Member 'UFortQuestMapEventCallout_Legacy::Button_RightNav' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Button_SwitchMode) == 0x000578, "Member 'UFortQuestMapEventCallout_Legacy::Button_SwitchMode' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, BangWrapper_Arrow) == 0x000580, "Member 'UFortQuestMapEventCallout_Legacy::BangWrapper_Arrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Sequence_EventProgress) == 0x000588, "Member 'UFortQuestMapEventCallout_Legacy::Sequence_EventProgress' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, HorizontalBox_NavButtons) == 0x000590, "Member 'UFortQuestMapEventCallout_Legacy::HorizontalBox_NavButtons' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Text_Header) == 0x000598, "Member 'UFortQuestMapEventCallout_Legacy::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Text_Body) == 0x0005A0, "Member 'UFortQuestMapEventCallout_Legacy::Text_Body' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, Image_Callout) == 0x0005A8, "Member 'UFortQuestMapEventCallout_Legacy::Image_Callout' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, BangWrapper_UnHover) == 0x0005B0, "Member 'UFortQuestMapEventCallout_Legacy::BangWrapper_UnHover' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, DefaultSound) == 0x0005B8, "Member 'UFortQuestMapEventCallout_Legacy::DefaultSound' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, DefaultRequiredCompletedQuest) == 0x0005C0, "Member 'UFortQuestMapEventCallout_Legacy::DefaultRequiredCompletedQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, OverrideSound) == 0x0005C8, "Member 'UFortQuestMapEventCallout_Legacy::OverrideSound' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, SoundLoop) == 0x0005D0, "Member 'UFortQuestMapEventCallout_Legacy::SoundLoop' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventCallout_Legacy, QuestMapData) == 0x0005D8, "Member 'UFortQuestMapEventCallout_Legacy::QuestMapData' has a wrong offset!");

class UFortQuestMapEventDetailsPanel final : public UFortQuestMapDetailsPanelBase
{
public:
	TSubclassOf<class UCommonBorderStyle>         CurrentQuestBorder;
	TSubclassOf<class UCommonBorderStyle>         CompletedQuestBorder;
	TSubclassOf<class UCommonBorderStyle>         FutureQuestBorder;
	class UVerticalBox*                           VBox_QuestContainer;
	class UVerticalBox*                           VBox_CompletedQuestContainer;
	class UCommonAnimatedSwitcher*                Switcher_Quests;
	class UCommonBorder*                          Border_NextQuest;
	class UCommonTextBlock*                       Text_QuestName;
	class UCommonTextBlock*                       Text_QuestDescription;
	class UCommonTextBlock*                       Text_Title;
	class UCommonListView*                        List_Tasks;
	class UImage*                                 Image_QuestIcon;
	class UScrollBox*                             ScrollBox_SideBar;
	class UDataTable*                             EventQuestTable;
	TSubclassOf<class UFortQuestMapEventSideEntry> SideBarEntryClass;
	class UFortQuestItemDefinition*               UnlockEventQuestDefinition;
	class UFortQuestItemDefinition*               CurrentQuestDef;
	TArray<class UFortQuestObjectiveInfo*>        VisibleObjectives;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventDetailsPanel">();
	}
	static class UFortQuestMapEventDetailsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventDetailsPanel>();
	}
};
static_assert(alignof(UFortQuestMapEventDetailsPanel) == 0x000008, "Wrong alignment on UFortQuestMapEventDetailsPanel");
static_assert(sizeof(UFortQuestMapEventDetailsPanel) == 0x000340, "Wrong size on UFortQuestMapEventDetailsPanel");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, CurrentQuestBorder) == 0x0002A8, "Member 'UFortQuestMapEventDetailsPanel::CurrentQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, CompletedQuestBorder) == 0x0002B0, "Member 'UFortQuestMapEventDetailsPanel::CompletedQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, FutureQuestBorder) == 0x0002B8, "Member 'UFortQuestMapEventDetailsPanel::FutureQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, VBox_QuestContainer) == 0x0002C0, "Member 'UFortQuestMapEventDetailsPanel::VBox_QuestContainer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, VBox_CompletedQuestContainer) == 0x0002C8, "Member 'UFortQuestMapEventDetailsPanel::VBox_CompletedQuestContainer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Switcher_Quests) == 0x0002D0, "Member 'UFortQuestMapEventDetailsPanel::Switcher_Quests' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Border_NextQuest) == 0x0002D8, "Member 'UFortQuestMapEventDetailsPanel::Border_NextQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Text_QuestName) == 0x0002E0, "Member 'UFortQuestMapEventDetailsPanel::Text_QuestName' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Text_QuestDescription) == 0x0002E8, "Member 'UFortQuestMapEventDetailsPanel::Text_QuestDescription' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Text_Title) == 0x0002F0, "Member 'UFortQuestMapEventDetailsPanel::Text_Title' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, List_Tasks) == 0x0002F8, "Member 'UFortQuestMapEventDetailsPanel::List_Tasks' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, Image_QuestIcon) == 0x000300, "Member 'UFortQuestMapEventDetailsPanel::Image_QuestIcon' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, ScrollBox_SideBar) == 0x000308, "Member 'UFortQuestMapEventDetailsPanel::ScrollBox_SideBar' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, EventQuestTable) == 0x000310, "Member 'UFortQuestMapEventDetailsPanel::EventQuestTable' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, SideBarEntryClass) == 0x000318, "Member 'UFortQuestMapEventDetailsPanel::SideBarEntryClass' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, UnlockEventQuestDefinition) == 0x000320, "Member 'UFortQuestMapEventDetailsPanel::UnlockEventQuestDefinition' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, CurrentQuestDef) == 0x000328, "Member 'UFortQuestMapEventDetailsPanel::CurrentQuestDef' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel, VisibleObjectives) == 0x000330, "Member 'UFortQuestMapEventDetailsPanel::VisibleObjectives' has a wrong offset!");

class UFortQuestMapEventDetailsPanel_Legacy final : public UFortQuestMapDetailsPanelBase
{
public:
	TSubclassOf<class UCommonBorderStyle>         CurrentQuestBorder;
	TSubclassOf<class UCommonBorderStyle>         CompletedQuestBorder;
	TSubclassOf<class UCommonBorderStyle>         FutureQuestBorder;
	class UVerticalBox*                           VBox_QuestContainer;
	class UVerticalBox*                           VBox_CompletedQuestContainer;
	class UCommonWidgetSwitcherLegacy*            Switcher_Quests;
	class UCommonBorder*                          Border_NextQuest;
	class UCommonTextBlock*                       Text_QuestName;
	class UCommonTextBlock*                       Text_QuestDescription;
	class UCommonTextBlock*                       Text_Title;
	class UCommonListView*                        List_Tasks;
	class UImage*                                 Image_QuestIcon;
	class UScrollBox*                             ScrollBox_SideBar;
	class UDataTable*                             EventQuestTable;
	TSubclassOf<class UFortQuestMapEventSideEntry_Legacy> SideBarEntryClass;
	class UFortQuestItemDefinition*               UnlockEventQuestDefinition;
	class UFortQuestItemDefinition*               CurrentQuestDef;
	TArray<class UFortQuestObjectiveInfo*>        VisibleObjectives;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventDetailsPanel_Legacy">();
	}
	static class UFortQuestMapEventDetailsPanel_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventDetailsPanel_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapEventDetailsPanel_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapEventDetailsPanel_Legacy");
static_assert(sizeof(UFortQuestMapEventDetailsPanel_Legacy) == 0x000340, "Wrong size on UFortQuestMapEventDetailsPanel_Legacy");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, CurrentQuestBorder) == 0x0002A8, "Member 'UFortQuestMapEventDetailsPanel_Legacy::CurrentQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, CompletedQuestBorder) == 0x0002B0, "Member 'UFortQuestMapEventDetailsPanel_Legacy::CompletedQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, FutureQuestBorder) == 0x0002B8, "Member 'UFortQuestMapEventDetailsPanel_Legacy::FutureQuestBorder' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, VBox_QuestContainer) == 0x0002C0, "Member 'UFortQuestMapEventDetailsPanel_Legacy::VBox_QuestContainer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, VBox_CompletedQuestContainer) == 0x0002C8, "Member 'UFortQuestMapEventDetailsPanel_Legacy::VBox_CompletedQuestContainer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Switcher_Quests) == 0x0002D0, "Member 'UFortQuestMapEventDetailsPanel_Legacy::Switcher_Quests' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Border_NextQuest) == 0x0002D8, "Member 'UFortQuestMapEventDetailsPanel_Legacy::Border_NextQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Text_QuestName) == 0x0002E0, "Member 'UFortQuestMapEventDetailsPanel_Legacy::Text_QuestName' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Text_QuestDescription) == 0x0002E8, "Member 'UFortQuestMapEventDetailsPanel_Legacy::Text_QuestDescription' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Text_Title) == 0x0002F0, "Member 'UFortQuestMapEventDetailsPanel_Legacy::Text_Title' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, List_Tasks) == 0x0002F8, "Member 'UFortQuestMapEventDetailsPanel_Legacy::List_Tasks' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, Image_QuestIcon) == 0x000300, "Member 'UFortQuestMapEventDetailsPanel_Legacy::Image_QuestIcon' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, ScrollBox_SideBar) == 0x000308, "Member 'UFortQuestMapEventDetailsPanel_Legacy::ScrollBox_SideBar' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, EventQuestTable) == 0x000310, "Member 'UFortQuestMapEventDetailsPanel_Legacy::EventQuestTable' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, SideBarEntryClass) == 0x000318, "Member 'UFortQuestMapEventDetailsPanel_Legacy::SideBarEntryClass' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, UnlockEventQuestDefinition) == 0x000320, "Member 'UFortQuestMapEventDetailsPanel_Legacy::UnlockEventQuestDefinition' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, CurrentQuestDef) == 0x000328, "Member 'UFortQuestMapEventDetailsPanel_Legacy::CurrentQuestDef' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventDetailsPanel_Legacy, VisibleObjectives) == 0x000330, "Member 'UFortQuestMapEventDetailsPanel_Legacy::VisibleObjectives' has a wrong offset!");

class UFortQuestMapEventDot final : public UCommonUserWidget
{
public:
	class UImage*                                 Image_ActiveDot;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventDot">();
	}
	static class UFortQuestMapEventDot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventDot>();
	}
};
static_assert(alignof(UFortQuestMapEventDot) == 0x000008, "Wrong alignment on UFortQuestMapEventDot");
static_assert(sizeof(UFortQuestMapEventDot) == 0x000298, "Wrong size on UFortQuestMapEventDot");
static_assert(offsetof(UFortQuestMapEventDot, Image_ActiveDot) == 0x000290, "Member 'UFortQuestMapEventDot::Image_ActiveDot' has a wrong offset!");

class UFortQuestMapEventSequence final : public UCommonUserWidget
{
public:
	class UHorizontalBox*                         HorizontalBox_DotBox;
	TSubclassOf<class UFortQuestMapEventDot>      DotWidgetClass;
	uint8                                         Pad_2A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventSequence">();
	}
	static class UFortQuestMapEventSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventSequence>();
	}
};
static_assert(alignof(UFortQuestMapEventSequence) == 0x000008, "Wrong alignment on UFortQuestMapEventSequence");
static_assert(sizeof(UFortQuestMapEventSequence) == 0x0002A8, "Wrong size on UFortQuestMapEventSequence");
static_assert(offsetof(UFortQuestMapEventSequence, HorizontalBox_DotBox) == 0x000290, "Member 'UFortQuestMapEventSequence::HorizontalBox_DotBox' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSequence, DotWidgetClass) == 0x000298, "Member 'UFortQuestMapEventSequence::DotWidgetClass' has a wrong offset!");

class UFortQuestMapEventSideEntry final : public UCommonUserWidget
{
public:
	class UCommonAnimatedSwitcher*                Switcher_Rewards;
	class UCommonListView*                        List_SideTasks;
	class UCommonTextBlock*                       Text_SideQuestTitle;
	class UImage*                                 Image_Arrow;
	class UImage*                                 Image_QuestComplete;
	struct FMargin                                RewardPadding;
	class UFortQuestItemDefinition*               CurrentQuestItemDef;
	class UFortQuestItem*                         CurrentQuestItem;
	struct FTimerHandle                           RewardAnimationTimer;
	TArray<class UFortQuestObjectiveInfo*>        SideQuestObjectives;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventSideEntry">();
	}
	static class UFortQuestMapEventSideEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventSideEntry>();
	}
};
static_assert(alignof(UFortQuestMapEventSideEntry) == 0x000008, "Wrong alignment on UFortQuestMapEventSideEntry");
static_assert(sizeof(UFortQuestMapEventSideEntry) == 0x0002F0, "Wrong size on UFortQuestMapEventSideEntry");
static_assert(offsetof(UFortQuestMapEventSideEntry, Switcher_Rewards) == 0x000290, "Member 'UFortQuestMapEventSideEntry::Switcher_Rewards' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, List_SideTasks) == 0x000298, "Member 'UFortQuestMapEventSideEntry::List_SideTasks' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, Text_SideQuestTitle) == 0x0002A0, "Member 'UFortQuestMapEventSideEntry::Text_SideQuestTitle' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, Image_Arrow) == 0x0002A8, "Member 'UFortQuestMapEventSideEntry::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, Image_QuestComplete) == 0x0002B0, "Member 'UFortQuestMapEventSideEntry::Image_QuestComplete' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, RewardPadding) == 0x0002B8, "Member 'UFortQuestMapEventSideEntry::RewardPadding' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, CurrentQuestItemDef) == 0x0002C8, "Member 'UFortQuestMapEventSideEntry::CurrentQuestItemDef' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, CurrentQuestItem) == 0x0002D0, "Member 'UFortQuestMapEventSideEntry::CurrentQuestItem' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, RewardAnimationTimer) == 0x0002D8, "Member 'UFortQuestMapEventSideEntry::RewardAnimationTimer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry, SideQuestObjectives) == 0x0002E0, "Member 'UFortQuestMapEventSideEntry::SideQuestObjectives' has a wrong offset!");

class UFortQuestMapEventSideEntry_Legacy final : public UCommonUserWidget
{
public:
	class UCommonWidgetSwitcherLegacy*            Switcher_Rewards;
	class UCommonListView*                        List_SideTasks;
	class UCommonTextBlock*                       Text_SideQuestTitle;
	class UImage*                                 Image_Arrow;
	class UImage*                                 Image_QuestComplete;
	struct FMargin                                RewardPadding;
	class UFortQuestItemDefinition*               CurrentQuestItemDef;
	class UFortQuestItem*                         CurrentQuestItem;
	TArray<class UCommonWidgetSwitcherLegacy*>    RewardSwitchers;
	struct FTimerHandle                           RewardAnimationTimer;
	TArray<class UFortQuestObjectiveInfo*>        SideQuestObjectives;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapEventSideEntry_Legacy">();
	}
	static class UFortQuestMapEventSideEntry_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapEventSideEntry_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapEventSideEntry_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapEventSideEntry_Legacy");
static_assert(sizeof(UFortQuestMapEventSideEntry_Legacy) == 0x000300, "Wrong size on UFortQuestMapEventSideEntry_Legacy");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Switcher_Rewards) == 0x000290, "Member 'UFortQuestMapEventSideEntry_Legacy::Switcher_Rewards' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, List_SideTasks) == 0x000298, "Member 'UFortQuestMapEventSideEntry_Legacy::List_SideTasks' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Text_SideQuestTitle) == 0x0002A0, "Member 'UFortQuestMapEventSideEntry_Legacy::Text_SideQuestTitle' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Image_Arrow) == 0x0002A8, "Member 'UFortQuestMapEventSideEntry_Legacy::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, Image_QuestComplete) == 0x0002B0, "Member 'UFortQuestMapEventSideEntry_Legacy::Image_QuestComplete' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, RewardPadding) == 0x0002B8, "Member 'UFortQuestMapEventSideEntry_Legacy::RewardPadding' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, CurrentQuestItemDef) == 0x0002C8, "Member 'UFortQuestMapEventSideEntry_Legacy::CurrentQuestItemDef' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, CurrentQuestItem) == 0x0002D0, "Member 'UFortQuestMapEventSideEntry_Legacy::CurrentQuestItem' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, RewardSwitchers) == 0x0002D8, "Member 'UFortQuestMapEventSideEntry_Legacy::RewardSwitchers' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, RewardAnimationTimer) == 0x0002E8, "Member 'UFortQuestMapEventSideEntry_Legacy::RewardAnimationTimer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapEventSideEntry_Legacy, SideQuestObjectives) == 0x0002F0, "Member 'UFortQuestMapEventSideEntry_Legacy::SideQuestObjectives' has a wrong offset!");

class UFortQuestMapNewBangWrapper final : public UFortBangWrapper_NUI
{
public:
	class UCommonAnimatedSwitcher*                Switcher_Bangs;
	uint8                                         Pad_2B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapNewBangWrapper">();
	}
	static class UFortQuestMapNewBangWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapNewBangWrapper>();
	}
};
static_assert(alignof(UFortQuestMapNewBangWrapper) == 0x000008, "Wrong alignment on UFortQuestMapNewBangWrapper");
static_assert(sizeof(UFortQuestMapNewBangWrapper) == 0x0002B8, "Wrong size on UFortQuestMapNewBangWrapper");
static_assert(offsetof(UFortQuestMapNewBangWrapper, Switcher_Bangs) == 0x0002A8, "Member 'UFortQuestMapNewBangWrapper::Switcher_Bangs' has a wrong offset!");

class UFortQuestMapNewBangWrapper_Legacy final : public UFortBangWrapper_NUI
{
public:
	class UCommonWidgetSwitcherLegacy*            Switcher_Bangs;
	uint8                                         Pad_2B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapNewBangWrapper_Legacy">();
	}
	static class UFortQuestMapNewBangWrapper_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapNewBangWrapper_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapNewBangWrapper_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapNewBangWrapper_Legacy");
static_assert(sizeof(UFortQuestMapNewBangWrapper_Legacy) == 0x0002B8, "Wrong size on UFortQuestMapNewBangWrapper_Legacy");
static_assert(offsetof(UFortQuestMapNewBangWrapper_Legacy, Switcher_Bangs) == 0x0002A8, "Member 'UFortQuestMapNewBangWrapper_Legacy::Switcher_Bangs' has a wrong offset!");

class UFortQuestMapNodeLayout final : public UUserWidget
{
public:
	class UPanelWidget*                           Panel_NodeLayout;
	class UCommonButtonBase*                      ButtonPrevious;
	class UCommonButtonBase*                      ButtonNext;
	class USizeBox*                               StartArrow;
	class USizeBox*                               EndArrow;
	class UCommonButtonGroupBase*                 QuestButtonGroup;
	class UFortQuestMapScreen*                    ParentScreen;
	uint8                                         Pad_2A0[0x30];

public:
	void HandleQuestButtonSelected(class UCommonButtonBase* SelectedQuestButton, int32 ButtonIndex);
	void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapNodeLayout">();
	}
	static class UFortQuestMapNodeLayout* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapNodeLayout>();
	}
};
static_assert(alignof(UFortQuestMapNodeLayout) == 0x000008, "Wrong alignment on UFortQuestMapNodeLayout");
static_assert(sizeof(UFortQuestMapNodeLayout) == 0x0002D0, "Wrong size on UFortQuestMapNodeLayout");
static_assert(offsetof(UFortQuestMapNodeLayout, Panel_NodeLayout) == 0x000268, "Member 'UFortQuestMapNodeLayout::Panel_NodeLayout' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout, ButtonPrevious) == 0x000270, "Member 'UFortQuestMapNodeLayout::ButtonPrevious' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout, ButtonNext) == 0x000278, "Member 'UFortQuestMapNodeLayout::ButtonNext' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout, StartArrow) == 0x000280, "Member 'UFortQuestMapNodeLayout::StartArrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout, EndArrow) == 0x000288, "Member 'UFortQuestMapNodeLayout::EndArrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout, QuestButtonGroup) == 0x000290, "Member 'UFortQuestMapNodeLayout::QuestButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout, ParentScreen) == 0x000298, "Member 'UFortQuestMapNodeLayout::ParentScreen' has a wrong offset!");

class UFortQuestMapNodeLayout_Legacy final : public UUserWidget
{
public:
	class UPanelWidget*                           Panel_NodeLayout;
	class UCommonButtonLegacy*                    ButtonPrevious;
	class UCommonButtonLegacy*                    ButtonNext;
	class USizeBox*                               StartArrow;
	class USizeBox*                               EndArrow;
	class UCommonButtonGroupLegacy*               QuestButtonGroup;
	class UFortQuestMapScreen_Legacy*             ParentScreen;
	uint8                                         Pad_2A0[0x30];

public:
	void HandleQuestButtonSelected(class UCommonButtonLegacy* SelectedQuestButton, int32 ButtonIndex);
	void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapNodeLayout_Legacy">();
	}
	static class UFortQuestMapNodeLayout_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapNodeLayout_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapNodeLayout_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapNodeLayout_Legacy");
static_assert(sizeof(UFortQuestMapNodeLayout_Legacy) == 0x0002D0, "Wrong size on UFortQuestMapNodeLayout_Legacy");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, Panel_NodeLayout) == 0x000268, "Member 'UFortQuestMapNodeLayout_Legacy::Panel_NodeLayout' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, ButtonPrevious) == 0x000270, "Member 'UFortQuestMapNodeLayout_Legacy::ButtonPrevious' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, ButtonNext) == 0x000278, "Member 'UFortQuestMapNodeLayout_Legacy::ButtonNext' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, StartArrow) == 0x000280, "Member 'UFortQuestMapNodeLayout_Legacy::StartArrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, EndArrow) == 0x000288, "Member 'UFortQuestMapNodeLayout_Legacy::EndArrow' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, QuestButtonGroup) == 0x000290, "Member 'UFortQuestMapNodeLayout_Legacy::QuestButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortQuestMapNodeLayout_Legacy, ParentScreen) == 0x000298, "Member 'UFortQuestMapNodeLayout_Legacy::ParentScreen' has a wrong offset!");

class UFortQuestMapQuestTile final : public UCommonUserWidget
{
public:
	class UCommonButtonBase*                      QuestButton;
	struct FFortQuestMapNode                      QuestNodeData;

public:
	void HandleQuestDataChangedBP();
	void HandleSelectedChange(bool Selected);

	void GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapQuestTile">();
	}
	static class UFortQuestMapQuestTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapQuestTile>();
	}
};
static_assert(alignof(UFortQuestMapQuestTile) == 0x000008, "Wrong alignment on UFortQuestMapQuestTile");
static_assert(sizeof(UFortQuestMapQuestTile) == 0x0002B0, "Wrong size on UFortQuestMapQuestTile");
static_assert(offsetof(UFortQuestMapQuestTile, QuestButton) == 0x000290, "Member 'UFortQuestMapQuestTile::QuestButton' has a wrong offset!");
static_assert(offsetof(UFortQuestMapQuestTile, QuestNodeData) == 0x000298, "Member 'UFortQuestMapQuestTile::QuestNodeData' has a wrong offset!");

class UFortQuestMapQuestTile_Legacy final : public UCommonUserWidget
{
public:
	class UCommonButtonLegacy*                    QuestButton;
	struct FFortQuestMapNode                      QuestNodeData;

public:
	void HandleQuestDataChangedBP();
	void HandleSelectedChange(bool Selected);

	void GetQuestNodeData(class UFortQuestItemDefinition** QuestItemDefinition, struct FFortQuestMapNode* NodeData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapQuestTile_Legacy">();
	}
	static class UFortQuestMapQuestTile_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapQuestTile_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapQuestTile_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapQuestTile_Legacy");
static_assert(sizeof(UFortQuestMapQuestTile_Legacy) == 0x0002B0, "Wrong size on UFortQuestMapQuestTile_Legacy");
static_assert(offsetof(UFortQuestMapQuestTile_Legacy, QuestButton) == 0x000290, "Member 'UFortQuestMapQuestTile_Legacy::QuestButton' has a wrong offset!");
static_assert(offsetof(UFortQuestMapQuestTile_Legacy, QuestNodeData) == 0x000298, "Member 'UFortQuestMapQuestTile_Legacy::QuestNodeData' has a wrong offset!");

class UFortQuestMapScreen final : public UCommonActivatableWidget
{
public:
	class UFortQuestMapDetailsPanelBase*          CampaignDetailsPanel;
	class UFortQuestMapDetailsPanelBase*          EventDetailsPanel;
	class UFortQuestMapEventCallout*              EventCalloutPanel;
	class UFortQuestMapViewer*                    QuestMapViewer;
	EQuestMapScreenMode                           CurrentMode;
	bool                                          bEventsActive;
	uint8                                         Pad_3CA[0x6];
	class UFortQuestMapDataAsset*                 CampaignQuestMapDataTable;
	class UFortQuestItemDefinition*               CutoffQuest;
	class UFortQuestMapDataAsset*                 CurrentQuestMapDataTable;
	uint8                                         Pad_3E8[0x28];
	TSubclassOf<class UFortCampaignNewsPanel>     CampaignNewsModalClass;
	TSubclassOf<class UFortQuestScreen>           QuestLogScreenClass;
	struct FDataTableRowHandle                    CurrentQuestAction;
	struct FDataTableRowHandle                    STWNewsAction;
	struct FDataTableRowHandle                    BackAction;
	uint8                                         Pad_450[0x10];

public:
	void CheckForNewMainQuest();
	void ClaimQuestRewards(const class UFortQuestItem* QuestItem);
	void HandleBackInputAction();
	void HandleEventCalloutDataChangedBP();
	void HandleEventQuestMapActivate();
	void HandleMapModeSwitch();
	void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);
	void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);
	void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);
	void HandleQuestPageChanged();
	void InitializeQuestData();
	bool IsEventFlagActive(const class FString& EventFlag);
	void OnEventCalloutButtonClicked();
	void OnEventCalloutExpandChanged();
	void OnShowCurrentQuestInputActionValueChanged();
	void SetBeyondCutoffQuest(bool bBeyondCutoff);
	void SetIgnorePageNavigation(bool bIgnoreNavigation);
	void SetQuestMapViewer(class UFortQuestMapViewer* Value);
	void ShowModalNews();
	void ShowQuestLog(class UFortQuestItem* QuestItem);
	void ToggleQuestMapState();
	void UpdateInputActionStates(bool bShowingCallout);
	void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);

	bool GetBeyondCutoffQuest() const;
	EFrontEndCamera GetCurrentPageCameraMode() const;
	bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapScreen">();
	}
	static class UFortQuestMapScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapScreen>();
	}
};
static_assert(alignof(UFortQuestMapScreen) == 0x000008, "Wrong alignment on UFortQuestMapScreen");
static_assert(sizeof(UFortQuestMapScreen) == 0x000460, "Wrong size on UFortQuestMapScreen");
static_assert(offsetof(UFortQuestMapScreen, CampaignDetailsPanel) == 0x0003A8, "Member 'UFortQuestMapScreen::CampaignDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, EventDetailsPanel) == 0x0003B0, "Member 'UFortQuestMapScreen::EventDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, EventCalloutPanel) == 0x0003B8, "Member 'UFortQuestMapScreen::EventCalloutPanel' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, QuestMapViewer) == 0x0003C0, "Member 'UFortQuestMapScreen::QuestMapViewer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, CurrentMode) == 0x0003C8, "Member 'UFortQuestMapScreen::CurrentMode' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, bEventsActive) == 0x0003C9, "Member 'UFortQuestMapScreen::bEventsActive' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, CampaignQuestMapDataTable) == 0x0003D0, "Member 'UFortQuestMapScreen::CampaignQuestMapDataTable' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, CutoffQuest) == 0x0003D8, "Member 'UFortQuestMapScreen::CutoffQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, CurrentQuestMapDataTable) == 0x0003E0, "Member 'UFortQuestMapScreen::CurrentQuestMapDataTable' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, CampaignNewsModalClass) == 0x000410, "Member 'UFortQuestMapScreen::CampaignNewsModalClass' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, QuestLogScreenClass) == 0x000418, "Member 'UFortQuestMapScreen::QuestLogScreenClass' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, CurrentQuestAction) == 0x000420, "Member 'UFortQuestMapScreen::CurrentQuestAction' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, STWNewsAction) == 0x000430, "Member 'UFortQuestMapScreen::STWNewsAction' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen, BackAction) == 0x000440, "Member 'UFortQuestMapScreen::BackAction' has a wrong offset!");

class UFortQuestMapScreen_Legacy final : public UCommonActivatablePanelLegacy
{
public:
	class UFortQuestMapDetailsPanelBase*          CampaignDetailsPanel;
	class UFortQuestMapDetailsPanelBase*          EventDetailsPanel;
	class UFortQuestMapEventCallout_Legacy*       EventCalloutPanel;
	class UFortQuestMapViewer_Legacy*             QuestMapViewer;
	EQuestMapScreenMode                           CurrentMode;
	bool                                          bEventsActive;
	uint8                                         Pad_502[0x6];
	class UFortQuestMapDataAsset*                 CampaignQuestMapDataTable;
	class UFortQuestItemDefinition*               CutoffQuest;
	class UFortQuestMapDataAsset*                 CurrentQuestMapDataTable;
	uint8                                         Pad_520[0x28];

public:
	void CheckForNewMainQuest();
	void HandleEventCalloutDataChangedBP();
	void HandleEventQuestMapActivate();
	void HandleMapModeSwitch();
	void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);
	void HandleQuestDetailsUpdated(class UFortQuestItem* QuestDefinition);
	void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);
	void HandleQuestPageChanged();
	void HandleRequestCurrentQuestNavigation();
	void InitializeQuestData();
	bool IsEventFlagActive(const class FString& EventFlag);
	void OnEventCalloutButtonClicked();
	void OnEventCalloutExpandChanged();
	void SetBeyondCutoffQuest(bool bBeyondCutoff);
	void SetFindCurrentActionVisibility(EInputActionState ActionVisibility);
	void SetIgnorePageNavigation(bool bIgnoreNavigation);
	void SetQuestMapViewer(class UFortQuestMapViewer_Legacy* Value);
	void ToggleQuestMapState();
	void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);

	bool GetBeyondCutoffQuest() const;
	EFrontEndCamera GetCurrentPageCameraMode() const;
	bool IsBeyondQuest(class UFortQuestItemDefinition* QuestDef) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapScreen_Legacy">();
	}
	static class UFortQuestMapScreen_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapScreen_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapScreen_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapScreen_Legacy");
static_assert(sizeof(UFortQuestMapScreen_Legacy) == 0x000548, "Wrong size on UFortQuestMapScreen_Legacy");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CampaignDetailsPanel) == 0x0004E0, "Member 'UFortQuestMapScreen_Legacy::CampaignDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, EventDetailsPanel) == 0x0004E8, "Member 'UFortQuestMapScreen_Legacy::EventDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, EventCalloutPanel) == 0x0004F0, "Member 'UFortQuestMapScreen_Legacy::EventCalloutPanel' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, QuestMapViewer) == 0x0004F8, "Member 'UFortQuestMapScreen_Legacy::QuestMapViewer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CurrentMode) == 0x000500, "Member 'UFortQuestMapScreen_Legacy::CurrentMode' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, bEventsActive) == 0x000501, "Member 'UFortQuestMapScreen_Legacy::bEventsActive' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CampaignQuestMapDataTable) == 0x000508, "Member 'UFortQuestMapScreen_Legacy::CampaignQuestMapDataTable' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CutoffQuest) == 0x000510, "Member 'UFortQuestMapScreen_Legacy::CutoffQuest' has a wrong offset!");
static_assert(offsetof(UFortQuestMapScreen_Legacy, CurrentQuestMapDataTable) == 0x000518, "Member 'UFortQuestMapScreen_Legacy::CurrentQuestMapDataTable' has a wrong offset!");

class UFortQuestMapViewer_Legacy final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];
	class UCommonButtonLegacy*                    Button_PageRight;
	class UCommonButtonLegacy*                    Button_PageLeft;
	class UCommonTextBlock*                       Text_Title;
	class UCommonTextBlock*                       Text_Page;
	class USizeBox*                               SizeBox_Viewer;
	class UCanvasPanel*                           CanvasPanel_Cosmetic;
	class UFortQuestMapScreen_Legacy*             ParentScreen;
	class UFortQuestMapNodeLayout_Legacy*         NodeLayout;
	uint8                                         Pad_2E0[0x30];

public:
	void HandleLayoutOutroAnimationFinished();
	void OnPlayLayoutFadeInAnimation();
	void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);
	void OnTryUpdateUserWidgetColor(class UUserWidget* Widget, const struct FSlateColor& OverrideColor);
	void UpdateViewerData();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestMapViewer_Legacy">();
	}
	static class UFortQuestMapViewer_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestMapViewer_Legacy>();
	}
};
static_assert(alignof(UFortQuestMapViewer_Legacy) == 0x000008, "Wrong alignment on UFortQuestMapViewer_Legacy");
static_assert(sizeof(UFortQuestMapViewer_Legacy) == 0x000310, "Wrong size on UFortQuestMapViewer_Legacy");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Button_PageRight) == 0x0002A0, "Member 'UFortQuestMapViewer_Legacy::Button_PageRight' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Button_PageLeft) == 0x0002A8, "Member 'UFortQuestMapViewer_Legacy::Button_PageLeft' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Text_Title) == 0x0002B0, "Member 'UFortQuestMapViewer_Legacy::Text_Title' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, Text_Page) == 0x0002B8, "Member 'UFortQuestMapViewer_Legacy::Text_Page' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, SizeBox_Viewer) == 0x0002C0, "Member 'UFortQuestMapViewer_Legacy::SizeBox_Viewer' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, CanvasPanel_Cosmetic) == 0x0002C8, "Member 'UFortQuestMapViewer_Legacy::CanvasPanel_Cosmetic' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, ParentScreen) == 0x0002D0, "Member 'UFortQuestMapViewer_Legacy::ParentScreen' has a wrong offset!");
static_assert(offsetof(UFortQuestMapViewer_Legacy, NodeLayout) == 0x0002D8, "Member 'UFortQuestMapViewer_Legacy::NodeLayout' has a wrong offset!");

class UFortQuestPlayButton final : public UCommonUserWidget
{
public:
	class UFortQuestItem*                         QuestItem;

public:
	void AttemptToPlayQuest();
	void HandleLobbyDisconnected();
	void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);
	void HandleMatchmakingStarted();
	void HandlePlayerStateChanged();
	void OnContentMissing();

	bool CanPlayQuest() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestPlayButton">();
	}
	static class UFortQuestPlayButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestPlayButton>();
	}
};
static_assert(alignof(UFortQuestPlayButton) == 0x000008, "Wrong alignment on UFortQuestPlayButton");
static_assert(sizeof(UFortQuestPlayButton) == 0x000298, "Wrong size on UFortQuestPlayButton");
static_assert(offsetof(UFortQuestPlayButton, QuestItem) == 0x000290, "Member 'UFortQuestPlayButton::QuestItem' has a wrong offset!");

class UFortQuestTreeItemWidget final : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x8];
	TWeakObjectPtr<class UObject>                 QuestOrCategory;

public:
	void HandleQuestsUpdated();
	void OnQuestsUpdated();
	void SetupAsCategory(class UFortQuestCategory* category);
	void SetupAsQuest(class UFortQuestItem* category);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestTreeItemWidget">();
	}
	static class UFortQuestTreeItemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestTreeItemWidget>();
	}
};
static_assert(alignof(UFortQuestTreeItemWidget) == 0x000010, "Wrong alignment on UFortQuestTreeItemWidget");
static_assert(sizeof(UFortQuestTreeItemWidget) == 0x0013F0, "Wrong size on UFortQuestTreeItemWidget");
static_assert(offsetof(UFortQuestTreeItemWidget, QuestOrCategory) == 0x0013E8, "Member 'UFortQuestTreeItemWidget::QuestOrCategory' has a wrong offset!");

class UFortQuestTreeItemWidget_Legacy final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	TWeakObjectPtr<class UObject>                 QuestOrCategory;

public:
	void HandleQuestsUpdated();
	void OnQuestsUpdated();
	void SetupAsCategory(class UFortQuestCategory* category);
	void SetupAsQuest(class UFortQuestItem* category);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestTreeItemWidget_Legacy">();
	}
	static class UFortQuestTreeItemWidget_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestTreeItemWidget_Legacy>();
	}
};
static_assert(alignof(UFortQuestTreeItemWidget_Legacy) == 0x000010, "Wrong alignment on UFortQuestTreeItemWidget_Legacy");
static_assert(sizeof(UFortQuestTreeItemWidget_Legacy) == 0x001440, "Wrong size on UFortQuestTreeItemWidget_Legacy");
static_assert(offsetof(UFortQuestTreeItemWidget_Legacy, QuestOrCategory) == 0x001438, "Member 'UFortQuestTreeItemWidget_Legacy::QuestOrCategory' has a wrong offset!");

class UFortQuestScreen final : public UCommonActivatableWidget
{
public:
	class UCommonTreeView*                        TreeView_Quests;
	class UScrollBox*                             ScrollBox_QuestDetails;
	TSubclassOf<class UFortQuestManagerComponent> QuestManagerComponentClass;
	struct FDataTableRowHandle                    BackAction;
	struct FDataTableRowHandle                    LeaveInventoryAction;
	struct FDataTableRowHandle                    PlayQuestAction;
	struct FDataTableRowHandle                    AbandonQuestAction;
	struct FDataTableRowHandle                    ClaimRewardAction;
	struct FDataTableRowHandle                    ReplayIntroAction;
	struct FDataTableRowHandle                    ReplayOutroAction;
	struct FDataTableRowHandle                    PinQuestAction;
	struct FDataTableRowHandle                    UnpinQuestAction;
	struct FDataTableRowHandle                    StopConversationAction;
	uint8                                         Pad_460[0x40];

public:
	void AttemptToPlayQuest(class UFortQuestItem* QuestItem);
	void BP_HandleAbandonQuestAction();
	void BP_HandleBackAction();
	void BP_HandleClaimRewardAction();
	void BP_HandlePinQuestAction();
	void BP_HandlePlayQuestAction();
	void BP_HandleReplayIntroAction();
	void BP_HandleReplayOutroAction();
	void BP_HandleStopConversationAction();
	void BP_HandleUnpinQuestAction();
	void BP_SetInitialQuestToSelect(class UFortQuestItem* QuestItem);
	void OnContentMissing();
	void ProcessPendingSeenQuestItems();
	void SetDisableClaimRewardButton(bool bToDisable);
	void SetInputActionStates(const class UFortQuestItem* QuestItem, const bool bIsQuestAudioPlaying, const bool bShouldShowPlayQuest, const bool bAreQuestItemsDifferent);
	void TriggerClaimRewardEvent(const class UFortQuestItem* QuestItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestScreen">();
	}
	static class UFortQuestScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestScreen>();
	}
};
static_assert(alignof(UFortQuestScreen) == 0x000008, "Wrong alignment on UFortQuestScreen");
static_assert(sizeof(UFortQuestScreen) == 0x0004A0, "Wrong size on UFortQuestScreen");
static_assert(offsetof(UFortQuestScreen, TreeView_Quests) == 0x0003A8, "Member 'UFortQuestScreen::TreeView_Quests' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, ScrollBox_QuestDetails) == 0x0003B0, "Member 'UFortQuestScreen::ScrollBox_QuestDetails' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, QuestManagerComponentClass) == 0x0003B8, "Member 'UFortQuestScreen::QuestManagerComponentClass' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, BackAction) == 0x0003C0, "Member 'UFortQuestScreen::BackAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, LeaveInventoryAction) == 0x0003D0, "Member 'UFortQuestScreen::LeaveInventoryAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, PlayQuestAction) == 0x0003E0, "Member 'UFortQuestScreen::PlayQuestAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, AbandonQuestAction) == 0x0003F0, "Member 'UFortQuestScreen::AbandonQuestAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, ClaimRewardAction) == 0x000400, "Member 'UFortQuestScreen::ClaimRewardAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, ReplayIntroAction) == 0x000410, "Member 'UFortQuestScreen::ReplayIntroAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, ReplayOutroAction) == 0x000420, "Member 'UFortQuestScreen::ReplayOutroAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, PinQuestAction) == 0x000430, "Member 'UFortQuestScreen::PinQuestAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, UnpinQuestAction) == 0x000440, "Member 'UFortQuestScreen::UnpinQuestAction' has a wrong offset!");
static_assert(offsetof(UFortQuestScreen, StopConversationAction) == 0x000450, "Member 'UFortQuestScreen::StopConversationAction' has a wrong offset!");

class UFortQuestScreen_Legacy final : public UFortActivatablePanel
{
public:
	void ProcessPendingSeenQuestItems();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQuestScreen_Legacy">();
	}
	static class UFortQuestScreen_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestScreen_Legacy>();
	}
};
static_assert(alignof(UFortQuestScreen_Legacy) == 0x000008, "Wrong alignment on UFortQuestScreen_Legacy");
static_assert(sizeof(UFortQuestScreen_Legacy) == 0x000518, "Wrong size on UFortQuestScreen_Legacy");

class UFortResearchMenuBase final : public UFortActivatablePanel
{
public:
	class UFortItemDefinition*                    ResearchRespecToken;

public:
	int32 GetClaimableResearchPointEstimate();
	void OnPurchaseResearchLevelCompleted();
	void OnPurchaseResearchLevelStarted();
	void OnUseResearchRespecTokenComplete();
	void RequestPurchaseResearchLevel(const class FString& StatId);
	void UseResearchRespecToken();

	bool AreResearchRespecTokensAvailable() const;
	int32 GetResearchRespecTokenCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortResearchMenuBase">();
	}
	static class UFortResearchMenuBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortResearchMenuBase>();
	}
};
static_assert(alignof(UFortResearchMenuBase) == 0x000008, "Wrong alignment on UFortResearchMenuBase");
static_assert(sizeof(UFortResearchMenuBase) == 0x000520, "Wrong size on UFortResearchMenuBase");
static_assert(offsetof(UFortResearchMenuBase, ResearchRespecToken) == 0x000518, "Member 'UFortResearchMenuBase::ResearchRespecToken' has a wrong offset!");

class UFortResearchStatTileWidget final : public UUserWidget
{
public:
	class UFortStatItemDefinition*                PersonalStatItemDefinition;
	class UFortStatItemDefinition*                TeamStatItemDefinition;
	class FName                                   StatCostCurveName;
	class FName                                   StatPersonalDeltaCurveName;
	class FName                                   StatPersonalCumulativeCurveName;
	class FName                                   StatTeamDeltaCurveName;
	class FName                                   StatTeamCumulativeCurveName;
	uint8                                         Pad_28C[0x1C];

public:
	void OnStatChanged();

	int32 GetCostToIncreaseStat() const;
	int32 GetCurrentCombinedStatValue() const;
	int32 GetCurrentPersonalStatValue() const;
	int32 GetCurrentResearchLevel() const;
	int32 GetCurrentTeamStatValue() const;
	int32 GetNextCombinedStatValueDelta() const;
	int32 GetNextPersonalStatValueDelta() const;
	int32 GetNextTeamStatValueDelta() const;
	EFortStatType GetPersonalStatType() const;
	const class FString GetStatIdName() const;
	bool IsAtMaxResearchLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortResearchStatTileWidget">();
	}
	static class UFortResearchStatTileWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortResearchStatTileWidget>();
	}
};
static_assert(alignof(UFortResearchStatTileWidget) == 0x000008, "Wrong alignment on UFortResearchStatTileWidget");
static_assert(sizeof(UFortResearchStatTileWidget) == 0x0002A8, "Wrong size on UFortResearchStatTileWidget");
static_assert(offsetof(UFortResearchStatTileWidget, PersonalStatItemDefinition) == 0x000268, "Member 'UFortResearchStatTileWidget::PersonalStatItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortResearchStatTileWidget, TeamStatItemDefinition) == 0x000270, "Member 'UFortResearchStatTileWidget::TeamStatItemDefinition' has a wrong offset!");
static_assert(offsetof(UFortResearchStatTileWidget, StatCostCurveName) == 0x000278, "Member 'UFortResearchStatTileWidget::StatCostCurveName' has a wrong offset!");
static_assert(offsetof(UFortResearchStatTileWidget, StatPersonalDeltaCurveName) == 0x00027C, "Member 'UFortResearchStatTileWidget::StatPersonalDeltaCurveName' has a wrong offset!");
static_assert(offsetof(UFortResearchStatTileWidget, StatPersonalCumulativeCurveName) == 0x000280, "Member 'UFortResearchStatTileWidget::StatPersonalCumulativeCurveName' has a wrong offset!");
static_assert(offsetof(UFortResearchStatTileWidget, StatTeamDeltaCurveName) == 0x000284, "Member 'UFortResearchStatTileWidget::StatTeamDeltaCurveName' has a wrong offset!");
static_assert(offsetof(UFortResearchStatTileWidget, StatTeamCumulativeCurveName) == 0x000288, "Member 'UFortResearchStatTileWidget::StatTeamCumulativeCurveName' has a wrong offset!");

class UFortDailyRewards final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_518[0x8];

public:
	void SetupDailyRewards();
	bool TryClaimDailyRewards();
	bool TryGetDailyRewardsData(struct FFortDailyRewardsData* OutDailyRewardsData, int32 ItemCardsPerSchedule, int32 MinEpicRewards);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDailyRewards">();
	}
	static class UFortDailyRewards* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDailyRewards>();
	}
};
static_assert(alignof(UFortDailyRewards) == 0x000008, "Wrong alignment on UFortDailyRewards");
static_assert(sizeof(UFortDailyRewards) == 0x000520, "Wrong size on UFortDailyRewards");

class UFortDailyRewardsItem final : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsItemData              ItemData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDailyRewardsItem">();
	}
	static class UFortDailyRewardsItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDailyRewardsItem>();
	}
};
static_assert(alignof(UFortDailyRewardsItem) == 0x000008, "Wrong alignment on UFortDailyRewardsItem");
static_assert(sizeof(UFortDailyRewardsItem) == 0x0002A0, "Wrong size on UFortDailyRewardsItem");
static_assert(offsetof(UFortDailyRewardsItem, ItemData) == 0x000290, "Member 'UFortDailyRewardsItem::ItemData' has a wrong offset!");

class UFortDailyRewardsSchedule final : public UCommonUserWidget
{
public:
	struct FFortDailyRewardsScheduleData          ScheduleData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDailyRewardsSchedule">();
	}
	static class UFortDailyRewardsSchedule* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDailyRewardsSchedule>();
	}
};
static_assert(alignof(UFortDailyRewardsSchedule) == 0x000008, "Wrong alignment on UFortDailyRewardsSchedule");
static_assert(sizeof(UFortDailyRewardsSchedule) == 0x000328, "Wrong size on UFortDailyRewardsSchedule");
static_assert(offsetof(UFortDailyRewardsSchedule, ScheduleData) == 0x000290, "Member 'UFortDailyRewardsSchedule::ScheduleData' has a wrong offset!");

class UFortRewardNotificationData : public UObject
{
public:
	EFrontEndRewardType                           RewardType;
	uint8                                         Pad_29[0x7];

public:
	bool GetIconBrush(struct FSlateBrush* IconBrush, EFortBrushSize BrushSize);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardNotificationData">();
	}
	static class UFortRewardNotificationData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardNotificationData>();
	}
};
static_assert(alignof(UFortRewardNotificationData) == 0x000008, "Wrong alignment on UFortRewardNotificationData");
static_assert(sizeof(UFortRewardNotificationData) == 0x000030, "Wrong size on UFortRewardNotificationData");
static_assert(offsetof(UFortRewardNotificationData, RewardType) == 0x000028, "Member 'UFortRewardNotificationData::RewardType' has a wrong offset!");

class UFortRewardCollectionBookData final : public UFortRewardNotificationData
{
public:
	struct FFortCollectionBookRewards             CollectionBookRewards;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardCollectionBookData">();
	}
	static class UFortRewardCollectionBookData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardCollectionBookData>();
	}
};
static_assert(alignof(UFortRewardCollectionBookData) == 0x000008, "Wrong alignment on UFortRewardCollectionBookData");
static_assert(sizeof(UFortRewardCollectionBookData) == 0x000090, "Wrong size on UFortRewardCollectionBookData");
static_assert(offsetof(UFortRewardCollectionBookData, CollectionBookRewards) == 0x000030, "Member 'UFortRewardCollectionBookData::CollectionBookRewards' has a wrong offset!");

class UFortRewardNotificationSubWidget : public UCommonUserWidget
{
public:
	TMulticastInlineDelegate<void()>              OnTransitionInComplete;
	TMulticastInlineDelegate<void()>              OnTransitionOutComplete;
	uint8                                         Pad_2B0[0x8];

public:
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommittedEvent);
	void Init(class UFortRewardNotificationWidget* MainWidget);
	void InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void IsPrimaryActionHidden(bool* bHidden);
	void OnActivated();
	void OnDeactivated();
	void OnNavigationDown();
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnNavigationUp();
	void OnPrimaryAction();
	void RemoveAllInputActionHandlers();
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void SetInputActionHandlerState(class UDataTable* DataTable, class FName RowName, EInputActionState State);
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetPrimaryActionHidden();
	void SetPrimaryActionText(const class FText& Text);
	void TransitionIn();
	void TransitionInBegin();
	void TransitionOut();
	void TransitionOutBegin();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardNotificationSubWidget">();
	}
	static class UFortRewardNotificationSubWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardNotificationSubWidget>();
	}
};
static_assert(alignof(UFortRewardNotificationSubWidget) == 0x000008, "Wrong alignment on UFortRewardNotificationSubWidget");
static_assert(sizeof(UFortRewardNotificationSubWidget) == 0x0002B8, "Wrong size on UFortRewardNotificationSubWidget");
static_assert(offsetof(UFortRewardNotificationSubWidget, OnTransitionInComplete) == 0x000290, "Member 'UFortRewardNotificationSubWidget::OnTransitionInComplete' has a wrong offset!");
static_assert(offsetof(UFortRewardNotificationSubWidget, OnTransitionOutComplete) == 0x0002A0, "Member 'UFortRewardNotificationSubWidget::OnTransitionOutComplete' has a wrong offset!");

class UFortRewardConversationWidget final : public UFortRewardNotificationSubWidget
{
public:
	void GetDataFromSentence(const struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
	bool IsValidConversation(const class UFortConversation* Conversation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardConversationWidget">();
	}
	static class UFortRewardConversationWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardConversationWidget>();
	}
};
static_assert(alignof(UFortRewardConversationWidget) == 0x000008, "Wrong alignment on UFortRewardConversationWidget");
static_assert(sizeof(UFortRewardConversationWidget) == 0x0002B8, "Wrong size on UFortRewardConversationWidget");

class UFortRewardDifficultyIncrease final : public UFortRewardNotificationData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardDifficultyIncrease">();
	}
	static class UFortRewardDifficultyIncrease* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardDifficultyIncrease>();
	}
};
static_assert(alignof(UFortRewardDifficultyIncrease) == 0x000008, "Wrong alignment on UFortRewardDifficultyIncrease");
static_assert(sizeof(UFortRewardDifficultyIncrease) == 0x000030, "Wrong size on UFortRewardDifficultyIncrease");

class UFortRewardEpicQuestData final : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                         Quest;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardEpicQuestData">();
	}
	static class UFortRewardEpicQuestData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardEpicQuestData>();
	}
};
static_assert(alignof(UFortRewardEpicQuestData) == 0x000008, "Wrong alignment on UFortRewardEpicQuestData");
static_assert(sizeof(UFortRewardEpicQuestData) == 0x000038, "Wrong size on UFortRewardEpicQuestData");
static_assert(offsetof(UFortRewardEpicQuestData, Quest) == 0x000030, "Member 'UFortRewardEpicQuestData::Quest' has a wrong offset!");

class UFortRewardExpeditionData final : public UFortRewardNotificationData
{
public:
	class UFortExpeditionItem*                    Expedition;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardExpeditionData">();
	}
	static class UFortRewardExpeditionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardExpeditionData>();
	}
};
static_assert(alignof(UFortRewardExpeditionData) == 0x000008, "Wrong alignment on UFortRewardExpeditionData");
static_assert(sizeof(UFortRewardExpeditionData) == 0x000038, "Wrong size on UFortRewardExpeditionData");
static_assert(offsetof(UFortRewardExpeditionData, Expedition) == 0x000030, "Member 'UFortRewardExpeditionData::Expedition' has a wrong offset!");

class UFortRewardExpeditionWidget final : public UFortRewardNotificationSubWidget
{
public:
	TMulticastInlineDelegate<void()>              OnMcpError;
	uint8                                         Pad_2C8[0x58];

public:
	void CollectExpedition(class UFortExpeditionItem* Expedition);
	void OnCollectExpeditionCompleted(const class UFortExpeditionItem* Expedition, bool bSucceeded, const TArray<struct FFortItemInstanceQuantityPair>& Rewards);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardExpeditionWidget">();
	}
	static class UFortRewardExpeditionWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardExpeditionWidget>();
	}
};
static_assert(alignof(UFortRewardExpeditionWidget) == 0x000008, "Wrong alignment on UFortRewardExpeditionWidget");
static_assert(sizeof(UFortRewardExpeditionWidget) == 0x000320, "Wrong size on UFortRewardExpeditionWidget");
static_assert(offsetof(UFortRewardExpeditionWidget, OnMcpError) == 0x0002B8, "Member 'UFortRewardExpeditionWidget::OnMcpError' has a wrong offset!");

class UFortRewardGiftBoxData final : public UFortRewardNotificationData
{
public:
	class UFortGiftBoxItem*                       GiftBox;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardGiftBoxData">();
	}
	static class UFortRewardGiftBoxData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardGiftBoxData>();
	}
};
static_assert(alignof(UFortRewardGiftBoxData) == 0x000008, "Wrong alignment on UFortRewardGiftBoxData");
static_assert(sizeof(UFortRewardGiftBoxData) == 0x000038, "Wrong size on UFortRewardGiftBoxData");
static_assert(offsetof(UFortRewardGiftBoxData, GiftBox) == 0x000030, "Member 'UFortRewardGiftBoxData::GiftBox' has a wrong offset!");

class UFortRewardItemCacheData final : public UFortRewardNotificationData
{
public:
	class UFortItem*                              ItemCache;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardItemCacheData">();
	}
	static class UFortRewardItemCacheData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardItemCacheData>();
	}
};
static_assert(alignof(UFortRewardItemCacheData) == 0x000008, "Wrong alignment on UFortRewardItemCacheData");
static_assert(sizeof(UFortRewardItemCacheData) == 0x000038, "Wrong size on UFortRewardItemCacheData");
static_assert(offsetof(UFortRewardItemCacheData, ItemCache) == 0x000030, "Member 'UFortRewardItemCacheData::ItemCache' has a wrong offset!");

class UFortRewardMissionAlertData final : public UFortRewardNotificationData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardMissionAlertData">();
	}
	static class UFortRewardMissionAlertData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardMissionAlertData>();
	}
};
static_assert(alignof(UFortRewardMissionAlertData) == 0x000008, "Wrong alignment on UFortRewardMissionAlertData");
static_assert(sizeof(UFortRewardMissionAlertData) == 0x000030, "Wrong size on UFortRewardMissionAlertData");

class UFortRewardMissionData final : public UFortRewardNotificationData
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardMissionData">();
	}
	static class UFortRewardMissionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardMissionData>();
	}
};
static_assert(alignof(UFortRewardMissionData) == 0x000008, "Wrong alignment on UFortRewardMissionData");
static_assert(sizeof(UFortRewardMissionData) == 0x000030, "Wrong size on UFortRewardMissionData");

class UFortRewardNewQuestWidget final : public UFortRewardNotificationSubWidget
{
public:
	void GetDataFromSentence(const struct FFortConversationSentence& Sentence, class FText* Text, class UTexture2D** TalkingHeadTexture);
	bool IsValidConversation(const class UFortConversation* Conversation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardNewQuestWidget">();
	}
	static class UFortRewardNewQuestWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardNewQuestWidget>();
	}
};
static_assert(alignof(UFortRewardNewQuestWidget) == 0x000008, "Wrong alignment on UFortRewardNewQuestWidget");
static_assert(sizeof(UFortRewardNewQuestWidget) == 0x0002B8, "Wrong size on UFortRewardNewQuestWidget");

class UFortRewardNotificationWidget final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4E0[0x8];
	TArray<class UFortRewardNotificationData*>    NotificationDataList;
	uint8                                         Pad_4F8[0x10];
	class UOverlay*                               OverlayMain;
	struct FFortSwipeDetector                     SwipeDetector;
	uint8                                         Pad_5A0[0x20];
	TSubclassOf<class UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
	class UFortMulchConfirmationModalWidget*      MulchConfirmationModal;

public:
	void AddCollectionBookData(const struct FFortCollectionBookRewards& CollectionBookRewards);
	void AddDifficultyIncreaseRewardData();
	void AddEpicQuestData(class UFortQuestItem* Quest);
	void AddExpeditionData(class UFortExpeditionItem* ExpeditionItem);
	void AddGiftBoxData();
	void AddItemCacheRewardData(class UFortItem* ItemCache);
	void AddMissionAlertData();
	void AddMissionData();
	void AddPhoenixLevelUpRewardData();
	void AddQuestData(class UFortQuestItem* Quest);
	void BeginCloseRewardsScreen();
	void HandleOnCollectionBookRewardClaimed(const struct FFortCollectionBookRewards& RewardClaimed, bool bSuccess, const TArray<struct FFortItemInstanceQuantityPair>& ActualRewards);
	void HandleOnDifficultyIncreaseRewardsClaimed(const TArray<struct FFortItemInstanceQuantityPair>& DifficultyRewards);
	void HandleOnDifficultyIncreaseRewardsClaimFailed();
	void HandleOnItemCacheRewardsClaimed(const TArray<struct FFortItemInstanceQuantityPair>& ClaimedRewards);
	void HandleOnItemCacheRewardsClaimFailed();
	void HandleOnMissionAlertRewardsOpened(const TArray<struct FFortItemInstanceQuantityPair>& AlertRewards);
	void HandleOnMissionRewardsOpened(const TArray<struct FFortItemInstanceQuantityPair>& MissionRewards);
	void HandleOnMissionRewardsOpenFailed();
	void HandleOnNoQuestRewardsToClaim();
	void HandleOnQuestRewardClaimed(const class UFortQuestItem* Quest, const TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void HideMulchConfirmationModal();
	void InspectItem(class UFortItem* ItemToInspect, int32 QuantityOverride);
	void IsPrimaryActionEnabled(bool* bEnabled);
	void IsPrimaryActionHidden(bool* bHidden);
	void MarkDefaultItemsForMulch(const TArray<struct FFortItemInstanceQuantityPair>& ItemList);
	void NotifyPanelActivated();
	void NotifyPanelDeactivated();
	void OnMulchCompleted();
	void OnNavigationDown();
	void OnNavigationLeft();
	void OnNavigationRight();
	void OnNavigationUp();
	void OnPopulateChoiceRewards(const TArray<struct FFortItemInstanceQuantityPair>& ItemList);
	void OnPopulateExpeditionReward(const class UFortRewardExpeditionData* ExpeditionReward);
	void OnPopulateGiftBoxReward(const class UFortRewardGiftBoxData* GiftBoxReward);
	void OnPopulateNewQuestReward(const class UFortRewardEpicQuestData* QuestReward);
	void OnPrimaryActionDisabled();
	void OnPrimaryActionEnabled();
	void OnPrimaryActionHidden();
	void OnPrimaryActionTextChanged(const class FText& Text);
	void OnRewardsClaimed(const TArray<struct FFortItemInstanceQuantityPair>& ItemList);
	void OnRewardsClaimFailed();
	void OnRewardsScreenClosed();
	void PopulateReward(const class UFortRewardNotificationData* Reward);
	void ResetAllRewardData();
	void SetPrimaryActionEnabled(bool bEnabled);
	void SetPrimaryActionHidden();
	void SetPrimaryActionText(const class FText& Text);
	void ShowMulchConfirmationModal();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardNotificationWidget">();
	}
	static class UFortRewardNotificationWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardNotificationWidget>();
	}
};
static_assert(alignof(UFortRewardNotificationWidget) == 0x000008, "Wrong alignment on UFortRewardNotificationWidget");
static_assert(sizeof(UFortRewardNotificationWidget) == 0x0005D0, "Wrong size on UFortRewardNotificationWidget");
static_assert(offsetof(UFortRewardNotificationWidget, NotificationDataList) == 0x0004E8, "Member 'UFortRewardNotificationWidget::NotificationDataList' has a wrong offset!");
static_assert(offsetof(UFortRewardNotificationWidget, OverlayMain) == 0x000508, "Member 'UFortRewardNotificationWidget::OverlayMain' has a wrong offset!");
static_assert(offsetof(UFortRewardNotificationWidget, SwipeDetector) == 0x000510, "Member 'UFortRewardNotificationWidget::SwipeDetector' has a wrong offset!");
static_assert(offsetof(UFortRewardNotificationWidget, MulchConfirmationModalClass) == 0x0005C0, "Member 'UFortRewardNotificationWidget::MulchConfirmationModalClass' has a wrong offset!");
static_assert(offsetof(UFortRewardNotificationWidget, MulchConfirmationModal) == 0x0005C8, "Member 'UFortRewardNotificationWidget::MulchConfirmationModal' has a wrong offset!");

class UFortRewardPhoenixLevelUpData final : public UFortRewardNotificationData
{
public:
	int32                                         PhoenixLevel;
	uint8                                         Pad_34[0x4];
	TArray<struct FFortItemInstanceQuantityPair>  Rewards;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardPhoenixLevelUpData">();
	}
	static class UFortRewardPhoenixLevelUpData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardPhoenixLevelUpData>();
	}
};
static_assert(alignof(UFortRewardPhoenixLevelUpData) == 0x000008, "Wrong alignment on UFortRewardPhoenixLevelUpData");
static_assert(sizeof(UFortRewardPhoenixLevelUpData) == 0x000048, "Wrong size on UFortRewardPhoenixLevelUpData");
static_assert(offsetof(UFortRewardPhoenixLevelUpData, PhoenixLevel) == 0x000030, "Member 'UFortRewardPhoenixLevelUpData::PhoenixLevel' has a wrong offset!");
static_assert(offsetof(UFortRewardPhoenixLevelUpData, Rewards) == 0x000038, "Member 'UFortRewardPhoenixLevelUpData::Rewards' has a wrong offset!");

class UFortRewardQuestData final : public UFortRewardNotificationData
{
public:
	class UFortQuestItem*                         Quest;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortRewardQuestData">();
	}
	static class UFortRewardQuestData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortRewardQuestData>();
	}
};
static_assert(alignof(UFortRewardQuestData) == 0x000008, "Wrong alignment on UFortRewardQuestData");
static_assert(sizeof(UFortRewardQuestData) == 0x000038, "Wrong size on UFortRewardQuestData");
static_assert(offsetof(UFortRewardQuestData, Quest) == 0x000030, "Member 'UFortRewardQuestData::Quest' has a wrong offset!");

class USaveTheWorldRegisterUIManager final : public UFortUIGameFeatureAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SaveTheWorldRegisterUIManager">();
	}
	static class USaveTheWorldRegisterUIManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveTheWorldRegisterUIManager>();
	}
};
static_assert(alignof(USaveTheWorldRegisterUIManager) == 0x000008, "Wrong alignment on USaveTheWorldRegisterUIManager");
static_assert(sizeof(USaveTheWorldRegisterUIManager) == 0x000028, "Wrong size on USaveTheWorldRegisterUIManager");

class USaveTheWorldRequestsFeatureAction final : public UFortUIGameFeatureAction
{
public:
	TSoftClassPtr<class UClass>                   ItemManagementScreenClass;
	TSoftClassPtr<class UClass>                   ItemInspectionScreenClass;
	TSoftClassPtr<class UClass>                   HeroLoadoutScreenClass;
	TSoftClassPtr<class UClass>                   SurvivorSquadManagementScreenClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SaveTheWorldRequestsFeatureAction">();
	}
	static class USaveTheWorldRequestsFeatureAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveTheWorldRequestsFeatureAction>();
	}
};
static_assert(alignof(USaveTheWorldRequestsFeatureAction) == 0x000008, "Wrong alignment on USaveTheWorldRequestsFeatureAction");
static_assert(sizeof(USaveTheWorldRequestsFeatureAction) == 0x0000C8, "Wrong size on USaveTheWorldRequestsFeatureAction");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, ItemManagementScreenClass) == 0x000028, "Member 'USaveTheWorldRequestsFeatureAction::ItemManagementScreenClass' has a wrong offset!");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, ItemInspectionScreenClass) == 0x000050, "Member 'USaveTheWorldRequestsFeatureAction::ItemInspectionScreenClass' has a wrong offset!");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, HeroLoadoutScreenClass) == 0x000078, "Member 'USaveTheWorldRequestsFeatureAction::HeroLoadoutScreenClass' has a wrong offset!");
static_assert(offsetof(USaveTheWorldRequestsFeatureAction, SurvivorSquadManagementScreenClass) == 0x0000A0, "Member 'USaveTheWorldRequestsFeatureAction::SurvivorSquadManagementScreenClass' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UFortSquadSelectorButton : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x18];

public:
	void HandleDifferentSquadSetBP();
	void HandleSquadChangedBP();
	void SetIdOfSquadToManageBP(const class FName& SquadId);

	class FName GetIdOfSquadToManageBP() const;
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSelectorButton">();
	}
	static class UFortSquadSelectorButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSelectorButton>();
	}
};
#pragma pack(pop)
static_assert(alignof(UFortSquadSelectorButton) == 0x000010, "Wrong alignment on UFortSquadSelectorButton");
static_assert(sizeof(UFortSquadSelectorButton) == 0x001450, "Wrong size on UFortSquadSelectorButton");

class UFortDefenderSquadSelectorButton final : public UFortSquadSelectorButton
{
public:
	bool TryGetPowerLevel(int32* OutPowerLevel);

	bool TryGetTheaterUniqueId(class FString* OutTheaterUniqueId, bool* OutIsUnlocked) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDefenderSquadSelectorButton">();
	}
	static class UFortDefenderSquadSelectorButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDefenderSquadSelectorButton>();
	}
};
static_assert(alignof(UFortDefenderSquadSelectorButton) == 0x000010, "Wrong alignment on UFortDefenderSquadSelectorButton");
static_assert(sizeof(UFortDefenderSquadSelectorButton) == 0x001450, "Wrong size on UFortDefenderSquadSelectorButton");

class UFortSquadStatDetailsWidget : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadStatDetailsWidget">();
	}
	static class UFortSquadStatDetailsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadStatDetailsWidget>();
	}
};
static_assert(alignof(UFortSquadStatDetailsWidget) == 0x000008, "Wrong alignment on UFortSquadStatDetailsWidget");
static_assert(sizeof(UFortSquadStatDetailsWidget) == 0x0002C0, "Wrong size on UFortSquadStatDetailsWidget");

class UFortHeroSquadBonusPerksWidgetBase final : public UFortSquadStatDetailsWidget
{
public:
	class UFortPerkWidget_NUI*                    SupportBonusPerkWidget;
	class UFortPerkWidget_NUI*                    TacticalBonusPerkWidget;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroSquadBonusPerksWidgetBase">();
	}
	static class UFortHeroSquadBonusPerksWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroSquadBonusPerksWidgetBase>();
	}
};
static_assert(alignof(UFortHeroSquadBonusPerksWidgetBase) == 0x000008, "Wrong alignment on UFortHeroSquadBonusPerksWidgetBase");
static_assert(sizeof(UFortHeroSquadBonusPerksWidgetBase) == 0x0002D0, "Wrong size on UFortHeroSquadBonusPerksWidgetBase");
static_assert(offsetof(UFortHeroSquadBonusPerksWidgetBase, SupportBonusPerkWidget) == 0x0002C0, "Member 'UFortHeroSquadBonusPerksWidgetBase::SupportBonusPerkWidget' has a wrong offset!");
static_assert(offsetof(UFortHeroSquadBonusPerksWidgetBase, TacticalBonusPerkWidget) == 0x0002C8, "Member 'UFortHeroSquadBonusPerksWidgetBase::TacticalBonusPerkWidget' has a wrong offset!");

class UFortSquadManagementScreenBase : public UFortActivatablePanel
{
public:
	uint8                                         Pad_518[0x10];
	bool                                          bReadOnlyModeWIFE;
	uint8                                         Pad_529[0x7];
	class UFortSquadStatsWidgetBase*              SquadStatsWidget;
	class UFortSquadSlotsView*                    SquadSlotsView;
	class UFortSquadSlotDetailsPanel*             SelectedSlotDetailsPanel;
	class UFortSquadSlotItemPicker*               SelectedSlotItemPicker;
	struct FDataTableRowHandle                    InspectInputActionRowHandle;
	struct FDataTableRowHandle                    ManageInputActionRowHandle;
	struct FDataTableRowHandle                    BackInputActionRowHandle;
	struct FDataTableRowHandle                    InventoryInputActionRowHandle;
	struct FDataTableRowHandle                    InventoryCloseInputActionRowHandle;
	struct FDataTableRowHandle                    ClosePickerInputActionRowHandle;
	struct FDataTableRowHandle                    SelectPickerSlotActionRowHandle;
	struct FDataTableRowHandle                    CyclePickerSortActionRowHandle;
	struct FDataTableRowHandle                    PreviousSquadActionRowHandle;
	struct FDataTableRowHandle                    NextSquadActionRowHandle;
	struct FDataTableRowHandle                    ClearAllActionRowHandle;
	struct FDataTableRowHandle                    HelpScreenActionRowHandle;
	TSubclassOf<class UFortDisableAutoSlottingPromptAction> DisableAutoSlottingToClearSquadPromptAction;
	uint8                                         Pad_618[0x10];
	class UFortItemViewContext_SquadSlotsView*    ItemViewContext_SquadSlotsView;
	class UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker;

public:
	void ClearSquad();
	void HandleBackInputAction();
	void HandleClosePickerInputAction();
	void HandleCyclePickerSortInputAction();
	void HandleDifferentSquadSetBP();
	void HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex);
	void HandleInspectInputAction();
	void HandleInventoryInputAction();
	void HandleManageInputAction();
	void HandleNextSquadInputAction();
	void HandleOpenSquadSlot(const int32 SquadSlotIndex);
	void HandlePickerSelectionChanged(class UFortItem* SelectedItem);
	void HandlePickerSelectionCommitted(class UFortItem* CommittedItem);
	void HandlePreviousSquadInputAction();
	void HandleSelectPickerSlotInputAction();
	void HandleShouldAutoSlotSurvivorSquadsChanged();
	void HandleSquadSlotPickerHidden();
	void HandleSquadSlotPickerShown();
	void HandleSquadStateChanged();
	void HandleViewInAll(const int32 SquadSlotIndex);
	void NavigateToSquadSlot(int32 SquadSlotIndex);
	void SelectNextSquad();
	void SelectPreviousSquad();
	void SelectSquadWithOffset(int32 Offset);
	void SetIdOfSquadToManageBP(const class FName& SquadId);
	void SetupInputHandlers();
	void ShowWarningReadOnlyWIFE(bool Force);

	class FName GetIdOfSquadToManageBP() const;
	int32 GetNumUnlockedSquads() const;
	bool IsScreenWIFE() const;
	bool TryGetAttributeValueFromSquad(float* OutValue, const struct FGameplayAttribute& Attribute) const;
	bool TryGetSquadMainAttribute(struct FGameplayAttribute* OutGameplayAttribute) const;
	bool TryGetSquadTeamAttribute(struct FGameplayAttribute* OutGameplayAttribute) const;
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadManagementScreenBase">();
	}
	static class UFortSquadManagementScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadManagementScreenBase>();
	}
};
static_assert(alignof(UFortSquadManagementScreenBase) == 0x000008, "Wrong alignment on UFortSquadManagementScreenBase");
static_assert(sizeof(UFortSquadManagementScreenBase) == 0x000638, "Wrong size on UFortSquadManagementScreenBase");
static_assert(offsetof(UFortSquadManagementScreenBase, bReadOnlyModeWIFE) == 0x000528, "Member 'UFortSquadManagementScreenBase::bReadOnlyModeWIFE' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, SquadStatsWidget) == 0x000530, "Member 'UFortSquadManagementScreenBase::SquadStatsWidget' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, SquadSlotsView) == 0x000538, "Member 'UFortSquadManagementScreenBase::SquadSlotsView' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, SelectedSlotDetailsPanel) == 0x000540, "Member 'UFortSquadManagementScreenBase::SelectedSlotDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, SelectedSlotItemPicker) == 0x000548, "Member 'UFortSquadManagementScreenBase::SelectedSlotItemPicker' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, InspectInputActionRowHandle) == 0x000550, "Member 'UFortSquadManagementScreenBase::InspectInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, ManageInputActionRowHandle) == 0x000560, "Member 'UFortSquadManagementScreenBase::ManageInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, BackInputActionRowHandle) == 0x000570, "Member 'UFortSquadManagementScreenBase::BackInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, InventoryInputActionRowHandle) == 0x000580, "Member 'UFortSquadManagementScreenBase::InventoryInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, InventoryCloseInputActionRowHandle) == 0x000590, "Member 'UFortSquadManagementScreenBase::InventoryCloseInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, ClosePickerInputActionRowHandle) == 0x0005A0, "Member 'UFortSquadManagementScreenBase::ClosePickerInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, SelectPickerSlotActionRowHandle) == 0x0005B0, "Member 'UFortSquadManagementScreenBase::SelectPickerSlotActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, CyclePickerSortActionRowHandle) == 0x0005C0, "Member 'UFortSquadManagementScreenBase::CyclePickerSortActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, PreviousSquadActionRowHandle) == 0x0005D0, "Member 'UFortSquadManagementScreenBase::PreviousSquadActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, NextSquadActionRowHandle) == 0x0005E0, "Member 'UFortSquadManagementScreenBase::NextSquadActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, ClearAllActionRowHandle) == 0x0005F0, "Member 'UFortSquadManagementScreenBase::ClearAllActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, HelpScreenActionRowHandle) == 0x000600, "Member 'UFortSquadManagementScreenBase::HelpScreenActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, DisableAutoSlottingToClearSquadPromptAction) == 0x000610, "Member 'UFortSquadManagementScreenBase::DisableAutoSlottingToClearSquadPromptAction' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, ItemViewContext_SquadSlotsView) == 0x000628, "Member 'UFortSquadManagementScreenBase::ItemViewContext_SquadSlotsView' has a wrong offset!");
static_assert(offsetof(UFortSquadManagementScreenBase, ItemViewContext_SquadSlotItemPicker) == 0x000630, "Member 'UFortSquadManagementScreenBase::ItemViewContext_SquadSlotItemPicker' has a wrong offset!");

class UFortHeroSquadManagementScreen final : public UFortSquadManagementScreenBase
{
public:
	struct FDataTableRowHandle                    ManageDefendersInputActionRowHandle;
	class UFortHeroSquadBonusPerksWidgetBase*     BonusPerksWidget;
	uint8                                         Pad_650[0x8];

public:
	void PlayFeedbackForSlottingPerson(class UFortCharacter* Character, int32 SlotIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHeroSquadManagementScreen">();
	}
	static class UFortHeroSquadManagementScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHeroSquadManagementScreen>();
	}
};
static_assert(alignof(UFortHeroSquadManagementScreen) == 0x000008, "Wrong alignment on UFortHeroSquadManagementScreen");
static_assert(sizeof(UFortHeroSquadManagementScreen) == 0x000658, "Wrong size on UFortHeroSquadManagementScreen");
static_assert(offsetof(UFortHeroSquadManagementScreen, ManageDefendersInputActionRowHandle) == 0x000638, "Member 'UFortHeroSquadManagementScreen::ManageDefendersInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortHeroSquadManagementScreen, BonusPerksWidget) == 0x000648, "Member 'UFortHeroSquadManagementScreen::BonusPerksWidget' has a wrong offset!");

class UFortSquadIcon final : public UCommonUserWidget
{
public:
	class FName                                   Name_0;
	EFortBrushSize                                ImageSize;
	uint8                                         Pad_295[0x3];
	class UImage*                                 Icon;

public:
	void HandleDifferentSquadSetBP();
	void SetSquad(const class FName& InName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadIcon">();
	}
	static class UFortSquadIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadIcon>();
	}
};
static_assert(alignof(UFortSquadIcon) == 0x000008, "Wrong alignment on UFortSquadIcon");
static_assert(sizeof(UFortSquadIcon) == 0x0002A0, "Wrong size on UFortSquadIcon");
static_assert(offsetof(UFortSquadIcon, Name_0) == 0x000290, "Member 'UFortSquadIcon::Name_0' has a wrong offset!");
static_assert(offsetof(UFortSquadIcon, ImageSize) == 0x000294, "Member 'UFortSquadIcon::ImageSize' has a wrong offset!");
static_assert(offsetof(UFortSquadIcon, Icon) == 0x000298, "Member 'UFortSquadIcon::Icon' has a wrong offset!");

class UFortSquadLandingPageDefenderSquadDetails final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       OutpostName;
	class UCommonNumericTextBlock*                PowerRating;

public:
	void HandleAddDefenderSquadMemberBP(const class FName& SquadId, int32 Index_0);
	void HandleDefenderSquadInfoSetBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void SetDefenderSquadInfo(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadLandingPageDefenderSquadDetails">();
	}
	static class UFortSquadLandingPageDefenderSquadDetails* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadLandingPageDefenderSquadDetails>();
	}
};
static_assert(alignof(UFortSquadLandingPageDefenderSquadDetails) == 0x000008, "Wrong alignment on UFortSquadLandingPageDefenderSquadDetails");
static_assert(sizeof(UFortSquadLandingPageDefenderSquadDetails) == 0x0002A0, "Wrong size on UFortSquadLandingPageDefenderSquadDetails");
static_assert(offsetof(UFortSquadLandingPageDefenderSquadDetails, OutpostName) == 0x000290, "Member 'UFortSquadLandingPageDefenderSquadDetails::OutpostName' has a wrong offset!");
static_assert(offsetof(UFortSquadLandingPageDefenderSquadDetails, PowerRating) == 0x000298, "Member 'UFortSquadLandingPageDefenderSquadDetails::PowerRating' has a wrong offset!");

class UFortSquadLandingPageDefenderSquadDetailsLocked final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       OutpostName;

public:
	void SetDefenderSquadInfo(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadLandingPageDefenderSquadDetailsLocked">();
	}
	static class UFortSquadLandingPageDefenderSquadDetailsLocked* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadLandingPageDefenderSquadDetailsLocked>();
	}
};
static_assert(alignof(UFortSquadLandingPageDefenderSquadDetailsLocked) == 0x000008, "Wrong alignment on UFortSquadLandingPageDefenderSquadDetailsLocked");
static_assert(sizeof(UFortSquadLandingPageDefenderSquadDetailsLocked) == 0x000298, "Wrong size on UFortSquadLandingPageDefenderSquadDetailsLocked");
static_assert(offsetof(UFortSquadLandingPageDefenderSquadDetailsLocked, OutpostName) == 0x000290, "Member 'UFortSquadLandingPageDefenderSquadDetailsLocked::OutpostName' has a wrong offset!");

class UFortSquadLandingPageDefenderSummary final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x8];

public:
	void HandleAddDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleAddLockedDefenderSquadDetailsBP(const struct FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);
	void HandleClearDefenderSquadDetailsBP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadLandingPageDefenderSummary">();
	}
	static class UFortSquadLandingPageDefenderSummary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadLandingPageDefenderSummary>();
	}
};
static_assert(alignof(UFortSquadLandingPageDefenderSummary) == 0x000008, "Wrong alignment on UFortSquadLandingPageDefenderSummary");
static_assert(sizeof(UFortSquadLandingPageDefenderSummary) == 0x000298, "Wrong size on UFortSquadLandingPageDefenderSummary");

class UFortSquadLandingPageSurvivorSummary final : public UCommonUserWidget
{
public:
	class UFortSquadStatValueWithIcon*            FortitudeStatValue;
	class UFortSquadStatValueWithIcon*            OffenseStatValue;
	class UFortSquadStatValueWithIcon*            ResistanceStatValue;
	class UFortSquadStatValueWithIcon*            TechStatValue;
	uint8                                         Pad_2B0[0x68];

public:
	void HandleAddSetBonusSummaryLineItemBP(const struct FFortAttributeModifierAccumulation& AttributeModifierAccumulation);
	void HandleClearSetBonusSummaryLineItemsBP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadLandingPageSurvivorSummary">();
	}
	static class UFortSquadLandingPageSurvivorSummary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadLandingPageSurvivorSummary>();
	}
};
static_assert(alignof(UFortSquadLandingPageSurvivorSummary) == 0x000008, "Wrong alignment on UFortSquadLandingPageSurvivorSummary");
static_assert(sizeof(UFortSquadLandingPageSurvivorSummary) == 0x000318, "Wrong size on UFortSquadLandingPageSurvivorSummary");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, FortitudeStatValue) == 0x000290, "Member 'UFortSquadLandingPageSurvivorSummary::FortitudeStatValue' has a wrong offset!");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, OffenseStatValue) == 0x000298, "Member 'UFortSquadLandingPageSurvivorSummary::OffenseStatValue' has a wrong offset!");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, ResistanceStatValue) == 0x0002A0, "Member 'UFortSquadLandingPageSurvivorSummary::ResistanceStatValue' has a wrong offset!");
static_assert(offsetof(UFortSquadLandingPageSurvivorSummary, TechStatValue) == 0x0002A8, "Member 'UFortSquadLandingPageSurvivorSummary::TechStatValue' has a wrong offset!");

class UFortSquadManagementItemViewContextBase : public UObject
{
public:
	uint8                                         Pad_28[0xD0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadManagementItemViewContextBase">();
	}
	static class UFortSquadManagementItemViewContextBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadManagementItemViewContextBase>();
	}
};
static_assert(alignof(UFortSquadManagementItemViewContextBase) == 0x000008, "Wrong alignment on UFortSquadManagementItemViewContextBase");
static_assert(sizeof(UFortSquadManagementItemViewContextBase) == 0x0000F8, "Wrong size on UFortSquadManagementItemViewContextBase");

class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                         Pad_F8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemViewContext_SquadSlotsView">();
	}
	static class UFortItemViewContext_SquadSlotsView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemViewContext_SquadSlotsView>();
	}
};
static_assert(alignof(UFortItemViewContext_SquadSlotsView) == 0x000008, "Wrong alignment on UFortItemViewContext_SquadSlotsView");
static_assert(sizeof(UFortItemViewContext_SquadSlotsView) == 0x000100, "Wrong size on UFortItemViewContext_SquadSlotsView");

class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{
public:
	uint8                                         Pad_F8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemViewContext_SquadSlotItemPicker">();
	}
	static class UFortItemViewContext_SquadSlotItemPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemViewContext_SquadSlotItemPicker>();
	}
};
static_assert(alignof(UFortItemViewContext_SquadSlotItemPicker) == 0x000008, "Wrong alignment on UFortItemViewContext_SquadSlotItemPicker");
static_assert(sizeof(UFortItemViewContext_SquadSlotItemPicker) == 0x000100, "Wrong size on UFortItemViewContext_SquadSlotItemPicker");

class UFortItemViewContext_ExpeditionSquadSlotsView final : public UFortItemViewContext_SquadSlotsView
{
public:
	uint8                                         Pad_100[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemViewContext_ExpeditionSquadSlotsView">();
	}
	static class UFortItemViewContext_ExpeditionSquadSlotsView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemViewContext_ExpeditionSquadSlotsView>();
	}
};
static_assert(alignof(UFortItemViewContext_ExpeditionSquadSlotsView) == 0x000008, "Wrong alignment on UFortItemViewContext_ExpeditionSquadSlotsView");
static_assert(sizeof(UFortItemViewContext_ExpeditionSquadSlotsView) == 0x000108, "Wrong size on UFortItemViewContext_ExpeditionSquadSlotsView");

class UFortItemViewContext_ExpeditionSquadSlotItemPicker final : public UFortItemViewContext_SquadSlotItemPicker
{
public:
	uint8                                         Pad_100[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemViewContext_ExpeditionSquadSlotItemPicker">();
	}
	static class UFortItemViewContext_ExpeditionSquadSlotItemPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemViewContext_ExpeditionSquadSlotItemPicker>();
	}
};
static_assert(alignof(UFortItemViewContext_ExpeditionSquadSlotItemPicker) == 0x000008, "Wrong alignment on UFortItemViewContext_ExpeditionSquadSlotItemPicker");
static_assert(sizeof(UFortItemViewContext_ExpeditionSquadSlotItemPicker) == 0x000108, "Wrong size on UFortItemViewContext_ExpeditionSquadSlotItemPicker");

class UFortSquadSlotDetailsPanel final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x20];
	class UFortSquadSlotItemDetailsHostPanel*     ItemDetailsPanel;
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;
	uint8                                         Pad_2C8[0x20];

public:
	void HandleDifferentSquadSlotSetBP();
	void HandleSquadSlotRestrictionFactorsChangedBP();
	void HandleSquadSlotStateChangedBP();
	void SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex);
	void SetScrollWidget();

	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const;
	class UFortItem* GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const;
	TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons() const;
	bool IsSquadSlotLockedBP() const;
	bool TryGetItemToPreviewInSlot(class UFortItem** OutItemToPreviewInSlot) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotDetailsPanel">();
	}
	static class UFortSquadSlotDetailsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotDetailsPanel>();
	}
};
static_assert(alignof(UFortSquadSlotDetailsPanel) == 0x000008, "Wrong alignment on UFortSquadSlotDetailsPanel");
static_assert(sizeof(UFortSquadSlotDetailsPanel) == 0x0002E8, "Wrong size on UFortSquadSlotDetailsPanel");
static_assert(offsetof(UFortSquadSlotDetailsPanel, ItemDetailsPanel) == 0x0002B0, "Member 'UFortSquadSlotDetailsPanel::ItemDetailsPanel' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotDetailsPanel, ItemViewContext) == 0x0002B8, "Member 'UFortSquadSlotDetailsPanel::ItemViewContext' has a wrong offset!");

class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{
public:
	uint8                                         Pad_2E8[0x20];

public:
	void HandlePostDifferentSquadSlotSetBP();
	void SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex);

	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const;
	class UFortItem* GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const;
	bool IsSquadSlotLockedBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotItemDetailElementWidget">();
	}
	static class UFortSquadSlotItemDetailElementWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotItemDetailElementWidget>();
	}
};
static_assert(alignof(UFortSquadSlotItemDetailElementWidget) == 0x000008, "Wrong alignment on UFortSquadSlotItemDetailElementWidget");
static_assert(sizeof(UFortSquadSlotItemDetailElementWidget) == 0x000308, "Wrong size on UFortSquadSlotItemDetailElementWidget");

class UFortSquadSlotItemDetailsHostPanel final : public UFortItemDetailsHostPanel
{
public:
	uint8                                         Pad_368[0x20];

public:
	void SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex);

	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const;
	class UFortItem* GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const;
	bool IsSquadSlotLockedBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotItemDetailsHostPanel">();
	}
	static class UFortSquadSlotItemDetailsHostPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotItemDetailsHostPanel>();
	}
};
static_assert(alignof(UFortSquadSlotItemDetailsHostPanel) == 0x000008, "Wrong alignment on UFortSquadSlotItemDetailsHostPanel");
static_assert(sizeof(UFortSquadSlotItemDetailsHostPanel) == 0x000388, "Wrong size on UFortSquadSlotItemDetailsHostPanel");

class UFortSquadSlotItemPicker final : public UFortItemPickerBase
{
public:
	uint8                                         Pad_3D0[0x38];
	TMulticastInlineDelegate<void(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType)> OnSortChanged;
	uint8                                         Pad_418[0x80];

public:
	void CycleSortType();
	void SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex);
	void SetSortTypes(const struct FSquadSlotSortTypes& SquadSlotSortTypes);

	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotItemPicker">();
	}
	static class UFortSquadSlotItemPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotItemPicker>();
	}
};
static_assert(alignof(UFortSquadSlotItemPicker) == 0x000008, "Wrong alignment on UFortSquadSlotItemPicker");
static_assert(sizeof(UFortSquadSlotItemPicker) == 0x000498, "Wrong size on UFortSquadSlotItemPicker");
static_assert(offsetof(UFortSquadSlotItemPicker, OnSortChanged) == 0x000408, "Member 'UFortSquadSlotItemPicker::OnSortChanged' has a wrong offset!");

class UFortSquadSlotItemPickerTileButton final : public UFortItemTileButton
{
public:
	uint8                                         Pad_1468[0x18];

public:
	void HandleItemSlottedToDifferentSquad(const struct FHomebaseSquadSlotId& SquadSlotId);
	void HandleSlottingRestrictionReasonsChanged();

	TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotItemPickerTileButton">();
	}
	static class UFortSquadSlotItemPickerTileButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotItemPickerTileButton>();
	}
};
static_assert(alignof(UFortSquadSlotItemPickerTileButton) == 0x000010, "Wrong alignment on UFortSquadSlotItemPickerTileButton");
static_assert(sizeof(UFortSquadSlotItemPickerTileButton) == 0x001480, "Wrong size on UFortSquadSlotItemPickerTileButton");

class UFortSquadSlotSelectorPopupMenu final : public UFortPopupMenu_Legacy
{
public:
	bool                                          bReadOnlyModeWIFE;
	uint8                                         Pad_501[0x7];

public:
	class UFortSquadSlotSelectorButton* GetHostButton() const;
	bool IsScreenWIFE() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotSelectorPopupMenu">();
	}
	static class UFortSquadSlotSelectorPopupMenu* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotSelectorPopupMenu>();
	}
};
static_assert(alignof(UFortSquadSlotSelectorPopupMenu) == 0x000008, "Wrong alignment on UFortSquadSlotSelectorPopupMenu");
static_assert(sizeof(UFortSquadSlotSelectorPopupMenu) == 0x000508, "Wrong size on UFortSquadSlotSelectorPopupMenu");
static_assert(offsetof(UFortSquadSlotSelectorPopupMenu, bReadOnlyModeWIFE) == 0x000500, "Member 'UFortSquadSlotSelectorPopupMenu::bReadOnlyModeWIFE' has a wrong offset!");

class UFortSquadSlotSurvivorTraitMatchesDetailWidget final : public UFortSquadSlotItemDetailElementWidget
{
public:
	bool                                          IsSquadLeaderSlot;
	bool                                          LeaderMatchesSquadType;
	uint8                                         Pad_30A[0x2];
	int32                                         SubordinatePersonalityMatchCount;
	bool                                          MatchesLeaderPersonality;
	uint8                                         Pad_311[0x3];
	int32                                         MatchingSetBonusCount;
	int32                                         SetBonusSize;
	uint8                                         Pad_31C[0x14];

public:
	void HandleTraitValuesUpdatedBP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotSurvivorTraitMatchesDetailWidget">();
	}
	static class UFortSquadSlotSurvivorTraitMatchesDetailWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotSurvivorTraitMatchesDetailWidget>();
	}
};
static_assert(alignof(UFortSquadSlotSurvivorTraitMatchesDetailWidget) == 0x000008, "Wrong alignment on UFortSquadSlotSurvivorTraitMatchesDetailWidget");
static_assert(sizeof(UFortSquadSlotSurvivorTraitMatchesDetailWidget) == 0x000330, "Wrong size on UFortSquadSlotSurvivorTraitMatchesDetailWidget");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, IsSquadLeaderSlot) == 0x000308, "Member 'UFortSquadSlotSurvivorTraitMatchesDetailWidget::IsSquadLeaderSlot' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, LeaderMatchesSquadType) == 0x000309, "Member 'UFortSquadSlotSurvivorTraitMatchesDetailWidget::LeaderMatchesSquadType' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, SubordinatePersonalityMatchCount) == 0x00030C, "Member 'UFortSquadSlotSurvivorTraitMatchesDetailWidget::SubordinatePersonalityMatchCount' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, MatchesLeaderPersonality) == 0x000310, "Member 'UFortSquadSlotSurvivorTraitMatchesDetailWidget::MatchesLeaderPersonality' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, MatchingSetBonusCount) == 0x000314, "Member 'UFortSquadSlotSurvivorTraitMatchesDetailWidget::MatchingSetBonusCount' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSurvivorTraitMatchesDetailWidget, SetBonusSize) == 0x000318, "Member 'UFortSquadSlotSurvivorTraitMatchesDetailWidget::SetBonusSize' has a wrong offset!");

class UFortSquadSlotSelectorButton final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x20];
	TMulticastInlineDelegate<void(int32 SquadSlotIndex)> OnRequestOpenSquadSlotEvent;
	TMulticastInlineDelegate<void(int32 SquadSlotIndex)> OnRequestViewInAllEvent;
	class UFortSquadSlotWidget*                   SquadSlotWidget;
	class UMenuAnchor*                            PopupMenuAnchor;
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;
	uint8                                         Pad_1490[0x20];

public:
	class UUserWidget* GetPopupMenu();
	void HandlePostDifferentSquadSlotSetBP();
	void HandlePreDifferentSquadSlotSetBP();
	void OpenSquadSlot();
	void SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex);
	void SquadSlotWidgetUpdated();
	void ViewInAll();

	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const;
	bool GetInPreviewMode() const;
	bool IsSquadSlotLockedBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotSelectorButton">();
	}
	static class UFortSquadSlotSelectorButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotSelectorButton>();
	}
};
static_assert(alignof(UFortSquadSlotSelectorButton) == 0x000010, "Wrong alignment on UFortSquadSlotSelectorButton");
static_assert(sizeof(UFortSquadSlotSelectorButton) == 0x0014B0, "Wrong size on UFortSquadSlotSelectorButton");
static_assert(offsetof(UFortSquadSlotSelectorButton, OnRequestOpenSquadSlotEvent) == 0x001450, "Member 'UFortSquadSlotSelectorButton::OnRequestOpenSquadSlotEvent' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSelectorButton, OnRequestViewInAllEvent) == 0x001460, "Member 'UFortSquadSlotSelectorButton::OnRequestViewInAllEvent' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSelectorButton, SquadSlotWidget) == 0x001470, "Member 'UFortSquadSlotSelectorButton::SquadSlotWidget' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSelectorButton, PopupMenuAnchor) == 0x001478, "Member 'UFortSquadSlotSelectorButton::PopupMenuAnchor' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotSelectorButton, ItemViewContext) == 0x001480, "Member 'UFortSquadSlotSelectorButton::ItemViewContext' has a wrong offset!");

class UFortSquadSlotsView final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];
	TMulticastInlineDelegate<void(int32 SquadSlotIndex)> OnDifferentSquadSlotSelectedEvent;
	TMulticastInlineDelegate<void(int32 SquadSlotIndex)> OnRequestOpenSquadSlotEvent;
	TMulticastInlineDelegate<void(int32 SquadSlotIndex)> OnRequestViewInAllEvent;
	bool                                          bReadOnlyModeWIFE;
	uint8                                         Pad_2D1[0x3];
	int32                                         IndexOfSelectedSquadSlot;
	bool                                          bSlotButtonsRequireSelection;
	bool                                          bInPreviewMode;
	uint8                                         Pad_2DA[0x6];
	TMap<ESquadSlotType, struct FSquadSlotSortTypes> SquadSlotSortTypesMap;
	TSubclassOf<class UFortDisableAutoSlottingPromptAction> DisableAutoSlottingToOpenSquadSlotPromptAction;
	class UFortCommittableButtonGroup*            SquadSlotButtonGroup;
	uint8                                         Pad_340[0x30];
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;
	uint8                                         Pad_380[0x8];

public:
	class UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(const int32 SquadSlotIndex, const struct FHomebaseSquadSlot& SquadSlotDefinition, class UWidget** OutSquadSlotButtonHost);
	void HandleButtonClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex);
	void HandleButtonDoubleClicked(class UCommonButtonLegacy* CommittedButton, int32 ButtonIndex);
	void HandleHoveredButtonChanged(class UCommonButtonLegacy* HoveredButton, int32 ButtonIndex);
	void HandleRequestOpenSquadSlot(int32 SquadSlotIndex);
	void HandleRequestViewInAll(int32 SquadSlotIndex);
	void HandleSelectedButtonChanged(class UCommonButtonLegacy* SelectedButton, int32 ButtonIndex);
	void SelectSlot(int32 SquadSlotIndex);
	void SetIdOfSquadToManageBP(const class FName& SquadId);
	void SetInPreviewMode(const bool bPreview);
	void SetIsSelectionLocked(const bool ShouldSelectionBeLocked);
	bool TryGetSelectedSquadSlotSortTypes(struct FSquadSlotSortTypes* OutSlotSortTypes);

	class FName GetIdOfSquadToManageBP() const;
	int32 GetIndexOfSelectedSquadSlot() const;
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotsView">();
	}
	static class UFortSquadSlotsView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotsView>();
	}
};
static_assert(alignof(UFortSquadSlotsView) == 0x000008, "Wrong alignment on UFortSquadSlotsView");
static_assert(sizeof(UFortSquadSlotsView) == 0x000388, "Wrong size on UFortSquadSlotsView");
static_assert(offsetof(UFortSquadSlotsView, OnDifferentSquadSlotSelectedEvent) == 0x0002A0, "Member 'UFortSquadSlotsView::OnDifferentSquadSlotSelectedEvent' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, OnRequestOpenSquadSlotEvent) == 0x0002B0, "Member 'UFortSquadSlotsView::OnRequestOpenSquadSlotEvent' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, OnRequestViewInAllEvent) == 0x0002C0, "Member 'UFortSquadSlotsView::OnRequestViewInAllEvent' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, bReadOnlyModeWIFE) == 0x0002D0, "Member 'UFortSquadSlotsView::bReadOnlyModeWIFE' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, IndexOfSelectedSquadSlot) == 0x0002D4, "Member 'UFortSquadSlotsView::IndexOfSelectedSquadSlot' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, bSlotButtonsRequireSelection) == 0x0002D8, "Member 'UFortSquadSlotsView::bSlotButtonsRequireSelection' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, bInPreviewMode) == 0x0002D9, "Member 'UFortSquadSlotsView::bInPreviewMode' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, SquadSlotSortTypesMap) == 0x0002E0, "Member 'UFortSquadSlotsView::SquadSlotSortTypesMap' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, DisableAutoSlottingToOpenSquadSlotPromptAction) == 0x000330, "Member 'UFortSquadSlotsView::DisableAutoSlottingToOpenSquadSlotPromptAction' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, SquadSlotButtonGroup) == 0x000338, "Member 'UFortSquadSlotsView::SquadSlotButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotsView, ItemViewContext) == 0x000370, "Member 'UFortSquadSlotsView::ItemViewContext' has a wrong offset!");

class UFortSquadSlotWidget final : public UWidget
{
public:
	uint8                                         Pad_148[0x20];
	EFortItemCardSize                             ItemCardSize;
	uint8                                         Pad_169[0x3F];
	class UFortMultiSizeItemCard*                 SlottedItemCard;
	uint8                                         Pad_1B0[0x8];
	TScriptInterface<class IFortItemViewContextInterface> ItemViewContext;
	uint8                                         Pad_1C8[0x10];

public:
	void SetCardSize(const EFortItemCardSize CardSize);
	void SetIdOfSquadSlotToManageBP(const class FName& SquadId, const int32 SquadSlotIndex);

	void GetIdOfSquadSlotToManageBP(class FName* OutSquadId, int32* OutSquadSlotIndex) const;
	class UFortItem* GetItemInSquadSlotBP(const class ULocalPlayer* LocalPlayer) const;
	bool IsSquadSlotLockedBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadSlotWidget">();
	}
	static class UFortSquadSlotWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadSlotWidget>();
	}
};
static_assert(alignof(UFortSquadSlotWidget) == 0x000008, "Wrong alignment on UFortSquadSlotWidget");
static_assert(sizeof(UFortSquadSlotWidget) == 0x0001D8, "Wrong size on UFortSquadSlotWidget");
static_assert(offsetof(UFortSquadSlotWidget, ItemCardSize) == 0x000168, "Member 'UFortSquadSlotWidget::ItemCardSize' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotWidget, SlottedItemCard) == 0x0001A8, "Member 'UFortSquadSlotWidget::SlottedItemCard' has a wrong offset!");
static_assert(offsetof(UFortSquadSlotWidget, ItemViewContext) == 0x0001B8, "Member 'UFortSquadSlotWidget::ItemViewContext' has a wrong offset!");

class UFortSquadStatsWidgetBase final : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>     OverviewStats;
	class UFortAttributeList_NUI*                 DetailedStats;
	uint8                                         Pad_2A8[0x20];

public:
	void HandlePowerRatingChanged_BP(bool bHasTeamMebers);
	void HandleSquadSlottingPreviewStateChanged();
	void RequestShowPreviewStats();
	void RequestStatsUpdate();

	struct FUniqueNetIdRepl GetLocalPlayerId() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadStatsWidgetBase">();
	}
	static class UFortSquadStatsWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadStatsWidgetBase>();
	}
};
static_assert(alignof(UFortSquadStatsWidgetBase) == 0x000008, "Wrong alignment on UFortSquadStatsWidgetBase");
static_assert(sizeof(UFortSquadStatsWidgetBase) == 0x0002C8, "Wrong size on UFortSquadStatsWidgetBase");
static_assert(offsetof(UFortSquadStatsWidgetBase, OverviewStats) == 0x000290, "Member 'UFortSquadStatsWidgetBase::OverviewStats' has a wrong offset!");
static_assert(offsetof(UFortSquadStatsWidgetBase, DetailedStats) == 0x0002A0, "Member 'UFortSquadStatsWidgetBase::DetailedStats' has a wrong offset!");

class UFortSquadStatValueWithIcon final : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                     Attribute;
	struct FGameplayAttribute                     TeamAttribute;
	EFortBrushSize                                ImageSize;
	uint8                                         Pad_301[0x7];
	class UCommonNumericTextBlock*                Value;
	class UImage*                                 Icon;

public:
	void HandleDifferentAttributeSetBP();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadStatValueWithIcon">();
	}
	static class UFortSquadStatValueWithIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadStatValueWithIcon>();
	}
};
static_assert(alignof(UFortSquadStatValueWithIcon) == 0x000008, "Wrong alignment on UFortSquadStatValueWithIcon");
static_assert(sizeof(UFortSquadStatValueWithIcon) == 0x000318, "Wrong size on UFortSquadStatValueWithIcon");
static_assert(offsetof(UFortSquadStatValueWithIcon, Attribute) == 0x000290, "Member 'UFortSquadStatValueWithIcon::Attribute' has a wrong offset!");
static_assert(offsetof(UFortSquadStatValueWithIcon, TeamAttribute) == 0x0002C8, "Member 'UFortSquadStatValueWithIcon::TeamAttribute' has a wrong offset!");
static_assert(offsetof(UFortSquadStatValueWithIcon, ImageSize) == 0x000300, "Member 'UFortSquadStatValueWithIcon::ImageSize' has a wrong offset!");
static_assert(offsetof(UFortSquadStatValueWithIcon, Value) == 0x000308, "Member 'UFortSquadStatValueWithIcon::Value' has a wrong offset!");
static_assert(offsetof(UFortSquadStatValueWithIcon, Icon) == 0x000310, "Member 'UFortSquadStatValueWithIcon::Icon' has a wrong offset!");

class UFortSquadTypeLandingPageBase final : public UFortActivatablePanel
{
public:
	bool                                          bReadOnlyModeWIFE;
	EFortHomebaseSquadType                        SquadType;
	uint8                                         Pad_51A[0x6];
	struct FDataTableRowHandle                    BackInputActionRowHandle;
	EFortFrontendInventoryFilter                  ItemManagementScreenFilter;
	uint8                                         Pad_531[0x7];
	TArray<TWeakObjectPtr<class UFortSquadSelectorButton>> SquadSelectorButtons;

public:
	class UFortSquadSelectorButton* CreateAndAddSquadButton(const class FName& SquadId);
	void HandleBackInputAction(bool* bPassThrough);
	void HandlePendingNavigationOp();
	void ShowWarningReadOnlyWIFE(bool Force);

	bool IsScreenWIFE() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSquadTypeLandingPageBase">();
	}
	static class UFortSquadTypeLandingPageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSquadTypeLandingPageBase>();
	}
};
static_assert(alignof(UFortSquadTypeLandingPageBase) == 0x000008, "Wrong alignment on UFortSquadTypeLandingPageBase");
static_assert(sizeof(UFortSquadTypeLandingPageBase) == 0x000548, "Wrong size on UFortSquadTypeLandingPageBase");
static_assert(offsetof(UFortSquadTypeLandingPageBase, bReadOnlyModeWIFE) == 0x000518, "Member 'UFortSquadTypeLandingPageBase::bReadOnlyModeWIFE' has a wrong offset!");
static_assert(offsetof(UFortSquadTypeLandingPageBase, SquadType) == 0x000519, "Member 'UFortSquadTypeLandingPageBase::SquadType' has a wrong offset!");
static_assert(offsetof(UFortSquadTypeLandingPageBase, BackInputActionRowHandle) == 0x000520, "Member 'UFortSquadTypeLandingPageBase::BackInputActionRowHandle' has a wrong offset!");
static_assert(offsetof(UFortSquadTypeLandingPageBase, ItemManagementScreenFilter) == 0x000530, "Member 'UFortSquadTypeLandingPageBase::ItemManagementScreenFilter' has a wrong offset!");
static_assert(offsetof(UFortSquadTypeLandingPageBase, SquadSelectorButtons) == 0x000538, "Member 'UFortSquadTypeLandingPageBase::SquadSelectorButtons' has a wrong offset!");

class UFortStatIcon final : public UCommonUserWidget
{
public:
	struct FGameplayAttribute                     Attribute;
	EFortBrushSize                                ImageSize;
	uint8                                         Pad_2C9[0x7];
	class UImage*                                 Icon;

public:
	void HandleDifferentAttributeSetBP();
	void SetAttribute(const struct FGameplayAttribute& InAttribute);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStatIcon">();
	}
	static class UFortStatIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStatIcon>();
	}
};
static_assert(alignof(UFortStatIcon) == 0x000008, "Wrong alignment on UFortStatIcon");
static_assert(sizeof(UFortStatIcon) == 0x0002D8, "Wrong size on UFortStatIcon");
static_assert(offsetof(UFortStatIcon, Attribute) == 0x000290, "Member 'UFortStatIcon::Attribute' has a wrong offset!");
static_assert(offsetof(UFortStatIcon, ImageSize) == 0x0002C8, "Member 'UFortStatIcon::ImageSize' has a wrong offset!");
static_assert(offsetof(UFortStatIcon, Icon) == 0x0002D0, "Member 'UFortStatIcon::Icon' has a wrong offset!");

class UFortSurvivorSquadManagementScreen final : public UFortSquadManagementScreenBase
{
public:
	class UFortSurvivorSquadStatMatchesBase*      StatMatchesWidget;
	uint8                                         Pad_640[0xD8];

public:
	void PlayFeedbackForSlottingPerson(class UFortWorker* Worker, int32 SlotIndex, const struct FFortSurvivorSquadSlottingFeedbackData& FeedbackData);
	void ShowHelpDialog();
	void UpdateCycleButtons();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSurvivorSquadManagementScreen">();
	}
	static class UFortSurvivorSquadManagementScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSurvivorSquadManagementScreen>();
	}
};
static_assert(alignof(UFortSurvivorSquadManagementScreen) == 0x000008, "Wrong alignment on UFortSurvivorSquadManagementScreen");
static_assert(sizeof(UFortSurvivorSquadManagementScreen) == 0x000718, "Wrong size on UFortSurvivorSquadManagementScreen");
static_assert(offsetof(UFortSurvivorSquadManagementScreen, StatMatchesWidget) == 0x000638, "Member 'UFortSurvivorSquadManagementScreen::StatMatchesWidget' has a wrong offset!");

class UFortSurvivorSquadSelectorButton final : public UFortSquadSelectorButton
{
public:
	TArray<struct FGameplayAttribute>             FortStatAttributes;
	TArray<struct FGameplayAttribute>             FortTeamStatAttributes;
	uint8                                         Pad_1468[0x8];

public:
	bool TryGetPersonalityMatches(struct FFortSurvivorSquadSelectorButtonPersonalityMatches* OutPersonalityMatches);
	bool TryGetSquadMembers(TArray<class UFortWorker*>* OutSquadMembers);
	bool TryGetSummaryStats(struct FFortSurvivorSquadSelectorButtonSummaryStats* OutSummaryStats);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSurvivorSquadSelectorButton">();
	}
	static class UFortSurvivorSquadSelectorButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSurvivorSquadSelectorButton>();
	}
};
static_assert(alignof(UFortSurvivorSquadSelectorButton) == 0x000010, "Wrong alignment on UFortSurvivorSquadSelectorButton");
static_assert(sizeof(UFortSurvivorSquadSelectorButton) == 0x001470, "Wrong size on UFortSurvivorSquadSelectorButton");
static_assert(offsetof(UFortSurvivorSquadSelectorButton, FortStatAttributes) == 0x001448, "Member 'UFortSurvivorSquadSelectorButton::FortStatAttributes' has a wrong offset!");
static_assert(offsetof(UFortSurvivorSquadSelectorButton, FortTeamStatAttributes) == 0x001458, "Member 'UFortSurvivorSquadSelectorButton::FortTeamStatAttributes' has a wrong offset!");

class UFortSurvivorSquadStatMatchBase final : public UCommonUserWidget
{
public:
	uint8                                         Pad_290[0x10];
	struct FFortUISurvivorSquadStatMatch          StatMatch;

public:
	void OnStatMatchUpdated(const struct FFortUISurvivorSquadStatMatch& UpdatedMatch);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSurvivorSquadStatMatchBase">();
	}
	static class UFortSurvivorSquadStatMatchBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSurvivorSquadStatMatchBase>();
	}
};
static_assert(alignof(UFortSurvivorSquadStatMatchBase) == 0x000010, "Wrong alignment on UFortSurvivorSquadStatMatchBase");
static_assert(sizeof(UFortSurvivorSquadStatMatchBase) == 0x000760, "Wrong size on UFortSurvivorSquadStatMatchBase");
static_assert(offsetof(UFortSurvivorSquadStatMatchBase, StatMatch) == 0x0002A0, "Member 'UFortSurvivorSquadStatMatchBase::StatMatch' has a wrong offset!");

class UFortSurvivorSquadStatMatchesBase final : public UFortSquadStatDetailsWidget
{
public:
	TSubclassOf<class UFortSurvivorSquadStatMatchBase> StatMatchClass;
	bool                                          bSummaryView;
	uint8                                         Pad_2C9[0x7];
	TArray<class UFortSurvivorSquadStatMatchBase*> StatMatches;
	uint8                                         Pad_2E0[0x10];

public:
	void AddStatMatch(class UFortSurvivorSquadStatMatchBase* SetBonus);
	void HandleDifferentSquadSetBP();
	void SetIdOfSquadToManageBP(const class FName& SquadId);
	void SetSummaryView(bool bInSummaryView);

	class FName GetIdOfSquadToManageBP() const;
	bool TryGetStaticSquadDataBP(struct FHomebaseSquad* OutSquadData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSurvivorSquadStatMatchesBase">();
	}
	static class UFortSurvivorSquadStatMatchesBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSurvivorSquadStatMatchesBase>();
	}
};
static_assert(alignof(UFortSurvivorSquadStatMatchesBase) == 0x000008, "Wrong alignment on UFortSurvivorSquadStatMatchesBase");
static_assert(sizeof(UFortSurvivorSquadStatMatchesBase) == 0x0002F0, "Wrong size on UFortSurvivorSquadStatMatchesBase");
static_assert(offsetof(UFortSurvivorSquadStatMatchesBase, StatMatchClass) == 0x0002C0, "Member 'UFortSurvivorSquadStatMatchesBase::StatMatchClass' has a wrong offset!");
static_assert(offsetof(UFortSurvivorSquadStatMatchesBase, bSummaryView) == 0x0002C8, "Member 'UFortSurvivorSquadStatMatchesBase::bSummaryView' has a wrong offset!");
static_assert(offsetof(UFortSurvivorSquadStatMatchesBase, StatMatches) == 0x0002D0, "Member 'UFortSurvivorSquadStatMatchesBase::StatMatches' has a wrong offset!");

class UFortSurvivorSquadSummaryStatItem final : public UCommonUserWidget
{
public:
	EFortBrushSize                                ImageSize;
	uint8                                         Pad_291[0x7];
	class UImage*                                 Icon;
	class UCommonTextBlock*                       Value;
	class UCommonTextBlock*                       Name_0;

public:
	void SetAttributeModifierAccumulation(const struct FFortAttributeModifierAccumulation& Accumulation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSurvivorSquadSummaryStatItem">();
	}
	static class UFortSurvivorSquadSummaryStatItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSurvivorSquadSummaryStatItem>();
	}
};
static_assert(alignof(UFortSurvivorSquadSummaryStatItem) == 0x000008, "Wrong alignment on UFortSurvivorSquadSummaryStatItem");
static_assert(sizeof(UFortSurvivorSquadSummaryStatItem) == 0x0002B0, "Wrong size on UFortSurvivorSquadSummaryStatItem");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, ImageSize) == 0x000290, "Member 'UFortSurvivorSquadSummaryStatItem::ImageSize' has a wrong offset!");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, Icon) == 0x000298, "Member 'UFortSurvivorSquadSummaryStatItem::Icon' has a wrong offset!");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, Value) == 0x0002A0, "Member 'UFortSurvivorSquadSummaryStatItem::Value' has a wrong offset!");
static_assert(offsetof(UFortSurvivorSquadSummaryStatItem, Name_0) == 0x0002A8, "Member 'UFortSurvivorSquadSummaryStatItem::Name_0' has a wrong offset!");

class UFortWorkerSetBonusIcon final : public UCommonUserWidget
{
public:
	struct FGameplayTag                           GameplayTag;
	EFortBrushSize                                ImageSize;
	uint8                                         Pad_295[0x3];
	class UImage*                                 Icon;

public:
	void HandleDifferentGameplayTagSetBP();
	void SetGameplayTag(const struct FGameplayTag& InGameplayTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortWorkerSetBonusIcon">();
	}
	static class UFortWorkerSetBonusIcon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortWorkerSetBonusIcon>();
	}
};
static_assert(alignof(UFortWorkerSetBonusIcon) == 0x000008, "Wrong alignment on UFortWorkerSetBonusIcon");
static_assert(sizeof(UFortWorkerSetBonusIcon) == 0x0002A0, "Wrong size on UFortWorkerSetBonusIcon");
static_assert(offsetof(UFortWorkerSetBonusIcon, GameplayTag) == 0x000290, "Member 'UFortWorkerSetBonusIcon::GameplayTag' has a wrong offset!");
static_assert(offsetof(UFortWorkerSetBonusIcon, ImageSize) == 0x000294, "Member 'UFortWorkerSetBonusIcon::ImageSize' has a wrong offset!");
static_assert(offsetof(UFortWorkerSetBonusIcon, Icon) == 0x000298, "Member 'UFortWorkerSetBonusIcon::Icon' has a wrong offset!");

class UFortStatsOverviewDetailsBase final : public UCommonUserWidget
{
public:
	TArray<class UFortAttributeListItem_NUI*>     OverviewStats;
	class UFortAttributeList_NUI*                 DetailedStats;
	uint8                                         Pad_2A8[0x20];

public:
	void ListenForChanges(bool bListen);
	void RequestStatsUpdate();

	struct FUniqueNetIdRepl GetLocalPlayerId() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStatsOverviewDetailsBase">();
	}
	static class UFortStatsOverviewDetailsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStatsOverviewDetailsBase>();
	}
};
static_assert(alignof(UFortStatsOverviewDetailsBase) == 0x000008, "Wrong alignment on UFortStatsOverviewDetailsBase");
static_assert(sizeof(UFortStatsOverviewDetailsBase) == 0x0002C8, "Wrong size on UFortStatsOverviewDetailsBase");
static_assert(offsetof(UFortStatsOverviewDetailsBase, OverviewStats) == 0x000290, "Member 'UFortStatsOverviewDetailsBase::OverviewStats' has a wrong offset!");
static_assert(offsetof(UFortStatsOverviewDetailsBase, DetailedStats) == 0x0002A0, "Member 'UFortStatsOverviewDetailsBase::DetailedStats' has a wrong offset!");

class UFortLlamaStoreData final : public UPrimaryDataAsset
{
public:
	TArray<class FText>                           RandomLoadingTexts;
	class FName                                   NotEnoughCurrencyDialogCloseAction;
	uint8                                         Pad_44[0x4];
	TSubclassOf<class UFortStoreFrontOfferDetailsWidgetBase> InspectWidgetClass;
	float                                         ShowOfferDelay;
	uint8                                         Pad_54[0x4];
	TSubclassOf<class UCommonActivatablePanelLegacy> StoreOpeningCardPackClass;
	TSubclassOf<class UFortOpenCardPackModal>     UnopenedCardpacksModalClass;
	TSubclassOf<class UFortOpenCardPackModal_Legacy> UnopenedCardpacksModalClass_Legacy;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaStoreData">();
	}
	static class UFortLlamaStoreData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaStoreData>();
	}
};
static_assert(alignof(UFortLlamaStoreData) == 0x000008, "Wrong alignment on UFortLlamaStoreData");
static_assert(sizeof(UFortLlamaStoreData) == 0x000070, "Wrong size on UFortLlamaStoreData");
static_assert(offsetof(UFortLlamaStoreData, RandomLoadingTexts) == 0x000030, "Member 'UFortLlamaStoreData::RandomLoadingTexts' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreData, NotEnoughCurrencyDialogCloseAction) == 0x000040, "Member 'UFortLlamaStoreData::NotEnoughCurrencyDialogCloseAction' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreData, InspectWidgetClass) == 0x000048, "Member 'UFortLlamaStoreData::InspectWidgetClass' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreData, ShowOfferDelay) == 0x000050, "Member 'UFortLlamaStoreData::ShowOfferDelay' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreData, StoreOpeningCardPackClass) == 0x000058, "Member 'UFortLlamaStoreData::StoreOpeningCardPackClass' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreData, UnopenedCardpacksModalClass) == 0x000060, "Member 'UFortLlamaStoreData::UnopenedCardpacksModalClass' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreData, UnopenedCardpacksModalClass_Legacy) == 0x000068, "Member 'UFortLlamaStoreData::UnopenedCardpacksModalClass_Legacy' has a wrong offset!");

class UFortLlamaStoreBase final : public UFortDirectAcquisitionWidgetBase
{
public:
	TArray<struct FOfferGroup>                    OfferCategoriesToDisplay;
	struct FDataTableRowHandle                    TencentDetailsActionData;
	struct FDataTableRowHandle                    AddVBucksActionData;
	bool                                          bShouldShowAddVBucksAction;
	uint8                                         Pad_4B9[0x7];
	class UDynamicEntryBox*                       OfferEntryBox;
	class UCommonButtonGroupBase*                 OfferButtonGroup;
	class UFortLlamaStoreDetailsBase*             OfferDetails;
	class UFortLlamaStoreData*                    StoreData;
	class UCommonButtonBase*                      Button_UnopenedLlamas;
	class UFortLlamaStoreOfferInfo*               PendingPurchaseOffer;
	class UCommonActivatablePanelLegacy*          StoreOpeningCardPack;
	bool                                          bHideSoldOffers;
	uint8                                         Pad_4F9[0x2F];

public:
	void CreateTencentPuchaseOpenModal();
	void HandleAddVBucks();
	void HandleTencentDetails();
	void OnStorePurchaseCompleted();
	void OnStoreStateChanged(EFortStoreState NewStoreState);
	void SetupFocus();
	void SwapToCardEnterState();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaStoreBase">();
	}
	static class UFortLlamaStoreBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaStoreBase>();
	}
};
static_assert(alignof(UFortLlamaStoreBase) == 0x000008, "Wrong alignment on UFortLlamaStoreBase");
static_assert(sizeof(UFortLlamaStoreBase) == 0x000528, "Wrong size on UFortLlamaStoreBase");
static_assert(offsetof(UFortLlamaStoreBase, OfferCategoriesToDisplay) == 0x000488, "Member 'UFortLlamaStoreBase::OfferCategoriesToDisplay' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, TencentDetailsActionData) == 0x000498, "Member 'UFortLlamaStoreBase::TencentDetailsActionData' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, AddVBucksActionData) == 0x0004A8, "Member 'UFortLlamaStoreBase::AddVBucksActionData' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, bShouldShowAddVBucksAction) == 0x0004B8, "Member 'UFortLlamaStoreBase::bShouldShowAddVBucksAction' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, OfferEntryBox) == 0x0004C0, "Member 'UFortLlamaStoreBase::OfferEntryBox' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, OfferButtonGroup) == 0x0004C8, "Member 'UFortLlamaStoreBase::OfferButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, OfferDetails) == 0x0004D0, "Member 'UFortLlamaStoreBase::OfferDetails' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, StoreData) == 0x0004D8, "Member 'UFortLlamaStoreBase::StoreData' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, Button_UnopenedLlamas) == 0x0004E0, "Member 'UFortLlamaStoreBase::Button_UnopenedLlamas' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, PendingPurchaseOffer) == 0x0004E8, "Member 'UFortLlamaStoreBase::PendingPurchaseOffer' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, StoreOpeningCardPack) == 0x0004F0, "Member 'UFortLlamaStoreBase::StoreOpeningCardPack' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase, bHideSoldOffers) == 0x0004F8, "Member 'UFortLlamaStoreBase::bHideSoldOffers' has a wrong offset!");

class UFortLlamaStoreBase_Legacy final : public UFortDirectAcquisitionWidgetBase_Legacy
{
public:
	TArray<struct FOfferGroup>                    OfferCategoriesToDisplay;
	class UDynamicEntryBox*                       OfferEntryBox;
	class UCommonButtonGroupLegacy*               OfferButtonGroup;
	class UFortLlamaStoreDetailsBase*             OfferDetails;
	class UFortLlamaStoreData*                    StoreData;
	class UCommonButtonLegacy*                    Button_UnopenedLlamas;
	class UFortLlamaStoreOfferInfo*               PendingPurchaseOffer;
	class UCommonActivatablePanelLegacy*          StoreOpeningCardPack;
	bool                                          bHideSoldOffers;
	uint8                                         Pad_641[0x2F];

public:
	void CreateTencentPuchaseOpenModal();
	void OnStorePurchaseCompleted();
	void OnStoreStateChanged(EFortStoreState NewStoreState);
	void SetupFocus();
	void SwapToCardEnterState();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaStoreBase_Legacy">();
	}
	static class UFortLlamaStoreBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaStoreBase_Legacy>();
	}
};
static_assert(alignof(UFortLlamaStoreBase_Legacy) == 0x000008, "Wrong alignment on UFortLlamaStoreBase_Legacy");
static_assert(sizeof(UFortLlamaStoreBase_Legacy) == 0x000670, "Wrong size on UFortLlamaStoreBase_Legacy");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, OfferCategoriesToDisplay) == 0x0005F8, "Member 'UFortLlamaStoreBase_Legacy::OfferCategoriesToDisplay' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, OfferEntryBox) == 0x000608, "Member 'UFortLlamaStoreBase_Legacy::OfferEntryBox' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, OfferButtonGroup) == 0x000610, "Member 'UFortLlamaStoreBase_Legacy::OfferButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, OfferDetails) == 0x000618, "Member 'UFortLlamaStoreBase_Legacy::OfferDetails' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, StoreData) == 0x000620, "Member 'UFortLlamaStoreBase_Legacy::StoreData' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, Button_UnopenedLlamas) == 0x000628, "Member 'UFortLlamaStoreBase_Legacy::Button_UnopenedLlamas' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, PendingPurchaseOffer) == 0x000630, "Member 'UFortLlamaStoreBase_Legacy::PendingPurchaseOffer' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, StoreOpeningCardPack) == 0x000638, "Member 'UFortLlamaStoreBase_Legacy::StoreOpeningCardPack' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreBase_Legacy, bHideSoldOffers) == 0x000640, "Member 'UFortLlamaStoreBase_Legacy::bHideSoldOffers' has a wrong offset!");

class UFortLlamaStoreDetailsBase final : public UCommonUserWidget
{
public:
	class UFortStoreFrontOfferInfo*               OfferInfo;
	class UCommonTileView*                        ItemTileView;
	uint8                                         Pad_2A0[0x10];

public:
	void OnOfferInfoChanged(int32 CurrentOfferRarity);
	void SetScrollWidget();
	void StartUpgradingToGold();
	void StartUpgradingToSilver();

	int32 GetChoiceItemCount() const;
	int32 GetNewItemCount() const;
	int32 GetNotInCollectionBookCount() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaStoreDetailsBase">();
	}
	static class UFortLlamaStoreDetailsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaStoreDetailsBase>();
	}
};
static_assert(alignof(UFortLlamaStoreDetailsBase) == 0x000008, "Wrong alignment on UFortLlamaStoreDetailsBase");
static_assert(sizeof(UFortLlamaStoreDetailsBase) == 0x0002B0, "Wrong size on UFortLlamaStoreDetailsBase");
static_assert(offsetof(UFortLlamaStoreDetailsBase, OfferInfo) == 0x000290, "Member 'UFortLlamaStoreDetailsBase::OfferInfo' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreDetailsBase, ItemTileView) == 0x000298, "Member 'UFortLlamaStoreDetailsBase::ItemTileView' has a wrong offset!");

class UFortLlamaStoreInspectionScreen final : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	class UCommonTileView*                        GrantedItemTileView;
	bool                                          bIsInChoiceViewMode;
	uint8                                         Pad_7E1[0x7];

public:
	EInputActionState GetInspectChoiceInputState() const;
	class UFortCardPackItem* GetSelectedCardPack() const;
	bool IsItemChoicePack(class UObject* ItemToCheck) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLlamaStoreInspectionScreen">();
	}
	static class UFortLlamaStoreInspectionScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLlamaStoreInspectionScreen>();
	}
};
static_assert(alignof(UFortLlamaStoreInspectionScreen) == 0x000008, "Wrong alignment on UFortLlamaStoreInspectionScreen");
static_assert(sizeof(UFortLlamaStoreInspectionScreen) == 0x0007E8, "Wrong size on UFortLlamaStoreInspectionScreen");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, GrantedItemTileView) == 0x0007D8, "Member 'UFortLlamaStoreInspectionScreen::GrantedItemTileView' has a wrong offset!");
static_assert(offsetof(UFortLlamaStoreInspectionScreen, bIsInChoiceViewMode) == 0x0007E0, "Member 'UFortLlamaStoreInspectionScreen::bIsInChoiceViewMode' has a wrong offset!");

class UFortOpenCardPackModal final : public UFortActivatablePanel
{
public:
	class UCommonListView*                        CardPackList;
	class UCommonButtonLegacy*                    OpenAllButton;
	class UCommonButtonLegacy*                    CancelButton;
	TMulticastInlineDelegate<void(int32 PackIndex)> BPOnRequestOpenCardPack;
	uint8                                         Pad_540[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortOpenCardPackModal">();
	}
	static class UFortOpenCardPackModal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortOpenCardPackModal>();
	}
};
static_assert(alignof(UFortOpenCardPackModal) == 0x000008, "Wrong alignment on UFortOpenCardPackModal");
static_assert(sizeof(UFortOpenCardPackModal) == 0x000558, "Wrong size on UFortOpenCardPackModal");
static_assert(offsetof(UFortOpenCardPackModal, CardPackList) == 0x000518, "Member 'UFortOpenCardPackModal::CardPackList' has a wrong offset!");
static_assert(offsetof(UFortOpenCardPackModal, OpenAllButton) == 0x000520, "Member 'UFortOpenCardPackModal::OpenAllButton' has a wrong offset!");
static_assert(offsetof(UFortOpenCardPackModal, CancelButton) == 0x000528, "Member 'UFortOpenCardPackModal::CancelButton' has a wrong offset!");
static_assert(offsetof(UFortOpenCardPackModal, BPOnRequestOpenCardPack) == 0x000530, "Member 'UFortOpenCardPackModal::BPOnRequestOpenCardPack' has a wrong offset!");

class UFortOpenCardPackModal_Legacy final : public UFortActivatablePanel
{
public:
	class UCommonListView*                        CardPackList;
	class UCommonButtonLegacy*                    OpenAllButton;
	class UCommonButtonLegacy*                    CancelButton;
	TMulticastInlineDelegate<void(int32 PackIndex)> BPOnRequestOpenCardPack;
	uint8                                         Pad_540[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortOpenCardPackModal_Legacy">();
	}
	static class UFortOpenCardPackModal_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortOpenCardPackModal_Legacy>();
	}
};
static_assert(alignof(UFortOpenCardPackModal_Legacy) == 0x000008, "Wrong alignment on UFortOpenCardPackModal_Legacy");
static_assert(sizeof(UFortOpenCardPackModal_Legacy) == 0x000558, "Wrong size on UFortOpenCardPackModal_Legacy");
static_assert(offsetof(UFortOpenCardPackModal_Legacy, CardPackList) == 0x000518, "Member 'UFortOpenCardPackModal_Legacy::CardPackList' has a wrong offset!");
static_assert(offsetof(UFortOpenCardPackModal_Legacy, OpenAllButton) == 0x000520, "Member 'UFortOpenCardPackModal_Legacy::OpenAllButton' has a wrong offset!");
static_assert(offsetof(UFortOpenCardPackModal_Legacy, CancelButton) == 0x000528, "Member 'UFortOpenCardPackModal_Legacy::CancelButton' has a wrong offset!");
static_assert(offsetof(UFortOpenCardPackModal_Legacy, BPOnRequestOpenCardPack) == 0x000530, "Member 'UFortOpenCardPackModal_Legacy::BPOnRequestOpenCardPack' has a wrong offset!");

class UStWHUD final : public UFortUIStateWidgetBase
{
public:
	class UFortPickerData*                        PickerData;
	TSoftClassPtr<class UClass>                   EmotePickerClass;
	uint8                                         Pad_3F0[0x8];
	TSoftClassPtr<class UClass>                   ManagementTabsScreenClass;
	TSoftClassPtr<class UClass>                   TopBarClass;
	TSoftClassPtr<class UClass>                   MissionActivationWidgetClass;
	TSoftClassPtr<class UClass>                   PostGameScreenClass;
	TMulticastInlineDelegate<void(class UCommonActivatableWidget* NewTopDisplayedWidget)> OnSTWHUDMenuStackChanged;
	int32                                         ReticleExtensionSize;
	uint8                                         Pad_4AC[0x4];
	class UCommonActivatableWidget*               TitleBar;
	class UOverlay*                               IndicatorContent;
	class UFortUINavigationManager*               NavigationManager;
	uint8                                         Pad_4C8[0x18];
	class UFortWeaponReticleExtensionWidgetBase*  CurrentCustomReticleExtension;
	TArray<class UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions;

public:
	void HandleCursorModeChanged(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget);
	void HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept);
	void NativeHandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StWHUD">();
	}
	static class UStWHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStWHUD>();
	}
};
static_assert(alignof(UStWHUD) == 0x000008, "Wrong alignment on UStWHUD");
static_assert(sizeof(UStWHUD) == 0x0004F8, "Wrong size on UStWHUD");
static_assert(offsetof(UStWHUD, PickerData) == 0x0003C0, "Member 'UStWHUD::PickerData' has a wrong offset!");
static_assert(offsetof(UStWHUD, EmotePickerClass) == 0x0003C8, "Member 'UStWHUD::EmotePickerClass' has a wrong offset!");
static_assert(offsetof(UStWHUD, ManagementTabsScreenClass) == 0x0003F8, "Member 'UStWHUD::ManagementTabsScreenClass' has a wrong offset!");
static_assert(offsetof(UStWHUD, TopBarClass) == 0x000420, "Member 'UStWHUD::TopBarClass' has a wrong offset!");
static_assert(offsetof(UStWHUD, MissionActivationWidgetClass) == 0x000448, "Member 'UStWHUD::MissionActivationWidgetClass' has a wrong offset!");
static_assert(offsetof(UStWHUD, PostGameScreenClass) == 0x000470, "Member 'UStWHUD::PostGameScreenClass' has a wrong offset!");
static_assert(offsetof(UStWHUD, OnSTWHUDMenuStackChanged) == 0x000498, "Member 'UStWHUD::OnSTWHUDMenuStackChanged' has a wrong offset!");
static_assert(offsetof(UStWHUD, ReticleExtensionSize) == 0x0004A8, "Member 'UStWHUD::ReticleExtensionSize' has a wrong offset!");
static_assert(offsetof(UStWHUD, TitleBar) == 0x0004B0, "Member 'UStWHUD::TitleBar' has a wrong offset!");
static_assert(offsetof(UStWHUD, IndicatorContent) == 0x0004B8, "Member 'UStWHUD::IndicatorContent' has a wrong offset!");
static_assert(offsetof(UStWHUD, NavigationManager) == 0x0004C0, "Member 'UStWHUD::NavigationManager' has a wrong offset!");
static_assert(offsetof(UStWHUD, CurrentCustomReticleExtension) == 0x0004E0, "Member 'UStWHUD::CurrentCustomReticleExtension' has a wrong offset!");
static_assert(offsetof(UStWHUD, RecentReticleExtensions) == 0x0004E8, "Member 'UStWHUD::RecentReticleExtensions' has a wrong offset!");

class UFortTheaterSelect final : public UCommonActivatablePanelLegacy
{
public:
	uint8                                         Pad_4E0[0x10];
	class UOverlay*                               OverlayMain;
	uint8                                         Pad_4F8[0x10];
	class UFortQuestItemDefinition*               DefaultRequiredCompletedQuest;

public:
	void OnNavigationLeft();
	void OnNavigationRight();

	bool GetTheaterRecommendedRatingRange(const class FString& UniqueId, int32* Minimum, int32* Maximum) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortTheaterSelect">();
	}
	static class UFortTheaterSelect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTheaterSelect>();
	}
};
static_assert(alignof(UFortTheaterSelect) == 0x000008, "Wrong alignment on UFortTheaterSelect");
static_assert(sizeof(UFortTheaterSelect) == 0x000510, "Wrong size on UFortTheaterSelect");
static_assert(offsetof(UFortTheaterSelect, OverlayMain) == 0x0004F0, "Member 'UFortTheaterSelect::OverlayMain' has a wrong offset!");
static_assert(offsetof(UFortTheaterSelect, DefaultRequiredCompletedQuest) == 0x000508, "Member 'UFortTheaterSelect::DefaultRequiredCompletedQuest' has a wrong offset!");

class UFortHomebaseNodeItemTooltip final : public UFortItemTooltip
{
public:
	uint8                                         Pad_50[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHomebaseNodeItemTooltip">();
	}
	static class UFortHomebaseNodeItemTooltip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHomebaseNodeItemTooltip>();
	}
};
static_assert(alignof(UFortHomebaseNodeItemTooltip) == 0x000008, "Wrong alignment on UFortHomebaseNodeItemTooltip");
static_assert(sizeof(UFortHomebaseNodeItemTooltip) == 0x000070, "Wrong size on UFortHomebaseNodeItemTooltip");

class UFortUpgradeDetailsBase final : public UCommonUserWidget
{
public:
	class UMediaPlayer*                           VideoPlayer;
	class UFortUpgradeInfo*                       UpgradeInfo;
	uint8                                         Pad_2A0[0x30];

public:
	void OnPurchaseComplete();
	void OnScreenActive();
	void OnShowIcon(class UTexture2D* Icon);
	void OnUpgradeToDetailChanged();
	void RequestPurchaseNode();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeDetailsBase">();
	}
	static class UFortUpgradeDetailsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeDetailsBase>();
	}
};
static_assert(alignof(UFortUpgradeDetailsBase) == 0x000008, "Wrong alignment on UFortUpgradeDetailsBase");
static_assert(sizeof(UFortUpgradeDetailsBase) == 0x0002D0, "Wrong size on UFortUpgradeDetailsBase");
static_assert(offsetof(UFortUpgradeDetailsBase, VideoPlayer) == 0x000290, "Member 'UFortUpgradeDetailsBase::VideoPlayer' has a wrong offset!");
static_assert(offsetof(UFortUpgradeDetailsBase, UpgradeInfo) == 0x000298, "Member 'UFortUpgradeDetailsBase::UpgradeInfo' has a wrong offset!");

class UFortUpgradeInfo final : public UObject
{
public:
	uint8                                         Pad_28[0x20];
	class UFortHomebaseNodeItemDefinition*        NodeItemDef;
	uint8                                         Pad_50[0x60];

public:
	void BackwardPreview();
	void ForwardPreview();

	bool CanAffordUpgrade() const;
	bool CanPreview() const;
	int32 GetCost() const;
	int32 GetCurrentLevel() const;
	class FText GetDescription() const;
	bool GetDisplayAttributes(TArray<struct FFortDisplayAttribute>* OutDisplayAttributes) const;
	TSoftObjectPtr<class UTexture2D> GetIcon(EUpgradeInfoImageSize ImageSize) const;
	class FText GetItemName() const;
	int32 GetMaxLevel() const;
	int32 GetNextLevel() const;
	class FText GetNextLevelDescription() const;
	class FText GetNextLevelTitle() const;
	class FText GetTitle() const;
	int32 GetUpgradeUnlockLevel() const;
	class UMediaSource* GetVideo() const;
	bool IsPreviewing() const;
	bool IsUpgradeUnlocked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeInfo">();
	}
	static class UFortUpgradeInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeInfo>();
	}
};
static_assert(alignof(UFortUpgradeInfo) == 0x000008, "Wrong alignment on UFortUpgradeInfo");
static_assert(sizeof(UFortUpgradeInfo) == 0x0000B0, "Wrong size on UFortUpgradeInfo");
static_assert(offsetof(UFortUpgradeInfo, NodeItemDef) == 0x000048, "Member 'UFortUpgradeInfo::NodeItemDef' has a wrong offset!");

class UFortUpgradeScreenBase final : public UCommonActivatablePanelLegacy
{
public:
	class UFortTabListWidgetBase*                 UpgradesTabSelector;
	class UCommonTileView*                        UpgradesTileView;
	class UCommonLoadGuard*                       UpgradeTileViewLoadGuard;
	class UFortUpgradeDetailsBase*                Details;
	TMap<class FName, EHomebaseNodeType>          TabToNodeTypeMap;
	class UFortItemDefinition*                    UpgradesRespecToken;
	uint8                                         Pad_558[0x50];

public:
	void HandleTabSelected(class FName TabId);
	void OnPurchaseNodeComplete();
	void OnUpgradeInfoChanged();
	void OnUseUpgradesRespecTokenComplete();
	void RefreshFocus();
	void TogglePreview();
	void UseUpgradesRespecToken();

	bool AreUpgradesRespecTokensAvailable() const;
	bool CanPreview() const;
	int32 GetUpgradesRespecTokenCount() const;
	bool IsPreviewing() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeScreenBase">();
	}
	static class UFortUpgradeScreenBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeScreenBase>();
	}
};
static_assert(alignof(UFortUpgradeScreenBase) == 0x000008, "Wrong alignment on UFortUpgradeScreenBase");
static_assert(sizeof(UFortUpgradeScreenBase) == 0x0005A8, "Wrong size on UFortUpgradeScreenBase");
static_assert(offsetof(UFortUpgradeScreenBase, UpgradesTabSelector) == 0x0004E0, "Member 'UFortUpgradeScreenBase::UpgradesTabSelector' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase, UpgradesTileView) == 0x0004E8, "Member 'UFortUpgradeScreenBase::UpgradesTileView' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase, UpgradeTileViewLoadGuard) == 0x0004F0, "Member 'UFortUpgradeScreenBase::UpgradeTileViewLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase, Details) == 0x0004F8, "Member 'UFortUpgradeScreenBase::Details' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase, TabToNodeTypeMap) == 0x000500, "Member 'UFortUpgradeScreenBase::TabToNodeTypeMap' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase, UpgradesRespecToken) == 0x000550, "Member 'UFortUpgradeScreenBase::UpgradesRespecToken' has a wrong offset!");

class UFortUpgradeScreenBase_Legacy final : public UCommonActivatablePanelLegacy
{
public:
	class UFortTabListWidgetBase_Legacy*          UpgradesTabSelector;
	class UCommonTileView*                        UpgradesTileView;
	class UCommonLoadGuard*                       UpgradeTileViewLoadGuard;
	class UFortUpgradeDetailsBase*                Details;
	TMap<class FName, EHomebaseNodeType>          TabToNodeTypeMap;
	class UFortItemDefinition*                    UpgradesRespecToken;
	uint8                                         Pad_558[0x50];

public:
	void HandleTabSelected(class FName TabId);
	void OnPurchaseNodeComplete();
	void OnUpgradeInfoChanged();
	void OnUseUpgradesRespecTokenComplete();
	void RefreshFocus();
	void TogglePreview();
	void UseUpgradesRespecToken();

	bool AreUpgradesRespecTokensAvailable() const;
	bool CanPreview() const;
	int32 GetUpgradesRespecTokenCount() const;
	bool IsPreviewing() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeScreenBase_Legacy">();
	}
	static class UFortUpgradeScreenBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeScreenBase_Legacy>();
	}
};
static_assert(alignof(UFortUpgradeScreenBase_Legacy) == 0x000008, "Wrong alignment on UFortUpgradeScreenBase_Legacy");
static_assert(sizeof(UFortUpgradeScreenBase_Legacy) == 0x0005A8, "Wrong size on UFortUpgradeScreenBase_Legacy");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradesTabSelector) == 0x0004E0, "Member 'UFortUpgradeScreenBase_Legacy::UpgradesTabSelector' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradesTileView) == 0x0004E8, "Member 'UFortUpgradeScreenBase_Legacy::UpgradesTileView' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradeTileViewLoadGuard) == 0x0004F0, "Member 'UFortUpgradeScreenBase_Legacy::UpgradeTileViewLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, Details) == 0x0004F8, "Member 'UFortUpgradeScreenBase_Legacy::Details' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, TabToNodeTypeMap) == 0x000500, "Member 'UFortUpgradeScreenBase_Legacy::TabToNodeTypeMap' has a wrong offset!");
static_assert(offsetof(UFortUpgradeScreenBase_Legacy, UpgradesRespecToken) == 0x000550, "Member 'UFortUpgradeScreenBase_Legacy::UpgradesRespecToken' has a wrong offset!");

class UFortUpgradeTileBase final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UFortUpgradeInfo*                       UpgradeInfo;

public:
	void OnDataRefresh(bool bUpgrade);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeTileBase">();
	}
	static class UFortUpgradeTileBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeTileBase>();
	}
};
static_assert(alignof(UFortUpgradeTileBase) == 0x000010, "Wrong alignment on UFortUpgradeTileBase");
static_assert(sizeof(UFortUpgradeTileBase) == 0x001440, "Wrong size on UFortUpgradeTileBase");
static_assert(offsetof(UFortUpgradeTileBase, UpgradeInfo) == 0x001438, "Member 'UFortUpgradeTileBase::UpgradeInfo' has a wrong offset!");

class UFortUpgradeTileBase_Legacy final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UFortUpgradeInfo*                       UpgradeInfo;

public:
	void OnDataRefresh(bool bUpgrade);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortUpgradeTileBase_Legacy">();
	}
	static class UFortUpgradeTileBase_Legacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeTileBase_Legacy>();
	}
};
static_assert(alignof(UFortUpgradeTileBase_Legacy) == 0x000010, "Wrong alignment on UFortUpgradeTileBase_Legacy");
static_assert(sizeof(UFortUpgradeTileBase_Legacy) == 0x001440, "Wrong size on UFortUpgradeTileBase_Legacy");
static_assert(offsetof(UFortUpgradeTileBase_Legacy, UpgradeInfo) == 0x001438, "Member 'UFortUpgradeTileBase_Legacy::UpgradeInfo' has a wrong offset!");

}
