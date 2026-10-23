#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UEventsSimpleButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UCommonBorder*                          CommonBorder_VariablePadding;
	class UImage*                                 Image_ButtonTop;
	class UImage*                                 Image_Shadow;
	class UOverlay*                               Overlay_ButtonBG;
	bool                                          ToUpper;
	bool                                          XL;
	uint8                                         Pad_1472[0x6];
	class FText                                   ButtonNameText;
	TMap<class FString, struct FLinearColor>      Color;
	struct FLinearColor                           GamepadButtonTextColor;
	struct FLinearColor                           DefaultTextColor;
	struct FVector2D                              ButtonPadding;

public:
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_EventsSimpleButton(int32 EntryPoint);
	void InputTypeChanged(bool bUsingGamepad);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void UpdateColor(const class FString& ParameterName, const struct FLinearColor& New_Color);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventsSimpleButton_C">();
	}
	static class UEventsSimpleButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventsSimpleButton_C>();
	}
};
static_assert(alignof(UEventsSimpleButton_C) == 0x000010, "Wrong alignment on UEventsSimpleButton_C");
static_assert(sizeof(UEventsSimpleButton_C) == 0x001510, "Wrong size on UEventsSimpleButton_C");
static_assert(offsetof(UEventsSimpleButton_C, UberGraphFrame) == 0x001430, "Member 'UEventsSimpleButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, Pressed) == 0x001438, "Member 'UEventsSimpleButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, Hover) == 0x001440, "Member 'UEventsSimpleButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, CenterButtonTextWidget) == 0x001448, "Member 'UEventsSimpleButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, CommonBorder_VariablePadding) == 0x001450, "Member 'UEventsSimpleButton_C::CommonBorder_VariablePadding' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, Image_ButtonTop) == 0x001458, "Member 'UEventsSimpleButton_C::Image_ButtonTop' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, Image_Shadow) == 0x001460, "Member 'UEventsSimpleButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, Overlay_ButtonBG) == 0x001468, "Member 'UEventsSimpleButton_C::Overlay_ButtonBG' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, ToUpper) == 0x001470, "Member 'UEventsSimpleButton_C::ToUpper' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, XL) == 0x001471, "Member 'UEventsSimpleButton_C::XL' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, ButtonNameText) == 0x001478, "Member 'UEventsSimpleButton_C::ButtonNameText' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, Color) == 0x001490, "Member 'UEventsSimpleButton_C::Color' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, GamepadButtonTextColor) == 0x0014E0, "Member 'UEventsSimpleButton_C::GamepadButtonTextColor' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, DefaultTextColor) == 0x0014F0, "Member 'UEventsSimpleButton_C::DefaultTextColor' has a wrong offset!");
static_assert(offsetof(UEventsSimpleButton_C, ButtonPadding) == 0x001500, "Member 'UEventsSimpleButton_C::ButtonPadding' has a wrong offset!");

}
