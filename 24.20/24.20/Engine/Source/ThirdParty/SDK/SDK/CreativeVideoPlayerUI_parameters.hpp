#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress) == 0x000004, "Wrong alignment on CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress");
static_assert(sizeof(CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress) == 0x000004, "Wrong size on CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress");
static_assert(offsetof(CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress, HeldPercent) == 0x000000, "Member 'CreativeVideoPlayerFullScreenWidget_OnSkipButtonActionProgress::HeldPercent' has a wrong offset!");

}
