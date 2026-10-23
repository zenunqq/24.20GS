#pragma once

#include "Basic.hpp"

#include "NevadaRuntime_structs.hpp"

namespace SDK::Params
{

struct FortNevadaVehicleReticle_OnBatteryChanged final
{
public:
	float                                         BatteryLevel;
};
static_assert(alignof(FortNevadaVehicleReticle_OnBatteryChanged) == 0x000004, "Wrong alignment on FortNevadaVehicleReticle_OnBatteryChanged");
static_assert(sizeof(FortNevadaVehicleReticle_OnBatteryChanged) == 0x000004, "Wrong size on FortNevadaVehicleReticle_OnBatteryChanged");
static_assert(offsetof(FortNevadaVehicleReticle_OnBatteryChanged, BatteryLevel) == 0x000000, "Member 'FortNevadaVehicleReticle_OnBatteryChanged::BatteryLevel' has a wrong offset!");

struct FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged) == 0x000001, "Wrong alignment on FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged");
static_assert(sizeof(FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged) == 0x000001, "Wrong size on FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged");
static_assert(offsetof(FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged, bEnabled) == 0x000000, "Member 'FortNevadaVehicleReticle_OnEnergyCannonEnabledChanged::bEnabled' has a wrong offset!");

struct FortNevadaVehicleReticle_OnEnergyCanonFired final
{
public:
	float                                         Cooldown;
};
static_assert(alignof(FortNevadaVehicleReticle_OnEnergyCanonFired) == 0x000004, "Wrong alignment on FortNevadaVehicleReticle_OnEnergyCanonFired");
static_assert(sizeof(FortNevadaVehicleReticle_OnEnergyCanonFired) == 0x000004, "Wrong size on FortNevadaVehicleReticle_OnEnergyCanonFired");
static_assert(offsetof(FortNevadaVehicleReticle_OnEnergyCanonFired, Cooldown) == 0x000000, "Member 'FortNevadaVehicleReticle_OnEnergyCanonFired::Cooldown' has a wrong offset!");

struct FortNevadaVehicleReticle_OnTractorBeamDeactivated final
{
public:
	float                                         Cooldown;
};
static_assert(alignof(FortNevadaVehicleReticle_OnTractorBeamDeactivated) == 0x000004, "Wrong alignment on FortNevadaVehicleReticle_OnTractorBeamDeactivated");
static_assert(sizeof(FortNevadaVehicleReticle_OnTractorBeamDeactivated) == 0x000004, "Wrong size on FortNevadaVehicleReticle_OnTractorBeamDeactivated");
static_assert(offsetof(FortNevadaVehicleReticle_OnTractorBeamDeactivated, Cooldown) == 0x000000, "Member 'FortNevadaVehicleReticle_OnTractorBeamDeactivated::Cooldown' has a wrong offset!");

struct FortNevadaVehicleReticle_OnTractorBeamEnabledChanged final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(FortNevadaVehicleReticle_OnTractorBeamEnabledChanged) == 0x000001, "Wrong alignment on FortNevadaVehicleReticle_OnTractorBeamEnabledChanged");
static_assert(sizeof(FortNevadaVehicleReticle_OnTractorBeamEnabledChanged) == 0x000001, "Wrong size on FortNevadaVehicleReticle_OnTractorBeamEnabledChanged");
static_assert(offsetof(FortNevadaVehicleReticle_OnTractorBeamEnabledChanged, bEnabled) == 0x000000, "Member 'FortNevadaVehicleReticle_OnTractorBeamEnabledChanged::bEnabled' has a wrong offset!");

struct FortNevadaVehicleReticle_OnVehicleStateChanged final
{
public:
	ENevadaFlightStates                           VehicleState;
};
static_assert(alignof(FortNevadaVehicleReticle_OnVehicleStateChanged) == 0x000001, "Wrong alignment on FortNevadaVehicleReticle_OnVehicleStateChanged");
static_assert(sizeof(FortNevadaVehicleReticle_OnVehicleStateChanged) == 0x000001, "Wrong size on FortNevadaVehicleReticle_OnVehicleStateChanged");
static_assert(offsetof(FortNevadaVehicleReticle_OnVehicleStateChanged, VehicleState) == 0x000000, "Member 'FortNevadaVehicleReticle_OnVehicleStateChanged::VehicleState' has a wrong offset!");

struct NevadaTargetIndicator_OnTractorBeamActivated final
{
public:
	bool                                          bActivated;
};
static_assert(alignof(NevadaTargetIndicator_OnTractorBeamActivated) == 0x000001, "Wrong alignment on NevadaTargetIndicator_OnTractorBeamActivated");
static_assert(sizeof(NevadaTargetIndicator_OnTractorBeamActivated) == 0x000001, "Wrong size on NevadaTargetIndicator_OnTractorBeamActivated");
static_assert(offsetof(NevadaTargetIndicator_OnTractorBeamActivated, bActivated) == 0x000000, "Member 'NevadaTargetIndicator_OnTractorBeamActivated::bActivated' has a wrong offset!");

struct NevadaTargetIndicator_OnTractorBeamAttached final
{
public:
	bool                                          bAttached;
};
static_assert(alignof(NevadaTargetIndicator_OnTractorBeamAttached) == 0x000001, "Wrong alignment on NevadaTargetIndicator_OnTractorBeamAttached");
static_assert(sizeof(NevadaTargetIndicator_OnTractorBeamAttached) == 0x000001, "Wrong size on NevadaTargetIndicator_OnTractorBeamAttached");
static_assert(offsetof(NevadaTargetIndicator_OnTractorBeamAttached, bAttached) == 0x000000, "Member 'NevadaTargetIndicator_OnTractorBeamAttached::bAttached' has a wrong offset!");

}
