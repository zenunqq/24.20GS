#pragma once

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AudioGameplayCondition_ConditionMet final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(AudioGameplayCondition_ConditionMet) == 0x000001, "Wrong alignment on AudioGameplayCondition_ConditionMet");
static_assert(sizeof(AudioGameplayCondition_ConditionMet) == 0x000001, "Wrong size on AudioGameplayCondition_ConditionMet");
static_assert(offsetof(AudioGameplayCondition_ConditionMet, ReturnValue) == 0x000000, "Member 'AudioGameplayCondition_ConditionMet::ReturnValue' has a wrong offset!");

struct AudioGameplayCondition_ConditionMet_Position final
{
public:
	struct FVector                                Position;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(AudioGameplayCondition_ConditionMet_Position) == 0x000008, "Wrong alignment on AudioGameplayCondition_ConditionMet_Position");
static_assert(sizeof(AudioGameplayCondition_ConditionMet_Position) == 0x000020, "Wrong size on AudioGameplayCondition_ConditionMet_Position");
static_assert(offsetof(AudioGameplayCondition_ConditionMet_Position, Position) == 0x000000, "Member 'AudioGameplayCondition_ConditionMet_Position::Position' has a wrong offset!");
static_assert(offsetof(AudioGameplayCondition_ConditionMet_Position, ReturnValue) == 0x000018, "Member 'AudioGameplayCondition_ConditionMet_Position::ReturnValue' has a wrong offset!");

struct AudioComponentGroup_StaticGetOrCreateComponentGroup final
{
public:
	class AActor*                                 Actor;
	class UAudioComponentGroup*                   ReturnValue;
};
static_assert(alignof(AudioComponentGroup_StaticGetOrCreateComponentGroup) == 0x000008, "Wrong alignment on AudioComponentGroup_StaticGetOrCreateComponentGroup");
static_assert(sizeof(AudioComponentGroup_StaticGetOrCreateComponentGroup) == 0x000010, "Wrong size on AudioComponentGroup_StaticGetOrCreateComponentGroup");
static_assert(offsetof(AudioComponentGroup_StaticGetOrCreateComponentGroup, Actor) == 0x000000, "Member 'AudioComponentGroup_StaticGetOrCreateComponentGroup::Actor' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_StaticGetOrCreateComponentGroup, ReturnValue) == 0x000008, "Member 'AudioComponentGroup_StaticGetOrCreateComponentGroup::ReturnValue' has a wrong offset!");

struct AudioComponentGroup_AddExtension final
{
public:
	TScriptInterface<class IAudioComponentGroupExtension> NewExtension;
};
static_assert(alignof(AudioComponentGroup_AddExtension) == 0x000008, "Wrong alignment on AudioComponentGroup_AddExtension");
static_assert(sizeof(AudioComponentGroup_AddExtension) == 0x000010, "Wrong size on AudioComponentGroup_AddExtension");
static_assert(offsetof(AudioComponentGroup_AddExtension, NewExtension) == 0x000000, "Member 'AudioComponentGroup_AddExtension::NewExtension' has a wrong offset!");

struct AudioComponentGroup_AddExternalComponent final
{
public:
	class UAudioComponent*                        ComponentToAdd;
};
static_assert(alignof(AudioComponentGroup_AddExternalComponent) == 0x000008, "Wrong alignment on AudioComponentGroup_AddExternalComponent");
static_assert(sizeof(AudioComponentGroup_AddExternalComponent) == 0x000008, "Wrong size on AudioComponentGroup_AddExternalComponent");
static_assert(offsetof(AudioComponentGroup_AddExternalComponent, ComponentToAdd) == 0x000000, "Member 'AudioComponentGroup_AddExternalComponent::ComponentToAdd' has a wrong offset!");

struct AudioComponentGroup_BroadcastEvent final
{
public:
	class FName                                   EventName;
};
static_assert(alignof(AudioComponentGroup_BroadcastEvent) == 0x000004, "Wrong alignment on AudioComponentGroup_BroadcastEvent");
static_assert(sizeof(AudioComponentGroup_BroadcastEvent) == 0x000004, "Wrong size on AudioComponentGroup_BroadcastEvent");
static_assert(offsetof(AudioComponentGroup_BroadcastEvent, EventName) == 0x000000, "Member 'AudioComponentGroup_BroadcastEvent::EventName' has a wrong offset!");

struct AudioComponentGroup_RemoveExtension final
{
public:
	TScriptInterface<class IAudioComponentGroupExtension> NewExtension;
};
static_assert(alignof(AudioComponentGroup_RemoveExtension) == 0x000008, "Wrong alignment on AudioComponentGroup_RemoveExtension");
static_assert(sizeof(AudioComponentGroup_RemoveExtension) == 0x000010, "Wrong size on AudioComponentGroup_RemoveExtension");
static_assert(offsetof(AudioComponentGroup_RemoveExtension, NewExtension) == 0x000000, "Member 'AudioComponentGroup_RemoveExtension::NewExtension' has a wrong offset!");

struct AudioComponentGroup_SetLowPassFilter final
{
public:
	float                                         InFrequency;
};
static_assert(alignof(AudioComponentGroup_SetLowPassFilter) == 0x000004, "Wrong alignment on AudioComponentGroup_SetLowPassFilter");
static_assert(sizeof(AudioComponentGroup_SetLowPassFilter) == 0x000004, "Wrong size on AudioComponentGroup_SetLowPassFilter");
static_assert(offsetof(AudioComponentGroup_SetLowPassFilter, InFrequency) == 0x000000, "Member 'AudioComponentGroup_SetLowPassFilter::InFrequency' has a wrong offset!");

struct AudioComponentGroup_SetPitchMultiplier final
{
public:
	float                                         InPitch;
};
static_assert(alignof(AudioComponentGroup_SetPitchMultiplier) == 0x000004, "Wrong alignment on AudioComponentGroup_SetPitchMultiplier");
static_assert(sizeof(AudioComponentGroup_SetPitchMultiplier) == 0x000004, "Wrong size on AudioComponentGroup_SetPitchMultiplier");
static_assert(offsetof(AudioComponentGroup_SetPitchMultiplier, InPitch) == 0x000000, "Member 'AudioComponentGroup_SetPitchMultiplier::InPitch' has a wrong offset!");

struct AudioComponentGroup_SetVolumeMultiplier final
{
public:
	float                                         InVolume;
};
static_assert(alignof(AudioComponentGroup_SetVolumeMultiplier) == 0x000004, "Wrong alignment on AudioComponentGroup_SetVolumeMultiplier");
static_assert(sizeof(AudioComponentGroup_SetVolumeMultiplier) == 0x000004, "Wrong size on AudioComponentGroup_SetVolumeMultiplier");
static_assert(offsetof(AudioComponentGroup_SetVolumeMultiplier, InVolume) == 0x000000, "Member 'AudioComponentGroup_SetVolumeMultiplier::InVolume' has a wrong offset!");

struct AudioComponentGroup_StopSound final
{
public:
	class USoundBase*                             sound;
	float                                         FadeTime;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(AudioComponentGroup_StopSound) == 0x000008, "Wrong alignment on AudioComponentGroup_StopSound");
static_assert(sizeof(AudioComponentGroup_StopSound) == 0x000010, "Wrong size on AudioComponentGroup_StopSound");
static_assert(offsetof(AudioComponentGroup_StopSound, sound) == 0x000000, "Member 'AudioComponentGroup_StopSound::sound' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_StopSound, FadeTime) == 0x000008, "Member 'AudioComponentGroup_StopSound::FadeTime' has a wrong offset!");

struct AudioComponentGroup_SubscribeToBool final
{
public:
	class FName                                   ParamName;
	TDelegate<void(bool ParamValue)>              Delegate;
};
static_assert(alignof(AudioComponentGroup_SubscribeToBool) == 0x000004, "Wrong alignment on AudioComponentGroup_SubscribeToBool");
static_assert(sizeof(AudioComponentGroup_SubscribeToBool) == 0x000010, "Wrong size on AudioComponentGroup_SubscribeToBool");
static_assert(offsetof(AudioComponentGroup_SubscribeToBool, ParamName) == 0x000000, "Member 'AudioComponentGroup_SubscribeToBool::ParamName' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_SubscribeToBool, Delegate) == 0x000004, "Member 'AudioComponentGroup_SubscribeToBool::Delegate' has a wrong offset!");

struct AudioComponentGroup_SubscribeToEvent final
{
public:
	class FName                                   EventName;
	TDelegate<void(class FName& EventName)>       Delegate;
};
static_assert(alignof(AudioComponentGroup_SubscribeToEvent) == 0x000004, "Wrong alignment on AudioComponentGroup_SubscribeToEvent");
static_assert(sizeof(AudioComponentGroup_SubscribeToEvent) == 0x000010, "Wrong size on AudioComponentGroup_SubscribeToEvent");
static_assert(offsetof(AudioComponentGroup_SubscribeToEvent, EventName) == 0x000000, "Member 'AudioComponentGroup_SubscribeToEvent::EventName' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_SubscribeToEvent, Delegate) == 0x000004, "Member 'AudioComponentGroup_SubscribeToEvent::Delegate' has a wrong offset!");

struct AudioComponentGroup_SubscribeToStringParam final
{
public:
	class FName                                   ParamName;
	TDelegate<void(const class FString& Value)>   Delegate;
};
static_assert(alignof(AudioComponentGroup_SubscribeToStringParam) == 0x000004, "Wrong alignment on AudioComponentGroup_SubscribeToStringParam");
static_assert(sizeof(AudioComponentGroup_SubscribeToStringParam) == 0x000010, "Wrong size on AudioComponentGroup_SubscribeToStringParam");
static_assert(offsetof(AudioComponentGroup_SubscribeToStringParam, ParamName) == 0x000000, "Member 'AudioComponentGroup_SubscribeToStringParam::ParamName' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_SubscribeToStringParam, Delegate) == 0x000004, "Member 'AudioComponentGroup_SubscribeToStringParam::Delegate' has a wrong offset!");

struct AudioComponentGroup_UnsubscribeObject final
{
public:
	const class UObject*                          Object;
};
static_assert(alignof(AudioComponentGroup_UnsubscribeObject) == 0x000008, "Wrong alignment on AudioComponentGroup_UnsubscribeObject");
static_assert(sizeof(AudioComponentGroup_UnsubscribeObject) == 0x000008, "Wrong size on AudioComponentGroup_UnsubscribeObject");
static_assert(offsetof(AudioComponentGroup_UnsubscribeObject, Object) == 0x000000, "Member 'AudioComponentGroup_UnsubscribeObject::Object' has a wrong offset!");

struct AudioComponentGroup_GetBoolParamValue final
{
public:
	class FName                                   ParamName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(AudioComponentGroup_GetBoolParamValue) == 0x000004, "Wrong alignment on AudioComponentGroup_GetBoolParamValue");
static_assert(sizeof(AudioComponentGroup_GetBoolParamValue) == 0x000008, "Wrong size on AudioComponentGroup_GetBoolParamValue");
static_assert(offsetof(AudioComponentGroup_GetBoolParamValue, ParamName) == 0x000000, "Member 'AudioComponentGroup_GetBoolParamValue::ParamName' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_GetBoolParamValue, ReturnValue) == 0x000004, "Member 'AudioComponentGroup_GetBoolParamValue::ReturnValue' has a wrong offset!");

struct AudioComponentGroup_GetFloatParamValue final
{
public:
	class FName                                   ParamName;
	float                                         ReturnValue;
};
static_assert(alignof(AudioComponentGroup_GetFloatParamValue) == 0x000004, "Wrong alignment on AudioComponentGroup_GetFloatParamValue");
static_assert(sizeof(AudioComponentGroup_GetFloatParamValue) == 0x000008, "Wrong size on AudioComponentGroup_GetFloatParamValue");
static_assert(offsetof(AudioComponentGroup_GetFloatParamValue, ParamName) == 0x000000, "Member 'AudioComponentGroup_GetFloatParamValue::ParamName' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_GetFloatParamValue, ReturnValue) == 0x000004, "Member 'AudioComponentGroup_GetFloatParamValue::ReturnValue' has a wrong offset!");

struct AudioComponentGroup_GetStringParamValue final
{
public:
	class FName                                   ParamName;
	uint8                                         Pad_4[0x4];
	class FString                                 ReturnValue;
};
static_assert(alignof(AudioComponentGroup_GetStringParamValue) == 0x000008, "Wrong alignment on AudioComponentGroup_GetStringParamValue");
static_assert(sizeof(AudioComponentGroup_GetStringParamValue) == 0x000018, "Wrong size on AudioComponentGroup_GetStringParamValue");
static_assert(offsetof(AudioComponentGroup_GetStringParamValue, ParamName) == 0x000000, "Member 'AudioComponentGroup_GetStringParamValue::ParamName' has a wrong offset!");
static_assert(offsetof(AudioComponentGroup_GetStringParamValue, ReturnValue) == 0x000008, "Member 'AudioComponentGroup_GetStringParamValue::ReturnValue' has a wrong offset!");

struct AudioComponentGroup_IsPlayingAny final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(AudioComponentGroup_IsPlayingAny) == 0x000001, "Wrong alignment on AudioComponentGroup_IsPlayingAny");
static_assert(sizeof(AudioComponentGroup_IsPlayingAny) == 0x000001, "Wrong size on AudioComponentGroup_IsPlayingAny");
static_assert(offsetof(AudioComponentGroup_IsPlayingAny, ReturnValue) == 0x000000, "Member 'AudioComponentGroup_IsPlayingAny::ReturnValue' has a wrong offset!");

struct AudioComponentGroup_IsVirtualized final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(AudioComponentGroup_IsVirtualized) == 0x000001, "Wrong alignment on AudioComponentGroup_IsVirtualized");
static_assert(sizeof(AudioComponentGroup_IsVirtualized) == 0x000001, "Wrong size on AudioComponentGroup_IsVirtualized");
static_assert(offsetof(AudioComponentGroup_IsVirtualized, ReturnValue) == 0x000000, "Member 'AudioComponentGroup_IsVirtualized::ReturnValue' has a wrong offset!");

struct AudioParameterComponent_GetParameters final
{
public:
	TArray<struct FAudioParameter>                ReturnValue;
};
static_assert(alignof(AudioParameterComponent_GetParameters) == 0x000008, "Wrong alignment on AudioParameterComponent_GetParameters");
static_assert(sizeof(AudioParameterComponent_GetParameters) == 0x000010, "Wrong size on AudioParameterComponent_GetParameters");
static_assert(offsetof(AudioParameterComponent_GetParameters, ReturnValue) == 0x000000, "Member 'AudioParameterComponent_GetParameters::ReturnValue' has a wrong offset!");

}
