#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AudioMotorSim_classes.hpp"
#include "AudioMotorSimStandardComponents_structs.hpp"

namespace SDK
{

class UBoostMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	float                                         ThrottleScale;
	float                                         InterpExp;
	float                                         InterpTime;
	bool                                          ScaleThrottleWithBoostStrength;
	bool                                          bModifyPitch;
	uint8                                         Pad_B6[0x2];
	float                                         PitchModifierInterpSpeed;
	uint8                                         Pad_BC[0x4];
	struct FRuntimeFloatCurve                     BoostToPitchCurve;
	uint8                                         Pad_148[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoostMotorSimComponent">();
	}
	static class UBoostMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoostMotorSimComponent>();
	}
};
static_assert(alignof(UBoostMotorSimComponent) == 0x000008, "Wrong alignment on UBoostMotorSimComponent");
static_assert(sizeof(UBoostMotorSimComponent) == 0x000150, "Wrong size on UBoostMotorSimComponent");
static_assert(offsetof(UBoostMotorSimComponent, ThrottleScale) == 0x0000A8, "Member 'UBoostMotorSimComponent::ThrottleScale' has a wrong offset!");
static_assert(offsetof(UBoostMotorSimComponent, InterpExp) == 0x0000AC, "Member 'UBoostMotorSimComponent::InterpExp' has a wrong offset!");
static_assert(offsetof(UBoostMotorSimComponent, InterpTime) == 0x0000B0, "Member 'UBoostMotorSimComponent::InterpTime' has a wrong offset!");
static_assert(offsetof(UBoostMotorSimComponent, ScaleThrottleWithBoostStrength) == 0x0000B4, "Member 'UBoostMotorSimComponent::ScaleThrottleWithBoostStrength' has a wrong offset!");
static_assert(offsetof(UBoostMotorSimComponent, bModifyPitch) == 0x0000B5, "Member 'UBoostMotorSimComponent::bModifyPitch' has a wrong offset!");
static_assert(offsetof(UBoostMotorSimComponent, PitchModifierInterpSpeed) == 0x0000B8, "Member 'UBoostMotorSimComponent::PitchModifierInterpSpeed' has a wrong offset!");
static_assert(offsetof(UBoostMotorSimComponent, BoostToPitchCurve) == 0x0000C0, "Member 'UBoostMotorSimComponent::BoostToPitchCurve' has a wrong offset!");

class UMotorPhysicsSimComponent final : public UAudioMotorSimComponent
{
public:
	float                                         Weight;
	float                                         EngineTorque;
	float                                         BrakingHorsePower;
	uint8                                         Pad_B4[0x4];
	TArray<float>                                 GearRatios;
	float                                         ClutchedGearRatio;
	bool                                          bUseInfiniteGears;
	bool                                          bAlwaysDownshiftToZerothGear;
	uint8                                         Pad_CE[0x2];
	float                                         InfiniteGearRatio;
	float                                         UpShiftMaxRpm;
	float                                         DownShiftStartRpm;
	float                                         ClutchedForceModifier;
	float                                         EngineGearRatio;
	float                                         EngineFriction;
	float                                         GroundFriction;
	float                                         WindResistancePerVelocity;
	float                                         ThrottleInterpolationTime;
	float                                         RpmInterpSpeed;
	TMulticastInlineDelegate<void(int32 NewGear)> OnGearChangedEvent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotorPhysicsSimComponent">();
	}
	static class UMotorPhysicsSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotorPhysicsSimComponent>();
	}
};
static_assert(alignof(UMotorPhysicsSimComponent) == 0x000008, "Wrong alignment on UMotorPhysicsSimComponent");
static_assert(sizeof(UMotorPhysicsSimComponent) == 0x000108, "Wrong size on UMotorPhysicsSimComponent");
static_assert(offsetof(UMotorPhysicsSimComponent, Weight) == 0x0000A8, "Member 'UMotorPhysicsSimComponent::Weight' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, EngineTorque) == 0x0000AC, "Member 'UMotorPhysicsSimComponent::EngineTorque' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, BrakingHorsePower) == 0x0000B0, "Member 'UMotorPhysicsSimComponent::BrakingHorsePower' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, GearRatios) == 0x0000B8, "Member 'UMotorPhysicsSimComponent::GearRatios' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, ClutchedGearRatio) == 0x0000C8, "Member 'UMotorPhysicsSimComponent::ClutchedGearRatio' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, bUseInfiniteGears) == 0x0000CC, "Member 'UMotorPhysicsSimComponent::bUseInfiniteGears' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, bAlwaysDownshiftToZerothGear) == 0x0000CD, "Member 'UMotorPhysicsSimComponent::bAlwaysDownshiftToZerothGear' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, InfiniteGearRatio) == 0x0000D0, "Member 'UMotorPhysicsSimComponent::InfiniteGearRatio' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, UpShiftMaxRpm) == 0x0000D4, "Member 'UMotorPhysicsSimComponent::UpShiftMaxRpm' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, DownShiftStartRpm) == 0x0000D8, "Member 'UMotorPhysicsSimComponent::DownShiftStartRpm' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, ClutchedForceModifier) == 0x0000DC, "Member 'UMotorPhysicsSimComponent::ClutchedForceModifier' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, EngineGearRatio) == 0x0000E0, "Member 'UMotorPhysicsSimComponent::EngineGearRatio' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, EngineFriction) == 0x0000E4, "Member 'UMotorPhysicsSimComponent::EngineFriction' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, GroundFriction) == 0x0000E8, "Member 'UMotorPhysicsSimComponent::GroundFriction' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, WindResistancePerVelocity) == 0x0000EC, "Member 'UMotorPhysicsSimComponent::WindResistancePerVelocity' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, ThrottleInterpolationTime) == 0x0000F0, "Member 'UMotorPhysicsSimComponent::ThrottleInterpolationTime' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, RpmInterpSpeed) == 0x0000F4, "Member 'UMotorPhysicsSimComponent::RpmInterpSpeed' has a wrong offset!");
static_assert(offsetof(UMotorPhysicsSimComponent, OnGearChangedEvent) == 0x0000F8, "Member 'UMotorPhysicsSimComponent::OnGearChangedEvent' has a wrong offset!");

class UResistanceMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	float                                         UpSpeedMaxFriction;
	float                                         MinSpeed;
	struct FRuntimeFloatCurve                     SideSpeedFrictionCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResistanceMotorSimComponent">();
	}
	static class UResistanceMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResistanceMotorSimComponent>();
	}
};
static_assert(alignof(UResistanceMotorSimComponent) == 0x000008, "Wrong alignment on UResistanceMotorSimComponent");
static_assert(sizeof(UResistanceMotorSimComponent) == 0x000138, "Wrong size on UResistanceMotorSimComponent");
static_assert(offsetof(UResistanceMotorSimComponent, UpSpeedMaxFriction) == 0x0000A8, "Member 'UResistanceMotorSimComponent::UpSpeedMaxFriction' has a wrong offset!");
static_assert(offsetof(UResistanceMotorSimComponent, MinSpeed) == 0x0000AC, "Member 'UResistanceMotorSimComponent::MinSpeed' has a wrong offset!");
static_assert(offsetof(UResistanceMotorSimComponent, SideSpeedFrictionCurve) == 0x0000B0, "Member 'UResistanceMotorSimComponent::SideSpeedFrictionCurve' has a wrong offset!");

class UReverseMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	float                                         ReverseEngineResistanceModifier;
	uint8                                         Pad_AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverseMotorSimComponent">();
	}
	static class UReverseMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverseMotorSimComponent>();
	}
};
static_assert(alignof(UReverseMotorSimComponent) == 0x000008, "Wrong alignment on UReverseMotorSimComponent");
static_assert(sizeof(UReverseMotorSimComponent) == 0x0000B0, "Wrong size on UReverseMotorSimComponent");
static_assert(offsetof(UReverseMotorSimComponent, ReverseEngineResistanceModifier) == 0x0000A8, "Member 'UReverseMotorSimComponent::ReverseEngineResistanceModifier' has a wrong offset!");

class URevLimiterMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	float                                         LimitTime;
	float                                         DecelScale;
	float                                         AirMaxThrottleTime;
	float                                         SideSpeedThreshold;
	float                                         LimiterMaxRpm;
	uint8                                         Pad_BC[0x4];
	TMulticastInlineDelegate<void()>              OnRevLimiterHit;
	TMulticastInlineDelegate<void(bool bNewState)> OnRevLimiterStateChanged;
	uint8                                         Pad_E0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RevLimiterMotorSimComponent">();
	}
	static class URevLimiterMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URevLimiterMotorSimComponent>();
	}
};
static_assert(alignof(URevLimiterMotorSimComponent) == 0x000008, "Wrong alignment on URevLimiterMotorSimComponent");
static_assert(sizeof(URevLimiterMotorSimComponent) == 0x0000F0, "Wrong size on URevLimiterMotorSimComponent");
static_assert(offsetof(URevLimiterMotorSimComponent, LimitTime) == 0x0000A8, "Member 'URevLimiterMotorSimComponent::LimitTime' has a wrong offset!");
static_assert(offsetof(URevLimiterMotorSimComponent, DecelScale) == 0x0000AC, "Member 'URevLimiterMotorSimComponent::DecelScale' has a wrong offset!");
static_assert(offsetof(URevLimiterMotorSimComponent, AirMaxThrottleTime) == 0x0000B0, "Member 'URevLimiterMotorSimComponent::AirMaxThrottleTime' has a wrong offset!");
static_assert(offsetof(URevLimiterMotorSimComponent, SideSpeedThreshold) == 0x0000B4, "Member 'URevLimiterMotorSimComponent::SideSpeedThreshold' has a wrong offset!");
static_assert(offsetof(URevLimiterMotorSimComponent, LimiterMaxRpm) == 0x0000B8, "Member 'URevLimiterMotorSimComponent::LimiterMaxRpm' has a wrong offset!");
static_assert(offsetof(URevLimiterMotorSimComponent, OnRevLimiterHit) == 0x0000C0, "Member 'URevLimiterMotorSimComponent::OnRevLimiterHit' has a wrong offset!");
static_assert(offsetof(URevLimiterMotorSimComponent, OnRevLimiterStateChanged) == 0x0000D0, "Member 'URevLimiterMotorSimComponent::OnRevLimiterStateChanged' has a wrong offset!");

class URpmCurveMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	TArray<struct FMotorSimGearCurve>             Gears;
	float                                         InterpSpeed;
	uint8                                         Pad_BC[0x4];
	TMulticastInlineDelegate<void(int32 NewGear)> OnUpShift;
	TMulticastInlineDelegate<void(int32 NewGear)> OnDownShift;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RpmCurveMotorSimComponent">();
	}
	static class URpmCurveMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URpmCurveMotorSimComponent>();
	}
};
static_assert(alignof(URpmCurveMotorSimComponent) == 0x000008, "Wrong alignment on URpmCurveMotorSimComponent");
static_assert(sizeof(URpmCurveMotorSimComponent) == 0x0000E0, "Wrong size on URpmCurveMotorSimComponent");
static_assert(offsetof(URpmCurveMotorSimComponent, Gears) == 0x0000A8, "Member 'URpmCurveMotorSimComponent::Gears' has a wrong offset!");
static_assert(offsetof(URpmCurveMotorSimComponent, InterpSpeed) == 0x0000B8, "Member 'URpmCurveMotorSimComponent::InterpSpeed' has a wrong offset!");
static_assert(offsetof(URpmCurveMotorSimComponent, OnUpShift) == 0x0000C0, "Member 'URpmCurveMotorSimComponent::OnUpShift' has a wrong offset!");
static_assert(offsetof(URpmCurveMotorSimComponent, OnDownShift) == 0x0000D0, "Member 'URpmCurveMotorSimComponent::OnDownShift' has a wrong offset!");

class UThrottleStateMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	TMulticastInlineDelegate<void()>              OnThrottleEngaged;
	TMulticastInlineDelegate<void()>              OnThrottleReleased;
	TMulticastInlineDelegate<void(float BlowoffStrength)> OnEngineBlowoff;
	float                                         BlowoffMinThrottleTime;
	uint8                                         Pad_DC[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ThrottleStateMotorSimComponent">();
	}
	static class UThrottleStateMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThrottleStateMotorSimComponent>();
	}
};
static_assert(alignof(UThrottleStateMotorSimComponent) == 0x000008, "Wrong alignment on UThrottleStateMotorSimComponent");
static_assert(sizeof(UThrottleStateMotorSimComponent) == 0x0000E8, "Wrong size on UThrottleStateMotorSimComponent");
static_assert(offsetof(UThrottleStateMotorSimComponent, OnThrottleEngaged) == 0x0000A8, "Member 'UThrottleStateMotorSimComponent::OnThrottleEngaged' has a wrong offset!");
static_assert(offsetof(UThrottleStateMotorSimComponent, OnThrottleReleased) == 0x0000B8, "Member 'UThrottleStateMotorSimComponent::OnThrottleReleased' has a wrong offset!");
static_assert(offsetof(UThrottleStateMotorSimComponent, OnEngineBlowoff) == 0x0000C8, "Member 'UThrottleStateMotorSimComponent::OnEngineBlowoff' has a wrong offset!");
static_assert(offsetof(UThrottleStateMotorSimComponent, BlowoffMinThrottleTime) == 0x0000D8, "Member 'UThrottleStateMotorSimComponent::BlowoffMinThrottleTime' has a wrong offset!");

class UVelocitySyncMotorSimComponent final : public UAudioMotorSimComponent
{
public:
	float                                         NoThrottleTime;
	float                                         SpeedThreshold;
	struct FRuntimeFloatCurve                     SpeedToRpmCurve;
	float                                         InterpSpeed;
	float                                         InterpTime;
	float                                         FirstGearThrottleThreshold;
	uint8                                         Pad_144[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VelocitySyncMotorSimComponent">();
	}
	static class UVelocitySyncMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVelocitySyncMotorSimComponent>();
	}
};
static_assert(alignof(UVelocitySyncMotorSimComponent) == 0x000008, "Wrong alignment on UVelocitySyncMotorSimComponent");
static_assert(sizeof(UVelocitySyncMotorSimComponent) == 0x000150, "Wrong size on UVelocitySyncMotorSimComponent");
static_assert(offsetof(UVelocitySyncMotorSimComponent, NoThrottleTime) == 0x0000A8, "Member 'UVelocitySyncMotorSimComponent::NoThrottleTime' has a wrong offset!");
static_assert(offsetof(UVelocitySyncMotorSimComponent, SpeedThreshold) == 0x0000AC, "Member 'UVelocitySyncMotorSimComponent::SpeedThreshold' has a wrong offset!");
static_assert(offsetof(UVelocitySyncMotorSimComponent, SpeedToRpmCurve) == 0x0000B0, "Member 'UVelocitySyncMotorSimComponent::SpeedToRpmCurve' has a wrong offset!");
static_assert(offsetof(UVelocitySyncMotorSimComponent, InterpSpeed) == 0x000138, "Member 'UVelocitySyncMotorSimComponent::InterpSpeed' has a wrong offset!");
static_assert(offsetof(UVelocitySyncMotorSimComponent, InterpTime) == 0x00013C, "Member 'UVelocitySyncMotorSimComponent::InterpTime' has a wrong offset!");
static_assert(offsetof(UVelocitySyncMotorSimComponent, FirstGearThrottleThreshold) == 0x000140, "Member 'UVelocitySyncMotorSimComponent::FirstGearThrottleThreshold' has a wrong offset!");

}
