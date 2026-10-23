#pragma once

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IAudioComponentGroupExtension final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioComponentGroupExtension">();
	}
	static class IAudioComponentGroupExtension* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioComponentGroupExtension>();
	}
};
static_assert(alignof(IAudioComponentGroupExtension) == 0x000008, "Wrong alignment on IAudioComponentGroupExtension");
static_assert(sizeof(IAudioComponentGroupExtension) == 0x000028, "Wrong size on IAudioComponentGroupExtension");

class IAudioGameplayCondition final : public IInterface
{
public:
	bool ConditionMet() const;
	bool ConditionMet_Position(const struct FVector& Position) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayCondition">();
	}
	static class IAudioGameplayCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioGameplayCondition>();
	}
};
static_assert(alignof(IAudioGameplayCondition) == 0x000008, "Wrong alignment on IAudioGameplayCondition");
static_assert(sizeof(IAudioGameplayCondition) == 0x000028, "Wrong size on IAudioGameplayCondition");

class IAudioGameplayVolumeInteraction final : public IInterface
{
public:
	void OnListenerEnter();
	void OnListenerExit();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeInteraction">();
	}
	static class IAudioGameplayVolumeInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioGameplayVolumeInteraction>();
	}
};
static_assert(alignof(IAudioGameplayVolumeInteraction) == 0x000008, "Wrong alignment on IAudioGameplayVolumeInteraction");
static_assert(sizeof(IAudioGameplayVolumeInteraction) == 0x000028, "Wrong size on IAudioGameplayVolumeInteraction");

class UAudioComponentGroup final : public USceneComponent
{
public:
	uint8                                         Pad_2A0[0x8];
	TMulticastInlineDelegate<void()>              OnStopped;
	TMulticastInlineDelegate<void()>              OnKilled;
	TMulticastInlineDelegate<void()>              OnVirtualized;
	TMulticastInlineDelegate<void()>              OnUnvirtualized;
	TArray<class UAudioComponent*>                Components;
	TArray<struct FAudioParameter>                ParamsToSet;
	TArray<struct FAudioParameter>                PersistentParams;
	TArray<TScriptInterface<class IAudioComponentGroupExtension>> Extensions;
	uint8                                         Pad_328[0x128];

public:
	static class UAudioComponentGroup* StaticGetOrCreateComponentGroup(class AActor* Actor);

	void AddExtension(TScriptInterface<class IAudioComponentGroupExtension> NewExtension);
	void AddExternalComponent(class UAudioComponent* ComponentToAdd);
	void BroadcastEvent(const class FName EventName);
	void BroadcastKill();
	void BroadcastStopAll();
	void DisableVirtualization();
	void EnableVirtualization();
	void RemoveExtension(TScriptInterface<class IAudioComponentGroupExtension> NewExtension);
	void SetLowPassFilter(const float InFrequency);
	void SetPitchMultiplier(const float InPitch);
	void SetVolumeMultiplier(const float InVolume);
	void StopSound(class USoundBase* sound, const float FadeTime);
	void SubscribeToBool(const class FName ParamName, TDelegate<void(bool ParamValue)> Delegate);
	void SubscribeToEvent(const class FName EventName, TDelegate<void(class FName& EventName)> Delegate);
	void SubscribeToStringParam(const class FName ParamName, TDelegate<void(const class FString& Value)> Delegate);
	void UnsubscribeObject(const class UObject* Object);

	bool GetBoolParamValue(const class FName ParamName) const;
	float GetFloatParamValue(const class FName ParamName) const;
	class FString GetStringParamValue(const class FName ParamName) const;
	bool IsPlayingAny() const;
	bool IsVirtualized() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioComponentGroup">();
	}
	static class UAudioComponentGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioComponentGroup>();
	}
};
static_assert(alignof(UAudioComponentGroup) == 0x000010, "Wrong alignment on UAudioComponentGroup");
static_assert(sizeof(UAudioComponentGroup) == 0x000450, "Wrong size on UAudioComponentGroup");
static_assert(offsetof(UAudioComponentGroup, OnStopped) == 0x0002A8, "Member 'UAudioComponentGroup::OnStopped' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, OnKilled) == 0x0002B8, "Member 'UAudioComponentGroup::OnKilled' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, OnVirtualized) == 0x0002C8, "Member 'UAudioComponentGroup::OnVirtualized' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, OnUnvirtualized) == 0x0002D8, "Member 'UAudioComponentGroup::OnUnvirtualized' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, Components) == 0x0002E8, "Member 'UAudioComponentGroup::Components' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, ParamsToSet) == 0x0002F8, "Member 'UAudioComponentGroup::ParamsToSet' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, PersistentParams) == 0x000308, "Member 'UAudioComponentGroup::PersistentParams' has a wrong offset!");
static_assert(offsetof(UAudioComponentGroup, Extensions) == 0x000318, "Member 'UAudioComponentGroup::Extensions' has a wrong offset!");

class UAudioGameplayComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayComponent">();
	}
	static class UAudioGameplayComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayComponent>();
	}
};
static_assert(alignof(UAudioGameplayComponent) == 0x000008, "Wrong alignment on UAudioGameplayComponent");
static_assert(sizeof(UAudioGameplayComponent) == 0x0000A8, "Wrong size on UAudioGameplayComponent");

class UAudioRequirementPreset final : public UDataAsset
{
public:
	struct FGameplayTagQuery                      Query;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioRequirementPreset">();
	}
	static class UAudioRequirementPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioRequirementPreset>();
	}
};
static_assert(alignof(UAudioRequirementPreset) == 0x000008, "Wrong alignment on UAudioRequirementPreset");
static_assert(sizeof(UAudioRequirementPreset) == 0x000078, "Wrong size on UAudioRequirementPreset");
static_assert(offsetof(UAudioRequirementPreset, Query) == 0x000030, "Member 'UAudioRequirementPreset::Query' has a wrong offset!");

class UAudioParameterComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x10];
	TArray<TWeakObjectPtr<class UAudioComponent>> ActiveComponents;
	TArray<struct FAudioParameter>                Parameters;

public:
	const TArray<struct FAudioParameter> GetParameters() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioParameterComponent">();
	}
	static class UAudioParameterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioParameterComponent>();
	}
};
static_assert(alignof(UAudioParameterComponent) == 0x000008, "Wrong alignment on UAudioParameterComponent");
static_assert(sizeof(UAudioParameterComponent) == 0x0000D0, "Wrong size on UAudioParameterComponent");
static_assert(offsetof(UAudioParameterComponent, ActiveComponents) == 0x0000B0, "Member 'UAudioParameterComponent::ActiveComponents' has a wrong offset!");
static_assert(offsetof(UAudioParameterComponent, Parameters) == 0x0000C0, "Member 'UAudioParameterComponent::Parameters' has a wrong offset!");

}
