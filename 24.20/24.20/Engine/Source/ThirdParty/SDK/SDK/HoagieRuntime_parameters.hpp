#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HoagieRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortHoagieAudioController_CacheAudioComponents final
{
public:
	class UFortLayeredAudioComponent*             InEngine;
	class UFortLayeredAudioComponent*             InRotor;
};
static_assert(alignof(FortHoagieAudioController_CacheAudioComponents) == 0x000008, "Wrong alignment on FortHoagieAudioController_CacheAudioComponents");
static_assert(sizeof(FortHoagieAudioController_CacheAudioComponents) == 0x000010, "Wrong size on FortHoagieAudioController_CacheAudioComponents");
static_assert(offsetof(FortHoagieAudioController_CacheAudioComponents, InEngine) == 0x000000, "Member 'FortHoagieAudioController_CacheAudioComponents::InEngine' has a wrong offset!");
static_assert(offsetof(FortHoagieAudioController_CacheAudioComponents, InRotor) == 0x000008, "Member 'FortHoagieAudioController_CacheAudioComponents::InRotor' has a wrong offset!");

struct FortHoagieAudioController_CacheHoagieVehicle final
{
public:
	class AFortHoagieVehicle*                     InVehicle;
};
static_assert(alignof(FortHoagieAudioController_CacheHoagieVehicle) == 0x000008, "Wrong alignment on FortHoagieAudioController_CacheHoagieVehicle");
static_assert(sizeof(FortHoagieAudioController_CacheHoagieVehicle) == 0x000008, "Wrong size on FortHoagieAudioController_CacheHoagieVehicle");
static_assert(offsetof(FortHoagieAudioController_CacheHoagieVehicle, InVehicle) == 0x000000, "Member 'FortHoagieAudioController_CacheHoagieVehicle::InVehicle' has a wrong offset!");

struct FortHoagieVehicle_MulticastRotorImpulse final
{
public:
	struct FHitResult                             RotorHit;
};
static_assert(alignof(FortHoagieVehicle_MulticastRotorImpulse) == 0x000008, "Wrong alignment on FortHoagieVehicle_MulticastRotorImpulse");
static_assert(sizeof(FortHoagieVehicle_MulticastRotorImpulse) == 0x0000E0, "Wrong size on FortHoagieVehicle_MulticastRotorImpulse");
static_assert(offsetof(FortHoagieVehicle_MulticastRotorImpulse, RotorHit) == 0x000000, "Member 'FortHoagieVehicle_MulticastRotorImpulse::RotorHit' has a wrong offset!");

struct FortHoagieVehicle_OnCritRotor final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FVector                                ImpactLocation;
	class AController*                            DamageInstigator;
	class AActor*                                 DamageCauser;
	bool                                          bMainRotor;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FortHoagieVehicle_OnCritRotor) == 0x000008, "Wrong alignment on FortHoagieVehicle_OnCritRotor");
static_assert(sizeof(FortHoagieVehicle_OnCritRotor) == 0x000038, "Wrong size on FortHoagieVehicle_OnCritRotor");
static_assert(offsetof(FortHoagieVehicle_OnCritRotor, Damage) == 0x000000, "Member 'FortHoagieVehicle_OnCritRotor::Damage' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_OnCritRotor, ImpactLocation) == 0x000008, "Member 'FortHoagieVehicle_OnCritRotor::ImpactLocation' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_OnCritRotor, DamageInstigator) == 0x000020, "Member 'FortHoagieVehicle_OnCritRotor::DamageInstigator' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_OnCritRotor, DamageCauser) == 0x000028, "Member 'FortHoagieVehicle_OnCritRotor::DamageCauser' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_OnCritRotor, bMainRotor) == 0x000030, "Member 'FortHoagieVehicle_OnCritRotor::bMainRotor' has a wrong offset!");

struct FortHoagieVehicle_OnImpactOtherHoagie final
{
public:
	struct FVector                                HitLocation;
	struct FVector                                NormalImpulse;
};
static_assert(alignof(FortHoagieVehicle_OnImpactOtherHoagie) == 0x000008, "Wrong alignment on FortHoagieVehicle_OnImpactOtherHoagie");
static_assert(sizeof(FortHoagieVehicle_OnImpactOtherHoagie) == 0x000030, "Wrong size on FortHoagieVehicle_OnImpactOtherHoagie");
static_assert(offsetof(FortHoagieVehicle_OnImpactOtherHoagie, HitLocation) == 0x000000, "Member 'FortHoagieVehicle_OnImpactOtherHoagie::HitLocation' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_OnImpactOtherHoagie, NormalImpulse) == 0x000018, "Member 'FortHoagieVehicle_OnImpactOtherHoagie::NormalImpulse' has a wrong offset!");

struct FortHoagieVehicle_OnRotorDamageDealt final
{
public:
	struct FHitResult                             Impact;
	bool                                          bInner;
	uint8                                         Pad_E1[0x7];
};
static_assert(alignof(FortHoagieVehicle_OnRotorDamageDealt) == 0x000008, "Wrong alignment on FortHoagieVehicle_OnRotorDamageDealt");
static_assert(sizeof(FortHoagieVehicle_OnRotorDamageDealt) == 0x0000E8, "Wrong size on FortHoagieVehicle_OnRotorDamageDealt");
static_assert(offsetof(FortHoagieVehicle_OnRotorDamageDealt, Impact) == 0x000000, "Member 'FortHoagieVehicle_OnRotorDamageDealt::Impact' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_OnRotorDamageDealt, bInner) == 0x0000E0, "Member 'FortHoagieVehicle_OnRotorDamageDealt::bInner' has a wrong offset!");

struct FortHoagieVehicle_OnRotorDamageDealtInner final
{
public:
	struct FHitResult                             Impact;
};
static_assert(alignof(FortHoagieVehicle_OnRotorDamageDealtInner) == 0x000008, "Wrong alignment on FortHoagieVehicle_OnRotorDamageDealtInner");
static_assert(sizeof(FortHoagieVehicle_OnRotorDamageDealtInner) == 0x0000E0, "Wrong size on FortHoagieVehicle_OnRotorDamageDealtInner");
static_assert(offsetof(FortHoagieVehicle_OnRotorDamageDealtInner, Impact) == 0x000000, "Member 'FortHoagieVehicle_OnRotorDamageDealtInner::Impact' has a wrong offset!");

struct FortHoagieVehicle_OnRotorDamageDealtOuter final
{
public:
	struct FHitResult                             Impact;
};
static_assert(alignof(FortHoagieVehicle_OnRotorDamageDealtOuter) == 0x000008, "Wrong alignment on FortHoagieVehicle_OnRotorDamageDealtOuter");
static_assert(sizeof(FortHoagieVehicle_OnRotorDamageDealtOuter) == 0x0000E0, "Wrong size on FortHoagieVehicle_OnRotorDamageDealtOuter");
static_assert(offsetof(FortHoagieVehicle_OnRotorDamageDealtOuter, Impact) == 0x000000, "Member 'FortHoagieVehicle_OnRotorDamageDealtOuter::Impact' has a wrong offset!");

struct FortHoagieVehicle_OnRotorDamagePlayer final
{
public:
	struct FHitResult                             Impact;
};
static_assert(alignof(FortHoagieVehicle_OnRotorDamagePlayer) == 0x000008, "Wrong alignment on FortHoagieVehicle_OnRotorDamagePlayer");
static_assert(sizeof(FortHoagieVehicle_OnRotorDamagePlayer) == 0x0000E0, "Wrong size on FortHoagieVehicle_OnRotorDamagePlayer");
static_assert(offsetof(FortHoagieVehicle_OnRotorDamagePlayer, Impact) == 0x000000, "Member 'FortHoagieVehicle_OnRotorDamagePlayer::Impact' has a wrong offset!");

struct FortHoagieVehicle_OnTickRotors final
{
public:
	float                                         RotorAngleDegrees;
};
static_assert(alignof(FortHoagieVehicle_OnTickRotors) == 0x000004, "Wrong alignment on FortHoagieVehicle_OnTickRotors");
static_assert(sizeof(FortHoagieVehicle_OnTickRotors) == 0x000004, "Wrong size on FortHoagieVehicle_OnTickRotors");
static_assert(offsetof(FortHoagieVehicle_OnTickRotors, RotorAngleDegrees) == 0x000000, "Member 'FortHoagieVehicle_OnTickRotors::RotorAngleDegrees' has a wrong offset!");

struct FortHoagieVehicle_ServerUpdateControlState final
{
public:
	struct FReplicatedHeliControlState            InControlState;
};
static_assert(alignof(FortHoagieVehicle_ServerUpdateControlState) == 0x000008, "Wrong alignment on FortHoagieVehicle_ServerUpdateControlState");
static_assert(sizeof(FortHoagieVehicle_ServerUpdateControlState) == 0x000030, "Wrong size on FortHoagieVehicle_ServerUpdateControlState");
static_assert(offsetof(FortHoagieVehicle_ServerUpdateControlState, InControlState) == 0x000000, "Member 'FortHoagieVehicle_ServerUpdateControlState::InControlState' has a wrong offset!");

struct FortHoagieVehicle_SetMainRotorRotation final
{
public:
	float                                         Degrees;
};
static_assert(alignof(FortHoagieVehicle_SetMainRotorRotation) == 0x000004, "Wrong alignment on FortHoagieVehicle_SetMainRotorRotation");
static_assert(sizeof(FortHoagieVehicle_SetMainRotorRotation) == 0x000004, "Wrong size on FortHoagieVehicle_SetMainRotorRotation");
static_assert(offsetof(FortHoagieVehicle_SetMainRotorRotation, Degrees) == 0x000000, "Member 'FortHoagieVehicle_SetMainRotorRotation::Degrees' has a wrong offset!");

struct FortHoagieVehicle_SetRotorWashActive final
{
public:
	bool                                          bActive;
};
static_assert(alignof(FortHoagieVehicle_SetRotorWashActive) == 0x000001, "Wrong alignment on FortHoagieVehicle_SetRotorWashActive");
static_assert(sizeof(FortHoagieVehicle_SetRotorWashActive) == 0x000001, "Wrong size on FortHoagieVehicle_SetRotorWashActive");
static_assert(offsetof(FortHoagieVehicle_SetRotorWashActive, bActive) == 0x000000, "Member 'FortHoagieVehicle_SetRotorWashActive::bActive' has a wrong offset!");

struct FortHoagieVehicle_SetTailRotorRotation final
{
public:
	float                                         Degrees;
};
static_assert(alignof(FortHoagieVehicle_SetTailRotorRotation) == 0x000004, "Wrong alignment on FortHoagieVehicle_SetTailRotorRotation");
static_assert(sizeof(FortHoagieVehicle_SetTailRotorRotation) == 0x000004, "Wrong size on FortHoagieVehicle_SetTailRotorRotation");
static_assert(offsetof(FortHoagieVehicle_SetTailRotorRotation, Degrees) == 0x000000, "Member 'FortHoagieVehicle_SetTailRotorRotation::Degrees' has a wrong offset!");

struct FortHoagieVehicle_ShowCooldownCue final
{
public:
	class AFortPlayerPawn*                        Pawn;
	float                                         Duration;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FortHoagieVehicle_ShowCooldownCue) == 0x000008, "Wrong alignment on FortHoagieVehicle_ShowCooldownCue");
static_assert(sizeof(FortHoagieVehicle_ShowCooldownCue) == 0x000010, "Wrong size on FortHoagieVehicle_ShowCooldownCue");
static_assert(offsetof(FortHoagieVehicle_ShowCooldownCue, Pawn) == 0x000000, "Member 'FortHoagieVehicle_ShowCooldownCue::Pawn' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_ShowCooldownCue, Duration) == 0x000008, "Member 'FortHoagieVehicle_ShowCooldownCue::Duration' has a wrong offset!");

struct FortHoagieVehicle_UpdateDamageStateNative final
{
public:
	float                                         Damage;
};
static_assert(alignof(FortHoagieVehicle_UpdateDamageStateNative) == 0x000004, "Wrong alignment on FortHoagieVehicle_UpdateDamageStateNative");
static_assert(sizeof(FortHoagieVehicle_UpdateDamageStateNative) == 0x000004, "Wrong size on FortHoagieVehicle_UpdateDamageStateNative");
static_assert(offsetof(FortHoagieVehicle_UpdateDamageStateNative, Damage) == 0x000000, "Member 'FortHoagieVehicle_UpdateDamageStateNative::Damage' has a wrong offset!");

struct FortHoagieVehicle_GetAltitude final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetAltitude) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetAltitude");
static_assert(sizeof(FortHoagieVehicle_GetAltitude) == 0x000004, "Wrong size on FortHoagieVehicle_GetAltitude");
static_assert(offsetof(FortHoagieVehicle_GetAltitude, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetAltitude::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetBoostCooldown final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetBoostCooldown) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetBoostCooldown");
static_assert(sizeof(FortHoagieVehicle_GetBoostCooldown) == 0x000004, "Wrong size on FortHoagieVehicle_GetBoostCooldown");
static_assert(offsetof(FortHoagieVehicle_GetBoostCooldown, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetBoostCooldown::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetBoostDirection final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetBoostDirection) == 0x000008, "Wrong alignment on FortHoagieVehicle_GetBoostDirection");
static_assert(sizeof(FortHoagieVehicle_GetBoostDirection) == 0x000018, "Wrong size on FortHoagieVehicle_GetBoostDirection");
static_assert(offsetof(FortHoagieVehicle_GetBoostDirection, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetBoostDirection::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetBoostDuration final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetBoostDuration) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetBoostDuration");
static_assert(sizeof(FortHoagieVehicle_GetBoostDuration) == 0x000004, "Wrong size on FortHoagieVehicle_GetBoostDuration");
static_assert(offsetof(FortHoagieVehicle_GetBoostDuration, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetBoostDuration::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetBoostTimeLeft final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetBoostTimeLeft) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetBoostTimeLeft");
static_assert(sizeof(FortHoagieVehicle_GetBoostTimeLeft) == 0x000004, "Wrong size on FortHoagieVehicle_GetBoostTimeLeft");
static_assert(offsetof(FortHoagieVehicle_GetBoostTimeLeft, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetBoostTimeLeft::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetDistanceToGround final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetDistanceToGround) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetDistanceToGround");
static_assert(sizeof(FortHoagieVehicle_GetDistanceToGround) == 0x000004, "Wrong size on FortHoagieVehicle_GetDistanceToGround");
static_assert(offsetof(FortHoagieVehicle_GetDistanceToGround, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetDistanceToGround::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetForwardAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetForwardAlpha) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetForwardAlpha");
static_assert(sizeof(FortHoagieVehicle_GetForwardAlpha) == 0x000004, "Wrong size on FortHoagieVehicle_GetForwardAlpha");
static_assert(offsetof(FortHoagieVehicle_GetForwardAlpha, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetForwardAlpha::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetIsEngineOn final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetIsEngineOn) == 0x000001, "Wrong alignment on FortHoagieVehicle_GetIsEngineOn");
static_assert(sizeof(FortHoagieVehicle_GetIsEngineOn) == 0x000001, "Wrong size on FortHoagieVehicle_GetIsEngineOn");
static_assert(offsetof(FortHoagieVehicle_GetIsEngineOn, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetIsEngineOn::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetLiftAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetLiftAlpha) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetLiftAlpha");
static_assert(sizeof(FortHoagieVehicle_GetLiftAlpha) == 0x000004, "Wrong size on FortHoagieVehicle_GetLiftAlpha");
static_assert(offsetof(FortHoagieVehicle_GetLiftAlpha, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetLiftAlpha::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetMaxAltitude final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetMaxAltitude) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetMaxAltitude");
static_assert(sizeof(FortHoagieVehicle_GetMaxAltitude) == 0x000004, "Wrong size on FortHoagieVehicle_GetMaxAltitude");
static_assert(offsetof(FortHoagieVehicle_GetMaxAltitude, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetMaxAltitude::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetMaxBoostCooldown final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetMaxBoostCooldown) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetMaxBoostCooldown");
static_assert(sizeof(FortHoagieVehicle_GetMaxBoostCooldown) == 0x000004, "Wrong size on FortHoagieVehicle_GetMaxBoostCooldown");
static_assert(offsetof(FortHoagieVehicle_GetMaxBoostCooldown, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetMaxBoostCooldown::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetRotorAngleDegrees final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetRotorAngleDegrees) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetRotorAngleDegrees");
static_assert(sizeof(FortHoagieVehicle_GetRotorAngleDegrees) == 0x000004, "Wrong size on FortHoagieVehicle_GetRotorAngleDegrees");
static_assert(offsetof(FortHoagieVehicle_GetRotorAngleDegrees, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetRotorAngleDegrees::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetRotorCenterPosition final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetRotorCenterPosition) == 0x000008, "Wrong alignment on FortHoagieVehicle_GetRotorCenterPosition");
static_assert(sizeof(FortHoagieVehicle_GetRotorCenterPosition) == 0x000018, "Wrong size on FortHoagieVehicle_GetRotorCenterPosition");
static_assert(offsetof(FortHoagieVehicle_GetRotorCenterPosition, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetRotorCenterPosition::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetRotorSpeed final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetRotorSpeed) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetRotorSpeed");
static_assert(sizeof(FortHoagieVehicle_GetRotorSpeed) == 0x000004, "Wrong size on FortHoagieVehicle_GetRotorSpeed");
static_assert(offsetof(FortHoagieVehicle_GetRotorSpeed, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetRotorSpeed::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetRotorSpeedPercent final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetRotorSpeedPercent) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetRotorSpeedPercent");
static_assert(sizeof(FortHoagieVehicle_GetRotorSpeedPercent) == 0x000004, "Wrong size on FortHoagieVehicle_GetRotorSpeedPercent");
static_assert(offsetof(FortHoagieVehicle_GetRotorSpeedPercent, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetRotorSpeedPercent::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetShutdownTimeLeft final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetShutdownTimeLeft) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetShutdownTimeLeft");
static_assert(sizeof(FortHoagieVehicle_GetShutdownTimeLeft) == 0x000004, "Wrong size on FortHoagieVehicle_GetShutdownTimeLeft");
static_assert(offsetof(FortHoagieVehicle_GetShutdownTimeLeft, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetShutdownTimeLeft::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetSteerAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetSteerAlpha) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetSteerAlpha");
static_assert(sizeof(FortHoagieVehicle_GetSteerAlpha) == 0x000004, "Wrong size on FortHoagieVehicle_GetSteerAlpha");
static_assert(offsetof(FortHoagieVehicle_GetSteerAlpha, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetSteerAlpha::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetStrafeAlpha final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetStrafeAlpha) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetStrafeAlpha");
static_assert(sizeof(FortHoagieVehicle_GetStrafeAlpha) == 0x000004, "Wrong size on FortHoagieVehicle_GetStrafeAlpha");
static_assert(offsetof(FortHoagieVehicle_GetStrafeAlpha, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetStrafeAlpha::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetThrustDirection final
{
public:
	bool                                          bWorldSpace;
	uint8                                         Pad_1[0x7];
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetThrustDirection) == 0x000008, "Wrong alignment on FortHoagieVehicle_GetThrustDirection");
static_assert(sizeof(FortHoagieVehicle_GetThrustDirection) == 0x000020, "Wrong size on FortHoagieVehicle_GetThrustDirection");
static_assert(offsetof(FortHoagieVehicle_GetThrustDirection, bWorldSpace) == 0x000000, "Member 'FortHoagieVehicle_GetThrustDirection::bWorldSpace' has a wrong offset!");
static_assert(offsetof(FortHoagieVehicle_GetThrustDirection, ReturnValue) == 0x000008, "Member 'FortHoagieVehicle_GetThrustDirection::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_GetVerticalSpeedKmh final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_GetVerticalSpeedKmh) == 0x000004, "Wrong alignment on FortHoagieVehicle_GetVerticalSpeedKmh");
static_assert(sizeof(FortHoagieVehicle_GetVerticalSpeedKmh) == 0x000004, "Wrong size on FortHoagieVehicle_GetVerticalSpeedKmh");
static_assert(offsetof(FortHoagieVehicle_GetVerticalSpeedKmh, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_GetVerticalSpeedKmh::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_IsScrapingBottom final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_IsScrapingBottom) == 0x000001, "Wrong alignment on FortHoagieVehicle_IsScrapingBottom");
static_assert(sizeof(FortHoagieVehicle_IsScrapingBottom) == 0x000001, "Wrong size on FortHoagieVehicle_IsScrapingBottom");
static_assert(offsetof(FortHoagieVehicle_IsScrapingBottom, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_IsScrapingBottom::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_IsShuttingDown final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_IsShuttingDown) == 0x000001, "Wrong alignment on FortHoagieVehicle_IsShuttingDown");
static_assert(sizeof(FortHoagieVehicle_IsShuttingDown) == 0x000001, "Wrong size on FortHoagieVehicle_IsShuttingDown");
static_assert(offsetof(FortHoagieVehicle_IsShuttingDown, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_IsShuttingDown::ReturnValue' has a wrong offset!");

struct FortHoagieVehicle_IsStartingUp final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortHoagieVehicle_IsStartingUp) == 0x000001, "Wrong alignment on FortHoagieVehicle_IsStartingUp");
static_assert(sizeof(FortHoagieVehicle_IsStartingUp) == 0x000001, "Wrong size on FortHoagieVehicle_IsStartingUp");
static_assert(offsetof(FortHoagieVehicle_IsStartingUp, ReturnValue) == 0x000000, "Member 'FortHoagieVehicle_IsStartingUp::ReturnValue' has a wrong offset!");

}
