#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct DefaultNotification_C_ExecuteUbergraph_DefaultNotification final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(DefaultNotification_C_ExecuteUbergraph_DefaultNotification) == 0x000004, "Wrong alignment on DefaultNotification_C_ExecuteUbergraph_DefaultNotification");
static_assert(sizeof(DefaultNotification_C_ExecuteUbergraph_DefaultNotification) == 0x000004, "Wrong size on DefaultNotification_C_ExecuteUbergraph_DefaultNotification");
static_assert(offsetof(DefaultNotification_C_ExecuteUbergraph_DefaultNotification, EntryPoint) == 0x000000, "Member 'DefaultNotification_C_ExecuteUbergraph_DefaultNotification::EntryPoint' has a wrong offset!");

}
