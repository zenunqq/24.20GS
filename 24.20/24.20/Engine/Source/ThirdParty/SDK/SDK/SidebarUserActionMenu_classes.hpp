#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarUserActionMenu_C final : public UFortSidebarSocialInteractionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UBorder*                                EntryBorder;
	class UFortMobileImage*                       Image_Platform;

public:
	void ExecuteUbergraph_SidebarUserActionMenu(int32 EntryPoint);
	void OnOpened();
	void OnToggleConfirmation(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserActionMenu_C">();
	}
	static class USidebarUserActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserActionMenu_C>();
	}
};
static_assert(alignof(USidebarUserActionMenu_C) == 0x000008, "Wrong alignment on USidebarUserActionMenu_C");
static_assert(sizeof(USidebarUserActionMenu_C) == 0x000520, "Wrong size on USidebarUserActionMenu_C");
static_assert(offsetof(USidebarUserActionMenu_C, UberGraphFrame) == 0x0004F0, "Member 'USidebarUserActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarUserActionMenu_C, ConfirmationOpened) == 0x0004F8, "Member 'USidebarUserActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(USidebarUserActionMenu_C, Opened) == 0x000500, "Member 'USidebarUserActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(USidebarUserActionMenu_C, Border_OnlineStatusIndicator) == 0x000508, "Member 'USidebarUserActionMenu_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(USidebarUserActionMenu_C, EntryBorder) == 0x000510, "Member 'USidebarUserActionMenu_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(USidebarUserActionMenu_C, Image_Platform) == 0x000518, "Member 'USidebarUserActionMenu_C::Image_Platform' has a wrong offset!");

}
