#pragma once

#include "Basic.hpp"

#include "TimeSynth_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioMixer_classes.hpp"

namespace SDK
{

class UTimeSynthVolumeGroup final : public UObject
{
public:
	float                                         DefaultVolume;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynthVolumeGroup">();
	}
	static class UTimeSynthVolumeGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthVolumeGroup>();
	}
};
static_assert(alignof(UTimeSynthVolumeGroup) == 0x000008, "Wrong alignment on UTimeSynthVolumeGroup");
static_assert(sizeof(UTimeSynthVolumeGroup) == 0x000030, "Wrong size on UTimeSynthVolumeGroup");
static_assert(offsetof(UTimeSynthVolumeGroup, DefaultVolume) == 0x000028, "Member 'UTimeSynthVolumeGroup::DefaultVolume' has a wrong offset!");

class UTimeSynthClip final : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>            Sounds;
	struct FVector2D                              VolumeScaleDb;
	struct FVector2D                              PitchScaleSemitones;
	struct FTimeSynthTimeDef                      FadeInTime;
	bool                                          bApplyFadeOut;
	uint8                                         Pad_61[0x3];
	struct FTimeSynthTimeDef                      FadeOutTime;
	struct FTimeSynthTimeDef                      ClipDuration;
	ETimeSynthEventClipQuantization               ClipQuantization;
	uint8                                         Pad_75[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynthClip">();
	}
	static class UTimeSynthClip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthClip>();
	}
};
static_assert(alignof(UTimeSynthClip) == 0x000008, "Wrong alignment on UTimeSynthClip");
static_assert(sizeof(UTimeSynthClip) == 0x000078, "Wrong size on UTimeSynthClip");
static_assert(offsetof(UTimeSynthClip, Sounds) == 0x000028, "Member 'UTimeSynthClip::Sounds' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, VolumeScaleDb) == 0x000038, "Member 'UTimeSynthClip::VolumeScaleDb' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, PitchScaleSemitones) == 0x000048, "Member 'UTimeSynthClip::PitchScaleSemitones' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, FadeInTime) == 0x000058, "Member 'UTimeSynthClip::FadeInTime' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, bApplyFadeOut) == 0x000060, "Member 'UTimeSynthClip::bApplyFadeOut' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, FadeOutTime) == 0x000064, "Member 'UTimeSynthClip::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, ClipDuration) == 0x00006C, "Member 'UTimeSynthClip::ClipDuration' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, ClipQuantization) == 0x000074, "Member 'UTimeSynthClip::ClipQuantization' has a wrong offset!");

class UTimeSynthComponent final : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings         QuantizationSettings;
	uint8                                         bEnableSpectralAnalysis : 1;
	uint8                                         Pad_935[0x3];
	TArray<float>                                 FrequenciesToAnalyze;
	ETimeSynthFFTSize                             FFTSize;
	uint8                                         Pad_949[0x7];
	TMulticastInlineDelegate<void(float SynthPlaybackTimeSeconds)> OnPlaybackTime;
	uint8                                         bIsFilterAEnabled : 1;
	uint8                                         bIsFilterBEnabled : 1;
	uint8                                         Pad_961[0x3];
	struct FTimeSynthFilterSettings               FilterASettings;
	struct FTimeSynthFilterSettings               FilterBSettings;
	uint8                                         bIsEnvelopeFollowerEnabled : 1;
	uint8                                         Pad_97D[0x3];
	struct FTimeSynthEnvelopeFollowerSettings     EnvelopeFollowerSettings;
	int32                                         MaxPoolSize;
	uint8                                         Pad_990[0xA20];

public:
	void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)>& OnQuantizationEvent);
	bool HasActiveClips();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
	void ResetSeed();
	void SetBPM(const float BeatsPerMinute);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings);
	void SetFFTSize(ETimeSynthFFTSize InFFTSize);
	void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings);
	void SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings);
	void SetSeed(int32 InSeed);
	void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime);

	int32 GetBPM() const;
	float GetEnvelopeFollowerValue() const;
	int32 GetMaxActiveClipLimit() const;
	TArray<struct FTimeSynthSpectralData> GetSpectralData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TimeSynthComponent">();
	}
	static class UTimeSynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthComponent>();
	}
};
static_assert(alignof(UTimeSynthComponent) == 0x000010, "Wrong alignment on UTimeSynthComponent");
static_assert(sizeof(UTimeSynthComponent) == 0x0013B0, "Wrong size on UTimeSynthComponent");
static_assert(offsetof(UTimeSynthComponent, QuantizationSettings) == 0x000920, "Member 'UTimeSynthComponent::QuantizationSettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FrequenciesToAnalyze) == 0x000938, "Member 'UTimeSynthComponent::FrequenciesToAnalyze' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FFTSize) == 0x000948, "Member 'UTimeSynthComponent::FFTSize' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, OnPlaybackTime) == 0x000950, "Member 'UTimeSynthComponent::OnPlaybackTime' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FilterASettings) == 0x000964, "Member 'UTimeSynthComponent::FilterASettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FilterBSettings) == 0x000970, "Member 'UTimeSynthComponent::FilterBSettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, EnvelopeFollowerSettings) == 0x000980, "Member 'UTimeSynthComponent::EnvelopeFollowerSettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, MaxPoolSize) == 0x00098C, "Member 'UTimeSynthComponent::MaxPoolSize' has a wrong offset!");

}
