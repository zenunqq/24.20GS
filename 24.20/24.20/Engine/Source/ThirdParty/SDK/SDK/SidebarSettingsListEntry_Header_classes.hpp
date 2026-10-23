#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSettingsListEntry_Header_C final : public UFortSettingsListEntry_Setting
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSettingsListEntry_Header_C">();
	}
	static class USidebarSettingsListEntry_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSettingsListEntry_Header_C>();
	}
};
static_assert(alignof(USidebarSettingsListEntry_Header_C) == 0x000008, "Wrong alignment on USidebarSettingsListEntry_Header_C");
static_assert(sizeof(USidebarSettingsListEntry_Header_C) == 0x0002D0, "Wrong size on USidebarSettingsListEntry_Header_C");

}
