#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AudioGameplay_classes.hpp"
#include "AmbientAudio_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UAmbientAudioComponent final : public UAudioGameplayComponent
{
public:
	uint8                                         Pad_A8[0x8];
	class UAmbientAudioDataAsset*                 AmbientAsset;
	int32                                         Priority;
	float                                         CrossfadeTime;
	struct FGuid                                  AmbientGuid;
	class FName                                   DisplayName;
	uint8                                         Pad_D4[0x4];

public:
	void SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset);
	void SetCrossfadeTime(float InCrossfadeTime);
	void SetPriority(int32 InPriority);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbientAudioComponent">();
	}
	static class UAmbientAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbientAudioComponent>();
	}
};
static_assert(alignof(UAmbientAudioComponent) == 0x000008, "Wrong alignment on UAmbientAudioComponent");
static_assert(sizeof(UAmbientAudioComponent) == 0x0000D8, "Wrong size on UAmbientAudioComponent");
static_assert(offsetof(UAmbientAudioComponent, AmbientAsset) == 0x0000B0, "Member 'UAmbientAudioComponent::AmbientAsset' has a wrong offset!");
static_assert(offsetof(UAmbientAudioComponent, Priority) == 0x0000B8, "Member 'UAmbientAudioComponent::Priority' has a wrong offset!");
static_assert(offsetof(UAmbientAudioComponent, CrossfadeTime) == 0x0000BC, "Member 'UAmbientAudioComponent::CrossfadeTime' has a wrong offset!");
static_assert(offsetof(UAmbientAudioComponent, AmbientGuid) == 0x0000C0, "Member 'UAmbientAudioComponent::AmbientGuid' has a wrong offset!");
static_assert(offsetof(UAmbientAudioComponent, DisplayName) == 0x0000D0, "Member 'UAmbientAudioComponent::DisplayName' has a wrong offset!");

class UAmbientAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FAmbientAudioLoop>              LoopingSounds;
	TArray<struct FAmbientAudioOneShot>           OneShotSounds;
	float                                         TagCrossfadeTime;
	uint8                                         Pad_54[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbientAudioDataAsset">();
	}
	static class UAmbientAudioDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbientAudioDataAsset>();
	}
};
static_assert(alignof(UAmbientAudioDataAsset) == 0x000008, "Wrong alignment on UAmbientAudioDataAsset");
static_assert(sizeof(UAmbientAudioDataAsset) == 0x000058, "Wrong size on UAmbientAudioDataAsset");
static_assert(offsetof(UAmbientAudioDataAsset, LoopingSounds) == 0x000030, "Member 'UAmbientAudioDataAsset::LoopingSounds' has a wrong offset!");
static_assert(offsetof(UAmbientAudioDataAsset, OneShotSounds) == 0x000040, "Member 'UAmbientAudioDataAsset::OneShotSounds' has a wrong offset!");
static_assert(offsetof(UAmbientAudioDataAsset, TagCrossfadeTime) == 0x000050, "Member 'UAmbientAudioDataAsset::TagCrossfadeTime' has a wrong offset!");

class UAmbientAudioSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	TMulticastInlineDelegate<void(struct FGameplayTag& GameplayTag, EAmbientAudioTagActionType ActionType)> OnTagChanged;
	TMulticastInlineDelegate<void(class FName AmbientName, EAmbientAudioEntryActionType ActionType)> OnEntryChanged;
	TArray<class UAmbientAudioComponent*>         AmbientComponents;
	class AAmbientAudioParameterActor*            ParameterActor;
	uint8                                         Pad_70[0x1E8];

public:
	void AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime);
	void AddGameplayTag(const struct FGameplayTag& GameplayTag);
	class UAudioParameterComponent* GetAudioParameterComponent();
	void RemoveAmbientEntry(class FName AmbientName, float CrossfadeOverride);
	void RemoveGameplayTag(const struct FGameplayTag& GameplayTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbientAudioSubsystem">();
	}
	static class UAmbientAudioSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbientAudioSubsystem>();
	}
};
static_assert(alignof(UAmbientAudioSubsystem) == 0x000008, "Wrong alignment on UAmbientAudioSubsystem");
static_assert(sizeof(UAmbientAudioSubsystem) == 0x000258, "Wrong size on UAmbientAudioSubsystem");
static_assert(offsetof(UAmbientAudioSubsystem, OnTagChanged) == 0x000038, "Member 'UAmbientAudioSubsystem::OnTagChanged' has a wrong offset!");
static_assert(offsetof(UAmbientAudioSubsystem, OnEntryChanged) == 0x000048, "Member 'UAmbientAudioSubsystem::OnEntryChanged' has a wrong offset!");
static_assert(offsetof(UAmbientAudioSubsystem, AmbientComponents) == 0x000058, "Member 'UAmbientAudioSubsystem::AmbientComponents' has a wrong offset!");
static_assert(offsetof(UAmbientAudioSubsystem, ParameterActor) == 0x000068, "Member 'UAmbientAudioSubsystem::ParameterActor' has a wrong offset!");

class AAmbientAudioParameterActor final : public AActor
{
public:
	class UAudioParameterComponent*               Parameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbientAudioParameterActor">();
	}
	static class AAmbientAudioParameterActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAmbientAudioParameterActor>();
	}
};
static_assert(alignof(AAmbientAudioParameterActor) == 0x000008, "Wrong alignment on AAmbientAudioParameterActor");
static_assert(sizeof(AAmbientAudioParameterActor) == 0x000290, "Wrong size on AAmbientAudioParameterActor");
static_assert(offsetof(AAmbientAudioParameterActor, Parameters) == 0x000288, "Member 'AAmbientAudioParameterActor::Parameters' has a wrong offset!");

}
