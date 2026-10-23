#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct Sidebar_C_ExecuteUbergraph_Sidebar final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(Sidebar_C_ExecuteUbergraph_Sidebar) == 0x000004, "Wrong alignment on Sidebar_C_ExecuteUbergraph_Sidebar");
static_assert(sizeof(Sidebar_C_ExecuteUbergraph_Sidebar) == 0x000004, "Wrong size on Sidebar_C_ExecuteUbergraph_Sidebar");
static_assert(offsetof(Sidebar_C_ExecuteUbergraph_Sidebar, EntryPoint) == 0x000000, "Member 'Sidebar_C_ExecuteUbergraph_Sidebar::EntryPoint' has a wrong offset!");

}
