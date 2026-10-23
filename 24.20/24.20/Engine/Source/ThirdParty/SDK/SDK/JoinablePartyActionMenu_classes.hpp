#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UJoinablePartyActionMenu_C final : public UFortJoinablePartyActionMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       ConfirmationOpened;
	class UWidgetAnimation*                       Opened;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UBorder*                                EntryBorder;

public:
	void ExecuteUbergraph_JoinablePartyActionMenu(int32 EntryPoint);
	void OnOpened();
	void OnToggleConfirmation(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinablePartyActionMenu_C">();
	}
	static class UJoinablePartyActionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinablePartyActionMenu_C>();
	}
};
static_assert(alignof(UJoinablePartyActionMenu_C) == 0x000008, "Wrong alignment on UJoinablePartyActionMenu_C");
static_assert(sizeof(UJoinablePartyActionMenu_C) == 0x0004D8, "Wrong size on UJoinablePartyActionMenu_C");
static_assert(offsetof(UJoinablePartyActionMenu_C, UberGraphFrame) == 0x0004B0, "Member 'UJoinablePartyActionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UJoinablePartyActionMenu_C, ConfirmationOpened) == 0x0004B8, "Member 'UJoinablePartyActionMenu_C::ConfirmationOpened' has a wrong offset!");
static_assert(offsetof(UJoinablePartyActionMenu_C, Opened) == 0x0004C0, "Member 'UJoinablePartyActionMenu_C::Opened' has a wrong offset!");
static_assert(offsetof(UJoinablePartyActionMenu_C, Border_OnlineStatusIndicator) == 0x0004C8, "Member 'UJoinablePartyActionMenu_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(UJoinablePartyActionMenu_C, EntryBorder) == 0x0004D0, "Member 'UJoinablePartyActionMenu_C::EntryBorder' has a wrong offset!");

}
