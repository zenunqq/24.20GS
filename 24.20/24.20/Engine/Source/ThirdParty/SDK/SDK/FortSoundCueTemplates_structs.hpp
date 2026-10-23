#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

struct FFortContinuousModulatorConfig final
{
public:
	struct FVector2D                              VolumeRange;
	struct FVector2D                              PitchRange;
	EModulationParamMode                          VolumeMode;
	EModulationParamMode                          PitchMode;
	uint8                                         Pad_22[0x6];
};
static_assert(alignof(FFortContinuousModulatorConfig) == 0x000008, "Wrong alignment on FFortContinuousModulatorConfig");
static_assert(sizeof(FFortContinuousModulatorConfig) == 0x000028, "Wrong size on FFortContinuousModulatorConfig");
static_assert(offsetof(FFortContinuousModulatorConfig, VolumeRange) == 0x000000, "Member 'FFortContinuousModulatorConfig::VolumeRange' has a wrong offset!");
static_assert(offsetof(FFortContinuousModulatorConfig, PitchRange) == 0x000010, "Member 'FFortContinuousModulatorConfig::PitchRange' has a wrong offset!");
static_assert(offsetof(FFortContinuousModulatorConfig, VolumeMode) == 0x000020, "Member 'FFortContinuousModulatorConfig::VolumeMode' has a wrong offset!");
static_assert(offsetof(FFortContinuousModulatorConfig, PitchMode) == 0x000021, "Member 'FFortContinuousModulatorConfig::PitchMode' has a wrong offset!");

struct FFortSubmixPair final
{
public:
	class USoundSubmixBase*                       Submix;
	float                                         SendAmount;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FFortSubmixPair) == 0x000008, "Wrong alignment on FFortSubmixPair");
static_assert(sizeof(FFortSubmixPair) == 0x000010, "Wrong size on FFortSubmixPair");
static_assert(offsetof(FFortSubmixPair, Submix) == 0x000000, "Member 'FFortSubmixPair::Submix' has a wrong offset!");
static_assert(offsetof(FFortSubmixPair, SendAmount) == 0x000008, "Member 'FFortSubmixPair::SendAmount' has a wrong offset!");

struct FGliderThrustData final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FVector2D                              PitchOutput;
	struct FVector2D                              VolumeOutput;
	class USoundWave*                             sound;
	struct FFortContinuousModulatorConfig         Settings;
};
static_assert(alignof(FGliderThrustData) == 0x000008, "Wrong alignment on FGliderThrustData");
static_assert(sizeof(FGliderThrustData) == 0x000058, "Wrong size on FGliderThrustData");
static_assert(offsetof(FGliderThrustData, ParameterName) == 0x000000, "Member 'FGliderThrustData::ParameterName' has a wrong offset!");
static_assert(offsetof(FGliderThrustData, PitchOutput) == 0x000008, "Member 'FGliderThrustData::PitchOutput' has a wrong offset!");
static_assert(offsetof(FGliderThrustData, VolumeOutput) == 0x000018, "Member 'FGliderThrustData::VolumeOutput' has a wrong offset!");
static_assert(offsetof(FGliderThrustData, sound) == 0x000028, "Member 'FGliderThrustData::sound' has a wrong offset!");
static_assert(offsetof(FGliderThrustData, Settings) == 0x000030, "Member 'FGliderThrustData::Settings' has a wrong offset!");

struct FPhysicsStateData final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FVector2D                              VolumeOutput;
	struct FVector2D                              PitchOutput;
	struct FFortContinuousModulatorConfig         Settings;
	struct FDistanceDatum                         CrossfadeInputSlow;
	uint8                                         Pad_64[0x4];
	class USoundWave*                             SlowLoop;
	struct FDistanceDatum                         CrossfadeInputFast;
	uint8                                         Pad_84[0x4];
	class USoundWave*                             FastLoop;
};
static_assert(alignof(FPhysicsStateData) == 0x000008, "Wrong alignment on FPhysicsStateData");
static_assert(sizeof(FPhysicsStateData) == 0x000090, "Wrong size on FPhysicsStateData");
static_assert(offsetof(FPhysicsStateData, ParameterName) == 0x000000, "Member 'FPhysicsStateData::ParameterName' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, VolumeOutput) == 0x000008, "Member 'FPhysicsStateData::VolumeOutput' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, PitchOutput) == 0x000018, "Member 'FPhysicsStateData::PitchOutput' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, Settings) == 0x000028, "Member 'FPhysicsStateData::Settings' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, CrossfadeInputSlow) == 0x000050, "Member 'FPhysicsStateData::CrossfadeInputSlow' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, SlowLoop) == 0x000068, "Member 'FPhysicsStateData::SlowLoop' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, CrossfadeInputFast) == 0x000070, "Member 'FPhysicsStateData::CrossfadeInputFast' has a wrong offset!");
static_assert(offsetof(FPhysicsStateData, FastLoop) == 0x000088, "Member 'FPhysicsStateData::FastLoop' has a wrong offset!");

struct FPhysicsImpactData final
{
public:
	struct FVector2D                              VolumeOutput;
	struct FVector2D                              PitchOutput;
	struct FFortContinuousModulatorConfig         Settings;
	TArray<class USoundWave*>                     Variations;
};
static_assert(alignof(FPhysicsImpactData) == 0x000008, "Wrong alignment on FPhysicsImpactData");
static_assert(sizeof(FPhysicsImpactData) == 0x000058, "Wrong size on FPhysicsImpactData");
static_assert(offsetof(FPhysicsImpactData, VolumeOutput) == 0x000000, "Member 'FPhysicsImpactData::VolumeOutput' has a wrong offset!");
static_assert(offsetof(FPhysicsImpactData, PitchOutput) == 0x000010, "Member 'FPhysicsImpactData::PitchOutput' has a wrong offset!");
static_assert(offsetof(FPhysicsImpactData, Settings) == 0x000020, "Member 'FPhysicsImpactData::Settings' has a wrong offset!");
static_assert(offsetof(FPhysicsImpactData, Variations) == 0x000048, "Member 'FPhysicsImpactData::Variations' has a wrong offset!");

}
