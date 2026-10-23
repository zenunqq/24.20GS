#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct TankVehicleReticle_HandleOnDamageablePartHealthChanged final
{
public:
	struct FVehicleDamageablePartConfig           PartConfig;
	struct FVehicleDamageablePart                 Part;
	bool                                          bNewlyDisabled;
	bool                                          bNewlyEnabled;
	uint8                                         Pad_56[0x2];
};
static_assert(alignof(TankVehicleReticle_HandleOnDamageablePartHealthChanged) == 0x000008, "Wrong alignment on TankVehicleReticle_HandleOnDamageablePartHealthChanged");
static_assert(sizeof(TankVehicleReticle_HandleOnDamageablePartHealthChanged) == 0x000058, "Wrong size on TankVehicleReticle_HandleOnDamageablePartHealthChanged");
static_assert(offsetof(TankVehicleReticle_HandleOnDamageablePartHealthChanged, PartConfig) == 0x000000, "Member 'TankVehicleReticle_HandleOnDamageablePartHealthChanged::PartConfig' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_HandleOnDamageablePartHealthChanged, Part) == 0x000040, "Member 'TankVehicleReticle_HandleOnDamageablePartHealthChanged::Part' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_HandleOnDamageablePartHealthChanged, bNewlyDisabled) == 0x000054, "Member 'TankVehicleReticle_HandleOnDamageablePartHealthChanged::bNewlyDisabled' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_HandleOnDamageablePartHealthChanged, bNewlyEnabled) == 0x000055, "Member 'TankVehicleReticle_HandleOnDamageablePartHealthChanged::bNewlyEnabled' has a wrong offset!");

struct TankVehicleReticle_HandleOnEquipMountedWeapon final
{
public:
	class AFortWeaponRanged*                      EquippedMountedWeapon;
};
static_assert(alignof(TankVehicleReticle_HandleOnEquipMountedWeapon) == 0x000008, "Wrong alignment on TankVehicleReticle_HandleOnEquipMountedWeapon");
static_assert(sizeof(TankVehicleReticle_HandleOnEquipMountedWeapon) == 0x000008, "Wrong size on TankVehicleReticle_HandleOnEquipMountedWeapon");
static_assert(offsetof(TankVehicleReticle_HandleOnEquipMountedWeapon, EquippedMountedWeapon) == 0x000000, "Member 'TankVehicleReticle_HandleOnEquipMountedWeapon::EquippedMountedWeapon' has a wrong offset!");

struct TankVehicleReticle_OnCannonFired final
{
public:
	float                                         RateTime;
};
static_assert(alignof(TankVehicleReticle_OnCannonFired) == 0x000004, "Wrong alignment on TankVehicleReticle_OnCannonFired");
static_assert(sizeof(TankVehicleReticle_OnCannonFired) == 0x000004, "Wrong size on TankVehicleReticle_OnCannonFired");
static_assert(offsetof(TankVehicleReticle_OnCannonFired, RateTime) == 0x000000, "Member 'TankVehicleReticle_OnCannonFired::RateTime' has a wrong offset!");

struct TankVehicleReticle_OnTankDistanceUpdate final
{
public:
	float                                         Distance;
	float                                         DistancePercent;
};
static_assert(alignof(TankVehicleReticle_OnTankDistanceUpdate) == 0x000004, "Wrong alignment on TankVehicleReticle_OnTankDistanceUpdate");
static_assert(sizeof(TankVehicleReticle_OnTankDistanceUpdate) == 0x000008, "Wrong size on TankVehicleReticle_OnTankDistanceUpdate");
static_assert(offsetof(TankVehicleReticle_OnTankDistanceUpdate, Distance) == 0x000000, "Member 'TankVehicleReticle_OnTankDistanceUpdate::Distance' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankDistanceUpdate, DistancePercent) == 0x000004, "Member 'TankVehicleReticle_OnTankDistanceUpdate::DistancePercent' has a wrong offset!");

struct TankVehicleReticle_OnTankEngineHealthChanged final
{
public:
	float                                         EngineHealth;
	float                                         EngineHealthMax;
	bool                                          bNewlyDisabled;
	bool                                          bNewlyEnabled;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(TankVehicleReticle_OnTankEngineHealthChanged) == 0x000004, "Wrong alignment on TankVehicleReticle_OnTankEngineHealthChanged");
static_assert(sizeof(TankVehicleReticle_OnTankEngineHealthChanged) == 0x00000C, "Wrong size on TankVehicleReticle_OnTankEngineHealthChanged");
static_assert(offsetof(TankVehicleReticle_OnTankEngineHealthChanged, EngineHealth) == 0x000000, "Member 'TankVehicleReticle_OnTankEngineHealthChanged::EngineHealth' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankEngineHealthChanged, EngineHealthMax) == 0x000004, "Member 'TankVehicleReticle_OnTankEngineHealthChanged::EngineHealthMax' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankEngineHealthChanged, bNewlyDisabled) == 0x000008, "Member 'TankVehicleReticle_OnTankEngineHealthChanged::bNewlyDisabled' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankEngineHealthChanged, bNewlyEnabled) == 0x000009, "Member 'TankVehicleReticle_OnTankEngineHealthChanged::bNewlyEnabled' has a wrong offset!");

struct TankVehicleReticle_OnTankHatchHealthChanged final
{
public:
	float                                         HatchHealth;
	float                                         HatchHealthMax;
	bool                                          bNewlyDisabled;
	bool                                          bNewlyEnabled;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(TankVehicleReticle_OnTankHatchHealthChanged) == 0x000004, "Wrong alignment on TankVehicleReticle_OnTankHatchHealthChanged");
static_assert(sizeof(TankVehicleReticle_OnTankHatchHealthChanged) == 0x00000C, "Wrong size on TankVehicleReticle_OnTankHatchHealthChanged");
static_assert(offsetof(TankVehicleReticle_OnTankHatchHealthChanged, HatchHealth) == 0x000000, "Member 'TankVehicleReticle_OnTankHatchHealthChanged::HatchHealth' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankHatchHealthChanged, HatchHealthMax) == 0x000004, "Member 'TankVehicleReticle_OnTankHatchHealthChanged::HatchHealthMax' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankHatchHealthChanged, bNewlyDisabled) == 0x000008, "Member 'TankVehicleReticle_OnTankHatchHealthChanged::bNewlyDisabled' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankHatchHealthChanged, bNewlyEnabled) == 0x000009, "Member 'TankVehicleReticle_OnTankHatchHealthChanged::bNewlyEnabled' has a wrong offset!");

struct TankVehicleReticle_OnTankRotationValueChanged final
{
public:
	float                                         TankValue;
	float                                         TurretValue;
};
static_assert(alignof(TankVehicleReticle_OnTankRotationValueChanged) == 0x000004, "Wrong alignment on TankVehicleReticle_OnTankRotationValueChanged");
static_assert(sizeof(TankVehicleReticle_OnTankRotationValueChanged) == 0x000008, "Wrong size on TankVehicleReticle_OnTankRotationValueChanged");
static_assert(offsetof(TankVehicleReticle_OnTankRotationValueChanged, TankValue) == 0x000000, "Member 'TankVehicleReticle_OnTankRotationValueChanged::TankValue' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankRotationValueChanged, TurretValue) == 0x000004, "Member 'TankVehicleReticle_OnTankRotationValueChanged::TurretValue' has a wrong offset!");

struct TankVehicleReticle_OnTankTurretAimPitchValueChanged final
{
public:
	float                                         Pitch;
	float                                         PitchPercent;
};
static_assert(alignof(TankVehicleReticle_OnTankTurretAimPitchValueChanged) == 0x000004, "Wrong alignment on TankVehicleReticle_OnTankTurretAimPitchValueChanged");
static_assert(sizeof(TankVehicleReticle_OnTankTurretAimPitchValueChanged) == 0x000008, "Wrong size on TankVehicleReticle_OnTankTurretAimPitchValueChanged");
static_assert(offsetof(TankVehicleReticle_OnTankTurretAimPitchValueChanged, Pitch) == 0x000000, "Member 'TankVehicleReticle_OnTankTurretAimPitchValueChanged::Pitch' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTankTurretAimPitchValueChanged, PitchPercent) == 0x000004, "Member 'TankVehicleReticle_OnTankTurretAimPitchValueChanged::PitchPercent' has a wrong offset!");

struct TankVehicleReticle_OnTankTurretAimYawValueChanged final
{
public:
	float                                         Value;
};
static_assert(alignof(TankVehicleReticle_OnTankTurretAimYawValueChanged) == 0x000004, "Wrong alignment on TankVehicleReticle_OnTankTurretAimYawValueChanged");
static_assert(sizeof(TankVehicleReticle_OnTankTurretAimYawValueChanged) == 0x000004, "Wrong size on TankVehicleReticle_OnTankTurretAimYawValueChanged");
static_assert(offsetof(TankVehicleReticle_OnTankTurretAimYawValueChanged, Value) == 0x000000, "Member 'TankVehicleReticle_OnTankTurretAimYawValueChanged::Value' has a wrong offset!");

struct TankVehicleReticle_OnTreadEnabledChanged final
{
public:
	bool                                          bEnabled;
	ETreadSide                                    Side;
};
static_assert(alignof(TankVehicleReticle_OnTreadEnabledChanged) == 0x000001, "Wrong alignment on TankVehicleReticle_OnTreadEnabledChanged");
static_assert(sizeof(TankVehicleReticle_OnTreadEnabledChanged) == 0x000002, "Wrong size on TankVehicleReticle_OnTreadEnabledChanged");
static_assert(offsetof(TankVehicleReticle_OnTreadEnabledChanged, bEnabled) == 0x000000, "Member 'TankVehicleReticle_OnTreadEnabledChanged::bEnabled' has a wrong offset!");
static_assert(offsetof(TankVehicleReticle_OnTreadEnabledChanged, Side) == 0x000001, "Member 'TankVehicleReticle_OnTreadEnabledChanged::Side' has a wrong offset!");

struct TankVehicleReticle_SetupVehicleFromBP final
{
public:
	class AActor*                                 NewVehicle;
};
static_assert(alignof(TankVehicleReticle_SetupVehicleFromBP) == 0x000008, "Wrong alignment on TankVehicleReticle_SetupVehicleFromBP");
static_assert(sizeof(TankVehicleReticle_SetupVehicleFromBP) == 0x000008, "Wrong size on TankVehicleReticle_SetupVehicleFromBP");
static_assert(offsetof(TankVehicleReticle_SetupVehicleFromBP, NewVehicle) == 0x000000, "Member 'TankVehicleReticle_SetupVehicleFromBP::NewVehicle' has a wrong offset!");

}
