#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USideBarProfileSubPanelActions_C final : public UFortSocialProfileActions
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SideBarProfileSubPanelActions_C">();
	}
	static class USideBarProfileSubPanelActions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USideBarProfileSubPanelActions_C>();
	}
};
static_assert(alignof(USideBarProfileSubPanelActions_C) == 0x000008, "Wrong alignment on USideBarProfileSubPanelActions_C");
static_assert(sizeof(USideBarProfileSubPanelActions_C) == 0x000330, "Wrong size on USideBarProfileSubPanelActions_C");

}
