#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelFriendRequest_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelFriendRequest_C">();
	}
	static class USidebarProfileSubPanelFriendRequest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelFriendRequest_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelFriendRequest_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelFriendRequest_C");
static_assert(sizeof(USidebarProfileSubPanelFriendRequest_C) == 0x000268, "Wrong size on USidebarProfileSubPanelFriendRequest_C");

}
