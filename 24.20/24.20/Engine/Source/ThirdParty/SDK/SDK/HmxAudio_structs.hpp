#pragma once

#include "Basic.hpp"

#include "HmxCore_structs.hpp"

namespace SDK
{

enum class EHarmonixHandleValidity : uint8
{
	Invalid                                  = 0,
	Valid                                    = 1,
	EHarmonixHandleValidity_MAX              = 2,
};

enum class EOldMusicClockState : uint8
{
	kStopped                                 = 0,
	kPaused                                  = 1,
	kRunning                                 = 2,
	EOldMusicClockState_MAX                  = 3,
};

enum class EOffsetType : uint8
{
	kMs                                      = 0,
	kTicks                                   = 1,
	kBeats                                   = 2,
	kMeasures                                = 3,
	kPulses                                  = 4,
	EOffsetType_MAX                          = 5,
};

enum class ELengthType : uint8
{
	kTicks                                   = 0,
	kBeats                                   = 1,
	kMeasures                                = 2,
	kPulse                                   = 3,
	ELengthType_MAX                          = 4,
};

enum class EOldScheduleResult : uint8
{
	Success                                  = 0,
	Failed                                   = 1,
	EOldScheduleResult_MAX                   = 2,
};

enum class ECrushedBitDepth : uint8
{
	SixteenBit                               = 0,
	Fifteen                                  = 1,
	Fourteen                                 = 2,
	Thirteen                                 = 3,
	Twelve                                   = 4,
	Eleven                                   = 5,
	Ten                                      = 6,
	Nine                                     = 7,
	Eight                                    = 8,
	Seven                                    = 9,
	Six                                      = 10,
	Five                                     = 11,
	Four                                     = 12,
	Three                                    = 13,
	Two                                      = 14,
	One                                      = 15,
	ECrushedBitDepth_MAX                     = 16,
};

enum class EHarmonixDelayFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	EHarmonixDelayFilterType_MAX             = 3,
};

enum class EHarmonixDelayStereoType : uint8
{
	Default                                  = 0,
	CustomSpread                             = 1,
	PingPongForceLR                          = 2,
	PingPongSum                              = 3,
	PingPongIndividual                       = 4,
	EHarmonixDelayStereoType_MAX             = 5,
};

enum class EDistortionType : uint8
{
	Clean                                    = 0,
	Warm                                     = 1,
	Clip                                     = 2,
	Soft                                     = 3,
	Asymmetric                               = 4,
	Cruncher                                 = 5,
	CaptCrunch                               = 6,
	Rectifier                                = 7,
	EDistortionType_MAX                      = 8,
};

enum class EDistortionFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	Peaking                                  = 3,
	LowShelf                                 = 4,
	HighShelf                                = 5,
	EDistortionFilterType_MAX                = 6,
};

enum class EHarmonixFlangerShapes : uint8
{
	Sine                                     = 0,
	Square                                   = 1,
	SawUp                                    = 2,
	SawDown                                  = 3,
	Triangle                                 = 4,
	EHarmonixFlangerShapes_MAX               = 5,
};

enum class EHarmonixPhaserShapes : uint8
{
	Sine                                     = 0,
	Square                                   = 1,
	SawUp                                    = 2,
	SawDown                                  = 3,
	Triangle                                 = 4,
	EHarmonixPhaserShapes_MAX                = 5,
};

enum class EHarmonixTapeStartStopTransportState : uint8
{
	Playing                                  = 0,
	Stoppped                                 = 1,
	EHarmonixTapeStartStopTransportState_MAX = 2,
};

enum class ESynchronizationType : uint8
{
	kNone                                    = 0,
	kNextBeat                                = 1,
	kNextMeasure                             = 2,
	ESynchronizationType_MAX                 = 3,
};

enum class EMidiMsgType : uint8
{
	kText                                    = 0,
	kNoteOn                                  = 1,
	kNoteOff                                 = 2,
	EMidiMsgType_MAX                         = 3,
};

enum class EBTLengthType : uint8
{
	kBeat                                    = 0,
	kMeasure                                 = 1,
	EBTLengthType_MAX                        = 2,
};

enum class EAudioClipStartPosition : uint8
{
	kImmediate                               = 0,
	kOnNextDownbeat                          = 1,
	kOnNextBeat                              = 2,
	kOnNextEighth                            = 3,
	kOnTickInBar                             = 4,
	kOnAbsoluteTick                          = 5,
	kSubdivision                             = 6,
	kNumStartPositions                       = 7,
	EAudioClipStartPosition_MAX              = 8,
};

enum class EMusicalSubdivision : uint8
{
	Noop                                     = 0,
	Whole                                    = 1,
	Half                                     = 2,
	Quarter                                  = 4,
	Eighth                                   = 8,
	Sixteenth                                = 16,
	Thirtysecond                             = 32,
	Sixtyforth                               = 64,
	EMusicalSubdivision_MAX                  = 65,
};

enum class EWaitAtLeastMode : uint8
{
	kNone                                    = 0,
	kSecs                                    = 1,
	kTicks                                   = 2,
	EWaitAtLeastMode_MAX                     = 3,
};

enum class EPlayEmitterFindMethod : uint8
{
	kDefault                                 = 0,
	kSearch                                  = 1,
	kSpecificEmitter                         = 2,
	kTaggedEmitterOnThisActor                = 3,
	kTaggedEmitterOnSpecifiedActor           = 4,
	kTaggedEmitterOnAnyActor                 = 5,
	kSpecificEmitterOnTaggedActor            = 6,
	EPlayEmitterFindMethod_MAX               = 7,
};

enum class ESyncEmitterFindMethod : uint8
{
	kDefault                                 = 0,
	kSearch                                  = 1,
	kSpecificEmitter                         = 2,
	kTaggedEmitterOnThisActor                = 3,
	kTaggedEmitterOnSpecifiedActor           = 4,
	kTaggedEmitterOnAnyActor                 = 5,
	kSpecificEmittorOnTaggedActor            = 6,
	kAsPlay                                  = 7,
	ESyncEmitterFindMethod_MAX               = 8,
};

enum class EFLookAheadType : uint8
{
	kTicks                                   = 0,
	kTime                                    = 1,
	FLookAheadType_MAX                       = 2,
};

enum class EFMidiSourceType : uint8
{
	MusicEmittersTimeAuthority               = 0,
	MusicPlayersCurrentMusic                 = 1,
	SpecificMusicHandle                      = 2,
	FMidiSourceType_MAX                      = 3,
};

enum class EHoldOffUnits : uint8
{
	kNone                                    = 0,
	kTicks                                   = 1,
	kMs                                      = 2,
	EHoldOffUnits_MAX                        = 3,
};

enum class EMusicalUnit : uint8
{
	kBeatSubdivision                         = 0,
	kBarBoundary                             = 1,
	kAbsoluteMBT                             = 2,
	EMusicalUnit_MAX                         = 3,
};

enum class EMTSResult : uint8
{
	Failed                                   = 0,
	Succeeded                                = 1,
	EMTSResult_MAX                           = 2,
};

enum class EMusicClipUnmutePoint : uint8
{
	Immediate                                = 0,
	NextSixteenth                            = 1,
	NextEigth                                = 2,
	NextQuarter                              = 3,
	NextDownbeat                             = 4,
	EMusicClipUnmutePoint_MAX                = 5,
};

enum class EMusicClipSyncOptions : uint8
{
	Wild                                     = 0,
	TimeAuthority                            = 1,
	TimeFollower                             = 2,
	AssumeTimeAuthority                      = 3,
	EMusicClipSyncOptions_MAX                = 4,
};

enum class EMusicClipTimelineMapping : uint8
{
	DO_NOT_USE                               = 0,
	FromStart                                = 1,
	FromNextDownbeat                         = 2,
	FromSectionMarkers                       = 3,
	FromNearestBeat                          = 4,
	FromSpecificTick                         = 5,
	FromNextBeat                             = 6,
	EMusicClipTimelineMapping_MAX            = 7,
};

enum class EMusicClipSpeedConfigMode : uint8
{
	SpeedFactor                              = 0,
	BPM                                      = 1,
	EMusicClipSpeedConfigMode_MAX            = 2,
};

enum class EMidiChannels : uint8
{
	kCh0                                     = 0,
	kCh1                                     = 1,
	kCh2                                     = 2,
	kCh3                                     = 3,
	kCh4                                     = 4,
	kCh5                                     = 5,
	kCh6                                     = 6,
	kCh7                                     = 7,
	kCh8                                     = 8,
	kCh9                                     = 9,
	kCh10                                    = 10,
	kCh11                                    = 11,
	kCh12                                    = 12,
	kCh13                                    = 13,
	kCh14                                    = 14,
	kCh15                                    = 15,
	EMidiChannels_MAX                        = 16,
};

enum class EFAudioContinuationMode : uint8
{
	kOneshot                                 = 0,
	kRepeatOnDownbeats                       = 1,
	kRepeatOnQuarters                        = 2,
	kRepeatOnEigths                          = 3,
	kRepeatOnEigthTriplets                   = 4,
	kRepeatOn16ths                           = 5,
	kRepeatOnSpecificTickInBar               = 6,
	kStickyOnScheduledStart                  = 7,
	kNumContinuationModes                    = 8,
	FAudioContinuationMode_MAX               = 9,
};

enum class EMidiControllerID : uint8
{
	PresetSelection                          = 0,
	PortamentoTime                           = 5,
	Volume                                   = 7,
	PanRight                                 = 10,
	Expression                               = 11,
	BitCrushWetMix                           = 14,
	BitCrushLevel                            = 15,
	BitCrushSampleHold                       = 16,
	LFO0Frequency                            = 22,
	LFO1Frequency                            = 23,
	LFO0Depth                                = 24,
	LFO1Depth                                = 25,
	DelayTime                                = 26,
	DelayDryGain                             = 27,
	DelayWetGain                             = 28,
	DelayFeedback                            = 29,
	CoarsePitchBend                          = 30,
	SampleStartTime                          = 31,
	SubStreamVol1                            = 52,
	SubStreamVol2                            = 53,
	SubStreamVol3                            = 54,
	SubStreamVol4                            = 55,
	SubStreamVol5                            = 56,
	SubStreamVol6                            = 57,
	SubStreamVol7                            = 58,
	SubStreamVol8                            = 59,
	DelayEQEnabled                           = 60,
	DelayEQType                              = 61,
	DelayEQFreq                              = 62,
	DelayEQQ                                 = 63,
	PortamentoSwitch                         = 65,
	FilterQ                                  = 71,
	Release                                  = 72,
	Attack                                   = 73,
	FilterFrequency                          = 74,
	ElastiqueEnvelopeOrder                   = 79,
	DelayLFOBeatSync                         = 80,
	DelayLFOEnabled                          = 81,
	DelayLFORate                             = 82,
	DelayLFODepth                            = 83,
	DelayStereoType                          = 84,
	DelayPanLeft                             = 85,
	DelayPanRight                            = 86,
	EMidiControllerID_MAX                    = 87,
};

enum class EVorbisMemoryScheme : uint8
{
	None                                     = 0,
	Platform                                 = 1,
	PrivateAllocator                         = 2,
	PerStreamStack                           = 3,
	EVorbisMemoryScheme_MAX                  = 4,
};

enum class EAudioTransportState : uint8
{
	Invalid                                  = 0,
	PreBuffering                             = 1,
	PlayRequested                            = 2,
	Playing                                  = 3,
	Paused                                   = 4,
	Stopped                                  = 5,
	Stopping                                 = 6,
	EAudioTransportState_MAX                 = 7,
};

enum class EParamExists : uint8
{
	DoesExist                                = 0,
	DoesNotExist                             = 1,
	EParamExists_MAX                         = 2,
};

enum class EPostFadeOption : uint8
{
	KeepPlaying                              = 0,
	Stop                                     = 1,
	EPostFadeOption_MAX                      = 2,
};

enum class EMusicFindResults : uint8
{
	NotFound                                 = 0,
	Found                                    = 1,
	EMusicFindResults_MAX                    = 2,
};

enum class EFMusicUnmutePoint : uint8
{
	kUnmutePoint_Immediate                   = 0,
	kUnmutePoint_NextSixteenth               = 1,
	kUnmutePoint_NextEighth                  = 2,
	kUnmutePoint_NextQuarter                 = 3,
	kUnmutePoint_NextDownbeat                = 4,
	kUnmutePoint_SpecificLocalTick           = 5,
	kUnmutePoint_SpecificMasterTick          = 6,
	kUnmutePoint_MAX                         = 7,
};

enum class EFMusicSyncOptions : uint8
{
	kSync_Wild                               = 0,
	kSync_Master                             = 1,
	kSync_Slave                              = 2,
	kSync_MAX                                = 3,
};

enum class EFMusicTimelineMapping : uint8
{
	kTimelineMapping_NOT_USED                = 0,
	kTimelineMapping_FromStart               = 1,
	kTimelineMapping_FromNextDownbeat        = 2,
	kTimelineMapping_FromSectionMarkers      = 3,
	kTimelineMapping_FromNearestBeat         = 4,
	kTimelineMapping_FromSpecificTick        = 5,
	kTimelineMapping_FromNextBeat            = 6,
	kTimelineMapping_MAX                     = 7,
};

enum class EPostFadeOptionEnum : uint8
{
	kPostFadeOption_None                     = 0,
	kPostFadeOption_Stop                     = 1,
	kPostFadeOption_MAX                      = 2,
};

enum class EFStretcherAlgorithm : uint8
{
	kAsAuthored                              = 0,
	kDefault                                 = 1,
	kPro                                     = 2,
	kEffWithFormant                          = 3,
	kMobile                                  = 4,
	FStretcherAlgorithm_MAX                  = 5,
};

enum class EFFormantHandling : uint8
{
	kAsAuthored                              = 0,
	kCorrected                               = 1,
	kUncorrected                             = 2,
	FFormantHandling_MAX                     = 3,
};

enum class EFInstrumentRenderMode : uint8
{
	Parent                                   = 0,
	PreFxChild                               = 1,
	PostFxChild                              = 2,
	FInstrumentRenderMode_MAX                = 3,
};

struct FHarmonixDistortionBiquadSettings final
{
public:
	bool                                          Enabled;
	EDistortionFilterType                         Shape;
	uint8                                         Pad_2[0x2];
	float                                         Frequency;
	float                                         Q;
	float                                         GainDb;
};
static_assert(alignof(FHarmonixDistortionBiquadSettings) == 0x000004, "Wrong alignment on FHarmonixDistortionBiquadSettings");
static_assert(sizeof(FHarmonixDistortionBiquadSettings) == 0x000010, "Wrong size on FHarmonixDistortionBiquadSettings");
static_assert(offsetof(FHarmonixDistortionBiquadSettings, Enabled) == 0x000000, "Member 'FHarmonixDistortionBiquadSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionBiquadSettings, Shape) == 0x000001, "Member 'FHarmonixDistortionBiquadSettings::Shape' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionBiquadSettings, Frequency) == 0x000004, "Member 'FHarmonixDistortionBiquadSettings::Frequency' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionBiquadSettings, Q) == 0x000008, "Member 'FHarmonixDistortionBiquadSettings::Q' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionBiquadSettings, GainDb) == 0x00000C, "Member 'FHarmonixDistortionBiquadSettings::GainDb' has a wrong offset!");

struct FHarmonixDistortionFilterSettings final
{
public:
	struct FHarmonixDistortionBiquadSettings      biquad;
	bool                                          PreClip;
	uint8                                         Pad_11[0x3];
	int32                                         Passes;
};
static_assert(alignof(FHarmonixDistortionFilterSettings) == 0x000004, "Wrong alignment on FHarmonixDistortionFilterSettings");
static_assert(sizeof(FHarmonixDistortionFilterSettings) == 0x000018, "Wrong size on FHarmonixDistortionFilterSettings");
static_assert(offsetof(FHarmonixDistortionFilterSettings, biquad) == 0x000000, "Member 'FHarmonixDistortionFilterSettings::biquad' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionFilterSettings, PreClip) == 0x000010, "Member 'FHarmonixDistortionFilterSettings::PreClip' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionFilterSettings, Passes) == 0x000014, "Member 'FHarmonixDistortionFilterSettings::Passes' has a wrong offset!");

struct FMusicalTimeSpan final
{
public:
	ELengthType                                   lengthType;
	uint8                                         Pad_1[0x3];
	float                                         Length;
	EOffsetType                                   offsetType;
	uint8                                         Pad_9[0x3];
	float                                         Offset;
};
static_assert(alignof(FMusicalTimeSpan) == 0x000004, "Wrong alignment on FMusicalTimeSpan");
static_assert(sizeof(FMusicalTimeSpan) == 0x000010, "Wrong size on FMusicalTimeSpan");
static_assert(offsetof(FMusicalTimeSpan, lengthType) == 0x000000, "Member 'FMusicalTimeSpan::lengthType' has a wrong offset!");
static_assert(offsetof(FMusicalTimeSpan, Length) == 0x000004, "Member 'FMusicalTimeSpan::Length' has a wrong offset!");
static_assert(offsetof(FMusicalTimeSpan, offsetType) == 0x000008, "Member 'FMusicalTimeSpan::offsetType' has a wrong offset!");
static_assert(offsetof(FMusicalTimeSpan, Offset) == 0x00000C, "Member 'FMusicalTimeSpan::Offset' has a wrong offset!");

struct FHarmonixBitCrusherEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         InputVolumeDb;
	ECrushedBitDepth                              Bits;
	uint8                                         Pad_9[0x3];
	int32                                         SampleAndHoldFactor;
	float                                         Depth;
	float                                         OutputVolumeDb;
};
static_assert(alignof(FHarmonixBitCrusherEffectSettings) == 0x000004, "Wrong alignment on FHarmonixBitCrusherEffectSettings");
static_assert(sizeof(FHarmonixBitCrusherEffectSettings) == 0x000018, "Wrong size on FHarmonixBitCrusherEffectSettings");
static_assert(offsetof(FHarmonixBitCrusherEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixBitCrusherEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixBitCrusherEffectSettings, InputVolumeDb) == 0x000004, "Member 'FHarmonixBitCrusherEffectSettings::InputVolumeDb' has a wrong offset!");
static_assert(offsetof(FHarmonixBitCrusherEffectSettings, Bits) == 0x000008, "Member 'FHarmonixBitCrusherEffectSettings::Bits' has a wrong offset!");
static_assert(offsetof(FHarmonixBitCrusherEffectSettings, SampleAndHoldFactor) == 0x00000C, "Member 'FHarmonixBitCrusherEffectSettings::SampleAndHoldFactor' has a wrong offset!");
static_assert(offsetof(FHarmonixBitCrusherEffectSettings, Depth) == 0x000010, "Member 'FHarmonixBitCrusherEffectSettings::Depth' has a wrong offset!");
static_assert(offsetof(FHarmonixBitCrusherEffectSettings, OutputVolumeDb) == 0x000014, "Member 'FHarmonixBitCrusherEffectSettings::OutputVolumeDb' has a wrong offset!");

struct FHarmonixBufferUtilEffectSettings final
{
public:
	bool                                          Enabled;
};
static_assert(alignof(FHarmonixBufferUtilEffectSettings) == 0x000001, "Wrong alignment on FHarmonixBufferUtilEffectSettings");
static_assert(sizeof(FHarmonixBufferUtilEffectSettings) == 0x000001, "Wrong size on FHarmonixBufferUtilEffectSettings");
static_assert(offsetof(FHarmonixBufferUtilEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixBufferUtilEffectSettings::Enabled' has a wrong offset!");

struct FHarmonixDelayEffectSettings final
{
public:
	bool                                          Enabled;
	ETempoListenerTimeSyncOption                  TimeSyncOption;
	uint8                                         Pad_2[0x2];
	float                                         TimeSeconds;
	float                                         Tempo;
	float                                         DryDb;
	float                                         WetDb;
	float                                         FeedbackDb;
	bool                                          EQEnabled;
	EHarmonixDelayFilterType                      EQType;
	uint8                                         Pad_1A[0x2];
	float                                         EQFreq;
	float                                         EQQ;
	bool                                          LFOEnabled;
	ETempoListenerTimeSyncOption                  LFOTimeSyncOption;
	uint8                                         Pad_26[0x2];
	float                                         LFORate;
	float                                         LFODepth;
	EHarmonixDelayStereoType                      StereoType;
	uint8                                         Pad_31[0x3];
	float                                         PanLeft;
	float                                         PanRight;
};
static_assert(alignof(FHarmonixDelayEffectSettings) == 0x000004, "Wrong alignment on FHarmonixDelayEffectSettings");
static_assert(sizeof(FHarmonixDelayEffectSettings) == 0x00003C, "Wrong size on FHarmonixDelayEffectSettings");
static_assert(offsetof(FHarmonixDelayEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixDelayEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, TimeSyncOption) == 0x000001, "Member 'FHarmonixDelayEffectSettings::TimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, TimeSeconds) == 0x000004, "Member 'FHarmonixDelayEffectSettings::TimeSeconds' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, Tempo) == 0x000008, "Member 'FHarmonixDelayEffectSettings::Tempo' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, DryDb) == 0x00000C, "Member 'FHarmonixDelayEffectSettings::DryDb' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, WetDb) == 0x000010, "Member 'FHarmonixDelayEffectSettings::WetDb' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, FeedbackDb) == 0x000014, "Member 'FHarmonixDelayEffectSettings::FeedbackDb' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, EQEnabled) == 0x000018, "Member 'FHarmonixDelayEffectSettings::EQEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, EQType) == 0x000019, "Member 'FHarmonixDelayEffectSettings::EQType' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, EQFreq) == 0x00001C, "Member 'FHarmonixDelayEffectSettings::EQFreq' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, EQQ) == 0x000020, "Member 'FHarmonixDelayEffectSettings::EQQ' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, LFOEnabled) == 0x000024, "Member 'FHarmonixDelayEffectSettings::LFOEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, LFOTimeSyncOption) == 0x000025, "Member 'FHarmonixDelayEffectSettings::LFOTimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, LFORate) == 0x000028, "Member 'FHarmonixDelayEffectSettings::LFORate' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, LFODepth) == 0x00002C, "Member 'FHarmonixDelayEffectSettings::LFODepth' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, StereoType) == 0x000030, "Member 'FHarmonixDelayEffectSettings::StereoType' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, PanLeft) == 0x000034, "Member 'FHarmonixDelayEffectSettings::PanLeft' has a wrong offset!");
static_assert(offsetof(FHarmonixDelayEffectSettings, PanRight) == 0x000038, "Member 'FHarmonixDelayEffectSettings::PanRight' has a wrong offset!");

struct FHarmonixDistortionEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         InputVolumeDb;
	float                                         OutputVolumeDb;
	float                                         WetDryMix;
	float                                         DCOffset;
	EDistortionType                               Algorithm;
	bool                                          Oversample;
	uint8                                         Pad_16[0x2];
	struct FHarmonixDistortionFilterSettings      Filter1;
	struct FHarmonixDistortionFilterSettings      Filter2;
	struct FHarmonixDistortionFilterSettings      Filter3;
};
static_assert(alignof(FHarmonixDistortionEffectSettings) == 0x000004, "Wrong alignment on FHarmonixDistortionEffectSettings");
static_assert(sizeof(FHarmonixDistortionEffectSettings) == 0x000060, "Wrong size on FHarmonixDistortionEffectSettings");
static_assert(offsetof(FHarmonixDistortionEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixDistortionEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, InputVolumeDb) == 0x000004, "Member 'FHarmonixDistortionEffectSettings::InputVolumeDb' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, OutputVolumeDb) == 0x000008, "Member 'FHarmonixDistortionEffectSettings::OutputVolumeDb' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, WetDryMix) == 0x00000C, "Member 'FHarmonixDistortionEffectSettings::WetDryMix' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, DCOffset) == 0x000010, "Member 'FHarmonixDistortionEffectSettings::DCOffset' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, Algorithm) == 0x000014, "Member 'FHarmonixDistortionEffectSettings::Algorithm' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, Oversample) == 0x000015, "Member 'FHarmonixDistortionEffectSettings::Oversample' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, Filter1) == 0x000018, "Member 'FHarmonixDistortionEffectSettings::Filter1' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, Filter2) == 0x000030, "Member 'FHarmonixDistortionEffectSettings::Filter2' has a wrong offset!");
static_assert(offsetof(FHarmonixDistortionEffectSettings, Filter3) == 0x000048, "Member 'FHarmonixDistortionEffectSettings::Filter3' has a wrong offset!");

struct FHarmonixFlangerEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         Depth;
	float                                         DelayTimeMs;
	EHarmonixFlangerShapes                        Shape;
	uint8                                         Pad_D[0x3];
	float                                         Rate;
	float                                         Feedback;
	bool                                          Invert;
	uint8                                         Pad_19[0x3];
	float                                         Excursion;
	ETempoListenerTimeSyncOption                  TimeSyncOption;
	uint8                                         Pad_21[0x3];
	float                                         TempoSyncPhaseOffset;
};
static_assert(alignof(FHarmonixFlangerEffectSettings) == 0x000004, "Wrong alignment on FHarmonixFlangerEffectSettings");
static_assert(sizeof(FHarmonixFlangerEffectSettings) == 0x000028, "Wrong size on FHarmonixFlangerEffectSettings");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixFlangerEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Depth) == 0x000004, "Member 'FHarmonixFlangerEffectSettings::Depth' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, DelayTimeMs) == 0x000008, "Member 'FHarmonixFlangerEffectSettings::DelayTimeMs' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Shape) == 0x00000C, "Member 'FHarmonixFlangerEffectSettings::Shape' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Rate) == 0x000010, "Member 'FHarmonixFlangerEffectSettings::Rate' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Feedback) == 0x000014, "Member 'FHarmonixFlangerEffectSettings::Feedback' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Invert) == 0x000018, "Member 'FHarmonixFlangerEffectSettings::Invert' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, Excursion) == 0x00001C, "Member 'FHarmonixFlangerEffectSettings::Excursion' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, TimeSyncOption) == 0x000020, "Member 'FHarmonixFlangerEffectSettings::TimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixFlangerEffectSettings, TempoSyncPhaseOffset) == 0x000024, "Member 'FHarmonixFlangerEffectSettings::TempoSyncPhaseOffset' has a wrong offset!");

struct FHarmonixPhaserEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         WetDryMix;
	float                                         OscDepth;
	float                                         Feedback;
	int32                                         Poles;
	EHarmonixPhaserShapes                         Shape;
	uint8                                         Pad_15[0x3];
	float                                         Rate;
	ETempoListenerTimeSyncOption                  TimeSyncOption;
	uint8                                         Pad_1D[0x3];
	float                                         Color;
	float                                         PhaseShift;
};
static_assert(alignof(FHarmonixPhaserEffectSettings) == 0x000004, "Wrong alignment on FHarmonixPhaserEffectSettings");
static_assert(sizeof(FHarmonixPhaserEffectSettings) == 0x000028, "Wrong size on FHarmonixPhaserEffectSettings");
static_assert(offsetof(FHarmonixPhaserEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixPhaserEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, WetDryMix) == 0x000004, "Member 'FHarmonixPhaserEffectSettings::WetDryMix' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, OscDepth) == 0x000008, "Member 'FHarmonixPhaserEffectSettings::OscDepth' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, Feedback) == 0x00000C, "Member 'FHarmonixPhaserEffectSettings::Feedback' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, Poles) == 0x000010, "Member 'FHarmonixPhaserEffectSettings::Poles' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, Shape) == 0x000014, "Member 'FHarmonixPhaserEffectSettings::Shape' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, Rate) == 0x000018, "Member 'FHarmonixPhaserEffectSettings::Rate' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, TimeSyncOption) == 0x00001C, "Member 'FHarmonixPhaserEffectSettings::TimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, Color) == 0x000020, "Member 'FHarmonixPhaserEffectSettings::Color' has a wrong offset!");
static_assert(offsetof(FHarmonixPhaserEffectSettings, PhaseShift) == 0x000024, "Member 'FHarmonixPhaserEffectSettings::PhaseShift' has a wrong offset!");

struct FHarmonixStutterEditEffectSettings final
{
public:
	bool                                          Enabled;
	bool                                          FadeEnabled;
	bool                                          AllowPassThrough;
	bool                                          SilenceWhileScheduled;
	bool                                          VarispeedForTempoChanges;
	uint8                                         Pad_5[0x3];
	float                                         MaxCaptureSeconds;
	class FName                                   InstanceName;
};
static_assert(alignof(FHarmonixStutterEditEffectSettings) == 0x000004, "Wrong alignment on FHarmonixStutterEditEffectSettings");
static_assert(sizeof(FHarmonixStutterEditEffectSettings) == 0x000010, "Wrong size on FHarmonixStutterEditEffectSettings");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixStutterEditEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, FadeEnabled) == 0x000001, "Member 'FHarmonixStutterEditEffectSettings::FadeEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, AllowPassThrough) == 0x000002, "Member 'FHarmonixStutterEditEffectSettings::AllowPassThrough' has a wrong offset!");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, SilenceWhileScheduled) == 0x000003, "Member 'FHarmonixStutterEditEffectSettings::SilenceWhileScheduled' has a wrong offset!");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, VarispeedForTempoChanges) == 0x000004, "Member 'FHarmonixStutterEditEffectSettings::VarispeedForTempoChanges' has a wrong offset!");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, MaxCaptureSeconds) == 0x000008, "Member 'FHarmonixStutterEditEffectSettings::MaxCaptureSeconds' has a wrong offset!");
static_assert(offsetof(FHarmonixStutterEditEffectSettings, InstanceName) == 0x00000C, "Member 'FHarmonixStutterEditEffectSettings::InstanceName' has a wrong offset!");

struct FHarmonixTapeStartStopEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         TransitionDurationInBeats;
	EHarmonixTapeStartStopTransportState          Transport;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FHarmonixTapeStartStopEffectSettings) == 0x000004, "Wrong alignment on FHarmonixTapeStartStopEffectSettings");
static_assert(sizeof(FHarmonixTapeStartStopEffectSettings) == 0x00000C, "Wrong size on FHarmonixTapeStartStopEffectSettings");
static_assert(offsetof(FHarmonixTapeStartStopEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixTapeStartStopEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixTapeStartStopEffectSettings, TransitionDurationInBeats) == 0x000004, "Member 'FHarmonixTapeStartStopEffectSettings::TransitionDurationInBeats' has a wrong offset!");
static_assert(offsetof(FHarmonixTapeStartStopEffectSettings, Transport) == 0x000008, "Member 'FHarmonixTapeStartStopEffectSettings::Transport' has a wrong offset!");

struct FHarmonixTremoloEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         Depth;
	ETempoListenerTimeSyncOption                  TimeSyncOption;
	uint8                                         Pad_9[0x3];
	float                                         LFORate;
	float                                         LfoShape;
	bool                                          InvertLfo;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(FHarmonixTremoloEffectSettings) == 0x000004, "Wrong alignment on FHarmonixTremoloEffectSettings");
static_assert(sizeof(FHarmonixTremoloEffectSettings) == 0x000018, "Wrong size on FHarmonixTremoloEffectSettings");
static_assert(offsetof(FHarmonixTremoloEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixTremoloEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixTremoloEffectSettings, Depth) == 0x000004, "Member 'FHarmonixTremoloEffectSettings::Depth' has a wrong offset!");
static_assert(offsetof(FHarmonixTremoloEffectSettings, TimeSyncOption) == 0x000008, "Member 'FHarmonixTremoloEffectSettings::TimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixTremoloEffectSettings, LFORate) == 0x00000C, "Member 'FHarmonixTremoloEffectSettings::LFORate' has a wrong offset!");
static_assert(offsetof(FHarmonixTremoloEffectSettings, LfoShape) == 0x000010, "Member 'FHarmonixTremoloEffectSettings::LfoShape' has a wrong offset!");
static_assert(offsetof(FHarmonixTremoloEffectSettings, InvertLfo) == 0x000014, "Member 'FHarmonixTremoloEffectSettings::InvertLfo' has a wrong offset!");

struct FHarmonixVibeEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         VolumeDb;
	float                                         WetDryMix;
	float                                         QuadratureFrequency1;
	float                                         QuadratureFrequency2;
	float                                         QuadratureFrequency3;
	float                                         QuadratureFrequency4;
	ETempoListenerTimeSyncOption                  TimeSyncOption;
	uint8                                         Pad_1D[0x3];
	float                                         LFORate;
	float                                         LfoShape;
	float                                         LFODepth;
};
static_assert(alignof(FHarmonixVibeEffectSettings) == 0x000004, "Wrong alignment on FHarmonixVibeEffectSettings");
static_assert(sizeof(FHarmonixVibeEffectSettings) == 0x00002C, "Wrong size on FHarmonixVibeEffectSettings");
static_assert(offsetof(FHarmonixVibeEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixVibeEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, VolumeDb) == 0x000004, "Member 'FHarmonixVibeEffectSettings::VolumeDb' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, WetDryMix) == 0x000008, "Member 'FHarmonixVibeEffectSettings::WetDryMix' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, QuadratureFrequency1) == 0x00000C, "Member 'FHarmonixVibeEffectSettings::QuadratureFrequency1' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, QuadratureFrequency2) == 0x000010, "Member 'FHarmonixVibeEffectSettings::QuadratureFrequency2' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, QuadratureFrequency3) == 0x000014, "Member 'FHarmonixVibeEffectSettings::QuadratureFrequency3' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, QuadratureFrequency4) == 0x000018, "Member 'FHarmonixVibeEffectSettings::QuadratureFrequency4' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, TimeSyncOption) == 0x00001C, "Member 'FHarmonixVibeEffectSettings::TimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, LFORate) == 0x000020, "Member 'FHarmonixVibeEffectSettings::LFORate' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, LfoShape) == 0x000024, "Member 'FHarmonixVibeEffectSettings::LfoShape' has a wrong offset!");
static_assert(offsetof(FHarmonixVibeEffectSettings, LFODepth) == 0x000028, "Member 'FHarmonixVibeEffectSettings::LFODepth' has a wrong offset!");

struct FHarmonixWahEffectSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         VolumeDb;
	float                                         OpenFrequency;
	float                                         OpenQ;
	float                                         ClosedFrequency;
	float                                         ClosedQ;
	bool                                          SteepFilters;
	bool                                          Auto;
	ETempoListenerTimeSyncOption                  TimeSyncOption;
	uint8                                         Pad_1B[0x1];
	float                                         LFORate;
	float                                         LfoShape;
};
static_assert(alignof(FHarmonixWahEffectSettings) == 0x000004, "Wrong alignment on FHarmonixWahEffectSettings");
static_assert(sizeof(FHarmonixWahEffectSettings) == 0x000024, "Wrong size on FHarmonixWahEffectSettings");
static_assert(offsetof(FHarmonixWahEffectSettings, Enabled) == 0x000000, "Member 'FHarmonixWahEffectSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, VolumeDb) == 0x000004, "Member 'FHarmonixWahEffectSettings::VolumeDb' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, OpenFrequency) == 0x000008, "Member 'FHarmonixWahEffectSettings::OpenFrequency' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, OpenQ) == 0x00000C, "Member 'FHarmonixWahEffectSettings::OpenQ' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, ClosedFrequency) == 0x000010, "Member 'FHarmonixWahEffectSettings::ClosedFrequency' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, ClosedQ) == 0x000014, "Member 'FHarmonixWahEffectSettings::ClosedQ' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, SteepFilters) == 0x000018, "Member 'FHarmonixWahEffectSettings::SteepFilters' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, Auto) == 0x000019, "Member 'FHarmonixWahEffectSettings::Auto' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, TimeSyncOption) == 0x00001A, "Member 'FHarmonixWahEffectSettings::TimeSyncOption' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, LFORate) == 0x00001C, "Member 'FHarmonixWahEffectSettings::LFORate' has a wrong offset!");
static_assert(offsetof(FHarmonixWahEffectSettings, LfoShape) == 0x000020, "Member 'FHarmonixWahEffectSettings::LfoShape' has a wrong offset!");

struct FRemapRecord final
{
public:
	class FName                                   DestTrackName;
	int32                                         DestTrackIndex;
};
static_assert(alignof(FRemapRecord) == 0x000004, "Wrong alignment on FRemapRecord");
static_assert(sizeof(FRemapRecord) == 0x000008, "Wrong size on FRemapRecord");
static_assert(offsetof(FRemapRecord, DestTrackName) == 0x000000, "Member 'FRemapRecord::DestTrackName' has a wrong offset!");
static_assert(offsetof(FRemapRecord, DestTrackIndex) == 0x000004, "Member 'FRemapRecord::DestTrackIndex' has a wrong offset!");

struct FTickSpan final
{
public:
	int32                                         Offset;
	int32                                         Length;
};
static_assert(alignof(FTickSpan) == 0x000004, "Wrong alignment on FTickSpan");
static_assert(sizeof(FTickSpan) == 0x000008, "Wrong size on FTickSpan");
static_assert(offsetof(FTickSpan, Offset) == 0x000000, "Member 'FTickSpan::Offset' has a wrong offset!");
static_assert(offsetof(FTickSpan, Length) == 0x000004, "Member 'FTickSpan::Length' has a wrong offset!");

struct FMidiMusicTimeSlotArgs final
{
public:
	struct FTickSpan                              TickSpan;
	TScriptInterface<class IMidiMusicInterface>   MusicItem;
};
static_assert(alignof(FMidiMusicTimeSlotArgs) == 0x000008, "Wrong alignment on FMidiMusicTimeSlotArgs");
static_assert(sizeof(FMidiMusicTimeSlotArgs) == 0x000018, "Wrong size on FMidiMusicTimeSlotArgs");
static_assert(offsetof(FMidiMusicTimeSlotArgs, TickSpan) == 0x000000, "Member 'FMidiMusicTimeSlotArgs::TickSpan' has a wrong offset!");
static_assert(offsetof(FMidiMusicTimeSlotArgs, MusicItem) == 0x000008, "Member 'FMidiMusicTimeSlotArgs::MusicItem' has a wrong offset!");

struct FMidiNote final
{
public:
	uint8                                         NoteNumber;
};
static_assert(alignof(FMidiNote) == 0x000001, "Wrong alignment on FMidiNote");
static_assert(sizeof(FMidiNote) == 0x000001, "Wrong size on FMidiNote");
static_assert(offsetof(FMidiNote, NoteNumber) == 0x000000, "Member 'FMidiNote::NoteNumber' has a wrong offset!");

struct FMusicalPlayerRuntimeState final
{
public:
	bool                                          Debug;
	bool                                          IsTriggered;
	bool                                          IsPlaying;
	bool                                          IsPaused;
	bool                                          IsFinished;
	uint8                                         Pad_5[0x3];
	float                                         SecondsUntilNextPlay;
	int32                                         ElapsedMs;
	int32                                         ActiveTriggerTickets;
};
static_assert(alignof(FMusicalPlayerRuntimeState) == 0x000004, "Wrong alignment on FMusicalPlayerRuntimeState");
static_assert(sizeof(FMusicalPlayerRuntimeState) == 0x000014, "Wrong size on FMusicalPlayerRuntimeState");
static_assert(offsetof(FMusicalPlayerRuntimeState, Debug) == 0x000000, "Member 'FMusicalPlayerRuntimeState::Debug' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, IsTriggered) == 0x000001, "Member 'FMusicalPlayerRuntimeState::IsTriggered' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, IsPlaying) == 0x000002, "Member 'FMusicalPlayerRuntimeState::IsPlaying' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, IsPaused) == 0x000003, "Member 'FMusicalPlayerRuntimeState::IsPaused' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, IsFinished) == 0x000004, "Member 'FMusicalPlayerRuntimeState::IsFinished' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, SecondsUntilNextPlay) == 0x000008, "Member 'FMusicalPlayerRuntimeState::SecondsUntilNextPlay' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, ElapsedMs) == 0x00000C, "Member 'FMusicalPlayerRuntimeState::ElapsedMs' has a wrong offset!");
static_assert(offsetof(FMusicalPlayerRuntimeState, ActiveTriggerTickets) == 0x000010, "Member 'FMusicalPlayerRuntimeState::ActiveTriggerTickets' has a wrong offset!");

struct FStartCondition final
{
public:
	EAudioClipStartPosition                       StartPosition;
	EMusicalSubdivision                           Subdivision;
	bool                                          Dotted;
	bool                                          Triplet;
	int32                                         TickOffset;
	EWaitAtLeastMode                              AtLeastMode;
	uint8                                         Pad_9[0x3];
	float                                         WaitAtLeast;
};
static_assert(alignof(FStartCondition) == 0x000004, "Wrong alignment on FStartCondition");
static_assert(sizeof(FStartCondition) == 0x000010, "Wrong size on FStartCondition");
static_assert(offsetof(FStartCondition, StartPosition) == 0x000000, "Member 'FStartCondition::StartPosition' has a wrong offset!");
static_assert(offsetof(FStartCondition, Subdivision) == 0x000001, "Member 'FStartCondition::Subdivision' has a wrong offset!");
static_assert(offsetof(FStartCondition, Dotted) == 0x000002, "Member 'FStartCondition::Dotted' has a wrong offset!");
static_assert(offsetof(FStartCondition, Triplet) == 0x000003, "Member 'FStartCondition::Triplet' has a wrong offset!");
static_assert(offsetof(FStartCondition, TickOffset) == 0x000004, "Member 'FStartCondition::TickOffset' has a wrong offset!");
static_assert(offsetof(FStartCondition, AtLeastMode) == 0x000008, "Member 'FStartCondition::AtLeastMode' has a wrong offset!");
static_assert(offsetof(FStartCondition, WaitAtLeast) == 0x00000C, "Member 'FStartCondition::WaitAtLeast' has a wrong offset!");

struct FCursorSettings final
{
public:
	class FString                                 eventSourceName;
	class FString                                 trackName;
	EFLookAheadType                               lookAheadType;
	uint8                                         Pad_21[0x3];
	int32                                         lookAheadTicks;
	float                                         lookAheadMs;
	bool                                          broadcastTextMsgs;
	bool                                          broadcastNoteOnMsgs;
	bool                                          broadcastNoteOffMsgs;
	bool                                          broadcastPitchbendMsgs;
};
static_assert(alignof(FCursorSettings) == 0x000008, "Wrong alignment on FCursorSettings");
static_assert(sizeof(FCursorSettings) == 0x000030, "Wrong size on FCursorSettings");
static_assert(offsetof(FCursorSettings, eventSourceName) == 0x000000, "Member 'FCursorSettings::eventSourceName' has a wrong offset!");
static_assert(offsetof(FCursorSettings, trackName) == 0x000010, "Member 'FCursorSettings::trackName' has a wrong offset!");
static_assert(offsetof(FCursorSettings, lookAheadType) == 0x000020, "Member 'FCursorSettings::lookAheadType' has a wrong offset!");
static_assert(offsetof(FCursorSettings, lookAheadTicks) == 0x000024, "Member 'FCursorSettings::lookAheadTicks' has a wrong offset!");
static_assert(offsetof(FCursorSettings, lookAheadMs) == 0x000028, "Member 'FCursorSettings::lookAheadMs' has a wrong offset!");
static_assert(offsetof(FCursorSettings, broadcastTextMsgs) == 0x00002C, "Member 'FCursorSettings::broadcastTextMsgs' has a wrong offset!");
static_assert(offsetof(FCursorSettings, broadcastNoteOnMsgs) == 0x00002D, "Member 'FCursorSettings::broadcastNoteOnMsgs' has a wrong offset!");
static_assert(offsetof(FCursorSettings, broadcastNoteOffMsgs) == 0x00002E, "Member 'FCursorSettings::broadcastNoteOffMsgs' has a wrong offset!");
static_assert(offsetof(FCursorSettings, broadcastPitchbendMsgs) == 0x00002F, "Member 'FCursorSettings::broadcastPitchbendMsgs' has a wrong offset!");

struct FMusicClipSyncConfig final
{
public:
	EMusicClipSyncOptions                         SyncOption;
	EMusicClipTimelineMapping                     timelineMapping;
	uint8                                         Pad_2[0x2];
	int32                                         offsetTicks;
	int32                                         minWaitTicks;
	float                                         minWaitMs;
	bool                                          ignoreMasterLoopsAndSeeks;
	bool                                          continueIfMasterStops;
	EMusicClipUnmutePoint                         unmutePoint;
	uint8                                         Pad_13[0x1];
	int32                                         maxPreRollBars;
};
static_assert(alignof(FMusicClipSyncConfig) == 0x000004, "Wrong alignment on FMusicClipSyncConfig");
static_assert(sizeof(FMusicClipSyncConfig) == 0x000018, "Wrong size on FMusicClipSyncConfig");
static_assert(offsetof(FMusicClipSyncConfig, SyncOption) == 0x000000, "Member 'FMusicClipSyncConfig::SyncOption' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, timelineMapping) == 0x000001, "Member 'FMusicClipSyncConfig::timelineMapping' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, offsetTicks) == 0x000004, "Member 'FMusicClipSyncConfig::offsetTicks' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, minWaitTicks) == 0x000008, "Member 'FMusicClipSyncConfig::minWaitTicks' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, minWaitMs) == 0x00000C, "Member 'FMusicClipSyncConfig::minWaitMs' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, ignoreMasterLoopsAndSeeks) == 0x000010, "Member 'FMusicClipSyncConfig::ignoreMasterLoopsAndSeeks' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, continueIfMasterStops) == 0x000011, "Member 'FMusicClipSyncConfig::continueIfMasterStops' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, unmutePoint) == 0x000012, "Member 'FMusicClipSyncConfig::unmutePoint' has a wrong offset!");
static_assert(offsetof(FMusicClipSyncConfig, maxPreRollBars) == 0x000014, "Member 'FMusicClipSyncConfig::maxPreRollBars' has a wrong offset!");

struct FMusicClipSpeedConfig final
{
public:
	EMusicClipSpeedConfigMode                     Mode;
	uint8                                         Pad_1[0x3];
	float                                         Speed;
	bool                                          maintainPitch;
	bool                                          ignoreTimeAuthoritysPitchMaintainence;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FMusicClipSpeedConfig) == 0x000004, "Wrong alignment on FMusicClipSpeedConfig");
static_assert(sizeof(FMusicClipSpeedConfig) == 0x00000C, "Wrong size on FMusicClipSpeedConfig");
static_assert(offsetof(FMusicClipSpeedConfig, Mode) == 0x000000, "Member 'FMusicClipSpeedConfig::Mode' has a wrong offset!");
static_assert(offsetof(FMusicClipSpeedConfig, Speed) == 0x000004, "Member 'FMusicClipSpeedConfig::Speed' has a wrong offset!");
static_assert(offsetof(FMusicClipSpeedConfig, maintainPitch) == 0x000008, "Member 'FMusicClipSpeedConfig::maintainPitch' has a wrong offset!");
static_assert(offsetof(FMusicClipSpeedConfig, ignoreTimeAuthoritysPitchMaintainence) == 0x000009, "Member 'FMusicClipSpeedConfig::ignoreTimeAuthoritysPitchMaintainence' has a wrong offset!");

struct FTrackChannelSpecifier final
{
public:
	class FString                                 trackName;
	int32                                         MidiChannelFlags;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FTrackChannelSpecifier) == 0x000008, "Wrong alignment on FTrackChannelSpecifier");
static_assert(sizeof(FTrackChannelSpecifier) == 0x000018, "Wrong size on FTrackChannelSpecifier");
static_assert(offsetof(FTrackChannelSpecifier, trackName) == 0x000000, "Member 'FTrackChannelSpecifier::trackName' has a wrong offset!");
static_assert(offsetof(FTrackChannelSpecifier, MidiChannelFlags) == 0x000010, "Member 'FTrackChannelSpecifier::MidiChannelFlags' has a wrong offset!");

struct FTrackArgs final
{
public:
	TSoftObjectPtr<class USynthesizerPatchAssetBase> SynthPatch;
	float                                         BeatLength;
	uint8                                         Pad_2C[0x4];
};
static_assert(alignof(FTrackArgs) == 0x000008, "Wrong alignment on FTrackArgs");
static_assert(sizeof(FTrackArgs) == 0x000030, "Wrong size on FTrackArgs");
static_assert(offsetof(FTrackArgs, SynthPatch) == 0x000000, "Member 'FTrackArgs::SynthPatch' has a wrong offset!");
static_assert(offsetof(FTrackArgs, BeatLength) == 0x000028, "Member 'FTrackArgs::BeatLength' has a wrong offset!");

struct FTrackPageSave final
{
public:
	TArray<int32>                                 EnabledSquares;
};
static_assert(alignof(FTrackPageSave) == 0x000008, "Wrong alignment on FTrackPageSave");
static_assert(sizeof(FTrackPageSave) == 0x000010, "Wrong size on FTrackPageSave");
static_assert(offsetof(FTrackPageSave, EnabledSquares) == 0x000000, "Member 'FTrackPageSave::EnabledSquares' has a wrong offset!");

struct FSequencerTrackSave final
{
public:
	TArray<struct FTrackPageSave>                 SavedPages;
};
static_assert(alignof(FSequencerTrackSave) == 0x000008, "Wrong alignment on FSequencerTrackSave");
static_assert(sizeof(FSequencerTrackSave) == 0x000010, "Wrong size on FSequencerTrackSave");
static_assert(offsetof(FSequencerTrackSave, SavedPages) == 0x000000, "Member 'FSequencerTrackSave::SavedPages' has a wrong offset!");

struct FSequencerSave final
{
public:
	TArray<struct FSequencerTrackSave>            SavedTracks;
};
static_assert(alignof(FSequencerSave) == 0x000008, "Wrong alignment on FSequencerSave");
static_assert(sizeof(FSequencerSave) == 0x000010, "Wrong size on FSequencerSave");
static_assert(offsetof(FSequencerSave, SavedTracks) == 0x000000, "Member 'FSequencerSave::SavedTracks' has a wrong offset!");

struct FPBSetting final
{
public:
	int32                                         midiChannel;
	float                                         Value;
};
static_assert(alignof(FPBSetting) == 0x000004, "Wrong alignment on FPBSetting");
static_assert(sizeof(FPBSetting) == 0x000008, "Wrong size on FPBSetting");
static_assert(offsetof(FPBSetting, midiChannel) == 0x000000, "Member 'FPBSetting::midiChannel' has a wrong offset!");
static_assert(offsetof(FPBSetting, Value) == 0x000004, "Member 'FPBSetting::Value' has a wrong offset!");

struct FCCSetting final
{
public:
	int32                                         midiChannel;
	EMidiControllerID                             Control;
	uint8                                         Pad_5[0x3];
	int32                                         Value;
};
static_assert(alignof(FCCSetting) == 0x000004, "Wrong alignment on FCCSetting");
static_assert(sizeof(FCCSetting) == 0x00000C, "Wrong size on FCCSetting");
static_assert(offsetof(FCCSetting, midiChannel) == 0x000000, "Member 'FCCSetting::midiChannel' has a wrong offset!");
static_assert(offsetof(FCCSetting, Control) == 0x000004, "Member 'FCCSetting::Control' has a wrong offset!");
static_assert(offsetof(FCCSetting, Value) == 0x000008, "Member 'FCCSetting::Value' has a wrong offset!");

struct FHarmonixAnalyzerOutputSettings final
{
public:
	float                                         RiseMs;
	float                                         FallMs;
	float                                         MaxDB;
	float                                         RangeDB;
};
static_assert(alignof(FHarmonixAnalyzerOutputSettings) == 0x000004, "Wrong alignment on FHarmonixAnalyzerOutputSettings");
static_assert(sizeof(FHarmonixAnalyzerOutputSettings) == 0x000010, "Wrong size on FHarmonixAnalyzerOutputSettings");
static_assert(offsetof(FHarmonixAnalyzerOutputSettings, RiseMs) == 0x000000, "Member 'FHarmonixAnalyzerOutputSettings::RiseMs' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerOutputSettings, FallMs) == 0x000004, "Member 'FHarmonixAnalyzerOutputSettings::FallMs' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerOutputSettings, MaxDB) == 0x000008, "Member 'FHarmonixAnalyzerOutputSettings::MaxDB' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerOutputSettings, RangeDB) == 0x00000C, "Member 'FHarmonixAnalyzerOutputSettings::RangeDB' has a wrong offset!");

struct FHarmonixAnalyzerFFTSettings final
{
public:
	bool                                          Enabled;
	uint8                                         Pad_1[0x3];
	float                                         MinFrequencyHz;
	float                                         MaxFrequencyHz;
	bool                                          EqualLoudnessWeights;
	bool                                          MelScaleBinning;
	uint8                                         Pad_E[0x2];
	int32                                         NumResultBins;
	int32                                         FftLength;
	struct FHarmonixAnalyzerOutputSettings        OutputSettings;
	uint8                                         Pad_28[0x4];
};
static_assert(alignof(FHarmonixAnalyzerFFTSettings) == 0x000004, "Wrong alignment on FHarmonixAnalyzerFFTSettings");
static_assert(sizeof(FHarmonixAnalyzerFFTSettings) == 0x00002C, "Wrong size on FHarmonixAnalyzerFFTSettings");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, Enabled) == 0x000000, "Member 'FHarmonixAnalyzerFFTSettings::Enabled' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, MinFrequencyHz) == 0x000004, "Member 'FHarmonixAnalyzerFFTSettings::MinFrequencyHz' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, MaxFrequencyHz) == 0x000008, "Member 'FHarmonixAnalyzerFFTSettings::MaxFrequencyHz' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, EqualLoudnessWeights) == 0x00000C, "Member 'FHarmonixAnalyzerFFTSettings::EqualLoudnessWeights' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, MelScaleBinning) == 0x00000D, "Member 'FHarmonixAnalyzerFFTSettings::MelScaleBinning' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, NumResultBins) == 0x000010, "Member 'FHarmonixAnalyzerFFTSettings::NumResultBins' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, FftLength) == 0x000014, "Member 'FHarmonixAnalyzerFFTSettings::FftLength' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerFFTSettings, OutputSettings) == 0x000018, "Member 'FHarmonixAnalyzerFFTSettings::OutputSettings' has a wrong offset!");

struct FHarmonixFilterBankBandSettings final
{
public:
	float                                         StartHz;
	float                                         EndHz;
	struct FHarmonixAnalyzerOutputSettings        OutputSettings;
};
static_assert(alignof(FHarmonixFilterBankBandSettings) == 0x000004, "Wrong alignment on FHarmonixFilterBankBandSettings");
static_assert(sizeof(FHarmonixFilterBankBandSettings) == 0x000018, "Wrong size on FHarmonixFilterBankBandSettings");
static_assert(offsetof(FHarmonixFilterBankBandSettings, StartHz) == 0x000000, "Member 'FHarmonixFilterBankBandSettings::StartHz' has a wrong offset!");
static_assert(offsetof(FHarmonixFilterBankBandSettings, EndHz) == 0x000004, "Member 'FHarmonixFilterBankBandSettings::EndHz' has a wrong offset!");
static_assert(offsetof(FHarmonixFilterBankBandSettings, OutputSettings) == 0x000008, "Member 'FHarmonixFilterBankBandSettings::OutputSettings' has a wrong offset!");

struct FHarmonixAnalyzerEffectSettings final
{
public:
	class FName                                   InstanceName;
	bool                                          VuEnabled;
	uint8                                         Pad_5[0x3];
	float                                         VuAvgWindowMs;
	float                                         VuPeakHoldMs;
	struct FHarmonixAnalyzerOutputSettings        VuOutputSettings;
	bool                                          DrEnabled;
	uint8                                         Pad_21[0x3];
	float                                         DrHighRisingAlpha;
	float                                         DrHighFallingAlpha;
	float                                         DrLowRisingAlpha;
	float                                         DrLowFallingAlpha;
	int32                                         DrWindowSize;
	bool                                          DrFilterResult;
	uint8                                         Pad_39[0x3];
	float                                         DrFilterCutoff;
	struct FHarmonixAnalyzerFFTSettings           FftSettings;
	bool                                          FilterBankEnabled;
	uint8                                         Pad_6D[0x3];
	TArray<struct FHarmonixFilterBankBandSettings> FilterBankBands;
	bool                                          SemitonesEnabled;
	uint8                                         Pad_81[0x3];
	int32                                         SemitonesMidiNoteMin;
	int32                                         SemiTonesMidiNoteRange;
	struct FHarmonixAnalyzerOutputSettings        SemiTonesOutputSettings;
	bool                                          WaveformEnabled;
	uint8                                         Pad_9D[0x3];
	int32                                         WaveformNumBinsHeld;
	int32                                         WaveformNumBinsPerSecond;
	float                                         WaveformSmoothingFactor;
	int32                                         WaveformSmoothingDistance;
};
static_assert(alignof(FHarmonixAnalyzerEffectSettings) == 0x000008, "Wrong alignment on FHarmonixAnalyzerEffectSettings");
static_assert(sizeof(FHarmonixAnalyzerEffectSettings) == 0x0000B0, "Wrong size on FHarmonixAnalyzerEffectSettings");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, InstanceName) == 0x000000, "Member 'FHarmonixAnalyzerEffectSettings::InstanceName' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, VuEnabled) == 0x000004, "Member 'FHarmonixAnalyzerEffectSettings::VuEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, VuAvgWindowMs) == 0x000008, "Member 'FHarmonixAnalyzerEffectSettings::VuAvgWindowMs' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, VuPeakHoldMs) == 0x00000C, "Member 'FHarmonixAnalyzerEffectSettings::VuPeakHoldMs' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, VuOutputSettings) == 0x000010, "Member 'FHarmonixAnalyzerEffectSettings::VuOutputSettings' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrEnabled) == 0x000020, "Member 'FHarmonixAnalyzerEffectSettings::DrEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrHighRisingAlpha) == 0x000024, "Member 'FHarmonixAnalyzerEffectSettings::DrHighRisingAlpha' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrHighFallingAlpha) == 0x000028, "Member 'FHarmonixAnalyzerEffectSettings::DrHighFallingAlpha' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrLowRisingAlpha) == 0x00002C, "Member 'FHarmonixAnalyzerEffectSettings::DrLowRisingAlpha' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrLowFallingAlpha) == 0x000030, "Member 'FHarmonixAnalyzerEffectSettings::DrLowFallingAlpha' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrWindowSize) == 0x000034, "Member 'FHarmonixAnalyzerEffectSettings::DrWindowSize' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrFilterResult) == 0x000038, "Member 'FHarmonixAnalyzerEffectSettings::DrFilterResult' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, DrFilterCutoff) == 0x00003C, "Member 'FHarmonixAnalyzerEffectSettings::DrFilterCutoff' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, FftSettings) == 0x000040, "Member 'FHarmonixAnalyzerEffectSettings::FftSettings' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, FilterBankEnabled) == 0x00006C, "Member 'FHarmonixAnalyzerEffectSettings::FilterBankEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, FilterBankBands) == 0x000070, "Member 'FHarmonixAnalyzerEffectSettings::FilterBankBands' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, SemitonesEnabled) == 0x000080, "Member 'FHarmonixAnalyzerEffectSettings::SemitonesEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, SemitonesMidiNoteMin) == 0x000084, "Member 'FHarmonixAnalyzerEffectSettings::SemitonesMidiNoteMin' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, SemiTonesMidiNoteRange) == 0x000088, "Member 'FHarmonixAnalyzerEffectSettings::SemiTonesMidiNoteRange' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, SemiTonesOutputSettings) == 0x00008C, "Member 'FHarmonixAnalyzerEffectSettings::SemiTonesOutputSettings' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, WaveformEnabled) == 0x00009C, "Member 'FHarmonixAnalyzerEffectSettings::WaveformEnabled' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, WaveformNumBinsHeld) == 0x0000A0, "Member 'FHarmonixAnalyzerEffectSettings::WaveformNumBinsHeld' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, WaveformNumBinsPerSecond) == 0x0000A4, "Member 'FHarmonixAnalyzerEffectSettings::WaveformNumBinsPerSecond' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, WaveformSmoothingFactor) == 0x0000A8, "Member 'FHarmonixAnalyzerEffectSettings::WaveformSmoothingFactor' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectSettings, WaveformSmoothingDistance) == 0x0000AC, "Member 'FHarmonixAnalyzerEffectSettings::WaveformSmoothingDistance' has a wrong offset!");

struct FHarmonixAnalyzerEffectResults final
{
public:
	TArray<float>                                 VuChLevels;
	TArray<float>                                 VuChPeaks;
	float                                         VuMonoLevel;
	float                                         VuMonoPeak;
	float                                         VuMonoPeakdB;
	float                                         DrHighEnvelope;
	float                                         DrLowEnvelope;
	float                                         DrDb;
	float                                         DrMonoPeakdB;
	float                                         DrMonoPeakHighEnvelopedB;
	TArray<float>                                 FftLevels;
	TArray<float>                                 FilterBankLevels;
	uint8                                         Pad_60[0x10];
	TArray<float>                                 Waveform;
};
static_assert(alignof(FHarmonixAnalyzerEffectResults) == 0x000008, "Wrong alignment on FHarmonixAnalyzerEffectResults");
static_assert(sizeof(FHarmonixAnalyzerEffectResults) == 0x000080, "Wrong size on FHarmonixAnalyzerEffectResults");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, VuChLevels) == 0x000000, "Member 'FHarmonixAnalyzerEffectResults::VuChLevels' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, VuChPeaks) == 0x000010, "Member 'FHarmonixAnalyzerEffectResults::VuChPeaks' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, VuMonoLevel) == 0x000020, "Member 'FHarmonixAnalyzerEffectResults::VuMonoLevel' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, VuMonoPeak) == 0x000024, "Member 'FHarmonixAnalyzerEffectResults::VuMonoPeak' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, VuMonoPeakdB) == 0x000028, "Member 'FHarmonixAnalyzerEffectResults::VuMonoPeakdB' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, DrHighEnvelope) == 0x00002C, "Member 'FHarmonixAnalyzerEffectResults::DrHighEnvelope' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, DrLowEnvelope) == 0x000030, "Member 'FHarmonixAnalyzerEffectResults::DrLowEnvelope' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, DrDb) == 0x000034, "Member 'FHarmonixAnalyzerEffectResults::DrDb' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, DrMonoPeakdB) == 0x000038, "Member 'FHarmonixAnalyzerEffectResults::DrMonoPeakdB' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, DrMonoPeakHighEnvelopedB) == 0x00003C, "Member 'FHarmonixAnalyzerEffectResults::DrMonoPeakHighEnvelopedB' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, FftLevels) == 0x000040, "Member 'FHarmonixAnalyzerEffectResults::FftLevels' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, FilterBankLevels) == 0x000050, "Member 'FHarmonixAnalyzerEffectResults::FilterBankLevels' has a wrong offset!");
static_assert(offsetof(FHarmonixAnalyzerEffectResults, Waveform) == 0x000070, "Member 'FHarmonixAnalyzerEffectResults::Waveform' has a wrong offset!");

struct FHmxPerPlatformConfig final
{
public:
	int32                                         numAudioRenderThreads;
};
static_assert(alignof(FHmxPerPlatformConfig) == 0x000004, "Wrong alignment on FHmxPerPlatformConfig");
static_assert(sizeof(FHmxPerPlatformConfig) == 0x000004, "Wrong size on FHmxPerPlatformConfig");
static_assert(offsetof(FHmxPerPlatformConfig, numAudioRenderThreads) == 0x000000, "Member 'FHmxPerPlatformConfig::numAudioRenderThreads' has a wrong offset!");

struct alignas(0x08) FAudioParam final
{
public:
	class FName                                   Name;
	float                                         Value;
	bool                                          isDefined;
	uint8                                         Pad_9[0x17];
};
static_assert(alignof(FAudioParam) == 0x000008, "Wrong alignment on FAudioParam");
static_assert(sizeof(FAudioParam) == 0x000020, "Wrong size on FAudioParam");
static_assert(offsetof(FAudioParam, Name) == 0x000000, "Member 'FAudioParam::Name' has a wrong offset!");
static_assert(offsetof(FAudioParam, Value) == 0x000004, "Member 'FAudioParam::Value' has a wrong offset!");
static_assert(offsetof(FAudioParam, isDefined) == 0x000008, "Member 'FAudioParam::isDefined' has a wrong offset!");

struct FInitialVolumeSettings final
{
public:
	bool                                          modifyAtStart;
	uint8                                         Pad_1[0x3];
	float                                         Volume;
	float                                         TransitionTime;
	EPostFadeOptionEnum                           postFadeOption;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FInitialVolumeSettings) == 0x000004, "Wrong alignment on FInitialVolumeSettings");
static_assert(sizeof(FInitialVolumeSettings) == 0x000010, "Wrong size on FInitialVolumeSettings");
static_assert(offsetof(FInitialVolumeSettings, modifyAtStart) == 0x000000, "Member 'FInitialVolumeSettings::modifyAtStart' has a wrong offset!");
static_assert(offsetof(FInitialVolumeSettings, Volume) == 0x000004, "Member 'FInitialVolumeSettings::Volume' has a wrong offset!");
static_assert(offsetof(FInitialVolumeSettings, TransitionTime) == 0x000008, "Member 'FInitialVolumeSettings::TransitionTime' has a wrong offset!");
static_assert(offsetof(FInitialVolumeSettings, postFadeOption) == 0x00000C, "Member 'FInitialVolumeSettings::postFadeOption' has a wrong offset!");

struct FPlayArgs
{
public:
	uint8                                         Pad_0[0x8];
	class UMusicEmitterComponent*                 Emitter;
	bool                                          paused;
	bool                                          muted;
	uint8                                         Pad_12[0x2];
	struct FInitialVolumeSettings                 volumeSettings;
	class FName                                   RenderTarget;
	class FName                                   mixPreset;
	uint8                                         Pad_2C[0x4];
	TArray<struct FAudioParam>                    initialParams;
};
static_assert(alignof(FPlayArgs) == 0x000008, "Wrong alignment on FPlayArgs");
static_assert(sizeof(FPlayArgs) == 0x000040, "Wrong size on FPlayArgs");
static_assert(offsetof(FPlayArgs, Emitter) == 0x000008, "Member 'FPlayArgs::Emitter' has a wrong offset!");
static_assert(offsetof(FPlayArgs, paused) == 0x000010, "Member 'FPlayArgs::paused' has a wrong offset!");
static_assert(offsetof(FPlayArgs, muted) == 0x000011, "Member 'FPlayArgs::muted' has a wrong offset!");
static_assert(offsetof(FPlayArgs, volumeSettings) == 0x000014, "Member 'FPlayArgs::volumeSettings' has a wrong offset!");
static_assert(offsetof(FPlayArgs, RenderTarget) == 0x000024, "Member 'FPlayArgs::RenderTarget' has a wrong offset!");
static_assert(offsetof(FPlayArgs, mixPreset) == 0x000028, "Member 'FPlayArgs::mixPreset' has a wrong offset!");
static_assert(offsetof(FPlayArgs, initialParams) == 0x000030, "Member 'FPlayArgs::initialParams' has a wrong offset!");

struct FMusicSyncConfig final
{
public:
	EFMusicSyncOptions                            SyncOption;
	bool                                          oneShot;
	uint8                                         Pad_2[0x6];
	class UMusicHandle*                           timeAuthorityHandle;
	EFMusicTimelineMapping                        timelineMapping;
	uint8                                         Pad_11[0x3];
	int32                                         offsetTicks;
	int32                                         minWaitTicks;
	float                                         minWaitMs;
	EFMusicUnmutePoint                            unmutePoint;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FMusicSyncConfig) == 0x000008, "Wrong alignment on FMusicSyncConfig");
static_assert(sizeof(FMusicSyncConfig) == 0x000028, "Wrong size on FMusicSyncConfig");
static_assert(offsetof(FMusicSyncConfig, SyncOption) == 0x000000, "Member 'FMusicSyncConfig::SyncOption' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, oneShot) == 0x000001, "Member 'FMusicSyncConfig::oneShot' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, timeAuthorityHandle) == 0x000008, "Member 'FMusicSyncConfig::timeAuthorityHandle' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, timelineMapping) == 0x000010, "Member 'FMusicSyncConfig::timelineMapping' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, offsetTicks) == 0x000014, "Member 'FMusicSyncConfig::offsetTicks' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, minWaitTicks) == 0x000018, "Member 'FMusicSyncConfig::minWaitTicks' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, minWaitMs) == 0x00001C, "Member 'FMusicSyncConfig::minWaitMs' has a wrong offset!");
static_assert(offsetof(FMusicSyncConfig, unmutePoint) == 0x000020, "Member 'FMusicSyncConfig::unmutePoint' has a wrong offset!");

struct FMusicSpeedConfig final
{
public:
	float                                         Speed;
	bool                                          maintainPitch;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FMusicSpeedConfig) == 0x000004, "Wrong alignment on FMusicSpeedConfig");
static_assert(sizeof(FMusicSpeedConfig) == 0x000008, "Wrong size on FMusicSpeedConfig");
static_assert(offsetof(FMusicSpeedConfig, Speed) == 0x000000, "Member 'FMusicSpeedConfig::Speed' has a wrong offset!");
static_assert(offsetof(FMusicSpeedConfig, maintainPitch) == 0x000004, "Member 'FMusicSpeedConfig::maintainPitch' has a wrong offset!");

struct FPlayMusicArgs final : public FPlayArgs
{
public:
	TSoftObjectPtr<class UMusicAssetBase>         playableAsset;
	struct FMusicSyncConfig                       syncConfig;
	struct FMusicSpeedConfig                      speedConfig;
	float                                         PitchMultiplier;
	int32                                         transposition;
	EFStretcherAlgorithm                          overridingStretchAlgorithm;
	EFFormantHandling                             overridingFormantHandling;
	uint8                                         Pad_A2[0x6];
};
static_assert(alignof(FPlayMusicArgs) == 0x000008, "Wrong alignment on FPlayMusicArgs");
static_assert(sizeof(FPlayMusicArgs) == 0x0000A8, "Wrong size on FPlayMusicArgs");
static_assert(offsetof(FPlayMusicArgs, playableAsset) == 0x000040, "Member 'FPlayMusicArgs::playableAsset' has a wrong offset!");
static_assert(offsetof(FPlayMusicArgs, syncConfig) == 0x000068, "Member 'FPlayMusicArgs::syncConfig' has a wrong offset!");
static_assert(offsetof(FPlayMusicArgs, speedConfig) == 0x000090, "Member 'FPlayMusicArgs::speedConfig' has a wrong offset!");
static_assert(offsetof(FPlayMusicArgs, PitchMultiplier) == 0x000098, "Member 'FPlayMusicArgs::PitchMultiplier' has a wrong offset!");
static_assert(offsetof(FPlayMusicArgs, transposition) == 0x00009C, "Member 'FPlayMusicArgs::transposition' has a wrong offset!");
static_assert(offsetof(FPlayMusicArgs, overridingStretchAlgorithm) == 0x0000A0, "Member 'FPlayMusicArgs::overridingStretchAlgorithm' has a wrong offset!");
static_assert(offsetof(FPlayMusicArgs, overridingFormantHandling) == 0x0000A1, "Member 'FPlayMusicArgs::overridingFormantHandling' has a wrong offset!");

struct FPlayInstrumentArgs final : public FPlayArgs
{
public:
	EFInstrumentRenderMode                        renderMode;
	uint8                                         Pad_41[0x7];
	class UInstrumentHandle*                      parentHandle;
	TSoftObjectPtr<class USynthesizerPatchAssetBase> playableAsset;
};
static_assert(alignof(FPlayInstrumentArgs) == 0x000008, "Wrong alignment on FPlayInstrumentArgs");
static_assert(sizeof(FPlayInstrumentArgs) == 0x000078, "Wrong size on FPlayInstrumentArgs");
static_assert(offsetof(FPlayInstrumentArgs, renderMode) == 0x000040, "Member 'FPlayInstrumentArgs::renderMode' has a wrong offset!");
static_assert(offsetof(FPlayInstrumentArgs, parentHandle) == 0x000048, "Member 'FPlayInstrumentArgs::parentHandle' has a wrong offset!");
static_assert(offsetof(FPlayInstrumentArgs, playableAsset) == 0x000050, "Member 'FPlayInstrumentArgs::playableAsset' has a wrong offset!");

}
