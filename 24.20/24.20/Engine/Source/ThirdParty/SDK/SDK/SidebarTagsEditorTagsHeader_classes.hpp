#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarTagsEditorTagsHeader_C final : public USidebarTagsEditorHeaderWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarTagsEditorTagsHeader_C">();
	}
	static class USidebarTagsEditorTagsHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarTagsEditorTagsHeader_C>();
	}
};
static_assert(alignof(USidebarTagsEditorTagsHeader_C) == 0x000008, "Wrong alignment on USidebarTagsEditorTagsHeader_C");
static_assert(sizeof(USidebarTagsEditorTagsHeader_C) == 0x0004B0, "Wrong size on USidebarTagsEditorTagsHeader_C");

}
