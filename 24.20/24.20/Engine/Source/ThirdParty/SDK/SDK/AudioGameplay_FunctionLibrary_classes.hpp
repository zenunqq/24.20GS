#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UAudioGameplay_FunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetAudioForDamageEvent(class AActor* Receiver, class AActor* Instigator, class USoundBase* ReceiverSound, class USoundBase* InstigatorSound, class USoundBase* ObserverSound, class UObject* __WorldContext, class USoundBase** AudioAsset);
	static void GetAudioForPlayerEvent(class AActor* Target, class USoundBase* OneP_Sound, class USoundBase* ThreeP_Sound, class UObject* __WorldContext, class USoundBase** AudioAsset);
	static bool IsActorLocal(class AActor* Actor, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioGameplay_FunctionLibrary_C">();
	}
	static class UAudioGameplay_FunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplay_FunctionLibrary_C>();
	}
};
static_assert(alignof(UAudioGameplay_FunctionLibrary_C) == 0x000008, "Wrong alignment on UAudioGameplay_FunctionLibrary_C");
static_assert(sizeof(UAudioGameplay_FunctionLibrary_C) == 0x000028, "Wrong size on UAudioGameplay_FunctionLibrary_C");

}
