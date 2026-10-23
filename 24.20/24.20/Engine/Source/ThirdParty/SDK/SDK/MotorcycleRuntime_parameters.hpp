#pragma once

#include "Basic.hpp"

#include "MotorcycleRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"

namespace SDK::Params
{

struct FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed) == 0x000004, "Wrong alignment on FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed");
static_assert(sizeof(FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed) == 0x000004, "Wrong size on FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed");
static_assert(offsetof(FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed, DeltaSeconds) == 0x000000, "Member 'FortPlayerAnimInstance_MotorcycleRider_CollapsedAimYawSmoothed::DeltaSeconds' has a wrong offset!");

struct FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump final
{
public:
	float                                         InJumpChargeFactor;
};
static_assert(alignof(FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump) == 0x000004, "Wrong alignment on FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump");
static_assert(sizeof(FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump) == 0x000004, "Wrong size on FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump");
static_assert(offsetof(FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump, InJumpChargeFactor) == 0x000000, "Member 'FortPlayerAnimInstance_MotorcycleRider_HandleChargingJump::InJumpChargeFactor' has a wrong offset!");

struct FortPlayerAnimInstance_MotorcycleRider_HandleJump final
{
public:
	float                                         InJumpChargeFactor;
};
static_assert(alignof(FortPlayerAnimInstance_MotorcycleRider_HandleJump) == 0x000004, "Wrong alignment on FortPlayerAnimInstance_MotorcycleRider_HandleJump");
static_assert(sizeof(FortPlayerAnimInstance_MotorcycleRider_HandleJump) == 0x000004, "Wrong size on FortPlayerAnimInstance_MotorcycleRider_HandleJump");
static_assert(offsetof(FortPlayerAnimInstance_MotorcycleRider_HandleJump, InJumpChargeFactor) == 0x000000, "Member 'FortPlayerAnimInstance_MotorcycleRider_HandleJump::InJumpChargeFactor' has a wrong offset!");

struct FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick final
{
public:
	EFortMotorcycleAirTrickType                   TrickType;
};
static_assert(alignof(FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick) == 0x000001, "Wrong alignment on FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick");
static_assert(sizeof(FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick) == 0x000001, "Wrong size on FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick");
static_assert(offsetof(FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick, TrickType) == 0x000000, "Member 'FortPlayerAnimInstance_MotorcycleRider_HandleStartAirTrick::TrickType' has a wrong offset!");

struct FortMotorcycleVehicle_BP_OnChargingJump final
{
public:
	float                                         JumpChargeFactor;
};
static_assert(alignof(FortMotorcycleVehicle_BP_OnChargingJump) == 0x000004, "Wrong alignment on FortMotorcycleVehicle_BP_OnChargingJump");
static_assert(sizeof(FortMotorcycleVehicle_BP_OnChargingJump) == 0x000004, "Wrong size on FortMotorcycleVehicle_BP_OnChargingJump");
static_assert(offsetof(FortMotorcycleVehicle_BP_OnChargingJump, JumpChargeFactor) == 0x000000, "Member 'FortMotorcycleVehicle_BP_OnChargingJump::JumpChargeFactor' has a wrong offset!");

struct FortMotorcycleVehicle_BP_OnJump final
{
public:
	float                                         JumpChargeFactor;
};
static_assert(alignof(FortMotorcycleVehicle_BP_OnJump) == 0x000004, "Wrong alignment on FortMotorcycleVehicle_BP_OnJump");
static_assert(sizeof(FortMotorcycleVehicle_BP_OnJump) == 0x000004, "Wrong size on FortMotorcycleVehicle_BP_OnJump");
static_assert(offsetof(FortMotorcycleVehicle_BP_OnJump, JumpChargeFactor) == 0x000000, "Member 'FortMotorcycleVehicle_BP_OnJump::JumpChargeFactor' has a wrong offset!");

struct FortMotorcycleVehicle_BP_OnStartAirTrick final
{
public:
	EFortMotorcycleAirTrickType                   TrickType;
};
static_assert(alignof(FortMotorcycleVehicle_BP_OnStartAirTrick) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_BP_OnStartAirTrick");
static_assert(sizeof(FortMotorcycleVehicle_BP_OnStartAirTrick) == 0x000001, "Wrong size on FortMotorcycleVehicle_BP_OnStartAirTrick");
static_assert(offsetof(FortMotorcycleVehicle_BP_OnStartAirTrick, TrickType) == 0x000000, "Member 'FortMotorcycleVehicle_BP_OnStartAirTrick::TrickType' has a wrong offset!");

struct FortMotorcycleVehicle_ChangeBoostAttackState final
{
public:
	bool                                          bNewIsBoostAttacking;
};
static_assert(alignof(FortMotorcycleVehicle_ChangeBoostAttackState) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_ChangeBoostAttackState");
static_assert(sizeof(FortMotorcycleVehicle_ChangeBoostAttackState) == 0x000001, "Wrong size on FortMotorcycleVehicle_ChangeBoostAttackState");
static_assert(offsetof(FortMotorcycleVehicle_ChangeBoostAttackState, bNewIsBoostAttacking) == 0x000000, "Member 'FortMotorcycleVehicle_ChangeBoostAttackState::bNewIsBoostAttacking' has a wrong offset!");

struct FortMotorcycleVehicle_OnInventoryModeToggled final
{
public:
	bool                                          bIsInInventoryMode;
};
static_assert(alignof(FortMotorcycleVehicle_OnInventoryModeToggled) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_OnInventoryModeToggled");
static_assert(sizeof(FortMotorcycleVehicle_OnInventoryModeToggled) == 0x000001, "Wrong size on FortMotorcycleVehicle_OnInventoryModeToggled");
static_assert(offsetof(FortMotorcycleVehicle_OnInventoryModeToggled, bIsInInventoryMode) == 0x000000, "Member 'FortMotorcycleVehicle_OnInventoryModeToggled::bIsInInventoryMode' has a wrong offset!");

struct FortMotorcycleVehicle_OnPlayerWeaponChanged final
{
public:
	class AFortWeapon*                            InNewWeapon;
	class AFortWeapon*                            InPrevWeapon;
};
static_assert(alignof(FortMotorcycleVehicle_OnPlayerWeaponChanged) == 0x000008, "Wrong alignment on FortMotorcycleVehicle_OnPlayerWeaponChanged");
static_assert(sizeof(FortMotorcycleVehicle_OnPlayerWeaponChanged) == 0x000010, "Wrong size on FortMotorcycleVehicle_OnPlayerWeaponChanged");
static_assert(offsetof(FortMotorcycleVehicle_OnPlayerWeaponChanged, InNewWeapon) == 0x000000, "Member 'FortMotorcycleVehicle_OnPlayerWeaponChanged::InNewWeapon' has a wrong offset!");
static_assert(offsetof(FortMotorcycleVehicle_OnPlayerWeaponChanged, InPrevWeapon) == 0x000008, "Member 'FortMotorcycleVehicle_OnPlayerWeaponChanged::InPrevWeapon' has a wrong offset!");

struct FortMotorcycleVehicle_GetAverageSpringNormal final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortMotorcycleVehicle_GetAverageSpringNormal) == 0x000008, "Wrong alignment on FortMotorcycleVehicle_GetAverageSpringNormal");
static_assert(sizeof(FortMotorcycleVehicle_GetAverageSpringNormal) == 0x000018, "Wrong size on FortMotorcycleVehicle_GetAverageSpringNormal");
static_assert(offsetof(FortMotorcycleVehicle_GetAverageSpringNormal, ReturnValue) == 0x000000, "Member 'FortMotorcycleVehicle_GetAverageSpringNormal::ReturnValue' has a wrong offset!");

struct FortMotorcycleVehicle_GetLeanAngleDegrees final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortMotorcycleVehicle_GetLeanAngleDegrees) == 0x000004, "Wrong alignment on FortMotorcycleVehicle_GetLeanAngleDegrees");
static_assert(sizeof(FortMotorcycleVehicle_GetLeanAngleDegrees) == 0x000004, "Wrong size on FortMotorcycleVehicle_GetLeanAngleDegrees");
static_assert(offsetof(FortMotorcycleVehicle_GetLeanAngleDegrees, ReturnValue) == 0x000000, "Member 'FortMotorcycleVehicle_GetLeanAngleDegrees::ReturnValue' has a wrong offset!");

struct FortMotorcycleVehicle_GetSurfaceTypeVehicleOn final
{
public:
	EPhysicalSurface                              ReturnValue;
};
static_assert(alignof(FortMotorcycleVehicle_GetSurfaceTypeVehicleOn) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_GetSurfaceTypeVehicleOn");
static_assert(sizeof(FortMotorcycleVehicle_GetSurfaceTypeVehicleOn) == 0x000001, "Wrong size on FortMotorcycleVehicle_GetSurfaceTypeVehicleOn");
static_assert(offsetof(FortMotorcycleVehicle_GetSurfaceTypeVehicleOn, ReturnValue) == 0x000000, "Member 'FortMotorcycleVehicle_GetSurfaceTypeVehicleOn::ReturnValue' has a wrong offset!");

struct FortMotorcycleVehicle_IsInInventoryMode final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortMotorcycleVehicle_IsInInventoryMode) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_IsInInventoryMode");
static_assert(sizeof(FortMotorcycleVehicle_IsInInventoryMode) == 0x000001, "Wrong size on FortMotorcycleVehicle_IsInInventoryMode");
static_assert(offsetof(FortMotorcycleVehicle_IsInInventoryMode, ReturnValue) == 0x000000, "Member 'FortMotorcycleVehicle_IsInInventoryMode::ReturnValue' has a wrong offset!");

struct FortMotorcycleVehicle_IsPowerSliding final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortMotorcycleVehicle_IsPowerSliding) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_IsPowerSliding");
static_assert(sizeof(FortMotorcycleVehicle_IsPowerSliding) == 0x000001, "Wrong size on FortMotorcycleVehicle_IsPowerSliding");
static_assert(offsetof(FortMotorcycleVehicle_IsPowerSliding, ReturnValue) == 0x000000, "Member 'FortMotorcycleVehicle_IsPowerSliding::ReturnValue' has a wrong offset!");

struct FortMotorcycleVehicle_IsSuperSliding final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortMotorcycleVehicle_IsSuperSliding) == 0x000001, "Wrong alignment on FortMotorcycleVehicle_IsSuperSliding");
static_assert(sizeof(FortMotorcycleVehicle_IsSuperSliding) == 0x000001, "Wrong size on FortMotorcycleVehicle_IsSuperSliding");
static_assert(offsetof(FortMotorcycleVehicle_IsSuperSliding, ReturnValue) == 0x000000, "Member 'FortMotorcycleVehicle_IsSuperSliding::ReturnValue' has a wrong offset!");

}
