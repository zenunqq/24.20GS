#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSocialTagListEditable_C final : public USidebarSocialTagListEditable
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialTagListEditable_C">();
	}
	static class USidebarSocialTagListEditable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialTagListEditable_C>();
	}
};
static_assert(alignof(USidebarSocialTagListEditable_C) == 0x000008, "Wrong alignment on USidebarSocialTagListEditable_C");
static_assert(sizeof(USidebarSocialTagListEditable_C) == 0x000470, "Wrong size on USidebarSocialTagListEditable_C");

}
