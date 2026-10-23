#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_UI_InputField_ContentSize_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "E_UI_InputField_State_structs.hpp"
#include "Slate_structs.hpp"

namespace SDK
{

class UWBP_InputField_C final : public UFortInputField
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ErrorAnim;
	class UWidgetAnimation*                       HoverAnim;
	class UCommonActionWidget*                    CommonActionWidget;
	class UOverlay*                               ErrorIconWrapper;
	class UCommonTextBlock*                       ErrorText;
	class UBorder*                                ErrorTextWrapper;
	class UCommonTextBlock*                       LabelText;
	class UBorder*                                LabelTextWrapper;
	class UImage*                                 Outline;
	class UOverlay*                               Overlay_ActionWidgetShower;
	class UOverlay*                               ProcessingFeedbackWrapper;
	E_UI_InputField_State                         DebugInputFieldState;
	bool                                          ShowLabel;
	bool                                          AlignContentCenter;
	uint8                                         Pad_2FB[0x5];
	class FText                                   DefaultLabelValue;
	class FText                                   ErrorValue;
	class FText                                   DefaultHintTextValue;
	struct FLinearColor                           IdleEndColor;
	struct FLinearColor                           ErrorEndColor;
	struct FLinearColor                           OutlineEndColor;
	class UMaterialInstanceDynamic*               OutlineMaterial;
	class FName                                   OutlineColorParam;
	E_UI_InputField_ContentSize                   ContentSize;
	bool                                          p_IsFocused;
	bool                                          p_IsMouseHovered;
	bool                                          p_FocusAnimPlayed;
	bool                                          ShowActionOnlyOnFocus;

public:
	void SetTextValue(const class FText& TextValue);
	void SetProcessingVisibility(bool IsVisible_0);
	void SetLabelValue(const class FText& LabelValue);
	void SetEditableText(const class FText& EditableText);
	void SetLabelDisplay();
	void SetContentSize();
	void SetInputFieldState(E_UI_InputField_State State);
	void SetContentAlignment();
	void SetHintText(const class FText& HintText);
	void SetActionVisibility();
	void SetErrorText(const class FText& ErrorText_0);
	void Set_Focus_Visual(bool IsFocused);
	void RefreshHoverAnim();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnError();
	void OnInputDeviceChanged(ECommonInputType bNewInputType);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_InputField(int32 EntryPoint);
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InputField_C">();
	}
	static class UWBP_InputField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InputField_C>();
	}
};
static_assert(alignof(UWBP_InputField_C) == 0x000008, "Wrong alignment on UWBP_InputField_C");
static_assert(sizeof(UWBP_InputField_C) == 0x000390, "Wrong size on UWBP_InputField_C");
static_assert(offsetof(UWBP_InputField_C, UberGraphFrame) == 0x000298, "Member 'UWBP_InputField_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ErrorAnim) == 0x0002A0, "Member 'UWBP_InputField_C::ErrorAnim' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, HoverAnim) == 0x0002A8, "Member 'UWBP_InputField_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, CommonActionWidget) == 0x0002B0, "Member 'UWBP_InputField_C::CommonActionWidget' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ErrorIconWrapper) == 0x0002B8, "Member 'UWBP_InputField_C::ErrorIconWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ErrorText) == 0x0002C0, "Member 'UWBP_InputField_C::ErrorText' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ErrorTextWrapper) == 0x0002C8, "Member 'UWBP_InputField_C::ErrorTextWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, LabelText) == 0x0002D0, "Member 'UWBP_InputField_C::LabelText' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, LabelTextWrapper) == 0x0002D8, "Member 'UWBP_InputField_C::LabelTextWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, Outline) == 0x0002E0, "Member 'UWBP_InputField_C::Outline' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, Overlay_ActionWidgetShower) == 0x0002E8, "Member 'UWBP_InputField_C::Overlay_ActionWidgetShower' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ProcessingFeedbackWrapper) == 0x0002F0, "Member 'UWBP_InputField_C::ProcessingFeedbackWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, DebugInputFieldState) == 0x0002F8, "Member 'UWBP_InputField_C::DebugInputFieldState' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ShowLabel) == 0x0002F9, "Member 'UWBP_InputField_C::ShowLabel' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, AlignContentCenter) == 0x0002FA, "Member 'UWBP_InputField_C::AlignContentCenter' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, DefaultLabelValue) == 0x000300, "Member 'UWBP_InputField_C::DefaultLabelValue' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ErrorValue) == 0x000318, "Member 'UWBP_InputField_C::ErrorValue' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, DefaultHintTextValue) == 0x000330, "Member 'UWBP_InputField_C::DefaultHintTextValue' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, IdleEndColor) == 0x000348, "Member 'UWBP_InputField_C::IdleEndColor' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ErrorEndColor) == 0x000358, "Member 'UWBP_InputField_C::ErrorEndColor' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, OutlineEndColor) == 0x000368, "Member 'UWBP_InputField_C::OutlineEndColor' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, OutlineMaterial) == 0x000378, "Member 'UWBP_InputField_C::OutlineMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, OutlineColorParam) == 0x000380, "Member 'UWBP_InputField_C::OutlineColorParam' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ContentSize) == 0x000384, "Member 'UWBP_InputField_C::ContentSize' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, p_IsFocused) == 0x000385, "Member 'UWBP_InputField_C::p_IsFocused' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, p_IsMouseHovered) == 0x000386, "Member 'UWBP_InputField_C::p_IsMouseHovered' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, p_FocusAnimPlayed) == 0x000387, "Member 'UWBP_InputField_C::p_FocusAnimPlayed' has a wrong offset!");
static_assert(offsetof(UWBP_InputField_C, ShowActionOnlyOnFocus) == 0x000388, "Member 'UWBP_InputField_C::ShowActionOnlyOnFocus' has a wrong offset!");

}
