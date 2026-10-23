#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FMotoSynthRuntimeSettings final
{
public:
	bool                                          bSynthToneEnabled;
	uint8                                         Pad_1[0x7];
	struct FVector2D                              SynthToneVolumeRange;
	struct FVector2D                              SynthToneFilterFrequencyRange;
	bool                                          bSynthToneEnvelopeEnabled;
	uint8                                         Pad_29[0x7];
	struct FVector2D                              SynthToneAttackTimeMsecRange;
	struct FVector2D                              SynthToneAttackCurveRange;
	struct FVector2D                              SynthToneDecayTimeMsecRange;
	struct FVector2D                              SynthToneDecayCurveRange;
	int32                                         SynthOctaveShift;
	bool                                          bNoiseEnabled;
	uint8                                         Pad_75[0x3];
	struct FVector2D                              NoiseVolumeRange;
	bool                                          bNoiseEnvelopeEnabled;
	uint8                                         Pad_89[0x7];
	struct FVector2D                              NoiseLPFRange;
	struct FVector2D                              NoiseAttackTimeMsecRange;
	struct FVector2D                              NoiseAttackCurveRange;
	struct FVector2D                              NoiseDecayTimeMsecRange;
	struct FVector2D                              NoiseDecayCurveRange;
	bool                                          bGranularEngineEnabled;
	uint8                                         Pad_E1[0x3];
	float                                         GranularEngineVolume;
	float                                         GranularEnginePitchScale;
	int32                                         NumSamplesToCrossfadeBetweenGrains;
	int32                                         NumGrainTableEntriesPerGrain;
	int32                                         GrainTableRandomOffsetForConstantRPMs;
	int32                                         GrainCrossfadeSamplesForConstantRPMs;
	uint8                                         Pad_FC[0x4];
	class UMotoSynthSource*                       AccelerationSource;
	class UMotoSynthSource*                       DecelerationSource;
	bool                                          bStereoWidenerEnabled;
	uint8                                         Pad_111[0x3];
	float                                         StereoDelayMsec;
	float                                         StereoFeedback;
	float                                         StereoWidenerWetlevel;
	float                                         StereoWidenerDryLevel;
	float                                         StereoWidenerDelayRatio;
	bool                                          bStereoWidenerFilterEnabled;
	uint8                                         Pad_129[0x3];
	float                                         StereoWidenerFilterFrequency;
	float                                         StereoWidenerFilterQ;
	uint8                                         Pad_134[0x4];
};
static_assert(alignof(FMotoSynthRuntimeSettings) == 0x000008, "Wrong alignment on FMotoSynthRuntimeSettings");
static_assert(sizeof(FMotoSynthRuntimeSettings) == 0x000138, "Wrong size on FMotoSynthRuntimeSettings");
static_assert(offsetof(FMotoSynthRuntimeSettings, bSynthToneEnabled) == 0x000000, "Member 'FMotoSynthRuntimeSettings::bSynthToneEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneVolumeRange) == 0x000008, "Member 'FMotoSynthRuntimeSettings::SynthToneVolumeRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneFilterFrequencyRange) == 0x000018, "Member 'FMotoSynthRuntimeSettings::SynthToneFilterFrequencyRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bSynthToneEnvelopeEnabled) == 0x000028, "Member 'FMotoSynthRuntimeSettings::bSynthToneEnvelopeEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneAttackTimeMsecRange) == 0x000030, "Member 'FMotoSynthRuntimeSettings::SynthToneAttackTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneAttackCurveRange) == 0x000040, "Member 'FMotoSynthRuntimeSettings::SynthToneAttackCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneDecayTimeMsecRange) == 0x000050, "Member 'FMotoSynthRuntimeSettings::SynthToneDecayTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthToneDecayCurveRange) == 0x000060, "Member 'FMotoSynthRuntimeSettings::SynthToneDecayCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, SynthOctaveShift) == 0x000070, "Member 'FMotoSynthRuntimeSettings::SynthOctaveShift' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bNoiseEnabled) == 0x000074, "Member 'FMotoSynthRuntimeSettings::bNoiseEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseVolumeRange) == 0x000078, "Member 'FMotoSynthRuntimeSettings::NoiseVolumeRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bNoiseEnvelopeEnabled) == 0x000088, "Member 'FMotoSynthRuntimeSettings::bNoiseEnvelopeEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseLPFRange) == 0x000090, "Member 'FMotoSynthRuntimeSettings::NoiseLPFRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseAttackTimeMsecRange) == 0x0000A0, "Member 'FMotoSynthRuntimeSettings::NoiseAttackTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseAttackCurveRange) == 0x0000B0, "Member 'FMotoSynthRuntimeSettings::NoiseAttackCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseDecayTimeMsecRange) == 0x0000C0, "Member 'FMotoSynthRuntimeSettings::NoiseDecayTimeMsecRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NoiseDecayCurveRange) == 0x0000D0, "Member 'FMotoSynthRuntimeSettings::NoiseDecayCurveRange' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bGranularEngineEnabled) == 0x0000E0, "Member 'FMotoSynthRuntimeSettings::bGranularEngineEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GranularEngineVolume) == 0x0000E4, "Member 'FMotoSynthRuntimeSettings::GranularEngineVolume' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GranularEnginePitchScale) == 0x0000E8, "Member 'FMotoSynthRuntimeSettings::GranularEnginePitchScale' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NumSamplesToCrossfadeBetweenGrains) == 0x0000EC, "Member 'FMotoSynthRuntimeSettings::NumSamplesToCrossfadeBetweenGrains' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, NumGrainTableEntriesPerGrain) == 0x0000F0, "Member 'FMotoSynthRuntimeSettings::NumGrainTableEntriesPerGrain' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GrainTableRandomOffsetForConstantRPMs) == 0x0000F4, "Member 'FMotoSynthRuntimeSettings::GrainTableRandomOffsetForConstantRPMs' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, GrainCrossfadeSamplesForConstantRPMs) == 0x0000F8, "Member 'FMotoSynthRuntimeSettings::GrainCrossfadeSamplesForConstantRPMs' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, AccelerationSource) == 0x000100, "Member 'FMotoSynthRuntimeSettings::AccelerationSource' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, DecelerationSource) == 0x000108, "Member 'FMotoSynthRuntimeSettings::DecelerationSource' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bStereoWidenerEnabled) == 0x000110, "Member 'FMotoSynthRuntimeSettings::bStereoWidenerEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoDelayMsec) == 0x000114, "Member 'FMotoSynthRuntimeSettings::StereoDelayMsec' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoFeedback) == 0x000118, "Member 'FMotoSynthRuntimeSettings::StereoFeedback' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerWetlevel) == 0x00011C, "Member 'FMotoSynthRuntimeSettings::StereoWidenerWetlevel' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerDryLevel) == 0x000120, "Member 'FMotoSynthRuntimeSettings::StereoWidenerDryLevel' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerDelayRatio) == 0x000124, "Member 'FMotoSynthRuntimeSettings::StereoWidenerDelayRatio' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, bStereoWidenerFilterEnabled) == 0x000128, "Member 'FMotoSynthRuntimeSettings::bStereoWidenerFilterEnabled' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerFilterFrequency) == 0x00012C, "Member 'FMotoSynthRuntimeSettings::StereoWidenerFilterFrequency' has a wrong offset!");
static_assert(offsetof(FMotoSynthRuntimeSettings, StereoWidenerFilterQ) == 0x000130, "Member 'FMotoSynthRuntimeSettings::StereoWidenerFilterQ' has a wrong offset!");

struct FGrainTableEntry final
{
public:
	int32                                         SampleIndex;
	float                                         RPM;
};
static_assert(alignof(FGrainTableEntry) == 0x000004, "Wrong alignment on FGrainTableEntry");
static_assert(sizeof(FGrainTableEntry) == 0x000008, "Wrong size on FGrainTableEntry");
static_assert(offsetof(FGrainTableEntry, SampleIndex) == 0x000000, "Member 'FGrainTableEntry::SampleIndex' has a wrong offset!");
static_assert(offsetof(FGrainTableEntry, RPM) == 0x000004, "Member 'FGrainTableEntry::RPM' has a wrong offset!");

}
