#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UReferAFriendActionMenu_C final : public UFortReferFriendActionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UCommonRichTextBlock*                   CommonRichTextBlock;
	class UCommonRichTextBlock*                   CommonRichTextBlock_143;
	class UBorder*                                EntryBorder;
	class UImage*                                 Image_AddFriendsQR;
	class UImage*                                 Image_PartyUpQR;
	class UImage*                                 Image_Platform;
	class UCommonRichTextBlock*                   Text_DisplayName;
	class UWidgetSwitcher*                        WidgetSwitcher_QR;

public:
	void ExecuteUbergraph_ReferAFriendActionMenu(int32 EntryPoint);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnOpened();
	void OnRequestOriginChanged(EReferFriendOrigin RequestOrigin);
	void Set_QRt_Image(EReferFriendOrigin Origin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReferAFriendActionMenu_C">();
	}
	static class UReferAFriendActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReferAFriendActionMenu_C>();
	}
};
static_assert(alignof(UReferAFriendActionMenu_C) == 0x000008, "Wrong alignment on UReferAFriendActionMenu_C");
static_assert(sizeof(UReferAFriendActionMenu_C) == 0x000450, "Wrong size on UReferAFriendActionMenu_C");
static_assert(offsetof(UReferAFriendActionMenu_C, UberGraphFrame) == 0x0003F0, "Member 'UReferAFriendActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, ConfirmationOpened) == 0x0003F8, "Member 'UReferAFriendActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, Opened) == 0x000400, "Member 'UReferAFriendActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, Border_OnlineStatusIndicator) == 0x000408, "Member 'UReferAFriendActionMenu_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, CommonRichTextBlock) == 0x000410, "Member 'UReferAFriendActionMenu_C::CommonRichTextBlock' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, CommonRichTextBlock_143) == 0x000418, "Member 'UReferAFriendActionMenu_C::CommonRichTextBlock_143' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, EntryBorder) == 0x000420, "Member 'UReferAFriendActionMenu_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, Image_AddFriendsQR) == 0x000428, "Member 'UReferAFriendActionMenu_C::Image_AddFriendsQR' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, Image_PartyUpQR) == 0x000430, "Member 'UReferAFriendActionMenu_C::Image_PartyUpQR' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, Image_Platform) == 0x000438, "Member 'UReferAFriendActionMenu_C::Image_Platform' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, Text_DisplayName) == 0x000440, "Member 'UReferAFriendActionMenu_C::Text_DisplayName' has a wrong offset!");
static_assert(offsetof(UReferAFriendActionMenu_C, WidgetSwitcher_QR) == 0x000448, "Member 'UReferAFriendActionMenu_C::WidgetSwitcher_QR' has a wrong offset!");

}
