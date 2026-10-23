#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AudioMixer_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAudioDeviceNotificationSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	TMulticastInlineDelegate<void(EAudioDeviceChangedRole AudioDeviceRole, const class FString& DeviceID)> DefaultCaptureDeviceChanged;
	uint8                                         Pad_48[0x18];
	TMulticastInlineDelegate<void(EAudioDeviceChangedRole AudioDeviceRole, const class FString& DeviceID)> DefaultRenderDeviceChanged;
	uint8                                         Pad_70[0x18];
	TMulticastInlineDelegate<void(const class FString& DeviceID)> DeviceAdded;
	uint8                                         Pad_98[0x18];
	TMulticastInlineDelegate<void(const class FString& DeviceID)> DeviceRemoved;
	uint8                                         Pad_C0[0x18];
	TMulticastInlineDelegate<void(const class FString& DeviceID, EAudioDeviceChangedState NewState)> DeviceStateChanged;
	uint8                                         Pad_E8[0x18];
	TMulticastInlineDelegate<void(const class FString& DeviceID)> DeviceSwitched;
	uint8                                         Pad_110[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioDeviceNotificationSubsystem">();
	}
	static class UAudioDeviceNotificationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioDeviceNotificationSubsystem>();
	}
};
static_assert(alignof(UAudioDeviceNotificationSubsystem) == 0x000008, "Wrong alignment on UAudioDeviceNotificationSubsystem");
static_assert(sizeof(UAudioDeviceNotificationSubsystem) == 0x000128, "Wrong size on UAudioDeviceNotificationSubsystem");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DefaultCaptureDeviceChanged) == 0x000038, "Member 'UAudioDeviceNotificationSubsystem::DefaultCaptureDeviceChanged' has a wrong offset!");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DefaultRenderDeviceChanged) == 0x000060, "Member 'UAudioDeviceNotificationSubsystem::DefaultRenderDeviceChanged' has a wrong offset!");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceAdded) == 0x000088, "Member 'UAudioDeviceNotificationSubsystem::DeviceAdded' has a wrong offset!");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceRemoved) == 0x0000B0, "Member 'UAudioDeviceNotificationSubsystem::DeviceRemoved' has a wrong offset!");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceStateChanged) == 0x0000D8, "Member 'UAudioDeviceNotificationSubsystem::DeviceStateChanged' has a wrong offset!");
static_assert(offsetof(UAudioDeviceNotificationSubsystem, DeviceSwitched) == 0x000100, "Member 'UAudioDeviceNotificationSubsystem::DeviceSwitched' has a wrong offset!");

class USubmixEffectDynamicsProcessorPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x88];
	struct FSubmixEffectDynamicsProcessorSettings Settings;

public:
	void ResetKey();
	void SetAudioBus(class UAudioBus* AudioBus);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectDynamicsProcessorPreset">();
	}
	static class USubmixEffectDynamicsProcessorPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectDynamicsProcessorPreset>();
	}
};
static_assert(alignof(USubmixEffectDynamicsProcessorPreset) == 0x000008, "Wrong alignment on USubmixEffectDynamicsProcessorPreset");
static_assert(sizeof(USubmixEffectDynamicsProcessorPreset) == 0x000150, "Wrong size on USubmixEffectDynamicsProcessorPreset");
static_assert(offsetof(USubmixEffectDynamicsProcessorPreset, Settings) == 0x0000F0, "Member 'USubmixEffectDynamicsProcessorPreset::Settings' has a wrong offset!");

class UAudioMixerBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	static int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
	static void ClearSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
	static void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	static class FString Conv_AudioOutputDeviceInfoToString(const struct FAudioOutputDeviceInfo& Info);
	static void GetAvailableAudioOutputDevices(const class UObject* WorldContextObject, const TDelegate<void(TArray<struct FAudioOutputDeviceInfo>& AvailableDevices)>& OnObtainDevicesEvent);
	static void GetCurrentAudioOutputDeviceName(const class UObject* WorldContextObject, const TDelegate<void(const class FString& CurrentDevice)>& OnObtainCurrentDeviceEvent);
	static void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	static int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	static void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	static bool IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
	static void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	static void PrimeSoundForPlayback(class USoundWave* SoundWave, const TDelegate<void(class USoundWave* LoadedSoundWave, bool WasCancelled)> OnLoadCompletion);
	static void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	static void RemoveSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
	static void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ReplaceSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	static void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	static void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	static void SetSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, const TArray<class USoundEffectSubmixPreset*>& SubmixEffectPresetChain, float FadeTimeSec);
	static void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
	static void StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	static void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	static void StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
	static class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name_0, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	static void SwapAudioOutputDevice(const class UObject* WorldContextObject, const class FString& NewDeviceId, const TDelegate<void(struct FSwapAudioOutputResult& SwapResult)>& OnCompletedDeviceSwap);
	static float TrimAudioCache(float InMegabytesToFree);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMixerBlueprintLibrary">();
	}
	static class UAudioMixerBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMixerBlueprintLibrary>();
	}
};
static_assert(alignof(UAudioMixerBlueprintLibrary) == 0x000008, "Wrong alignment on UAudioMixerBlueprintLibrary");
static_assert(sizeof(UAudioMixerBlueprintLibrary) == 0x000028, "Wrong size on UAudioMixerBlueprintLibrary");

class USynthSound final : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>         OwningSynthComponent;
	uint8                                         Pad_4A8[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthSound">();
	}
	static class USynthSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthSound>();
	}
};
static_assert(alignof(USynthSound) == 0x000008, "Wrong alignment on USynthSound");
static_assert(sizeof(USynthSound) == 0x0004C0, "Wrong size on USynthSound");
static_assert(offsetof(USynthSound, OwningSynthComponent) == 0x0004A0, "Member 'USynthSound::OwningSynthComponent' has a wrong offset!");

class USynthComponent : public USceneComponent
{
public:
	uint8                                         bAutoDestroy : 1;
	uint8                                         bStopWhenOwnerDestroyed : 1;
	uint8                                         bAllowSpatialization : 1;
	uint8                                         bOverrideAttenuation : 1;
	uint8                                         BitPad_2A0_4 : 4;
	uint8                                         Pad_2A1[0x3];
	uint8                                         bEnableBusSends : 1;
	uint8                                         bEnableBaseSubmix : 1;
	uint8                                         bEnableSubmixSends : 1;
	uint8                                         Pad_2A5[0x3];
	class USoundAttenuation*                      AttenuationSettings;
	struct FSoundAttenuationSettings              AttenuationOverrides;
	class USoundConcurrency*                      ConcurrencySettings;
	TSet<class USoundConcurrency*>                ConcurrencySet;
	struct FSoundModulationDefaultRoutingSettings ModulationRouting;
	class USoundClass*                            SoundClass;
	class USoundEffectSourcePresetChain*          SourceEffectChain;
	class USoundSubmixBase*                       SoundSubmix;
	TArray<struct FSoundSubmixSendInfo>           SoundSubmixSends;
	TArray<struct FSoundSourceBusSendInfo>        BusSends;
	TArray<struct FSoundSourceBusSendInfo>        PreEffectBusSends;
	uint8                                         bIsUISound : 1;
	uint8                                         bIsPreviewSound : 1;
	uint8                                         Pad_8A9[0x3];
	int32                                         EnvelopeFollowerAttackTime;
	int32                                         EnvelopeFollowerReleaseTime;
	uint8                                         Pad_8B4[0x4];
	TMulticastInlineDelegate<void(float EnvelopeValue)> OnAudioEnvelopeValue;
	uint8                                         Pad_8C8[0x20];
	class USynthSound*                            Synth;
	class UAudioComponent*                        AudioComponent;
	uint8                                         Pad_8F8[0x28];

public:
	TSet<class USoundModulatorBase*> GetModulators(const EModulationDestination Destination);
	void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
	void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetModulationRouting(const TSet<class USoundModulatorBase*>& Modulators, const EModulationDestination Destination, const EModulationRouting RoutingMethod);
	void SetOutputToBusOnly(bool bInOutputToBusOnly);
	void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetVolumeMultiplier(float VolumeMultiplier);
	void Start();
	void Stop();

	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve) const;
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve) const;
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve) const;
	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponent">();
	}
	static class USynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponent>();
	}
};
static_assert(alignof(USynthComponent) == 0x000010, "Wrong alignment on USynthComponent");
static_assert(sizeof(USynthComponent) == 0x000920, "Wrong size on USynthComponent");
static_assert(offsetof(USynthComponent, AttenuationSettings) == 0x0002A8, "Member 'USynthComponent::AttenuationSettings' has a wrong offset!");
static_assert(offsetof(USynthComponent, AttenuationOverrides) == 0x0002B0, "Member 'USynthComponent::AttenuationOverrides' has a wrong offset!");
static_assert(offsetof(USynthComponent, ConcurrencySettings) == 0x000680, "Member 'USynthComponent::ConcurrencySettings' has a wrong offset!");
static_assert(offsetof(USynthComponent, ConcurrencySet) == 0x000688, "Member 'USynthComponent::ConcurrencySet' has a wrong offset!");
static_assert(offsetof(USynthComponent, ModulationRouting) == 0x0006D8, "Member 'USynthComponent::ModulationRouting' has a wrong offset!");
static_assert(offsetof(USynthComponent, SoundClass) == 0x000860, "Member 'USynthComponent::SoundClass' has a wrong offset!");
static_assert(offsetof(USynthComponent, SourceEffectChain) == 0x000868, "Member 'USynthComponent::SourceEffectChain' has a wrong offset!");
static_assert(offsetof(USynthComponent, SoundSubmix) == 0x000870, "Member 'USynthComponent::SoundSubmix' has a wrong offset!");
static_assert(offsetof(USynthComponent, SoundSubmixSends) == 0x000878, "Member 'USynthComponent::SoundSubmixSends' has a wrong offset!");
static_assert(offsetof(USynthComponent, BusSends) == 0x000888, "Member 'USynthComponent::BusSends' has a wrong offset!");
static_assert(offsetof(USynthComponent, PreEffectBusSends) == 0x000898, "Member 'USynthComponent::PreEffectBusSends' has a wrong offset!");
static_assert(offsetof(USynthComponent, EnvelopeFollowerAttackTime) == 0x0008AC, "Member 'USynthComponent::EnvelopeFollowerAttackTime' has a wrong offset!");
static_assert(offsetof(USynthComponent, EnvelopeFollowerReleaseTime) == 0x0008B0, "Member 'USynthComponent::EnvelopeFollowerReleaseTime' has a wrong offset!");
static_assert(offsetof(USynthComponent, OnAudioEnvelopeValue) == 0x0008B8, "Member 'USynthComponent::OnAudioEnvelopeValue' has a wrong offset!");
static_assert(offsetof(USynthComponent, Synth) == 0x0008E8, "Member 'USynthComponent::Synth' has a wrong offset!");
static_assert(offsetof(USynthComponent, AudioComponent) == 0x0008F0, "Member 'USynthComponent::AudioComponent' has a wrong offset!");

class USubmixEffectSubmixEQPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x38];
	struct FSubmixEffectSubmixEQSettings          Settings;

public:
	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectSubmixEQPreset">();
	}
	static class USubmixEffectSubmixEQPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectSubmixEQPreset>();
	}
};
static_assert(alignof(USubmixEffectSubmixEQPreset) == 0x000008, "Wrong alignment on USubmixEffectSubmixEQPreset");
static_assert(sizeof(USubmixEffectSubmixEQPreset) == 0x0000B0, "Wrong size on USubmixEffectSubmixEQPreset");
static_assert(offsetof(USubmixEffectSubmixEQPreset, Settings) == 0x0000A0, "Member 'USubmixEffectSubmixEQPreset::Settings' has a wrong offset!");

class USubmixEffectReverbPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x68];
	struct FSubmixEffectReverbSettings            Settings;

public:
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
	void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectReverbPreset">();
	}
	static class USubmixEffectReverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectReverbPreset>();
	}
};
static_assert(alignof(USubmixEffectReverbPreset) == 0x000008, "Wrong alignment on USubmixEffectReverbPreset");
static_assert(sizeof(USubmixEffectReverbPreset) == 0x000110, "Wrong size on USubmixEffectReverbPreset");
static_assert(offsetof(USubmixEffectReverbPreset, Settings) == 0x0000D0, "Member 'USubmixEffectReverbPreset::Settings' has a wrong offset!");

class UAudioGenerator final : public UObject
{
public:
	uint8                                         Pad_28[0x80];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGenerator">();
	}
	static class UAudioGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGenerator>();
	}
};
static_assert(alignof(UAudioGenerator) == 0x000008, "Wrong alignment on UAudioGenerator");
static_assert(sizeof(UAudioGenerator) == 0x0000A8, "Wrong size on UAudioGenerator");

class UQuartzClockHandle final : public UObject
{
public:
	uint8                                         Pad_28[0x1C0];

public:
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(const class UObject* WorldContextObject);
	float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
	float GetEstimatedRunTime(const class UObject* WorldContextObject);
	bool IsClockRunning(const class UObject* WorldContextObject);
	void PauseClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void ResetTransport(const class UObject* WorldContextObject, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	void ResetTransportQuantized(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate, class UQuartzClockHandle** ClockHandle);
	void ResumeClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void SetBeatsPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float BeatsPerMinute);
	void SetMillisecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float MillisecondsPerTick);
	void SetSecondsPerTick(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float SecondsPerTick);
	void SetThirtySecondNotesPerMinute(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float ThirtySecondsNotesPerMinute);
	void SetTicksPerSecond(const class UObject* WorldContextObject, const struct FQuartzQuantizationBoundary& QuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& Delegate, class UQuartzClockHandle** ClockHandle, float TicksPerSecond);
	void StartClock(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void StartOtherClock(const class UObject* WorldContextObject, class FName OtherClockName, const struct FQuartzQuantizationBoundary& InQuantizationBoundary, const TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)>& InDelegate);
	void StopClock(const class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle** ClockHandle);
	void SubscribeToAllQuantizationEvents(const class UObject* WorldContextObject, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void SubscribeToQuantizationEvent(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)>& OnQuantizationEvent, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromAllTimeDivisions(const class UObject* WorldContextObject, class UQuartzClockHandle** ClockHandle);
	void UnsubscribeFromTimeDivision(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle** ClockHandle);

	float GetBeatsPerMinute(const class UObject* WorldContextObject) const;
	float GetMillisecondsPerTick(const class UObject* WorldContextObject) const;
	float GetSecondsPerTick(const class UObject* WorldContextObject) const;
	float GetThirtySecondNotesPerMinute(const class UObject* WorldContextObject) const;
	float GetTicksPerSecond(const class UObject* WorldContextObject) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QuartzClockHandle">();
	}
	static class UQuartzClockHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzClockHandle>();
	}
};
static_assert(alignof(UQuartzClockHandle) == 0x000008, "Wrong alignment on UQuartzClockHandle");
static_assert(sizeof(UQuartzClockHandle) == 0x0001E8, "Wrong size on UQuartzClockHandle");

class UQuartzSubsystem final : public UTickableWorldSubsystem
{
public:
	uint8                                         Pad_40[0x20];

public:
	class UQuartzClockHandle* CreateNewClock(const class UObject* WorldContextObject, class FName ClockName, const struct FQuartzClockSettings& InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
	void DeleteClockByHandle(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
	void DeleteClockByName(const class UObject* WorldContextObject, class FName ClockName);
	bool DoesClockExist(const class UObject* WorldContextObject, class FName ClockName);
	float GetAudioRenderThreadToGameThreadAverageLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadMinLatency();
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(const class UObject* WorldContextObject, const class FName& InClockName);
	float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, class FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
	float GetEstimatedClockRunTime(const class UObject* WorldContextObject, const class FName& InClockName);
	float GetGameThreadToAudioRenderThreadAverageLatency(const class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMaxLatency(const class UObject* WorldContextObject);
	float GetGameThreadToAudioRenderThreadMinLatency(const class UObject* WorldContextObject);
	class UQuartzClockHandle* GetHandleForClock(const class UObject* WorldContextObject, class FName ClockName);
	float GetRoundTripAverageLatency(const class UObject* WorldContextObject);
	float GetRoundTripMaxLatency(const class UObject* WorldContextObject);
	float GetRoundTripMinLatency(const class UObject* WorldContextObject);
	bool IsClockRunning(const class UObject* WorldContextObject, class FName ClockName);
	bool IsQuartzEnabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QuartzSubsystem">();
	}
	static class UQuartzSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzSubsystem>();
	}
};
static_assert(alignof(UQuartzSubsystem) == 0x000008, "Wrong alignment on UQuartzSubsystem");
static_assert(sizeof(UQuartzSubsystem) == 0x000060, "Wrong size on UQuartzSubsystem");

}
