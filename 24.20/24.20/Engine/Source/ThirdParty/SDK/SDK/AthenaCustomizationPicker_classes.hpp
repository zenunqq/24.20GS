#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UAthenaCustomizationPicker_C final : public UAthenaCustomizationPicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFilteredTextEntryWidget_C*             EditableText_Search;
	class UHorizontalBox*                         SearchBar_HB;
	class UImage*                                 SearchIcon;
	class USizeBox*                               SizeBox_TextSearch;
	class UCommonRichTextBlock*                   TextBlock_NoItemAvailable;
	class UWidgetSwitcher*                        WidgetSwitcher_DisplayItemAvailability;
	TMulticastInlineDelegate<void(bool bIsHovered)> OnAlternateActionHoveredChanged;
	class UAthenaCustomizationPickerTileButton_C* TileButton;
	struct FTimerHandle                           TextEntryTimer;
	TMulticastInlineDelegate<void(class FText NewText)> OnTextChanged;
	struct FDataTableRowHandle                    CachedButtonTextSearchKeybind;
	struct FDataTableRowHandle                    CachedButtonSortAndFilterKeybind;

public:
	void BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__AthenaCustomizationPicker_Button_SortAndFilter_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__AthenaCustomizationPicker_Button_TextSearch_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__AthenaCustomizationPicker_Tooltip_ArchiveFilter_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature();
	void BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__PickerTileView_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationPicker(int32 EntryPoint);
	void GetTextFilterSelectedState(bool* bIsSelected);
	void HandleButtonTextSearchClicked();
	void HandleSearchTextFilterChanged(const class FText& Text);
	void HandleTextChanged(const class FText& Text);
	void HandleTextEntryTimer();
	void NavigateDownFromSearch(EUINavigation Navigation_0, class UWidget** NewParam);
	void NavigateDownFromSortAndFilter(EUINavigation Navigation_0, class UWidget** NewParam);
	class UWidget* NavigateUpFromPicker(EUINavigation Navigation_0);
	void On_Text_Committed(const class FText& Text, ETextCommit CommitMethod);
	void OnInitialized();
	void OnInputMethodChanged(ECommonInputType NewInputType);
	void OnItemsAvailableInFilter();
	void OnNoItemsAvailableInFilter(const class FText& EmptyDisplayText);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnSearchEnabled(bool bEnabled);
	void OnShowArchiveFilterTooltip(bool bShowTooltip);
	void OnUpdateArchiveFilterTooltipText(const class FText& Text);
	void ResetTextSearchFilter();
	void SetTextFilter(const class FText& InText, bool Clear);
	void SetTextFilterSelectedState(bool bIsSelected);

	bool HasSelectableTile() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPicker_C">();
	}
	static class UAthenaCustomizationPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPicker_C>();
	}
};
static_assert(alignof(UAthenaCustomizationPicker_C) == 0x000008, "Wrong alignment on UAthenaCustomizationPicker_C");
static_assert(sizeof(UAthenaCustomizationPicker_C) == 0x0005C0, "Wrong size on UAthenaCustomizationPicker_C");
static_assert(offsetof(UAthenaCustomizationPicker_C, UberGraphFrame) == 0x000538, "Member 'UAthenaCustomizationPicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, EditableText_Search) == 0x000540, "Member 'UAthenaCustomizationPicker_C::EditableText_Search' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, SearchBar_HB) == 0x000548, "Member 'UAthenaCustomizationPicker_C::SearchBar_HB' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, SearchIcon) == 0x000550, "Member 'UAthenaCustomizationPicker_C::SearchIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, SizeBox_TextSearch) == 0x000558, "Member 'UAthenaCustomizationPicker_C::SizeBox_TextSearch' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, TextBlock_NoItemAvailable) == 0x000560, "Member 'UAthenaCustomizationPicker_C::TextBlock_NoItemAvailable' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, WidgetSwitcher_DisplayItemAvailability) == 0x000568, "Member 'UAthenaCustomizationPicker_C::WidgetSwitcher_DisplayItemAvailability' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, OnAlternateActionHoveredChanged) == 0x000570, "Member 'UAthenaCustomizationPicker_C::OnAlternateActionHoveredChanged' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, TileButton) == 0x000580, "Member 'UAthenaCustomizationPicker_C::TileButton' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, TextEntryTimer) == 0x000588, "Member 'UAthenaCustomizationPicker_C::TextEntryTimer' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, OnTextChanged) == 0x000590, "Member 'UAthenaCustomizationPicker_C::OnTextChanged' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, CachedButtonTextSearchKeybind) == 0x0005A0, "Member 'UAthenaCustomizationPicker_C::CachedButtonTextSearchKeybind' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPicker_C, CachedButtonSortAndFilterKeybind) == 0x0005B0, "Member 'UAthenaCustomizationPicker_C::CachedButtonSortAndFilterKeybind' has a wrong offset!");

}
