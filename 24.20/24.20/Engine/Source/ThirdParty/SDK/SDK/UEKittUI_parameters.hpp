#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct UEKittUIPanelWidget_SetupInput final
{
public:
	bool                                          bSetup;
};
static_assert(alignof(UEKittUIPanelWidget_SetupInput) == 0x000001, "Wrong alignment on UEKittUIPanelWidget_SetupInput");
static_assert(sizeof(UEKittUIPanelWidget_SetupInput) == 0x000001, "Wrong size on UEKittUIPanelWidget_SetupInput");
static_assert(offsetof(UEKittUIPanelWidget_SetupInput, bSetup) == 0x000000, "Member 'UEKittUIPanelWidget_SetupInput::bSetup' has a wrong offset!");

}
