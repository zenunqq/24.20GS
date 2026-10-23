#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaItemCustomizationSelector_C final : public UAthenaItemSelectorScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       PulseAnim;
	class UWidgetAnimation*                       ItemInfoIntroOutro;
	class UWidgetAnimation*                       Intro;
	class UFortTextButton_C*                      Button_HitBlockerLeft;
	class UFortTextButton_C*                      Button_HitBlockerRight;
	class UOverlay*                               CameraFrameContainer;
	class UHorizontalBox*                         ExclusiveCalloutBox;
	class UCommonRichTextBlock*                   ExclusiveCalloutText;
	class UWBP_VariantCustomizationHeader_C*      Header;
	class USafeZone*                              LeftSideContentSZ;
	class USafeZone*                              RightSideContentSZ;
	class USafeZone*                              SafeZone_ButtonsBar;
	class UCommonBorder*                          SafezonePaddingReductionCB;
	class USizeBox*                               SB_MainContent;
	class UScaleBox*                              ScaleBox_Mobile2;
	class UScaleBox*                              ScaleBox_Mobile3;
	class UImage*                                 Vignette;
	class UCommonWidgetSwitcherLegacy*            WidgetSwitcher_InteractionMethod;
	class UCommonWidgetSwitcherLegacy*            WidgetSwitcher_ItemEditor;
	bool                                          bPickingStyle;
	bool                                          bHandledBackRequest;
	uint8                                         Pad_A42[0x6];
	struct FTimerHandle                           AutoHideInfoPanelEventTimer;
	struct FTimerHandle                           TextEntryTimer;
	int32                                         SeasonFilter;
	int32                                         MaxSeason;
	double                                        ItemInfoHideDelayTime;
	struct FSlateFontInfo                         TitleFontArchive;
	struct FSlateFontInfo                         TitleFontDefault;
	ELockerScreenState                            LockerStateCache;
	uint8                                         Pad_B19[0x7];
	class FText                                   Text_SubHeader;

public:
	void BndEvt__AthenaItemCustomizationSelector_Tooltip_ArchiveMode_K2Node_ComponentBoundEvent_2_OnDismissed__DelegateSignature();
	void BndEvt__AthenaItemCustomizationSelector_Tooltip_LockerArchivingCleanup_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature();
	void BndEvt__AthenaItemCustomizationSelector_Tooltip_ShowArchivedItems_K2Node_ComponentBoundEvent_7_OnDismissed__DelegateSignature();
	void BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_HandleBack();
	void BP_OnActivated();
	void Construct();
	void ExecuteUbergraph_AthenaItemCustomizationSelector(int32 EntryPoint);
	class UMaterialInstance* GetCategoryImage(EAthenaCustomizationCategory Index_0, class UMaterialInstance* OverrideImage);
	void GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition);
	void HandleAlternateActionHoveredChanged(bool bIsHovered);
	void HandleBack(bool* PassThrough);
	void HandleHideInfoPanel();
	void HandleItemSetupFinished(const class FText& InText, EAthenaCustomizationCategory category, class UMaterialInstance* OverrideImage);
	void HandlePickerMarkedItemsChanged(int32 MarkedCount);
	void HandleShowInfoPanel(class UFortItem* SelectedItem);
	void HandleTextChanged(const class FText& NewText);
	void OnCurrentItemChanged(class UFortItem* SelectedItem);
	void OnFinishedItemSave();
	void OnFinishedItemSetup(const class FText& CategoryDisplayName, const class FText& ItemDisplayTypeName, EAthenaCustomizationCategory SelectedCategory, class UMaterialInstance* OverrideSlotImage);
	void OnHideItemInfoHeader(bool bShouldHide);
	void OnInitialized();
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void OnLockerScreenStateChanged();
	void OnPreviewActionButtonUpdated(const class FText& RowDisplayName);
	void OnShowArchivedItemsTooltip(bool bShowTooltip);
	void OnShowArchiveModeTooltip(bool bShowTooltip);
	void OnShowLockerArchivingCleanupTooltip(bool bShowTooltip);
	void OnTabSelectionChanged(bool bShowingVariants);
	void OnUpdateArchivedItemsTooltipText(const class FText& Text);
	void OnUpdateArchiveModeTooltipText(const class FText& Text);
	void OnUpdateExclusiveItemCallout(bool bShouldShow, const class FText& CalloutText);
	void OnUpdateLockerArchivingCleanupTooltipText(const class FText& Text);
	void PreConstruct(bool IsDesignTime);
	void UpdateArchivingButtonText(int32 MarkedCount);
	void UpdateSeasonButtonEnabledState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaItemCustomizationSelector_C">();
	}
	static class UAthenaItemCustomizationSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaItemCustomizationSelector_C>();
	}
};
static_assert(alignof(UAthenaItemCustomizationSelector_C) == 0x000010, "Wrong alignment on UAthenaItemCustomizationSelector_C");
static_assert(sizeof(UAthenaItemCustomizationSelector_C) == 0x000B40, "Wrong size on UAthenaItemCustomizationSelector_C");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, UberGraphFrame) == 0x0009A0, "Member 'UAthenaItemCustomizationSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, PulseAnim) == 0x0009A8, "Member 'UAthenaItemCustomizationSelector_C::PulseAnim' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, ItemInfoIntroOutro) == 0x0009B0, "Member 'UAthenaItemCustomizationSelector_C::ItemInfoIntroOutro' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, Intro) == 0x0009B8, "Member 'UAthenaItemCustomizationSelector_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, Button_HitBlockerLeft) == 0x0009C0, "Member 'UAthenaItemCustomizationSelector_C::Button_HitBlockerLeft' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, Button_HitBlockerRight) == 0x0009C8, "Member 'UAthenaItemCustomizationSelector_C::Button_HitBlockerRight' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, CameraFrameContainer) == 0x0009D0, "Member 'UAthenaItemCustomizationSelector_C::CameraFrameContainer' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, ExclusiveCalloutBox) == 0x0009D8, "Member 'UAthenaItemCustomizationSelector_C::ExclusiveCalloutBox' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, ExclusiveCalloutText) == 0x0009E0, "Member 'UAthenaItemCustomizationSelector_C::ExclusiveCalloutText' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, Header) == 0x0009E8, "Member 'UAthenaItemCustomizationSelector_C::Header' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, LeftSideContentSZ) == 0x0009F0, "Member 'UAthenaItemCustomizationSelector_C::LeftSideContentSZ' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, RightSideContentSZ) == 0x0009F8, "Member 'UAthenaItemCustomizationSelector_C::RightSideContentSZ' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, SafeZone_ButtonsBar) == 0x000A00, "Member 'UAthenaItemCustomizationSelector_C::SafeZone_ButtonsBar' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, SafezonePaddingReductionCB) == 0x000A08, "Member 'UAthenaItemCustomizationSelector_C::SafezonePaddingReductionCB' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, SB_MainContent) == 0x000A10, "Member 'UAthenaItemCustomizationSelector_C::SB_MainContent' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, ScaleBox_Mobile2) == 0x000A18, "Member 'UAthenaItemCustomizationSelector_C::ScaleBox_Mobile2' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, ScaleBox_Mobile3) == 0x000A20, "Member 'UAthenaItemCustomizationSelector_C::ScaleBox_Mobile3' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, Vignette) == 0x000A28, "Member 'UAthenaItemCustomizationSelector_C::Vignette' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, WidgetSwitcher_InteractionMethod) == 0x000A30, "Member 'UAthenaItemCustomizationSelector_C::WidgetSwitcher_InteractionMethod' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, WidgetSwitcher_ItemEditor) == 0x000A38, "Member 'UAthenaItemCustomizationSelector_C::WidgetSwitcher_ItemEditor' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, bPickingStyle) == 0x000A40, "Member 'UAthenaItemCustomizationSelector_C::bPickingStyle' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, bHandledBackRequest) == 0x000A41, "Member 'UAthenaItemCustomizationSelector_C::bHandledBackRequest' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, AutoHideInfoPanelEventTimer) == 0x000A48, "Member 'UAthenaItemCustomizationSelector_C::AutoHideInfoPanelEventTimer' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, TextEntryTimer) == 0x000A50, "Member 'UAthenaItemCustomizationSelector_C::TextEntryTimer' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, SeasonFilter) == 0x000A58, "Member 'UAthenaItemCustomizationSelector_C::SeasonFilter' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, MaxSeason) == 0x000A5C, "Member 'UAthenaItemCustomizationSelector_C::MaxSeason' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, ItemInfoHideDelayTime) == 0x000A60, "Member 'UAthenaItemCustomizationSelector_C::ItemInfoHideDelayTime' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, TitleFontArchive) == 0x000A68, "Member 'UAthenaItemCustomizationSelector_C::TitleFontArchive' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, TitleFontDefault) == 0x000AC0, "Member 'UAthenaItemCustomizationSelector_C::TitleFontDefault' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, LockerStateCache) == 0x000B18, "Member 'UAthenaItemCustomizationSelector_C::LockerStateCache' has a wrong offset!");
static_assert(offsetof(UAthenaItemCustomizationSelector_C, Text_SubHeader) == 0x000B20, "Member 'UAthenaItemCustomizationSelector_C::Text_SubHeader' has a wrong offset!");

}
