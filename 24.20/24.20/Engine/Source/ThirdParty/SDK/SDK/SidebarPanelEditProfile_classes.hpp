#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelEditProfile_C final : public UFortSidebarPanelEditProfile
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelEditProfile_C">();
	}
	static class USidebarPanelEditProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelEditProfile_C>();
	}
};
static_assert(alignof(USidebarPanelEditProfile_C) == 0x000008, "Wrong alignment on USidebarPanelEditProfile_C");
static_assert(sizeof(USidebarPanelEditProfile_C) == 0x0003A8, "Wrong size on USidebarPanelEditProfile_C");

}
