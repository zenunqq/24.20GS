#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarButtons_C_ExecuteUbergraph_SidebarButtons final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
};
static_assert(alignof(SidebarButtons_C_ExecuteUbergraph_SidebarButtons) == 0x000004, "Wrong alignment on SidebarButtons_C_ExecuteUbergraph_SidebarButtons");
static_assert(sizeof(SidebarButtons_C_ExecuteUbergraph_SidebarButtons) == 0x000008, "Wrong size on SidebarButtons_C_ExecuteUbergraph_SidebarButtons");
static_assert(offsetof(SidebarButtons_C_ExecuteUbergraph_SidebarButtons, EntryPoint) == 0x000000, "Member 'SidebarButtons_C_ExecuteUbergraph_SidebarButtons::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarButtons_C_ExecuteUbergraph_SidebarButtons, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'SidebarButtons_C_ExecuteUbergraph_SidebarButtons::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

}
