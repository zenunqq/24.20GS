#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortVehicleAnimInstance_MountedCannon final : public UFortMountedTurretAnimInstance
{
public:
	float                                         AimingYawLastFrame;
	float                                         MinTimeStepForInterpolatingTurnRate;
	uint8                                         Pad_618[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVehicleAnimInstance_MountedCannon">();
	}
	static class UFortVehicleAnimInstance_MountedCannon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVehicleAnimInstance_MountedCannon>();
	}
};
static_assert(alignof(UFortVehicleAnimInstance_MountedCannon) == 0x000010, "Wrong alignment on UFortVehicleAnimInstance_MountedCannon");
static_assert(sizeof(UFortVehicleAnimInstance_MountedCannon) == 0x000620, "Wrong size on UFortVehicleAnimInstance_MountedCannon");
static_assert(offsetof(UFortVehicleAnimInstance_MountedCannon, AimingYawLastFrame) == 0x000610, "Member 'UFortVehicleAnimInstance_MountedCannon::AimingYawLastFrame' has a wrong offset!");
static_assert(offsetof(UFortVehicleAnimInstance_MountedCannon, MinTimeStepForInterpolatingTurnRate) == 0x000614, "Member 'UFortVehicleAnimInstance_MountedCannon::MinTimeStepForInterpolatingTurnRate' has a wrong offset!");

}
