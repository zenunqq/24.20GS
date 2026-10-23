#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ETimeSynthEventQuantization : uint8
{
	None                                     = 0,
	Bars8                                    = 1,
	Bars4                                    = 2,
	Bars2                                    = 3,
	Bar                                      = 4,
	HalfNote                                 = 5,
	HalfNoteTriplet                          = 6,
	QuarterNote                              = 7,
	QuarterNoteTriplet                       = 8,
	EighthNote                               = 9,
	EighthNoteTriplet                        = 10,
	SixteenthNote                            = 11,
	SixteenthNoteTriplet                     = 12,
	ThirtySecondNote                         = 13,
	Count                                    = 14,
	ETimeSynthEventQuantization_MAX          = 15,
};

enum class ETimeSynthBeatDivision : uint8
{
	One                                      = 0,
	Two                                      = 1,
	Four                                     = 2,
	Eight                                    = 3,
	Sixteen                                  = 4,
	Count                                    = 5,
	ETimeSynthBeatDivision_MAX               = 6,
};

enum class ETimeSynthFFTSize : uint8
{
	Min_64                                   = 0,
	Small_256                                = 1,
	Medium_512                               = 2,
	Large_1024                               = 3,
	ETimeSynthFFTSize_MAX                    = 4,
};

enum class ETimeSynthEventClipQuantization : uint8
{
	Global                                   = 0,
	None                                     = 1,
	Bars8                                    = 2,
	Bars4                                    = 3,
	Bars2                                    = 4,
	Bar                                      = 5,
	HalfNote                                 = 6,
	HalfNoteTriplet                          = 7,
	QuarterNote                              = 8,
	QuarterNoteTriplet                       = 9,
	EighthNote                               = 10,
	EighthNoteTriplet                        = 11,
	SixteenthNote                            = 12,
	SixteenthNoteTriplet                     = 13,
	ThirtySecondNote                         = 14,
	Count                                    = 15,
	ETimeSynthEventClipQuantization_MAX      = 16,
};

enum class ETimeSynthFilter : uint8
{
	FilterA                                  = 0,
	FilterB                                  = 1,
	Count                                    = 2,
	ETimeSynthFilter_MAX                     = 3,
};

enum class ETimeSynthFilterType : uint8
{
	LowPass                                  = 0,
	HighPass                                 = 1,
	BandPass                                 = 2,
	BandStop                                 = 3,
	Count                                    = 4,
	ETimeSynthFilterType_MAX                 = 5,
};

enum class ETimeSynthEnvelopeFollowerPeakMode : uint8
{
	MeanSquared                              = 0,
	RootMeanSquared                          = 1,
	Peak                                     = 2,
	Count                                    = 3,
	ETimeSynthEnvelopeFollowerPeakMode_MAX   = 4,
};

struct FTimeSynthSpectralData final
{
public:
	float                                         FrequencyHz;
	float                                         Magnitude;
};
static_assert(alignof(FTimeSynthSpectralData) == 0x000004, "Wrong alignment on FTimeSynthSpectralData");
static_assert(sizeof(FTimeSynthSpectralData) == 0x000008, "Wrong size on FTimeSynthSpectralData");
static_assert(offsetof(FTimeSynthSpectralData, FrequencyHz) == 0x000000, "Member 'FTimeSynthSpectralData::FrequencyHz' has a wrong offset!");
static_assert(offsetof(FTimeSynthSpectralData, Magnitude) == 0x000004, "Member 'FTimeSynthSpectralData::Magnitude' has a wrong offset!");

struct FTimeSynthQuantizationSettings final
{
public:
	float                                         BeatsPerMinute;
	int32                                         BeatsPerBar;
	ETimeSynthBeatDivision                        BeatDivision;
	uint8                                         Pad_9[0x3];
	float                                         EventDelaySeconds;
	ETimeSynthEventQuantization                   GlobalQuantization;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(FTimeSynthQuantizationSettings) == 0x000004, "Wrong alignment on FTimeSynthQuantizationSettings");
static_assert(sizeof(FTimeSynthQuantizationSettings) == 0x000014, "Wrong size on FTimeSynthQuantizationSettings");
static_assert(offsetof(FTimeSynthQuantizationSettings, BeatsPerMinute) == 0x000000, "Member 'FTimeSynthQuantizationSettings::BeatsPerMinute' has a wrong offset!");
static_assert(offsetof(FTimeSynthQuantizationSettings, BeatsPerBar) == 0x000004, "Member 'FTimeSynthQuantizationSettings::BeatsPerBar' has a wrong offset!");
static_assert(offsetof(FTimeSynthQuantizationSettings, BeatDivision) == 0x000008, "Member 'FTimeSynthQuantizationSettings::BeatDivision' has a wrong offset!");
static_assert(offsetof(FTimeSynthQuantizationSettings, EventDelaySeconds) == 0x00000C, "Member 'FTimeSynthQuantizationSettings::EventDelaySeconds' has a wrong offset!");
static_assert(offsetof(FTimeSynthQuantizationSettings, GlobalQuantization) == 0x000010, "Member 'FTimeSynthQuantizationSettings::GlobalQuantization' has a wrong offset!");

struct FTimeSynthTimeDef final
{
public:
	int32                                         NumBars;
	int32                                         NumBeats;
};
static_assert(alignof(FTimeSynthTimeDef) == 0x000004, "Wrong alignment on FTimeSynthTimeDef");
static_assert(sizeof(FTimeSynthTimeDef) == 0x000008, "Wrong size on FTimeSynthTimeDef");
static_assert(offsetof(FTimeSynthTimeDef, NumBars) == 0x000000, "Member 'FTimeSynthTimeDef::NumBars' has a wrong offset!");
static_assert(offsetof(FTimeSynthTimeDef, NumBeats) == 0x000004, "Member 'FTimeSynthTimeDef::NumBeats' has a wrong offset!");

struct FTimeSynthClipHandle final
{
public:
	class FName                                   ClipName;
	int32                                         ClipId;
};
static_assert(alignof(FTimeSynthClipHandle) == 0x000004, "Wrong alignment on FTimeSynthClipHandle");
static_assert(sizeof(FTimeSynthClipHandle) == 0x000008, "Wrong size on FTimeSynthClipHandle");
static_assert(offsetof(FTimeSynthClipHandle, ClipName) == 0x000000, "Member 'FTimeSynthClipHandle::ClipName' has a wrong offset!");
static_assert(offsetof(FTimeSynthClipHandle, ClipId) == 0x000004, "Member 'FTimeSynthClipHandle::ClipId' has a wrong offset!");

struct FTimeSynthClipSound final
{
public:
	class USoundWave*                             SoundWave;
	float                                         RandomWeight;
	uint8                                         Pad_C[0x4];
	struct FVector2D                              DistanceRange;
};
static_assert(alignof(FTimeSynthClipSound) == 0x000008, "Wrong alignment on FTimeSynthClipSound");
static_assert(sizeof(FTimeSynthClipSound) == 0x000020, "Wrong size on FTimeSynthClipSound");
static_assert(offsetof(FTimeSynthClipSound, SoundWave) == 0x000000, "Member 'FTimeSynthClipSound::SoundWave' has a wrong offset!");
static_assert(offsetof(FTimeSynthClipSound, RandomWeight) == 0x000008, "Member 'FTimeSynthClipSound::RandomWeight' has a wrong offset!");
static_assert(offsetof(FTimeSynthClipSound, DistanceRange) == 0x000010, "Member 'FTimeSynthClipSound::DistanceRange' has a wrong offset!");

struct FTimeSynthFilterSettings final
{
public:
	ETimeSynthFilterType                          FilterType;
	uint8                                         Pad_1[0x3];
	float                                         CutoffFrequency;
	float                                         FilterQ;
};
static_assert(alignof(FTimeSynthFilterSettings) == 0x000004, "Wrong alignment on FTimeSynthFilterSettings");
static_assert(sizeof(FTimeSynthFilterSettings) == 0x00000C, "Wrong size on FTimeSynthFilterSettings");
static_assert(offsetof(FTimeSynthFilterSettings, FilterType) == 0x000000, "Member 'FTimeSynthFilterSettings::FilterType' has a wrong offset!");
static_assert(offsetof(FTimeSynthFilterSettings, CutoffFrequency) == 0x000004, "Member 'FTimeSynthFilterSettings::CutoffFrequency' has a wrong offset!");
static_assert(offsetof(FTimeSynthFilterSettings, FilterQ) == 0x000008, "Member 'FTimeSynthFilterSettings::FilterQ' has a wrong offset!");

struct FTimeSynthEnvelopeFollowerSettings final
{
public:
	float                                         AttackTime;
	float                                         ReleaseTime;
	ETimeSynthEnvelopeFollowerPeakMode            PeakMode;
	bool                                          bIsAnalogMode;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FTimeSynthEnvelopeFollowerSettings) == 0x000004, "Wrong alignment on FTimeSynthEnvelopeFollowerSettings");
static_assert(sizeof(FTimeSynthEnvelopeFollowerSettings) == 0x00000C, "Wrong size on FTimeSynthEnvelopeFollowerSettings");
static_assert(offsetof(FTimeSynthEnvelopeFollowerSettings, AttackTime) == 0x000000, "Member 'FTimeSynthEnvelopeFollowerSettings::AttackTime' has a wrong offset!");
static_assert(offsetof(FTimeSynthEnvelopeFollowerSettings, ReleaseTime) == 0x000004, "Member 'FTimeSynthEnvelopeFollowerSettings::ReleaseTime' has a wrong offset!");
static_assert(offsetof(FTimeSynthEnvelopeFollowerSettings, PeakMode) == 0x000008, "Member 'FTimeSynthEnvelopeFollowerSettings::PeakMode' has a wrong offset!");
static_assert(offsetof(FTimeSynthEnvelopeFollowerSettings, bIsAnalogMode) == 0x000009, "Member 'FTimeSynthEnvelopeFollowerSettings::bIsAnalogMode' has a wrong offset!");

}
