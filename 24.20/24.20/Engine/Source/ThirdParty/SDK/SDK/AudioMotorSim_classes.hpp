#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "AudioMotorSim_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UAudioMotorModelComponent final : public UActorComponent
{
public:
	TArray<struct FMotorSimEntry>                 SimComponents;
	TArray<TScriptInterface<class IAudioMotorSimOutput>> AudioComponents;
	uint8                                         Pad_C0[0x40];

public:
	void AddMotorAudioComponent(TScriptInterface<class IAudioMotorSimOutput> InComponent);
	void AddMotorSimComponent(TScriptInterface<class IAudioMotorSim> InComponent, const int32 SortOrder);
	void RemoveMotorAudioComponent(TScriptInterface<class IAudioMotorSimOutput> InComponent);
	void RemoveMotorSimComponent(TScriptInterface<class IAudioMotorSim> InComponent);
	void Reset();
	void StartOutput();
	void StopOutput();
	void Update(const struct FAudioMotorSimInputContext& Input);

	struct FAudioMotorSimInputContext GetCachedInputData() const;
	int32 GetGear() const;
	float GetRpm() const;
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMotorModelComponent">();
	}
	static class UAudioMotorModelComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMotorModelComponent>();
	}
};
static_assert(alignof(UAudioMotorModelComponent) == 0x000008, "Wrong alignment on UAudioMotorModelComponent");
static_assert(sizeof(UAudioMotorModelComponent) == 0x000100, "Wrong size on UAudioMotorModelComponent");
static_assert(offsetof(UAudioMotorModelComponent, SimComponents) == 0x0000A0, "Member 'UAudioMotorModelComponent::SimComponents' has a wrong offset!");
static_assert(offsetof(UAudioMotorModelComponent, AudioComponents) == 0x0000B0, "Member 'UAudioMotorModelComponent::AudioComponents' has a wrong offset!");

class IAudioMotorSim final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMotorSim">();
	}
	static class IAudioMotorSim* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioMotorSim>();
	}
};
static_assert(alignof(IAudioMotorSim) == 0x000008, "Wrong alignment on IAudioMotorSim");
static_assert(sizeof(IAudioMotorSim) == 0x000028, "Wrong size on IAudioMotorSim");

class UAudioMotorSimComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];

public:
	void BP_Reset();
	bool BP_Update(struct FAudioMotorSimInputContext& Input, struct FAudioMotorSimRuntimeContext& RuntimeInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMotorSimComponent">();
	}
	static class UAudioMotorSimComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioMotorSimComponent>();
	}
};
static_assert(alignof(UAudioMotorSimComponent) == 0x000008, "Wrong alignment on UAudioMotorSimComponent");
static_assert(sizeof(UAudioMotorSimComponent) == 0x0000A8, "Wrong size on UAudioMotorSimComponent");

class IAudioMotorSimOutput final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioMotorSimOutput">();
	}
	static class IAudioMotorSimOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAudioMotorSimOutput>();
	}
};
static_assert(alignof(IAudioMotorSimOutput) == 0x000008, "Wrong alignment on IAudioMotorSimOutput");
static_assert(sizeof(IAudioMotorSimOutput) == 0x000028, "Wrong size on IAudioMotorSimOutput");

}
