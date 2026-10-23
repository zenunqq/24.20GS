#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSocialTagEditorTagList_C final : public USidebarSocialTagListBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialTagEditorTagList_C">();
	}
	static class USidebarSocialTagEditorTagList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialTagEditorTagList_C>();
	}
};
static_assert(alignof(USidebarSocialTagEditorTagList_C) == 0x000008, "Wrong alignment on USidebarSocialTagEditorTagList_C");
static_assert(sizeof(USidebarSocialTagEditorTagList_C) == 0x000460, "Wrong size on USidebarSocialTagEditorTagList_C");

}
