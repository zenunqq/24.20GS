#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelTags_C final : public UFortSocialProfileTags
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelTags_C">();
	}
	static class USidebarProfileSubPanelTags_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelTags_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelTags_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelTags_C");
static_assert(sizeof(USidebarProfileSubPanelTags_C) == 0x0002F0, "Wrong size on USidebarProfileSubPanelTags_C");

}
