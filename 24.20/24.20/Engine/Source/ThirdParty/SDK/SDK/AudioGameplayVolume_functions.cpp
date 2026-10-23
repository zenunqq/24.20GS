#pragma once

#include "Basic.hpp"

#include "AudioGameplayVolume_classes.hpp"
#include "AudioGameplayVolume_parameters.hpp"

namespace SDK
{

void UAudioGameplayVolumeMutator::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolumeMutator", "SetPriority");

	Params::AudioGameplayVolumeMutator_SetPriority Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAttenuationVolumeComponent::SetExteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetExteriorVolume");

	Params::AttenuationVolumeComponent_SetExteriorVolume Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAttenuationVolumeComponent::SetInteriorVolume(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttenuationVolumeComponent", "SetInteriorVolume");

	Params::AttenuationVolumeComponent_SetInteriorVolume Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AAudioGameplayVolume::OnListenerEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "OnListenerEnter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AAudioGameplayVolume::OnListenerExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "OnListenerExit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AAudioGameplayVolume::OnRep_bEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "OnRep_bEnabled");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AAudioGameplayVolume::SetEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolume", "SetEnabled");

	Params::AudioGameplayVolume_SetEnabled Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFilterVolumeComponent::SetExteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterVolumeComponent", "SetExteriorLPF");

	Params::FilterVolumeComponent_SetExteriorLPF Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFilterVolumeComponent::SetInteriorLPF(float Volume, float InterpolateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterVolumeComponent", "SetInteriorLPF");

	Params::FilterVolumeComponent_SetInteriorLPF Parms{};

	Parms.Volume = Volume;
	Parms.InterpolateTime = InterpolateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UReverbVolumeComponent::SetReverbSettings(const struct FReverbSettings& NewReverbSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ReverbVolumeComponent", "SetReverbSettings");

	Params::ReverbVolumeComponent_SetReverbSettings Parms{};

	Parms.NewReverbSettings = std::move(NewReverbSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixOverrideVolumeComponent::SetSubmixOverrideSettings(const TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixOverrideVolumeComponent", "SetSubmixOverrideSettings");

	Params::SubmixOverrideVolumeComponent_SetSubmixOverrideSettings Parms{};

	Parms.NewSubmixOverrideSettings = std::move(NewSubmixOverrideSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USubmixSendVolumeComponent::SetSubmixSendSettings(const TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubmixSendVolumeComponent", "SetSubmixSendSettings");

	Params::SubmixSendVolumeComponent_SetSubmixSendSettings Parms{};

	Parms.NewSubmixSendSettings = std::move(NewSubmixSendSettings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
