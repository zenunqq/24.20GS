#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea) == 0x000004, "Wrong alignment on ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea");
static_assert(sizeof(ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea) == 0x000004, "Wrong size on ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea");
static_assert(offsetof(ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea, EntryPoint) == 0x000000, "Member 'ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea::EntryPoint' has a wrong offset!");

}
