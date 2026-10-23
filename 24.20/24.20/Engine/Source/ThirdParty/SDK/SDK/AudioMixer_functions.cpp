#pragma once

#include "Basic.hpp"

#include "AudioMixer_classes.hpp"
#include "AudioMixer_parameters.hpp"

namespace SDK
{

void USubmixEffectDynamicsProcessorPreset::ResetKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "ResetKey");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDynamicsProcessorPreset::SetAudioBus(class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetAudioBus");

	Params::SubmixEffectDynamicsProcessorPreset_SetAudioBus Parms{};

	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetExternalSubmix");

	Params::SubmixEffectDynamicsProcessorPreset_SetExternalSubmix Parms{};

	Parms.Submix = Submix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDynamicsProcessorPreset::SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDynamicsProcessorPreset", "SetSettings");

	Params::SubmixEffectDynamicsProcessorPreset_SetSettings Parms{};

	Parms.Settings_0 = std::move(Settings_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddMasterSubmixEffect");

	Params::AudioMixerBlueprintLibrary_AddMasterSubmixEffect Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddSourceEffectToPresetChain");

	Params::AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;
	Parms.Entry = std::move(Entry);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UAudioMixerBlueprintLibrary::AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "AddSubmixEffect");

	Params::AudioMixerBlueprintLibrary_AddSubmixEffect Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::ClearMasterSubmixEffects(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ClearMasterSubmixEffects");

	Params::AudioMixerBlueprintLibrary_ClearMasterSubmixEffects Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::ClearSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffectChainOverride");

	Params::AudioMixerBlueprintLibrary_ClearSubmixEffectChainOverride Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.FadeTimeSec = FadeTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ClearSubmixEffects");

	Params::AudioMixerBlueprintLibrary_ClearSubmixEffects Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UAudioMixerBlueprintLibrary::Conv_AudioOutputDeviceInfoToString(const struct FAudioOutputDeviceInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "Conv_AudioOutputDeviceInfoToString");

	Params::AudioMixerBlueprintLibrary_Conv_AudioOutputDeviceInfoToString Parms{};

	Parms.Info = std::move(Info);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::GetAvailableAudioOutputDevices(const class UObject* WorldContextObject, const TDelegate<void(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices)>& OnObtainDevicesEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetAvailableAudioOutputDevices");

	Params::AudioMixerBlueprintLibrary_GetAvailableAudioOutputDevices Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnObtainDevicesEvent = OnObtainDevicesEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::GetCurrentAudioOutputDeviceName(const class UObject* WorldContextObject, const TDelegate<void(const class FString& CurrentDevice)>& OnObtainCurrentDeviceEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetCurrentAudioOutputDeviceName");

	Params::AudioMixerBlueprintLibrary_GetCurrentAudioOutputDeviceName Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnObtainCurrentDeviceEvent = OnObtainCurrentDeviceEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetMagnitudeForFrequencies");

	Params::AudioMixerBlueprintLibrary_GetMagnitudeForFrequencies Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Frequencies = std::move(Frequencies);
	Parms.SubmixToAnalyze = SubmixToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Magnitudes != nullptr)
		*Magnitudes = std::move(Parms.Magnitudes);
}

int32 UAudioMixerBlueprintLibrary::GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetNumberOfEntriesInSourceEffectChain");

	Params::AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "GetPhaseForFrequencies");

	Params::AudioMixerBlueprintLibrary_GetPhaseForFrequencies Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Frequencies = std::move(Frequencies);
	Parms.SubmixToAnalyze = SubmixToAnalyze;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Phases != nullptr)
		*Phases = std::move(Parms.Phases);
}

bool UAudioMixerBlueprintLibrary::IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "IsAudioBusActive");

	Params::AudioMixerBlueprintLibrary_IsAudioBusActive Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "MakeFullSpectrumSpectralAnalysisBandSettings");

	Params::AudioMixerBlueprintLibrary_MakeFullSpectrumSpectralAnalysisBandSettings Parms{};

	Parms.InNumBands = InNumBands;
	Parms.InMinimumFrequency = InMinimumFrequency;
	Parms.InMaximumFrequency = InMaximumFrequency;
	Parms.InAttackTimeMsec = InAttackTimeMsec;
	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "MakeMusicalSpectralAnalysisBandSettings");

	Params::AudioMixerBlueprintLibrary_MakeMusicalSpectralAnalysisBandSettings Parms{};

	Parms.InNumSemitones = InNumSemitones;
	Parms.InStartingMusicalNote = InStartingMusicalNote;
	Parms.InStartingOctave = InStartingOctave;
	Parms.InAttackTimeMsec = InAttackTimeMsec;
	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FSoundSubmixSpectralAnalysisBandSettings> UAudioMixerBlueprintLibrary::MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "MakePresetSpectralAnalysisBandSettings");

	Params::AudioMixerBlueprintLibrary_MakePresetSpectralAnalysisBandSettings Parms{};

	Parms.InBandPresetType = InBandPresetType;
	Parms.InNumBands = InNumBands;
	Parms.InAttackTimeMsec = InAttackTimeMsec;
	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "PauseRecordingOutput");

	Params::AudioMixerBlueprintLibrary_PauseRecordingOutput Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixToPause = SubmixToPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::PrimeSoundCueForPlayback(class USoundCue* SoundCue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundCueForPlayback");

	Params::AudioMixerBlueprintLibrary_PrimeSoundCueForPlayback Parms{};

	Parms.SoundCue = SoundCue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::PrimeSoundForPlayback(class USoundWave* SoundWave, const TDelegate<void(class USoundWave* LoadedSoundWave, bool WasCancelled)> OnLoadCompletion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "PrimeSoundForPlayback");

	Params::AudioMixerBlueprintLibrary_PrimeSoundForPlayback Parms{};

	Parms.SoundWave = SoundWave;
	Parms.OnLoadCompletion = OnLoadCompletion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveMasterSubmixEffect");

	Params::AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSourceEffectFromPresetChain");

	Params::AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;
	Parms.EntryIndex = EntryIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffect");

	Params::AudioMixerBlueprintLibrary_RemoveSubmixEffect Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectAtIndex");

	Params::AudioMixerBlueprintLibrary_RemoveSubmixEffectAtIndex Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.SubmixChainIndex = SubmixChainIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPreset");

	Params::AudioMixerBlueprintLibrary_RemoveSubmixEffectPreset Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "RemoveSubmixEffectPresetAtIndex");

	Params::AudioMixerBlueprintLibrary_RemoveSubmixEffectPresetAtIndex Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.SubmixChainIndex = SubmixChainIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSoundEffectSubmix");

	Params::AudioMixerBlueprintLibrary_ReplaceSoundEffectSubmix Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InSoundSubmix = InSoundSubmix;
	Parms.SubmixChainIndex = SubmixChainIndex;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::ReplaceSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ReplaceSubmixEffect");

	Params::AudioMixerBlueprintLibrary_ReplaceSubmixEffect Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InSoundSubmix = InSoundSubmix;
	Parms.SubmixChainIndex = SubmixChainIndex;
	Parms.SubmixEffectPreset = SubmixEffectPreset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "ResumeRecordingOutput");

	Params::AudioMixerBlueprintLibrary_ResumeRecordingOutput Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixToPause = SubmixToPause;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "SetBypassSourceEffectChainEntry");

	Params::AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetChain = PresetChain;
	Parms.EntryIndex = EntryIndex;
	Parms.bBypassed = bBypassed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::SetSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "SetSubmixEffectChainOverride");

	Params::AudioMixerBlueprintLibrary_SetSubmixEffectChainOverride Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SoundSubmix = SoundSubmix;
	Parms.SubmixEffectPresetChain = std::move(SubmixEffectPresetChain);
	Parms.FadeTimeSec = FadeTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StartAnalyzingOutput");

	Params::AudioMixerBlueprintLibrary_StartAnalyzingOutput Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixToAnalyze = SubmixToAnalyze;
	Parms.FFTSize = FFTSize;
	Parms.InterpolationMethod = InterpolationMethod;
	Parms.WindowType = WindowType;
	Parms.HopSize = HopSize;
	Parms.SpectrumType = SpectrumType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StartAudioBus");

	Params::AudioMixerBlueprintLibrary_StartAudioBus Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StartRecordingOutput");

	Params::AudioMixerBlueprintLibrary_StartRecordingOutput Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ExpectedDuration = ExpectedDuration;
	Parms.SubmixToRecord = SubmixToRecord;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StopAnalyzingOutput");

	Params::AudioMixerBlueprintLibrary_StopAnalyzingOutput Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SubmixToStopAnalyzing = SubmixToStopAnalyzing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMixerBlueprintLibrary::StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StopAudioBus");

	Params::AudioMixerBlueprintLibrary_StopAudioBus Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class USoundWave* UAudioMixerBlueprintLibrary::StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name_0, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "StopRecordingOutput");

	Params::AudioMixerBlueprintLibrary_StopRecordingOutput Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ExportType = ExportType;
	Parms.Name_0 = std::move(Name_0);
	Parms.Path = std::move(Path);
	Parms.SubmixToRecord = SubmixToRecord;
	Parms.ExistingSoundWaveToOverwrite = ExistingSoundWaveToOverwrite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioMixerBlueprintLibrary::SwapAudioOutputDevice(const class UObject* WorldContextObject, const class FString& NewDeviceId, const TDelegate<void(struct FSwapAudioOutputResult& SwapResult)>& OnCompletedDeviceSwap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "SwapAudioOutputDevice");

	Params::AudioMixerBlueprintLibrary_SwapAudioOutputDevice Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NewDeviceId = std::move(NewDeviceId);
	Parms.OnCompletedDeviceSwap = OnCompletedDeviceSwap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UAudioMixerBlueprintLibrary::TrimAudioCache(float InMegabytesToFree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioMixerBlueprintLibrary", "TrimAudioCache");

	Params::AudioMixerBlueprintLibrary_TrimAudioCache Parms{};

	Parms.InMegabytesToFree = InMegabytesToFree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSet<class USoundModulatorBase*> USynthComponent::GetModulators(const EModulationDestination Destination)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "GetModulators");

	Params::SynthComponent_GetModulators Parms{};

	Parms.Destination = Destination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthComponent::SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetAudioBusSendPostEffect");

	Params::SynthComponent_SetAudioBusSendPostEffect Parms{};

	Parms.AudioBus = AudioBus;
	Parms.AudioBusSendLevel = AudioBusSendLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetAudioBusSendPreEffect");

	Params::SynthComponent_SetAudioBusSendPreEffect Parms{};

	Parms.AudioBus = AudioBus;
	Parms.AudioBusSendLevel = AudioBusSendLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterEnabled");

	Params::SynthComponent_SetLowPassFilterEnabled Parms{};

	Parms.InLowPassFilterEnabled = InLowPassFilterEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetLowPassFilterFrequency");

	Params::SynthComponent_SetLowPassFilterFrequency Parms{};

	Parms.InLowPassFilterFrequency = InLowPassFilterFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetModulationRouting(const TSet<class USoundModulatorBase*>& Modulators, const EModulationDestination Destination, const EModulationRouting RoutingMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetModulationRouting");

	Params::SynthComponent_SetModulationRouting Parms{};

	Parms.Modulators = std::move(Modulators);
	Parms.Destination = Destination;
	Parms.RoutingMethod = RoutingMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetOutputToBusOnly(bool bInOutputToBusOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetOutputToBusOnly");

	Params::SynthComponent_SetOutputToBusOnly Parms{};

	Parms.bInOutputToBusOnly = bInOutputToBusOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetSourceBusSendPostEffect");

	Params::SynthComponent_SetSourceBusSendPostEffect Parms{};

	Parms.SoundSourceBus = SoundSourceBus;
	Parms.SourceBusSendLevel = SourceBusSendLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetSourceBusSendPreEffect");

	Params::SynthComponent_SetSourceBusSendPreEffect Parms{};

	Parms.SoundSourceBus = SoundSourceBus;
	Parms.SourceBusSendLevel = SourceBusSendLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetSubmixSend");

	Params::SynthComponent_SetSubmixSend Parms{};

	Parms.Submix = Submix;
	Parms.SendLevel = SendLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "SetVolumeMultiplier");

	Params::SynthComponent_SetVolumeMultiplier Parms{};

	Parms.VolumeMultiplier = VolumeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "Start");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "AdjustVolume");

	Params::SynthComponent_AdjustVolume Parms{};

	Parms.AdjustVolumeDuration = AdjustVolumeDuration;
	Parms.AdjustVolumeLevel = AdjustVolumeLevel;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "FadeIn");

	Params::SynthComponent_FadeIn Parms{};

	Parms.FadeInDuration = FadeInDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.StartTime = StartTime;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "FadeOut");

	Params::SynthComponent_FadeOut Parms{};

	Parms.FadeOutDuration = FadeOutDuration;
	Parms.FadeVolumeLevel = FadeVolumeLevel;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USynthComponent::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponent", "IsPlaying");

	Params::SynthComponent_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USubmixEffectSubmixEQPreset::SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectSubmixEQPreset", "SetSettings");

	Params::SubmixEffectSubmixEQPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectReverbPreset::SetSettings(const struct FSubmixEffectReverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettings");

	Params::SubmixEffectReverbPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectReverbPreset", "SetSettingsWithReverbEffect");

	Params::SubmixEffectReverbPreset_SetSettingsWithReverbEffect Parms{};

	Parms.InReverbEffect = InReverbEffect;
	Parms.WetLevel = WetLevel;
	Parms.DryLevel = DryLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FQuartzTransportTimeStamp UQuartzClockHandle::GetCurrentTimestamp(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetCurrentTimestamp");

	Params::QuartzClockHandle_GetCurrentTimestamp Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzClockHandle::GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetDurationOfQuantizationTypeInSeconds");

	Params::QuartzClockHandle_GetDurationOfQuantizationTypeInSeconds Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationType = QuantizationType;
	Parms.Multiplier = Multiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzClockHandle::GetEstimatedRunTime(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetEstimatedRunTime");

	Params::QuartzClockHandle_GetEstimatedRunTime Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UQuartzClockHandle::IsClockRunning(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "IsClockRunning");

	Params::QuartzClockHandle_IsClockRunning Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UQuartzClockHandle::PauseClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "PauseClock");

	Params::QuartzClockHandle_PauseClock Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::ResetTransport(const class UObject* WorldContextObject, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransport");

	Params::QuartzClockHandle_ResetTransport Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UQuartzClockHandle::ResetTransportQuantized(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "ResetTransportQuantized");

	Params::QuartzClockHandle_ResetTransportQuantized Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InQuantizationBoundary = std::move(InQuantizationBoundary);
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::ResumeClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "ResumeClock");

	Params::QuartzClockHandle_ResumeClock Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SetBeatsPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SetBeatsPerMinute");

	Params::QuartzClockHandle_SetBeatsPerMinute Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationBoundary = std::move(QuantizationBoundary);
	Parms.Delegate = Delegate;
	Parms.BeatsPerMinute = BeatsPerMinute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SetMillisecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SetMillisecondsPerTick");

	Params::QuartzClockHandle_SetMillisecondsPerTick Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationBoundary = std::move(QuantizationBoundary);
	Parms.Delegate = Delegate;
	Parms.MillisecondsPerTick = MillisecondsPerTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SetSecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SetSecondsPerTick");

	Params::QuartzClockHandle_SetSecondsPerTick Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationBoundary = std::move(QuantizationBoundary);
	Parms.Delegate = Delegate;
	Parms.SecondsPerTick = SecondsPerTick;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SetThirtySecondNotesPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SetThirtySecondNotesPerMinute");

	Params::QuartzClockHandle_SetThirtySecondNotesPerMinute Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationBoundary = std::move(QuantizationBoundary);
	Parms.Delegate = Delegate;
	Parms.ThirtySecondsNotesPerMinute = ThirtySecondsNotesPerMinute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SetTicksPerSecond(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SetTicksPerSecond");

	Params::QuartzClockHandle_SetTicksPerSecond Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.QuantizationBoundary = std::move(QuantizationBoundary);
	Parms.Delegate = Delegate;
	Parms.TicksPerSecond = TicksPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::StartClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "StartClock");

	Params::QuartzClockHandle_StartClock Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::StartOtherClock(const class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "StartOtherClock");

	Params::QuartzClockHandle_StartOtherClock Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OtherClockName = OtherClockName;
	Parms.InQuantizationBoundary = std::move(InQuantizationBoundary);
	Parms.InDelegate = InDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UQuartzClockHandle::StopClock(const class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "StopClock");

	Params::QuartzClockHandle_StopClock Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CancelPendingEvents = CancelPendingEvents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SubscribeToAllQuantizationEvents(const class UObject* WorldContextObject, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToAllQuantizationEvents");

	Params::QuartzClockHandle_SubscribeToAllQuantizationEvents Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnQuantizationEvent = OnQuantizationEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::SubscribeToQuantizationEvent(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "SubscribeToQuantizationEvent");

	Params::QuartzClockHandle_SubscribeToQuantizationEvent Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InQuantizationBoundary = InQuantizationBoundary;
	Parms.OnQuantizationEvent = OnQuantizationEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::UnsubscribeFromAllTimeDivisions(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromAllTimeDivisions");

	Params::QuartzClockHandle_UnsubscribeFromAllTimeDivisions Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

void UQuartzClockHandle::UnsubscribeFromTimeDivision(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "UnsubscribeFromTimeDivision");

	Params::QuartzClockHandle_UnsubscribeFromTimeDivision Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InQuantizationBoundary = InQuantizationBoundary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ClockHandle != nullptr)
		*ClockHandle = Parms.ClockHandle;
}

float UQuartzClockHandle::GetBeatsPerMinute(const class UObject* WorldContextObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetBeatsPerMinute");

	Params::QuartzClockHandle_GetBeatsPerMinute Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzClockHandle::GetMillisecondsPerTick(const class UObject* WorldContextObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetMillisecondsPerTick");

	Params::QuartzClockHandle_GetMillisecondsPerTick Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzClockHandle::GetSecondsPerTick(const class UObject* WorldContextObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetSecondsPerTick");

	Params::QuartzClockHandle_GetSecondsPerTick Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzClockHandle::GetThirtySecondNotesPerMinute(const class UObject* WorldContextObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetThirtySecondNotesPerMinute");

	Params::QuartzClockHandle_GetThirtySecondNotesPerMinute Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzClockHandle::GetTicksPerSecond(const class UObject* WorldContextObject) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzClockHandle", "GetTicksPerSecond");

	Params::QuartzClockHandle_GetTicksPerSecond Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UQuartzClockHandle* UQuartzSubsystem::CreateNewClock(const class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "CreateNewClock");

	Params::QuartzSubsystem_CreateNewClock Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.InSettings = std::move(InSettings);
	Parms.bOverrideSettingsIfClockExists = bOverrideSettingsIfClockExists;
	Parms.bUseAudioEngineClockManager = bUseAudioEngineClockManager;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UQuartzSubsystem::DeleteClockByHandle(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByHandle");

	Params::QuartzSubsystem_DeleteClockByHandle Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InClockHandle = InClockHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InClockHandle = Parms.InClockHandle;
}

void UQuartzSubsystem::DeleteClockByName(const class UObject* WorldContextObject, class FName ClockName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "DeleteClockByName");

	Params::QuartzSubsystem_DeleteClockByName Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UQuartzSubsystem::DoesClockExist(const class UObject* WorldContextObject, class FName ClockName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "DoesClockExist");

	Params::QuartzSubsystem_DoesClockExist Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadAverageLatency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadAverageLatency");

	Params::QuartzSubsystem_GetAudioRenderThreadToGameThreadAverageLatency Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMaxLatency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMaxLatency");

	Params::QuartzSubsystem_GetAudioRenderThreadToGameThreadMaxLatency Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetAudioRenderThreadToGameThreadMinLatency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetAudioRenderThreadToGameThreadMinLatency");

	Params::QuartzSubsystem_GetAudioRenderThreadToGameThreadMinLatency Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQuartzTransportTimeStamp UQuartzSubsystem::GetCurrentClockTimestamp(const class UObject* WorldContextObject, const class FName& InClockName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetCurrentClockTimestamp");

	Params::QuartzSubsystem_GetCurrentClockTimestamp Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InClockName = InClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, class FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetDurationOfQuantizationTypeInSeconds");

	Params::QuartzSubsystem_GetDurationOfQuantizationTypeInSeconds Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;
	Parms.QuantizationType = QuantizationType;
	Parms.Multiplier = Multiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetEstimatedClockRunTime(const class UObject* WorldContextObject, const class FName& InClockName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetEstimatedClockRunTime");

	Params::QuartzSubsystem_GetEstimatedClockRunTime Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InClockName = InClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadAverageLatency(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadAverageLatency");

	Params::QuartzSubsystem_GetGameThreadToAudioRenderThreadAverageLatency Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMaxLatency(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMaxLatency");

	Params::QuartzSubsystem_GetGameThreadToAudioRenderThreadMaxLatency Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetGameThreadToAudioRenderThreadMinLatency(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetGameThreadToAudioRenderThreadMinLatency");

	Params::QuartzSubsystem_GetGameThreadToAudioRenderThreadMinLatency Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UQuartzClockHandle* UQuartzSubsystem::GetHandleForClock(const class UObject* WorldContextObject, class FName ClockName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetHandleForClock");

	Params::QuartzSubsystem_GetHandleForClock Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetRoundTripAverageLatency(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripAverageLatency");

	Params::QuartzSubsystem_GetRoundTripAverageLatency Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetRoundTripMaxLatency(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMaxLatency");

	Params::QuartzSubsystem_GetRoundTripMaxLatency Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UQuartzSubsystem::GetRoundTripMinLatency(const class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "GetRoundTripMinLatency");

	Params::QuartzSubsystem_GetRoundTripMinLatency Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UQuartzSubsystem::IsClockRunning(const class UObject* WorldContextObject, class FName ClockName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "IsClockRunning");

	Params::QuartzSubsystem_IsClockRunning Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ClockName = ClockName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UQuartzSubsystem::IsQuartzEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzSubsystem", "IsQuartzEnabled");

	Params::QuartzSubsystem_IsQuartzEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
