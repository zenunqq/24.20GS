#pragma once

#include "Basic.hpp"

#include "WaveTable_structs.hpp"

namespace SDK
{

enum class ESoundModulationLFOShape : uint8
{
	Sine                                     = 0,
	UpSaw                                    = 1,
	DownSaw                                  = 2,
	Square                                   = 3,
	Triangle                                 = 4,
	Exponential                              = 5,
	RandomSampleHold                         = 6,
	COUNT                                    = 7,
	ESoundModulationLFOShape_MAX             = 8,
};

struct FEnvelopeFollowerGeneratorParams final
{
public:
	bool                                          bBypass;
	bool                                          bInvert;
	uint8                                         Pad_2[0x6];
	class UAudioBus*                              AudioBus;
	float                                         Gain;
	float                                         AttackTime;
	float                                         ReleaseTime;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FEnvelopeFollowerGeneratorParams) == 0x000008, "Wrong alignment on FEnvelopeFollowerGeneratorParams");
static_assert(sizeof(FEnvelopeFollowerGeneratorParams) == 0x000020, "Wrong size on FEnvelopeFollowerGeneratorParams");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, bBypass) == 0x000000, "Member 'FEnvelopeFollowerGeneratorParams::bBypass' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, bInvert) == 0x000001, "Member 'FEnvelopeFollowerGeneratorParams::bInvert' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, AudioBus) == 0x000008, "Member 'FEnvelopeFollowerGeneratorParams::AudioBus' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, Gain) == 0x000010, "Member 'FEnvelopeFollowerGeneratorParams::Gain' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, AttackTime) == 0x000014, "Member 'FEnvelopeFollowerGeneratorParams::AttackTime' has a wrong offset!");
static_assert(offsetof(FEnvelopeFollowerGeneratorParams, ReleaseTime) == 0x000018, "Member 'FEnvelopeFollowerGeneratorParams::ReleaseTime' has a wrong offset!");

struct FSoundModulationLFOParams final
{
public:
	ESoundModulationLFOShape                      Shape;
	uint8                                         Pad_1[0x3];
	float                                         ExponentialFactor;
	float                                         Width;
	float                                         Amplitude;
	float                                         Frequency;
	float                                         Offset;
	float                                         Phase;
	bool                                          bLooping;
	bool                                          bBypass;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(FSoundModulationLFOParams) == 0x000004, "Wrong alignment on FSoundModulationLFOParams");
static_assert(sizeof(FSoundModulationLFOParams) == 0x000020, "Wrong size on FSoundModulationLFOParams");
static_assert(offsetof(FSoundModulationLFOParams, Shape) == 0x000000, "Member 'FSoundModulationLFOParams::Shape' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, ExponentialFactor) == 0x000004, "Member 'FSoundModulationLFOParams::ExponentialFactor' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Width) == 0x000008, "Member 'FSoundModulationLFOParams::Width' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Amplitude) == 0x00000C, "Member 'FSoundModulationLFOParams::Amplitude' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Frequency) == 0x000010, "Member 'FSoundModulationLFOParams::Frequency' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Offset) == 0x000014, "Member 'FSoundModulationLFOParams::Offset' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, Phase) == 0x000018, "Member 'FSoundModulationLFOParams::Phase' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, bLooping) == 0x00001C, "Member 'FSoundModulationLFOParams::bLooping' has a wrong offset!");
static_assert(offsetof(FSoundModulationLFOParams, bBypass) == 0x00001D, "Member 'FSoundModulationLFOParams::bBypass' has a wrong offset!");

struct FSoundModulationMixValue final
{
public:
	float                                         TargetValue;
	float                                         AttackTime;
	float                                         ReleaseTime;
	uint8                                         Pad_C[0x14];
};
static_assert(alignof(FSoundModulationMixValue) == 0x000004, "Wrong alignment on FSoundModulationMixValue");
static_assert(sizeof(FSoundModulationMixValue) == 0x000020, "Wrong size on FSoundModulationMixValue");
static_assert(offsetof(FSoundModulationMixValue, TargetValue) == 0x000000, "Member 'FSoundModulationMixValue::TargetValue' has a wrong offset!");
static_assert(offsetof(FSoundModulationMixValue, AttackTime) == 0x000004, "Member 'FSoundModulationMixValue::AttackTime' has a wrong offset!");
static_assert(offsetof(FSoundModulationMixValue, ReleaseTime) == 0x000008, "Member 'FSoundModulationMixValue::ReleaseTime' has a wrong offset!");

struct FSoundControlBusMixStage final
{
public:
	class USoundControlBus*                       Bus;
	struct FSoundModulationMixValue               Value;
};
static_assert(alignof(FSoundControlBusMixStage) == 0x000008, "Wrong alignment on FSoundControlBusMixStage");
static_assert(sizeof(FSoundControlBusMixStage) == 0x000028, "Wrong size on FSoundControlBusMixStage");
static_assert(offsetof(FSoundControlBusMixStage, Bus) == 0x000000, "Member 'FSoundControlBusMixStage::Bus' has a wrong offset!");
static_assert(offsetof(FSoundControlBusMixStage, Value) == 0x000008, "Member 'FSoundControlBusMixStage::Value' has a wrong offset!");

struct FSoundModulationParameterSettings final
{
public:
	float                                         ValueNormalized;
};
static_assert(alignof(FSoundModulationParameterSettings) == 0x000004, "Wrong alignment on FSoundModulationParameterSettings");
static_assert(sizeof(FSoundModulationParameterSettings) == 0x000004, "Wrong size on FSoundModulationParameterSettings");
static_assert(offsetof(FSoundModulationParameterSettings, ValueNormalized) == 0x000000, "Member 'FSoundModulationParameterSettings::ValueNormalized' has a wrong offset!");

struct FSoundModulationTransform final : public FWaveTableTransform
{
};
static_assert(alignof(FSoundModulationTransform) == 0x000008, "Wrong alignment on FSoundModulationTransform");
static_assert(sizeof(FSoundModulationTransform) == 0x0000A8, "Wrong size on FSoundModulationTransform");

struct FSoundControlModulationInput final
{
public:
	uint8                                         bSampleAndHold : 1;
	uint8                                         Pad_1[0x7];
	struct FSoundModulationTransform              Transform;
	class USoundControlBus*                       Bus;
};
static_assert(alignof(FSoundControlModulationInput) == 0x000008, "Wrong alignment on FSoundControlModulationInput");
static_assert(sizeof(FSoundControlModulationInput) == 0x0000B8, "Wrong size on FSoundControlModulationInput");
static_assert(offsetof(FSoundControlModulationInput, Transform) == 0x000008, "Member 'FSoundControlModulationInput::Transform' has a wrong offset!");
static_assert(offsetof(FSoundControlModulationInput, Bus) == 0x0000B0, "Member 'FSoundControlModulationInput::Bus' has a wrong offset!");

struct FSoundControlModulationPatch final
{
public:
	bool                                          bBypass;
	uint8                                         Pad_1[0x7];
	class USoundModulationParameter*              OutputParameter;
	TArray<struct FSoundControlModulationInput>   Inputs;
};
static_assert(alignof(FSoundControlModulationPatch) == 0x000008, "Wrong alignment on FSoundControlModulationPatch");
static_assert(sizeof(FSoundControlModulationPatch) == 0x000020, "Wrong size on FSoundControlModulationPatch");
static_assert(offsetof(FSoundControlModulationPatch, bBypass) == 0x000000, "Member 'FSoundControlModulationPatch::bBypass' has a wrong offset!");
static_assert(offsetof(FSoundControlModulationPatch, OutputParameter) == 0x000008, "Member 'FSoundControlModulationPatch::OutputParameter' has a wrong offset!");
static_assert(offsetof(FSoundControlModulationPatch, Inputs) == 0x000010, "Member 'FSoundControlModulationPatch::Inputs' has a wrong offset!");

}
