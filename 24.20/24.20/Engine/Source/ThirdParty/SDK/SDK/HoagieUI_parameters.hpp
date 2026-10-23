#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortHoagieVehicleReticle_OnSetupComplete final
{
public:
	bool                                          bVehicleUsesFuelSystem;
};
static_assert(alignof(FortHoagieVehicleReticle_OnSetupComplete) == 0x000001, "Wrong alignment on FortHoagieVehicleReticle_OnSetupComplete");
static_assert(sizeof(FortHoagieVehicleReticle_OnSetupComplete) == 0x000001, "Wrong size on FortHoagieVehicleReticle_OnSetupComplete");
static_assert(offsetof(FortHoagieVehicleReticle_OnSetupComplete, bVehicleUsesFuelSystem) == 0x000000, "Member 'FortHoagieVehicleReticle_OnSetupComplete::bVehicleUsesFuelSystem' has a wrong offset!");

}
