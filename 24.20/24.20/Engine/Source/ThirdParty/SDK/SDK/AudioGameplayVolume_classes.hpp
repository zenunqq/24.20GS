#pragma once

#include "Basic.hpp"

#include "AudioGameplay_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAudioGameplayVolumeMutator : public UAudioGameplayComponent
{
public:
	int32                                         Priority;
	uint8                                         Pad_AC[0x4];

public:
	void SetPriority(int32 InPriority);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeMutator">();
	}
	static class UAudioGameplayVolumeMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeMutator>();
	}
};
static_assert(alignof(UAudioGameplayVolumeMutator) == 0x000008, "Wrong alignment on UAudioGameplayVolumeMutator");
static_assert(sizeof(UAudioGameplayVolumeMutator) == 0x0000B0, "Wrong size on UAudioGameplayVolumeMutator");
static_assert(offsetof(UAudioGameplayVolumeMutator, Priority) == 0x0000A8, "Member 'UAudioGameplayVolumeMutator::Priority' has a wrong offset!");

class UAttenuationVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	float                                         ExteriorVolume;
	float                                         ExteriorTime;
	float                                         InteriorVolume;
	float                                         InteriorTime;

public:
	void SetExteriorVolume(float Volume, float InterpolateTime);
	void SetInteriorVolume(float Volume, float InterpolateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AttenuationVolumeComponent">();
	}
	static class UAttenuationVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttenuationVolumeComponent>();
	}
};
static_assert(alignof(UAttenuationVolumeComponent) == 0x000008, "Wrong alignment on UAttenuationVolumeComponent");
static_assert(sizeof(UAttenuationVolumeComponent) == 0x0000C0, "Wrong size on UAttenuationVolumeComponent");
static_assert(offsetof(UAttenuationVolumeComponent, ExteriorVolume) == 0x0000B0, "Member 'UAttenuationVolumeComponent::ExteriorVolume' has a wrong offset!");
static_assert(offsetof(UAttenuationVolumeComponent, ExteriorTime) == 0x0000B4, "Member 'UAttenuationVolumeComponent::ExteriorTime' has a wrong offset!");
static_assert(offsetof(UAttenuationVolumeComponent, InteriorVolume) == 0x0000B8, "Member 'UAttenuationVolumeComponent::InteriorVolume' has a wrong offset!");
static_assert(offsetof(UAttenuationVolumeComponent, InteriorTime) == 0x0000BC, "Member 'UAttenuationVolumeComponent::InteriorTime' has a wrong offset!");

class AAudioGameplayVolume : public AVolume
{
public:
	class UAudioGameplayVolumeComponent*          AGVComponent;
	bool                                          bEnabled;
	uint8                                         Pad_2C9[0x7];
	TMulticastInlineDelegate<void()>              OnListenerEnterEvent;
	TMulticastInlineDelegate<void()>              OnListenerExitEvent;

public:
	void OnListenerEnter();
	void OnListenerExit();
	void OnRep_bEnabled();
	void SetEnabled(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolume">();
	}
	static class AAudioGameplayVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudioGameplayVolume>();
	}
};
static_assert(alignof(AAudioGameplayVolume) == 0x000008, "Wrong alignment on AAudioGameplayVolume");
static_assert(sizeof(AAudioGameplayVolume) == 0x0002F0, "Wrong size on AAudioGameplayVolume");
static_assert(offsetof(AAudioGameplayVolume, AGVComponent) == 0x0002C0, "Member 'AAudioGameplayVolume::AGVComponent' has a wrong offset!");
static_assert(offsetof(AAudioGameplayVolume, bEnabled) == 0x0002C8, "Member 'AAudioGameplayVolume::bEnabled' has a wrong offset!");
static_assert(offsetof(AAudioGameplayVolume, OnListenerEnterEvent) == 0x0002D0, "Member 'AAudioGameplayVolume::OnListenerEnterEvent' has a wrong offset!");
static_assert(offsetof(AAudioGameplayVolume, OnListenerExitEvent) == 0x0002E0, "Member 'AAudioGameplayVolume::OnListenerExitEvent' has a wrong offset!");

class UAudioGameplayVolumeComponent final : public UAudioGameplayComponent
{
public:
	TMulticastInlineDelegate<void()>              OnProxyEnter;
	TMulticastInlineDelegate<void()>              OnProxyExit;
	class UAudioGameplayVolumeProxy*              Proxy;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeComponent">();
	}
	static class UAudioGameplayVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeComponent>();
	}
};
static_assert(alignof(UAudioGameplayVolumeComponent) == 0x000008, "Wrong alignment on UAudioGameplayVolumeComponent");
static_assert(sizeof(UAudioGameplayVolumeComponent) == 0x0000D0, "Wrong size on UAudioGameplayVolumeComponent");
static_assert(offsetof(UAudioGameplayVolumeComponent, OnProxyEnter) == 0x0000A8, "Member 'UAudioGameplayVolumeComponent::OnProxyEnter' has a wrong offset!");
static_assert(offsetof(UAudioGameplayVolumeComponent, OnProxyExit) == 0x0000B8, "Member 'UAudioGameplayVolumeComponent::OnProxyExit' has a wrong offset!");
static_assert(offsetof(UAudioGameplayVolumeComponent, Proxy) == 0x0000C8, "Member 'UAudioGameplayVolumeComponent::Proxy' has a wrong offset!");

class UAudioGameplayVolumeComponentBase final : public UAudioGameplayComponent
{
public:
	uint8                                         Pad_A8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeComponentBase">();
	}
	static class UAudioGameplayVolumeComponentBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeComponentBase>();
	}
};
static_assert(alignof(UAudioGameplayVolumeComponentBase) == 0x000008, "Wrong alignment on UAudioGameplayVolumeComponentBase");
static_assert(sizeof(UAudioGameplayVolumeComponentBase) == 0x0000B0, "Wrong size on UAudioGameplayVolumeComponentBase");

class UAudioGameplayVolumeProxy : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeProxy">();
	}
	static class UAudioGameplayVolumeProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeProxy>();
	}
};
static_assert(alignof(UAudioGameplayVolumeProxy) == 0x000008, "Wrong alignment on UAudioGameplayVolumeProxy");
static_assert(sizeof(UAudioGameplayVolumeProxy) == 0x000048, "Wrong size on UAudioGameplayVolumeProxy");

class UAGVPrimitiveComponentProxy final : public UAudioGameplayVolumeProxy
{
public:
	uint8                                         Pad_48[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGVPrimitiveComponentProxy">();
	}
	static class UAGVPrimitiveComponentProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGVPrimitiveComponentProxy>();
	}
};
static_assert(alignof(UAGVPrimitiveComponentProxy) == 0x000008, "Wrong alignment on UAGVPrimitiveComponentProxy");
static_assert(sizeof(UAGVPrimitiveComponentProxy) == 0x000050, "Wrong size on UAGVPrimitiveComponentProxy");

class UAGVConditionProxy final : public UAudioGameplayVolumeProxy
{
public:
	uint8                                         Pad_48[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AGVConditionProxy">();
	}
	static class UAGVConditionProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAGVConditionProxy>();
	}
};
static_assert(alignof(UAGVConditionProxy) == 0x000008, "Wrong alignment on UAGVConditionProxy");
static_assert(sizeof(UAGVConditionProxy) == 0x000050, "Wrong size on UAGVConditionProxy");

class UAudioGameplayVolumeSubsystem final : public UAudioEngineSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	TMap<uint32, class UAudioGameplayVolumeComponent*> AGVComponents;
	uint8                                         Pad_88[0xD0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioGameplayVolumeSubsystem">();
	}
	static class UAudioGameplayVolumeSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioGameplayVolumeSubsystem>();
	}
};
static_assert(alignof(UAudioGameplayVolumeSubsystem) == 0x000008, "Wrong alignment on UAudioGameplayVolumeSubsystem");
static_assert(sizeof(UAudioGameplayVolumeSubsystem) == 0x000158, "Wrong size on UAudioGameplayVolumeSubsystem");
static_assert(offsetof(UAudioGameplayVolumeSubsystem, AGVComponents) == 0x000038, "Member 'UAudioGameplayVolumeSubsystem::AGVComponents' has a wrong offset!");

class UFilterVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	float                                         ExteriorLPF;
	float                                         ExteriorLPFTime;
	float                                         InteriorLPF;
	float                                         InteriorLPFTime;

public:
	void SetExteriorLPF(float Volume, float InterpolateTime);
	void SetInteriorLPF(float Volume, float InterpolateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FilterVolumeComponent">();
	}
	static class UFilterVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterVolumeComponent>();
	}
};
static_assert(alignof(UFilterVolumeComponent) == 0x000008, "Wrong alignment on UFilterVolumeComponent");
static_assert(sizeof(UFilterVolumeComponent) == 0x0000C0, "Wrong size on UFilterVolumeComponent");
static_assert(offsetof(UFilterVolumeComponent, ExteriorLPF) == 0x0000B0, "Member 'UFilterVolumeComponent::ExteriorLPF' has a wrong offset!");
static_assert(offsetof(UFilterVolumeComponent, ExteriorLPFTime) == 0x0000B4, "Member 'UFilterVolumeComponent::ExteriorLPFTime' has a wrong offset!");
static_assert(offsetof(UFilterVolumeComponent, InteriorLPF) == 0x0000B8, "Member 'UFilterVolumeComponent::InteriorLPF' has a wrong offset!");
static_assert(offsetof(UFilterVolumeComponent, InteriorLPFTime) == 0x0000BC, "Member 'UFilterVolumeComponent::InteriorLPFTime' has a wrong offset!");

class UReverbVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	struct FReverbSettings                        ReverbSettings;

public:
	void SetReverbSettings(const struct FReverbSettings& NewReverbSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReverbVolumeComponent">();
	}
	static class UReverbVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbVolumeComponent>();
	}
};
static_assert(alignof(UReverbVolumeComponent) == 0x000008, "Wrong alignment on UReverbVolumeComponent");
static_assert(sizeof(UReverbVolumeComponent) == 0x0000D0, "Wrong size on UReverbVolumeComponent");
static_assert(offsetof(UReverbVolumeComponent, ReverbSettings) == 0x0000B0, "Member 'UReverbVolumeComponent::ReverbSettings' has a wrong offset!");

class USubmixOverrideVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings;

public:
	void SetSubmixOverrideSettings(const TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixOverrideVolumeComponent">();
	}
	static class USubmixOverrideVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixOverrideVolumeComponent>();
	}
};
static_assert(alignof(USubmixOverrideVolumeComponent) == 0x000008, "Wrong alignment on USubmixOverrideVolumeComponent");
static_assert(sizeof(USubmixOverrideVolumeComponent) == 0x0000C0, "Wrong size on USubmixOverrideVolumeComponent");
static_assert(offsetof(USubmixOverrideVolumeComponent, SubmixOverrideSettings) == 0x0000B0, "Member 'USubmixOverrideVolumeComponent::SubmixOverrideSettings' has a wrong offset!");

class USubmixSendVolumeComponent final : public UAudioGameplayVolumeMutator
{
public:
	TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings;

public:
	void SetSubmixSendSettings(const TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubmixSendVolumeComponent">();
	}
	static class USubmixSendVolumeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubmixSendVolumeComponent>();
	}
};
static_assert(alignof(USubmixSendVolumeComponent) == 0x000008, "Wrong alignment on USubmixSendVolumeComponent");
static_assert(sizeof(USubmixSendVolumeComponent) == 0x0000C0, "Wrong size on USubmixSendVolumeComponent");
static_assert(offsetof(USubmixSendVolumeComponent, SubmixSendSettings) == 0x0000B0, "Member 'USubmixSendVolumeComponent::SubmixSendSettings' has a wrong offset!");

}
