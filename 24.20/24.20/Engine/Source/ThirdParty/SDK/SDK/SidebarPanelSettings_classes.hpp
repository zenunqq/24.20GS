#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelSettings_C final : public UFortSidebarPanelSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelSettings_C">();
	}
	static class USidebarPanelSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelSettings_C>();
	}
};
static_assert(alignof(USidebarPanelSettings_C) == 0x000008, "Wrong alignment on USidebarPanelSettings_C");
static_assert(sizeof(USidebarPanelSettings_C) == 0x0003C0, "Wrong size on USidebarPanelSettings_C");

}
