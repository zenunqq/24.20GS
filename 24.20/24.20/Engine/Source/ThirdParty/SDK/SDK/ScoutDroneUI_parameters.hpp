#pragma once

#include "Basic.hpp"

#include "ScoutDroneRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct DronePickUpIndicatorComponent_Init final
{
public:
	class AFortScoutDrone*                        Drone;
};
static_assert(alignof(DronePickUpIndicatorComponent_Init) == 0x000008, "Wrong alignment on DronePickUpIndicatorComponent_Init");
static_assert(sizeof(DronePickUpIndicatorComponent_Init) == 0x000008, "Wrong size on DronePickUpIndicatorComponent_Init");
static_assert(offsetof(DronePickUpIndicatorComponent_Init, Drone) == 0x000000, "Member 'DronePickUpIndicatorComponent_Init::Drone' has a wrong offset!");

struct DronePickUpIndicatorComponent_OnDroneDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(DronePickUpIndicatorComponent_OnDroneDestroyed) == 0x000008, "Wrong alignment on DronePickUpIndicatorComponent_OnDroneDestroyed");
static_assert(sizeof(DronePickUpIndicatorComponent_OnDroneDestroyed) == 0x000008, "Wrong size on DronePickUpIndicatorComponent_OnDroneDestroyed");
static_assert(offsetof(DronePickUpIndicatorComponent_OnDroneDestroyed, DestroyedActor) == 0x000000, "Member 'DronePickUpIndicatorComponent_OnDroneDestroyed::DestroyedActor' has a wrong offset!");

struct ScoutDroneHUD_GetTargetConfirmationTime final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(ScoutDroneHUD_GetTargetConfirmationTime) == 0x000004, "Wrong alignment on ScoutDroneHUD_GetTargetConfirmationTime");
static_assert(sizeof(ScoutDroneHUD_GetTargetConfirmationTime) == 0x000004, "Wrong size on ScoutDroneHUD_GetTargetConfirmationTime");
static_assert(offsetof(ScoutDroneHUD_GetTargetConfirmationTime, ReturnValue) == 0x000000, "Member 'ScoutDroneHUD_GetTargetConfirmationTime::ReturnValue' has a wrong offset!");

struct ScoutDroneHUD_OnDroneEnergyChanged final
{
public:
	float                                         EnergyPercentage;
};
static_assert(alignof(ScoutDroneHUD_OnDroneEnergyChanged) == 0x000004, "Wrong alignment on ScoutDroneHUD_OnDroneEnergyChanged");
static_assert(sizeof(ScoutDroneHUD_OnDroneEnergyChanged) == 0x000004, "Wrong size on ScoutDroneHUD_OnDroneEnergyChanged");
static_assert(offsetof(ScoutDroneHUD_OnDroneEnergyChanged, EnergyPercentage) == 0x000000, "Member 'ScoutDroneHUD_OnDroneEnergyChanged::EnergyPercentage' has a wrong offset!");

struct ScoutDroneHUD_OnDroneHealthUpdated final
{
public:
	float                                         HealthPercentage;
	float                                         CurrentHealth;
};
static_assert(alignof(ScoutDroneHUD_OnDroneHealthUpdated) == 0x000004, "Wrong alignment on ScoutDroneHUD_OnDroneHealthUpdated");
static_assert(sizeof(ScoutDroneHUD_OnDroneHealthUpdated) == 0x000008, "Wrong size on ScoutDroneHUD_OnDroneHealthUpdated");
static_assert(offsetof(ScoutDroneHUD_OnDroneHealthUpdated, HealthPercentage) == 0x000000, "Member 'ScoutDroneHUD_OnDroneHealthUpdated::HealthPercentage' has a wrong offset!");
static_assert(offsetof(ScoutDroneHUD_OnDroneHealthUpdated, CurrentHealth) == 0x000004, "Member 'ScoutDroneHUD_OnDroneHealthUpdated::CurrentHealth' has a wrong offset!");

struct ScoutDroneHUD_OnDroneSignalDataUpdated final
{
public:
	float                                         DistanceFromPlayer;
	float                                         SignalPercentage;
};
static_assert(alignof(ScoutDroneHUD_OnDroneSignalDataUpdated) == 0x000004, "Wrong alignment on ScoutDroneHUD_OnDroneSignalDataUpdated");
static_assert(sizeof(ScoutDroneHUD_OnDroneSignalDataUpdated) == 0x000008, "Wrong size on ScoutDroneHUD_OnDroneSignalDataUpdated");
static_assert(offsetof(ScoutDroneHUD_OnDroneSignalDataUpdated, DistanceFromPlayer) == 0x000000, "Member 'ScoutDroneHUD_OnDroneSignalDataUpdated::DistanceFromPlayer' has a wrong offset!");
static_assert(offsetof(ScoutDroneHUD_OnDroneSignalDataUpdated, SignalPercentage) == 0x000004, "Member 'ScoutDroneHUD_OnDroneSignalDataUpdated::SignalPercentage' has a wrong offset!");

struct ScoutDroneHUD_OnReticleChangeAbilityActivated final
{
public:
	struct FGameplayTag                           UpdatedTag;
};
static_assert(alignof(ScoutDroneHUD_OnReticleChangeAbilityActivated) == 0x000004, "Wrong alignment on ScoutDroneHUD_OnReticleChangeAbilityActivated");
static_assert(sizeof(ScoutDroneHUD_OnReticleChangeAbilityActivated) == 0x000004, "Wrong size on ScoutDroneHUD_OnReticleChangeAbilityActivated");
static_assert(offsetof(ScoutDroneHUD_OnReticleChangeAbilityActivated, UpdatedTag) == 0x000000, "Member 'ScoutDroneHUD_OnReticleChangeAbilityActivated::UpdatedTag' has a wrong offset!");

struct ScoutDroneHUD_OnTargetingStatusChanged final
{
public:
	struct FScoutDroneStatusData                  StatusData;
};
static_assert(alignof(ScoutDroneHUD_OnTargetingStatusChanged) == 0x000004, "Wrong alignment on ScoutDroneHUD_OnTargetingStatusChanged");
static_assert(sizeof(ScoutDroneHUD_OnTargetingStatusChanged) == 0x000008, "Wrong size on ScoutDroneHUD_OnTargetingStatusChanged");
static_assert(offsetof(ScoutDroneHUD_OnTargetingStatusChanged, StatusData) == 0x000000, "Member 'ScoutDroneHUD_OnTargetingStatusChanged::StatusData' has a wrong offset!");

struct ScoutDroneHUD_GetControlledDrone final
{
public:
	class AFortScoutDrone*                        ReturnValue;
};
static_assert(alignof(ScoutDroneHUD_GetControlledDrone) == 0x000008, "Wrong alignment on ScoutDroneHUD_GetControlledDrone");
static_assert(sizeof(ScoutDroneHUD_GetControlledDrone) == 0x000008, "Wrong size on ScoutDroneHUD_GetControlledDrone");
static_assert(offsetof(ScoutDroneHUD_GetControlledDrone, ReturnValue) == 0x000000, "Member 'ScoutDroneHUD_GetControlledDrone::ReturnValue' has a wrong offset!");

struct ScoutDroneTetherIndicator_BP_WhileInWarningRange final
{
public:
	float                                         SignalIntensityPercentage;
};
static_assert(alignof(ScoutDroneTetherIndicator_BP_WhileInWarningRange) == 0x000004, "Wrong alignment on ScoutDroneTetherIndicator_BP_WhileInWarningRange");
static_assert(sizeof(ScoutDroneTetherIndicator_BP_WhileInWarningRange) == 0x000004, "Wrong size on ScoutDroneTetherIndicator_BP_WhileInWarningRange");
static_assert(offsetof(ScoutDroneTetherIndicator_BP_WhileInWarningRange, SignalIntensityPercentage) == 0x000000, "Member 'ScoutDroneTetherIndicator_BP_WhileInWarningRange::SignalIntensityPercentage' has a wrong offset!");

struct ScoutDroneTetherIndicator_GetControlledDrone final
{
public:
	class AFortScoutDrone*                        ReturnValue;
};
static_assert(alignof(ScoutDroneTetherIndicator_GetControlledDrone) == 0x000008, "Wrong alignment on ScoutDroneTetherIndicator_GetControlledDrone");
static_assert(sizeof(ScoutDroneTetherIndicator_GetControlledDrone) == 0x000008, "Wrong size on ScoutDroneTetherIndicator_GetControlledDrone");
static_assert(offsetof(ScoutDroneTetherIndicator_GetControlledDrone, ReturnValue) == 0x000000, "Member 'ScoutDroneTetherIndicator_GetControlledDrone::ReturnValue' has a wrong offset!");

}
