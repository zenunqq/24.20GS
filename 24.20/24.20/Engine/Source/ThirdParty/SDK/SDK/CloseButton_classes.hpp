#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UCloseButton_C final : public UBacchusCloseButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhover;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_Container;
	class UImage*                                 ButtonBacking;
	class UImage*                                 CloseIcon;
	class USizeBox*                               SizeBox_Control;
	class UCommonTextBlock*                       Text_ButtonAction;
	class FText                                   Button_Description;
	bool                                          FontSizeOveride;
	uint8                                         Pad_14A1[0x3];
	int32                                         FontSize;
	struct FMargin                                Padding_Overide;
	bool                                          PaddingOveride;

public:
	void BP_OnPressed();
	void BP_OnReleased();
	void Construct();
	void ExecuteUbergraph_CloseButton(int32 EntryPoint);
	void HandleSize();
	void SetText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CloseButton_C">();
	}
	static class UCloseButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCloseButton_C>();
	}
};
static_assert(alignof(UCloseButton_C) == 0x000010, "Wrong alignment on UCloseButton_C");
static_assert(sizeof(UCloseButton_C) == 0x0014C0, "Wrong size on UCloseButton_C");
static_assert(offsetof(UCloseButton_C, UberGraphFrame) == 0x001440, "Member 'UCloseButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Unhover) == 0x001448, "Member 'UCloseButton_C::Unhover' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Pressed) == 0x001450, "Member 'UCloseButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Hover) == 0x001458, "Member 'UCloseButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Border_Container) == 0x001460, "Member 'UCloseButton_C::Border_Container' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, ButtonBacking) == 0x001468, "Member 'UCloseButton_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, CloseIcon) == 0x001470, "Member 'UCloseButton_C::CloseIcon' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, SizeBox_Control) == 0x001478, "Member 'UCloseButton_C::SizeBox_Control' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Text_ButtonAction) == 0x001480, "Member 'UCloseButton_C::Text_ButtonAction' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Button_Description) == 0x001488, "Member 'UCloseButton_C::Button_Description' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, FontSizeOveride) == 0x0014A0, "Member 'UCloseButton_C::FontSizeOveride' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, FontSize) == 0x0014A4, "Member 'UCloseButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, Padding_Overide) == 0x0014A8, "Member 'UCloseButton_C::Padding_Overide' has a wrong offset!");
static_assert(offsetof(UCloseButton_C, PaddingOveride) == 0x0014B8, "Member 'UCloseButton_C::PaddingOveride' has a wrong offset!");

}
