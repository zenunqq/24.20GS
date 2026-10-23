#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UWBP_PanelRebootRally_C final : public UFortSidebarPanelReboot
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PanelRebootRally_C">();
	}
	static class UWBP_PanelRebootRally_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PanelRebootRally_C>();
	}
};
static_assert(alignof(UWBP_PanelRebootRally_C) == 0x000008, "Wrong alignment on UWBP_PanelRebootRally_C");
static_assert(sizeof(UWBP_PanelRebootRally_C) == 0x000420, "Wrong size on UWBP_PanelRebootRally_C");

}
