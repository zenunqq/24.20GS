#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarReferAFriendActionMenu_C final : public UFortReferFriendActionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UCommonTextBlock*                       Description;
	class UImage*                                 Image_AddFriendsQR;
	class UImage*                                 Image_PartyUpQR;
	class UImage*                                 Lines;
	class UCommonTextBlock*                       Title;
	class UWidgetSwitcher*                        WidgetSwitcher_QR;

public:
	void ExecuteUbergraph_SidebarReferAFriendActionMenu(int32 EntryPoint);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnOpened();
	void OnRequestOriginChanged(EReferFriendOrigin RequestOrigin);
	void Set_QRt_Image(EReferFriendOrigin Origin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarReferAFriendActionMenu_C">();
	}
	static class USidebarReferAFriendActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarReferAFriendActionMenu_C>();
	}
};
static_assert(alignof(USidebarReferAFriendActionMenu_C) == 0x000008, "Wrong alignment on USidebarReferAFriendActionMenu_C");
static_assert(sizeof(USidebarReferAFriendActionMenu_C) == 0x000438, "Wrong size on USidebarReferAFriendActionMenu_C");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, UberGraphFrame) == 0x0003F0, "Member 'USidebarReferAFriendActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, ConfirmationOpened) == 0x0003F8, "Member 'USidebarReferAFriendActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, Opened) == 0x000400, "Member 'USidebarReferAFriendActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, Description) == 0x000408, "Member 'USidebarReferAFriendActionMenu_C::Description' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, Image_AddFriendsQR) == 0x000410, "Member 'USidebarReferAFriendActionMenu_C::Image_AddFriendsQR' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, Image_PartyUpQR) == 0x000418, "Member 'USidebarReferAFriendActionMenu_C::Image_PartyUpQR' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, Lines) == 0x000420, "Member 'USidebarReferAFriendActionMenu_C::Lines' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, Title) == 0x000428, "Member 'USidebarReferAFriendActionMenu_C::Title' has a wrong offset!");
static_assert(offsetof(USidebarReferAFriendActionMenu_C, WidgetSwitcher_QR) == 0x000430, "Member 'USidebarReferAFriendActionMenu_C::WidgetSwitcher_QR' has a wrong offset!");

}
