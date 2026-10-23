#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EAudioDeviceChangedRole : uint8
{
	Invalid                                  = 0,
	Console                                  = 1,
	Multimedia                               = 2,
	Communications                           = 3,
	Count                                    = 4,
	EAudioDeviceChangedRole_MAX              = 5,
};

enum class EAudioDeviceChangedState : uint8
{
	Invalid                                  = 0,
	Active                                   = 1,
	Disabled                                 = 2,
	NotPresent                               = 3,
	Unplugged                                = 4,
	Count                                    = 5,
	EAudioDeviceChangedState_MAX             = 6,
};

enum class EAudioMixerChannelType : uint8
{
	FrontLeft                                = 0,
	FrontRight                               = 1,
	FrontCenter                              = 2,
	LowFrequency                             = 3,
	BackLeft                                 = 4,
	BackRight                                = 5,
	FrontLeftOfCenter                        = 6,
	FrontRightOfCenter                       = 7,
	BackCenter                               = 8,
	SideLeft                                 = 9,
	SideRight                                = 10,
	TopCenter                                = 11,
	TopFrontLeft                             = 12,
	TopFrontCenter                           = 13,
	TopFrontRight                            = 14,
	TopBackLeft                              = 15,
	TopBackCenter                            = 16,
	TopBackRight                             = 17,
	Unknown                                  = 18,
	ChannelTypeCount                         = 19,
	DefaultChannel                           = 0,
	EAudioMixerChannelType_MAX               = 20,
};

enum class EAudioMixerStreamDataFormatType : uint8
{
	Unknown                                  = 0,
	Float                                    = 1,
	Int16                                    = 2,
	Unsupported                              = 3,
	EAudioMixerStreamDataFormatType_MAX      = 4,
};

enum class ESwapAudioOutputDeviceResultState : uint8
{
	Failure                                  = 0,
	Success                                  = 1,
	None                                     = 2,
	ESwapAudioOutputDeviceResultState_MAX    = 3,
};

enum class EMusicalNoteName : uint8
{
	C                                        = 0,
	Db                                       = 1,
	D                                        = 2,
	Eb                                       = 3,
	E                                        = 4,
	F                                        = 5,
	Gb                                       = 6,
	G                                        = 7,
	Ab                                       = 8,
	A                                        = 9,
	Bb                                       = 10,
	B                                        = 11,
	EMusicalNoteName_MAX                     = 12,
};

enum class ESubmixEffectDynamicsProcessorType : uint8
{
	Compressor                               = 0,
	Limiter                                  = 1,
	Expander                                 = 2,
	Gate                                     = 3,
	UpwardsCompressor                        = 4,
	Count                                    = 5,
	ESubmixEffectDynamicsProcessorType_MAX   = 6,
};

enum class ESubmixEffectDynamicsPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsPeakMode_MAX        = 4,
};

enum class ESubmixEffectDynamicsChannelLinkMode : uint8
{
	Disabled                                 = 0,
	Average                                  = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

enum class ESubmixEffectDynamicsKeySource : uint8
{
	Default                                  = 0,
	AudioBus                                 = 1,
	Submix                                   = 2,
	Count                                    = 3,
	ESubmixEffectDynamicsKeySource_MAX       = 4,
};

struct FSubmixEffectDynamicProcessorFilterSettings final
{
public:
	uint8                                         bEnabled : 1;
	uint8                                         Pad_1[0x3];
	float                                         Cutoff;
	float                                         GainDb;
};
static_assert(alignof(FSubmixEffectDynamicProcessorFilterSettings) == 0x000004, "Wrong alignment on FSubmixEffectDynamicProcessorFilterSettings");
static_assert(sizeof(FSubmixEffectDynamicProcessorFilterSettings) == 0x00000C, "Wrong size on FSubmixEffectDynamicProcessorFilterSettings");
static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, Cutoff) == 0x000004, "Member 'FSubmixEffectDynamicProcessorFilterSettings::Cutoff' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicProcessorFilterSettings, GainDb) == 0x000008, "Member 'FSubmixEffectDynamicProcessorFilterSettings::GainDb' has a wrong offset!");

struct FSubmixEffectDynamicsProcessorSettings final
{
public:
	ESubmixEffectDynamicsProcessorType            DynamicsProcessorType;
	ESubmixEffectDynamicsPeakMode                 PeakMode;
	ESubmixEffectDynamicsChannelLinkMode          LinkMode;
	uint8                                         Pad_3[0x1];
	float                                         InputGainDb;
	float                                         ThresholdDb;
	float                                         Ratio;
	float                                         KneeBandwidthDb;
	float                                         LookAheadMsec;
	float                                         AttackTimeMsec;
	float                                         ReleaseTimeMsec;
	ESubmixEffectDynamicsKeySource                KeySource;
	uint8                                         Pad_21[0x7];
	class UAudioBus*                              ExternalAudioBus;
	class USoundSubmix*                           ExternalSubmix;
	uint8                                         bChannelLinked : 1;
	uint8                                         bAnalogMode : 1;
	uint8                                         bBypass : 1;
	uint8                                         bKeyAudition : 1;
	uint8                                         Pad_39[0x3];
	float                                         KeyGainDb;
	float                                         OutputGainDb;
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;
	uint8                                         Pad_5C[0x4];
};
static_assert(alignof(FSubmixEffectDynamicsProcessorSettings) == 0x000008, "Wrong alignment on FSubmixEffectDynamicsProcessorSettings");
static_assert(sizeof(FSubmixEffectDynamicsProcessorSettings) == 0x000060, "Wrong size on FSubmixEffectDynamicsProcessorSettings");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType) == 0x000000, "Member 'FSubmixEffectDynamicsProcessorSettings::DynamicsProcessorType' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, PeakMode) == 0x000001, "Member 'FSubmixEffectDynamicsProcessorSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LinkMode) == 0x000002, "Member 'FSubmixEffectDynamicsProcessorSettings::LinkMode' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, InputGainDb) == 0x000004, "Member 'FSubmixEffectDynamicsProcessorSettings::InputGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ThresholdDb) == 0x000008, "Member 'FSubmixEffectDynamicsProcessorSettings::ThresholdDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, Ratio) == 0x00000C, "Member 'FSubmixEffectDynamicsProcessorSettings::Ratio' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb) == 0x000010, "Member 'FSubmixEffectDynamicsProcessorSettings::KneeBandwidthDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec) == 0x000014, "Member 'FSubmixEffectDynamicsProcessorSettings::LookAheadMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec) == 0x000018, "Member 'FSubmixEffectDynamicsProcessorSettings::AttackTimeMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec) == 0x00001C, "Member 'FSubmixEffectDynamicsProcessorSettings::ReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeySource) == 0x000020, "Member 'FSubmixEffectDynamicsProcessorSettings::KeySource' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalAudioBus) == 0x000028, "Member 'FSubmixEffectDynamicsProcessorSettings::ExternalAudioBus' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix) == 0x000030, "Member 'FSubmixEffectDynamicsProcessorSettings::ExternalSubmix' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyGainDb) == 0x00003C, "Member 'FSubmixEffectDynamicsProcessorSettings::KeyGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, OutputGainDb) == 0x000040, "Member 'FSubmixEffectDynamicsProcessorSettings::OutputGainDb' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf) == 0x000044, "Member 'FSubmixEffectDynamicsProcessorSettings::KeyHighshelf' has a wrong offset!");
static_assert(offsetof(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf) == 0x000050, "Member 'FSubmixEffectDynamicsProcessorSettings::KeyLowshelf' has a wrong offset!");

struct FAudioOutputDeviceInfo final
{
public:
	class FString                                 Name;
	class FString                                 DeviceID;
	int32                                         NumChannels;
	int32                                         SampleRate;
	EAudioMixerStreamDataFormatType               Format;
	uint8                                         Pad_29[0x7];
	TArray<EAudioMixerChannelType>                OutputChannelArray;
	uint8                                         bIsSystemDefault : 1;
	uint8                                         bIsCurrentDevice : 1;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FAudioOutputDeviceInfo) == 0x000008, "Wrong alignment on FAudioOutputDeviceInfo");
static_assert(sizeof(FAudioOutputDeviceInfo) == 0x000048, "Wrong size on FAudioOutputDeviceInfo");
static_assert(offsetof(FAudioOutputDeviceInfo, Name) == 0x000000, "Member 'FAudioOutputDeviceInfo::Name' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, DeviceID) == 0x000010, "Member 'FAudioOutputDeviceInfo::DeviceID' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, NumChannels) == 0x000020, "Member 'FAudioOutputDeviceInfo::NumChannels' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, SampleRate) == 0x000024, "Member 'FAudioOutputDeviceInfo::SampleRate' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, Format) == 0x000028, "Member 'FAudioOutputDeviceInfo::Format' has a wrong offset!");
static_assert(offsetof(FAudioOutputDeviceInfo, OutputChannelArray) == 0x000030, "Member 'FAudioOutputDeviceInfo::OutputChannelArray' has a wrong offset!");

struct FSwapAudioOutputResult final
{
public:
	class FString                                 CurrentDeviceId;
	class FString                                 RequestedDeviceId;
	ESwapAudioOutputDeviceResultState             Result;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FSwapAudioOutputResult) == 0x000008, "Wrong alignment on FSwapAudioOutputResult");
static_assert(sizeof(FSwapAudioOutputResult) == 0x000028, "Wrong size on FSwapAudioOutputResult");
static_assert(offsetof(FSwapAudioOutputResult, CurrentDeviceId) == 0x000000, "Member 'FSwapAudioOutputResult::CurrentDeviceId' has a wrong offset!");
static_assert(offsetof(FSwapAudioOutputResult, RequestedDeviceId) == 0x000010, "Member 'FSwapAudioOutputResult::RequestedDeviceId' has a wrong offset!");
static_assert(offsetof(FSwapAudioOutputResult, Result) == 0x000020, "Member 'FSwapAudioOutputResult::Result' has a wrong offset!");

struct FSubmixEffectEQBand final
{
public:
	float                                         Frequency;
	float                                         Bandwidth;
	float                                         GainDb;
	uint8                                         bEnabled : 1;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FSubmixEffectEQBand) == 0x000004, "Wrong alignment on FSubmixEffectEQBand");
static_assert(sizeof(FSubmixEffectEQBand) == 0x000010, "Wrong size on FSubmixEffectEQBand");
static_assert(offsetof(FSubmixEffectEQBand, Frequency) == 0x000000, "Member 'FSubmixEffectEQBand::Frequency' has a wrong offset!");
static_assert(offsetof(FSubmixEffectEQBand, Bandwidth) == 0x000004, "Member 'FSubmixEffectEQBand::Bandwidth' has a wrong offset!");
static_assert(offsetof(FSubmixEffectEQBand, GainDb) == 0x000008, "Member 'FSubmixEffectEQBand::GainDb' has a wrong offset!");

struct FSubmixEffectSubmixEQSettings final
{
public:
	TArray<struct FSubmixEffectEQBand>            EQBands;
};
static_assert(alignof(FSubmixEffectSubmixEQSettings) == 0x000008, "Wrong alignment on FSubmixEffectSubmixEQSettings");
static_assert(sizeof(FSubmixEffectSubmixEQSettings) == 0x000010, "Wrong size on FSubmixEffectSubmixEQSettings");
static_assert(offsetof(FSubmixEffectSubmixEQSettings, EQBands) == 0x000000, "Member 'FSubmixEffectSubmixEQSettings::EQBands' has a wrong offset!");

struct FSubmixEffectReverbSettings final
{
public:
	bool                                          bBypassEarlyReflections;
	uint8                                         Pad_1[0x3];
	float                                         ReflectionsDelay;
	float                                         GainHF;
	float                                         ReflectionsGain;
	bool                                          bBypassLateReflections;
	uint8                                         Pad_11[0x3];
	float                                         LateDelay;
	float                                         DecayTime;
	float                                         Density;
	float                                         Diffusion;
	float                                         AirAbsorptionGainHF;
	float                                         DecayHFRatio;
	float                                         LateGain;
	float                                         Gain;
	float                                         WetLevel;
	float                                         DryLevel;
	bool                                          bBypass;
	uint8                                         Pad_3D[0x3];
};
static_assert(alignof(FSubmixEffectReverbSettings) == 0x000004, "Wrong alignment on FSubmixEffectReverbSettings");
static_assert(sizeof(FSubmixEffectReverbSettings) == 0x000040, "Wrong size on FSubmixEffectReverbSettings");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypassEarlyReflections) == 0x000000, "Member 'FSubmixEffectReverbSettings::bBypassEarlyReflections' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, ReflectionsDelay) == 0x000004, "Member 'FSubmixEffectReverbSettings::ReflectionsDelay' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, GainHF) == 0x000008, "Member 'FSubmixEffectReverbSettings::GainHF' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, ReflectionsGain) == 0x00000C, "Member 'FSubmixEffectReverbSettings::ReflectionsGain' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypassLateReflections) == 0x000010, "Member 'FSubmixEffectReverbSettings::bBypassLateReflections' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, LateDelay) == 0x000014, "Member 'FSubmixEffectReverbSettings::LateDelay' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, DecayTime) == 0x000018, "Member 'FSubmixEffectReverbSettings::DecayTime' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, Density) == 0x00001C, "Member 'FSubmixEffectReverbSettings::Density' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, Diffusion) == 0x000020, "Member 'FSubmixEffectReverbSettings::Diffusion' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, AirAbsorptionGainHF) == 0x000024, "Member 'FSubmixEffectReverbSettings::AirAbsorptionGainHF' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, DecayHFRatio) == 0x000028, "Member 'FSubmixEffectReverbSettings::DecayHFRatio' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, LateGain) == 0x00002C, "Member 'FSubmixEffectReverbSettings::LateGain' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, Gain) == 0x000030, "Member 'FSubmixEffectReverbSettings::Gain' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, WetLevel) == 0x000034, "Member 'FSubmixEffectReverbSettings::WetLevel' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, DryLevel) == 0x000038, "Member 'FSubmixEffectReverbSettings::DryLevel' has a wrong offset!");
static_assert(offsetof(FSubmixEffectReverbSettings, bBypass) == 0x00003C, "Member 'FSubmixEffectReverbSettings::bBypass' has a wrong offset!");

}
