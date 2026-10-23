#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UUserActionMenu_C final : public UFortSocialInteractionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UBorder*                                EntryBorder;
	class UFortMobileImage*                       Image_Platform;

public:
	void ExecuteUbergraph_UserActionMenu(int32 EntryPoint);
	void OnOpened();
	void OnToggleConfirmation(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserActionMenu_C">();
	}
	static class UUserActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserActionMenu_C>();
	}
};
static_assert(alignof(UUserActionMenu_C) == 0x000008, "Wrong alignment on UUserActionMenu_C");
static_assert(sizeof(UUserActionMenu_C) == 0x0004D0, "Wrong size on UUserActionMenu_C");
static_assert(offsetof(UUserActionMenu_C, UberGraphFrame) == 0x0004A0, "Member 'UUserActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserActionMenu_C, ConfirmationOpened) == 0x0004A8, "Member 'UUserActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(UUserActionMenu_C, Opened) == 0x0004B0, "Member 'UUserActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(UUserActionMenu_C, Border_OnlineStatusIndicator) == 0x0004B8, "Member 'UUserActionMenu_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UUserActionMenu_C, EntryBorder) == 0x0004C0, "Member 'UUserActionMenu_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UUserActionMenu_C, Image_Platform) == 0x0004C8, "Member 'UUserActionMenu_C::Image_Platform' has a wrong offset!");

}
