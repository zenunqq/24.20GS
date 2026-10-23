#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelFindFriends_C final : public UFortSidebarPanelFindFriends
{
public:
	class UImage*                                 CircularThrobber_UserSearch;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelFindFriends_C">();
	}
	static class USidebarPanelFindFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelFindFriends_C>();
	}
};
static_assert(alignof(USidebarPanelFindFriends_C) == 0x000008, "Wrong alignment on USidebarPanelFindFriends_C");
static_assert(sizeof(USidebarPanelFindFriends_C) == 0x000450, "Wrong size on USidebarPanelFindFriends_C");
static_assert(offsetof(USidebarPanelFindFriends_C, CircularThrobber_UserSearch) == 0x000448, "Member 'USidebarPanelFindFriends_C::CircularThrobber_UserSearch' has a wrong offset!");

}
