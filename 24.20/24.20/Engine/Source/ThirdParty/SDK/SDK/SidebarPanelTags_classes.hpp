#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelTags_C final : public UFortSidebarPanelTags
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelTags_C">();
	}
	static class USidebarPanelTags_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelTags_C>();
	}
};
static_assert(alignof(USidebarPanelTags_C) == 0x000008, "Wrong alignment on USidebarPanelTags_C");
static_assert(sizeof(USidebarPanelTags_C) == 0x000490, "Wrong size on USidebarPanelTags_C");

}
