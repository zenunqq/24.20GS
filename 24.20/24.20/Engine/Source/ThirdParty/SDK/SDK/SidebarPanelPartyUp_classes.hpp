#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelPartyUp_C final : public UFortSidebarPanelPartyUp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelPartyUp_C">();
	}
	static class USidebarPanelPartyUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelPartyUp_C>();
	}
};
static_assert(alignof(USidebarPanelPartyUp_C) == 0x000008, "Wrong alignment on USidebarPanelPartyUp_C");
static_assert(sizeof(USidebarPanelPartyUp_C) == 0x0003F8, "Wrong size on USidebarPanelPartyUp_C");

}
