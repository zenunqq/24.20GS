#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CommonUI_classes.hpp"

namespace SDK
{

class UFortPlayerAugmentInventoryInfoWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	class FText                                   RarityTextFormat;
	class UCommonTextBlock*                       Text_ItemName;
	class UCommonTextBlock*                       Text_ItemRarity;
	class UCommonTextBlock*                       Text_ItemCategory;
	class UFortItemCategoryIndicator*             ItemCategoryIndicator;
	class UCommonTextBlock*                       Text_ItemDescription;
	class UFortSocialAvatarIcon*                  Icon_LenderAvatarIcon;
	class UFortLazyImage*                         Image_LenderSquadColor;
	class UCommonTextBlock*                       Text_BorrowingText;

public:
	void OnItemNewOrBorrowedSet(const bool bIsNew, const bool bIsBorrowed);
	void OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentInventoryInfoWidget">();
	}
	static class UFortPlayerAugmentInventoryInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentInventoryInfoWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentInventoryInfoWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentInventoryInfoWidget");
static_assert(sizeof(UFortPlayerAugmentInventoryInfoWidget) == 0x000408, "Wrong size on UFortPlayerAugmentInventoryInfoWidget");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, RarityTextFormat) == 0x0003B0, "Member 'UFortPlayerAugmentInventoryInfoWidget::RarityTextFormat' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemName) == 0x0003C8, "Member 'UFortPlayerAugmentInventoryInfoWidget::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemRarity) == 0x0003D0, "Member 'UFortPlayerAugmentInventoryInfoWidget::Text_ItemRarity' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemCategory) == 0x0003D8, "Member 'UFortPlayerAugmentInventoryInfoWidget::Text_ItemCategory' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, ItemCategoryIndicator) == 0x0003E0, "Member 'UFortPlayerAugmentInventoryInfoWidget::ItemCategoryIndicator' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_ItemDescription) == 0x0003E8, "Member 'UFortPlayerAugmentInventoryInfoWidget::Text_ItemDescription' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Icon_LenderAvatarIcon) == 0x0003F0, "Member 'UFortPlayerAugmentInventoryInfoWidget::Icon_LenderAvatarIcon' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Image_LenderSquadColor) == 0x0003F8, "Member 'UFortPlayerAugmentInventoryInfoWidget::Image_LenderSquadColor' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryInfoWidget, Text_BorrowingText) == 0x000400, "Member 'UFortPlayerAugmentInventoryInfoWidget::Text_BorrowingText' has a wrong offset!");

class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker final : public UFortMobileButtonBehaviorComponent_IconPicker
{
public:
	class UPaperSprite*                           ListViewSprite;

public:
	void OnAugmentToolViewSwap(const bool bIsInInventoryView);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileButtonBehaviorComponent_AugmentsListIconPicker">();
	}
	static class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileButtonBehaviorComponent_AugmentsListIconPicker>();
	}
};
static_assert(alignof(UFortMobileButtonBehaviorComponent_AugmentsListIconPicker) == 0x000008, "Wrong alignment on UFortMobileButtonBehaviorComponent_AugmentsListIconPicker");
static_assert(sizeof(UFortMobileButtonBehaviorComponent_AugmentsListIconPicker) == 0x000050, "Wrong size on UFortMobileButtonBehaviorComponent_AugmentsListIconPicker");
static_assert(offsetof(UFortMobileButtonBehaviorComponent_AugmentsListIconPicker, ListViewSprite) == 0x000048, "Member 'UFortMobileButtonBehaviorComponent_AugmentsListIconPicker::ListViewSprite' has a wrong offset!");

class UFortMobileButtonBehaviorComponent_AugmentsListVisibility final : public UFortMobileButtonBehaviorComponent_Visibility
{
public:
	uint8                                         Pad_48[0x8];

public:
	void HandleAugmentToolOpenedStatusChanged(const bool bIsOpened, const bool bInIsInventoryView);
	void HandleAugmentToolViewSwap(const bool bInIsInventoryView);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileButtonBehaviorComponent_AugmentsListVisibility">();
	}
	static class UFortMobileButtonBehaviorComponent_AugmentsListVisibility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileButtonBehaviorComponent_AugmentsListVisibility>();
	}
};
static_assert(alignof(UFortMobileButtonBehaviorComponent_AugmentsListVisibility) == 0x000008, "Wrong alignment on UFortMobileButtonBehaviorComponent_AugmentsListVisibility");
static_assert(sizeof(UFortMobileButtonBehaviorComponent_AugmentsListVisibility) == 0x000050, "Wrong size on UFortMobileButtonBehaviorComponent_AugmentsListVisibility");

class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase
{
public:
	struct FScalableFloat                         AugmentsEnabledViaHotfix;
	TMap<struct FGameplayTag, TSoftObjectPtr<class UObject>> TagToImageMap;
	class UCommonTextBlock*                       Text_CategoryTitle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentCollectionScreen">();
	}
	static class UFortPlayerAugmentCollectionScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentCollectionScreen>();
	}
};
static_assert(alignof(UFortPlayerAugmentCollectionScreen) == 0x000008, "Wrong alignment on UFortPlayerAugmentCollectionScreen");
static_assert(sizeof(UFortPlayerAugmentCollectionScreen) == 0x0006A8, "Wrong size on UFortPlayerAugmentCollectionScreen");
static_assert(offsetof(UFortPlayerAugmentCollectionScreen, AugmentsEnabledViaHotfix) == 0x000628, "Member 'UFortPlayerAugmentCollectionScreen::AugmentsEnabledViaHotfix' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionScreen, TagToImageMap) == 0x000650, "Member 'UFortPlayerAugmentCollectionScreen::TagToImageMap' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionScreen, Text_CategoryTitle) == 0x0006A0, "Member 'UFortPlayerAugmentCollectionScreen::Text_CategoryTitle' has a wrong offset!");

class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension
{
public:
	class UPaperSprite*                           IconOverrideSprite;
	struct FGameplayTag                           IconOverrideTag;
	uint8                                         Pad_7C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionBBE_AugmentShoot">();
	}
	static class UFortMobileActionBBE_AugmentShoot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionBBE_AugmentShoot>();
	}
};
static_assert(alignof(UFortMobileActionBBE_AugmentShoot) == 0x000008, "Wrong alignment on UFortMobileActionBBE_AugmentShoot");
static_assert(sizeof(UFortMobileActionBBE_AugmentShoot) == 0x000080, "Wrong size on UFortMobileActionBBE_AugmentShoot");
static_assert(offsetof(UFortMobileActionBBE_AugmentShoot, IconOverrideSprite) == 0x000070, "Member 'UFortMobileActionBBE_AugmentShoot::IconOverrideSprite' has a wrong offset!");
static_assert(offsetof(UFortMobileActionBBE_AugmentShoot, IconOverrideTag) == 0x000078, "Member 'UFortMobileActionBBE_AugmentShoot::IconOverrideTag' has a wrong offset!");

class UFortPlayerAugmentCollectionListEntry : public UAthenaCollectionListEntry
{
public:
	class UImage*                                 Image_Background;
	class FName                                   ParamName_ItemIcon;
	class FName                                   ParamName_IsDiscovered;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentCollectionListEntry">();
	}
	static class UFortPlayerAugmentCollectionListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentCollectionListEntry>();
	}
};
static_assert(alignof(UFortPlayerAugmentCollectionListEntry) == 0x000010, "Wrong alignment on UFortPlayerAugmentCollectionListEntry");
static_assert(sizeof(UFortPlayerAugmentCollectionListEntry) == 0x0014D0, "Wrong size on UFortPlayerAugmentCollectionListEntry");
static_assert(offsetof(UFortPlayerAugmentCollectionListEntry, Image_Background) == 0x0014C0, "Member 'UFortPlayerAugmentCollectionListEntry::Image_Background' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionListEntry, ParamName_ItemIcon) == 0x0014C8, "Member 'UFortPlayerAugmentCollectionListEntry::ParamName_ItemIcon' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionListEntry, ParamName_IsDiscovered) == 0x0014CC, "Member 'UFortPlayerAugmentCollectionListEntry::ParamName_IsDiscovered' has a wrong offset!");

class alignas(0x10) UFortPlayerAugmentSpecialAcquiredNotificationWidget final : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_2D0[0x60];
	struct FFortPrioritizedWidgetData             PrioritizationData;
	uint8                                         Pad_332[0x6];
	struct FGameplayTagContainer                  TargetGameplayTags;
	uint8                                         Pad_358[0x8];

public:
	void CloseWidget();
	void OnEventAdded();
	void OnStompedByOtherWidget();
	void OpenWidget(const class UFortPlayerAugmentItemDefinition* ItemDef);

	class FText ConstructEventDescription(const class UFortPlayerAugmentItemDefinition* ItemDef) const;
	bool HasMoreAugmentEvents() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentSpecialAcquiredNotificationWidget">();
	}
	static class UFortPlayerAugmentSpecialAcquiredNotificationWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentSpecialAcquiredNotificationWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentSpecialAcquiredNotificationWidget) == 0x000010, "Wrong alignment on UFortPlayerAugmentSpecialAcquiredNotificationWidget");
static_assert(sizeof(UFortPlayerAugmentSpecialAcquiredNotificationWidget) == 0x000360, "Wrong size on UFortPlayerAugmentSpecialAcquiredNotificationWidget");
static_assert(offsetof(UFortPlayerAugmentSpecialAcquiredNotificationWidget, PrioritizationData) == 0x000330, "Member 'UFortPlayerAugmentSpecialAcquiredNotificationWidget::PrioritizationData' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentSpecialAcquiredNotificationWidget, TargetGameplayTags) == 0x000338, "Member 'UFortPlayerAugmentSpecialAcquiredNotificationWidget::TargetGameplayTags' has a wrong offset!");

class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior
{
public:
	class UFortItemDefinition*                    RerollCurrency;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehavior_RerollAugments">();
	}
	static class UFortMobileActionButtonBehavior_RerollAugments* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehavior_RerollAugments>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehavior_RerollAugments) == 0x000008, "Wrong alignment on UFortMobileActionButtonBehavior_RerollAugments");
static_assert(sizeof(UFortMobileActionButtonBehavior_RerollAugments) == 0x000118, "Wrong size on UFortMobileActionButtonBehavior_RerollAugments");
static_assert(offsetof(UFortMobileActionButtonBehavior_RerollAugments, RerollCurrency) == 0x000110, "Member 'UFortMobileActionButtonBehavior_RerollAugments::RerollCurrency' has a wrong offset!");

class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement
{
public:
	TWeakObjectPtr<class UFortControllerComponent_AugmentGrantingSystem> AugmentControllerComponent;
	class UCommonButtonBase*                      Button_PlayerAugmentTimer;

public:
	void HandleAugmentSelectionMenuOpenedStatusChanged(const bool bIsOpened, const bool bInIsInventoryView);
	void HandlePlayerLandedAfterSkydive(class AFortPlayerControllerZone* FortPCZone);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobilePlayerAugmentTimer">();
	}
	static class UFortMobilePlayerAugmentTimer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobilePlayerAugmentTimer>();
	}
};
static_assert(alignof(UFortMobilePlayerAugmentTimer) == 0x000008, "Wrong alignment on UFortMobilePlayerAugmentTimer");
static_assert(sizeof(UFortMobilePlayerAugmentTimer) == 0x000308, "Wrong size on UFortMobilePlayerAugmentTimer");
static_assert(offsetof(UFortMobilePlayerAugmentTimer, AugmentControllerComponent) == 0x0002F8, "Member 'UFortMobilePlayerAugmentTimer::AugmentControllerComponent' has a wrong offset!");
static_assert(offsetof(UFortMobilePlayerAugmentTimer, Button_PlayerAugmentTimer) == 0x000300, "Member 'UFortMobilePlayerAugmentTimer::Button_PlayerAugmentTimer' has a wrong offset!");

class UFortPickupInteractOverrideComponent_Augments : public UFortPickupInteractOverrideComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPickupInteractOverrideComponent_Augments">();
	}
	static class UFortPickupInteractOverrideComponent_Augments* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPickupInteractOverrideComponent_Augments>();
	}
};
static_assert(alignof(UFortPickupInteractOverrideComponent_Augments) == 0x000008, "Wrong alignment on UFortPickupInteractOverrideComponent_Augments");
static_assert(sizeof(UFortPickupInteractOverrideComponent_Augments) == 0x0000C0, "Wrong size on UFortPickupInteractOverrideComponent_Augments");

class UFortPlayerAugmentCollectionScreenContainer : public UAthenaCollectionScreenContainer
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentCollectionScreenContainer">();
	}
	static class UFortPlayerAugmentCollectionScreenContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentCollectionScreenContainer>();
	}
};
static_assert(alignof(UFortPlayerAugmentCollectionScreenContainer) == 0x000008, "Wrong alignment on UFortPlayerAugmentCollectionScreenContainer");
static_assert(sizeof(UFortPlayerAugmentCollectionScreenContainer) == 0x000500, "Wrong size on UFortPlayerAugmentCollectionScreenContainer");

class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{
public:
	class FName                                   ParamName_Progress;
	uint8                                         Pad_474[0x4];
	class UCommonTextBlock*                       Text_ItemCategory;
	class UFortItemCategoryIndicator*             ItemCategoryIndicator;
	class UOverlay*                               Overlay_UndiscoveredText;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentCollectionScreenInfoOverlay">();
	}
	static class UFortPlayerAugmentCollectionScreenInfoOverlay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentCollectionScreenInfoOverlay>();
	}
};
static_assert(alignof(UFortPlayerAugmentCollectionScreenInfoOverlay) == 0x000008, "Wrong alignment on UFortPlayerAugmentCollectionScreenInfoOverlay");
static_assert(sizeof(UFortPlayerAugmentCollectionScreenInfoOverlay) == 0x000490, "Wrong size on UFortPlayerAugmentCollectionScreenInfoOverlay");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, ParamName_Progress) == 0x000470, "Member 'UFortPlayerAugmentCollectionScreenInfoOverlay::ParamName_Progress' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, Text_ItemCategory) == 0x000478, "Member 'UFortPlayerAugmentCollectionScreenInfoOverlay::Text_ItemCategory' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, ItemCategoryIndicator) == 0x000480, "Member 'UFortPlayerAugmentCollectionScreenInfoOverlay::ItemCategoryIndicator' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentCollectionScreenInfoOverlay, Overlay_UndiscoveredText) == 0x000488, "Member 'UFortPlayerAugmentCollectionScreenInfoOverlay::Overlay_UndiscoveredText' has a wrong offset!");

class UFortPlayerAugmentGranterWidget final : public UFortHUDElementWidget
{
public:
	TArray<class UFortPlayerAugmentItemDefinition*> AvailableAugmentItemDefinitions;
	class UWidget*                                Overlay_Reroll;

public:
	void HandleAugmentHighlighted(int32 HighlightedAugmentIndex);
	void HandleAugmentSelectionStarted(const int32 SelectedAugmentIndex);
	void HandleAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingAugmentInventory);
	void HandleAugmentSelectorToolViewSwapped(const bool bViewingAugmentsInventory);
	void HandleAvailableAugmentsForGrantingUpdated(class UFortControllerComponent_AugmentGrantingSystem* GrantingComponent);
	void HandleCanSelectAugmentChanged(bool bCanSelectAugment);
	void HandleRerollAugments();
	void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment);
	void HandleTimerUpdated(float TimeRemaining, float TimePercentage);
	void OnAugmentHighlighted(int32 HighlightedAugmentIndex);
	void OnAugmentScrollDownEvent();
	void OnAugmentScrollUpEvent();
	void OnAugmentSelectionStarted(const int32 SelectedAugmentIndex);
	void OnAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingAugmentInventory);
	void OnAugmentSelectorToolViewSwapped(const bool bViewingAugmentInventory);
	void OnCanSelectAugmentChanged(bool bCanSelectAugment);
	void OnInputTypeChanged(const ECommonInputType NewInputType);
	void OnPopulateAvailableAugmentsHUD(const TArray<class UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition);
	void OnRerollAugments();
	void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment);
	void OnTimerUpdated(float TimeRemaining, float TimePercentage);

	int32 GetPendingAugmentsToGrant() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentGranterWidget">();
	}
	static class UFortPlayerAugmentGranterWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentGranterWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentGranterWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentGranterWidget");
static_assert(sizeof(UFortPlayerAugmentGranterWidget) == 0x0002E8, "Wrong size on UFortPlayerAugmentGranterWidget");
static_assert(offsetof(UFortPlayerAugmentGranterWidget, AvailableAugmentItemDefinitions) == 0x0002D0, "Member 'UFortPlayerAugmentGranterWidget::AvailableAugmentItemDefinitions' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentGranterWidget, Overlay_Reroll) == 0x0002E0, "Member 'UFortPlayerAugmentGranterWidget::Overlay_Reroll' has a wrong offset!");

class UFortPlayerAugmentHUDQuickbarWidget final : public UCommonUserWidget
{
public:
	struct FGameplayTagContainer                  HiddenAugmentGameplayTags;
	struct FScalableFloat                         NumAugmentGrantRoundsForPlaylist;

public:
	void OnAugmentsUpdated(const TArray<class UFortPlayerAugmentItemDefinition*>& ActiveAugments);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentHUDQuickbarWidget">();
	}
	static class UFortPlayerAugmentHUDQuickbarWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentHUDQuickbarWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentHUDQuickbarWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentHUDQuickbarWidget");
static_assert(sizeof(UFortPlayerAugmentHUDQuickbarWidget) == 0x0002D8, "Wrong size on UFortPlayerAugmentHUDQuickbarWidget");
static_assert(offsetof(UFortPlayerAugmentHUDQuickbarWidget, HiddenAugmentGameplayTags) == 0x000290, "Member 'UFortPlayerAugmentHUDQuickbarWidget::HiddenAugmentGameplayTags' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentHUDQuickbarWidget, NumAugmentGrantRoundsForPlaylist) == 0x0002B0, "Member 'UFortPlayerAugmentHUDQuickbarWidget::NumAugmentGrantRoundsForPlaylist' has a wrong offset!");

class UFortPlayerAugmentHUDRerollWidget final : public UCommonUserWidget
{
public:
	class UCommonLazyImage*                       Image_CurrencyIcon;
	class UFortItemDefinition*                    RerollCurrency;
	int32                                         CachedNumFreeRerolls;
	class FName                                   RerollHoldMaterialParamName;
	uint8                                         Pad_2A8[0x8];
	class UImage*                                 Image_ProgressBar;
	uint8                                         Pad_2B8[0x8];

public:
	void EndRerollHoldProgress();
	void HandleFreeRerollsUpdated(const int32 NewNumFreeRerolls);
	void HandleRerollAugments();
	void OnFreeRerollsUpdated(const int32 NewNumFreeRerolls);
	void OnRerollAugments();
	void OnUpdateCurrency(const int32 OwnedCurrency, const int32 RerollCost);
	void StartRerollHoldProgress(const float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentHUDRerollWidget">();
	}
	static class UFortPlayerAugmentHUDRerollWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentHUDRerollWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentHUDRerollWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentHUDRerollWidget");
static_assert(sizeof(UFortPlayerAugmentHUDRerollWidget) == 0x0002C0, "Wrong size on UFortPlayerAugmentHUDRerollWidget");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, Image_CurrencyIcon) == 0x000290, "Member 'UFortPlayerAugmentHUDRerollWidget::Image_CurrencyIcon' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, RerollCurrency) == 0x000298, "Member 'UFortPlayerAugmentHUDRerollWidget::RerollCurrency' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, CachedNumFreeRerolls) == 0x0002A0, "Member 'UFortPlayerAugmentHUDRerollWidget::CachedNumFreeRerolls' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, RerollHoldMaterialParamName) == 0x0002A4, "Member 'UFortPlayerAugmentHUDRerollWidget::RerollHoldMaterialParamName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentHUDRerollWidget, Image_ProgressBar) == 0x0002B0, "Member 'UFortPlayerAugmentHUDRerollWidget::Image_ProgressBar' has a wrong offset!");

class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget
{
public:
	void HandleAugmentGrantingTimersFinishedForMatch();
	void HandleAugmentGrantingTimersResetForMatch();
	void HandleAugmentSelectorOpenedStatusChanged(const bool bIsOpened, const bool bViewingAugmentInventory);
	void HandleCanSelectAugmentChanged(bool bCanSelectAugment);
	void HandleHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenElementTagContainer);
	void HandleMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant);
	void HandleSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* SelectedAugment);
	void HandleTimerUpdated(float TimeRemaining, float TimePercentage);
	void OnAugmentGrantingTimersFinishedForMatch();
	void OnAugmentGrantingTimersResetForMatch();
	void OnAugmentSelectorOpenedStatusChanged(const bool bIsOpened);
	void OnCanSelectAugmentChanged(bool bCanSelectAugment);
	void OnHUDElementVisibilityChanged(const struct FGameplayTagContainer& HiddenElementTagContainer);
	void OnMovementModeChanged();
	void OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant);
	void OnSelectedAugmentForGrant(class UFortPlayerAugmentItemDefinition* HighlightedAugment);
	void OnTimerUpdated(float TimeRemaining, float TimePercentage);

	bool CanEquipSelectionTool() const;
	bool CanSelectAugment() const;
	int32 GetPendingAugmentsToGrant() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentHUDTimerWidget">();
	}
	static class UFortPlayerAugmentHUDTimerWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentHUDTimerWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentHUDTimerWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentHUDTimerWidget");
static_assert(sizeof(UFortPlayerAugmentHUDTimerWidget) == 0x0002D0, "Wrong size on UFortPlayerAugmentHUDTimerWidget");

class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{
public:
	class FText                                   RarityTextFormat;
	class UCommonTextBlock*                       Text_AugmentName;
	class UCommonTextBlock*                       Text_AugmentRarity;
	class UCommonTextBlock*                       Text_AugmentCategory;
	class UFortItemCategoryIndicator*             ItemCategoryIndicator;
	class UFortLazyImage*                         Image_CategoryAsImage;
	class UCommonTextBlock*                       Text_AugmentDescription;
	class UFortSocialAvatarIcon*                  Icon_LenderAvatarIcon;
	class UWidget*                                Overlay_LenderAvatarIcon;
	class UFortLazyImage*                         Image_LenderSquadColor;
	class UCommonTextBlock*                       Text_BorrowingText;

public:
	void OnItemNewOrBorrowedSet(const bool bIsNew, const bool bIsBorrowed);
	void OnItemPinColorSet(const struct FLinearColor& PinColor);
	void OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);
	void UpdateAugment(const class UFortPlayerAugmentItemDefinition* AugmentItemDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentInfoEntryWidget">();
	}
	static class UFortPlayerAugmentInfoEntryWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentInfoEntryWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentInfoEntryWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentInfoEntryWidget");
static_assert(sizeof(UFortPlayerAugmentInfoEntryWidget) == 0x0002F8, "Wrong size on UFortPlayerAugmentInfoEntryWidget");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, RarityTextFormat) == 0x000290, "Member 'UFortPlayerAugmentInfoEntryWidget::RarityTextFormat' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentName) == 0x0002A8, "Member 'UFortPlayerAugmentInfoEntryWidget::Text_AugmentName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentRarity) == 0x0002B0, "Member 'UFortPlayerAugmentInfoEntryWidget::Text_AugmentRarity' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentCategory) == 0x0002B8, "Member 'UFortPlayerAugmentInfoEntryWidget::Text_AugmentCategory' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, ItemCategoryIndicator) == 0x0002C0, "Member 'UFortPlayerAugmentInfoEntryWidget::ItemCategoryIndicator' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Image_CategoryAsImage) == 0x0002C8, "Member 'UFortPlayerAugmentInfoEntryWidget::Image_CategoryAsImage' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_AugmentDescription) == 0x0002D0, "Member 'UFortPlayerAugmentInfoEntryWidget::Text_AugmentDescription' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Icon_LenderAvatarIcon) == 0x0002D8, "Member 'UFortPlayerAugmentInfoEntryWidget::Icon_LenderAvatarIcon' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Overlay_LenderAvatarIcon) == 0x0002E0, "Member 'UFortPlayerAugmentInfoEntryWidget::Overlay_LenderAvatarIcon' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Image_LenderSquadColor) == 0x0002E8, "Member 'UFortPlayerAugmentInfoEntryWidget::Image_LenderSquadColor' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInfoEntryWidget, Text_BorrowingText) == 0x0002F0, "Member 'UFortPlayerAugmentInfoEntryWidget::Text_BorrowingText' has a wrong offset!");

class UFortPlayerAugmentInGameCarriedWidget final : public UFortHUDElementWidget
{
public:
	void HandleExitBus(class AFortPlayerControllerZone* FortPCZone);
	void OnShowInitialAugment(const class UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentInGameCarriedWidget">();
	}
	static class UFortPlayerAugmentInGameCarriedWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentInGameCarriedWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentInGameCarriedWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentInGameCarriedWidget");
static_assert(sizeof(UFortPlayerAugmentInGameCarriedWidget) == 0x0002D0, "Wrong size on UFortPlayerAugmentInGameCarriedWidget");

class UFortPlayerAugmentInventoryExtensionRow final : public UAthenaInventoryExtensionRowBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentInventoryExtensionRow">();
	}
	static class UFortPlayerAugmentInventoryExtensionRow* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentInventoryExtensionRow>();
	}
};
static_assert(alignof(UFortPlayerAugmentInventoryExtensionRow) == 0x000008, "Wrong alignment on UFortPlayerAugmentInventoryExtensionRow");
static_assert(sizeof(UFortPlayerAugmentInventoryExtensionRow) == 0x0002A8, "Wrong size on UFortPlayerAugmentInventoryExtensionRow");

class UFortPlayerAugmentInventoryListEntry final : public UCommonButtonBase
{
public:
	uint8                                         Pad_13E0[0x10];

public:
	void OnAugmentListItemSet(const class UFortItemDefinition* ItemDefinition);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentInventoryListEntry">();
	}
	static class UFortPlayerAugmentInventoryListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentInventoryListEntry>();
	}
};
static_assert(alignof(UFortPlayerAugmentInventoryListEntry) == 0x000010, "Wrong alignment on UFortPlayerAugmentInventoryListEntry");
static_assert(sizeof(UFortPlayerAugmentInventoryListEntry) == 0x0013F0, "Wrong size on UFortPlayerAugmentInventoryListEntry");

class UFortPlayerAugmentInventoryTab final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	struct FScalableFloat                         AugmentsEnabledViaHotfix;
	struct FGameplayTagContainer                  HiddenAugmentGameplayTags;
	class FName                                   TabNameID;
	uint8                                         Pad_3FC[0x4];
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;
	class UFortPlayerAugmentInventoryInfoWidget*  AugmentInfo;
	class UCommonListView*                        ListView_Augments;

public:
	void HandleAugmentGrantingTimersFinishedForMatch();
	void HandleAugmentGrantingTimersResetForMatch();
	void HandleNumPendingAugmentsToGrantUpdated(int8 NumPendingAugmentsToGrant);
	void HandleTimerUpdated(float TimeRemaining, float TimePercentage);
	void OnAugmentGrantingTimersFinishedForMatch();
	void OnAugmentGrantingTimersResetForMatch();
	void OnAugmentListUpdated(const int32 NumAugments);
	void OnNumPendingAugmentsToGrantUpdated(int32 NumPendingAugmentsToGrant);
	void OnTimerUpdated(float TimeRemaining, float TimePercentage);
	void RequestOpenSelector();

	int32 GetPendingAugmentsToGrant() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentInventoryTab">();
	}
	static class UFortPlayerAugmentInventoryTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentInventoryTab>();
	}
};
static_assert(alignof(UFortPlayerAugmentInventoryTab) == 0x000010, "Wrong alignment on UFortPlayerAugmentInventoryTab");
static_assert(sizeof(UFortPlayerAugmentInventoryTab) == 0x000500, "Wrong size on UFortPlayerAugmentInventoryTab");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, AugmentsEnabledViaHotfix) == 0x0003B0, "Member 'UFortPlayerAugmentInventoryTab::AugmentsEnabledViaHotfix' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, HiddenAugmentGameplayTags) == 0x0003D8, "Member 'UFortPlayerAugmentInventoryTab::HiddenAugmentGameplayTags' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, TabNameID) == 0x0003F8, "Member 'UFortPlayerAugmentInventoryTab::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, TabButtonLabelInfo) == 0x000400, "Member 'UFortPlayerAugmentInventoryTab::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, AugmentInfo) == 0x0004F0, "Member 'UFortPlayerAugmentInventoryTab::AugmentInfo' has a wrong offset!");
static_assert(offsetof(UFortPlayerAugmentInventoryTab, ListView_Augments) == 0x0004F8, "Member 'UFortPlayerAugmentInventoryTab::ListView_Augments' has a wrong offset!");

class UFortPlayerAugmentLobbyWidget final : public UCommonUserWidget
{
public:
	void OnShowInitialAugment(const class UFortPlayerAugmentItemDefinition* CarriedAugment);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentLobbyWidget">();
	}
	static class UFortPlayerAugmentLobbyWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentLobbyWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentLobbyWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentLobbyWidget");
static_assert(sizeof(UFortPlayerAugmentLobbyWidget) == 0x000290, "Wrong size on UFortPlayerAugmentLobbyWidget");

class UFortPlayerAugmentPostMatchUnlocksWidget final : public UFortHUDElementWidget
{
public:
	struct FScalableFloat                         AugmentsEnabledViaHotfix;

public:
	void OnShowUnlockedAugments(const TArray<class UFortPlayerAugmentItemDefinition*>& UnlockedAugments);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAugmentPostMatchUnlocksWidget">();
	}
	static class UFortPlayerAugmentPostMatchUnlocksWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAugmentPostMatchUnlocksWidget>();
	}
};
static_assert(alignof(UFortPlayerAugmentPostMatchUnlocksWidget) == 0x000008, "Wrong alignment on UFortPlayerAugmentPostMatchUnlocksWidget");
static_assert(sizeof(UFortPlayerAugmentPostMatchUnlocksWidget) == 0x0002F8, "Wrong size on UFortPlayerAugmentPostMatchUnlocksWidget");
static_assert(offsetof(UFortPlayerAugmentPostMatchUnlocksWidget, AugmentsEnabledViaHotfix) == 0x0002D0, "Member 'UFortPlayerAugmentPostMatchUnlocksWidget::AugmentsEnabledViaHotfix' has a wrong offset!");

}
