#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelRegion_C final : public UFortSocialProfileRegion
{
public:
	class UImage*                                 Image_63;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelRegion_C">();
	}
	static class USidebarProfileSubPanelRegion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelRegion_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelRegion_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelRegion_C");
static_assert(sizeof(USidebarProfileSubPanelRegion_C) == 0x000300, "Wrong size on USidebarProfileSubPanelRegion_C");
static_assert(offsetof(USidebarProfileSubPanelRegion_C, Image_63) == 0x0002F8, "Member 'USidebarProfileSubPanelRegion_C::Image_63' has a wrong offset!");

}
