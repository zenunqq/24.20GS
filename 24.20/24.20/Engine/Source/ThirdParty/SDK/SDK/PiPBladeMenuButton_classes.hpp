#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PictureInPictureUI_classes.hpp"

namespace SDK
{

class UPiPBladeMenuButton_C final : public UPictureInPictureBladeMenuButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       FlipSwitch;
	class UWidgetAnimation*                       StatusGrow;
	class UWidgetAnimation*                       Hover;
	class UCommonTextBlock*                       ButtonText;
	class UImage*                                 IconOff;
	class UVerticalBox*                           IconTextContent;
	class UCommonTextBlock*                       IconTextOff;
	class UCommonTextBlock*                       IconTextOn;
	class UCommonTextBlock*                       Text_Feedback;
	class UWidgetSwitcher*                        TextSwitcher;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_PiPBladeMenuButton(int32 EntryPoint);
	void UpdatePiPStatusBP(const bool LoggedIn, const bool Enabled, const bool ParentalControlsEnabled);
	void UpdateStatus(bool IsEnabled, bool IsLoggedIn, bool IsParentalControlsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PiPBladeMenuButton_C">();
	}
	static class UPiPBladeMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPiPBladeMenuButton_C>();
	}
};
static_assert(alignof(UPiPBladeMenuButton_C) == 0x000010, "Wrong alignment on UPiPBladeMenuButton_C");
static_assert(sizeof(UPiPBladeMenuButton_C) == 0x001490, "Wrong size on UPiPBladeMenuButton_C");
static_assert(offsetof(UPiPBladeMenuButton_C, UberGraphFrame) == 0x001430, "Member 'UPiPBladeMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, FlipSwitch) == 0x001438, "Member 'UPiPBladeMenuButton_C::FlipSwitch' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, StatusGrow) == 0x001440, "Member 'UPiPBladeMenuButton_C::StatusGrow' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, Hover) == 0x001448, "Member 'UPiPBladeMenuButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, ButtonText) == 0x001450, "Member 'UPiPBladeMenuButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, IconOff) == 0x001458, "Member 'UPiPBladeMenuButton_C::IconOff' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, IconTextContent) == 0x001460, "Member 'UPiPBladeMenuButton_C::IconTextContent' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, IconTextOff) == 0x001468, "Member 'UPiPBladeMenuButton_C::IconTextOff' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, IconTextOn) == 0x001470, "Member 'UPiPBladeMenuButton_C::IconTextOn' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, Text_Feedback) == 0x001478, "Member 'UPiPBladeMenuButton_C::Text_Feedback' has a wrong offset!");
static_assert(offsetof(UPiPBladeMenuButton_C, TextSwitcher) == 0x001480, "Member 'UPiPBladeMenuButton_C::TextSwitcher' has a wrong offset!");

}
