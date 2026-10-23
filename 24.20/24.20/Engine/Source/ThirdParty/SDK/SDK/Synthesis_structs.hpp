#pragma once

#include "Basic.hpp"

#include "AudioMixer_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

enum class ESynth1OscType : uint8
{
	Sine                                     = 0,
	Saw                                      = 1,
	Triangle                                 = 2,
	Square                                   = 3,
	Noise                                    = 4,
	Count                                    = 5,
	ESynth1OscType_MAX                       = 6,
};

enum class ESynthLFOType : uint8
{
	Sine                                     = 0,
	UpSaw                                    = 1,
	DownSaw                                  = 2,
	Square                                   = 3,
	Triangle                                 = 4,
	Exponential                              = 5,
	RandomSampleHold                         = 6,
	Count                                    = 7,
	ESynthLFOType_MAX                        = 8,
};

enum class ESynthLFOMode : uint8
{
	Sync                                     = 0,
	OneShot                                  = 1,
	Free                                     = 2,
	Count                                    = 3,
	ESynthLFOMode_MAX                        = 4,
};

enum class ESynthLFOPatchType : uint8
{
	PatchToNone                              = 0,
	PatchToGain                              = 1,
	PatchToOscFreq                           = 2,
	PatchToFilterFreq                        = 3,
	PatchToFilterQ                           = 4,
	PatchToOscPulseWidth                     = 5,
	PatchToOscPan                            = 6,
	PatchLFO1ToLFO2Frequency                 = 7,
	PatchLFO1ToLFO2Gain                      = 8,
	Count                                    = 9,
	ESynthLFOPatchType_MAX                   = 10,
};

enum class ESynthModEnvPatch : uint8
{
	PatchToNone                              = 0,
	PatchToOscFreq                           = 1,
	PatchToFilterFreq                        = 2,
	PatchToFilterQ                           = 3,
	PatchToLFO1Gain                          = 4,
	PatchToLFO2Gain                          = 5,
	PatchToLFO1Freq                          = 6,
	PatchToLFO2Freq                          = 7,
	Count                                    = 8,
	ESynthModEnvPatch_MAX                    = 9,
};

enum class ESynthModEnvBiasPatch : uint8
{
	PatchToNone                              = 0,
	PatchToOscFreq                           = 1,
	PatchToFilterFreq                        = 2,
	PatchToFilterQ                           = 3,
	PatchToLFO1Gain                          = 4,
	PatchToLFO2Gain                          = 5,
	PatchToLFO1Freq                          = 6,
	PatchToLFO2Freq                          = 7,
	Count                                    = 8,
	ESynthModEnvBiasPatch_MAX                = 9,
};

enum class ESynthFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	BandStop                                 = 3,
	Count                                    = 4,
	ESynthFilterType_MAX                     = 5,
};

enum class ESynthFilterAlgorithm : uint8
{
	OnePole                                  = 0,
	StateVariable                            = 1,
	Ladder                                   = 2,
	Count                                    = 3,
	ESynthFilterAlgorithm_MAX                = 4,
};

enum class ESynthStereoDelayMode : uint8
{
	Normal                                   = 0,
	Cross                                    = 1,
	PingPong                                 = 2,
	Count                                    = 3,
	ESynthStereoDelayMode_MAX                = 4,
};

enum class ESynth1PatchSource : uint8
{
	LFO1                                     = 0,
	LFO2                                     = 1,
	Envelope                                 = 2,
	BiasEnvelope                             = 3,
	Count                                    = 4,
	ESynth1PatchSource_MAX                   = 5,
};

enum class ESynth1PatchDestination : uint8
{
	Osc1Gain                                 = 0,
	Osc1Frequency                            = 1,
	Osc1Pulsewidth                           = 2,
	Osc2Gain                                 = 3,
	Osc2Frequency                            = 4,
	Osc2Pulsewidth                           = 5,
	FilterFrequency                          = 6,
	FilterQ                                  = 7,
	Gain                                     = 8,
	Pan                                      = 9,
	LFO1Frequency                            = 10,
	LFO1Gain                                 = 11,
	LFO2Frequency                            = 12,
	LFO2Gain                                 = 13,
	Count                                    = 14,
	ESynth1PatchDestination_MAX              = 15,
};

enum class ESubmixEffectConvolutionReverbBlockSize : uint8
{
	BlockSize256                             = 0,
	BlockSize512                             = 1,
	BlockSize1024                            = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class ESourceEffectDynamicsProcessorType : uint8
{
	Compressor                               = 0,
	Limiter                                  = 1,
	Expander                                 = 2,
	Gate                                     = 3,
	UpwardsCompressor                        = 4,
	Count                                    = 5,
	ESourceEffectDynamicsProcessorType_MAX   = 6,
};

enum class ESourceEffectDynamicsPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESourceEffectDynamicsPeakMode_MAX        = 4,
};

enum class EEnvelopeFollowerPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	EEnvelopeFollowerPeakMode_MAX            = 4,
};

enum class ESourceEffectFilterCircuit : uint8
{
	OnePole                                  = 0,
	StateVariable                            = 1,
	Ladder                                   = 2,
	Count                                    = 3,
	ESourceEffectFilterCircuit_MAX           = 4,
};

enum class ESourceEffectFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	BandStop                                 = 3,
	Count                                    = 4,
	ESourceEffectFilterType_MAX              = 5,
};

enum class ESourceEffectFilterParam : uint8
{
	FilterFrequency                          = 0,
	FilterResonance                          = 1,
	Count                                    = 2,
	ESourceEffectFilterParam_MAX             = 3,
};

enum class EStereoChannelMode : uint8
{
	MidSide                                  = 0,
	LeftRight                                = 1,
	count                                    = 2,
	EStereoChannelMode_MAX                   = 3,
};

enum class ESourceEffectMotionFilterModSource : uint8
{
	DistanceFromListener                     = 0,
	SpeedRelativeToListener                  = 1,
	SpeedOfSourceEmitter                     = 2,
	SpeedOfListener                          = 3,
	SpeedOfAngleDelta                        = 4,
	Count                                    = 5,
	ESourceEffectMotionFilterModSource_MAX   = 6,
};

enum class ESourceEffectMotionFilterModDestination : uint8
{
	FilterACutoffFrequency                   = 0,
	FilterAResonance                         = 1,
	FilterAOutputVolumeDB                    = 2,
	FilterBCutoffFrequency                   = 3,
	FilterBResonance                         = 4,
	FilterBOutputVolumeDB                    = 5,
	FilterMix                                = 6,
	Count                                    = 7,
	ESourceEffectMotionFilterModDestination_MAX = 8,
};

enum class ESourceEffectMotionFilterTopology : uint8
{
	SerialMode                               = 0,
	ParallelMode                             = 1,
	Count                                    = 2,
	ESourceEffectMotionFilterTopology_MAX    = 3,
};

enum class ESourceEffectMotionFilterCircuit : uint8
{
	OnePole                                  = 0,
	StateVariable                            = 1,
	Ladder                                   = 2,
	Count                                    = 3,
	ESourceEffectMotionFilterCircuit_MAX     = 4,
};

enum class ESourceEffectMotionFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	BandStop                                 = 3,
	Count                                    = 4,
	ESourceEffectMotionFilterType_MAX        = 5,
};

enum class EPhaserLFOType : uint8
{
	Sine                                     = 0,
	UpSaw                                    = 1,
	DownSaw                                  = 2,
	Square                                   = 3,
	Triangle                                 = 4,
	Exponential                              = 5,
	RandomSampleHold                         = 6,
	Count                                    = 7,
	EPhaserLFOType_MAX                       = 8,
};

enum class ERingModulatorTypeSourceEffect : uint8
{
	Sine                                     = 0,
	Saw                                      = 1,
	Triangle                                 = 2,
	Square                                   = 3,
	Count                                    = 4,
	ERingModulatorTypeSourceEffect_MAX       = 5,
};

enum class EStereoDelaySourceEffect : uint8
{
	Normal                                   = 0,
	Cross                                    = 1,
	PingPong                                 = 2,
	Count                                    = 3,
	EStereoDelaySourceEffect_MAX             = 4,
};

enum class EStereoDelayFiltertype : uint8
{
	Lowpass                                  = 0,
	Highpass                                 = 1,
	Bandpass                                 = 2,
	Notch                                    = 3,
	Count                                    = 4,
	EStereoDelayFiltertype_MAX               = 5,
};

enum class ESubmixFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	BandStop                                 = 3,
	Count                                    = 4,
	ESubmixFilterType_MAX                    = 5,
};

enum class ESubmixFilterAlgorithm : uint8
{
	OnePole                                  = 0,
	StateVariable                            = 1,
	Ladder                                   = 2,
	Count                                    = 3,
	ESubmixFilterAlgorithm_MAX               = 4,
};

enum class ETapLineMode : uint8
{
	SendToChannel                            = 0,
	Panning                                  = 1,
	Disabled                                 = 2,
	ETapLineMode_MAX                         = 3,
};

enum class EGranularSynthEnvelopeType : uint8
{
	Rectangular                              = 0,
	Triangle                                 = 1,
	DownwardTriangle                         = 2,
	UpwardTriangle                           = 3,
	ExponentialDecay                         = 4,
	ExponentialIncrease                      = 5,
	Gaussian                                 = 6,
	Hanning                                  = 7,
	Lanczos                                  = 8,
	Cosine                                   = 9,
	CosineSquared                            = 10,
	Welch                                    = 11,
	Blackman                                 = 12,
	BlackmanHarris                           = 13,
	Count                                    = 14,
	EGranularSynthEnvelopeType_MAX           = 15,
};

enum class EGranularSynthSeekType : uint8
{
	FromBeginning                            = 0,
	FromCurrentPosition                      = 1,
	Count                                    = 2,
	EGranularSynthSeekType_MAX               = 3,
};

enum class ECurveInterpolationType : uint8
{
	AUTOINTERP                               = 0,
	LINEAR                                   = 1,
	CONSTANT                                 = 2,
	CurveInterpolationType_MAX               = 3,
};

enum class ESamplePlayerSeekType : uint8
{
	FromBeginning                            = 0,
	FromCurrentPosition                      = 1,
	FromEnd                                  = 2,
	Count                                    = 3,
	ESamplePlayerSeekType_MAX                = 4,
};

enum class ESynthKnobSize : uint8
{
	Medium                                   = 0,
	Large                                    = 1,
	Count                                    = 2,
	ESynthKnobSize_MAX                       = 3,
};

enum class ESynthSlateSizeType : uint8
{
	Small                                    = 0,
	Medium                                   = 1,
	Large                                    = 2,
	Count                                    = 3,
	ESynthSlateSizeType_MAX                  = 4,
};

enum class ESynthSlateColorStyle : uint8
{
	Light                                    = 0,
	Dark                                     = 1,
	Count                                    = 2,
	ESynthSlateColorStyle_MAX                = 3,
};

struct FSynth1PatchCable final
{
public:
	float                                         Depth;
	ESynth1PatchDestination                       Destination;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FSynth1PatchCable) == 0x000004, "Wrong alignment on FSynth1PatchCable");
static_assert(sizeof(FSynth1PatchCable) == 0x000008, "Wrong size on FSynth1PatchCable");
static_assert(offsetof(FSynth1PatchCable, Depth) == 0x000000, "Member 'FSynth1PatchCable::Depth' has a wrong offset!");
static_assert(offsetof(FSynth1PatchCable, Destination) == 0x000004, "Member 'FSynth1PatchCable::Destination' has a wrong offset!");

struct FPatchId final
{
public:
	int32                                         ID;
};
static_assert(alignof(FPatchId) == 0x000004, "Wrong alignment on FPatchId");
static_assert(sizeof(FPatchId) == 0x000004, "Wrong size on FPatchId");
static_assert(offsetof(FPatchId, ID) == 0x000000, "Member 'FPatchId::ID' has a wrong offset!");

struct FEpicSynth1Patch final
{
public:
	ESynth1PatchSource                            PatchSource;
	uint8                                         Pad_1[0x7];
	TArray<struct FSynth1PatchCable>              PatchCables;
};
static_assert(alignof(FEpicSynth1Patch) == 0x000008, "Wrong alignment on FEpicSynth1Patch");
static_assert(sizeof(FEpicSynth1Patch) == 0x000018, "Wrong size on FEpicSynth1Patch");
static_assert(offsetof(FEpicSynth1Patch, PatchSource) == 0x000000, "Member 'FEpicSynth1Patch::PatchSource' has a wrong offset!");
static_assert(offsetof(FEpicSynth1Patch, PatchCables) == 0x000008, "Member 'FEpicSynth1Patch::PatchCables' has a wrong offset!");

struct FModularSynthPreset final : public FTableRowBase
{
public:
	uint8                                         bEnablePolyphony : 1;
	uint8                                         Pad_9[0x3];
	ESynth1OscType                                Osc1Type;
	uint8                                         Pad_D[0x3];
	float                                         Osc1Gain;
	float                                         Osc1Octave;
	float                                         Osc1Semitones;
	float                                         Osc1Cents;
	float                                         Osc1PulseWidth;
	ESynth1OscType                                Osc2Type;
	uint8                                         Pad_25[0x3];
	float                                         Osc2Gain;
	float                                         Osc2Octave;
	float                                         Osc2Semitones;
	float                                         Osc2Cents;
	float                                         Osc2PulseWidth;
	float                                         Portamento;
	uint8                                         bEnableUnison : 1;
	uint8                                         bEnableOscillatorSync : 1;
	uint8                                         Pad_41[0x3];
	float                                         Spread;
	float                                         Pan;
	float                                         LFO1Frequency;
	float                                         LFO1Gain;
	ESynthLFOType                                 LFO1Type;
	ESynthLFOMode                                 LFO1Mode;
	ESynthLFOPatchType                            LFO1PatchType;
	uint8                                         Pad_57[0x1];
	float                                         LFO2Frequency;
	float                                         LFO2Gain;
	ESynthLFOType                                 LFO2Type;
	ESynthLFOMode                                 LFO2Mode;
	ESynthLFOPatchType                            LFO2PatchType;
	uint8                                         Pad_63[0x1];
	float                                         GainDb;
	float                                         AttackTime;
	float                                         DecayTime;
	float                                         SustainGain;
	float                                         ReleaseTime;
	ESynthModEnvPatch                             ModEnvPatchType;
	ESynthModEnvBiasPatch                         ModEnvBiasPatchType;
	uint8                                         Pad_7A[0x2];
	uint8                                         bInvertModulationEnvelope : 1;
	uint8                                         bInvertModulationEnvelopeBias : 1;
	uint8                                         Pad_7D[0x3];
	float                                         ModulationEnvelopeDepth;
	float                                         ModulationEnvelopeAttackTime;
	float                                         ModulationEnvelopeDecayTime;
	float                                         ModulationEnvelopeSustainGain;
	float                                         ModulationEnvelopeReleaseTime;
	uint8                                         bLegato : 1;
	uint8                                         bRetrigger : 1;
	uint8                                         Pad_95[0x3];
	float                                         FilterFrequency;
	float                                         FilterQ;
	ESynthFilterType                              FilterType;
	ESynthFilterAlgorithm                         FilterAlgorithm;
	uint8                                         Pad_A2[0x2];
	uint8                                         bStereoDelayEnabled : 1;
	uint8                                         Pad_A5[0x3];
	ESynthStereoDelayMode                         StereoDelayMode;
	uint8                                         Pad_A9[0x3];
	float                                         StereoDelayTime;
	float                                         StereoDelayFeedback;
	float                                         StereoDelayWetlevel;
	float                                         StereoDelayRatio;
	uint8                                         bChorusEnabled : 1;
	uint8                                         Pad_BD[0x3];
	float                                         ChorusDepth;
	float                                         ChorusFeedback;
	float                                         ChorusFrequency;
	uint8                                         Pad_CC[0x4];
	TArray<struct FEpicSynth1Patch>               Patches;
};
static_assert(alignof(FModularSynthPreset) == 0x000008, "Wrong alignment on FModularSynthPreset");
static_assert(sizeof(FModularSynthPreset) == 0x0000E0, "Wrong size on FModularSynthPreset");
static_assert(offsetof(FModularSynthPreset, Osc1Type) == 0x00000C, "Member 'FModularSynthPreset::Osc1Type' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc1Gain) == 0x000010, "Member 'FModularSynthPreset::Osc1Gain' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc1Octave) == 0x000014, "Member 'FModularSynthPreset::Osc1Octave' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc1Semitones) == 0x000018, "Member 'FModularSynthPreset::Osc1Semitones' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc1Cents) == 0x00001C, "Member 'FModularSynthPreset::Osc1Cents' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc1PulseWidth) == 0x000020, "Member 'FModularSynthPreset::Osc1PulseWidth' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc2Type) == 0x000024, "Member 'FModularSynthPreset::Osc2Type' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc2Gain) == 0x000028, "Member 'FModularSynthPreset::Osc2Gain' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc2Octave) == 0x00002C, "Member 'FModularSynthPreset::Osc2Octave' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc2Semitones) == 0x000030, "Member 'FModularSynthPreset::Osc2Semitones' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc2Cents) == 0x000034, "Member 'FModularSynthPreset::Osc2Cents' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Osc2PulseWidth) == 0x000038, "Member 'FModularSynthPreset::Osc2PulseWidth' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Portamento) == 0x00003C, "Member 'FModularSynthPreset::Portamento' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Spread) == 0x000044, "Member 'FModularSynthPreset::Spread' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Pan) == 0x000048, "Member 'FModularSynthPreset::Pan' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO1Frequency) == 0x00004C, "Member 'FModularSynthPreset::LFO1Frequency' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO1Gain) == 0x000050, "Member 'FModularSynthPreset::LFO1Gain' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO1Type) == 0x000054, "Member 'FModularSynthPreset::LFO1Type' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO1Mode) == 0x000055, "Member 'FModularSynthPreset::LFO1Mode' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO1PatchType) == 0x000056, "Member 'FModularSynthPreset::LFO1PatchType' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO2Frequency) == 0x000058, "Member 'FModularSynthPreset::LFO2Frequency' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO2Gain) == 0x00005C, "Member 'FModularSynthPreset::LFO2Gain' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO2Type) == 0x000060, "Member 'FModularSynthPreset::LFO2Type' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO2Mode) == 0x000061, "Member 'FModularSynthPreset::LFO2Mode' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, LFO2PatchType) == 0x000062, "Member 'FModularSynthPreset::LFO2PatchType' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, GainDb) == 0x000064, "Member 'FModularSynthPreset::GainDb' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, AttackTime) == 0x000068, "Member 'FModularSynthPreset::AttackTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, DecayTime) == 0x00006C, "Member 'FModularSynthPreset::DecayTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, SustainGain) == 0x000070, "Member 'FModularSynthPreset::SustainGain' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ReleaseTime) == 0x000074, "Member 'FModularSynthPreset::ReleaseTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModEnvPatchType) == 0x000078, "Member 'FModularSynthPreset::ModEnvPatchType' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModEnvBiasPatchType) == 0x000079, "Member 'FModularSynthPreset::ModEnvBiasPatchType' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeDepth) == 0x000080, "Member 'FModularSynthPreset::ModulationEnvelopeDepth' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeAttackTime) == 0x000084, "Member 'FModularSynthPreset::ModulationEnvelopeAttackTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeDecayTime) == 0x000088, "Member 'FModularSynthPreset::ModulationEnvelopeDecayTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeSustainGain) == 0x00008C, "Member 'FModularSynthPreset::ModulationEnvelopeSustainGain' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ModulationEnvelopeReleaseTime) == 0x000090, "Member 'FModularSynthPreset::ModulationEnvelopeReleaseTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, FilterFrequency) == 0x000098, "Member 'FModularSynthPreset::FilterFrequency' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, FilterQ) == 0x00009C, "Member 'FModularSynthPreset::FilterQ' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, FilterType) == 0x0000A0, "Member 'FModularSynthPreset::FilterType' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, FilterAlgorithm) == 0x0000A1, "Member 'FModularSynthPreset::FilterAlgorithm' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, StereoDelayMode) == 0x0000A8, "Member 'FModularSynthPreset::StereoDelayMode' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, StereoDelayTime) == 0x0000AC, "Member 'FModularSynthPreset::StereoDelayTime' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, StereoDelayFeedback) == 0x0000B0, "Member 'FModularSynthPreset::StereoDelayFeedback' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, StereoDelayWetlevel) == 0x0000B4, "Member 'FModularSynthPreset::StereoDelayWetlevel' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, StereoDelayRatio) == 0x0000B8, "Member 'FModularSynthPreset::StereoDelayRatio' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ChorusDepth) == 0x0000C0, "Member 'FModularSynthPreset::ChorusDepth' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ChorusFeedback) == 0x0000C4, "Member 'FModularSynthPreset::ChorusFeedback' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, ChorusFrequency) == 0x0000C8, "Member 'FModularSynthPreset::ChorusFrequency' has a wrong offset!");
static_assert(offsetof(FModularSynthPreset, Patches) == 0x0000D0, "Member 'FModularSynthPreset::Patches' has a wrong offset!");

struct FModularSynthPresetBankEntry final
{
public:
	class FString                                 PresetName;
	struct FModularSynthPreset                    Preset;
};
static_assert(alignof(FModularSynthPresetBankEntry) == 0x000008, "Wrong alignment on FModularSynthPresetBankEntry");
static_assert(sizeof(FModularSynthPresetBankEntry) == 0x0000F0, "Wrong size on FModularSynthPresetBankEntry");
static_assert(offsetof(FModularSynthPresetBankEntry, PresetName) == 0x000000, "Member 'FModularSynthPresetBankEntry::PresetName' has a wrong offset!");
static_assert(offsetof(FModularSynthPresetBankEntry, Preset) == 0x000010, "Member 'FModularSynthPresetBankEntry::Preset' has a wrong offset!");

struct FSourceEffectBitCrusherBaseSettings final
{
public:
	float                                         SampleRate;
	float                                         BitDepth;
};
static_assert(alignof(FSourceEffectBitCrusherBaseSettings) == 0x000004, "Wrong alignment on FSourceEffectBitCrusherBaseSettings");
static_assert(sizeof(FSourceEffectBitCrusherBaseSettings) == 0x000008, "Wrong size on FSourceEffectBitCrusherBaseSettings");
static_assert(offsetof(FSourceEffectBitCrusherBaseSettings, SampleRate) == 0x000000, "Member 'FSourceEffectBitCrusherBaseSettings::SampleRate' has a wrong offset!");
static_assert(offsetof(FSourceEffectBitCrusherBaseSettings, BitDepth) == 0x000004, "Member 'FSourceEffectBitCrusherBaseSettings::BitDepth' has a wrong offset!");

struct FSourceEffectBitCrusherSettings final
{
public:
	float                                         CrushedSampleRate;
	uint8                                         Pad_4[0x4];
	struct FSoundModulationDestinationSettings    SampleRateModulation;
	float                                         CrushedBits;
	uint8                                         Pad_6C[0x4];
	struct FSoundModulationDestinationSettings    BitModulation;
};
static_assert(alignof(FSourceEffectBitCrusherSettings) == 0x000008, "Wrong alignment on FSourceEffectBitCrusherSettings");
static_assert(sizeof(FSourceEffectBitCrusherSettings) == 0x0000D0, "Wrong size on FSourceEffectBitCrusherSettings");
static_assert(offsetof(FSourceEffectBitCrusherSettings, CrushedSampleRate) == 0x000000, "Member 'FSourceEffectBitCrusherSettings::CrushedSampleRate' has a wrong offset!");
static_assert(offsetof(FSourceEffectBitCrusherSettings, SampleRateModulation) == 0x000008, "Member 'FSourceEffectBitCrusherSettings::SampleRateModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectBitCrusherSettings, CrushedBits) == 0x000068, "Member 'FSourceEffectBitCrusherSettings::CrushedBits' has a wrong offset!");
static_assert(offsetof(FSourceEffectBitCrusherSettings, BitModulation) == 0x000070, "Member 'FSourceEffectBitCrusherSettings::BitModulation' has a wrong offset!");

struct FSourceEffectChorusBaseSettings final
{
public:
	float                                         Depth;
	float                                         Frequency;
	float                                         Feedback;
	float                                         WetLevel;
	float                                         DryLevel;
	float                                         Spread;
};
static_assert(alignof(FSourceEffectChorusBaseSettings) == 0x000004, "Wrong alignment on FSourceEffectChorusBaseSettings");
static_assert(sizeof(FSourceEffectChorusBaseSettings) == 0x000018, "Wrong size on FSourceEffectChorusBaseSettings");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Depth) == 0x000000, "Member 'FSourceEffectChorusBaseSettings::Depth' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Frequency) == 0x000004, "Member 'FSourceEffectChorusBaseSettings::Frequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Feedback) == 0x000008, "Member 'FSourceEffectChorusBaseSettings::Feedback' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusBaseSettings, WetLevel) == 0x00000C, "Member 'FSourceEffectChorusBaseSettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusBaseSettings, DryLevel) == 0x000010, "Member 'FSourceEffectChorusBaseSettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusBaseSettings, Spread) == 0x000014, "Member 'FSourceEffectChorusBaseSettings::Spread' has a wrong offset!");

struct FSourceEffectChorusSettings final
{
public:
	float                                         Depth;
	float                                         Frequency;
	float                                         Feedback;
	float                                         WetLevel;
	float                                         DryLevel;
	float                                         Spread;
	struct FSoundModulationDestinationSettings    DepthModulation;
	struct FSoundModulationDestinationSettings    FrequencyModulation;
	struct FSoundModulationDestinationSettings    FeedbackModulation;
	struct FSoundModulationDestinationSettings    WetModulation;
	struct FSoundModulationDestinationSettings    DryModulation;
	struct FSoundModulationDestinationSettings    SpreadModulation;
};
static_assert(alignof(FSourceEffectChorusSettings) == 0x000008, "Wrong alignment on FSourceEffectChorusSettings");
static_assert(sizeof(FSourceEffectChorusSettings) == 0x000258, "Wrong size on FSourceEffectChorusSettings");
static_assert(offsetof(FSourceEffectChorusSettings, Depth) == 0x000000, "Member 'FSourceEffectChorusSettings::Depth' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, Frequency) == 0x000004, "Member 'FSourceEffectChorusSettings::Frequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, Feedback) == 0x000008, "Member 'FSourceEffectChorusSettings::Feedback' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, WetLevel) == 0x00000C, "Member 'FSourceEffectChorusSettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, DryLevel) == 0x000010, "Member 'FSourceEffectChorusSettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, Spread) == 0x000014, "Member 'FSourceEffectChorusSettings::Spread' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, DepthModulation) == 0x000018, "Member 'FSourceEffectChorusSettings::DepthModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, FrequencyModulation) == 0x000078, "Member 'FSourceEffectChorusSettings::FrequencyModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, FeedbackModulation) == 0x0000D8, "Member 'FSourceEffectChorusSettings::FeedbackModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, WetModulation) == 0x000138, "Member 'FSourceEffectChorusSettings::WetModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, DryModulation) == 0x000198, "Member 'FSourceEffectChorusSettings::DryModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectChorusSettings, SpreadModulation) == 0x0001F8, "Member 'FSourceEffectChorusSettings::SpreadModulation' has a wrong offset!");

struct FSourceEffectConvolutionReverbSettings final
{
public:
	float                                         NormalizationVolumeDb;
	float                                         WetVolumeDb;
	float                                         DryVolumeDb;
	bool                                          bBypass;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FSourceEffectConvolutionReverbSettings) == 0x000004, "Wrong alignment on FSourceEffectConvolutionReverbSettings");
static_assert(sizeof(FSourceEffectConvolutionReverbSettings) == 0x000010, "Wrong size on FSourceEffectConvolutionReverbSettings");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, NormalizationVolumeDb) == 0x000000, "Member 'FSourceEffectConvolutionReverbSettings::NormalizationVolumeDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, WetVolumeDb) == 0x000004, "Member 'FSourceEffectConvolutionReverbSettings::WetVolumeDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, DryVolumeDb) == 0x000008, "Member 'FSourceEffectConvolutionReverbSettings::DryVolumeDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectConvolutionReverbSettings, bBypass) == 0x00000C, "Member 'FSourceEffectConvolutionReverbSettings::bBypass' has a wrong offset!");

struct FSourceEffectDynamicsProcessorSettings final
{
public:
	ESourceEffectDynamicsProcessorType            DynamicsProcessorType;
	ESourceEffectDynamicsPeakMode                 PeakMode;
	uint8                                         Pad_2[0x2];
	float                                         LookAheadMsec;
	float                                         AttackTimeMsec;
	float                                         ReleaseTimeMsec;
	float                                         ThresholdDb;
	float                                         Ratio;
	float                                         KneeBandwidthDb;
	float                                         InputGainDb;
	float                                         OutputGainDb;
	uint8                                         bStereoLinked : 1;
	uint8                                         bAnalogMode : 1;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(FSourceEffectDynamicsProcessorSettings) == 0x000004, "Wrong alignment on FSourceEffectDynamicsProcessorSettings");
static_assert(sizeof(FSourceEffectDynamicsProcessorSettings) == 0x000028, "Wrong size on FSourceEffectDynamicsProcessorSettings");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x000000, "Member 'FSourceEffectDynamicsProcessorSettings::DynamicsProcessorType' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, PeakMode) == 0x000001, "Member 'FSourceEffectDynamicsProcessorSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, LookAheadMsec) == 0x000004, "Member 'FSourceEffectDynamicsProcessorSettings::LookAheadMsec' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, AttackTimeMsec) == 0x000008, "Member 'FSourceEffectDynamicsProcessorSettings::AttackTimeMsec' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, ReleaseTimeMsec) == 0x00000C, "Member 'FSourceEffectDynamicsProcessorSettings::ReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, ThresholdDb) == 0x000010, "Member 'FSourceEffectDynamicsProcessorSettings::ThresholdDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, Ratio) == 0x000014, "Member 'FSourceEffectDynamicsProcessorSettings::Ratio' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, KneeBandwidthDb) == 0x000018, "Member 'FSourceEffectDynamicsProcessorSettings::KneeBandwidthDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, InputGainDb) == 0x00001C, "Member 'FSourceEffectDynamicsProcessorSettings::InputGainDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectDynamicsProcessorSettings, OutputGainDb) == 0x000020, "Member 'FSourceEffectDynamicsProcessorSettings::OutputGainDb' has a wrong offset!");

struct FSourceEffectEnvelopeFollowerSettings final
{
public:
	float                                         AttackTime;
	float                                         ReleaseTime;
	EEnvelopeFollowerPeakMode                     PeakMode;
	bool                                          bIsAnalogMode;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FSourceEffectEnvelopeFollowerSettings) == 0x000004, "Wrong alignment on FSourceEffectEnvelopeFollowerSettings");
static_assert(sizeof(FSourceEffectEnvelopeFollowerSettings) == 0x00000C, "Wrong size on FSourceEffectEnvelopeFollowerSettings");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, AttackTime) == 0x000000, "Member 'FSourceEffectEnvelopeFollowerSettings::AttackTime' has a wrong offset!");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, ReleaseTime) == 0x000004, "Member 'FSourceEffectEnvelopeFollowerSettings::ReleaseTime' has a wrong offset!");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, PeakMode) == 0x000008, "Member 'FSourceEffectEnvelopeFollowerSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(FSourceEffectEnvelopeFollowerSettings, bIsAnalogMode) == 0x000009, "Member 'FSourceEffectEnvelopeFollowerSettings::bIsAnalogMode' has a wrong offset!");

struct FSourceEffectEQBand final
{
public:
	float                                         Frequency;
	float                                         Bandwidth;
	float                                         GainDb;
	uint8                                         bEnabled : 1;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FSourceEffectEQBand) == 0x000004, "Wrong alignment on FSourceEffectEQBand");
static_assert(sizeof(FSourceEffectEQBand) == 0x000010, "Wrong size on FSourceEffectEQBand");
static_assert(offsetof(FSourceEffectEQBand, Frequency) == 0x000000, "Member 'FSourceEffectEQBand::Frequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectEQBand, Bandwidth) == 0x000004, "Member 'FSourceEffectEQBand::Bandwidth' has a wrong offset!");
static_assert(offsetof(FSourceEffectEQBand, GainDb) == 0x000008, "Member 'FSourceEffectEQBand::GainDb' has a wrong offset!");

struct FSourceEffectEQSettings final
{
public:
	TArray<struct FSourceEffectEQBand>            EQBands;
};
static_assert(alignof(FSourceEffectEQSettings) == 0x000008, "Wrong alignment on FSourceEffectEQSettings");
static_assert(sizeof(FSourceEffectEQSettings) == 0x000010, "Wrong size on FSourceEffectEQSettings");
static_assert(offsetof(FSourceEffectEQSettings, EQBands) == 0x000000, "Member 'FSourceEffectEQSettings::EQBands' has a wrong offset!");

struct FSourceEffectFilterAudioBusModulationSettings final
{
public:
	class UAudioBus*                              AudioBus;
	int32                                         EnvelopeFollowerAttackTimeMsec;
	int32                                         EnvelopeFollowerReleaseTimeMsec;
	float                                         EnvelopeGainMultiplier;
	ESourceEffectFilterParam                      FilterParam;
	uint8                                         Pad_15[0x3];
	float                                         MinFrequencyModulation;
	float                                         MaxFrequencyModulation;
	float                                         MinResonanceModulation;
	float                                         MaxResonanceModulation;
};
static_assert(alignof(FSourceEffectFilterAudioBusModulationSettings) == 0x000008, "Wrong alignment on FSourceEffectFilterAudioBusModulationSettings");
static_assert(sizeof(FSourceEffectFilterAudioBusModulationSettings) == 0x000028, "Wrong size on FSourceEffectFilterAudioBusModulationSettings");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, AudioBus) == 0x000000, "Member 'FSourceEffectFilterAudioBusModulationSettings::AudioBus' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerAttackTimeMsec) == 0x000008, "Member 'FSourceEffectFilterAudioBusModulationSettings::EnvelopeFollowerAttackTimeMsec' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, EnvelopeFollowerReleaseTimeMsec) == 0x00000C, "Member 'FSourceEffectFilterAudioBusModulationSettings::EnvelopeFollowerReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, EnvelopeGainMultiplier) == 0x000010, "Member 'FSourceEffectFilterAudioBusModulationSettings::EnvelopeGainMultiplier' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, FilterParam) == 0x000014, "Member 'FSourceEffectFilterAudioBusModulationSettings::FilterParam' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MinFrequencyModulation) == 0x000018, "Member 'FSourceEffectFilterAudioBusModulationSettings::MinFrequencyModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MaxFrequencyModulation) == 0x00001C, "Member 'FSourceEffectFilterAudioBusModulationSettings::MaxFrequencyModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MinResonanceModulation) == 0x000020, "Member 'FSourceEffectFilterAudioBusModulationSettings::MinResonanceModulation' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterAudioBusModulationSettings, MaxResonanceModulation) == 0x000024, "Member 'FSourceEffectFilterAudioBusModulationSettings::MaxResonanceModulation' has a wrong offset!");

struct FSourceEffectFilterSettings final
{
public:
	ESourceEffectFilterCircuit                    FilterCircuit;
	ESourceEffectFilterType                       FilterType;
	uint8                                         Pad_2[0x2];
	float                                         CutoffFrequency;
	float                                         FilterQ;
	uint8                                         Pad_C[0x4];
	TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;
};
static_assert(alignof(FSourceEffectFilterSettings) == 0x000008, "Wrong alignment on FSourceEffectFilterSettings");
static_assert(sizeof(FSourceEffectFilterSettings) == 0x000020, "Wrong size on FSourceEffectFilterSettings");
static_assert(offsetof(FSourceEffectFilterSettings, FilterCircuit) == 0x000000, "Member 'FSourceEffectFilterSettings::FilterCircuit' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterSettings, FilterType) == 0x000001, "Member 'FSourceEffectFilterSettings::FilterType' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterSettings, CutoffFrequency) == 0x000004, "Member 'FSourceEffectFilterSettings::CutoffFrequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterSettings, FilterQ) == 0x000008, "Member 'FSourceEffectFilterSettings::FilterQ' has a wrong offset!");
static_assert(offsetof(FSourceEffectFilterSettings, AudioBusModulation) == 0x000010, "Member 'FSourceEffectFilterSettings::AudioBusModulation' has a wrong offset!");

struct FSourceEffectFoldbackDistortionSettings final
{
public:
	float                                         InputGainDb;
	float                                         ThresholdDb;
	float                                         OutputGainDb;
};
static_assert(alignof(FSourceEffectFoldbackDistortionSettings) == 0x000004, "Wrong alignment on FSourceEffectFoldbackDistortionSettings");
static_assert(sizeof(FSourceEffectFoldbackDistortionSettings) == 0x00000C, "Wrong size on FSourceEffectFoldbackDistortionSettings");
static_assert(offsetof(FSourceEffectFoldbackDistortionSettings, InputGainDb) == 0x000000, "Member 'FSourceEffectFoldbackDistortionSettings::InputGainDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectFoldbackDistortionSettings, ThresholdDb) == 0x000004, "Member 'FSourceEffectFoldbackDistortionSettings::ThresholdDb' has a wrong offset!");
static_assert(offsetof(FSourceEffectFoldbackDistortionSettings, OutputGainDb) == 0x000008, "Member 'FSourceEffectFoldbackDistortionSettings::OutputGainDb' has a wrong offset!");

struct FSourceEffectMidSideSpreaderSettings final
{
public:
	float                                         SpreadAmount;
	EStereoChannelMode                            InputMode;
	EStereoChannelMode                            OutputMode;
	bool                                          bEqualPower;
	uint8                                         Pad_7[0x1];
};
static_assert(alignof(FSourceEffectMidSideSpreaderSettings) == 0x000004, "Wrong alignment on FSourceEffectMidSideSpreaderSettings");
static_assert(sizeof(FSourceEffectMidSideSpreaderSettings) == 0x000008, "Wrong size on FSourceEffectMidSideSpreaderSettings");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, SpreadAmount) == 0x000000, "Member 'FSourceEffectMidSideSpreaderSettings::SpreadAmount' has a wrong offset!");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, InputMode) == 0x000004, "Member 'FSourceEffectMidSideSpreaderSettings::InputMode' has a wrong offset!");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, OutputMode) == 0x000005, "Member 'FSourceEffectMidSideSpreaderSettings::OutputMode' has a wrong offset!");
static_assert(offsetof(FSourceEffectMidSideSpreaderSettings, bEqualPower) == 0x000006, "Member 'FSourceEffectMidSideSpreaderSettings::bEqualPower' has a wrong offset!");

struct FSourceEffectIndividualFilterSettings final
{
public:
	ESourceEffectMotionFilterCircuit              FilterCircuit;
	ESourceEffectMotionFilterType                 FilterType;
	uint8                                         Pad_2[0x2];
	float                                         CutoffFrequency;
	float                                         FilterQ;
};
static_assert(alignof(FSourceEffectIndividualFilterSettings) == 0x000004, "Wrong alignment on FSourceEffectIndividualFilterSettings");
static_assert(sizeof(FSourceEffectIndividualFilterSettings) == 0x00000C, "Wrong size on FSourceEffectIndividualFilterSettings");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, FilterCircuit) == 0x000000, "Member 'FSourceEffectIndividualFilterSettings::FilterCircuit' has a wrong offset!");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, FilterType) == 0x000001, "Member 'FSourceEffectIndividualFilterSettings::FilterType' has a wrong offset!");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, CutoffFrequency) == 0x000004, "Member 'FSourceEffectIndividualFilterSettings::CutoffFrequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectIndividualFilterSettings, FilterQ) == 0x000008, "Member 'FSourceEffectIndividualFilterSettings::FilterQ' has a wrong offset!");

struct FSourceEffectMotionFilterModulationSettings final
{
public:
	ESourceEffectMotionFilterModSource            ModulationSource;
	uint8                                         Pad_1[0x7];
	struct FVector2D                              ModulationInputRange;
	struct FVector2D                              ModulationOutputMinimumRange;
	struct FVector2D                              ModulationOutputMaximumRange;
	float                                         UpdateEaseMS;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FSourceEffectMotionFilterModulationSettings) == 0x000008, "Wrong alignment on FSourceEffectMotionFilterModulationSettings");
static_assert(sizeof(FSourceEffectMotionFilterModulationSettings) == 0x000040, "Wrong size on FSourceEffectMotionFilterModulationSettings");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationSource) == 0x000000, "Member 'FSourceEffectMotionFilterModulationSettings::ModulationSource' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationInputRange) == 0x000008, "Member 'FSourceEffectMotionFilterModulationSettings::ModulationInputRange' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationOutputMinimumRange) == 0x000018, "Member 'FSourceEffectMotionFilterModulationSettings::ModulationOutputMinimumRange' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, ModulationOutputMaximumRange) == 0x000028, "Member 'FSourceEffectMotionFilterModulationSettings::ModulationOutputMaximumRange' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterModulationSettings, UpdateEaseMS) == 0x000038, "Member 'FSourceEffectMotionFilterModulationSettings::UpdateEaseMS' has a wrong offset!");

struct FSourceEffectMotionFilterSettings final
{
public:
	ESourceEffectMotionFilterTopology             MotionFilterTopology;
	uint8                                         Pad_1[0x3];
	float                                         MotionFilterMix;
	struct FSourceEffectIndividualFilterSettings  FilterASettings;
	struct FSourceEffectIndividualFilterSettings  FilterBSettings;
	TMap<ESourceEffectMotionFilterModDestination, struct FSourceEffectMotionFilterModulationSettings> ModulationMappings;
	float                                         DryVolumeDb;
	uint8                                         Pad_74[0x4];
};
static_assert(alignof(FSourceEffectMotionFilterSettings) == 0x000008, "Wrong alignment on FSourceEffectMotionFilterSettings");
static_assert(sizeof(FSourceEffectMotionFilterSettings) == 0x000078, "Wrong size on FSourceEffectMotionFilterSettings");
static_assert(offsetof(FSourceEffectMotionFilterSettings, MotionFilterTopology) == 0x000000, "Member 'FSourceEffectMotionFilterSettings::MotionFilterTopology' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterSettings, MotionFilterMix) == 0x000004, "Member 'FSourceEffectMotionFilterSettings::MotionFilterMix' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterSettings, FilterASettings) == 0x000008, "Member 'FSourceEffectMotionFilterSettings::FilterASettings' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterSettings, FilterBSettings) == 0x000014, "Member 'FSourceEffectMotionFilterSettings::FilterBSettings' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterSettings, ModulationMappings) == 0x000020, "Member 'FSourceEffectMotionFilterSettings::ModulationMappings' has a wrong offset!");
static_assert(offsetof(FSourceEffectMotionFilterSettings, DryVolumeDb) == 0x000070, "Member 'FSourceEffectMotionFilterSettings::DryVolumeDb' has a wrong offset!");

struct FSourceEffectPannerSettings final
{
public:
	float                                         Spread;
	float                                         Pan;
};
static_assert(alignof(FSourceEffectPannerSettings) == 0x000004, "Wrong alignment on FSourceEffectPannerSettings");
static_assert(sizeof(FSourceEffectPannerSettings) == 0x000008, "Wrong size on FSourceEffectPannerSettings");
static_assert(offsetof(FSourceEffectPannerSettings, Spread) == 0x000000, "Member 'FSourceEffectPannerSettings::Spread' has a wrong offset!");
static_assert(offsetof(FSourceEffectPannerSettings, Pan) == 0x000004, "Member 'FSourceEffectPannerSettings::Pan' has a wrong offset!");

struct FSourceEffectPhaserSettings final
{
public:
	float                                         WetLevel;
	float                                         Frequency;
	float                                         Feedback;
	EPhaserLFOType                                LFOType;
	bool                                          UseQuadraturePhase;
	uint8                                         Pad_E[0x2];
};
static_assert(alignof(FSourceEffectPhaserSettings) == 0x000004, "Wrong alignment on FSourceEffectPhaserSettings");
static_assert(sizeof(FSourceEffectPhaserSettings) == 0x000010, "Wrong size on FSourceEffectPhaserSettings");
static_assert(offsetof(FSourceEffectPhaserSettings, WetLevel) == 0x000000, "Member 'FSourceEffectPhaserSettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectPhaserSettings, Frequency) == 0x000004, "Member 'FSourceEffectPhaserSettings::Frequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectPhaserSettings, Feedback) == 0x000008, "Member 'FSourceEffectPhaserSettings::Feedback' has a wrong offset!");
static_assert(offsetof(FSourceEffectPhaserSettings, LFOType) == 0x00000C, "Member 'FSourceEffectPhaserSettings::LFOType' has a wrong offset!");
static_assert(offsetof(FSourceEffectPhaserSettings, UseQuadraturePhase) == 0x00000D, "Member 'FSourceEffectPhaserSettings::UseQuadraturePhase' has a wrong offset!");

struct FSourceEffectRingModulationSettings final
{
public:
	ERingModulatorTypeSourceEffect                ModulatorType;
	uint8                                         Pad_1[0x3];
	float                                         Frequency;
	float                                         Depth;
	float                                         DryLevel;
	float                                         WetLevel;
	uint8                                         Pad_14[0x4];
	class UAudioBus*                              AudioBusModulator;
};
static_assert(alignof(FSourceEffectRingModulationSettings) == 0x000008, "Wrong alignment on FSourceEffectRingModulationSettings");
static_assert(sizeof(FSourceEffectRingModulationSettings) == 0x000020, "Wrong size on FSourceEffectRingModulationSettings");
static_assert(offsetof(FSourceEffectRingModulationSettings, ModulatorType) == 0x000000, "Member 'FSourceEffectRingModulationSettings::ModulatorType' has a wrong offset!");
static_assert(offsetof(FSourceEffectRingModulationSettings, Frequency) == 0x000004, "Member 'FSourceEffectRingModulationSettings::Frequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectRingModulationSettings, Depth) == 0x000008, "Member 'FSourceEffectRingModulationSettings::Depth' has a wrong offset!");
static_assert(offsetof(FSourceEffectRingModulationSettings, DryLevel) == 0x00000C, "Member 'FSourceEffectRingModulationSettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectRingModulationSettings, WetLevel) == 0x000010, "Member 'FSourceEffectRingModulationSettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectRingModulationSettings, AudioBusModulator) == 0x000018, "Member 'FSourceEffectRingModulationSettings::AudioBusModulator' has a wrong offset!");

struct FSourceEffectSimpleDelaySettings final
{
public:
	float                                         SpeedOfSound;
	float                                         DelayAmount;
	float                                         DryAmount;
	float                                         WetAmount;
	float                                         Feedback;
	uint8                                         bDelayBasedOnDistance : 1;
	uint8                                         bUseDistanceOverride : 1;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FSourceEffectSimpleDelaySettings) == 0x000004, "Wrong alignment on FSourceEffectSimpleDelaySettings");
static_assert(sizeof(FSourceEffectSimpleDelaySettings) == 0x000018, "Wrong size on FSourceEffectSimpleDelaySettings");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, SpeedOfSound) == 0x000000, "Member 'FSourceEffectSimpleDelaySettings::SpeedOfSound' has a wrong offset!");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, DelayAmount) == 0x000004, "Member 'FSourceEffectSimpleDelaySettings::DelayAmount' has a wrong offset!");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, DryAmount) == 0x000008, "Member 'FSourceEffectSimpleDelaySettings::DryAmount' has a wrong offset!");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, WetAmount) == 0x00000C, "Member 'FSourceEffectSimpleDelaySettings::WetAmount' has a wrong offset!");
static_assert(offsetof(FSourceEffectSimpleDelaySettings, Feedback) == 0x000010, "Member 'FSourceEffectSimpleDelaySettings::Feedback' has a wrong offset!");

struct FSourceEffectStereoDelaySettings final
{
public:
	EStereoDelaySourceEffect                      DelayMode;
	uint8                                         Pad_1[0x3];
	float                                         DelayTimeMsec;
	float                                         Feedback;
	float                                         DelayRatio;
	float                                         WetLevel;
	float                                         DryLevel;
	bool                                          bFilterEnabled;
	EStereoDelayFiltertype                        FilterType;
	uint8                                         Pad_1A[0x2];
	float                                         FilterFrequency;
	float                                         FilterQ;
};
static_assert(alignof(FSourceEffectStereoDelaySettings) == 0x000004, "Wrong alignment on FSourceEffectStereoDelaySettings");
static_assert(sizeof(FSourceEffectStereoDelaySettings) == 0x000024, "Wrong size on FSourceEffectStereoDelaySettings");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayMode) == 0x000000, "Member 'FSourceEffectStereoDelaySettings::DelayMode' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayTimeMsec) == 0x000004, "Member 'FSourceEffectStereoDelaySettings::DelayTimeMsec' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, Feedback) == 0x000008, "Member 'FSourceEffectStereoDelaySettings::Feedback' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DelayRatio) == 0x00000C, "Member 'FSourceEffectStereoDelaySettings::DelayRatio' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, WetLevel) == 0x000010, "Member 'FSourceEffectStereoDelaySettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, DryLevel) == 0x000014, "Member 'FSourceEffectStereoDelaySettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, bFilterEnabled) == 0x000018, "Member 'FSourceEffectStereoDelaySettings::bFilterEnabled' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterType) == 0x000019, "Member 'FSourceEffectStereoDelaySettings::FilterType' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterFrequency) == 0x00001C, "Member 'FSourceEffectStereoDelaySettings::FilterFrequency' has a wrong offset!");
static_assert(offsetof(FSourceEffectStereoDelaySettings, FilterQ) == 0x000020, "Member 'FSourceEffectStereoDelaySettings::FilterQ' has a wrong offset!");

struct FSourceEffectWaveShaperSettings final
{
public:
	float                                         Amount;
	float                                         OutputGainDb;
};
static_assert(alignof(FSourceEffectWaveShaperSettings) == 0x000004, "Wrong alignment on FSourceEffectWaveShaperSettings");
static_assert(sizeof(FSourceEffectWaveShaperSettings) == 0x000008, "Wrong size on FSourceEffectWaveShaperSettings");
static_assert(offsetof(FSourceEffectWaveShaperSettings, Amount) == 0x000000, "Member 'FSourceEffectWaveShaperSettings::Amount' has a wrong offset!");
static_assert(offsetof(FSourceEffectWaveShaperSettings, OutputGainDb) == 0x000004, "Member 'FSourceEffectWaveShaperSettings::OutputGainDb' has a wrong offset!");

struct FSubmixEffectConvolutionReverbSettings final
{
public:
	float                                         NormalizationVolumeDb;
	float                                         WetVolumeDb;
	float                                         DryVolumeDb;
	bool                                          bBypass;
	bool                                          bMixInputChannelFormatToImpulseResponseFormat;
	bool                                          bMixReverbOutputToOutputChannelFormat;
	uint8                                         Pad_F[0x1];
	float                                         SurroundRearChannelBleedDb;
	bool                                          bInvertRearChannelBleedPhase;
	bool                                          bSurroundRearChannelFlip;
	uint8                                         Pad_16[0x2];
	float                                         SurroundRearChannelBleedAmount;
	uint8                                         Pad_1C[0x4];
	class UAudioImpulseResponse*                  ImpulseResponse;
	bool                                          AllowHardwareAcceleration;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(FSubmixEffectConvolutionReverbSettings) == 0x000008, "Wrong alignment on FSubmixEffectConvolutionReverbSettings");
static_assert(sizeof(FSubmixEffectConvolutionReverbSettings) == 0x000030, "Wrong size on FSubmixEffectConvolutionReverbSettings");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, NormalizationVolumeDb) == 0x000000, "Member 'FSubmixEffectConvolutionReverbSettings::NormalizationVolumeDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, WetVolumeDb) == 0x000004, "Member 'FSubmixEffectConvolutionReverbSettings::WetVolumeDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, DryVolumeDb) == 0x000008, "Member 'FSubmixEffectConvolutionReverbSettings::DryVolumeDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bBypass) == 0x00000C, "Member 'FSubmixEffectConvolutionReverbSettings::bBypass' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bMixInputChannelFormatToImpulseResponseFormat) == 0x00000D, "Member 'FSubmixEffectConvolutionReverbSettings::bMixInputChannelFormatToImpulseResponseFormat' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bMixReverbOutputToOutputChannelFormat) == 0x00000E, "Member 'FSubmixEffectConvolutionReverbSettings::bMixReverbOutputToOutputChannelFormat' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedDb) == 0x000010, "Member 'FSubmixEffectConvolutionReverbSettings::SurroundRearChannelBleedDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bInvertRearChannelBleedPhase) == 0x000014, "Member 'FSubmixEffectConvolutionReverbSettings::bInvertRearChannelBleedPhase' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, bSurroundRearChannelFlip) == 0x000015, "Member 'FSubmixEffectConvolutionReverbSettings::bSurroundRearChannelFlip' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedAmount) == 0x000018, "Member 'FSubmixEffectConvolutionReverbSettings::SurroundRearChannelBleedAmount' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, ImpulseResponse) == 0x000020, "Member 'FSubmixEffectConvolutionReverbSettings::ImpulseResponse' has a wrong offset!");
static_assert(offsetof(FSubmixEffectConvolutionReverbSettings, AllowHardwareAcceleration) == 0x000028, "Member 'FSubmixEffectConvolutionReverbSettings::AllowHardwareAcceleration' has a wrong offset!");

struct FSubmixEffectDelaySettings final
{
public:
	float                                         MaximumDelayLength;
	float                                         InterpolationTime;
	float                                         DelayLength;
};
static_assert(alignof(FSubmixEffectDelaySettings) == 0x000004, "Wrong alignment on FSubmixEffectDelaySettings");
static_assert(sizeof(FSubmixEffectDelaySettings) == 0x00000C, "Wrong size on FSubmixEffectDelaySettings");
static_assert(offsetof(FSubmixEffectDelaySettings, MaximumDelayLength) == 0x000000, "Member 'FSubmixEffectDelaySettings::MaximumDelayLength' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDelaySettings, InterpolationTime) == 0x000004, "Member 'FSubmixEffectDelaySettings::InterpolationTime' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDelaySettings, DelayLength) == 0x000008, "Member 'FSubmixEffectDelaySettings::DelayLength' has a wrong offset!");

struct FSubmixEffectFilterSettings final
{
public:
	ESubmixFilterType                             FilterType;
	ESubmixFilterAlgorithm                        FilterAlgorithm;
	uint8                                         Pad_2[0x2];
	float                                         FilterFrequency;
	float                                         FilterQ;
};
static_assert(alignof(FSubmixEffectFilterSettings) == 0x000004, "Wrong alignment on FSubmixEffectFilterSettings");
static_assert(sizeof(FSubmixEffectFilterSettings) == 0x00000C, "Wrong size on FSubmixEffectFilterSettings");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterType) == 0x000000, "Member 'FSubmixEffectFilterSettings::FilterType' has a wrong offset!");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterAlgorithm) == 0x000001, "Member 'FSubmixEffectFilterSettings::FilterAlgorithm' has a wrong offset!");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterFrequency) == 0x000004, "Member 'FSubmixEffectFilterSettings::FilterFrequency' has a wrong offset!");
static_assert(offsetof(FSubmixEffectFilterSettings, FilterQ) == 0x000008, "Member 'FSubmixEffectFilterSettings::FilterQ' has a wrong offset!");

struct FSubmixEffectFlexiverbSettings final
{
public:
	float                                         PreDelay;
	float                                         DecayTime;
	float                                         RoomDampening;
	int32                                         Complexity;
};
static_assert(alignof(FSubmixEffectFlexiverbSettings) == 0x000004, "Wrong alignment on FSubmixEffectFlexiverbSettings");
static_assert(sizeof(FSubmixEffectFlexiverbSettings) == 0x000010, "Wrong size on FSubmixEffectFlexiverbSettings");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, PreDelay) == 0x000000, "Member 'FSubmixEffectFlexiverbSettings::PreDelay' has a wrong offset!");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, DecayTime) == 0x000004, "Member 'FSubmixEffectFlexiverbSettings::DecayTime' has a wrong offset!");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, RoomDampening) == 0x000008, "Member 'FSubmixEffectFlexiverbSettings::RoomDampening' has a wrong offset!");
static_assert(offsetof(FSubmixEffectFlexiverbSettings, Complexity) == 0x00000C, "Member 'FSubmixEffectFlexiverbSettings::Complexity' has a wrong offset!");

struct FDynamicsBandSettings final
{
public:
	float                                         CrossoverTopFrequency;
	float                                         AttackTimeMsec;
	float                                         ReleaseTimeMsec;
	float                                         ThresholdDb;
	float                                         Ratio;
	float                                         KneeBandwidthDb;
	float                                         InputGainDb;
	float                                         OutputGainDb;
};
static_assert(alignof(FDynamicsBandSettings) == 0x000004, "Wrong alignment on FDynamicsBandSettings");
static_assert(sizeof(FDynamicsBandSettings) == 0x000020, "Wrong size on FDynamicsBandSettings");
static_assert(offsetof(FDynamicsBandSettings, CrossoverTopFrequency) == 0x000000, "Member 'FDynamicsBandSettings::CrossoverTopFrequency' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, AttackTimeMsec) == 0x000004, "Member 'FDynamicsBandSettings::AttackTimeMsec' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, ReleaseTimeMsec) == 0x000008, "Member 'FDynamicsBandSettings::ReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, ThresholdDb) == 0x00000C, "Member 'FDynamicsBandSettings::ThresholdDb' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, Ratio) == 0x000010, "Member 'FDynamicsBandSettings::Ratio' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, KneeBandwidthDb) == 0x000014, "Member 'FDynamicsBandSettings::KneeBandwidthDb' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, InputGainDb) == 0x000018, "Member 'FDynamicsBandSettings::InputGainDb' has a wrong offset!");
static_assert(offsetof(FDynamicsBandSettings, OutputGainDb) == 0x00001C, "Member 'FDynamicsBandSettings::OutputGainDb' has a wrong offset!");

struct FSubmixEffectMultibandCompressorSettings final
{
public:
	ESubmixEffectDynamicsProcessorType            DynamicsProcessorType;
	ESubmixEffectDynamicsPeakMode                 PeakMode;
	ESubmixEffectDynamicsChannelLinkMode          LinkMode;
	uint8                                         Pad_3[0x1];
	float                                         LookAheadMsec;
	bool                                          bAnalogMode;
	bool                                          bFourPole;
	bool                                          bBypass;
	ESubmixEffectDynamicsKeySource                KeySource;
	uint8                                         Pad_C[0x4];
	class UAudioBus*                              ExternalAudioBus;
	class USoundSubmix*                           ExternalSubmix;
	float                                         KeyGainDb;
	bool                                          bKeyAudition;
	uint8                                         Pad_25[0x3];
	TArray<struct FDynamicsBandSettings>          Bands;
};
static_assert(alignof(FSubmixEffectMultibandCompressorSettings) == 0x000008, "Wrong alignment on FSubmixEffectMultibandCompressorSettings");
static_assert(sizeof(FSubmixEffectMultibandCompressorSettings) == 0x000038, "Wrong size on FSubmixEffectMultibandCompressorSettings");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, DynamicsProcessorType) == 0x000000, "Member 'FSubmixEffectMultibandCompressorSettings::DynamicsProcessorType' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, PeakMode) == 0x000001, "Member 'FSubmixEffectMultibandCompressorSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, LinkMode) == 0x000002, "Member 'FSubmixEffectMultibandCompressorSettings::LinkMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, LookAheadMsec) == 0x000004, "Member 'FSubmixEffectMultibandCompressorSettings::LookAheadMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bAnalogMode) == 0x000008, "Member 'FSubmixEffectMultibandCompressorSettings::bAnalogMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bFourPole) == 0x000009, "Member 'FSubmixEffectMultibandCompressorSettings::bFourPole' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bBypass) == 0x00000A, "Member 'FSubmixEffectMultibandCompressorSettings::bBypass' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, KeySource) == 0x00000B, "Member 'FSubmixEffectMultibandCompressorSettings::KeySource' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, ExternalAudioBus) == 0x000010, "Member 'FSubmixEffectMultibandCompressorSettings::ExternalAudioBus' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, ExternalSubmix) == 0x000018, "Member 'FSubmixEffectMultibandCompressorSettings::ExternalSubmix' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, KeyGainDb) == 0x000020, "Member 'FSubmixEffectMultibandCompressorSettings::KeyGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, bKeyAudition) == 0x000024, "Member 'FSubmixEffectMultibandCompressorSettings::bKeyAudition' has a wrong offset!");
static_assert(offsetof(FSubmixEffectMultibandCompressorSettings, Bands) == 0x000028, "Member 'FSubmixEffectMultibandCompressorSettings::Bands' has a wrong offset!");

struct FSubmixEffectStereoDelaySettings final
{
public:
	EStereoDelaySourceEffect                      DelayMode;
	uint8                                         Pad_1[0x3];
	float                                         DelayTimeMsec;
	float                                         Feedback;
	float                                         DelayRatio;
	float                                         WetLevel;
	float                                         DryLevel;
	bool                                          bFilterEnabled;
	EStereoDelayFiltertype                        FilterType;
	uint8                                         Pad_1A[0x2];
	float                                         FilterFrequency;
	float                                         FilterQ;
};
static_assert(alignof(FSubmixEffectStereoDelaySettings) == 0x000004, "Wrong alignment on FSubmixEffectStereoDelaySettings");
static_assert(sizeof(FSubmixEffectStereoDelaySettings) == 0x000024, "Wrong size on FSubmixEffectStereoDelaySettings");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayMode) == 0x000000, "Member 'FSubmixEffectStereoDelaySettings::DelayMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayTimeMsec) == 0x000004, "Member 'FSubmixEffectStereoDelaySettings::DelayTimeMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, Feedback) == 0x000008, "Member 'FSubmixEffectStereoDelaySettings::Feedback' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DelayRatio) == 0x00000C, "Member 'FSubmixEffectStereoDelaySettings::DelayRatio' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, WetLevel) == 0x000010, "Member 'FSubmixEffectStereoDelaySettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, DryLevel) == 0x000014, "Member 'FSubmixEffectStereoDelaySettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, bFilterEnabled) == 0x000018, "Member 'FSubmixEffectStereoDelaySettings::bFilterEnabled' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterType) == 0x000019, "Member 'FSubmixEffectStereoDelaySettings::FilterType' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterFrequency) == 0x00001C, "Member 'FSubmixEffectStereoDelaySettings::FilterFrequency' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoDelaySettings, FilterQ) == 0x000020, "Member 'FSubmixEffectStereoDelaySettings::FilterQ' has a wrong offset!");

struct FSubmixEffectStereoToQuadSettings final
{
public:
	bool                                          bFlipChannels;
	uint8                                         Pad_1[0x3];
	float                                         RearChannelGain;
};
static_assert(alignof(FSubmixEffectStereoToQuadSettings) == 0x000004, "Wrong alignment on FSubmixEffectStereoToQuadSettings");
static_assert(sizeof(FSubmixEffectStereoToQuadSettings) == 0x000008, "Wrong size on FSubmixEffectStereoToQuadSettings");
static_assert(offsetof(FSubmixEffectStereoToQuadSettings, bFlipChannels) == 0x000000, "Member 'FSubmixEffectStereoToQuadSettings::bFlipChannels' has a wrong offset!");
static_assert(offsetof(FSubmixEffectStereoToQuadSettings, RearChannelGain) == 0x000004, "Member 'FSubmixEffectStereoToQuadSettings::RearChannelGain' has a wrong offset!");

struct FTapDelayInfo final
{
public:
	ETapLineMode                                  TapLineMode;
	uint8                                         Pad_1[0x3];
	float                                         DelayLength;
	float                                         Gain;
	int32                                         OutputChannel;
	float                                         PanInDegrees;
	int32                                         TapId;
};
static_assert(alignof(FTapDelayInfo) == 0x000004, "Wrong alignment on FTapDelayInfo");
static_assert(sizeof(FTapDelayInfo) == 0x000018, "Wrong size on FTapDelayInfo");
static_assert(offsetof(FTapDelayInfo, TapLineMode) == 0x000000, "Member 'FTapDelayInfo::TapLineMode' has a wrong offset!");
static_assert(offsetof(FTapDelayInfo, DelayLength) == 0x000004, "Member 'FTapDelayInfo::DelayLength' has a wrong offset!");
static_assert(offsetof(FTapDelayInfo, Gain) == 0x000008, "Member 'FTapDelayInfo::Gain' has a wrong offset!");
static_assert(offsetof(FTapDelayInfo, OutputChannel) == 0x00000C, "Member 'FTapDelayInfo::OutputChannel' has a wrong offset!");
static_assert(offsetof(FTapDelayInfo, PanInDegrees) == 0x000010, "Member 'FTapDelayInfo::PanInDegrees' has a wrong offset!");
static_assert(offsetof(FTapDelayInfo, TapId) == 0x000014, "Member 'FTapDelayInfo::TapId' has a wrong offset!");

struct FSubmixEffectTapDelaySettings final
{
public:
	float                                         MaximumDelayLength;
	float                                         InterpolationTime;
	TArray<struct FTapDelayInfo>                  Taps;
};
static_assert(alignof(FSubmixEffectTapDelaySettings) == 0x000008, "Wrong alignment on FSubmixEffectTapDelaySettings");
static_assert(sizeof(FSubmixEffectTapDelaySettings) == 0x000018, "Wrong size on FSubmixEffectTapDelaySettings");
static_assert(offsetof(FSubmixEffectTapDelaySettings, MaximumDelayLength) == 0x000000, "Member 'FSubmixEffectTapDelaySettings::MaximumDelayLength' has a wrong offset!");
static_assert(offsetof(FSubmixEffectTapDelaySettings, InterpolationTime) == 0x000004, "Member 'FSubmixEffectTapDelaySettings::InterpolationTime' has a wrong offset!");
static_assert(offsetof(FSubmixEffectTapDelaySettings, Taps) == 0x000008, "Member 'FSubmixEffectTapDelaySettings::Taps' has a wrong offset!");

struct FSynth2DSliderStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            NormalThumbImage;
	struct FSlateBrush                            DisabledThumbImage;
	struct FSlateBrush                            NormalBarImage;
	struct FSlateBrush                            DisabledBarImage;
	struct FSlateBrush                            BackgroundImage;
	float                                         BarThickness;
	uint8                                         Pad_3D4[0xC];
};
static_assert(alignof(FSynth2DSliderStyle) == 0x000010, "Wrong alignment on FSynth2DSliderStyle");
static_assert(sizeof(FSynth2DSliderStyle) == 0x0003E0, "Wrong size on FSynth2DSliderStyle");
static_assert(offsetof(FSynth2DSliderStyle, NormalThumbImage) == 0x000010, "Member 'FSynth2DSliderStyle::NormalThumbImage' has a wrong offset!");
static_assert(offsetof(FSynth2DSliderStyle, DisabledThumbImage) == 0x0000D0, "Member 'FSynth2DSliderStyle::DisabledThumbImage' has a wrong offset!");
static_assert(offsetof(FSynth2DSliderStyle, NormalBarImage) == 0x000190, "Member 'FSynth2DSliderStyle::NormalBarImage' has a wrong offset!");
static_assert(offsetof(FSynth2DSliderStyle, DisabledBarImage) == 0x000250, "Member 'FSynth2DSliderStyle::DisabledBarImage' has a wrong offset!");
static_assert(offsetof(FSynth2DSliderStyle, BackgroundImage) == 0x000310, "Member 'FSynth2DSliderStyle::BackgroundImage' has a wrong offset!");
static_assert(offsetof(FSynth2DSliderStyle, BarThickness) == 0x0003D0, "Member 'FSynth2DSliderStyle::BarThickness' has a wrong offset!");

struct FSynthKnobStyle final : public FSlateWidgetStyle
{
public:
	uint8                                         Pad_8[0x8];
	struct FSlateBrush                            LargeKnob;
	struct FSlateBrush                            LargeKnobOverlay;
	struct FSlateBrush                            MediumKnob;
	struct FSlateBrush                            MediumKnobOverlay;
	float                                         MinValueAngle;
	float                                         MaxValueAngle;
	ESynthKnobSize                                KnobSize;
	uint8                                         Pad_319[0x7];
};
static_assert(alignof(FSynthKnobStyle) == 0x000010, "Wrong alignment on FSynthKnobStyle");
static_assert(sizeof(FSynthKnobStyle) == 0x000320, "Wrong size on FSynthKnobStyle");
static_assert(offsetof(FSynthKnobStyle, LargeKnob) == 0x000010, "Member 'FSynthKnobStyle::LargeKnob' has a wrong offset!");
static_assert(offsetof(FSynthKnobStyle, LargeKnobOverlay) == 0x0000D0, "Member 'FSynthKnobStyle::LargeKnobOverlay' has a wrong offset!");
static_assert(offsetof(FSynthKnobStyle, MediumKnob) == 0x000190, "Member 'FSynthKnobStyle::MediumKnob' has a wrong offset!");
static_assert(offsetof(FSynthKnobStyle, MediumKnobOverlay) == 0x000250, "Member 'FSynthKnobStyle::MediumKnobOverlay' has a wrong offset!");
static_assert(offsetof(FSynthKnobStyle, MinValueAngle) == 0x000310, "Member 'FSynthKnobStyle::MinValueAngle' has a wrong offset!");
static_assert(offsetof(FSynthKnobStyle, MaxValueAngle) == 0x000314, "Member 'FSynthKnobStyle::MaxValueAngle' has a wrong offset!");
static_assert(offsetof(FSynthKnobStyle, KnobSize) == 0x000318, "Member 'FSynthKnobStyle::KnobSize' has a wrong offset!");

struct FSynthSlateStyle final : public FSlateWidgetStyle
{
public:
	ESynthSlateSizeType                           SizeType;
	ESynthSlateColorStyle                         ColorStyle;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FSynthSlateStyle) == 0x000008, "Wrong alignment on FSynthSlateStyle");
static_assert(sizeof(FSynthSlateStyle) == 0x000010, "Wrong size on FSynthSlateStyle");
static_assert(offsetof(FSynthSlateStyle, SizeType) == 0x000008, "Member 'FSynthSlateStyle::SizeType' has a wrong offset!");
static_assert(offsetof(FSynthSlateStyle, ColorStyle) == 0x000009, "Member 'FSynthSlateStyle::ColorStyle' has a wrong offset!");

}
