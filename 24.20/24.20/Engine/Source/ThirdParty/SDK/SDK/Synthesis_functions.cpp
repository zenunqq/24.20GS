#pragma once

#include "Basic.hpp"

#include "Synthesis_classes.hpp"
#include "Synthesis_parameters.hpp"

namespace SDK
{

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const class FString& PresetName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("ModularSynthLibrary", "AddModularSynthPresetToBankAsset");

	Params::ModularSynthLibrary_AddModularSynthPresetToBankAsset Parms{};

	Parms.InBank = InBank;
	Parms.Preset = std::move(Preset);
	Parms.PresetName = std::move(PresetName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float DelayLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SubmixEffectDelayStatics", "SetDelayLength");

	Params::SubmixEffectDelayStatics_SetDelayLength Parms{};

	Parms.DelaySettings = std::move(DelaySettings);
	Parms.DelayLength = DelayLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	DelaySettings = std::move(Parms.DelaySettings);

	return Parms.ReturnValue;
}

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetInterpolationTime(struct FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SubmixEffectDelayStatics", "SetInterpolationTime");

	Params::SubmixEffectDelayStatics_SetInterpolationTime Parms{};

	Parms.DelaySettings = std::move(DelaySettings);
	Parms.InterpolationTime = InterpolationTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	DelaySettings = std::move(Parms.DelaySettings);

	return Parms.ReturnValue;
}

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetMaximumDelayLength(struct FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SubmixEffectDelayStatics", "SetMaximumDelayLength");

	Params::SubmixEffectDelayStatics_SetMaximumDelayLength Parms{};

	Parms.DelaySettings = std::move(DelaySettings);
	Parms.MaximumDelayLength = MaximumDelayLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	DelaySettings = std::move(Parms.DelaySettings);

	return Parms.ReturnValue;
}

struct FPatchId UModularSynthComponent::CreatePatch(const ESynth1PatchSource PatchSource, const TArray<struct FSynth1PatchCable>& PatchCables, const bool bEnableByDefault)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "CreatePatch");

	Params::ModularSynthComponent_CreatePatch Parms{};

	Parms.PatchSource = PatchSource;
	Parms.PatchCables = std::move(PatchCables);
	Parms.bEnableByDefault = bEnableByDefault;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UModularSynthComponent::NoteOff(const float Note, const bool bAllNotesOff, const bool bKillAllNotes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOff");

	Params::ModularSynthComponent_NoteOff Parms{};

	Parms.Note = Note;
	Parms.bAllNotesOff = bAllNotesOff;
	Parms.bKillAllNotes = bKillAllNotes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::NoteOn(const float Note, const int32 Velocity, const float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOn");

	Params::ModularSynthComponent_NoteOn Parms{};

	Parms.Note = Note;
	Parms.Velocity = Velocity;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetAttackTime");

	Params::ModularSynthComponent_SetAttackTime Parms{};

	Parms.AttackTimeMsec = AttackTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetChorusDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusDepth");

	Params::ModularSynthComponent_SetChorusDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusEnabled");

	Params::ModularSynthComponent_SetChorusEnabled Parms{};

	Parms.EnableChorus = EnableChorus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetChorusFeedback(float Feedback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFeedback");

	Params::ModularSynthComponent_SetChorusFeedback Parms{};

	Parms.Feedback = Feedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetChorusFrequency(float Frequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFrequency");

	Params::ModularSynthComponent_SetChorusFrequency Parms{};

	Parms.Frequency = Frequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetDecayTime");

	Params::ModularSynthComponent_SetDecayTime Parms{};

	Parms.DecayTimeMsec = DecayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableLegato");

	Params::ModularSynthComponent_SetEnableLegato Parms{};

	Parms.LegatoEnabled = LegatoEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& PatchId, const bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePatch");

	Params::ModularSynthComponent_SetEnablePatch Parms{};

	Parms.PatchId = std::move(PatchId);
	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePolyphony");

	Params::ModularSynthComponent_SetEnablePolyphony Parms{};

	Parms.bEnablePolyphony = bEnablePolyphony;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableRetrigger");

	Params::ModularSynthComponent_SetEnableRetrigger Parms{};

	Parms.RetriggerEnabled = RetriggerEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableUnison");

	Params::ModularSynthComponent_SetEnableUnison Parms{};

	Parms.EnableUnison = EnableUnison;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterAlgorithm");

	Params::ModularSynthComponent_SetFilterAlgorithm Parms{};

	Parms.FilterAlgorithm = FilterAlgorithm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequency");

	Params::ModularSynthComponent_SetFilterFrequency Parms{};

	Parms.FilterFrequencyHz = FilterFrequencyHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequencyMod");

	Params::ModularSynthComponent_SetFilterFrequencyMod Parms{};

	Parms.FilterFrequencyHz = FilterFrequencyHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetFilterQ(float FilterQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQ");

	Params::ModularSynthComponent_SetFilterQ Parms{};

	Parms.FilterQ = FilterQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetFilterQMod(float FilterQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQMod");

	Params::ModularSynthComponent_SetFilterQMod Parms{};

	Parms.FilterQ = FilterQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterType");

	Params::ModularSynthComponent_SetFilterType Parms{};

	Parms.FilterType = FilterType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetGainDb(float GainDb)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetGainDb");

	Params::ModularSynthComponent_SetGainDb Parms{};

	Parms.GainDb = GainDb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOFrequency(int32 LFOIndex, float FrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequency");

	Params::ModularSynthComponent_SetLFOFrequency Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.FrequencyHz = FrequencyHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequencyMod");

	Params::ModularSynthComponent_SetLFOFrequencyMod Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.FrequencyModHz = FrequencyModHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOGain(int32 LFOIndex, float Gain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGain");

	Params::ModularSynthComponent_SetLFOGain Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.Gain = Gain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOGainMod(int32 LFOIndex, float GainMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGainMod");

	Params::ModularSynthComponent_SetLFOGainMod Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.GainMod = GainMod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOMode");

	Params::ModularSynthComponent_SetLFOMode Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.LFOMode = LFOMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOPatch");

	Params::ModularSynthComponent_SetLFOPatch Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.LFOPatchType = LFOPatchType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetLFOType(int32 LFOIndex, ESynthLFOType LFOType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOType");

	Params::ModularSynthComponent_SetLFOType Parms{};

	Parms.LFOIndex = LFOIndex;
	Parms.LFOType = LFOType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvAttackTime(const float AttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvAttackTime");

	Params::ModularSynthComponent_SetModEnvAttackTime Parms{};

	Parms.AttackTimeMsec = AttackTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvBiasInvert(const bool bInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasInvert");

	Params::ModularSynthComponent_SetModEnvBiasInvert Parms{};

	Parms.bInvert = bInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvBiasPatch(const ESynthModEnvBiasPatch InPatchType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasPatch");

	Params::ModularSynthComponent_SetModEnvBiasPatch Parms{};

	Parms.InPatchType = InPatchType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvDecayTime(const float DecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDecayTime");

	Params::ModularSynthComponent_SetModEnvDecayTime Parms{};

	Parms.DecayTimeMsec = DecayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvDepth(const float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDepth");

	Params::ModularSynthComponent_SetModEnvDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvInvert(const bool bInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvInvert");

	Params::ModularSynthComponent_SetModEnvInvert Parms{};

	Parms.bInvert = bInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvPatch(const ESynthModEnvPatch InPatchType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvPatch");

	Params::ModularSynthComponent_SetModEnvPatch Parms{};

	Parms.InPatchType = InPatchType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvReleaseTime(const float Release)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvReleaseTime");

	Params::ModularSynthComponent_SetModEnvReleaseTime Parms{};

	Parms.Release = Release;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetModEnvSustainGain(const float SustainGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvSustainGain");

	Params::ModularSynthComponent_SetModEnvSustainGain Parms{};

	Parms.SustainGain = SustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscCents(int32 OscIndex, float Cents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscCents");

	Params::ModularSynthComponent_SetOscCents Parms{};

	Parms.OscIndex = OscIndex;
	Parms.Cents = Cents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscFrequencyMod(int32 OscIndex, float OscFreqMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscFrequencyMod");

	Params::ModularSynthComponent_SetOscFrequencyMod Parms{};

	Parms.OscIndex = OscIndex;
	Parms.OscFreqMod = OscFreqMod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscGain(int32 OscIndex, float OscGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGain");

	Params::ModularSynthComponent_SetOscGain Parms{};

	Parms.OscIndex = OscIndex;
	Parms.OscGain = OscGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscGainMod(int32 OscIndex, float OscGainMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGainMod");

	Params::ModularSynthComponent_SetOscGainMod Parms{};

	Parms.OscIndex = OscIndex;
	Parms.OscGainMod = OscGainMod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscOctave(int32 OscIndex, float Octave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscOctave");

	Params::ModularSynthComponent_SetOscOctave Parms{};

	Parms.OscIndex = OscIndex;
	Parms.Octave = Octave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscPulsewidth(int32 OscIndex, float Pulsewidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscPulsewidth");

	Params::ModularSynthComponent_SetOscPulsewidth Parms{};

	Parms.OscIndex = OscIndex;
	Parms.Pulsewidth = Pulsewidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscSemitones(int32 OscIndex, float Semitones)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSemitones");

	Params::ModularSynthComponent_SetOscSemitones Parms{};

	Parms.OscIndex = OscIndex;
	Parms.Semitones = Semitones;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscSync(const bool bIsSynced)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSync");

	Params::ModularSynthComponent_SetOscSync Parms{};

	Parms.bIsSynced = bIsSynced;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetOscType(int32 OscIndex, ESynth1OscType OscType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscType");

	Params::ModularSynthComponent_SetOscType Parms{};

	Parms.OscIndex = OscIndex;
	Parms.OscType = OscType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetPan(float Pan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetPan");

	Params::ModularSynthComponent_SetPan Parms{};

	Parms.Pan = Pan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetPitchBend(float PitchBend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetPitchBend");

	Params::ModularSynthComponent_SetPitchBend Parms{};

	Parms.PitchBend = PitchBend;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetPortamento(float Portamento)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetPortamento");

	Params::ModularSynthComponent_SetPortamento Parms{};

	Parms.Portamento = Portamento;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetReleaseTime");

	Params::ModularSynthComponent_SetReleaseTime Parms{};

	Parms.ReleaseTimeMsec = ReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetSpread(float Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetSpread");

	Params::ModularSynthComponent_SetSpread Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayFeedback");

	Params::ModularSynthComponent_SetStereoDelayFeedback Parms{};

	Parms.DelayFeedback = DelayFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayIsEnabled");

	Params::ModularSynthComponent_SetStereoDelayIsEnabled Parms{};

	Parms.StereoDelayEnabled = StereoDelayEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayMode");

	Params::ModularSynthComponent_SetStereoDelayMode Parms{};

	Parms.StereoDelayMode = StereoDelayMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayRatio");

	Params::ModularSynthComponent_SetStereoDelayRatio Parms{};

	Parms.DelayRatio = DelayRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayTime");

	Params::ModularSynthComponent_SetStereoDelayTime Parms{};

	Parms.DelayTimeMsec = DelayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayWetlevel");

	Params::ModularSynthComponent_SetStereoDelayWetlevel Parms{};

	Parms.DelayWetlevel = DelayWetlevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetSustainGain(float SustainGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetSustainGain");

	Params::ModularSynthComponent_SetSustainGain Parms{};

	Parms.SustainGain = SustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UModularSynthComponent::SetSynthPreset(const struct FModularSynthPreset& SynthPreset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModularSynthComponent", "SetSynthPreset");

	Params::ModularSynthComponent_SetSynthPreset Parms{};

	Parms.SynthPreset = std::move(SynthPreset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetBitModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulator");

	Params::SourceEffectBitCrusherPreset_SetBitModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetBitModulators(const TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulators");

	Params::SourceEffectBitCrusherPreset_SetBitModulators Parms{};

	Parms.InModulators = std::move(InModulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetBits(float Bits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBits");

	Params::SourceEffectBitCrusherPreset_SetBits Parms{};

	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetModulationSettings");

	Params::SourceEffectBitCrusherPreset_SetModulationSettings Parms{};

	Parms.ModulationSettings = std::move(ModulationSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetSampleRate(float SampleRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRate");

	Params::SourceEffectBitCrusherPreset_SetSampleRate Parms{};

	Parms.SampleRate = SampleRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetSampleRateModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulator");

	Params::SourceEffectBitCrusherPreset_SetSampleRateModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetSampleRateModulators(const TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulators");

	Params::SourceEffectBitCrusherPreset_SetSampleRateModulators Parms{};

	Parms.InModulators = std::move(InModulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectBitCrusherPreset::SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSettings");

	Params::SourceEffectBitCrusherPreset_SetSettings Parms{};

	Parms.Settings_0 = std::move(Settings_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectStereoToQuadPreset::SetSettings(const struct FSubmixEffectStereoToQuadSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectStereoToQuadPreset", "SetSettings");

	Params::SubmixEffectStereoToQuadPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetDepth(float Depth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepth");

	Params::SourceEffectChorusPreset_SetDepth Parms{};

	Parms.Depth = Depth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetDepthModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulator");

	Params::SourceEffectChorusPreset_SetDepthModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetDepthModulators(const TSet<class USoundModulatorBase*>& Modulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulators");

	Params::SourceEffectChorusPreset_SetDepthModulators Parms{};

	Parms.Modulators = std::move(Modulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetDry(float DryAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDry");

	Params::SourceEffectChorusPreset_SetDry Parms{};

	Parms.DryAmount = DryAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetDryModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulator");

	Params::SourceEffectChorusPreset_SetDryModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetDryModulators(const TSet<class USoundModulatorBase*>& Modulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulators");

	Params::SourceEffectChorusPreset_SetDryModulators Parms{};

	Parms.Modulators = std::move(Modulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetFeedback(float Feedback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedback");

	Params::SourceEffectChorusPreset_SetFeedback Parms{};

	Parms.Feedback = Feedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetFeedbackModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulator");

	Params::SourceEffectChorusPreset_SetFeedbackModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetFeedbackModulators(const TSet<class USoundModulatorBase*>& Modulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulators");

	Params::SourceEffectChorusPreset_SetFeedbackModulators Parms{};

	Parms.Modulators = std::move(Modulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetFrequency(float Frequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequency");

	Params::SourceEffectChorusPreset_SetFrequency Parms{};

	Parms.Frequency = Frequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetFrequencyModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulator");

	Params::SourceEffectChorusPreset_SetFrequencyModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetFrequencyModulators(const TSet<class USoundModulatorBase*>& Modulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulators");

	Params::SourceEffectChorusPreset_SetFrequencyModulators Parms{};

	Parms.Modulators = std::move(Modulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetModulationSettings");

	Params::SourceEffectChorusPreset_SetModulationSettings Parms{};

	Parms.ModulationSettings = std::move(ModulationSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetSettings(const struct FSourceEffectChorusBaseSettings& Settings_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSettings");

	Params::SourceEffectChorusPreset_SetSettings Parms{};

	Parms.Settings_0 = std::move(Settings_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetSpread(float Spread)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpread");

	Params::SourceEffectChorusPreset_SetSpread Parms{};

	Parms.Spread = Spread;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetSpreadModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulator");

	Params::SourceEffectChorusPreset_SetSpreadModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetSpreadModulators(const TSet<class USoundModulatorBase*>& Modulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulators");

	Params::SourceEffectChorusPreset_SetSpreadModulators Parms{};

	Parms.Modulators = std::move(Modulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetWet(float WetAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWet");

	Params::SourceEffectChorusPreset_SetWet Parms{};

	Parms.WetAmount = WetAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetWetModulator(const class USoundModulatorBase* Modulator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulator");

	Params::SourceEffectChorusPreset_SetWetModulator Parms{};

	Parms.Modulator = Modulator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectChorusPreset::SetWetModulators(const TSet<class USoundModulatorBase*>& Modulators)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulators");

	Params::SourceEffectChorusPreset_SetWetModulators Parms{};

	Parms.Modulators = std::move(Modulators);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::SourceEffectConvolutionReverbPreset_SetImpulseResponse Parms{};

	Parms.InImpulseResponse = InImpulseResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectConvolutionReverbPreset::SetSettings(const struct FSourceEffectConvolutionReverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetSettings");

	Params::SourceEffectConvolutionReverbPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectDynamicsProcessorPreset::SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectDynamicsProcessorPreset", "SetSettings");

	Params::SourceEffectDynamicsProcessorPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFlexiverbPreset::SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFlexiverbPreset", "SetSettings");

	Params::SubmixEffectFlexiverbPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "RegisterEnvelopeFollowerListener");

	Params::SourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener Parms{};

	Parms.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectEnvelopeFollowerPreset::SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "SetSettings");

	Params::SourceEffectEnvelopeFollowerPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "UnregisterEnvelopeFollowerListener");

	Params::SourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener Parms{};

	Parms.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectEQPreset::SetSettings(const struct FSourceEffectEQSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectEQPreset", "SetSettings");

	Params::SourceEffectEQPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::NoteOff(const float Note, const bool bKill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "NoteOff");

	Params::GranularSynth_NoteOff Parms{};

	Parms.Note = Note;
	Parms.bKill = bKill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::NoteOn(const float Note, const int32 Velocity, const float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "NoteOn");

	Params::GranularSynth_NoteOn Parms{};

	Parms.Note = Note;
	Parms.Velocity = Velocity;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetAttackTime(const float AttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetAttackTime");

	Params::GranularSynth_SetAttackTime Parms{};

	Parms.AttackTimeMsec = AttackTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetDecayTime(const float DecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetDecayTime");

	Params::GranularSynth_SetDecayTime Parms{};

	Parms.DecayTimeMsec = DecayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainDuration(const float BaseDurationMsec, const struct FVector2D& DurationRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainDuration");

	Params::GranularSynth_SetGrainDuration Parms{};

	Parms.BaseDurationMsec = BaseDurationMsec;
	Parms.DurationRange = std::move(DurationRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainEnvelopeType(const EGranularSynthEnvelopeType EnvelopeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainEnvelopeType");

	Params::GranularSynth_SetGrainEnvelopeType Parms{};

	Parms.EnvelopeType = EnvelopeType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainPan(const float BasePan, const struct FVector2D& PanRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainPan");

	Params::GranularSynth_SetGrainPan Parms{};

	Parms.BasePan = BasePan;
	Parms.PanRange = std::move(PanRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainPitch(const float BasePitch, const struct FVector2D& PitchRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainPitch");

	Params::GranularSynth_SetGrainPitch Parms{};

	Parms.BasePitch = BasePitch;
	Parms.PitchRange = std::move(PitchRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainProbability(const float InGrainProbability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainProbability");

	Params::GranularSynth_SetGrainProbability Parms{};

	Parms.InGrainProbability = InGrainProbability;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainsPerSecond(const float InGrainsPerSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainsPerSecond");

	Params::GranularSynth_SetGrainsPerSecond Parms{};

	Parms.InGrainsPerSecond = InGrainsPerSecond;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetGrainVolume(const float BaseVolume, const struct FVector2D& VolumeRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetGrainVolume");

	Params::GranularSynth_SetGrainVolume Parms{};

	Parms.BaseVolume = BaseVolume;
	Parms.VolumeRange = std::move(VolumeRange);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetPlaybackSpeed(const float InPlayheadRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetPlaybackSpeed");

	Params::GranularSynth_SetPlaybackSpeed Parms{};

	Parms.InPlayheadRate = InPlayheadRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetPlayheadTime(const float InPositionSec, const float LerpTimeSec, EGranularSynthSeekType SeekType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetPlayheadTime");

	Params::GranularSynth_SetPlayheadTime Parms{};

	Parms.InPositionSec = InPositionSec;
	Parms.LerpTimeSec = LerpTimeSec;
	Parms.SeekType = SeekType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetReleaseTimeMsec(const float ReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetReleaseTimeMsec");

	Params::GranularSynth_SetReleaseTimeMsec Parms{};

	Parms.ReleaseTimeMsec = ReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetScrubMode(const bool bScrubMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetScrubMode");

	Params::GranularSynth_SetScrubMode Parms{};

	Parms.bScrubMode = bScrubMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetSoundWave");

	Params::GranularSynth_SetSoundWave Parms{};

	Parms.InSoundWave = InSoundWave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGranularSynth::SetSustainGain(const float SustainGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "SetSustainGain");

	Params::GranularSynth_SetSustainGain Parms{};

	Parms.SustainGain = SustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UGranularSynth::GetCurrentPlayheadTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "GetCurrentPlayheadTime");

	Params::GranularSynth_GetCurrentPlayheadTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UGranularSynth::GetSampleDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "GetSampleDuration");

	Params::GranularSynth_GetSampleDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGranularSynth::IsLoaded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GranularSynth", "IsLoaded");

	Params::GranularSynth_IsLoaded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USourceEffectFilterPreset::SetSettings(const struct FSourceEffectFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectFilterPreset", "SetSettings");

	Params::SourceEffectFilterPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectFoldbackDistortionPreset::SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectFoldbackDistortionPreset", "SetSettings");

	Params::SourceEffectFoldbackDistortionPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynth2DSlider::SetIndentHandle(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Synth2DSlider", "SetIndentHandle");

	Params::Synth2DSlider_SetIndentHandle Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynth2DSlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Synth2DSlider", "SetLocked");

	Params::Synth2DSlider_SetLocked Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Synth2DSlider", "SetSliderHandleColor");

	Params::Synth2DSlider_SetSliderHandleColor Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynth2DSlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Synth2DSlider", "SetStepSize");

	Params::Synth2DSlider_SetStepSize Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynth2DSlider::SetValue(const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Synth2DSlider", "SetValue");

	Params::Synth2DSlider_SetValue Parms{};

	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D USynth2DSlider::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Synth2DSlider", "GetValue");

	Params::Synth2DSlider_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USourceEffectMidSideSpreaderPreset::SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectMidSideSpreaderPreset", "SetSettings");

	Params::SourceEffectMidSideSpreaderPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectMotionFilterPreset::SetSettings(const struct FSourceEffectMotionFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectMotionFilterPreset", "SetSettings");

	Params::SourceEffectMotionFilterPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectMultibandCompressorPreset::ResetKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "ResetKey");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectMultibandCompressorPreset::SetAudioBus(class UAudioBus* AudioBus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetAudioBus");

	Params::SubmixEffectMultibandCompressorPreset_SetAudioBus Parms{};

	Parms.AudioBus = AudioBus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectMultibandCompressorPreset::SetExternalSubmix(class USoundSubmix* Submix)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetExternalSubmix");

	Params::SubmixEffectMultibandCompressorPreset_SetExternalSubmix Parms{};

	Parms.Submix = Submix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectMultibandCompressorPreset::SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetSettings");

	Params::SubmixEffectMultibandCompressorPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectPannerPreset::SetSettings(const struct FSourceEffectPannerSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectPannerPreset", "SetSettings");

	Params::SourceEffectPannerPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentToneGenerator::SetFrequency(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetFrequency");

	Params::SynthComponentToneGenerator_SetFrequency Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentToneGenerator::SetVolume(float InVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetVolume");

	Params::SynthComponentToneGenerator_SetVolume Parms{};

	Parms.InVolume = InVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectPhaserPreset::SetSettings(const struct FSourceEffectPhaserSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectPhaserPreset", "SetSettings");

	Params::SourceEffectPhaserPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectRingModulationPreset::SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectRingModulationPreset", "SetSettings");

	Params::SourceEffectRingModulationPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectSimpleDelayPreset::SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectSimpleDelayPreset", "SetSettings");

	Params::SourceEffectSimpleDelayPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectStereoDelayPreset::SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectStereoDelayPreset", "SetSettings");

	Params::SourceEffectStereoDelayPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USourceEffectWaveShaperPreset::SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SourceEffectWaveShaperPreset", "SetSettings");

	Params::SourceEffectWaveShaperPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::SubmixEffectConvolutionReverbPreset_SetImpulseResponse Parms{};

	Parms.InImpulseResponse = InImpulseResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectConvolutionReverbPreset::SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetSettings");

	Params::SubmixEffectConvolutionReverbPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDelayPreset::SetDefaultSettings(const struct FSubmixEffectDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDefaultSettings");

	Params::SubmixEffectDelayPreset_SetDefaultSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDelayPreset::SetDelay(float Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDelay");

	Params::SubmixEffectDelayPreset_SetDelay Parms{};

	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetInterpolationTime");

	Params::SubmixEffectDelayPreset_SetInterpolationTime Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectDelayPreset::SetSettings(const struct FSubmixEffectDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetSettings");

	Params::SubmixEffectDelayPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "GetMaxDelayInMilliseconds");

	Params::SubmixEffectDelayPreset_GetMaxDelayInMilliseconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USubmixEffectFilterPreset::SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterAlgorithm");

	Params::SubmixEffectFilterPreset_SetFilterAlgorithm Parms{};

	Parms.InAlgorithm = InAlgorithm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequency");

	Params::SubmixEffectFilterPreset_SetFilterCutoffFrequency Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequencyMod");

	Params::SubmixEffectFilterPreset_SetFilterCutoffFrequencyMod Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFilterPreset::SetFilterQ(float InQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQ");

	Params::SubmixEffectFilterPreset_SetFilterQ Parms{};

	Parms.InQ = InQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQMod");

	Params::SubmixEffectFilterPreset_SetFilterQMod Parms{};

	Parms.InQ = InQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFilterPreset::SetFilterType(ESubmixFilterType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterType");

	Params::SubmixEffectFilterPreset_SetFilterType Parms{};

	Parms.InType = InType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectFilterPreset::SetSettings(const struct FSubmixEffectFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetSettings");

	Params::SubmixEffectFilterPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectStereoDelayPreset::SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectStereoDelayPreset", "SetSettings");

	Params::SubmixEffectStereoDelayPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectTapDelayPreset::AddTap(int32* TapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "AddTap");

	Params::SubmixEffectTapDelayPreset_AddTap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TapId != nullptr)
		*TapId = Parms.TapId;
}

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetMaxDelayInMilliseconds");

	Params::SubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USubmixEffectTapDelayPreset::GetTap(int32 TapId, struct FTapDelayInfo* TapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTap");

	Params::SubmixEffectTapDelayPreset_GetTap Parms{};

	Parms.TapId = TapId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TapInfo != nullptr)
		*TapInfo = std::move(Parms.TapInfo);
}

void USubmixEffectTapDelayPreset::GetTapIds(TArray<int32>* TapIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTapIds");

	Params::SubmixEffectTapDelayPreset_GetTapIds Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TapIds != nullptr)
		*TapIds = std::move(Parms.TapIds);
}

void USubmixEffectTapDelayPreset::RemoveTap(int32 TapId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "RemoveTap");

	Params::SubmixEffectTapDelayPreset_RemoveTap Parms{};

	Parms.TapId = TapId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetInterpolationTime");

	Params::SubmixEffectTapDelayPreset_SetInterpolationTime Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectTapDelayPreset::SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetSettings");

	Params::SubmixEffectTapDelayPreset_SetSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixEffectTapDelayPreset::SetTap(int32 TapId, const struct FTapDelayInfo& TapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetTap");

	Params::SubmixEffectTapDelayPreset_SetTap Parms{};

	Parms.TapId = TapId;
	Parms.TapInfo = std::move(TapInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float USynthComponentMonoWaveTable::GetCurveTangent(int32 TableIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetCurveTangent");

	Params::SynthComponentMonoWaveTable_GetCurveTangent Parms{};

	Parms.TableIndex = TableIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 USynthComponentMonoWaveTable::GetNumTableEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetNumTableEntries");

	Params::SynthComponentMonoWaveTable_GetNumTableEntries Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthComponentMonoWaveTable::NoteOff(const float InMidiNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOff");

	Params::SynthComponentMonoWaveTable_NoteOff Parms{};

	Parms.InMidiNote = InMidiNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::NoteOn(const float InMidiNote, const float InVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOn");

	Params::SynthComponentMonoWaveTable_NoteOn Parms{};

	Parms.InMidiNote = InMidiNote;
	Parms.InVelocity = InVelocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::RefreshAllWaveTables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshAllWaveTables");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::RefreshWaveTable(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshWaveTable");

	Params::SynthComponentMonoWaveTable_RefreshWaveTable Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(const float InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeAttackTime");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime Parms{};

	Parms.InAttackTimeMsec = InAttackTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasDepth");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth Parms{};

	Parms.InDepth = InDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(const bool bInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasInvert");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert Parms{};

	Parms.bInBiasInvert = bInBiasInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(const float InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDecayTime");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime Parms{};

	Parms.InDecayTimeMsec = InDecayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDepth");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeDepth Parms{};

	Parms.InDepth = InDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(const bool bInInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeInvert");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeInvert Parms{};

	Parms.bInInvert = bInInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(const float InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeReleaseTime");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime Parms{};

	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(const float InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeSustainGain");

	Params::SynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain Parms{};

	Parms.InSustainGain = InSustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int32 TableIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveInterpolationType");

	Params::SynthComponentMonoWaveTable_SetCurveInterpolationType Parms{};

	Parms.InterpolationType = InterpolationType;
	Parms.TableIndex = TableIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USynthComponentMonoWaveTable::SetCurveTangent(int32 TableIndex, float InNewTangent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveTangent");

	Params::SynthComponentMonoWaveTable_SetCurveTangent Parms{};

	Parms.TableIndex = TableIndex;
	Parms.InNewTangent = InNewTangent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USynthComponentMonoWaveTable::SetCurveValue(int32 TableIndex, int32 KeyframeIndex, const float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveValue");

	Params::SynthComponentMonoWaveTable_SetCurveValue Parms{};

	Parms.TableIndex = TableIndex;
	Parms.KeyframeIndex = KeyframeIndex;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(const float InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeAttackTime");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime Parms{};

	Parms.InAttackTimeMsec = InAttackTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasDepth");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth Parms{};

	Parms.InDepth = InDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(const bool bInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasInvert");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert Parms{};

	Parms.bInBiasInvert = bInBiasInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeDepth");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeDepth Parms{};

	Parms.InDepth = InDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(const bool bInInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeInvert");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeInvert Parms{};

	Parms.bInInvert = bInInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(const float InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopenDecayTime");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime Parms{};

	Parms.InDecayTimeMsec = InDecayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(const float InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeReleaseTime");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime Parms{};

	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(const float InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeSustainGain");

	Params::SynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain Parms{};

	Parms.InSustainGain = InSustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFrequency(const float FrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequency");

	Params::SynthComponentMonoWaveTable_SetFrequency Parms{};

	Parms.FrequencyHz = FrequencyHz;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(const float FrequencyOffsetCents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyPitchBend");

	Params::SynthComponentMonoWaveTable_SetFrequencyPitchBend Parms{};

	Parms.FrequencyOffsetCents = FrequencyOffsetCents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(const float InMidiNote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyWithMidiNote");

	Params::SynthComponentMonoWaveTable_SetFrequencyWithMidiNote Parms{};

	Parms.InMidiNote = InMidiNote;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetLowPassFilterResonance");

	Params::SynthComponentMonoWaveTable_SetLowPassFilterResonance Parms{};

	Parms.InNewQ = InNewQ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(const float InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeAttackTime");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime Parms{};

	Parms.InAttackTimeMsec = InAttackTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasDepth");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth Parms{};

	Parms.InDepth = InDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(const bool bInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasInvert");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert Parms{};

	Parms.bInBiasInvert = bInBiasInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(const float InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDecayTime");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime Parms{};

	Parms.InDecayTimeMsec = InDecayTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDepth");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeDepth Parms{};

	Parms.InDepth = InDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(const bool bInInvert)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeInvert");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeInvert Parms{};

	Parms.bInInvert = bInInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(const float InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeReleaseTime");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime Parms{};

	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(const float InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeSustainGain");

	Params::SynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain Parms{};

	Parms.InSustainGain = InSustainGain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPosLfoDepth(const float InLfoDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoDepth");

	Params::SynthComponentMonoWaveTable_SetPosLfoDepth Parms{};

	Parms.InLfoDepth = InLfoDepth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPosLfoFrequency(const float InLfoFrequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoFrequency");

	Params::SynthComponentMonoWaveTable_SetPosLfoFrequency Parms{};

	Parms.InLfoFrequency = InLfoFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetPosLfoType(const ESynthLFOType InLfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoType");

	Params::SynthComponentMonoWaveTable_SetPosLfoType Parms{};

	Parms.InLfoType = InLfoType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetSustainPedalState");

	Params::SynthComponentMonoWaveTable_SetSustainPedalState Parms{};

	Parms.InSustainPedalState = InSustainPedalState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetWaveTablePosition");

	Params::SynthComponentMonoWaveTable_SetWaveTablePosition Parms{};

	Parms.InPosition = InPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetKeyFrameValuesForTable");

	Params::SynthComponentMonoWaveTable_GetKeyFrameValuesForTable Parms{};

	Parms.TableIndex = TableIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 USynthComponentMonoWaveTable::GetMaxTableIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetMaxTableIndex");

	Params::SynthComponentMonoWaveTable_GetMaxTableIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "SeekToTime");

	Params::SynthSamplePlayer_SeekToTime Parms{};

	Parms.TimeSec = TimeSec;
	Parms.SeekType = SeekType;
	Parms.bWrap = bWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "SetPitch");

	Params::SynthSamplePlayer_SetPitch Parms{};

	Parms.InPitch = InPitch;
	Parms.TimeSec = TimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubMode");

	Params::SynthSamplePlayer_SetScrubMode Parms{};

	Parms.bScrubMode = bScrubMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubTimeWidth");

	Params::SynthSamplePlayer_SetScrubTimeWidth Parms{};

	Parms.InScrubTimeWidthSec = InScrubTimeWidthSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "SetSoundWave");

	Params::SynthSamplePlayer_SetSoundWave Parms{};

	Parms.InSoundWave = InSoundWave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressPercent");

	Params::SynthSamplePlayer_GetCurrentPlaybackProgressPercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USynthSamplePlayer::GetCurrentPlaybackProgressTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressTime");

	Params::SynthSamplePlayer_GetCurrentPlaybackProgressTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USynthSamplePlayer::GetSampleDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "GetSampleDuration");

	Params::SynthSamplePlayer_GetSampleDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USynthSamplePlayer::IsLoaded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthSamplePlayer", "IsLoaded");

	Params::SynthSamplePlayer_IsLoaded Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLinearFrequency");

	Params::SynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency Parms{};

	Parms.InLogFrequencyValue = InLogFrequencyValue;
	Parms.InDomainMin = InDomainMin;
	Parms.InDomainMax = InDomainMax;
	Parms.InRangeMin = InRangeMin;
	Parms.InRangeMax = InRangeMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLogFrequency");

	Params::SynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency Parms{};

	Parms.InLinearValue = InLinearValue;
	Parms.InDomainMin = InDomainMin;
	Parms.InDomainMax = InDomainMax;
	Parms.InRangeMin = InRangeMin;
	Parms.InRangeMax = InRangeMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USynthKnob::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthKnob", "SetLocked");

	Params::SynthKnob_SetLocked Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthKnob::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthKnob", "SetStepSize");

	Params::SynthKnob_SetStepSize Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USynthKnob::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthKnob", "SetValue");

	Params::SynthKnob_SetValue Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float USynthKnob::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SynthKnob", "GetValue");

	Params::SynthKnob_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
