#pragma once

#include "Basic.hpp"

#include "AudioGameplay_classes.hpp"
#include "AudioGameplay_parameters.hpp"

namespace SDK
{

bool IAudioGameplayCondition::ConditionMet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayCondition", "ConditionMet");

	Params::AudioGameplayCondition_ConditionMet Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool IAudioGameplayCondition::ConditionMet_Position(const struct FVector& Position) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayCondition", "ConditionMet_Position");

	Params::AudioGameplayCondition_ConditionMet_Position Parms{};

	Parms.Position = std::move(Position);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void IAudioGameplayVolumeInteraction::OnListenerEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolumeInteraction", "OnListenerEnter");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IAudioGameplayVolumeInteraction::OnListenerExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioGameplayVolumeInteraction", "OnListenerExit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UAudioComponentGroup* UAudioComponentGroup::StaticGetOrCreateComponentGroup(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioComponentGroup", "StaticGetOrCreateComponentGroup");

	Params::AudioComponentGroup_StaticGetOrCreateComponentGroup Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioComponentGroup::AddExtension(TScriptInterface<class IAudioComponentGroupExtension> NewExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "AddExtension");

	Params::AudioComponentGroup_AddExtension Parms{};

	Parms.NewExtension = NewExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::AddExternalComponent(class UAudioComponent* ComponentToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "AddExternalComponent");

	Params::AudioComponentGroup_AddExternalComponent Parms{};

	Parms.ComponentToAdd = ComponentToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::BroadcastEvent(const class FName EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "BroadcastEvent");

	Params::AudioComponentGroup_BroadcastEvent Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::BroadcastKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "BroadcastKill");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::BroadcastStopAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "BroadcastStopAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::DisableVirtualization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "DisableVirtualization");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::EnableVirtualization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "EnableVirtualization");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::RemoveExtension(TScriptInterface<class IAudioComponentGroupExtension> NewExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "RemoveExtension");

	Params::AudioComponentGroup_RemoveExtension Parms{};

	Parms.NewExtension = NewExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::SetLowPassFilter(const float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "SetLowPassFilter");

	Params::AudioComponentGroup_SetLowPassFilter Parms{};

	Parms.InFrequency = InFrequency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::SetPitchMultiplier(const float InPitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "SetPitchMultiplier");

	Params::AudioComponentGroup_SetPitchMultiplier Parms{};

	Parms.InPitch = InPitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::SetVolumeMultiplier(const float InVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "SetVolumeMultiplier");

	Params::AudioComponentGroup_SetVolumeMultiplier Parms{};

	Parms.InVolume = InVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::StopSound(class USoundBase* sound, const float FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "StopSound");

	Params::AudioComponentGroup_StopSound Parms{};

	Parms.sound = sound;
	Parms.FadeTime = FadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::SubscribeToBool(const class FName ParamName, TDelegate<void(bool ParamValue)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "SubscribeToBool");

	Params::AudioComponentGroup_SubscribeToBool Parms{};

	Parms.ParamName = ParamName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::SubscribeToEvent(const class FName EventName, TDelegate<void(class FName& EventName)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "SubscribeToEvent");

	Params::AudioComponentGroup_SubscribeToEvent Parms{};

	Parms.EventName = EventName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::SubscribeToStringParam(const class FName ParamName, TDelegate<void(const class FString& Value)> Delegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "SubscribeToStringParam");

	Params::AudioComponentGroup_SubscribeToStringParam Parms{};

	Parms.ParamName = ParamName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentGroup::UnsubscribeObject(const class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "UnsubscribeObject");

	Params::AudioComponentGroup_UnsubscribeObject Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAudioComponentGroup::GetBoolParamValue(const class FName ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "GetBoolParamValue");

	Params::AudioComponentGroup_GetBoolParamValue Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAudioComponentGroup::GetFloatParamValue(const class FName ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "GetFloatParamValue");

	Params::AudioComponentGroup_GetFloatParamValue Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UAudioComponentGroup::GetStringParamValue(const class FName ParamName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "GetStringParamValue");

	Params::AudioComponentGroup_GetStringParamValue Parms{};

	Parms.ParamName = ParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioComponentGroup::IsPlayingAny() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "IsPlayingAny");

	Params::AudioComponentGroup_IsPlayingAny Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioComponentGroup::IsVirtualized() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentGroup", "IsVirtualized");

	Params::AudioComponentGroup_IsVirtualized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FAudioParameter> UAudioParameterComponent::GetParameters() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioParameterComponent", "GetParameters");

	Params::AudioParameterComponent_GetParameters Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
