#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_UI_InputField_ContentSize_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "Slate_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UWBP_ComboBox_C final : public UFortComboBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OpenAnim;
	class UWidgetAnimation*                       HoverAnim;
	class UImage*                                 Arrow;
	class UCommonActionWidget*                    CommonActionWidget;
	class UOverlay*                               InputActionOverlay;
	class UCommonTextBlock*                       LabelText;
	class UImage*                                 Outline;
	bool                                          AlignContentCenter;
	uint8                                         Pad_2D9[0x3];
	struct FLinearColor                           OutlineEndColor;
	uint8                                         Pad_2EC[0x4];
	class UMaterialInstanceDynamic*               OutlineMaterial;
	class FName                                   OutlineColorParam;
	E_UI_InputField_ContentSize                   ContentSize;
	bool                                          p_IsFocused;
	bool                                          p_IsListOpened;
	bool                                          p_IsHover;
	class UMaterialInstanceDynamic*               ArrowMaterial;
	class FName                                   ArrowColorParam;
	bool                                          p_FocusAnimPlayed;

public:
	void SetContentSize();
	void SetContentAlignment();
	void SetActionVisibility();
	void Set_Focus_Visual(bool IsFocused);
	void SetText(const class FString& TextValue);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void RefreshHoverAnim();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void OnInputDeviceChanged(ECommonInputType bNewInputType);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void Construct();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ComboBox(int32 EntryPoint);
	void BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ComboBox_C">();
	}
	static class UWBP_ComboBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ComboBox_C>();
	}
};
static_assert(alignof(UWBP_ComboBox_C) == 0x000008, "Wrong alignment on UWBP_ComboBox_C");
static_assert(sizeof(UWBP_ComboBox_C) == 0x000310, "Wrong size on UWBP_ComboBox_C");
static_assert(offsetof(UWBP_ComboBox_C, UberGraphFrame) == 0x000298, "Member 'UWBP_ComboBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, OpenAnim) == 0x0002A0, "Member 'UWBP_ComboBox_C::OpenAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, HoverAnim) == 0x0002A8, "Member 'UWBP_ComboBox_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, Arrow) == 0x0002B0, "Member 'UWBP_ComboBox_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, CommonActionWidget) == 0x0002B8, "Member 'UWBP_ComboBox_C::CommonActionWidget' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, InputActionOverlay) == 0x0002C0, "Member 'UWBP_ComboBox_C::InputActionOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, LabelText) == 0x0002C8, "Member 'UWBP_ComboBox_C::LabelText' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, Outline) == 0x0002D0, "Member 'UWBP_ComboBox_C::Outline' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, AlignContentCenter) == 0x0002D8, "Member 'UWBP_ComboBox_C::AlignContentCenter' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, OutlineEndColor) == 0x0002DC, "Member 'UWBP_ComboBox_C::OutlineEndColor' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, OutlineMaterial) == 0x0002F0, "Member 'UWBP_ComboBox_C::OutlineMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, OutlineColorParam) == 0x0002F8, "Member 'UWBP_ComboBox_C::OutlineColorParam' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, ContentSize) == 0x0002FC, "Member 'UWBP_ComboBox_C::ContentSize' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, p_IsFocused) == 0x0002FD, "Member 'UWBP_ComboBox_C::p_IsFocused' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, p_IsListOpened) == 0x0002FE, "Member 'UWBP_ComboBox_C::p_IsListOpened' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, p_IsHover) == 0x0002FF, "Member 'UWBP_ComboBox_C::p_IsHover' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, ArrowMaterial) == 0x000300, "Member 'UWBP_ComboBox_C::ArrowMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, ArrowColorParam) == 0x000308, "Member 'UWBP_ComboBox_C::ArrowColorParam' has a wrong offset!");
static_assert(offsetof(UWBP_ComboBox_C, p_FocusAnimPlayed) == 0x00030C, "Member 'UWBP_ComboBox_C::p_FocusAnimPlayed' has a wrong offset!");

}
