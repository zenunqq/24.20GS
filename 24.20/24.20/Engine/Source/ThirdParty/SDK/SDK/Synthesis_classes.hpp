#pragma once

#include "Basic.hpp"

#include "Synthesis_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "AudioMixer_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UAudioImpulseResponse final : public UObject
{
public:
	TArray<float>                                 ImpulseResponse;
	int32                                         NumChannels;
	int32                                         SampleRate;
	float                                         NormalizationVolumeDb;
	bool                                          bTrueStereo;
	uint8                                         Pad_45[0x3];
	TArray<float>                                 IRData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioImpulseResponse">();
	}
	static class UAudioImpulseResponse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioImpulseResponse>();
	}
};
static_assert(alignof(UAudioImpulseResponse) == 0x000008, "Wrong alignment on UAudioImpulseResponse");
static_assert(sizeof(UAudioImpulseResponse) == 0x000058, "Wrong size on UAudioImpulseResponse");
static_assert(offsetof(UAudioImpulseResponse, ImpulseResponse) == 0x000028, "Member 'UAudioImpulseResponse::ImpulseResponse' has a wrong offset!");
static_assert(offsetof(UAudioImpulseResponse, NumChannels) == 0x000038, "Member 'UAudioImpulseResponse::NumChannels' has a wrong offset!");
static_assert(offsetof(UAudioImpulseResponse, SampleRate) == 0x00003C, "Member 'UAudioImpulseResponse::SampleRate' has a wrong offset!");
static_assert(offsetof(UAudioImpulseResponse, NormalizationVolumeDb) == 0x000040, "Member 'UAudioImpulseResponse::NormalizationVolumeDb' has a wrong offset!");
static_assert(offsetof(UAudioImpulseResponse, bTrueStereo) == 0x000044, "Member 'UAudioImpulseResponse::bTrueStereo' has a wrong offset!");
static_assert(offsetof(UAudioImpulseResponse, IRData) == 0x000048, "Member 'UAudioImpulseResponse::IRData' has a wrong offset!");

class UModularSynthPresetBank final : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>   Presets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularSynthPresetBank">();
	}
	static class UModularSynthPresetBank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModularSynthPresetBank>();
	}
};
static_assert(alignof(UModularSynthPresetBank) == 0x000008, "Wrong alignment on UModularSynthPresetBank");
static_assert(sizeof(UModularSynthPresetBank) == 0x000038, "Wrong size on UModularSynthPresetBank");
static_assert(offsetof(UModularSynthPresetBank, Presets) == 0x000028, "Member 'UModularSynthPresetBank::Presets' has a wrong offset!");

class UModularSynthLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularSynthLibrary">();
	}
	static class UModularSynthLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModularSynthLibrary>();
	}
};
static_assert(alignof(UModularSynthLibrary) == 0x000008, "Wrong alignment on UModularSynthLibrary");
static_assert(sizeof(UModularSynthLibrary) == 0x000028, "Wrong size on UModularSynthLibrary");

class USubmixEffectDelayStatics final : public UBlueprintFunctionLibrary
{
public:
	static struct FSubmixEffectDelaySettings SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength);
	static struct FSubmixEffectDelaySettings SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime);
	static struct FSubmixEffectDelaySettings SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectDelayStatics">();
	}
	static class USubmixEffectDelayStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectDelayStatics>();
	}
};
static_assert(alignof(USubmixEffectDelayStatics) == 0x000008, "Wrong alignment on USubmixEffectDelayStatics");
static_assert(sizeof(USubmixEffectDelayStatics) == 0x000028, "Wrong size on USubmixEffectDelayStatics");

class UModularSynthComponent final : public USynthComponent
{
public:
	int32                                         VoiceCount;
	uint8                                         Pad_924[0x6CC];

public:
	struct FPatchId CreatePatch(const ESynth1PatchSource PatchSource, const TArray<struct FSynth1PatchCable>& PatchCables, const bool bEnableByDefault);
	void NoteOff(const float Note, const bool bAllNotesOff, const bool bKillAllNotes);
	void NoteOn(const float Note, const int32 Velocity, const float Duration);
	void SetAttackTime(float AttackTimeMsec);
	void SetChorusDepth(float Depth);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusFeedback(float Feedback);
	void SetChorusFrequency(float Frequency);
	void SetDecayTime(float DecayTimeMsec);
	void SetEnableLegato(bool LegatoEnabled);
	bool SetEnablePatch(const struct FPatchId& PatchId, const bool bIsEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnableUnison(bool EnableUnison);
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterQ(float FilterQ);
	void SetFilterQMod(float FilterQ);
	void SetFilterType(ESynthFilterType FilterType);
	void SetGainDb(float GainDb);
	void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
	void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
	void SetLFOGain(int32 LFOIndex, float Gain);
	void SetLFOGainMod(int32 LFOIndex, float GainMod);
	void SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode);
	void SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType);
	void SetLFOType(int32 LFOIndex, ESynthLFOType LFOType);
	void SetModEnvAttackTime(const float AttackTimeMsec);
	void SetModEnvBiasInvert(const bool bInvert);
	void SetModEnvBiasPatch(const ESynthModEnvBiasPatch InPatchType);
	void SetModEnvDecayTime(const float DecayTimeMsec);
	void SetModEnvDepth(const float Depth);
	void SetModEnvInvert(const bool bInvert);
	void SetModEnvPatch(const ESynthModEnvPatch InPatchType);
	void SetModEnvReleaseTime(const float Release);
	void SetModEnvSustainGain(const float SustainGain);
	void SetOscCents(int32 OscIndex, float Cents);
	void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
	void SetOscGain(int32 OscIndex, float OscGain);
	void SetOscGainMod(int32 OscIndex, float OscGainMod);
	void SetOscOctave(int32 OscIndex, float Octave);
	void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
	void SetOscSemitones(int32 OscIndex, float Semitones);
	void SetOscSync(const bool bIsSynced);
	void SetOscType(int32 OscIndex, ESynth1OscType OscType);
	void SetPan(float Pan);
	void SetPitchBend(float PitchBend);
	void SetPortamento(float Portamento);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetSpread(float Spread);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetSustainGain(float SustainGain);
	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModularSynthComponent">();
	}
	static class UModularSynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModularSynthComponent>();
	}
};
static_assert(alignof(UModularSynthComponent) == 0x000010, "Wrong alignment on UModularSynthComponent");
static_assert(sizeof(UModularSynthComponent) == 0x000FF0, "Wrong size on UModularSynthComponent");
static_assert(offsetof(UModularSynthComponent, VoiceCount) == 0x000920, "Member 'UModularSynthComponent::VoiceCount' has a wrong offset!");

class USourceEffectBitCrusherPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0xF8];
	struct FSourceEffectBitCrusherSettings        Settings;

public:
	void SetBitModulator(const class USoundModulatorBase* Modulator);
	void SetBitModulators(const TSet<class USoundModulatorBase*>& InModulators);
	void SetBits(float Bits);
	void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);
	void SetSampleRate(float SampleRate);
	void SetSampleRateModulator(const class USoundModulatorBase* Modulator);
	void SetSampleRateModulators(const TSet<class USoundModulatorBase*>& InModulators);
	void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectBitCrusherPreset">();
	}
	static class USourceEffectBitCrusherPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectBitCrusherPreset>();
	}
};
static_assert(alignof(USourceEffectBitCrusherPreset) == 0x000008, "Wrong alignment on USourceEffectBitCrusherPreset");
static_assert(sizeof(USourceEffectBitCrusherPreset) == 0x000230, "Wrong size on USourceEffectBitCrusherPreset");
static_assert(offsetof(USourceEffectBitCrusherPreset, Settings) == 0x000160, "Member 'USourceEffectBitCrusherPreset::Settings' has a wrong offset!");

class USubmixEffectStereoToQuadPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x30];
	struct FSubmixEffectStereoToQuadSettings      Settings;

public:
	void SetSettings(const struct FSubmixEffectStereoToQuadSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectStereoToQuadPreset">();
	}
	static class USubmixEffectStereoToQuadPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectStereoToQuadPreset>();
	}
};
static_assert(alignof(USubmixEffectStereoToQuadPreset) == 0x000008, "Wrong alignment on USubmixEffectStereoToQuadPreset");
static_assert(sizeof(USubmixEffectStereoToQuadPreset) == 0x0000A0, "Wrong size on USubmixEffectStereoToQuadPreset");
static_assert(offsetof(USubmixEffectStereoToQuadPreset, Settings) == 0x000098, "Member 'USubmixEffectStereoToQuadPreset::Settings' has a wrong offset!");

class USourceEffectChorusPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x280];
	struct FSourceEffectChorusSettings            Settings;

public:
	void SetDepth(float Depth);
	void SetDepthModulator(const class USoundModulatorBase* Modulator);
	void SetDepthModulators(const TSet<class USoundModulatorBase*>& Modulators);
	void SetDry(float DryAmount);
	void SetDryModulator(const class USoundModulatorBase* Modulator);
	void SetDryModulators(const TSet<class USoundModulatorBase*>& Modulators);
	void SetFeedback(float Feedback);
	void SetFeedbackModulator(const class USoundModulatorBase* Modulator);
	void SetFeedbackModulators(const TSet<class USoundModulatorBase*>& Modulators);
	void SetFrequency(float Frequency);
	void SetFrequencyModulator(const class USoundModulatorBase* Modulator);
	void SetFrequencyModulators(const TSet<class USoundModulatorBase*>& Modulators);
	void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);
	void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings_0);
	void SetSpread(float Spread);
	void SetSpreadModulator(const class USoundModulatorBase* Modulator);
	void SetSpreadModulators(const TSet<class USoundModulatorBase*>& Modulators);
	void SetWet(float WetAmount);
	void SetWetModulator(const class USoundModulatorBase* Modulator);
	void SetWetModulators(const TSet<class USoundModulatorBase*>& Modulators);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectChorusPreset">();
	}
	static class USourceEffectChorusPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectChorusPreset>();
	}
};
static_assert(alignof(USourceEffectChorusPreset) == 0x000008, "Wrong alignment on USourceEffectChorusPreset");
static_assert(sizeof(USourceEffectChorusPreset) == 0x000540, "Wrong size on USourceEffectChorusPreset");
static_assert(offsetof(USourceEffectChorusPreset, Settings) == 0x0002E8, "Member 'USourceEffectChorusPreset::Settings' has a wrong offset!");

class USourceEffectConvolutionReverbPreset final : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                  ImpulseResponse;
	struct FSourceEffectConvolutionReverbSettings Settings;
	ESubmixEffectConvolutionReverbBlockSize       BlockSize;
	bool                                          bEnableHardwareAcceleration;
	uint8                                         Pad_82[0x3E];

public:
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
	void SetSettings(const struct FSourceEffectConvolutionReverbSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectConvolutionReverbPreset">();
	}
	static class USourceEffectConvolutionReverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectConvolutionReverbPreset>();
	}
};
static_assert(alignof(USourceEffectConvolutionReverbPreset) == 0x000008, "Wrong alignment on USourceEffectConvolutionReverbPreset");
static_assert(sizeof(USourceEffectConvolutionReverbPreset) == 0x0000C0, "Wrong size on USourceEffectConvolutionReverbPreset");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, ImpulseResponse) == 0x000068, "Member 'USourceEffectConvolutionReverbPreset::ImpulseResponse' has a wrong offset!");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, Settings) == 0x000070, "Member 'USourceEffectConvolutionReverbPreset::Settings' has a wrong offset!");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, BlockSize) == 0x000080, "Member 'USourceEffectConvolutionReverbPreset::BlockSize' has a wrong offset!");
static_assert(offsetof(USourceEffectConvolutionReverbPreset, bEnableHardwareAcceleration) == 0x000081, "Member 'USourceEffectConvolutionReverbPreset::bEnableHardwareAcceleration' has a wrong offset!");

class USourceEffectDynamicsProcessorPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x50];
	struct FSourceEffectDynamicsProcessorSettings Settings;

public:
	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectDynamicsProcessorPreset">();
	}
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectDynamicsProcessorPreset>();
	}
};
static_assert(alignof(USourceEffectDynamicsProcessorPreset) == 0x000008, "Wrong alignment on USourceEffectDynamicsProcessorPreset");
static_assert(sizeof(USourceEffectDynamicsProcessorPreset) == 0x0000E0, "Wrong size on USourceEffectDynamicsProcessorPreset");
static_assert(offsetof(USourceEffectDynamicsProcessorPreset, Settings) == 0x0000B8, "Member 'USourceEffectDynamicsProcessorPreset::Settings' has a wrong offset!");

class USubmixEffectFlexiverbPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x38];
	struct FSubmixEffectFlexiverbSettings         Settings;

public:
	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectFlexiverbPreset">();
	}
	static class USubmixEffectFlexiverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectFlexiverbPreset>();
	}
};
static_assert(alignof(USubmixEffectFlexiverbPreset) == 0x000008, "Wrong alignment on USubmixEffectFlexiverbPreset");
static_assert(sizeof(USubmixEffectFlexiverbPreset) == 0x0000B0, "Wrong size on USubmixEffectFlexiverbPreset");
static_assert(offsetof(USubmixEffectFlexiverbPreset, Settings) == 0x0000A0, "Member 'USubmixEffectFlexiverbPreset::Settings' has a wrong offset!");

class UEnvelopeFollowerListener final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(float EnvelopeValue)> OnEnvelopeFollowerUpdate;
	uint8                                         Pad_B0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvelopeFollowerListener">();
	}
	static class UEnvelopeFollowerListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvelopeFollowerListener>();
	}
};
static_assert(alignof(UEnvelopeFollowerListener) == 0x000008, "Wrong alignment on UEnvelopeFollowerListener");
static_assert(sizeof(UEnvelopeFollowerListener) == 0x0000C0, "Wrong size on UEnvelopeFollowerListener");
static_assert(offsetof(UEnvelopeFollowerListener, OnEnvelopeFollowerUpdate) == 0x0000A0, "Member 'UEnvelopeFollowerListener::OnEnvelopeFollowerUpdate' has a wrong offset!");

class USourceEffectEnvelopeFollowerPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x34];
	struct FSourceEffectEnvelopeFollowerSettings  Settings;

public:
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectEnvelopeFollowerPreset">();
	}
	static class USourceEffectEnvelopeFollowerPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectEnvelopeFollowerPreset>();
	}
};
static_assert(alignof(USourceEffectEnvelopeFollowerPreset) == 0x000008, "Wrong alignment on USourceEffectEnvelopeFollowerPreset");
static_assert(sizeof(USourceEffectEnvelopeFollowerPreset) == 0x0000A8, "Wrong size on USourceEffectEnvelopeFollowerPreset");
static_assert(offsetof(USourceEffectEnvelopeFollowerPreset, Settings) == 0x00009C, "Member 'USourceEffectEnvelopeFollowerPreset::Settings' has a wrong offset!");

class USourceEffectEQPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x38];
	struct FSourceEffectEQSettings                Settings;

public:
	void SetSettings(const struct FSourceEffectEQSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectEQPreset">();
	}
	static class USourceEffectEQPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectEQPreset>();
	}
};
static_assert(alignof(USourceEffectEQPreset) == 0x000008, "Wrong alignment on USourceEffectEQPreset");
static_assert(sizeof(USourceEffectEQPreset) == 0x0000B0, "Wrong size on USourceEffectEQPreset");
static_assert(offsetof(USourceEffectEQPreset, Settings) == 0x0000A0, "Member 'USourceEffectEQPreset::Settings' has a wrong offset!");

class UGranularSynth final : public USynthComponent
{
public:
	class USoundWave*                             GranulatedSoundWave;
	uint8                                         Pad_928[0x3D8];

public:
	void NoteOff(const float Note, const bool bKill);
	void NoteOn(const float Note, const int32 Velocity, const float Duration);
	void SetAttackTime(const float AttackTimeMsec);
	void SetDecayTime(const float DecayTimeMsec);
	void SetGrainDuration(const float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetGrainEnvelopeType(const EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainPan(const float BasePan, const struct FVector2D& PanRange);
	void SetGrainPitch(const float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainProbability(const float InGrainProbability);
	void SetGrainsPerSecond(const float InGrainsPerSecond);
	void SetGrainVolume(const float BaseVolume, const struct FVector2D& VolumeRange);
	void SetPlaybackSpeed(const float InPlayheadRate);
	void SetPlayheadTime(const float InPositionSec, const float LerpTimeSec, EGranularSynthSeekType SeekType);
	void SetReleaseTimeMsec(const float ReleaseTimeMsec);
	void SetScrubMode(const bool bScrubMode);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetSustainGain(const float SustainGain);

	float GetCurrentPlayheadTime() const;
	float GetSampleDuration() const;
	bool IsLoaded() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GranularSynth">();
	}
	static class UGranularSynth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGranularSynth>();
	}
};
static_assert(alignof(UGranularSynth) == 0x000010, "Wrong alignment on UGranularSynth");
static_assert(sizeof(UGranularSynth) == 0x000D00, "Wrong size on UGranularSynth");
static_assert(offsetof(UGranularSynth, GranulatedSoundWave) == 0x000920, "Member 'UGranularSynth::GranulatedSoundWave' has a wrong offset!");

class USourceEffectFilterPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x48];
	struct FSourceEffectFilterSettings            Settings;

public:
	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectFilterPreset">();
	}
	static class USourceEffectFilterPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectFilterPreset>();
	}
};
static_assert(alignof(USourceEffectFilterPreset) == 0x000008, "Wrong alignment on USourceEffectFilterPreset");
static_assert(sizeof(USourceEffectFilterPreset) == 0x0000D0, "Wrong size on USourceEffectFilterPreset");
static_assert(offsetof(USourceEffectFilterPreset, Settings) == 0x0000B0, "Member 'USourceEffectFilterPreset::Settings' has a wrong offset!");

class USourceEffectFoldbackDistortionPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x34];
	struct FSourceEffectFoldbackDistortionSettings Settings;

public:
	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectFoldbackDistortionPreset">();
	}
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectFoldbackDistortionPreset>();
	}
};
static_assert(alignof(USourceEffectFoldbackDistortionPreset) == 0x000008, "Wrong alignment on USourceEffectFoldbackDistortionPreset");
static_assert(sizeof(USourceEffectFoldbackDistortionPreset) == 0x0000A8, "Wrong size on USourceEffectFoldbackDistortionPreset");
static_assert(offsetof(USourceEffectFoldbackDistortionPreset, Settings) == 0x00009C, "Member 'USourceEffectFoldbackDistortionPreset::Settings' has a wrong offset!");

class USynth2DSlider final : public UWidget
{
public:
	float                                         ValueX;
	float                                         ValueY;
	TDelegate<void()>                             ValueXDelegate;
	TDelegate<void()>                             ValueYDelegate;
	uint8                                         Pad_168[0x8];
	struct FSynth2DSliderStyle                    WidgetStyle;
	struct FLinearColor                           SliderHandleColor;
	bool                                          IndentHandle;
	bool                                          Locked;
	uint8                                         Pad_562[0x2];
	float                                         StepSize;
	bool                                          IsFocusable;
	uint8                                         Pad_569[0x7];
	TMulticastInlineDelegate<void()>              OnMouseCaptureBegin;
	TMulticastInlineDelegate<void()>              OnMouseCaptureEnd;
	TMulticastInlineDelegate<void()>              OnControllerCaptureBegin;
	TMulticastInlineDelegate<void()>              OnControllerCaptureEnd;
	TMulticastInlineDelegate<void(float Value)>   OnValueChangedX;
	TMulticastInlineDelegate<void(float Value)>   OnValueChangedY;
	uint8                                         Pad_5D0[0x10];

public:
	void SetIndentHandle(bool InValue);
	void SetLocked(bool InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetStepSize(float InValue);
	void SetValue(const struct FVector2D& InValue);

	struct FVector2D GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Synth2DSlider">();
	}
	static class USynth2DSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynth2DSlider>();
	}
};
static_assert(alignof(USynth2DSlider) == 0x000010, "Wrong alignment on USynth2DSlider");
static_assert(sizeof(USynth2DSlider) == 0x0005E0, "Wrong size on USynth2DSlider");
static_assert(offsetof(USynth2DSlider, ValueX) == 0x000148, "Member 'USynth2DSlider::ValueX' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, ValueY) == 0x00014C, "Member 'USynth2DSlider::ValueY' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, ValueXDelegate) == 0x000150, "Member 'USynth2DSlider::ValueXDelegate' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, ValueYDelegate) == 0x00015C, "Member 'USynth2DSlider::ValueYDelegate' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, WidgetStyle) == 0x000170, "Member 'USynth2DSlider::WidgetStyle' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, SliderHandleColor) == 0x000550, "Member 'USynth2DSlider::SliderHandleColor' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, IndentHandle) == 0x000560, "Member 'USynth2DSlider::IndentHandle' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, Locked) == 0x000561, "Member 'USynth2DSlider::Locked' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, StepSize) == 0x000564, "Member 'USynth2DSlider::StepSize' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, IsFocusable) == 0x000568, "Member 'USynth2DSlider::IsFocusable' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, OnMouseCaptureBegin) == 0x000570, "Member 'USynth2DSlider::OnMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, OnMouseCaptureEnd) == 0x000580, "Member 'USynth2DSlider::OnMouseCaptureEnd' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, OnControllerCaptureBegin) == 0x000590, "Member 'USynth2DSlider::OnControllerCaptureBegin' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, OnControllerCaptureEnd) == 0x0005A0, "Member 'USynth2DSlider::OnControllerCaptureEnd' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, OnValueChangedX) == 0x0005B0, "Member 'USynth2DSlider::OnValueChangedX' has a wrong offset!");
static_assert(offsetof(USynth2DSlider, OnValueChangedY) == 0x0005C0, "Member 'USynth2DSlider::OnValueChangedY' has a wrong offset!");

class USourceEffectMidSideSpreaderPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x30];
	struct FSourceEffectMidSideSpreaderSettings   Settings;

public:
	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectMidSideSpreaderPreset">();
	}
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectMidSideSpreaderPreset>();
	}
};
static_assert(alignof(USourceEffectMidSideSpreaderPreset) == 0x000008, "Wrong alignment on USourceEffectMidSideSpreaderPreset");
static_assert(sizeof(USourceEffectMidSideSpreaderPreset) == 0x0000A0, "Wrong size on USourceEffectMidSideSpreaderPreset");
static_assert(offsetof(USourceEffectMidSideSpreaderPreset, Settings) == 0x000098, "Member 'USourceEffectMidSideSpreaderPreset::Settings' has a wrong offset!");

class USourceEffectMotionFilterPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0xA0];
	struct FSourceEffectMotionFilterSettings      Settings;

public:
	void SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectMotionFilterPreset">();
	}
	static class USourceEffectMotionFilterPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectMotionFilterPreset>();
	}
};
static_assert(alignof(USourceEffectMotionFilterPreset) == 0x000008, "Wrong alignment on USourceEffectMotionFilterPreset");
static_assert(sizeof(USourceEffectMotionFilterPreset) == 0x000180, "Wrong size on USourceEffectMotionFilterPreset");
static_assert(offsetof(USourceEffectMotionFilterPreset, Settings) == 0x000108, "Member 'USourceEffectMotionFilterPreset::Settings' has a wrong offset!");

class USubmixEffectMultibandCompressorPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x60];
	struct FSubmixEffectMultibandCompressorSettings Settings;

public:
	void ResetKey();
	void SetAudioBus(class UAudioBus* AudioBus);
	void SetExternalSubmix(class USoundSubmix* Submix);
	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectMultibandCompressorPreset">();
	}
	static class USubmixEffectMultibandCompressorPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectMultibandCompressorPreset>();
	}
};
static_assert(alignof(USubmixEffectMultibandCompressorPreset) == 0x000008, "Wrong alignment on USubmixEffectMultibandCompressorPreset");
static_assert(sizeof(USubmixEffectMultibandCompressorPreset) == 0x000100, "Wrong size on USubmixEffectMultibandCompressorPreset");
static_assert(offsetof(USubmixEffectMultibandCompressorPreset, Settings) == 0x0000C8, "Member 'USubmixEffectMultibandCompressorPreset::Settings' has a wrong offset!");

class USourceEffectPannerPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x30];
	struct FSourceEffectPannerSettings            Settings;

public:
	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectPannerPreset">();
	}
	static class USourceEffectPannerPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectPannerPreset>();
	}
};
static_assert(alignof(USourceEffectPannerPreset) == 0x000008, "Wrong alignment on USourceEffectPannerPreset");
static_assert(sizeof(USourceEffectPannerPreset) == 0x0000A0, "Wrong size on USourceEffectPannerPreset");
static_assert(offsetof(USourceEffectPannerPreset, Settings) == 0x000098, "Member 'USourceEffectPannerPreset::Settings' has a wrong offset!");

class USynthComponentToneGenerator final : public USynthComponent
{
public:
	float                                         Frequency;
	float                                         Volume;
	struct FRuntimeFloatCurve                     DistanceAttenuationCurve;
	struct FVector2D                              DistanceRange;
	float                                         AttenuationDbAtMaxRange;
	uint8                                         Pad_9C4[0x4C];

public:
	void SetFrequency(float InFrequency);
	void SetVolume(float InVolume);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponentToneGenerator">();
	}
	static class USynthComponentToneGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponentToneGenerator>();
	}
};
static_assert(alignof(USynthComponentToneGenerator) == 0x000010, "Wrong alignment on USynthComponentToneGenerator");
static_assert(sizeof(USynthComponentToneGenerator) == 0x000A10, "Wrong size on USynthComponentToneGenerator");
static_assert(offsetof(USynthComponentToneGenerator, Frequency) == 0x000920, "Member 'USynthComponentToneGenerator::Frequency' has a wrong offset!");
static_assert(offsetof(USynthComponentToneGenerator, Volume) == 0x000924, "Member 'USynthComponentToneGenerator::Volume' has a wrong offset!");
static_assert(offsetof(USynthComponentToneGenerator, DistanceAttenuationCurve) == 0x000928, "Member 'USynthComponentToneGenerator::DistanceAttenuationCurve' has a wrong offset!");
static_assert(offsetof(USynthComponentToneGenerator, DistanceRange) == 0x0009B0, "Member 'USynthComponentToneGenerator::DistanceRange' has a wrong offset!");
static_assert(offsetof(USynthComponentToneGenerator, AttenuationDbAtMaxRange) == 0x0009C0, "Member 'USynthComponentToneGenerator::AttenuationDbAtMaxRange' has a wrong offset!");

class USourceEffectPhaserPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x38];
	struct FSourceEffectPhaserSettings            Settings;

public:
	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectPhaserPreset">();
	}
	static class USourceEffectPhaserPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectPhaserPreset>();
	}
};
static_assert(alignof(USourceEffectPhaserPreset) == 0x000008, "Wrong alignment on USourceEffectPhaserPreset");
static_assert(sizeof(USourceEffectPhaserPreset) == 0x0000B0, "Wrong size on USourceEffectPhaserPreset");
static_assert(offsetof(USourceEffectPhaserPreset, Settings) == 0x0000A0, "Member 'USourceEffectPhaserPreset::Settings' has a wrong offset!");

class USourceEffectRingModulationPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x48];
	struct FSourceEffectRingModulationSettings    Settings;

public:
	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectRingModulationPreset">();
	}
	static class USourceEffectRingModulationPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectRingModulationPreset>();
	}
};
static_assert(alignof(USourceEffectRingModulationPreset) == 0x000008, "Wrong alignment on USourceEffectRingModulationPreset");
static_assert(sizeof(USourceEffectRingModulationPreset) == 0x0000D0, "Wrong size on USourceEffectRingModulationPreset");
static_assert(offsetof(USourceEffectRingModulationPreset, Settings) == 0x0000B0, "Member 'USourceEffectRingModulationPreset::Settings' has a wrong offset!");

class USourceEffectSimpleDelayPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x40];
	struct FSourceEffectSimpleDelaySettings       Settings;

public:
	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectSimpleDelayPreset">();
	}
	static class USourceEffectSimpleDelayPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectSimpleDelayPreset>();
	}
};
static_assert(alignof(USourceEffectSimpleDelayPreset) == 0x000008, "Wrong alignment on USourceEffectSimpleDelayPreset");
static_assert(sizeof(USourceEffectSimpleDelayPreset) == 0x0000C0, "Wrong size on USourceEffectSimpleDelayPreset");
static_assert(offsetof(USourceEffectSimpleDelayPreset, Settings) == 0x0000A8, "Member 'USourceEffectSimpleDelayPreset::Settings' has a wrong offset!");

class USourceEffectStereoDelayPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x4C];
	struct FSourceEffectStereoDelaySettings       Settings;

public:
	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectStereoDelayPreset">();
	}
	static class USourceEffectStereoDelayPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectStereoDelayPreset>();
	}
};
static_assert(alignof(USourceEffectStereoDelayPreset) == 0x000008, "Wrong alignment on USourceEffectStereoDelayPreset");
static_assert(sizeof(USourceEffectStereoDelayPreset) == 0x0000D8, "Wrong size on USourceEffectStereoDelayPreset");
static_assert(offsetof(USourceEffectStereoDelayPreset, Settings) == 0x0000B4, "Member 'USourceEffectStereoDelayPreset::Settings' has a wrong offset!");

class USourceEffectWaveShaperPreset final : public USoundEffectSourcePreset
{
public:
	uint8                                         Pad_68[0x30];
	struct FSourceEffectWaveShaperSettings        Settings;

public:
	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SourceEffectWaveShaperPreset">();
	}
	static class USourceEffectWaveShaperPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USourceEffectWaveShaperPreset>();
	}
};
static_assert(alignof(USourceEffectWaveShaperPreset) == 0x000008, "Wrong alignment on USourceEffectWaveShaperPreset");
static_assert(sizeof(USourceEffectWaveShaperPreset) == 0x0000A0, "Wrong size on USourceEffectWaveShaperPreset");
static_assert(offsetof(USourceEffectWaveShaperPreset, Settings) == 0x000098, "Member 'USourceEffectWaveShaperPreset::Settings' has a wrong offset!");

class USubmixEffectConvolutionReverbPreset final : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                  ImpulseResponse;
	struct FSubmixEffectConvolutionReverbSettings Settings;
	ESubmixEffectConvolutionReverbBlockSize       BlockSize;
	bool                                          bEnableHardwareAcceleration;
	uint8                                         Pad_A2[0x5E];

public:
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectConvolutionReverbPreset">();
	}
	static class USubmixEffectConvolutionReverbPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectConvolutionReverbPreset>();
	}
};
static_assert(alignof(USubmixEffectConvolutionReverbPreset) == 0x000008, "Wrong alignment on USubmixEffectConvolutionReverbPreset");
static_assert(sizeof(USubmixEffectConvolutionReverbPreset) == 0x000100, "Wrong size on USubmixEffectConvolutionReverbPreset");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, ImpulseResponse) == 0x000068, "Member 'USubmixEffectConvolutionReverbPreset::ImpulseResponse' has a wrong offset!");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, Settings) == 0x000070, "Member 'USubmixEffectConvolutionReverbPreset::Settings' has a wrong offset!");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, BlockSize) == 0x0000A0, "Member 'USubmixEffectConvolutionReverbPreset::BlockSize' has a wrong offset!");
static_assert(offsetof(USubmixEffectConvolutionReverbPreset, bEnableHardwareAcceleration) == 0x0000A1, "Member 'USubmixEffectConvolutionReverbPreset::bEnableHardwareAcceleration' has a wrong offset!");

class USubmixEffectDelayPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x34];
	struct FSubmixEffectDelaySettings             Settings;
	struct FSubmixEffectDelaySettings             DynamicSettings;
	uint8                                         Pad_B4[0x4];

public:
	void SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void SetDelay(float Length);
	void SetInterpolationTime(float Time);
	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);

	float GetMaxDelayInMilliseconds() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectDelayPreset">();
	}
	static class USubmixEffectDelayPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectDelayPreset>();
	}
};
static_assert(alignof(USubmixEffectDelayPreset) == 0x000008, "Wrong alignment on USubmixEffectDelayPreset");
static_assert(sizeof(USubmixEffectDelayPreset) == 0x0000B8, "Wrong size on USubmixEffectDelayPreset");
static_assert(offsetof(USubmixEffectDelayPreset, Settings) == 0x00009C, "Member 'USubmixEffectDelayPreset::Settings' has a wrong offset!");
static_assert(offsetof(USubmixEffectDelayPreset, DynamicSettings) == 0x0000A8, "Member 'USubmixEffectDelayPreset::DynamicSettings' has a wrong offset!");

class USubmixEffectFilterPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x34];
	struct FSubmixEffectFilterSettings            Settings;

public:
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterQ(float InQ);
	void SetFilterQMod(float InQ);
	void SetFilterType(ESubmixFilterType InType);
	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectFilterPreset">();
	}
	static class USubmixEffectFilterPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectFilterPreset>();
	}
};
static_assert(alignof(USubmixEffectFilterPreset) == 0x000008, "Wrong alignment on USubmixEffectFilterPreset");
static_assert(sizeof(USubmixEffectFilterPreset) == 0x0000A8, "Wrong size on USubmixEffectFilterPreset");
static_assert(offsetof(USubmixEffectFilterPreset, Settings) == 0x00009C, "Member 'USubmixEffectFilterPreset::Settings' has a wrong offset!");

class USubmixEffectStereoDelayPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x4C];
	struct FSubmixEffectStereoDelaySettings       Settings;

public:
	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectStereoDelayPreset">();
	}
	static class USubmixEffectStereoDelayPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectStereoDelayPreset>();
	}
};
static_assert(alignof(USubmixEffectStereoDelayPreset) == 0x000008, "Wrong alignment on USubmixEffectStereoDelayPreset");
static_assert(sizeof(USubmixEffectStereoDelayPreset) == 0x0000D8, "Wrong size on USubmixEffectStereoDelayPreset");
static_assert(offsetof(USubmixEffectStereoDelayPreset, Settings) == 0x0000B4, "Member 'USubmixEffectStereoDelayPreset::Settings' has a wrong offset!");

class USubmixEffectTapDelayPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_68[0x40];
	struct FSubmixEffectTapDelaySettings          Settings;
	uint8                                         Pad_C0[0x18];

public:
	void AddTap(int32* TapId);
	float GetMaxDelayInMilliseconds();
	void GetTap(int32 TapId, struct FTapDelayInfo* TapInfo);
	void GetTapIds(TArray<int32>* TapIds);
	void RemoveTap(int32 TapId);
	void SetInterpolationTime(float Time);
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
	void SetTap(int32 TapId, const struct FTapDelayInfo& TapInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixEffectTapDelayPreset">();
	}
	static class USubmixEffectTapDelayPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixEffectTapDelayPreset>();
	}
};
static_assert(alignof(USubmixEffectTapDelayPreset) == 0x000008, "Wrong alignment on USubmixEffectTapDelayPreset");
static_assert(sizeof(USubmixEffectTapDelayPreset) == 0x0000D8, "Wrong size on USubmixEffectTapDelayPreset");
static_assert(offsetof(USubmixEffectTapDelayPreset, Settings) == 0x0000A8, "Member 'USubmixEffectTapDelayPreset::Settings' has a wrong offset!");

class UMonoWaveTableSynthPreset final : public UObject
{
public:
	class FString                                 PresetName;
	uint8                                         bLockKeyframesToGridBool : 1;
	uint8                                         Pad_39[0x3];
	int32                                         LockKeyframesToGrid;
	int32                                         WaveTableResolution;
	uint8                                         Pad_44[0x4];
	TArray<struct FRuntimeFloatCurve>             WaveTable;
	uint8                                         bNormalizeWaveTables : 1;
	uint8                                         Pad_59[0x117];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MonoWaveTableSynthPreset">();
	}
	static class UMonoWaveTableSynthPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMonoWaveTableSynthPreset>();
	}
};
static_assert(alignof(UMonoWaveTableSynthPreset) == 0x000008, "Wrong alignment on UMonoWaveTableSynthPreset");
static_assert(sizeof(UMonoWaveTableSynthPreset) == 0x000170, "Wrong size on UMonoWaveTableSynthPreset");
static_assert(offsetof(UMonoWaveTableSynthPreset, PresetName) == 0x000028, "Member 'UMonoWaveTableSynthPreset::PresetName' has a wrong offset!");
static_assert(offsetof(UMonoWaveTableSynthPreset, LockKeyframesToGrid) == 0x00003C, "Member 'UMonoWaveTableSynthPreset::LockKeyframesToGrid' has a wrong offset!");
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTableResolution) == 0x000040, "Member 'UMonoWaveTableSynthPreset::WaveTableResolution' has a wrong offset!");
static_assert(offsetof(UMonoWaveTableSynthPreset, WaveTable) == 0x000048, "Member 'UMonoWaveTableSynthPreset::WaveTable' has a wrong offset!");

class USynthComponentMonoWaveTable final : public USynthComponent
{
public:
	TMulticastInlineDelegate<void(int32 TableIndex)> OnTableAltered;
	TMulticastInlineDelegate<void()>              OnNumTablesChanged;
	class UMonoWaveTableSynthPreset*              CurrentPreset;
	uint8                                         Pad_948[0x728];

public:
	float GetCurveTangent(int32 TableIndex);
	int32 GetNumTableEntries();
	void NoteOff(const float InMidiNote);
	void NoteOn(const float InMidiNote, const float InVelocity);
	void RefreshAllWaveTables();
	void RefreshWaveTable(int32 Index_0);
	void SetAmpEnvelopeAttackTime(const float InAttackTimeMsec);
	void SetAmpEnvelopeBiasDepth(const float InDepth);
	void SetAmpEnvelopeBiasInvert(const bool bInBiasInvert);
	void SetAmpEnvelopeDecayTime(const float InDecayTimeMsec);
	void SetAmpEnvelopeDepth(const float InDepth);
	void SetAmpEnvelopeInvert(const bool bInInvert);
	void SetAmpEnvelopeReleaseTime(const float InReleaseTimeMsec);
	void SetAmpEnvelopeSustainGain(const float InSustainGain);
	bool SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int32 TableIndex);
	bool SetCurveTangent(int32 TableIndex, float InNewTangent);
	bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, const float NewValue);
	void SetFilterEnvelopeAttackTime(const float InAttackTimeMsec);
	void SetFilterEnvelopeBiasDepth(const float InDepth);
	void SetFilterEnvelopeBiasInvert(const bool bInBiasInvert);
	void SetFilterEnvelopeDepth(const float InDepth);
	void SetFilterEnvelopeInvert(const bool bInInvert);
	void SetFilterEnvelopenDecayTime(const float InDecayTimeMsec);
	void SetFilterEnvelopeReleaseTime(const float InReleaseTimeMsec);
	void SetFilterEnvelopeSustainGain(const float InSustainGain);
	void SetFrequency(const float FrequencyHz);
	void SetFrequencyPitchBend(const float FrequencyOffsetCents);
	void SetFrequencyWithMidiNote(const float InMidiNote);
	void SetLowPassFilterResonance(float InNewQ);
	void SetPositionEnvelopeAttackTime(const float InAttackTimeMsec);
	void SetPositionEnvelopeBiasDepth(const float InDepth);
	void SetPositionEnvelopeBiasInvert(const bool bInBiasInvert);
	void SetPositionEnvelopeDecayTime(const float InDecayTimeMsec);
	void SetPositionEnvelopeDepth(const float InDepth);
	void SetPositionEnvelopeInvert(const bool bInInvert);
	void SetPositionEnvelopeReleaseTime(const float InReleaseTimeMsec);
	void SetPositionEnvelopeSustainGain(const float InSustainGain);
	void SetPosLfoDepth(const float InLfoDepth);
	void SetPosLfoFrequency(const float InLfoFrequency);
	void SetPosLfoType(const ESynthLFOType InLfoType);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetWaveTablePosition(float InPosition);

	TArray<float> GetKeyFrameValuesForTable(float TableIndex) const;
	int32 GetMaxTableIndex() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponentMonoWaveTable">();
	}
	static class USynthComponentMonoWaveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponentMonoWaveTable>();
	}
};
static_assert(alignof(USynthComponentMonoWaveTable) == 0x000010, "Wrong alignment on USynthComponentMonoWaveTable");
static_assert(sizeof(USynthComponentMonoWaveTable) == 0x001070, "Wrong size on USynthComponentMonoWaveTable");
static_assert(offsetof(USynthComponentMonoWaveTable, OnTableAltered) == 0x000920, "Member 'USynthComponentMonoWaveTable::OnTableAltered' has a wrong offset!");
static_assert(offsetof(USynthComponentMonoWaveTable, OnNumTablesChanged) == 0x000930, "Member 'USynthComponentMonoWaveTable::OnNumTablesChanged' has a wrong offset!");
static_assert(offsetof(USynthComponentMonoWaveTable, CurrentPreset) == 0x000940, "Member 'USynthComponentMonoWaveTable::CurrentPreset' has a wrong offset!");

class USynthSamplePlayer final : public USynthComponent
{
public:
	class USoundWave*                             SoundWave;
	TMulticastInlineDelegate<void()>              OnSampleLoaded;
	TMulticastInlineDelegate<void(float ProgressPercent, float ProgressTimeSeconds)> OnSamplePlaybackProgress;
	uint8                                         Pad_948[0x108];

public:
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
	void SetPitch(float InPitch, float TimeSec);
	void SetScrubMode(bool bScrubMode);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetSoundWave(class USoundWave* InSoundWave);

	float GetCurrentPlaybackProgressPercent() const;
	float GetCurrentPlaybackProgressTime() const;
	float GetSampleDuration() const;
	bool IsLoaded() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthSamplePlayer">();
	}
	static class USynthSamplePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthSamplePlayer>();
	}
};
static_assert(alignof(USynthSamplePlayer) == 0x000010, "Wrong alignment on USynthSamplePlayer");
static_assert(sizeof(USynthSamplePlayer) == 0x000A50, "Wrong size on USynthSamplePlayer");
static_assert(offsetof(USynthSamplePlayer, SoundWave) == 0x000920, "Member 'USynthSamplePlayer::SoundWave' has a wrong offset!");
static_assert(offsetof(USynthSamplePlayer, OnSampleLoaded) == 0x000928, "Member 'USynthSamplePlayer::OnSampleLoaded' has a wrong offset!");
static_assert(offsetof(USynthSamplePlayer, OnSamplePlaybackProgress) == 0x000938, "Member 'USynthSamplePlayer::OnSamplePlaybackProgress' has a wrong offset!");

class USynthesisUtilitiesBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
	static float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthesisUtilitiesBlueprintFunctionLibrary">();
	}
	static class USynthesisUtilitiesBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthesisUtilitiesBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(USynthesisUtilitiesBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on USynthesisUtilitiesBlueprintFunctionLibrary");
static_assert(sizeof(USynthesisUtilitiesBlueprintFunctionLibrary) == 0x000028, "Wrong size on USynthesisUtilitiesBlueprintFunctionLibrary");

class USynthKnob final : public UWidget
{
public:
	float                                         Value;
	float                                         StepSize;
	float                                         MouseSpeed;
	float                                         MouseFineTuneSpeed;
	uint8                                         ShowTooltipInfo : 1;
	uint8                                         Pad_159[0x7];
	class FText                                   ParameterName;
	class FText                                   ParameterUnits;
	TDelegate<void()>                             ValueDelegate;
	uint8                                         Pad_19C[0x4];
	struct FSynthKnobStyle                        WidgetStyle;
	bool                                          Locked;
	bool                                          IsFocusable;
	uint8                                         Pad_4C2[0x6];
	TMulticastInlineDelegate<void()>              OnMouseCaptureBegin;
	TMulticastInlineDelegate<void()>              OnMouseCaptureEnd;
	TMulticastInlineDelegate<void()>              OnControllerCaptureBegin;
	TMulticastInlineDelegate<void()>              OnControllerCaptureEnd;
	TMulticastInlineDelegate<void(float Value)>   OnValueChanged;
	uint8                                         Pad_518[0x18];

public:
	void SetLocked(bool InValue);
	void SetStepSize(float InValue);
	void SetValue(float InValue);

	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthKnob">();
	}
	static class USynthKnob* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthKnob>();
	}
};
static_assert(alignof(USynthKnob) == 0x000010, "Wrong alignment on USynthKnob");
static_assert(sizeof(USynthKnob) == 0x000530, "Wrong size on USynthKnob");
static_assert(offsetof(USynthKnob, Value) == 0x000148, "Member 'USynthKnob::Value' has a wrong offset!");
static_assert(offsetof(USynthKnob, StepSize) == 0x00014C, "Member 'USynthKnob::StepSize' has a wrong offset!");
static_assert(offsetof(USynthKnob, MouseSpeed) == 0x000150, "Member 'USynthKnob::MouseSpeed' has a wrong offset!");
static_assert(offsetof(USynthKnob, MouseFineTuneSpeed) == 0x000154, "Member 'USynthKnob::MouseFineTuneSpeed' has a wrong offset!");
static_assert(offsetof(USynthKnob, ParameterName) == 0x000160, "Member 'USynthKnob::ParameterName' has a wrong offset!");
static_assert(offsetof(USynthKnob, ParameterUnits) == 0x000178, "Member 'USynthKnob::ParameterUnits' has a wrong offset!");
static_assert(offsetof(USynthKnob, ValueDelegate) == 0x000190, "Member 'USynthKnob::ValueDelegate' has a wrong offset!");
static_assert(offsetof(USynthKnob, WidgetStyle) == 0x0001A0, "Member 'USynthKnob::WidgetStyle' has a wrong offset!");
static_assert(offsetof(USynthKnob, Locked) == 0x0004C0, "Member 'USynthKnob::Locked' has a wrong offset!");
static_assert(offsetof(USynthKnob, IsFocusable) == 0x0004C1, "Member 'USynthKnob::IsFocusable' has a wrong offset!");
static_assert(offsetof(USynthKnob, OnMouseCaptureBegin) == 0x0004C8, "Member 'USynthKnob::OnMouseCaptureBegin' has a wrong offset!");
static_assert(offsetof(USynthKnob, OnMouseCaptureEnd) == 0x0004D8, "Member 'USynthKnob::OnMouseCaptureEnd' has a wrong offset!");
static_assert(offsetof(USynthKnob, OnControllerCaptureBegin) == 0x0004E8, "Member 'USynthKnob::OnControllerCaptureBegin' has a wrong offset!");
static_assert(offsetof(USynthKnob, OnControllerCaptureEnd) == 0x0004F8, "Member 'USynthKnob::OnControllerCaptureEnd' has a wrong offset!");
static_assert(offsetof(USynthKnob, OnValueChanged) == 0x000508, "Member 'USynthKnob::OnValueChanged' has a wrong offset!");

}
