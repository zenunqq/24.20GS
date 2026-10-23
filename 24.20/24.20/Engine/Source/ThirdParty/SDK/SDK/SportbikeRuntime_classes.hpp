#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MotorcycleRuntime_classes.hpp"

namespace SDK
{

class UFortSportbikeAnimInstance final : public UFortMotorcycleVehicleAnimInstance
{
public:
	struct FRotator                               LimitedWheelRotationFR;
	bool                                          HasPassenger;
	bool                                          ShouldPlayGroundTrick;
	bool                                          IsWheelie;
	bool                                          StateRuleFromWheelieToGroundTrickOutro;
	bool                                          SportBikeWheelieEarlyOut;
	bool                                          ShouldExitFromLocomotion;
	bool                                          IsChangingGear;
	uint8                                         Pad_67F[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSportbikeAnimInstance">();
	}
	static class UFortSportbikeAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSportbikeAnimInstance>();
	}
};
static_assert(alignof(UFortSportbikeAnimInstance) == 0x000010, "Wrong alignment on UFortSportbikeAnimInstance");
static_assert(sizeof(UFortSportbikeAnimInstance) == 0x000680, "Wrong size on UFortSportbikeAnimInstance");
static_assert(offsetof(UFortSportbikeAnimInstance, LimitedWheelRotationFR) == 0x000660, "Member 'UFortSportbikeAnimInstance::LimitedWheelRotationFR' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, HasPassenger) == 0x000678, "Member 'UFortSportbikeAnimInstance::HasPassenger' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, ShouldPlayGroundTrick) == 0x000679, "Member 'UFortSportbikeAnimInstance::ShouldPlayGroundTrick' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, IsWheelie) == 0x00067A, "Member 'UFortSportbikeAnimInstance::IsWheelie' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, StateRuleFromWheelieToGroundTrickOutro) == 0x00067B, "Member 'UFortSportbikeAnimInstance::StateRuleFromWheelieToGroundTrickOutro' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, SportBikeWheelieEarlyOut) == 0x00067C, "Member 'UFortSportbikeAnimInstance::SportBikeWheelieEarlyOut' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, ShouldExitFromLocomotion) == 0x00067D, "Member 'UFortSportbikeAnimInstance::ShouldExitFromLocomotion' has a wrong offset!");
static_assert(offsetof(UFortSportbikeAnimInstance, IsChangingGear) == 0x00067E, "Member 'UFortSportbikeAnimInstance::IsChangingGear' has a wrong offset!");

class UFortSportbikeDriverAnimInstance final : public UFortPlayerAnimInstance_MotorcycleDriver
{
public:
	bool                                          SportBikeWheelieEarlyOut;
	bool                                          StateRuleFromWheelieToGroundTrickOutro;
	bool                                          EarlyExitFromGroundTrick;
	bool                                          IsBoostingWithNoPassenger;
	int32                                         MotorcycleGear;
	int32                                         CurrentGear;
	int32                                         PreviousGear;
	bool                                          IsChangingGear;
	uint8                                         Pad_929[0x3];
	float                                         SuperSlideBlendAlpha;
	float                                         SuperSlideBlendStart;
	float                                         SuperSlideBlendEnd;
	bool                                          IsSuperSliding;
	uint8                                         Pad_939[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSportbikeDriverAnimInstance">();
	}
	static class UFortSportbikeDriverAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSportbikeDriverAnimInstance>();
	}
};
static_assert(alignof(UFortSportbikeDriverAnimInstance) == 0x000010, "Wrong alignment on UFortSportbikeDriverAnimInstance");
static_assert(sizeof(UFortSportbikeDriverAnimInstance) == 0x000940, "Wrong size on UFortSportbikeDriverAnimInstance");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SportBikeWheelieEarlyOut) == 0x000918, "Member 'UFortSportbikeDriverAnimInstance::SportBikeWheelieEarlyOut' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, StateRuleFromWheelieToGroundTrickOutro) == 0x000919, "Member 'UFortSportbikeDriverAnimInstance::StateRuleFromWheelieToGroundTrickOutro' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, EarlyExitFromGroundTrick) == 0x00091A, "Member 'UFortSportbikeDriverAnimInstance::EarlyExitFromGroundTrick' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, IsBoostingWithNoPassenger) == 0x00091B, "Member 'UFortSportbikeDriverAnimInstance::IsBoostingWithNoPassenger' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, MotorcycleGear) == 0x00091C, "Member 'UFortSportbikeDriverAnimInstance::MotorcycleGear' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, CurrentGear) == 0x000920, "Member 'UFortSportbikeDriverAnimInstance::CurrentGear' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, PreviousGear) == 0x000924, "Member 'UFortSportbikeDriverAnimInstance::PreviousGear' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, IsChangingGear) == 0x000928, "Member 'UFortSportbikeDriverAnimInstance::IsChangingGear' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SuperSlideBlendAlpha) == 0x00092C, "Member 'UFortSportbikeDriverAnimInstance::SuperSlideBlendAlpha' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SuperSlideBlendStart) == 0x000930, "Member 'UFortSportbikeDriverAnimInstance::SuperSlideBlendStart' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, SuperSlideBlendEnd) == 0x000934, "Member 'UFortSportbikeDriverAnimInstance::SuperSlideBlendEnd' has a wrong offset!");
static_assert(offsetof(UFortSportbikeDriverAnimInstance, IsSuperSliding) == 0x000938, "Member 'UFortSportbikeDriverAnimInstance::IsSuperSliding' has a wrong offset!");

class AFortSportbikeVehicle final : public AFortMotorcycleVehicle
{
public:
	uint8                                         Pad_1F80[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSportbikeVehicle">();
	}
	static class AFortSportbikeVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortSportbikeVehicle>();
	}
};
static_assert(alignof(AFortSportbikeVehicle) == 0x000010, "Wrong alignment on AFortSportbikeVehicle");
static_assert(sizeof(AFortSportbikeVehicle) == 0x001F90, "Wrong size on AFortSportbikeVehicle");

class UFortSportbikeVehicleConfigs final : public UFortMotorcycleVehicleConfigs
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSportbikeVehicleConfigs">();
	}
	static class UFortSportbikeVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortSportbikeVehicleConfigs>();
	}
};
static_assert(alignof(UFortSportbikeVehicleConfigs) == 0x000008, "Wrong alignment on UFortSportbikeVehicleConfigs");
static_assert(sizeof(UFortSportbikeVehicleConfigs) == 0x000B78, "Wrong size on UFortSportbikeVehicleConfigs");

}
