#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelMutualFriends_C final : public UFortSocialProfileMutualFriends
{
public:
	class UCommonTextBlock*                       Text_MutualFriends;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelMutualFriends_C">();
	}
	static class USidebarProfileSubPanelMutualFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelMutualFriends_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelMutualFriends_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelMutualFriends_C");
static_assert(sizeof(USidebarProfileSubPanelMutualFriends_C) == 0x000320, "Wrong size on USidebarProfileSubPanelMutualFriends_C");
static_assert(offsetof(USidebarProfileSubPanelMutualFriends_C, Text_MutualFriends) == 0x000318, "Member 'USidebarProfileSubPanelMutualFriends_C::Text_MutualFriends' has a wrong offset!");

}
