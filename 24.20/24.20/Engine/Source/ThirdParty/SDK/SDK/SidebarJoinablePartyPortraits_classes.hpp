#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarJoinablePartyPortraits_C final : public UFortJoinablePartyPortraitsDisplay
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarJoinablePartyPortraits_C">();
	}
	static class USidebarJoinablePartyPortraits_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarJoinablePartyPortraits_C>();
	}
};
static_assert(alignof(USidebarJoinablePartyPortraits_C) == 0x000008, "Wrong alignment on USidebarJoinablePartyPortraits_C");
static_assert(sizeof(USidebarJoinablePartyPortraits_C) == 0x000290, "Wrong size on USidebarJoinablePartyPortraits_C");

}
