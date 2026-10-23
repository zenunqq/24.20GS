#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged final
{
public:
	bool                                          bIsQuickbarEquipped;
};
static_assert(alignof(DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged) == 0x000001, "Wrong alignment on DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged");
static_assert(sizeof(DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged) == 0x000001, "Wrong size on DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged");
static_assert(offsetof(DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged, bIsQuickbarEquipped) == 0x000000, "Member 'DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged::bIsQuickbarEquipped' has a wrong offset!");

}
