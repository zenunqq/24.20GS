#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSocialTagList_C final : public USidebarSocialTagListBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialTagList_C">();
	}
	static class USidebarSocialTagList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialTagList_C>();
	}
};
static_assert(alignof(USidebarSocialTagList_C) == 0x000008, "Wrong alignment on USidebarSocialTagList_C");
static_assert(sizeof(USidebarSocialTagList_C) == 0x000460, "Wrong size on USidebarSocialTagList_C");

}
