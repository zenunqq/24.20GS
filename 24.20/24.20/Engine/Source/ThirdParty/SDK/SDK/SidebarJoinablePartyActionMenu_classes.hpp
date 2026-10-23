#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarJoinablePartyActionMenu_C final : public UFortJoinablePartyActionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UCommonRichTextBlock*                   CommonRichTextBlock_PartyMembers;

public:
	void ExecuteUbergraph_SidebarJoinablePartyActionMenu(int32 EntryPoint);
	void OnOpened();
	void OnToggleConfirmation(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarJoinablePartyActionMenu_C">();
	}
	static class USidebarJoinablePartyActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarJoinablePartyActionMenu_C>();
	}
};
static_assert(alignof(USidebarJoinablePartyActionMenu_C) == 0x000008, "Wrong alignment on USidebarJoinablePartyActionMenu_C");
static_assert(sizeof(USidebarJoinablePartyActionMenu_C) == 0x0004D0, "Wrong size on USidebarJoinablePartyActionMenu_C");
static_assert(offsetof(USidebarJoinablePartyActionMenu_C, UberGraphFrame) == 0x0004B0, "Member 'USidebarJoinablePartyActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyActionMenu_C, ConfirmationOpened) == 0x0004B8, "Member 'USidebarJoinablePartyActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyActionMenu_C, Opened) == 0x0004C0, "Member 'USidebarJoinablePartyActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(USidebarJoinablePartyActionMenu_C, CommonRichTextBlock_PartyMembers) == 0x0004C8, "Member 'USidebarJoinablePartyActionMenu_C::CommonRichTextBlock_PartyMembers' has a wrong offset!");

}
