#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen) == 0x000004, "Wrong alignment on HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen");
static_assert(sizeof(HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen) == 0x000004, "Wrong size on HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen");
static_assert(offsetof(HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen, EntryPoint) == 0x000000, "Member 'HealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen::EntryPoint' has a wrong offset!");

}
