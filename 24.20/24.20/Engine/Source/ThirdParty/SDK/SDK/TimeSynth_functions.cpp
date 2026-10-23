#pragma once

#include "Basic.hpp"

#include "TimeSynth_classes.hpp"
#include "TimeSynth_parameters.hpp"

namespace SDK
{

void UTimeSynthComponent::AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)>& OnQuantizationEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "AddQuantizationEventDelegate");

	Params::TimeSynthComponent_AddQuantizationEventDelegate Parms{};

	Parms.QuantizationType = QuantizationType;
	Parms.OnQuantizationEvent = OnQuantizationEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UTimeSynthComponent::HasActiveClips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "HasActiveClips");

	Params::TimeSynthComponent_HasActiveClips Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTimeSynthClipHandle UTimeSynthComponent::PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "PlayClip");

	Params::TimeSynthComponent_PlayClip Parms{};

	Parms.InClip = InClip;
	Parms.InVolumeGroup = InVolumeGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UTimeSynthComponent::ResetSeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "ResetSeed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetBPM(const float BeatsPerMinute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetBPM");

	Params::TimeSynthComponent_SetBPM Parms{};

	Parms.BeatsPerMinute = BeatsPerMinute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetEnvelopeFollowerEnabled");

	Params::TimeSynthComponent_SetEnvelopeFollowerEnabled Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetEnvelopeFollowerSettings");

	Params::TimeSynthComponent_SetEnvelopeFollowerSettings Parms{};

	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetFFTSize(ETimeSynthFFTSize InFFTSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetFFTSize");

	Params::TimeSynthComponent_SetFFTSize Parms{};

	Parms.InFFTSize = InFFTSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetFilterEnabled");

	Params::TimeSynthComponent_SetFilterEnabled Parms{};

	Parms.Filter = Filter;
	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetFilterSettings");

	Params::TimeSynthComponent_SetFilterSettings Parms{};

	Parms.Filter = Filter;
	Parms.InSettings = std::move(InSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetQuantizationSettings");

	Params::TimeSynthComponent_SetQuantizationSettings Parms{};

	Parms.InQuantizationSettings = std::move(InQuantizationSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetSeed(int32 InSeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetSeed");

	Params::TimeSynthComponent_SetSeed Parms{};

	Parms.InSeed = InSeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "SetVolumeGroup");

	Params::TimeSynthComponent_SetVolumeGroup Parms{};

	Parms.InVolumeGroup = InVolumeGroup;
	Parms.VolumeDb = VolumeDb;
	Parms.FadeTimeSec = FadeTimeSec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "StopClip");

	Params::TimeSynthComponent_StopClip Parms{};

	Parms.InClipHandle = std::move(InClipHandle);
	Parms.EventQuantization = EventQuantization;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "StopClipWithFadeOverride");

	Params::TimeSynthComponent_StopClipWithFadeOverride Parms{};

	Parms.InClipHandle = std::move(InClipHandle);
	Parms.EventQuantization = EventQuantization;
	Parms.FadeTime = std::move(FadeTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "StopSoundsOnVolumeGroup");

	Params::TimeSynthComponent_StopSoundsOnVolumeGroup Parms{};

	Parms.InVolumeGroup = InVolumeGroup;
	Parms.EventQuantization = EventQuantization;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "StopSoundsOnVolumeGroupWithFadeOverride");

	Params::TimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride Parms{};

	Parms.InVolumeGroup = InVolumeGroup;
	Parms.EventQuantization = EventQuantization;
	Parms.FadeTime = std::move(FadeTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UTimeSynthComponent::GetBPM() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "GetBPM");

	Params::TimeSynthComponent_GetBPM Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UTimeSynthComponent::GetEnvelopeFollowerValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "GetEnvelopeFollowerValue");

	Params::TimeSynthComponent_GetEnvelopeFollowerValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UTimeSynthComponent::GetMaxActiveClipLimit() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "GetMaxActiveClipLimit");

	Params::TimeSynthComponent_GetMaxActiveClipLimit Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FTimeSynthSpectralData> UTimeSynthComponent::GetSpectralData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimeSynthComponent", "GetSpectralData");

	Params::TimeSynthComponent_GetSpectralData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
