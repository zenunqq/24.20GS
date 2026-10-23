#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class USoloButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Pressed;
	class UWidgetAnimation*                       Hover;
	class UBorder*                                Border_Container;
	class UImage*                                 ButtonBacking;
	class USizeBox*                               SizeBox_Control;
	class UCommonTextBlock*                       Text_ButtonAction;
	class FText                                   Button_Description;
	bool                                          FontSizeOveride;
	uint8                                         Pad_1481[0x3];
	int32                                         FontSize;
	struct FMargin                                Padding_Overide;
	bool                                          PaddingOveride;
	bool                                          IsDisabled;

public:
	void SetText(const class FText& Text);
	void PreConstruct(bool IsDesignTime);
	void HandleSize();
	void ExecuteUbergraph_SoloButton(int32 EntryPoint);
	void Construct();
	void BP_OnEnabled();
	void BP_OnUnhovered();
	void BP_OnDisabled();
	void BP_OnHovered();
	void BP_OnClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoloButton_C">();
	}
	static class USoloButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoloButton_C>();
	}
};
static_assert(alignof(USoloButton_C) == 0x000010, "Wrong alignment on USoloButton_C");
static_assert(sizeof(USoloButton_C) == 0x0014A0, "Wrong size on USoloButton_C");
static_assert(offsetof(USoloButton_C, UberGraphFrame) == 0x001430, "Member 'USoloButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USoloButton_C, Pressed) == 0x001438, "Member 'USoloButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(USoloButton_C, Hover) == 0x001440, "Member 'USoloButton_C::Hover' has a wrong offset!");
static_assert(offsetof(USoloButton_C, Border_Container) == 0x001448, "Member 'USoloButton_C::Border_Container' has a wrong offset!");
static_assert(offsetof(USoloButton_C, ButtonBacking) == 0x001450, "Member 'USoloButton_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(USoloButton_C, SizeBox_Control) == 0x001458, "Member 'USoloButton_C::SizeBox_Control' has a wrong offset!");
static_assert(offsetof(USoloButton_C, Text_ButtonAction) == 0x001460, "Member 'USoloButton_C::Text_ButtonAction' has a wrong offset!");
static_assert(offsetof(USoloButton_C, Button_Description) == 0x001468, "Member 'USoloButton_C::Button_Description' has a wrong offset!");
static_assert(offsetof(USoloButton_C, FontSizeOveride) == 0x001480, "Member 'USoloButton_C::FontSizeOveride' has a wrong offset!");
static_assert(offsetof(USoloButton_C, FontSize) == 0x001484, "Member 'USoloButton_C::FontSize' has a wrong offset!");
static_assert(offsetof(USoloButton_C, Padding_Overide) == 0x001488, "Member 'USoloButton_C::Padding_Overide' has a wrong offset!");
static_assert(offsetof(USoloButton_C, PaddingOveride) == 0x001498, "Member 'USoloButton_C::PaddingOveride' has a wrong offset!");
static_assert(offsetof(USoloButton_C, IsDisabled) == 0x001499, "Member 'USoloButton_C::IsDisabled' has a wrong offset!");

}
