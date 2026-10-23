#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"

namespace SDK
{

struct FFortVehicleSoundSurfaceParam final
{
public:
	EPhysicalSurface                              Surface;
	uint8                                         Pad_1[0x3];
	class FName                                   Name;
	float                                         Value;
};
static_assert(alignof(FFortVehicleSoundSurfaceParam) == 0x000004, "Wrong alignment on FFortVehicleSoundSurfaceParam");
static_assert(sizeof(FFortVehicleSoundSurfaceParam) == 0x00000C, "Wrong size on FFortVehicleSoundSurfaceParam");
static_assert(offsetof(FFortVehicleSoundSurfaceParam, Surface) == 0x000000, "Member 'FFortVehicleSoundSurfaceParam::Surface' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundSurfaceParam, Name) == 0x000004, "Member 'FFortVehicleSoundSurfaceParam::Name' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundSurfaceParam, Value) == 0x000008, "Member 'FFortVehicleSoundSurfaceParam::Value' has a wrong offset!");

struct FFortVehicleSoundComponent_SurfaceContext final
{
public:
	float                                         BrakingHardStopThreshold;
	float                                         BrakingSoftStopThreshold;
	float                                         SurfaceParamInterpSpeed;
	uint8                                         Pad_C[0x4];
	TMap<EPhysicalSurface, EPhysicalSurface>      SurfaceMap;
	class FName                                   WaterParamName;
	float                                         WaterParamInterpSpeed;
	class FName                                   AirParamName;
	float                                         AirParamAttackInterpSpeed;
	float                                         AirParamReleaseInterpSpeed;
	float                                         MinSpeedForSkidFX;
	float                                         MaxSpeedForSkidFX;
	class FName                                   SkiddingParamName;
	float                                         SkiddingParamInterpSpeed;
	EPhysicalSurface                              CurrentSurface;
	uint8                                         Pad_85[0x3];
	TArray<struct FFortVehicleSoundSurfaceParam>  SurfaceParams;
	uint8                                         Pad_98[0x10];
};
static_assert(alignof(FFortVehicleSoundComponent_SurfaceContext) == 0x000008, "Wrong alignment on FFortVehicleSoundComponent_SurfaceContext");
static_assert(sizeof(FFortVehicleSoundComponent_SurfaceContext) == 0x0000A8, "Wrong size on FFortVehicleSoundComponent_SurfaceContext");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, BrakingHardStopThreshold) == 0x000000, "Member 'FFortVehicleSoundComponent_SurfaceContext::BrakingHardStopThreshold' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, BrakingSoftStopThreshold) == 0x000004, "Member 'FFortVehicleSoundComponent_SurfaceContext::BrakingSoftStopThreshold' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceParamInterpSpeed) == 0x000008, "Member 'FFortVehicleSoundComponent_SurfaceContext::SurfaceParamInterpSpeed' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceMap) == 0x000010, "Member 'FFortVehicleSoundComponent_SurfaceContext::SurfaceMap' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, WaterParamName) == 0x000060, "Member 'FFortVehicleSoundComponent_SurfaceContext::WaterParamName' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, WaterParamInterpSpeed) == 0x000064, "Member 'FFortVehicleSoundComponent_SurfaceContext::WaterParamInterpSpeed' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, AirParamName) == 0x000068, "Member 'FFortVehicleSoundComponent_SurfaceContext::AirParamName' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, AirParamAttackInterpSpeed) == 0x00006C, "Member 'FFortVehicleSoundComponent_SurfaceContext::AirParamAttackInterpSpeed' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, AirParamReleaseInterpSpeed) == 0x000070, "Member 'FFortVehicleSoundComponent_SurfaceContext::AirParamReleaseInterpSpeed' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, MinSpeedForSkidFX) == 0x000074, "Member 'FFortVehicleSoundComponent_SurfaceContext::MinSpeedForSkidFX' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, MaxSpeedForSkidFX) == 0x000078, "Member 'FFortVehicleSoundComponent_SurfaceContext::MaxSpeedForSkidFX' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SkiddingParamName) == 0x00007C, "Member 'FFortVehicleSoundComponent_SurfaceContext::SkiddingParamName' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SkiddingParamInterpSpeed) == 0x000080, "Member 'FFortVehicleSoundComponent_SurfaceContext::SkiddingParamInterpSpeed' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, CurrentSurface) == 0x000084, "Member 'FFortVehicleSoundComponent_SurfaceContext::CurrentSurface' has a wrong offset!");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceParams) == 0x000088, "Member 'FFortVehicleSoundComponent_SurfaceContext::SurfaceParams' has a wrong offset!");

}
