#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "RockVehicleRuntime_structs.hpp"
#include "PhysicsCore_structs.hpp"

namespace SDK::Params
{

struct FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity final
{
public:
	float                                         X;
	float                                         Y;
	float                                         Z;
};
static_assert(alignof(FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity) == 0x000004, "Wrong alignment on FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity");
static_assert(sizeof(FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity) == 0x00000C, "Wrong size on FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity, X) == 0x000000, "Member 'FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity::X' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity, Y) == 0x000004, "Member 'FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity::Y' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity, Z) == 0x000008, "Member 'FortCheatManager_RockVehicle_RockVehicleSetBalboaVelocity::Z' has a wrong offset!");

struct FortCheatManager_RockVehicle_RockVehicleSetLocation final
{
public:
	float                                         X;
	float                                         Y;
	float                                         Z;
};
static_assert(alignof(FortCheatManager_RockVehicle_RockVehicleSetLocation) == 0x000004, "Wrong alignment on FortCheatManager_RockVehicle_RockVehicleSetLocation");
static_assert(sizeof(FortCheatManager_RockVehicle_RockVehicleSetLocation) == 0x00000C, "Wrong size on FortCheatManager_RockVehicle_RockVehicleSetLocation");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetLocation, X) == 0x000000, "Member 'FortCheatManager_RockVehicle_RockVehicleSetLocation::X' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetLocation, Y) == 0x000004, "Member 'FortCheatManager_RockVehicle_RockVehicleSetLocation::Y' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetLocation, Z) == 0x000008, "Member 'FortCheatManager_RockVehicle_RockVehicleSetLocation::Z' has a wrong offset!");

struct FortCheatManager_RockVehicle_RockVehicleSetRotation final
{
public:
	float                                         Pitch;
	float                                         Yaw;
	float                                         Roll;
};
static_assert(alignof(FortCheatManager_RockVehicle_RockVehicleSetRotation) == 0x000004, "Wrong alignment on FortCheatManager_RockVehicle_RockVehicleSetRotation");
static_assert(sizeof(FortCheatManager_RockVehicle_RockVehicleSetRotation) == 0x00000C, "Wrong size on FortCheatManager_RockVehicle_RockVehicleSetRotation");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetRotation, Pitch) == 0x000000, "Member 'FortCheatManager_RockVehicle_RockVehicleSetRotation::Pitch' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetRotation, Yaw) == 0x000004, "Member 'FortCheatManager_RockVehicle_RockVehicleSetRotation::Yaw' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetRotation, Roll) == 0x000008, "Member 'FortCheatManager_RockVehicle_RockVehicleSetRotation::Roll' has a wrong offset!");

struct FortCheatManager_RockVehicle_RockVehicleSetVelocity final
{
public:
	float                                         X;
	float                                         Y;
	float                                         Z;
};
static_assert(alignof(FortCheatManager_RockVehicle_RockVehicleSetVelocity) == 0x000004, "Wrong alignment on FortCheatManager_RockVehicle_RockVehicleSetVelocity");
static_assert(sizeof(FortCheatManager_RockVehicle_RockVehicleSetVelocity) == 0x00000C, "Wrong size on FortCheatManager_RockVehicle_RockVehicleSetVelocity");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetVelocity, X) == 0x000000, "Member 'FortCheatManager_RockVehicle_RockVehicleSetVelocity::X' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetVelocity, Y) == 0x000004, "Member 'FortCheatManager_RockVehicle_RockVehicleSetVelocity::Y' has a wrong offset!");
static_assert(offsetof(FortCheatManager_RockVehicle_RockVehicleSetVelocity, Z) == 0x000008, "Member 'FortCheatManager_RockVehicle_RockVehicleSetVelocity::Z' has a wrong offset!");

struct RockVehicle_ServerSetLegacyDamageValues final
{
public:
	bool                                          bDamageFriendlyVehicles;
	bool                                          bDamageOtherVehicles;
	bool                                          bDamageOwnVehicle;
	bool                                          bDamageAllowedFromOtherVehicle;
};
static_assert(alignof(RockVehicle_ServerSetLegacyDamageValues) == 0x000001, "Wrong alignment on RockVehicle_ServerSetLegacyDamageValues");
static_assert(sizeof(RockVehicle_ServerSetLegacyDamageValues) == 0x000004, "Wrong size on RockVehicle_ServerSetLegacyDamageValues");
static_assert(offsetof(RockVehicle_ServerSetLegacyDamageValues, bDamageFriendlyVehicles) == 0x000000, "Member 'RockVehicle_ServerSetLegacyDamageValues::bDamageFriendlyVehicles' has a wrong offset!");
static_assert(offsetof(RockVehicle_ServerSetLegacyDamageValues, bDamageOtherVehicles) == 0x000001, "Member 'RockVehicle_ServerSetLegacyDamageValues::bDamageOtherVehicles' has a wrong offset!");
static_assert(offsetof(RockVehicle_ServerSetLegacyDamageValues, bDamageOwnVehicle) == 0x000002, "Member 'RockVehicle_ServerSetLegacyDamageValues::bDamageOwnVehicle' has a wrong offset!");
static_assert(offsetof(RockVehicle_ServerSetLegacyDamageValues, bDamageAllowedFromOtherVehicle) == 0x000003, "Member 'RockVehicle_ServerSetLegacyDamageValues::bDamageAllowedFromOtherVehicle' has a wrong offset!");

struct RockVehicle_GetCurrentRockRuntimeConfigOverrides final
{
public:
	struct FRockRuntimeConfigOverrides            ReturnValue;
};
static_assert(alignof(RockVehicle_GetCurrentRockRuntimeConfigOverrides) == 0x000001, "Wrong alignment on RockVehicle_GetCurrentRockRuntimeConfigOverrides");
static_assert(sizeof(RockVehicle_GetCurrentRockRuntimeConfigOverrides) == 0x000004, "Wrong size on RockVehicle_GetCurrentRockRuntimeConfigOverrides");
static_assert(offsetof(RockVehicle_GetCurrentRockRuntimeConfigOverrides, ReturnValue) == 0x000000, "Member 'RockVehicle_GetCurrentRockRuntimeConfigOverrides::ReturnValue' has a wrong offset!");

struct RockVehicle_GetDriverInput final
{
public:
	struct FFortAthenaVehicleInputState           ReturnValue;
};
static_assert(alignof(RockVehicle_GetDriverInput) == 0x000008, "Wrong alignment on RockVehicle_GetDriverInput");
static_assert(sizeof(RockVehicle_GetDriverInput) == 0x000040, "Wrong size on RockVehicle_GetDriverInput");
static_assert(offsetof(RockVehicle_GetDriverInput, ReturnValue) == 0x000000, "Member 'RockVehicle_GetDriverInput::ReturnValue' has a wrong offset!");

struct RockVehicle_GetThrottleState final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RockVehicle_GetThrottleState) == 0x000004, "Wrong alignment on RockVehicle_GetThrottleState");
static_assert(sizeof(RockVehicle_GetThrottleState) == 0x000004, "Wrong size on RockVehicle_GetThrottleState");
static_assert(offsetof(RockVehicle_GetThrottleState, ReturnValue) == 0x000000, "Member 'RockVehicle_GetThrottleState::ReturnValue' has a wrong offset!");

struct RockVehicleAbility_GetActiveSeconds final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RockVehicleAbility_GetActiveSeconds) == 0x000004, "Wrong alignment on RockVehicleAbility_GetActiveSeconds");
static_assert(sizeof(RockVehicleAbility_GetActiveSeconds) == 0x000004, "Wrong size on RockVehicleAbility_GetActiveSeconds");
static_assert(offsetof(RockVehicleAbility_GetActiveSeconds, ReturnValue) == 0x000000, "Member 'RockVehicleAbility_GetActiveSeconds::ReturnValue' has a wrong offset!");

struct RockVehicleAbility_GetInactiveSeconds final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RockVehicleAbility_GetInactiveSeconds) == 0x000004, "Wrong alignment on RockVehicleAbility_GetInactiveSeconds");
static_assert(sizeof(RockVehicleAbility_GetInactiveSeconds) == 0x000004, "Wrong size on RockVehicleAbility_GetInactiveSeconds");
static_assert(offsetof(RockVehicleAbility_GetInactiveSeconds, ReturnValue) == 0x000000, "Member 'RockVehicleAbility_GetInactiveSeconds::ReturnValue' has a wrong offset!");

struct RockVehicleAbility_GetVehicle final
{
public:
	class ARockVehicle*                           ReturnValue;
};
static_assert(alignof(RockVehicleAbility_GetVehicle) == 0x000008, "Wrong alignment on RockVehicleAbility_GetVehicle");
static_assert(sizeof(RockVehicleAbility_GetVehicle) == 0x000008, "Wrong size on RockVehicleAbility_GetVehicle");
static_assert(offsetof(RockVehicleAbility_GetVehicle, ReturnValue) == 0x000000, "Member 'RockVehicleAbility_GetVehicle::ReturnValue' has a wrong offset!");

struct RockVehicleBoostTank_GiveBoost final
{
public:
	float                                         Seconds;
};
static_assert(alignof(RockVehicleBoostTank_GiveBoost) == 0x000004, "Wrong alignment on RockVehicleBoostTank_GiveBoost");
static_assert(sizeof(RockVehicleBoostTank_GiveBoost) == 0x000004, "Wrong size on RockVehicleBoostTank_GiveBoost");
static_assert(offsetof(RockVehicleBoostTank_GiveBoost, Seconds) == 0x000000, "Member 'RockVehicleBoostTank_GiveBoost::Seconds' has a wrong offset!");

struct RockVehicleBoostTank_OnRep_SecondsRemaining final
{
public:
	float                                         PrevValue;
};
static_assert(alignof(RockVehicleBoostTank_OnRep_SecondsRemaining) == 0x000004, "Wrong alignment on RockVehicleBoostTank_OnRep_SecondsRemaining");
static_assert(sizeof(RockVehicleBoostTank_OnRep_SecondsRemaining) == 0x000004, "Wrong size on RockVehicleBoostTank_OnRep_SecondsRemaining");
static_assert(offsetof(RockVehicleBoostTank_OnRep_SecondsRemaining, PrevValue) == 0x000000, "Member 'RockVehicleBoostTank_OnRep_SecondsRemaining::PrevValue' has a wrong offset!");

struct RockVehicleBoostTank_GetMaxBoostInSeconds final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RockVehicleBoostTank_GetMaxBoostInSeconds) == 0x000004, "Wrong alignment on RockVehicleBoostTank_GetMaxBoostInSeconds");
static_assert(sizeof(RockVehicleBoostTank_GetMaxBoostInSeconds) == 0x000004, "Wrong size on RockVehicleBoostTank_GetMaxBoostInSeconds");
static_assert(offsetof(RockVehicleBoostTank_GetMaxBoostInSeconds, ReturnValue) == 0x000000, "Member 'RockVehicleBoostTank_GetMaxBoostInSeconds::ReturnValue' has a wrong offset!");

struct RockVehicleBoostTank_GetPercentRemaining final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(RockVehicleBoostTank_GetPercentRemaining) == 0x000004, "Wrong alignment on RockVehicleBoostTank_GetPercentRemaining");
static_assert(sizeof(RockVehicleBoostTank_GetPercentRemaining) == 0x000004, "Wrong size on RockVehicleBoostTank_GetPercentRemaining");
static_assert(offsetof(RockVehicleBoostTank_GetPercentRemaining, ReturnValue) == 0x000000, "Member 'RockVehicleBoostTank_GetPercentRemaining::ReturnValue' has a wrong offset!");

struct RockVehicleBoostTank_HasBoost final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RockVehicleBoostTank_HasBoost) == 0x000001, "Wrong alignment on RockVehicleBoostTank_HasBoost");
static_assert(sizeof(RockVehicleBoostTank_HasBoost) == 0x000001, "Wrong size on RockVehicleBoostTank_HasBoost");
static_assert(offsetof(RockVehicleBoostTank_HasBoost, ReturnValue) == 0x000000, "Member 'RockVehicleBoostTank_HasBoost::ReturnValue' has a wrong offset!");

struct RockVehicleBoostTank_IsBoostFull final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RockVehicleBoostTank_IsBoostFull) == 0x000001, "Wrong alignment on RockVehicleBoostTank_IsBoostFull");
static_assert(sizeof(RockVehicleBoostTank_IsBoostFull) == 0x000001, "Wrong size on RockVehicleBoostTank_IsBoostFull");
static_assert(offsetof(RockVehicleBoostTank_IsBoostFull, ReturnValue) == 0x000000, "Member 'RockVehicleBoostTank_IsBoostFull::ReturnValue' has a wrong offset!");

struct RockVehicleAbility_GroundTrails_OnSurfaceChanged final
{
public:
	EPhysicalSurface                              NewSurface;
};
static_assert(alignof(RockVehicleAbility_GroundTrails_OnSurfaceChanged) == 0x000001, "Wrong alignment on RockVehicleAbility_GroundTrails_OnSurfaceChanged");
static_assert(sizeof(RockVehicleAbility_GroundTrails_OnSurfaceChanged) == 0x000001, "Wrong size on RockVehicleAbility_GroundTrails_OnSurfaceChanged");
static_assert(offsetof(RockVehicleAbility_GroundTrails_OnSurfaceChanged, NewSurface) == 0x000000, "Member 'RockVehicleAbility_GroundTrails_OnSurfaceChanged::NewSurface' has a wrong offset!");

struct RockVehicleAbility_GroundTrails_SetEnabled final
{
public:
	bool                                          bValue;
};
static_assert(alignof(RockVehicleAbility_GroundTrails_SetEnabled) == 0x000001, "Wrong alignment on RockVehicleAbility_GroundTrails_SetEnabled");
static_assert(sizeof(RockVehicleAbility_GroundTrails_SetEnabled) == 0x000001, "Wrong size on RockVehicleAbility_GroundTrails_SetEnabled");
static_assert(offsetof(RockVehicleAbility_GroundTrails_SetEnabled, bValue) == 0x000000, "Member 'RockVehicleAbility_GroundTrails_SetEnabled::bValue' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnDodged final
{
public:
	class UActorComponent*                        InComp;
	bool                                          bInReset;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnDodged) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnDodged");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnDodged) == 0x000010, "Wrong size on RockVehicleAnalyticsComponent_OnDodged");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnDodged, InComp) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnDodged::InComp' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnDodged, bInReset) == 0x000008, "Member 'RockVehicleAnalyticsComponent_OnDodged::bInReset' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnDoubleJumped final
{
public:
	class UActorComponent*                        InComp;
	bool                                          bInReset;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnDoubleJumped) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnDoubleJumped");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnDoubleJumped) == 0x000010, "Wrong size on RockVehicleAnalyticsComponent_OnDoubleJumped");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnDoubleJumped, InComp) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnDoubleJumped::InComp' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnDoubleJumped, bInReset) == 0x000008, "Member 'RockVehicleAnalyticsComponent_OnDoubleJumped::bInReset' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnJumped final
{
public:
	class UActorComponent*                        InComp;
	bool                                          bInReset;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnJumped) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnJumped");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnJumped) == 0x000010, "Wrong size on RockVehicleAnalyticsComponent_OnJumped");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnJumped, InComp) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnJumped::InComp' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnJumped, bInReset) == 0x000008, "Member 'RockVehicleAnalyticsComponent_OnJumped::bInReset' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnPawnEnteredSeat final
{
public:
	TScriptInterface<class IFortVehicleInterface> InVehicle;
	class AFortPawn*                              InPlayerPawn;
	int32                                         InSeatIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnPawnEnteredSeat) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnPawnEnteredSeat");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnPawnEnteredSeat) == 0x000020, "Wrong size on RockVehicleAnalyticsComponent_OnPawnEnteredSeat");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnPawnEnteredSeat, InVehicle) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnPawnEnteredSeat::InVehicle' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnPawnEnteredSeat, InPlayerPawn) == 0x000010, "Member 'RockVehicleAnalyticsComponent_OnPawnEnteredSeat::InPlayerPawn' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnPawnEnteredSeat, InSeatIndex) == 0x000018, "Member 'RockVehicleAnalyticsComponent_OnPawnEnteredSeat::InSeatIndex' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnPawnExitedSeat final
{
public:
	TScriptInterface<class IFortVehicleInterface> InVehicle;
	class AFortPawn*                              InPlayerPawn;
	int32                                         InSeatIndex;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnPawnExitedSeat) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnPawnExitedSeat");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnPawnExitedSeat) == 0x000020, "Wrong size on RockVehicleAnalyticsComponent_OnPawnExitedSeat");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnPawnExitedSeat, InVehicle) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnPawnExitedSeat::InVehicle' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnPawnExitedSeat, InPlayerPawn) == 0x000010, "Member 'RockVehicleAnalyticsComponent_OnPawnExitedSeat::InPlayerPawn' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnPawnExitedSeat, InSeatIndex) == 0x000018, "Member 'RockVehicleAnalyticsComponent_OnPawnExitedSeat::InSeatIndex' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnSupersonicEnd final
{
public:
	class UActorComponent*                        InComp;
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnSupersonicEnd) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnSupersonicEnd");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnSupersonicEnd) == 0x000008, "Wrong size on RockVehicleAnalyticsComponent_OnSupersonicEnd");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnSupersonicEnd, InComp) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnSupersonicEnd::InComp' has a wrong offset!");

struct RockVehicleAnalyticsComponent_OnSupersonicStart final
{
public:
	class UActorComponent*                        InComp;
	bool                                          bInReset;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RockVehicleAnalyticsComponent_OnSupersonicStart) == 0x000008, "Wrong alignment on RockVehicleAnalyticsComponent_OnSupersonicStart");
static_assert(sizeof(RockVehicleAnalyticsComponent_OnSupersonicStart) == 0x000010, "Wrong size on RockVehicleAnalyticsComponent_OnSupersonicStart");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnSupersonicStart, InComp) == 0x000000, "Member 'RockVehicleAnalyticsComponent_OnSupersonicStart::InComp' has a wrong offset!");
static_assert(offsetof(RockVehicleAnalyticsComponent_OnSupersonicStart, bInReset) == 0x000008, "Member 'RockVehicleAnalyticsComponent_OnSupersonicStart::bInReset' has a wrong offset!");

struct RockVehicleAudioController_OnInAirUpdated final
{
public:
	bool                                          bNewInAir;
};
static_assert(alignof(RockVehicleAudioController_OnInAirUpdated) == 0x000001, "Wrong alignment on RockVehicleAudioController_OnInAirUpdated");
static_assert(sizeof(RockVehicleAudioController_OnInAirUpdated) == 0x000001, "Wrong size on RockVehicleAudioController_OnInAirUpdated");
static_assert(offsetof(RockVehicleAudioController_OnInAirUpdated, bNewInAir) == 0x000000, "Member 'RockVehicleAudioController_OnInAirUpdated::bNewInAir' has a wrong offset!");

struct RockVehicleAudioController_SetBoosting final
{
public:
	bool                                          bNewBoosting;
};
static_assert(alignof(RockVehicleAudioController_SetBoosting) == 0x000001, "Wrong alignment on RockVehicleAudioController_SetBoosting");
static_assert(sizeof(RockVehicleAudioController_SetBoosting) == 0x000001, "Wrong size on RockVehicleAudioController_SetBoosting");
static_assert(offsetof(RockVehicleAudioController_SetBoosting, bNewBoosting) == 0x000000, "Member 'RockVehicleAudioController_SetBoosting::bNewBoosting' has a wrong offset!");

struct RockVehicleAudioController_SetSurfaceTypeParam final
{
public:
	float                                         NewSurfaceParam;
};
static_assert(alignof(RockVehicleAudioController_SetSurfaceTypeParam) == 0x000004, "Wrong alignment on RockVehicleAudioController_SetSurfaceTypeParam");
static_assert(sizeof(RockVehicleAudioController_SetSurfaceTypeParam) == 0x000004, "Wrong size on RockVehicleAudioController_SetSurfaceTypeParam");
static_assert(offsetof(RockVehicleAudioController_SetSurfaceTypeParam, NewSurfaceParam) == 0x000000, "Member 'RockVehicleAudioController_SetSurfaceTypeParam::NewSurfaceParam' has a wrong offset!");

struct RockVehicleAudioController_GetMotorSimComponent final
{
public:
	class UAudioMotorModelComponent*              ReturnValue;
};
static_assert(alignof(RockVehicleAudioController_GetMotorSimComponent) == 0x000008, "Wrong alignment on RockVehicleAudioController_GetMotorSimComponent");
static_assert(sizeof(RockVehicleAudioController_GetMotorSimComponent) == 0x000008, "Wrong size on RockVehicleAudioController_GetMotorSimComponent");
static_assert(offsetof(RockVehicleAudioController_GetMotorSimComponent, ReturnValue) == 0x000000, "Member 'RockVehicleAudioController_GetMotorSimComponent::ReturnValue' has a wrong offset!");

struct StreamingRadioPlayerComponent_Rock_VehicleExploded final
{
public:
	const class AController*                      LastDamageInstigator;
	class AFortAthenaVehicle*                     Vehicle;
};
static_assert(alignof(StreamingRadioPlayerComponent_Rock_VehicleExploded) == 0x000008, "Wrong alignment on StreamingRadioPlayerComponent_Rock_VehicleExploded");
static_assert(sizeof(StreamingRadioPlayerComponent_Rock_VehicleExploded) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_Rock_VehicleExploded");
static_assert(offsetof(StreamingRadioPlayerComponent_Rock_VehicleExploded, LastDamageInstigator) == 0x000000, "Member 'StreamingRadioPlayerComponent_Rock_VehicleExploded::LastDamageInstigator' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_Rock_VehicleExploded, Vehicle) == 0x000008, "Member 'StreamingRadioPlayerComponent_Rock_VehicleExploded::Vehicle' has a wrong offset!");

}
