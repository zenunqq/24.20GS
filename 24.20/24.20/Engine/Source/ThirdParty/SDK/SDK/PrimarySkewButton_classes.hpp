#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UPrimarySkewButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UCommonTextBlock*                       CenterButtonTextWidget;
	class UImage*                                 Image_ButtonTop;
	class UImage*                                 Image_Shadow;
	bool                                          ToUpper;
	bool                                          XL;
	uint8                                         Pad_1462[0x6];
	class FText                                   ButtonNameText;

public:
	void ExecuteUbergraph_PrimarySkewButton(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BP_OnUnhovered();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BP_OnHovered();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BP_OnClicked();
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PrimarySkewButton_C">();
	}
	static class UPrimarySkewButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimarySkewButton_C>();
	}
};
static_assert(alignof(UPrimarySkewButton_C) == 0x000010, "Wrong alignment on UPrimarySkewButton_C");
static_assert(sizeof(UPrimarySkewButton_C) == 0x001480, "Wrong size on UPrimarySkewButton_C");
static_assert(offsetof(UPrimarySkewButton_C, UberGraphFrame) == 0x001430, "Member 'UPrimarySkewButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Pressed) == 0x001438, "Member 'UPrimarySkewButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Hover) == 0x001440, "Member 'UPrimarySkewButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, CenterButtonTextWidget) == 0x001448, "Member 'UPrimarySkewButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Image_ButtonTop) == 0x001450, "Member 'UPrimarySkewButton_C::Image_ButtonTop' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Image_Shadow) == 0x001458, "Member 'UPrimarySkewButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, ToUpper) == 0x001460, "Member 'UPrimarySkewButton_C::ToUpper' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, XL) == 0x001461, "Member 'UPrimarySkewButton_C::XL' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, ButtonNameText) == 0x001468, "Member 'UPrimarySkewButton_C::ButtonNameText' has a wrong offset!");

}
