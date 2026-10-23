#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UFortGameSettingRegistryExtension_Tank final : public UFortGameSettingRegistryExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameSettingRegistryExtension_Tank">();
	}
	static class UFortGameSettingRegistryExtension_Tank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameSettingRegistryExtension_Tank>();
	}
};
static_assert(alignof(UFortGameSettingRegistryExtension_Tank) == 0x000008, "Wrong alignment on UFortGameSettingRegistryExtension_Tank");
static_assert(sizeof(UFortGameSettingRegistryExtension_Tank) == 0x000028, "Wrong size on UFortGameSettingRegistryExtension_Tank");

class UTankVehicleReticle final : public UFortAthenaVehicleDashboardWidget
{
public:
	class AFortTankVehicle*                       OwningTankVehicle;
	float                                         MinTurretPitch;
	float                                         MaxTurretPitch;
	bool                                          bDistanceMeterEnabled;
	bool                                          bTankOrientationEventsEnabled;
	uint8                                         Pad_44A[0xE];

public:
	void HandleOnDamageablePartHealthChanged(const struct FVehicleDamageablePartConfig& PartConfig, const struct FVehicleDamageablePart& Part, const bool bNewlyDisabled, const bool bNewlyEnabled);
	void HandleOnEquipMountedWeapon(class AFortWeaponRanged* EquippedMountedWeapon);
	void OnCannonFired(const float RateTime);
	void OnTankDistanceUpdate(const float Distance, const float DistancePercent);
	void OnTankEngineHealthChanged(const float EngineHealth, const float EngineHealthMax, const bool bNewlyDisabled, const bool bNewlyEnabled);
	void OnTankHatchHealthChanged(const float HatchHealth, const float HatchHealthMax, const bool bNewlyDisabled, const bool bNewlyEnabled);
	void OnTankRotationValueChanged(const float TankValue, const float TurretValue);
	void OnTankTargetingPressed();
	void OnTankTargetingReleased();
	void OnTankTurretAimPitchValueChanged(const float Pitch, const float PitchPercent);
	void OnTankTurretAimYawValueChanged(const float Value);
	void OnTreadEnabledChanged(const bool bEnabled, const ETreadSide Side);
	void SetupVehicleFromBP(class AActor* NewVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TankVehicleReticle">();
	}
	static class UTankVehicleReticle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTankVehicleReticle>();
	}
};
static_assert(alignof(UTankVehicleReticle) == 0x000008, "Wrong alignment on UTankVehicleReticle");
static_assert(sizeof(UTankVehicleReticle) == 0x000458, "Wrong size on UTankVehicleReticle");
static_assert(offsetof(UTankVehicleReticle, OwningTankVehicle) == 0x000438, "Member 'UTankVehicleReticle::OwningTankVehicle' has a wrong offset!");
static_assert(offsetof(UTankVehicleReticle, MinTurretPitch) == 0x000440, "Member 'UTankVehicleReticle::MinTurretPitch' has a wrong offset!");
static_assert(offsetof(UTankVehicleReticle, MaxTurretPitch) == 0x000444, "Member 'UTankVehicleReticle::MaxTurretPitch' has a wrong offset!");
static_assert(offsetof(UTankVehicleReticle, bDistanceMeterEnabled) == 0x000448, "Member 'UTankVehicleReticle::bDistanceMeterEnabled' has a wrong offset!");
static_assert(offsetof(UTankVehicleReticle, bTankOrientationEventsEnabled) == 0x000449, "Member 'UTankVehicleReticle::bTankOrientationEventsEnabled' has a wrong offset!");

}
