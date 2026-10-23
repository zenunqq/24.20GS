#pragma once

#include "Basic.hpp"

#include "AudioGameplay_FunctionLibrary_classes.hpp"
#include "AudioGameplay_FunctionLibrary_parameters.hpp"

namespace SDK
{

void UAudioGameplay_FunctionLibrary_C::GetAudioForDamageEvent(class AActor* Receiver, class AActor* Instigator, class USoundBase* ReceiverSound, class USoundBase* InstigatorSound, class USoundBase* ObserverSound, class UObject* __WorldContext, class USoundBase** AudioAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioGameplay_FunctionLibrary_C", "GetAudioForDamageEvent");

	Params::AudioGameplay_FunctionLibrary_C_GetAudioForDamageEvent Parms{};

	Parms.Receiver = Receiver;
	Parms.Instigator = Instigator;
	Parms.ReceiverSound = ReceiverSound;
	Parms.InstigatorSound = InstigatorSound;
	Parms.ObserverSound = ObserverSound;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AudioAsset != nullptr)
		*AudioAsset = Parms.AudioAsset;
}

void UAudioGameplay_FunctionLibrary_C::GetAudioForPlayerEvent(class AActor* Target, class USoundBase* OneP_Sound, class USoundBase* ThreeP_Sound, class UObject* __WorldContext, class USoundBase** AudioAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioGameplay_FunctionLibrary_C", "GetAudioForPlayerEvent");

	Params::AudioGameplay_FunctionLibrary_C_GetAudioForPlayerEvent Parms{};

	Parms.Target = Target;
	Parms.OneP_Sound = OneP_Sound;
	Parms.ThreeP_Sound = ThreeP_Sound;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (AudioAsset != nullptr)
		*AudioAsset = Parms.AudioAsset;
}

bool UAudioGameplay_FunctionLibrary_C::IsActorLocal(class AActor* Actor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AudioGameplay_FunctionLibrary_C", "IsActorLocal");

	Params::AudioGameplay_FunctionLibrary_C_IsActorLocal Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
