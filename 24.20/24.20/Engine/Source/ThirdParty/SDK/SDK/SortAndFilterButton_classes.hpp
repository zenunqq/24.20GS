#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USortAndFilterButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ShowPipOutline;
	class UWidgetAnimation*                       Deselected;
	class UWidgetAnimation*                       Selected;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_Highlight;
	class UCommonTextBlock*                       Text_ButtonAction;
	class FText                                   Button_Description;
	bool                                          IsSelected;
	bool                                          bLastVisibleSelectedValue;
	bool                                          bIsBladeIsOpen;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void Construct();
	void ExecuteUbergraph_SortAndFilterButton(int32 EntryPoint);
	void HandleBladeOpenChanged(bool bBladeOpen);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void ResetAnimations();
	void SetHighlightBorderVisibility(bool bVisible);
	void SetText(const class FText& Text);
	void SnapToEndOfAnimation(class UWidgetAnimation* Animation, EUMGSequencePlayMode PlayMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SortAndFilterButton_C">();
	}
	static class USortAndFilterButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USortAndFilterButton_C>();
	}
};
static_assert(alignof(USortAndFilterButton_C) == 0x000010, "Wrong alignment on USortAndFilterButton_C");
static_assert(sizeof(USortAndFilterButton_C) == 0x001490, "Wrong size on USortAndFilterButton_C");
static_assert(offsetof(USortAndFilterButton_C, UberGraphFrame) == 0x001430, "Member 'USortAndFilterButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, ShowPipOutline) == 0x001438, "Member 'USortAndFilterButton_C::ShowPipOutline' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, Deselected) == 0x001440, "Member 'USortAndFilterButton_C::Deselected' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, Selected) == 0x001448, "Member 'USortAndFilterButton_C::Selected' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, Hover) == 0x001450, "Member 'USortAndFilterButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, Border_Highlight) == 0x001458, "Member 'USortAndFilterButton_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, Text_ButtonAction) == 0x001460, "Member 'USortAndFilterButton_C::Text_ButtonAction' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, Button_Description) == 0x001468, "Member 'USortAndFilterButton_C::Button_Description' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, IsSelected) == 0x001480, "Member 'USortAndFilterButton_C::IsSelected' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, bLastVisibleSelectedValue) == 0x001481, "Member 'USortAndFilterButton_C::bLastVisibleSelectedValue' has a wrong offset!");
static_assert(offsetof(USortAndFilterButton_C, bIsBladeIsOpen) == 0x001482, "Member 'USortAndFilterButton_C::bIsBladeIsOpen' has a wrong offset!");

}
