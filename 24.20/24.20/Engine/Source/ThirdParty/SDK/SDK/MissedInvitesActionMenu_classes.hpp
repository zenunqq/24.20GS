#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMissedInvitesActionMenu_C final : public UFortMissedInvitesActionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UCommonRichTextBlock*                   CommonRichTextBlock;
	class UCommonRichTextBlock*                   CommonRichTextBlock_143;
	class UBorder*                                EntryBorder;
	class UImage*                                 Image_119;
	class UImage*                                 Image_Platform;
	class UCommonRichTextBlock*                   Text_DisplayName;

public:
	void ExecuteUbergraph_MissedInvitesActionMenu(int32 EntryPoint);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnOpened();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissedInvitesActionMenu_C">();
	}
	static class UMissedInvitesActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissedInvitesActionMenu_C>();
	}
};
static_assert(alignof(UMissedInvitesActionMenu_C) == 0x000008, "Wrong alignment on UMissedInvitesActionMenu_C");
static_assert(sizeof(UMissedInvitesActionMenu_C) == 0x000440, "Wrong size on UMissedInvitesActionMenu_C");
static_assert(offsetof(UMissedInvitesActionMenu_C, UberGraphFrame) == 0x0003F0, "Member 'UMissedInvitesActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, ConfirmationOpened) == 0x0003F8, "Member 'UMissedInvitesActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, Opened) == 0x000400, "Member 'UMissedInvitesActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, Border_OnlineStatusIndicator) == 0x000408, "Member 'UMissedInvitesActionMenu_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, CommonRichTextBlock) == 0x000410, "Member 'UMissedInvitesActionMenu_C::CommonRichTextBlock' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, CommonRichTextBlock_143) == 0x000418, "Member 'UMissedInvitesActionMenu_C::CommonRichTextBlock_143' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, EntryBorder) == 0x000420, "Member 'UMissedInvitesActionMenu_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, Image_119) == 0x000428, "Member 'UMissedInvitesActionMenu_C::Image_119' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, Image_Platform) == 0x000430, "Member 'UMissedInvitesActionMenu_C::Image_Platform' has a wrong offset!");
static_assert(offsetof(UMissedInvitesActionMenu_C, Text_DisplayName) == 0x000438, "Member 'UMissedInvitesActionMenu_C::Text_DisplayName' has a wrong offset!");

}
