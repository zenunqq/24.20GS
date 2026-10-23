#pragma once

#include "Basic.hpp"

#include "TimeSynth_structs.hpp"

namespace SDK::Params
{

struct TimeSynthComponent_AddQuantizationEventDelegate final
{
public:
	ETimeSynthEventQuantization                   QuantizationType;
	uint8                                         Pad_1[0x3];
	TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)> OnQuantizationEvent;
};
static_assert(alignof(TimeSynthComponent_AddQuantizationEventDelegate) == 0x000004, "Wrong alignment on TimeSynthComponent_AddQuantizationEventDelegate");
static_assert(sizeof(TimeSynthComponent_AddQuantizationEventDelegate) == 0x000010, "Wrong size on TimeSynthComponent_AddQuantizationEventDelegate");
static_assert(offsetof(TimeSynthComponent_AddQuantizationEventDelegate, QuantizationType) == 0x000000, "Member 'TimeSynthComponent_AddQuantizationEventDelegate::QuantizationType' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_AddQuantizationEventDelegate, OnQuantizationEvent) == 0x000004, "Member 'TimeSynthComponent_AddQuantizationEventDelegate::OnQuantizationEvent' has a wrong offset!");

struct TimeSynthComponent_HasActiveClips final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(TimeSynthComponent_HasActiveClips) == 0x000001, "Wrong alignment on TimeSynthComponent_HasActiveClips");
static_assert(sizeof(TimeSynthComponent_HasActiveClips) == 0x000001, "Wrong size on TimeSynthComponent_HasActiveClips");
static_assert(offsetof(TimeSynthComponent_HasActiveClips, ReturnValue) == 0x000000, "Member 'TimeSynthComponent_HasActiveClips::ReturnValue' has a wrong offset!");

struct TimeSynthComponent_PlayClip final
{
public:
	class UTimeSynthClip*                         InClip;
	class UTimeSynthVolumeGroup*                  InVolumeGroup;
	struct FTimeSynthClipHandle                   ReturnValue;
};
static_assert(alignof(TimeSynthComponent_PlayClip) == 0x000008, "Wrong alignment on TimeSynthComponent_PlayClip");
static_assert(sizeof(TimeSynthComponent_PlayClip) == 0x000018, "Wrong size on TimeSynthComponent_PlayClip");
static_assert(offsetof(TimeSynthComponent_PlayClip, InClip) == 0x000000, "Member 'TimeSynthComponent_PlayClip::InClip' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_PlayClip, InVolumeGroup) == 0x000008, "Member 'TimeSynthComponent_PlayClip::InVolumeGroup' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_PlayClip, ReturnValue) == 0x000010, "Member 'TimeSynthComponent_PlayClip::ReturnValue' has a wrong offset!");

struct TimeSynthComponent_SetBPM final
{
public:
	float                                         BeatsPerMinute;
};
static_assert(alignof(TimeSynthComponent_SetBPM) == 0x000004, "Wrong alignment on TimeSynthComponent_SetBPM");
static_assert(sizeof(TimeSynthComponent_SetBPM) == 0x000004, "Wrong size on TimeSynthComponent_SetBPM");
static_assert(offsetof(TimeSynthComponent_SetBPM, BeatsPerMinute) == 0x000000, "Member 'TimeSynthComponent_SetBPM::BeatsPerMinute' has a wrong offset!");

struct TimeSynthComponent_SetEnvelopeFollowerEnabled final
{
public:
	bool                                          bInIsEnabled;
};
static_assert(alignof(TimeSynthComponent_SetEnvelopeFollowerEnabled) == 0x000001, "Wrong alignment on TimeSynthComponent_SetEnvelopeFollowerEnabled");
static_assert(sizeof(TimeSynthComponent_SetEnvelopeFollowerEnabled) == 0x000001, "Wrong size on TimeSynthComponent_SetEnvelopeFollowerEnabled");
static_assert(offsetof(TimeSynthComponent_SetEnvelopeFollowerEnabled, bInIsEnabled) == 0x000000, "Member 'TimeSynthComponent_SetEnvelopeFollowerEnabled::bInIsEnabled' has a wrong offset!");

struct TimeSynthComponent_SetEnvelopeFollowerSettings final
{
public:
	struct FTimeSynthEnvelopeFollowerSettings     InSettings;
};
static_assert(alignof(TimeSynthComponent_SetEnvelopeFollowerSettings) == 0x000004, "Wrong alignment on TimeSynthComponent_SetEnvelopeFollowerSettings");
static_assert(sizeof(TimeSynthComponent_SetEnvelopeFollowerSettings) == 0x00000C, "Wrong size on TimeSynthComponent_SetEnvelopeFollowerSettings");
static_assert(offsetof(TimeSynthComponent_SetEnvelopeFollowerSettings, InSettings) == 0x000000, "Member 'TimeSynthComponent_SetEnvelopeFollowerSettings::InSettings' has a wrong offset!");

struct TimeSynthComponent_SetFFTSize final
{
public:
	ETimeSynthFFTSize                             InFFTSize;
};
static_assert(alignof(TimeSynthComponent_SetFFTSize) == 0x000001, "Wrong alignment on TimeSynthComponent_SetFFTSize");
static_assert(sizeof(TimeSynthComponent_SetFFTSize) == 0x000001, "Wrong size on TimeSynthComponent_SetFFTSize");
static_assert(offsetof(TimeSynthComponent_SetFFTSize, InFFTSize) == 0x000000, "Member 'TimeSynthComponent_SetFFTSize::InFFTSize' has a wrong offset!");

struct TimeSynthComponent_SetFilterEnabled final
{
public:
	ETimeSynthFilter                              Filter;
	bool                                          bIsEnabled;
};
static_assert(alignof(TimeSynthComponent_SetFilterEnabled) == 0x000001, "Wrong alignment on TimeSynthComponent_SetFilterEnabled");
static_assert(sizeof(TimeSynthComponent_SetFilterEnabled) == 0x000002, "Wrong size on TimeSynthComponent_SetFilterEnabled");
static_assert(offsetof(TimeSynthComponent_SetFilterEnabled, Filter) == 0x000000, "Member 'TimeSynthComponent_SetFilterEnabled::Filter' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_SetFilterEnabled, bIsEnabled) == 0x000001, "Member 'TimeSynthComponent_SetFilterEnabled::bIsEnabled' has a wrong offset!");

struct TimeSynthComponent_SetFilterSettings final
{
public:
	ETimeSynthFilter                              Filter;
	uint8                                         Pad_1[0x3];
	struct FTimeSynthFilterSettings               InSettings;
};
static_assert(alignof(TimeSynthComponent_SetFilterSettings) == 0x000004, "Wrong alignment on TimeSynthComponent_SetFilterSettings");
static_assert(sizeof(TimeSynthComponent_SetFilterSettings) == 0x000010, "Wrong size on TimeSynthComponent_SetFilterSettings");
static_assert(offsetof(TimeSynthComponent_SetFilterSettings, Filter) == 0x000000, "Member 'TimeSynthComponent_SetFilterSettings::Filter' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_SetFilterSettings, InSettings) == 0x000004, "Member 'TimeSynthComponent_SetFilterSettings::InSettings' has a wrong offset!");

struct TimeSynthComponent_SetQuantizationSettings final
{
public:
	struct FTimeSynthQuantizationSettings         InQuantizationSettings;
};
static_assert(alignof(TimeSynthComponent_SetQuantizationSettings) == 0x000004, "Wrong alignment on TimeSynthComponent_SetQuantizationSettings");
static_assert(sizeof(TimeSynthComponent_SetQuantizationSettings) == 0x000014, "Wrong size on TimeSynthComponent_SetQuantizationSettings");
static_assert(offsetof(TimeSynthComponent_SetQuantizationSettings, InQuantizationSettings) == 0x000000, "Member 'TimeSynthComponent_SetQuantizationSettings::InQuantizationSettings' has a wrong offset!");

struct TimeSynthComponent_SetSeed final
{
public:
	int32                                         InSeed;
};
static_assert(alignof(TimeSynthComponent_SetSeed) == 0x000004, "Wrong alignment on TimeSynthComponent_SetSeed");
static_assert(sizeof(TimeSynthComponent_SetSeed) == 0x000004, "Wrong size on TimeSynthComponent_SetSeed");
static_assert(offsetof(TimeSynthComponent_SetSeed, InSeed) == 0x000000, "Member 'TimeSynthComponent_SetSeed::InSeed' has a wrong offset!");

struct TimeSynthComponent_SetVolumeGroup final
{
public:
	class UTimeSynthVolumeGroup*                  InVolumeGroup;
	float                                         VolumeDb;
	float                                         FadeTimeSec;
};
static_assert(alignof(TimeSynthComponent_SetVolumeGroup) == 0x000008, "Wrong alignment on TimeSynthComponent_SetVolumeGroup");
static_assert(sizeof(TimeSynthComponent_SetVolumeGroup) == 0x000010, "Wrong size on TimeSynthComponent_SetVolumeGroup");
static_assert(offsetof(TimeSynthComponent_SetVolumeGroup, InVolumeGroup) == 0x000000, "Member 'TimeSynthComponent_SetVolumeGroup::InVolumeGroup' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_SetVolumeGroup, VolumeDb) == 0x000008, "Member 'TimeSynthComponent_SetVolumeGroup::VolumeDb' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_SetVolumeGroup, FadeTimeSec) == 0x00000C, "Member 'TimeSynthComponent_SetVolumeGroup::FadeTimeSec' has a wrong offset!");

struct TimeSynthComponent_StopClip final
{
public:
	struct FTimeSynthClipHandle                   InClipHandle;
	ETimeSynthEventClipQuantization               EventQuantization;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(TimeSynthComponent_StopClip) == 0x000004, "Wrong alignment on TimeSynthComponent_StopClip");
static_assert(sizeof(TimeSynthComponent_StopClip) == 0x00000C, "Wrong size on TimeSynthComponent_StopClip");
static_assert(offsetof(TimeSynthComponent_StopClip, InClipHandle) == 0x000000, "Member 'TimeSynthComponent_StopClip::InClipHandle' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_StopClip, EventQuantization) == 0x000008, "Member 'TimeSynthComponent_StopClip::EventQuantization' has a wrong offset!");

struct TimeSynthComponent_StopClipWithFadeOverride final
{
public:
	struct FTimeSynthClipHandle                   InClipHandle;
	ETimeSynthEventClipQuantization               EventQuantization;
	uint8                                         Pad_9[0x3];
	struct FTimeSynthTimeDef                      FadeTime;
};
static_assert(alignof(TimeSynthComponent_StopClipWithFadeOverride) == 0x000004, "Wrong alignment on TimeSynthComponent_StopClipWithFadeOverride");
static_assert(sizeof(TimeSynthComponent_StopClipWithFadeOverride) == 0x000014, "Wrong size on TimeSynthComponent_StopClipWithFadeOverride");
static_assert(offsetof(TimeSynthComponent_StopClipWithFadeOverride, InClipHandle) == 0x000000, "Member 'TimeSynthComponent_StopClipWithFadeOverride::InClipHandle' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_StopClipWithFadeOverride, EventQuantization) == 0x000008, "Member 'TimeSynthComponent_StopClipWithFadeOverride::EventQuantization' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_StopClipWithFadeOverride, FadeTime) == 0x00000C, "Member 'TimeSynthComponent_StopClipWithFadeOverride::FadeTime' has a wrong offset!");

struct TimeSynthComponent_StopSoundsOnVolumeGroup final
{
public:
	class UTimeSynthVolumeGroup*                  InVolumeGroup;
	ETimeSynthEventClipQuantization               EventQuantization;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(TimeSynthComponent_StopSoundsOnVolumeGroup) == 0x000008, "Wrong alignment on TimeSynthComponent_StopSoundsOnVolumeGroup");
static_assert(sizeof(TimeSynthComponent_StopSoundsOnVolumeGroup) == 0x000010, "Wrong size on TimeSynthComponent_StopSoundsOnVolumeGroup");
static_assert(offsetof(TimeSynthComponent_StopSoundsOnVolumeGroup, InVolumeGroup) == 0x000000, "Member 'TimeSynthComponent_StopSoundsOnVolumeGroup::InVolumeGroup' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_StopSoundsOnVolumeGroup, EventQuantization) == 0x000008, "Member 'TimeSynthComponent_StopSoundsOnVolumeGroup::EventQuantization' has a wrong offset!");

struct TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride final
{
public:
	class UTimeSynthVolumeGroup*                  InVolumeGroup;
	ETimeSynthEventClipQuantization               EventQuantization;
	uint8                                         Pad_9[0x3];
	struct FTimeSynthTimeDef                      FadeTime;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride) == 0x000008, "Wrong alignment on TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride");
static_assert(sizeof(TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride) == 0x000018, "Wrong size on TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride");
static_assert(offsetof(TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride, InVolumeGroup) == 0x000000, "Member 'TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride::InVolumeGroup' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride, EventQuantization) == 0x000008, "Member 'TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride::EventQuantization' has a wrong offset!");
static_assert(offsetof(TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride, FadeTime) == 0x00000C, "Member 'TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride::FadeTime' has a wrong offset!");

struct TimeSynthComponent_GetBPM final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(TimeSynthComponent_GetBPM) == 0x000004, "Wrong alignment on TimeSynthComponent_GetBPM");
static_assert(sizeof(TimeSynthComponent_GetBPM) == 0x000004, "Wrong size on TimeSynthComponent_GetBPM");
static_assert(offsetof(TimeSynthComponent_GetBPM, ReturnValue) == 0x000000, "Member 'TimeSynthComponent_GetBPM::ReturnValue' has a wrong offset!");

struct TimeSynthComponent_GetEnvelopeFollowerValue final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(TimeSynthComponent_GetEnvelopeFollowerValue) == 0x000004, "Wrong alignment on TimeSynthComponent_GetEnvelopeFollowerValue");
static_assert(sizeof(TimeSynthComponent_GetEnvelopeFollowerValue) == 0x000004, "Wrong size on TimeSynthComponent_GetEnvelopeFollowerValue");
static_assert(offsetof(TimeSynthComponent_GetEnvelopeFollowerValue, ReturnValue) == 0x000000, "Member 'TimeSynthComponent_GetEnvelopeFollowerValue::ReturnValue' has a wrong offset!");

struct TimeSynthComponent_GetMaxActiveClipLimit final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(TimeSynthComponent_GetMaxActiveClipLimit) == 0x000004, "Wrong alignment on TimeSynthComponent_GetMaxActiveClipLimit");
static_assert(sizeof(TimeSynthComponent_GetMaxActiveClipLimit) == 0x000004, "Wrong size on TimeSynthComponent_GetMaxActiveClipLimit");
static_assert(offsetof(TimeSynthComponent_GetMaxActiveClipLimit, ReturnValue) == 0x000000, "Member 'TimeSynthComponent_GetMaxActiveClipLimit::ReturnValue' has a wrong offset!");

struct TimeSynthComponent_GetSpectralData final
{
public:
	TArray<struct FTimeSynthSpectralData>         ReturnValue;
};
static_assert(alignof(TimeSynthComponent_GetSpectralData) == 0x000008, "Wrong alignment on TimeSynthComponent_GetSpectralData");
static_assert(sizeof(TimeSynthComponent_GetSpectralData) == 0x000010, "Wrong size on TimeSynthComponent_GetSpectralData");
static_assert(offsetof(TimeSynthComponent_GetSpectralData, ReturnValue) == 0x000000, "Member 'TimeSynthComponent_GetSpectralData::ReturnValue' has a wrong offset!");

}
