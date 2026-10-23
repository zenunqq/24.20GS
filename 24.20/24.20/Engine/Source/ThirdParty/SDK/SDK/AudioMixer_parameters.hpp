#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AudioMixer_structs.hpp"

namespace SDK::Params
{

struct SubmixEffectDynamicsProcessorPreset_SetAudioBus final
{
public:
	class UAudioBus*                              AudioBus;
};
static_assert(alignof(SubmixEffectDynamicsProcessorPreset_SetAudioBus) == 0x000008, "Wrong alignment on SubmixEffectDynamicsProcessorPreset_SetAudioBus");
static_assert(sizeof(SubmixEffectDynamicsProcessorPreset_SetAudioBus) == 0x000008, "Wrong size on SubmixEffectDynamicsProcessorPreset_SetAudioBus");
static_assert(offsetof(SubmixEffectDynamicsProcessorPreset_SetAudioBus, AudioBus) == 0x000000, "Member 'SubmixEffectDynamicsProcessorPreset_SetAudioBus::AudioBus' has a wrong offset!");

struct SubmixEffectDynamicsProcessorPreset_SetExternalSubmix final
{
public:
	class USoundSubmix*                           Submix;
};
static_assert(alignof(SubmixEffectDynamicsProcessorPreset_SetExternalSubmix) == 0x000008, "Wrong alignment on SubmixEffectDynamicsProcessorPreset_SetExternalSubmix");
static_assert(sizeof(SubmixEffectDynamicsProcessorPreset_SetExternalSubmix) == 0x000008, "Wrong size on SubmixEffectDynamicsProcessorPreset_SetExternalSubmix");
static_assert(offsetof(SubmixEffectDynamicsProcessorPreset_SetExternalSubmix, Submix) == 0x000000, "Member 'SubmixEffectDynamicsProcessorPreset_SetExternalSubmix::Submix' has a wrong offset!");

struct SubmixEffectDynamicsProcessorPreset_SetSettings final
{
public:
	struct FSubmixEffectDynamicsProcessorSettings Settings_0;
};
static_assert(alignof(SubmixEffectDynamicsProcessorPreset_SetSettings) == 0x000008, "Wrong alignment on SubmixEffectDynamicsProcessorPreset_SetSettings");
static_assert(sizeof(SubmixEffectDynamicsProcessorPreset_SetSettings) == 0x000060, "Wrong size on SubmixEffectDynamicsProcessorPreset_SetSettings");
static_assert(offsetof(SubmixEffectDynamicsProcessorPreset_SetSettings, Settings_0) == 0x000000, "Member 'SubmixEffectDynamicsProcessorPreset_SetSettings::Settings_0' has a wrong offset!");

struct AudioMixerBlueprintLibrary_AddMasterSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
};
static_assert(alignof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_AddMasterSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_AddMasterSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_AddMasterSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect, SubmixEffectPreset) == 0x000008, "Member 'AudioMixerBlueprintLibrary_AddMasterSubmixEffect::SubmixEffectPreset' has a wrong offset!");

struct AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundEffectSourcePresetChain*          PresetChain;
	struct FSourceEffectChainEntry                Entry;
};
static_assert(alignof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain");
static_assert(sizeof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, Entry) == 0x000010, "Member 'AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain::Entry' has a wrong offset!");

struct AudioMixerBlueprintLibrary_AddSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
	int32                                         ReturnValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_AddSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_AddSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_AddSubmixEffect) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_AddSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_AddSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSubmixEffect, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_AddSubmixEffect::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSubmixEffect, SubmixEffectPreset) == 0x000010, "Member 'AudioMixerBlueprintLibrary_AddSubmixEffect::SubmixEffectPreset' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSubmixEffect, ReturnValue) == 0x000018, "Member 'AudioMixerBlueprintLibrary_AddSubmixEffect::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_ClearMasterSubmixEffects final
{
public:
	const class UObject*                          WorldContextObject;
};
static_assert(alignof(AudioMixerBlueprintLibrary_ClearMasterSubmixEffects) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ClearMasterSubmixEffects");
static_assert(sizeof(AudioMixerBlueprintLibrary_ClearMasterSubmixEffects) == 0x000008, "Wrong size on AudioMixerBlueprintLibrary_ClearMasterSubmixEffects");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearMasterSubmixEffects, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ClearMasterSubmixEffects::WorldContextObject' has a wrong offset!");

struct AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	float                                         FadeTimeSec;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride");
static_assert(sizeof(AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride, FadeTimeSec) == 0x000010, "Member 'AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride::FadeTimeSec' has a wrong offset!");

struct AudioMixerBlueprintLibrary_ClearSubmixEffects final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
};
static_assert(alignof(AudioMixerBlueprintLibrary_ClearSubmixEffects) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ClearSubmixEffects");
static_assert(sizeof(AudioMixerBlueprintLibrary_ClearSubmixEffects) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_ClearSubmixEffects");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearSubmixEffects, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ClearSubmixEffects::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearSubmixEffects, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_ClearSubmixEffects::SoundSubmix' has a wrong offset!");

struct AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString final
{
public:
	struct FAudioOutputDeviceInfo                 Info;
	class FString                                 ReturnValue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString");
static_assert(sizeof(AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString) == 0x000058, "Wrong size on AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString");
static_assert(offsetof(AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString, Info) == 0x000000, "Member 'AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString::Info' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString, ReturnValue) == 0x000048, "Member 'AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices final
{
public:
	const class UObject*                          WorldContextObject;
	TDelegate<void(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices)> OnObtainDevicesEvent;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices");
static_assert(sizeof(AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices, OnObtainDevicesEvent) == 0x000008, "Member 'AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices::OnObtainDevicesEvent' has a wrong offset!");

struct AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName final
{
public:
	const class UObject*                          WorldContextObject;
	TDelegate<void(const class FString& CurrentDevice)> OnObtainCurrentDeviceEvent;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName");
static_assert(sizeof(AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName, OnObtainCurrentDeviceEvent) == 0x000008, "Member 'AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName::OnObtainCurrentDeviceEvent' has a wrong offset!");

struct AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies final
{
public:
	const class UObject*                          WorldContextObject;
	TArray<float>                                 Frequencies;
	TArray<float>                                 Magnitudes;
	class USoundSubmix*                           SubmixToAnalyze;
};
static_assert(alignof(AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies");
static_assert(sizeof(AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies) == 0x000030, "Wrong size on AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, Frequencies) == 0x000008, "Member 'AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies::Frequencies' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, Magnitudes) == 0x000018, "Member 'AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies::Magnitudes' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies, SubmixToAnalyze) == 0x000028, "Member 'AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies::SubmixToAnalyze' has a wrong offset!");

struct AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundEffectSourcePresetChain*          PresetChain;
	int32                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain");
static_assert(sizeof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, ReturnValue) == 0x000010, "Member 'AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_GetPhaseForFrequencies final
{
public:
	const class UObject*                          WorldContextObject;
	TArray<float>                                 Frequencies;
	TArray<float>                                 Phases;
	class USoundSubmix*                           SubmixToAnalyze;
};
static_assert(alignof(AudioMixerBlueprintLibrary_GetPhaseForFrequencies) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_GetPhaseForFrequencies");
static_assert(sizeof(AudioMixerBlueprintLibrary_GetPhaseForFrequencies) == 0x000030, "Wrong size on AudioMixerBlueprintLibrary_GetPhaseForFrequencies");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetPhaseForFrequencies, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_GetPhaseForFrequencies::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetPhaseForFrequencies, Frequencies) == 0x000008, "Member 'AudioMixerBlueprintLibrary_GetPhaseForFrequencies::Frequencies' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetPhaseForFrequencies, Phases) == 0x000018, "Member 'AudioMixerBlueprintLibrary_GetPhaseForFrequencies::Phases' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetPhaseForFrequencies, SubmixToAnalyze) == 0x000028, "Member 'AudioMixerBlueprintLibrary_GetPhaseForFrequencies::SubmixToAnalyze' has a wrong offset!");

struct AudioMixerBlueprintLibrary_IsAudioBusActive final
{
public:
	const class UObject*                          WorldContextObject;
	class UAudioBus*                              AudioBus;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(AudioMixerBlueprintLibrary_IsAudioBusActive) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_IsAudioBusActive");
static_assert(sizeof(AudioMixerBlueprintLibrary_IsAudioBusActive) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_IsAudioBusActive");
static_assert(offsetof(AudioMixerBlueprintLibrary_IsAudioBusActive, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_IsAudioBusActive::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_IsAudioBusActive, AudioBus) == 0x000008, "Member 'AudioMixerBlueprintLibrary_IsAudioBusActive::AudioBus' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_IsAudioBusActive, ReturnValue) == 0x000010, "Member 'AudioMixerBlueprintLibrary_IsAudioBusActive::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings final
{
public:
	int32                                         InNumBands;
	float                                         InMinimumFrequency;
	float                                         InMaximumFrequency;
	int32                                         InAttackTimeMsec;
	int32                                         InReleaseTimeMsec;
	uint8                                         Pad_14[0x4];
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings");
static_assert(sizeof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings) == 0x000028, "Wrong size on AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, InNumBands) == 0x000000, "Member 'AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings::InNumBands' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, InMinimumFrequency) == 0x000004, "Member 'AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings::InMinimumFrequency' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, InMaximumFrequency) == 0x000008, "Member 'AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings::InMaximumFrequency' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, InAttackTimeMsec) == 0x00000C, "Member 'AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings::InAttackTimeMsec' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, InReleaseTimeMsec) == 0x000010, "Member 'AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings::InReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings, ReturnValue) == 0x000018, "Member 'AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings final
{
public:
	int32                                         InNumSemitones;
	EMusicalNoteName                              InStartingMusicalNote;
	uint8                                         Pad_5[0x3];
	int32                                         InStartingOctave;
	int32                                         InAttackTimeMsec;
	int32                                         InReleaseTimeMsec;
	uint8                                         Pad_14[0x4];
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings");
static_assert(sizeof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings) == 0x000028, "Wrong size on AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, InNumSemitones) == 0x000000, "Member 'AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings::InNumSemitones' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, InStartingMusicalNote) == 0x000004, "Member 'AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings::InStartingMusicalNote' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, InStartingOctave) == 0x000008, "Member 'AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings::InStartingOctave' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, InAttackTimeMsec) == 0x00000C, "Member 'AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings::InAttackTimeMsec' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, InReleaseTimeMsec) == 0x000010, "Member 'AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings::InReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings, ReturnValue) == 0x000018, "Member 'AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings final
{
public:
	EAudioSpectrumBandPresetType                  InBandPresetType;
	uint8                                         Pad_1[0x3];
	int32                                         InNumBands;
	int32                                         InAttackTimeMsec;
	int32                                         InReleaseTimeMsec;
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings");
static_assert(sizeof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings, InBandPresetType) == 0x000000, "Member 'AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings::InBandPresetType' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings, InNumBands) == 0x000004, "Member 'AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings::InNumBands' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings, InAttackTimeMsec) == 0x000008, "Member 'AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings::InAttackTimeMsec' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings, InReleaseTimeMsec) == 0x00000C, "Member 'AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings::InReleaseTimeMsec' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings, ReturnValue) == 0x000010, "Member 'AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_PauseRecordingOutput final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SubmixToPause;
};
static_assert(alignof(AudioMixerBlueprintLibrary_PauseRecordingOutput) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_PauseRecordingOutput");
static_assert(sizeof(AudioMixerBlueprintLibrary_PauseRecordingOutput) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_PauseRecordingOutput");
static_assert(offsetof(AudioMixerBlueprintLibrary_PauseRecordingOutput, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_PauseRecordingOutput::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_PauseRecordingOutput, SubmixToPause) == 0x000008, "Member 'AudioMixerBlueprintLibrary_PauseRecordingOutput::SubmixToPause' has a wrong offset!");

struct AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback final
{
public:
	class USoundCue*                              SoundCue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback");
static_assert(sizeof(AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback) == 0x000008, "Wrong size on AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback");
static_assert(offsetof(AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback, SoundCue) == 0x000000, "Member 'AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback::SoundCue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_PrimeSoundForPlayback final
{
public:
	class USoundWave*                             SoundWave;
	TDelegate<void(class USoundWave* LoadedSoundWave, bool WasCancelled)> OnLoadCompletion;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_PrimeSoundForPlayback) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_PrimeSoundForPlayback");
static_assert(sizeof(AudioMixerBlueprintLibrary_PrimeSoundForPlayback) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_PrimeSoundForPlayback");
static_assert(offsetof(AudioMixerBlueprintLibrary_PrimeSoundForPlayback, SoundWave) == 0x000000, "Member 'AudioMixerBlueprintLibrary_PrimeSoundForPlayback::SoundWave' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_PrimeSoundForPlayback, OnLoadCompletion) == 0x000008, "Member 'AudioMixerBlueprintLibrary_PrimeSoundForPlayback::OnLoadCompletion' has a wrong offset!");

struct AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, SubmixEffectPreset) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect::SubmixEffectPreset' has a wrong offset!");

struct AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundEffectSourcePresetChain*          PresetChain;
	int32                                         EntryIndex;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, EntryIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain::EntryIndex' has a wrong offset!");

struct AudioMixerBlueprintLibrary_RemoveSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveSubmixEffect) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_RemoveSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffect, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffect::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffect, SubmixEffectPreset) == 0x000010, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffect::SubmixEffectPreset' has a wrong offset!");

struct AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	int32                                         SubmixChainIndex;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex, SubmixChainIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex::SubmixChainIndex' has a wrong offset!");

struct AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset, SubmixEffectPreset) == 0x000010, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset::SubmixEffectPreset' has a wrong offset!");

struct AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	int32                                         SubmixChainIndex;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex, SubmixChainIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex::SubmixChainIndex' has a wrong offset!");

struct AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           InSoundSubmix;
	int32                                         SubmixChainIndex;
	uint8                                         Pad_14[0x4];
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
};
static_assert(alignof(AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix");
static_assert(sizeof(AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix, InSoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix::InSoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix, SubmixChainIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix::SubmixChainIndex' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix, SubmixEffectPreset) == 0x000018, "Member 'AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix::SubmixEffectPreset' has a wrong offset!");

struct AudioMixerBlueprintLibrary_ReplaceSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           InSoundSubmix;
	int32                                         SubmixChainIndex;
	uint8                                         Pad_14[0x4];
	class USoundEffectSubmixPreset*               SubmixEffectPreset;
};
static_assert(alignof(AudioMixerBlueprintLibrary_ReplaceSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ReplaceSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_ReplaceSubmixEffect) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_ReplaceSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ReplaceSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSubmixEffect, InSoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_ReplaceSubmixEffect::InSoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSubmixEffect, SubmixChainIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_ReplaceSubmixEffect::SubmixChainIndex' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ReplaceSubmixEffect, SubmixEffectPreset) == 0x000018, "Member 'AudioMixerBlueprintLibrary_ReplaceSubmixEffect::SubmixEffectPreset' has a wrong offset!");

struct AudioMixerBlueprintLibrary_ResumeRecordingOutput final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SubmixToPause;
};
static_assert(alignof(AudioMixerBlueprintLibrary_ResumeRecordingOutput) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ResumeRecordingOutput");
static_assert(sizeof(AudioMixerBlueprintLibrary_ResumeRecordingOutput) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_ResumeRecordingOutput");
static_assert(offsetof(AudioMixerBlueprintLibrary_ResumeRecordingOutput, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ResumeRecordingOutput::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_ResumeRecordingOutput, SubmixToPause) == 0x000008, "Member 'AudioMixerBlueprintLibrary_ResumeRecordingOutput::SubmixToPause' has a wrong offset!");

struct AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundEffectSourcePresetChain*          PresetChain;
	int32                                         EntryIndex;
	bool                                          bBypassed;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry");
static_assert(sizeof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, EntryIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::EntryIndex' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, bBypassed) == 0x000014, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::bBypassed' has a wrong offset!");

struct AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SoundSubmix;
	TArray<class USoundEffectSubmixPreset*>       SubmixEffectPresetChain;
	float                                         FadeTimeSec;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride");
static_assert(sizeof(AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride) == 0x000028, "Wrong size on AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride, SoundSubmix) == 0x000008, "Member 'AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride::SoundSubmix' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride, SubmixEffectPresetChain) == 0x000010, "Member 'AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride::SubmixEffectPresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride, FadeTimeSec) == 0x000020, "Member 'AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride::FadeTimeSec' has a wrong offset!");

struct AudioMixerBlueprintLibrary_StartAnalyzingOutput final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SubmixToAnalyze;
	EFFTSize                                      FFTSize;
	EFFTPeakInterpolationMethod                   InterpolationMethod;
	EFFTWindowType                                WindowType;
	uint8                                         Pad_13[0x1];
	float                                         HopSize;
	EAudioSpectrumType                            SpectrumType;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(AudioMixerBlueprintLibrary_StartAnalyzingOutput) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_StartAnalyzingOutput");
static_assert(sizeof(AudioMixerBlueprintLibrary_StartAnalyzingOutput) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_StartAnalyzingOutput");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, SubmixToAnalyze) == 0x000008, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::SubmixToAnalyze' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, FFTSize) == 0x000010, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::FFTSize' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, InterpolationMethod) == 0x000011, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::InterpolationMethod' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, WindowType) == 0x000012, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::WindowType' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, HopSize) == 0x000014, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::HopSize' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAnalyzingOutput, SpectrumType) == 0x000018, "Member 'AudioMixerBlueprintLibrary_StartAnalyzingOutput::SpectrumType' has a wrong offset!");

struct AudioMixerBlueprintLibrary_StartAudioBus final
{
public:
	const class UObject*                          WorldContextObject;
	class UAudioBus*                              AudioBus;
};
static_assert(alignof(AudioMixerBlueprintLibrary_StartAudioBus) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_StartAudioBus");
static_assert(sizeof(AudioMixerBlueprintLibrary_StartAudioBus) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_StartAudioBus");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAudioBus, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_StartAudioBus::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartAudioBus, AudioBus) == 0x000008, "Member 'AudioMixerBlueprintLibrary_StartAudioBus::AudioBus' has a wrong offset!");

struct AudioMixerBlueprintLibrary_StartRecordingOutput final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ExpectedDuration;
	uint8                                         Pad_C[0x4];
	class USoundSubmix*                           SubmixToRecord;
};
static_assert(alignof(AudioMixerBlueprintLibrary_StartRecordingOutput) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_StartRecordingOutput");
static_assert(sizeof(AudioMixerBlueprintLibrary_StartRecordingOutput) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_StartRecordingOutput");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartRecordingOutput, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_StartRecordingOutput::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartRecordingOutput, ExpectedDuration) == 0x000008, "Member 'AudioMixerBlueprintLibrary_StartRecordingOutput::ExpectedDuration' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StartRecordingOutput, SubmixToRecord) == 0x000010, "Member 'AudioMixerBlueprintLibrary_StartRecordingOutput::SubmixToRecord' has a wrong offset!");

struct AudioMixerBlueprintLibrary_StopAnalyzingOutput final
{
public:
	const class UObject*                          WorldContextObject;
	class USoundSubmix*                           SubmixToStopAnalyzing;
};
static_assert(alignof(AudioMixerBlueprintLibrary_StopAnalyzingOutput) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_StopAnalyzingOutput");
static_assert(sizeof(AudioMixerBlueprintLibrary_StopAnalyzingOutput) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_StopAnalyzingOutput");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopAnalyzingOutput, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_StopAnalyzingOutput::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopAnalyzingOutput, SubmixToStopAnalyzing) == 0x000008, "Member 'AudioMixerBlueprintLibrary_StopAnalyzingOutput::SubmixToStopAnalyzing' has a wrong offset!");

struct AudioMixerBlueprintLibrary_StopAudioBus final
{
public:
	const class UObject*                          WorldContextObject;
	class UAudioBus*                              AudioBus;
};
static_assert(alignof(AudioMixerBlueprintLibrary_StopAudioBus) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_StopAudioBus");
static_assert(sizeof(AudioMixerBlueprintLibrary_StopAudioBus) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_StopAudioBus");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopAudioBus, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_StopAudioBus::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopAudioBus, AudioBus) == 0x000008, "Member 'AudioMixerBlueprintLibrary_StopAudioBus::AudioBus' has a wrong offset!");

struct AudioMixerBlueprintLibrary_StopRecordingOutput final
{
public:
	const class UObject*                          WorldContextObject;
	EAudioRecordingExportType                     ExportType;
	uint8                                         Pad_9[0x7];
	class FString                                 Name_0;
	class FString                                 Path;
	class USoundSubmix*                           SubmixToRecord;
	class USoundWave*                             ExistingSoundWaveToOverwrite;
	class USoundWave*                             ReturnValue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_StopRecordingOutput) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_StopRecordingOutput");
static_assert(sizeof(AudioMixerBlueprintLibrary_StopRecordingOutput) == 0x000048, "Wrong size on AudioMixerBlueprintLibrary_StopRecordingOutput");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, ExportType) == 0x000008, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::ExportType' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, Name_0) == 0x000010, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::Name_0' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, Path) == 0x000020, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::Path' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, SubmixToRecord) == 0x000030, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::SubmixToRecord' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, ExistingSoundWaveToOverwrite) == 0x000038, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::ExistingSoundWaveToOverwrite' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_StopRecordingOutput, ReturnValue) == 0x000040, "Member 'AudioMixerBlueprintLibrary_StopRecordingOutput::ReturnValue' has a wrong offset!");

struct AudioMixerBlueprintLibrary_SwapAudioOutputDevice final
{
public:
	const class UObject*                          WorldContextObject;
	class FString                                 NewDeviceId;
	TDelegate<void(struct FSwapAudioOutputResult& SwapResult)> OnCompletedDeviceSwap;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(AudioMixerBlueprintLibrary_SwapAudioOutputDevice) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_SwapAudioOutputDevice");
static_assert(sizeof(AudioMixerBlueprintLibrary_SwapAudioOutputDevice) == 0x000028, "Wrong size on AudioMixerBlueprintLibrary_SwapAudioOutputDevice");
static_assert(offsetof(AudioMixerBlueprintLibrary_SwapAudioOutputDevice, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_SwapAudioOutputDevice::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SwapAudioOutputDevice, NewDeviceId) == 0x000008, "Member 'AudioMixerBlueprintLibrary_SwapAudioOutputDevice::NewDeviceId' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SwapAudioOutputDevice, OnCompletedDeviceSwap) == 0x000018, "Member 'AudioMixerBlueprintLibrary_SwapAudioOutputDevice::OnCompletedDeviceSwap' has a wrong offset!");

struct AudioMixerBlueprintLibrary_TrimAudioCache final
{
public:
	float                                         InMegabytesToFree;
	float                                         ReturnValue;
};
static_assert(alignof(AudioMixerBlueprintLibrary_TrimAudioCache) == 0x000004, "Wrong alignment on AudioMixerBlueprintLibrary_TrimAudioCache");
static_assert(sizeof(AudioMixerBlueprintLibrary_TrimAudioCache) == 0x000008, "Wrong size on AudioMixerBlueprintLibrary_TrimAudioCache");
static_assert(offsetof(AudioMixerBlueprintLibrary_TrimAudioCache, InMegabytesToFree) == 0x000000, "Member 'AudioMixerBlueprintLibrary_TrimAudioCache::InMegabytesToFree' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_TrimAudioCache, ReturnValue) == 0x000004, "Member 'AudioMixerBlueprintLibrary_TrimAudioCache::ReturnValue' has a wrong offset!");

struct SynthComponent_GetModulators final
{
public:
	EModulationDestination                        Destination;
	uint8                                         Pad_1[0x7];
	TSet<class USoundModulatorBase*>              ReturnValue;
};
static_assert(alignof(SynthComponent_GetModulators) == 0x000008, "Wrong alignment on SynthComponent_GetModulators");
static_assert(sizeof(SynthComponent_GetModulators) == 0x000058, "Wrong size on SynthComponent_GetModulators");
static_assert(offsetof(SynthComponent_GetModulators, Destination) == 0x000000, "Member 'SynthComponent_GetModulators::Destination' has a wrong offset!");
static_assert(offsetof(SynthComponent_GetModulators, ReturnValue) == 0x000008, "Member 'SynthComponent_GetModulators::ReturnValue' has a wrong offset!");

struct SynthComponent_SetAudioBusSendPostEffect final
{
public:
	class UAudioBus*                              AudioBus;
	float                                         AudioBusSendLevel;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SynthComponent_SetAudioBusSendPostEffect) == 0x000008, "Wrong alignment on SynthComponent_SetAudioBusSendPostEffect");
static_assert(sizeof(SynthComponent_SetAudioBusSendPostEffect) == 0x000010, "Wrong size on SynthComponent_SetAudioBusSendPostEffect");
static_assert(offsetof(SynthComponent_SetAudioBusSendPostEffect, AudioBus) == 0x000000, "Member 'SynthComponent_SetAudioBusSendPostEffect::AudioBus' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetAudioBusSendPostEffect, AudioBusSendLevel) == 0x000008, "Member 'SynthComponent_SetAudioBusSendPostEffect::AudioBusSendLevel' has a wrong offset!");

struct SynthComponent_SetAudioBusSendPreEffect final
{
public:
	class UAudioBus*                              AudioBus;
	float                                         AudioBusSendLevel;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SynthComponent_SetAudioBusSendPreEffect) == 0x000008, "Wrong alignment on SynthComponent_SetAudioBusSendPreEffect");
static_assert(sizeof(SynthComponent_SetAudioBusSendPreEffect) == 0x000010, "Wrong size on SynthComponent_SetAudioBusSendPreEffect");
static_assert(offsetof(SynthComponent_SetAudioBusSendPreEffect, AudioBus) == 0x000000, "Member 'SynthComponent_SetAudioBusSendPreEffect::AudioBus' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetAudioBusSendPreEffect, AudioBusSendLevel) == 0x000008, "Member 'SynthComponent_SetAudioBusSendPreEffect::AudioBusSendLevel' has a wrong offset!");

struct SynthComponent_SetLowPassFilterEnabled final
{
public:
	bool                                          InLowPassFilterEnabled;
};
static_assert(alignof(SynthComponent_SetLowPassFilterEnabled) == 0x000001, "Wrong alignment on SynthComponent_SetLowPassFilterEnabled");
static_assert(sizeof(SynthComponent_SetLowPassFilterEnabled) == 0x000001, "Wrong size on SynthComponent_SetLowPassFilterEnabled");
static_assert(offsetof(SynthComponent_SetLowPassFilterEnabled, InLowPassFilterEnabled) == 0x000000, "Member 'SynthComponent_SetLowPassFilterEnabled::InLowPassFilterEnabled' has a wrong offset!");

struct SynthComponent_SetLowPassFilterFrequency final
{
public:
	float                                         InLowPassFilterFrequency;
};
static_assert(alignof(SynthComponent_SetLowPassFilterFrequency) == 0x000004, "Wrong alignment on SynthComponent_SetLowPassFilterFrequency");
static_assert(sizeof(SynthComponent_SetLowPassFilterFrequency) == 0x000004, "Wrong size on SynthComponent_SetLowPassFilterFrequency");
static_assert(offsetof(SynthComponent_SetLowPassFilterFrequency, InLowPassFilterFrequency) == 0x000000, "Member 'SynthComponent_SetLowPassFilterFrequency::InLowPassFilterFrequency' has a wrong offset!");

struct SynthComponent_SetModulationRouting final
{
public:
	TSet<class USoundModulatorBase*>              Modulators;
	EModulationDestination                        Destination;
	EModulationRouting                            RoutingMethod;
	uint8                                         Pad_52[0x6];
};
static_assert(alignof(SynthComponent_SetModulationRouting) == 0x000008, "Wrong alignment on SynthComponent_SetModulationRouting");
static_assert(sizeof(SynthComponent_SetModulationRouting) == 0x000058, "Wrong size on SynthComponent_SetModulationRouting");
static_assert(offsetof(SynthComponent_SetModulationRouting, Modulators) == 0x000000, "Member 'SynthComponent_SetModulationRouting::Modulators' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetModulationRouting, Destination) == 0x000050, "Member 'SynthComponent_SetModulationRouting::Destination' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetModulationRouting, RoutingMethod) == 0x000051, "Member 'SynthComponent_SetModulationRouting::RoutingMethod' has a wrong offset!");

struct SynthComponent_SetOutputToBusOnly final
{
public:
	bool                                          bInOutputToBusOnly;
};
static_assert(alignof(SynthComponent_SetOutputToBusOnly) == 0x000001, "Wrong alignment on SynthComponent_SetOutputToBusOnly");
static_assert(sizeof(SynthComponent_SetOutputToBusOnly) == 0x000001, "Wrong size on SynthComponent_SetOutputToBusOnly");
static_assert(offsetof(SynthComponent_SetOutputToBusOnly, bInOutputToBusOnly) == 0x000000, "Member 'SynthComponent_SetOutputToBusOnly::bInOutputToBusOnly' has a wrong offset!");

struct SynthComponent_SetSourceBusSendPostEffect final
{
public:
	class USoundSourceBus*                        SoundSourceBus;
	float                                         SourceBusSendLevel;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SynthComponent_SetSourceBusSendPostEffect) == 0x000008, "Wrong alignment on SynthComponent_SetSourceBusSendPostEffect");
static_assert(sizeof(SynthComponent_SetSourceBusSendPostEffect) == 0x000010, "Wrong size on SynthComponent_SetSourceBusSendPostEffect");
static_assert(offsetof(SynthComponent_SetSourceBusSendPostEffect, SoundSourceBus) == 0x000000, "Member 'SynthComponent_SetSourceBusSendPostEffect::SoundSourceBus' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetSourceBusSendPostEffect, SourceBusSendLevel) == 0x000008, "Member 'SynthComponent_SetSourceBusSendPostEffect::SourceBusSendLevel' has a wrong offset!");

struct SynthComponent_SetSourceBusSendPreEffect final
{
public:
	class USoundSourceBus*                        SoundSourceBus;
	float                                         SourceBusSendLevel;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SynthComponent_SetSourceBusSendPreEffect) == 0x000008, "Wrong alignment on SynthComponent_SetSourceBusSendPreEffect");
static_assert(sizeof(SynthComponent_SetSourceBusSendPreEffect) == 0x000010, "Wrong size on SynthComponent_SetSourceBusSendPreEffect");
static_assert(offsetof(SynthComponent_SetSourceBusSendPreEffect, SoundSourceBus) == 0x000000, "Member 'SynthComponent_SetSourceBusSendPreEffect::SoundSourceBus' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetSourceBusSendPreEffect, SourceBusSendLevel) == 0x000008, "Member 'SynthComponent_SetSourceBusSendPreEffect::SourceBusSendLevel' has a wrong offset!");

struct SynthComponent_SetSubmixSend final
{
public:
	class USoundSubmixBase*                       Submix;
	float                                         SendLevel;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SynthComponent_SetSubmixSend) == 0x000008, "Wrong alignment on SynthComponent_SetSubmixSend");
static_assert(sizeof(SynthComponent_SetSubmixSend) == 0x000010, "Wrong size on SynthComponent_SetSubmixSend");
static_assert(offsetof(SynthComponent_SetSubmixSend, Submix) == 0x000000, "Member 'SynthComponent_SetSubmixSend::Submix' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetSubmixSend, SendLevel) == 0x000008, "Member 'SynthComponent_SetSubmixSend::SendLevel' has a wrong offset!");

struct SynthComponent_SetVolumeMultiplier final
{
public:
	float                                         VolumeMultiplier;
};
static_assert(alignof(SynthComponent_SetVolumeMultiplier) == 0x000004, "Wrong alignment on SynthComponent_SetVolumeMultiplier");
static_assert(sizeof(SynthComponent_SetVolumeMultiplier) == 0x000004, "Wrong size on SynthComponent_SetVolumeMultiplier");
static_assert(offsetof(SynthComponent_SetVolumeMultiplier, VolumeMultiplier) == 0x000000, "Member 'SynthComponent_SetVolumeMultiplier::VolumeMultiplier' has a wrong offset!");

struct SynthComponent_AdjustVolume final
{
public:
	float                                         AdjustVolumeDuration;
	float                                         AdjustVolumeLevel;
	EAudioFaderCurve                              FadeCurve;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(SynthComponent_AdjustVolume) == 0x000004, "Wrong alignment on SynthComponent_AdjustVolume");
static_assert(sizeof(SynthComponent_AdjustVolume) == 0x00000C, "Wrong size on SynthComponent_AdjustVolume");
static_assert(offsetof(SynthComponent_AdjustVolume, AdjustVolumeDuration) == 0x000000, "Member 'SynthComponent_AdjustVolume::AdjustVolumeDuration' has a wrong offset!");
static_assert(offsetof(SynthComponent_AdjustVolume, AdjustVolumeLevel) == 0x000004, "Member 'SynthComponent_AdjustVolume::AdjustVolumeLevel' has a wrong offset!");
static_assert(offsetof(SynthComponent_AdjustVolume, FadeCurve) == 0x000008, "Member 'SynthComponent_AdjustVolume::FadeCurve' has a wrong offset!");

struct SynthComponent_FadeIn final
{
public:
	float                                         FadeInDuration;
	float                                         FadeVolumeLevel;
	float                                         StartTime;
	EAudioFaderCurve                              FadeCurve;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(SynthComponent_FadeIn) == 0x000004, "Wrong alignment on SynthComponent_FadeIn");
static_assert(sizeof(SynthComponent_FadeIn) == 0x000010, "Wrong size on SynthComponent_FadeIn");
static_assert(offsetof(SynthComponent_FadeIn, FadeInDuration) == 0x000000, "Member 'SynthComponent_FadeIn::FadeInDuration' has a wrong offset!");
static_assert(offsetof(SynthComponent_FadeIn, FadeVolumeLevel) == 0x000004, "Member 'SynthComponent_FadeIn::FadeVolumeLevel' has a wrong offset!");
static_assert(offsetof(SynthComponent_FadeIn, StartTime) == 0x000008, "Member 'SynthComponent_FadeIn::StartTime' has a wrong offset!");
static_assert(offsetof(SynthComponent_FadeIn, FadeCurve) == 0x00000C, "Member 'SynthComponent_FadeIn::FadeCurve' has a wrong offset!");

struct SynthComponent_FadeOut final
{
public:
	float                                         FadeOutDuration;
	float                                         FadeVolumeLevel;
	EAudioFaderCurve                              FadeCurve;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(SynthComponent_FadeOut) == 0x000004, "Wrong alignment on SynthComponent_FadeOut");
static_assert(sizeof(SynthComponent_FadeOut) == 0x00000C, "Wrong size on SynthComponent_FadeOut");
static_assert(offsetof(SynthComponent_FadeOut, FadeOutDuration) == 0x000000, "Member 'SynthComponent_FadeOut::FadeOutDuration' has a wrong offset!");
static_assert(offsetof(SynthComponent_FadeOut, FadeVolumeLevel) == 0x000004, "Member 'SynthComponent_FadeOut::FadeVolumeLevel' has a wrong offset!");
static_assert(offsetof(SynthComponent_FadeOut, FadeCurve) == 0x000008, "Member 'SynthComponent_FadeOut::FadeCurve' has a wrong offset!");

struct SynthComponent_IsPlaying final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SynthComponent_IsPlaying) == 0x000001, "Wrong alignment on SynthComponent_IsPlaying");
static_assert(sizeof(SynthComponent_IsPlaying) == 0x000001, "Wrong size on SynthComponent_IsPlaying");
static_assert(offsetof(SynthComponent_IsPlaying, ReturnValue) == 0x000000, "Member 'SynthComponent_IsPlaying::ReturnValue' has a wrong offset!");

struct SubmixEffectSubmixEQPreset_SetSettings final
{
public:
	struct FSubmixEffectSubmixEQSettings          InSettings;
};
static_assert(alignof(SubmixEffectSubmixEQPreset_SetSettings) == 0x000008, "Wrong alignment on SubmixEffectSubmixEQPreset_SetSettings");
static_assert(sizeof(SubmixEffectSubmixEQPreset_SetSettings) == 0x000010, "Wrong size on SubmixEffectSubmixEQPreset_SetSettings");
static_assert(offsetof(SubmixEffectSubmixEQPreset_SetSettings, InSettings) == 0x000000, "Member 'SubmixEffectSubmixEQPreset_SetSettings::InSettings' has a wrong offset!");

struct SubmixEffectReverbPreset_SetSettings final
{
public:
	struct FSubmixEffectReverbSettings            InSettings;
};
static_assert(alignof(SubmixEffectReverbPreset_SetSettings) == 0x000004, "Wrong alignment on SubmixEffectReverbPreset_SetSettings");
static_assert(sizeof(SubmixEffectReverbPreset_SetSettings) == 0x000040, "Wrong size on SubmixEffectReverbPreset_SetSettings");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettings, InSettings) == 0x000000, "Member 'SubmixEffectReverbPreset_SetSettings::InSettings' has a wrong offset!");

struct SubmixEffectReverbPreset_SetSettingsWithReverbEffect final
{
public:
	const class UReverbEffect*                    InReverbEffect;
	float                                         WetLevel;
	float                                         DryLevel;
};
static_assert(alignof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect) == 0x000008, "Wrong alignment on SubmixEffectReverbPreset_SetSettingsWithReverbEffect");
static_assert(sizeof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect) == 0x000010, "Wrong size on SubmixEffectReverbPreset_SetSettingsWithReverbEffect");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect, InReverbEffect) == 0x000000, "Member 'SubmixEffectReverbPreset_SetSettingsWithReverbEffect::InReverbEffect' has a wrong offset!");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect, WetLevel) == 0x000008, "Member 'SubmixEffectReverbPreset_SetSettingsWithReverbEffect::WetLevel' has a wrong offset!");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect, DryLevel) == 0x00000C, "Member 'SubmixEffectReverbPreset_SetSettingsWithReverbEffect::DryLevel' has a wrong offset!");

struct QuartzClockHandle_GetCurrentTimestamp final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzTransportTimeStamp              ReturnValue;
};
static_assert(alignof(QuartzClockHandle_GetCurrentTimestamp) == 0x000008, "Wrong alignment on QuartzClockHandle_GetCurrentTimestamp");
static_assert(sizeof(QuartzClockHandle_GetCurrentTimestamp) == 0x000018, "Wrong size on QuartzClockHandle_GetCurrentTimestamp");
static_assert(offsetof(QuartzClockHandle_GetCurrentTimestamp, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetCurrentTimestamp::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetCurrentTimestamp, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetCurrentTimestamp::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds final
{
public:
	const class UObject*                          WorldContextObject;
	EQuartzCommandQuantization                    QuantizationType;
	uint8                                         Pad_9[0x3];
	float                                         Multiplier;
	float                                         ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds) == 0x000008, "Wrong alignment on QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds");
static_assert(sizeof(QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds) == 0x000018, "Wrong size on QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds");
static_assert(offsetof(QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds, QuantizationType) == 0x000008, "Member 'QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds::QuantizationType' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds, Multiplier) == 0x00000C, "Member 'QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds::Multiplier' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds, ReturnValue) == 0x000010, "Member 'QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_GetEstimatedRunTime final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzClockHandle_GetEstimatedRunTime) == 0x000008, "Wrong alignment on QuartzClockHandle_GetEstimatedRunTime");
static_assert(sizeof(QuartzClockHandle_GetEstimatedRunTime) == 0x000010, "Wrong size on QuartzClockHandle_GetEstimatedRunTime");
static_assert(offsetof(QuartzClockHandle_GetEstimatedRunTime, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetEstimatedRunTime::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetEstimatedRunTime, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetEstimatedRunTime::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_IsClockRunning final
{
public:
	const class UObject*                          WorldContextObject;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(QuartzClockHandle_IsClockRunning) == 0x000008, "Wrong alignment on QuartzClockHandle_IsClockRunning");
static_assert(sizeof(QuartzClockHandle_IsClockRunning) == 0x000010, "Wrong size on QuartzClockHandle_IsClockRunning");
static_assert(offsetof(QuartzClockHandle_IsClockRunning, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_IsClockRunning::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_IsClockRunning, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_IsClockRunning::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_PauseClock final
{
public:
	const class UObject*                          WorldContextObject;
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_PauseClock) == 0x000008, "Wrong alignment on QuartzClockHandle_PauseClock");
static_assert(sizeof(QuartzClockHandle_PauseClock) == 0x000010, "Wrong size on QuartzClockHandle_PauseClock");
static_assert(offsetof(QuartzClockHandle_PauseClock, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_PauseClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_PauseClock, ClockHandle) == 0x000008, "Member 'QuartzClockHandle_PauseClock::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_ResetTransport final
{
public:
	const class UObject*                          WorldContextObject;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> InDelegate;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(QuartzClockHandle_ResetTransport) == 0x000008, "Wrong alignment on QuartzClockHandle_ResetTransport");
static_assert(sizeof(QuartzClockHandle_ResetTransport) == 0x000018, "Wrong size on QuartzClockHandle_ResetTransport");
static_assert(offsetof(QuartzClockHandle_ResetTransport, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_ResetTransport::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_ResetTransport, InDelegate) == 0x000008, "Member 'QuartzClockHandle_ResetTransport::InDelegate' has a wrong offset!");

struct QuartzClockHandle_ResetTransportQuantized final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzQuantizationBoundary            InQuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> InDelegate;
	uint8                                         Pad_34[0x4];
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_ResetTransportQuantized) == 0x000008, "Wrong alignment on QuartzClockHandle_ResetTransportQuantized");
static_assert(sizeof(QuartzClockHandle_ResetTransportQuantized) == 0x000040, "Wrong size on QuartzClockHandle_ResetTransportQuantized");
static_assert(offsetof(QuartzClockHandle_ResetTransportQuantized, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_ResetTransportQuantized::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_ResetTransportQuantized, InQuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_ResetTransportQuantized::InQuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_ResetTransportQuantized, InDelegate) == 0x000028, "Member 'QuartzClockHandle_ResetTransportQuantized::InDelegate' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_ResetTransportQuantized, ClockHandle) == 0x000038, "Member 'QuartzClockHandle_ResetTransportQuantized::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_ResumeClock final
{
public:
	const class UObject*                          WorldContextObject;
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_ResumeClock) == 0x000008, "Wrong alignment on QuartzClockHandle_ResumeClock");
static_assert(sizeof(QuartzClockHandle_ResumeClock) == 0x000010, "Wrong size on QuartzClockHandle_ResumeClock");
static_assert(offsetof(QuartzClockHandle_ResumeClock, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_ResumeClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_ResumeClock, ClockHandle) == 0x000008, "Member 'QuartzClockHandle_ResumeClock::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_SetBeatsPerMinute final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzQuantizationBoundary            QuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Delegate;
	uint8                                         Pad_34[0x4];
	class UQuartzClockHandle*                     ClockHandle;
	float                                         BeatsPerMinute;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(QuartzClockHandle_SetBeatsPerMinute) == 0x000008, "Wrong alignment on QuartzClockHandle_SetBeatsPerMinute");
static_assert(sizeof(QuartzClockHandle_SetBeatsPerMinute) == 0x000048, "Wrong size on QuartzClockHandle_SetBeatsPerMinute");
static_assert(offsetof(QuartzClockHandle_SetBeatsPerMinute, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SetBeatsPerMinute::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetBeatsPerMinute, QuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_SetBeatsPerMinute::QuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetBeatsPerMinute, Delegate) == 0x000028, "Member 'QuartzClockHandle_SetBeatsPerMinute::Delegate' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetBeatsPerMinute, ClockHandle) == 0x000038, "Member 'QuartzClockHandle_SetBeatsPerMinute::ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetBeatsPerMinute, BeatsPerMinute) == 0x000040, "Member 'QuartzClockHandle_SetBeatsPerMinute::BeatsPerMinute' has a wrong offset!");

struct QuartzClockHandle_SetMillisecondsPerTick final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzQuantizationBoundary            QuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Delegate;
	uint8                                         Pad_34[0x4];
	class UQuartzClockHandle*                     ClockHandle;
	float                                         MillisecondsPerTick;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(QuartzClockHandle_SetMillisecondsPerTick) == 0x000008, "Wrong alignment on QuartzClockHandle_SetMillisecondsPerTick");
static_assert(sizeof(QuartzClockHandle_SetMillisecondsPerTick) == 0x000048, "Wrong size on QuartzClockHandle_SetMillisecondsPerTick");
static_assert(offsetof(QuartzClockHandle_SetMillisecondsPerTick, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SetMillisecondsPerTick::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetMillisecondsPerTick, QuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_SetMillisecondsPerTick::QuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetMillisecondsPerTick, Delegate) == 0x000028, "Member 'QuartzClockHandle_SetMillisecondsPerTick::Delegate' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetMillisecondsPerTick, ClockHandle) == 0x000038, "Member 'QuartzClockHandle_SetMillisecondsPerTick::ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetMillisecondsPerTick, MillisecondsPerTick) == 0x000040, "Member 'QuartzClockHandle_SetMillisecondsPerTick::MillisecondsPerTick' has a wrong offset!");

struct QuartzClockHandle_SetSecondsPerTick final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzQuantizationBoundary            QuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Delegate;
	uint8                                         Pad_34[0x4];
	class UQuartzClockHandle*                     ClockHandle;
	float                                         SecondsPerTick;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(QuartzClockHandle_SetSecondsPerTick) == 0x000008, "Wrong alignment on QuartzClockHandle_SetSecondsPerTick");
static_assert(sizeof(QuartzClockHandle_SetSecondsPerTick) == 0x000048, "Wrong size on QuartzClockHandle_SetSecondsPerTick");
static_assert(offsetof(QuartzClockHandle_SetSecondsPerTick, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SetSecondsPerTick::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetSecondsPerTick, QuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_SetSecondsPerTick::QuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetSecondsPerTick, Delegate) == 0x000028, "Member 'QuartzClockHandle_SetSecondsPerTick::Delegate' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetSecondsPerTick, ClockHandle) == 0x000038, "Member 'QuartzClockHandle_SetSecondsPerTick::ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetSecondsPerTick, SecondsPerTick) == 0x000040, "Member 'QuartzClockHandle_SetSecondsPerTick::SecondsPerTick' has a wrong offset!");

struct QuartzClockHandle_SetThirtySecondNotesPerMinute final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzQuantizationBoundary            QuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Delegate;
	uint8                                         Pad_34[0x4];
	class UQuartzClockHandle*                     ClockHandle;
	float                                         ThirtySecondsNotesPerMinute;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(QuartzClockHandle_SetThirtySecondNotesPerMinute) == 0x000008, "Wrong alignment on QuartzClockHandle_SetThirtySecondNotesPerMinute");
static_assert(sizeof(QuartzClockHandle_SetThirtySecondNotesPerMinute) == 0x000048, "Wrong size on QuartzClockHandle_SetThirtySecondNotesPerMinute");
static_assert(offsetof(QuartzClockHandle_SetThirtySecondNotesPerMinute, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SetThirtySecondNotesPerMinute::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetThirtySecondNotesPerMinute, QuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_SetThirtySecondNotesPerMinute::QuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetThirtySecondNotesPerMinute, Delegate) == 0x000028, "Member 'QuartzClockHandle_SetThirtySecondNotesPerMinute::Delegate' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetThirtySecondNotesPerMinute, ClockHandle) == 0x000038, "Member 'QuartzClockHandle_SetThirtySecondNotesPerMinute::ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetThirtySecondNotesPerMinute, ThirtySecondsNotesPerMinute) == 0x000040, "Member 'QuartzClockHandle_SetThirtySecondNotesPerMinute::ThirtySecondsNotesPerMinute' has a wrong offset!");

struct QuartzClockHandle_SetTicksPerSecond final
{
public:
	const class UObject*                          WorldContextObject;
	struct FQuartzQuantizationBoundary            QuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Delegate;
	uint8                                         Pad_34[0x4];
	class UQuartzClockHandle*                     ClockHandle;
	float                                         TicksPerSecond;
	uint8                                         Pad_44[0x4];
};
static_assert(alignof(QuartzClockHandle_SetTicksPerSecond) == 0x000008, "Wrong alignment on QuartzClockHandle_SetTicksPerSecond");
static_assert(sizeof(QuartzClockHandle_SetTicksPerSecond) == 0x000048, "Wrong size on QuartzClockHandle_SetTicksPerSecond");
static_assert(offsetof(QuartzClockHandle_SetTicksPerSecond, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SetTicksPerSecond::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetTicksPerSecond, QuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_SetTicksPerSecond::QuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetTicksPerSecond, Delegate) == 0x000028, "Member 'QuartzClockHandle_SetTicksPerSecond::Delegate' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetTicksPerSecond, ClockHandle) == 0x000038, "Member 'QuartzClockHandle_SetTicksPerSecond::ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SetTicksPerSecond, TicksPerSecond) == 0x000040, "Member 'QuartzClockHandle_SetTicksPerSecond::TicksPerSecond' has a wrong offset!");

struct QuartzClockHandle_StartClock final
{
public:
	const class UObject*                          WorldContextObject;
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_StartClock) == 0x000008, "Wrong alignment on QuartzClockHandle_StartClock");
static_assert(sizeof(QuartzClockHandle_StartClock) == 0x000010, "Wrong size on QuartzClockHandle_StartClock");
static_assert(offsetof(QuartzClockHandle_StartClock, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_StartClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_StartClock, ClockHandle) == 0x000008, "Member 'QuartzClockHandle_StartClock::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_StartOtherClock final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   OtherClockName;
	uint8                                         Pad_C[0x4];
	struct FQuartzQuantizationBoundary            InQuantizationBoundary;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> InDelegate;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(QuartzClockHandle_StartOtherClock) == 0x000008, "Wrong alignment on QuartzClockHandle_StartOtherClock");
static_assert(sizeof(QuartzClockHandle_StartOtherClock) == 0x000040, "Wrong size on QuartzClockHandle_StartOtherClock");
static_assert(offsetof(QuartzClockHandle_StartOtherClock, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_StartOtherClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_StartOtherClock, OtherClockName) == 0x000008, "Member 'QuartzClockHandle_StartOtherClock::OtherClockName' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_StartOtherClock, InQuantizationBoundary) == 0x000010, "Member 'QuartzClockHandle_StartOtherClock::InQuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_StartOtherClock, InDelegate) == 0x000030, "Member 'QuartzClockHandle_StartOtherClock::InDelegate' has a wrong offset!");

struct QuartzClockHandle_StopClock final
{
public:
	const class UObject*                          WorldContextObject;
	bool                                          CancelPendingEvents;
	uint8                                         Pad_9[0x7];
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_StopClock) == 0x000008, "Wrong alignment on QuartzClockHandle_StopClock");
static_assert(sizeof(QuartzClockHandle_StopClock) == 0x000018, "Wrong size on QuartzClockHandle_StopClock");
static_assert(offsetof(QuartzClockHandle_StopClock, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_StopClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_StopClock, CancelPendingEvents) == 0x000008, "Member 'QuartzClockHandle_StopClock::CancelPendingEvents' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_StopClock, ClockHandle) == 0x000010, "Member 'QuartzClockHandle_StopClock::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_SubscribeToAllQuantizationEvents final
{
public:
	const class UObject*                          WorldContextObject;
	TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)> OnQuantizationEvent;
	uint8                                         Pad_14[0x4];
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_SubscribeToAllQuantizationEvents) == 0x000008, "Wrong alignment on QuartzClockHandle_SubscribeToAllQuantizationEvents");
static_assert(sizeof(QuartzClockHandle_SubscribeToAllQuantizationEvents) == 0x000020, "Wrong size on QuartzClockHandle_SubscribeToAllQuantizationEvents");
static_assert(offsetof(QuartzClockHandle_SubscribeToAllQuantizationEvents, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SubscribeToAllQuantizationEvents::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SubscribeToAllQuantizationEvents, OnQuantizationEvent) == 0x000008, "Member 'QuartzClockHandle_SubscribeToAllQuantizationEvents::OnQuantizationEvent' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SubscribeToAllQuantizationEvents, ClockHandle) == 0x000018, "Member 'QuartzClockHandle_SubscribeToAllQuantizationEvents::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_SubscribeToQuantizationEvent final
{
public:
	const class UObject*                          WorldContextObject;
	EQuartzCommandQuantization                    InQuantizationBoundary;
	uint8                                         Pad_9[0x3];
	TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)> OnQuantizationEvent;
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_SubscribeToQuantizationEvent) == 0x000008, "Wrong alignment on QuartzClockHandle_SubscribeToQuantizationEvent");
static_assert(sizeof(QuartzClockHandle_SubscribeToQuantizationEvent) == 0x000020, "Wrong size on QuartzClockHandle_SubscribeToQuantizationEvent");
static_assert(offsetof(QuartzClockHandle_SubscribeToQuantizationEvent, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_SubscribeToQuantizationEvent::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SubscribeToQuantizationEvent, InQuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_SubscribeToQuantizationEvent::InQuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SubscribeToQuantizationEvent, OnQuantizationEvent) == 0x00000C, "Member 'QuartzClockHandle_SubscribeToQuantizationEvent::OnQuantizationEvent' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_SubscribeToQuantizationEvent, ClockHandle) == 0x000018, "Member 'QuartzClockHandle_SubscribeToQuantizationEvent::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_UnsubscribeFromAllTimeDivisions final
{
public:
	const class UObject*                          WorldContextObject;
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_UnsubscribeFromAllTimeDivisions) == 0x000008, "Wrong alignment on QuartzClockHandle_UnsubscribeFromAllTimeDivisions");
static_assert(sizeof(QuartzClockHandle_UnsubscribeFromAllTimeDivisions) == 0x000010, "Wrong size on QuartzClockHandle_UnsubscribeFromAllTimeDivisions");
static_assert(offsetof(QuartzClockHandle_UnsubscribeFromAllTimeDivisions, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_UnsubscribeFromAllTimeDivisions::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_UnsubscribeFromAllTimeDivisions, ClockHandle) == 0x000008, "Member 'QuartzClockHandle_UnsubscribeFromAllTimeDivisions::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_UnsubscribeFromTimeDivision final
{
public:
	const class UObject*                          WorldContextObject;
	EQuartzCommandQuantization                    InQuantizationBoundary;
	uint8                                         Pad_9[0x7];
	class UQuartzClockHandle*                     ClockHandle;
};
static_assert(alignof(QuartzClockHandle_UnsubscribeFromTimeDivision) == 0x000008, "Wrong alignment on QuartzClockHandle_UnsubscribeFromTimeDivision");
static_assert(sizeof(QuartzClockHandle_UnsubscribeFromTimeDivision) == 0x000018, "Wrong size on QuartzClockHandle_UnsubscribeFromTimeDivision");
static_assert(offsetof(QuartzClockHandle_UnsubscribeFromTimeDivision, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_UnsubscribeFromTimeDivision::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_UnsubscribeFromTimeDivision, InQuantizationBoundary) == 0x000008, "Member 'QuartzClockHandle_UnsubscribeFromTimeDivision::InQuantizationBoundary' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_UnsubscribeFromTimeDivision, ClockHandle) == 0x000010, "Member 'QuartzClockHandle_UnsubscribeFromTimeDivision::ClockHandle' has a wrong offset!");

struct QuartzClockHandle_GetBeatsPerMinute final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzClockHandle_GetBeatsPerMinute) == 0x000008, "Wrong alignment on QuartzClockHandle_GetBeatsPerMinute");
static_assert(sizeof(QuartzClockHandle_GetBeatsPerMinute) == 0x000010, "Wrong size on QuartzClockHandle_GetBeatsPerMinute");
static_assert(offsetof(QuartzClockHandle_GetBeatsPerMinute, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetBeatsPerMinute::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetBeatsPerMinute, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetBeatsPerMinute::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_GetMillisecondsPerTick final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzClockHandle_GetMillisecondsPerTick) == 0x000008, "Wrong alignment on QuartzClockHandle_GetMillisecondsPerTick");
static_assert(sizeof(QuartzClockHandle_GetMillisecondsPerTick) == 0x000010, "Wrong size on QuartzClockHandle_GetMillisecondsPerTick");
static_assert(offsetof(QuartzClockHandle_GetMillisecondsPerTick, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetMillisecondsPerTick::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetMillisecondsPerTick, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetMillisecondsPerTick::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_GetSecondsPerTick final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzClockHandle_GetSecondsPerTick) == 0x000008, "Wrong alignment on QuartzClockHandle_GetSecondsPerTick");
static_assert(sizeof(QuartzClockHandle_GetSecondsPerTick) == 0x000010, "Wrong size on QuartzClockHandle_GetSecondsPerTick");
static_assert(offsetof(QuartzClockHandle_GetSecondsPerTick, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetSecondsPerTick::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetSecondsPerTick, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetSecondsPerTick::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_GetThirtySecondNotesPerMinute final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzClockHandle_GetThirtySecondNotesPerMinute) == 0x000008, "Wrong alignment on QuartzClockHandle_GetThirtySecondNotesPerMinute");
static_assert(sizeof(QuartzClockHandle_GetThirtySecondNotesPerMinute) == 0x000010, "Wrong size on QuartzClockHandle_GetThirtySecondNotesPerMinute");
static_assert(offsetof(QuartzClockHandle_GetThirtySecondNotesPerMinute, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetThirtySecondNotesPerMinute::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetThirtySecondNotesPerMinute, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetThirtySecondNotesPerMinute::ReturnValue' has a wrong offset!");

struct QuartzClockHandle_GetTicksPerSecond final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzClockHandle_GetTicksPerSecond) == 0x000008, "Wrong alignment on QuartzClockHandle_GetTicksPerSecond");
static_assert(sizeof(QuartzClockHandle_GetTicksPerSecond) == 0x000010, "Wrong size on QuartzClockHandle_GetTicksPerSecond");
static_assert(offsetof(QuartzClockHandle_GetTicksPerSecond, WorldContextObject) == 0x000000, "Member 'QuartzClockHandle_GetTicksPerSecond::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzClockHandle_GetTicksPerSecond, ReturnValue) == 0x000008, "Member 'QuartzClockHandle_GetTicksPerSecond::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_CreateNewClock final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   ClockName;
	uint8                                         Pad_C[0x4];
	struct FQuartzClockSettings                   InSettings;
	bool                                          bOverrideSettingsIfClockExists;
	bool                                          bUseAudioEngineClockManager;
	uint8                                         Pad_32[0x6];
	class UQuartzClockHandle*                     ReturnValue;
};
static_assert(alignof(QuartzSubsystem_CreateNewClock) == 0x000008, "Wrong alignment on QuartzSubsystem_CreateNewClock");
static_assert(sizeof(QuartzSubsystem_CreateNewClock) == 0x000040, "Wrong size on QuartzSubsystem_CreateNewClock");
static_assert(offsetof(QuartzSubsystem_CreateNewClock, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_CreateNewClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_CreateNewClock, ClockName) == 0x000008, "Member 'QuartzSubsystem_CreateNewClock::ClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_CreateNewClock, InSettings) == 0x000010, "Member 'QuartzSubsystem_CreateNewClock::InSettings' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_CreateNewClock, bOverrideSettingsIfClockExists) == 0x000030, "Member 'QuartzSubsystem_CreateNewClock::bOverrideSettingsIfClockExists' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_CreateNewClock, bUseAudioEngineClockManager) == 0x000031, "Member 'QuartzSubsystem_CreateNewClock::bUseAudioEngineClockManager' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_CreateNewClock, ReturnValue) == 0x000038, "Member 'QuartzSubsystem_CreateNewClock::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_DeleteClockByHandle final
{
public:
	const class UObject*                          WorldContextObject;
	class UQuartzClockHandle*                     InClockHandle;
};
static_assert(alignof(QuartzSubsystem_DeleteClockByHandle) == 0x000008, "Wrong alignment on QuartzSubsystem_DeleteClockByHandle");
static_assert(sizeof(QuartzSubsystem_DeleteClockByHandle) == 0x000010, "Wrong size on QuartzSubsystem_DeleteClockByHandle");
static_assert(offsetof(QuartzSubsystem_DeleteClockByHandle, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_DeleteClockByHandle::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_DeleteClockByHandle, InClockHandle) == 0x000008, "Member 'QuartzSubsystem_DeleteClockByHandle::InClockHandle' has a wrong offset!");

struct QuartzSubsystem_DeleteClockByName final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   ClockName;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_DeleteClockByName) == 0x000008, "Wrong alignment on QuartzSubsystem_DeleteClockByName");
static_assert(sizeof(QuartzSubsystem_DeleteClockByName) == 0x000010, "Wrong size on QuartzSubsystem_DeleteClockByName");
static_assert(offsetof(QuartzSubsystem_DeleteClockByName, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_DeleteClockByName::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_DeleteClockByName, ClockName) == 0x000008, "Member 'QuartzSubsystem_DeleteClockByName::ClockName' has a wrong offset!");

struct QuartzSubsystem_DoesClockExist final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   ClockName;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(QuartzSubsystem_DoesClockExist) == 0x000008, "Wrong alignment on QuartzSubsystem_DoesClockExist");
static_assert(sizeof(QuartzSubsystem_DoesClockExist) == 0x000010, "Wrong size on QuartzSubsystem_DoesClockExist");
static_assert(offsetof(QuartzSubsystem_DoesClockExist, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_DoesClockExist::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_DoesClockExist, ClockName) == 0x000008, "Member 'QuartzSubsystem_DoesClockExist::ClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_DoesClockExist, ReturnValue) == 0x00000C, "Member 'QuartzSubsystem_DoesClockExist::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency) == 0x000004, "Wrong alignment on QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency");
static_assert(sizeof(QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency) == 0x000004, "Wrong size on QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency");
static_assert(offsetof(QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency, ReturnValue) == 0x000000, "Member 'QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency) == 0x000004, "Wrong alignment on QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency");
static_assert(sizeof(QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency) == 0x000004, "Wrong size on QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency");
static_assert(offsetof(QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency, ReturnValue) == 0x000000, "Member 'QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency) == 0x000004, "Wrong alignment on QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency");
static_assert(sizeof(QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency) == 0x000004, "Wrong size on QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency");
static_assert(offsetof(QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency, ReturnValue) == 0x000000, "Member 'QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetCurrentClockTimestamp final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   InClockName;
	struct FQuartzTransportTimeStamp              ReturnValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetCurrentClockTimestamp) == 0x000008, "Wrong alignment on QuartzSubsystem_GetCurrentClockTimestamp");
static_assert(sizeof(QuartzSubsystem_GetCurrentClockTimestamp) == 0x000020, "Wrong size on QuartzSubsystem_GetCurrentClockTimestamp");
static_assert(offsetof(QuartzSubsystem_GetCurrentClockTimestamp, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetCurrentClockTimestamp::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetCurrentClockTimestamp, InClockName) == 0x000008, "Member 'QuartzSubsystem_GetCurrentClockTimestamp::InClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetCurrentClockTimestamp, ReturnValue) == 0x00000C, "Member 'QuartzSubsystem_GetCurrentClockTimestamp::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   ClockName;
	EQuartzCommandQuantization                    QuantizationType;
	uint8                                         Pad_D[0x3];
	float                                         Multiplier;
	float                                         ReturnValue;
};
static_assert(alignof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds) == 0x000008, "Wrong alignment on QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds");
static_assert(sizeof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds) == 0x000018, "Wrong size on QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds");
static_assert(offsetof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, ClockName) == 0x000008, "Member 'QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds::ClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, QuantizationType) == 0x00000C, "Member 'QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds::QuantizationType' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, Multiplier) == 0x000010, "Member 'QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds::Multiplier' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds, ReturnValue) == 0x000014, "Member 'QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetEstimatedClockRunTime final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   InClockName;
	float                                         ReturnValue;
};
static_assert(alignof(QuartzSubsystem_GetEstimatedClockRunTime) == 0x000008, "Wrong alignment on QuartzSubsystem_GetEstimatedClockRunTime");
static_assert(sizeof(QuartzSubsystem_GetEstimatedClockRunTime) == 0x000010, "Wrong size on QuartzSubsystem_GetEstimatedClockRunTime");
static_assert(offsetof(QuartzSubsystem_GetEstimatedClockRunTime, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetEstimatedClockRunTime::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetEstimatedClockRunTime, InClockName) == 0x000008, "Member 'QuartzSubsystem_GetEstimatedClockRunTime::InClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetEstimatedClockRunTime, ReturnValue) == 0x00000C, "Member 'QuartzSubsystem_GetEstimatedClockRunTime::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency) == 0x000008, "Wrong alignment on QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency");
static_assert(sizeof(QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency) == 0x000010, "Wrong size on QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency");
static_assert(offsetof(QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency, ReturnValue) == 0x000008, "Member 'QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency) == 0x000008, "Wrong alignment on QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency");
static_assert(sizeof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency) == 0x000010, "Wrong size on QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency");
static_assert(offsetof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency, ReturnValue) == 0x000008, "Member 'QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency) == 0x000008, "Wrong alignment on QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency");
static_assert(sizeof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency) == 0x000010, "Wrong size on QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency");
static_assert(offsetof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency, ReturnValue) == 0x000008, "Member 'QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetHandleForClock final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   ClockName;
	uint8                                         Pad_C[0x4];
	class UQuartzClockHandle*                     ReturnValue;
};
static_assert(alignof(QuartzSubsystem_GetHandleForClock) == 0x000008, "Wrong alignment on QuartzSubsystem_GetHandleForClock");
static_assert(sizeof(QuartzSubsystem_GetHandleForClock) == 0x000018, "Wrong size on QuartzSubsystem_GetHandleForClock");
static_assert(offsetof(QuartzSubsystem_GetHandleForClock, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetHandleForClock::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetHandleForClock, ClockName) == 0x000008, "Member 'QuartzSubsystem_GetHandleForClock::ClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetHandleForClock, ReturnValue) == 0x000010, "Member 'QuartzSubsystem_GetHandleForClock::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetRoundTripAverageLatency final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetRoundTripAverageLatency) == 0x000008, "Wrong alignment on QuartzSubsystem_GetRoundTripAverageLatency");
static_assert(sizeof(QuartzSubsystem_GetRoundTripAverageLatency) == 0x000010, "Wrong size on QuartzSubsystem_GetRoundTripAverageLatency");
static_assert(offsetof(QuartzSubsystem_GetRoundTripAverageLatency, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetRoundTripAverageLatency::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetRoundTripAverageLatency, ReturnValue) == 0x000008, "Member 'QuartzSubsystem_GetRoundTripAverageLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetRoundTripMaxLatency final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetRoundTripMaxLatency) == 0x000008, "Wrong alignment on QuartzSubsystem_GetRoundTripMaxLatency");
static_assert(sizeof(QuartzSubsystem_GetRoundTripMaxLatency) == 0x000010, "Wrong size on QuartzSubsystem_GetRoundTripMaxLatency");
static_assert(offsetof(QuartzSubsystem_GetRoundTripMaxLatency, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetRoundTripMaxLatency::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetRoundTripMaxLatency, ReturnValue) == 0x000008, "Member 'QuartzSubsystem_GetRoundTripMaxLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_GetRoundTripMinLatency final
{
public:
	const class UObject*                          WorldContextObject;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(QuartzSubsystem_GetRoundTripMinLatency) == 0x000008, "Wrong alignment on QuartzSubsystem_GetRoundTripMinLatency");
static_assert(sizeof(QuartzSubsystem_GetRoundTripMinLatency) == 0x000010, "Wrong size on QuartzSubsystem_GetRoundTripMinLatency");
static_assert(offsetof(QuartzSubsystem_GetRoundTripMinLatency, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_GetRoundTripMinLatency::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_GetRoundTripMinLatency, ReturnValue) == 0x000008, "Member 'QuartzSubsystem_GetRoundTripMinLatency::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_IsClockRunning final
{
public:
	const class UObject*                          WorldContextObject;
	class FName                                   ClockName;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(QuartzSubsystem_IsClockRunning) == 0x000008, "Wrong alignment on QuartzSubsystem_IsClockRunning");
static_assert(sizeof(QuartzSubsystem_IsClockRunning) == 0x000010, "Wrong size on QuartzSubsystem_IsClockRunning");
static_assert(offsetof(QuartzSubsystem_IsClockRunning, WorldContextObject) == 0x000000, "Member 'QuartzSubsystem_IsClockRunning::WorldContextObject' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_IsClockRunning, ClockName) == 0x000008, "Member 'QuartzSubsystem_IsClockRunning::ClockName' has a wrong offset!");
static_assert(offsetof(QuartzSubsystem_IsClockRunning, ReturnValue) == 0x00000C, "Member 'QuartzSubsystem_IsClockRunning::ReturnValue' has a wrong offset!");

struct QuartzSubsystem_IsQuartzEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(QuartzSubsystem_IsQuartzEnabled) == 0x000001, "Wrong alignment on QuartzSubsystem_IsQuartzEnabled");
static_assert(sizeof(QuartzSubsystem_IsQuartzEnabled) == 0x000001, "Wrong size on QuartzSubsystem_IsQuartzEnabled");
static_assert(offsetof(QuartzSubsystem_IsQuartzEnabled, ReturnValue) == 0x000000, "Member 'QuartzSubsystem_IsQuartzEnabled::ReturnValue' has a wrong offset!");

}
