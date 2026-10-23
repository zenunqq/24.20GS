#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarJoinablePartyPortraits_New_C final : public UFortJoinablePartyPortraitsDisplay
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarJoinablePartyPortraits_New_C">();
	}
	static class USidebarJoinablePartyPortraits_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarJoinablePartyPortraits_New_C>();
	}
};
static_assert(alignof(USidebarJoinablePartyPortraits_New_C) == 0x000008, "Wrong alignment on USidebarJoinablePartyPortraits_New_C");
static_assert(sizeof(USidebarJoinablePartyPortraits_New_C) == 0x000290, "Wrong size on USidebarJoinablePartyPortraits_New_C");

}
