#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UMainMenu_HamburgerButton_C final : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover_Grow;
	class UWidgetAnimation*                       Hover_Bounce;
	class UWidgetAnimation*                       Hover;
	class UImage*                                 ButtonBacking;
	class UFortMobileImage*                       Icon;
	class UBorder*                                IconColor;
	class USizeBox*                               VariableSize;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_MainMenu_HamburgerButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_HamburgerButton_C">();
	}
	static class UMainMenu_HamburgerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenu_HamburgerButton_C>();
	}
};
static_assert(alignof(UMainMenu_HamburgerButton_C) == 0x000010, "Wrong alignment on UMainMenu_HamburgerButton_C");
static_assert(sizeof(UMainMenu_HamburgerButton_C) == 0x001470, "Wrong size on UMainMenu_HamburgerButton_C");
static_assert(offsetof(UMainMenu_HamburgerButton_C, UberGraphFrame) == 0x001430, "Member 'UMainMenu_HamburgerButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, Hover_Grow) == 0x001438, "Member 'UMainMenu_HamburgerButton_C::Hover_Grow' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, Hover_Bounce) == 0x001440, "Member 'UMainMenu_HamburgerButton_C::Hover_Bounce' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, Hover) == 0x001448, "Member 'UMainMenu_HamburgerButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, ButtonBacking) == 0x001450, "Member 'UMainMenu_HamburgerButton_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, Icon) == 0x001458, "Member 'UMainMenu_HamburgerButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, IconColor) == 0x001460, "Member 'UMainMenu_HamburgerButton_C::IconColor' has a wrong offset!");
static_assert(offsetof(UMainMenu_HamburgerButton_C, VariableSize) == 0x001468, "Member 'UMainMenu_HamburgerButton_C::VariableSize' has a wrong offset!");

}
