#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct AmbientAudioComponent_SetAmbientAsset final
{
public:
	class UAmbientAudioDataAsset*                 InAmbientAsset;
};
static_assert(alignof(AmbientAudioComponent_SetAmbientAsset) == 0x000008, "Wrong alignment on AmbientAudioComponent_SetAmbientAsset");
static_assert(sizeof(AmbientAudioComponent_SetAmbientAsset) == 0x000008, "Wrong size on AmbientAudioComponent_SetAmbientAsset");
static_assert(offsetof(AmbientAudioComponent_SetAmbientAsset, InAmbientAsset) == 0x000000, "Member 'AmbientAudioComponent_SetAmbientAsset::InAmbientAsset' has a wrong offset!");

struct AmbientAudioComponent_SetCrossfadeTime final
{
public:
	float                                         InCrossfadeTime;
};
static_assert(alignof(AmbientAudioComponent_SetCrossfadeTime) == 0x000004, "Wrong alignment on AmbientAudioComponent_SetCrossfadeTime");
static_assert(sizeof(AmbientAudioComponent_SetCrossfadeTime) == 0x000004, "Wrong size on AmbientAudioComponent_SetCrossfadeTime");
static_assert(offsetof(AmbientAudioComponent_SetCrossfadeTime, InCrossfadeTime) == 0x000000, "Member 'AmbientAudioComponent_SetCrossfadeTime::InCrossfadeTime' has a wrong offset!");

struct AmbientAudioComponent_SetPriority final
{
public:
	int32                                         InPriority;
};
static_assert(alignof(AmbientAudioComponent_SetPriority) == 0x000004, "Wrong alignment on AmbientAudioComponent_SetPriority");
static_assert(sizeof(AmbientAudioComponent_SetPriority) == 0x000004, "Wrong size on AmbientAudioComponent_SetPriority");
static_assert(offsetof(AmbientAudioComponent_SetPriority, InPriority) == 0x000000, "Member 'AmbientAudioComponent_SetPriority::InPriority' has a wrong offset!");

struct AmbientAudioSubsystem_AddAmbientEntry final
{
public:
	class FName                                   AmbientName;
	uint8                                         Pad_4[0x4];
	class UAmbientAudioDataAsset*                 Asset;
	int32                                         Priority;
	float                                         CrossfadeTime;
};
static_assert(alignof(AmbientAudioSubsystem_AddAmbientEntry) == 0x000008, "Wrong alignment on AmbientAudioSubsystem_AddAmbientEntry");
static_assert(sizeof(AmbientAudioSubsystem_AddAmbientEntry) == 0x000018, "Wrong size on AmbientAudioSubsystem_AddAmbientEntry");
static_assert(offsetof(AmbientAudioSubsystem_AddAmbientEntry, AmbientName) == 0x000000, "Member 'AmbientAudioSubsystem_AddAmbientEntry::AmbientName' has a wrong offset!");
static_assert(offsetof(AmbientAudioSubsystem_AddAmbientEntry, Asset) == 0x000008, "Member 'AmbientAudioSubsystem_AddAmbientEntry::Asset' has a wrong offset!");
static_assert(offsetof(AmbientAudioSubsystem_AddAmbientEntry, Priority) == 0x000010, "Member 'AmbientAudioSubsystem_AddAmbientEntry::Priority' has a wrong offset!");
static_assert(offsetof(AmbientAudioSubsystem_AddAmbientEntry, CrossfadeTime) == 0x000014, "Member 'AmbientAudioSubsystem_AddAmbientEntry::CrossfadeTime' has a wrong offset!");

struct AmbientAudioSubsystem_AddGameplayTag final
{
public:
	struct FGameplayTag                           GameplayTag;
};
static_assert(alignof(AmbientAudioSubsystem_AddGameplayTag) == 0x000004, "Wrong alignment on AmbientAudioSubsystem_AddGameplayTag");
static_assert(sizeof(AmbientAudioSubsystem_AddGameplayTag) == 0x000004, "Wrong size on AmbientAudioSubsystem_AddGameplayTag");
static_assert(offsetof(AmbientAudioSubsystem_AddGameplayTag, GameplayTag) == 0x000000, "Member 'AmbientAudioSubsystem_AddGameplayTag::GameplayTag' has a wrong offset!");

struct AmbientAudioSubsystem_GetAudioParameterComponent final
{
public:
	class UAudioParameterComponent*               ReturnValue;
};
static_assert(alignof(AmbientAudioSubsystem_GetAudioParameterComponent) == 0x000008, "Wrong alignment on AmbientAudioSubsystem_GetAudioParameterComponent");
static_assert(sizeof(AmbientAudioSubsystem_GetAudioParameterComponent) == 0x000008, "Wrong size on AmbientAudioSubsystem_GetAudioParameterComponent");
static_assert(offsetof(AmbientAudioSubsystem_GetAudioParameterComponent, ReturnValue) == 0x000000, "Member 'AmbientAudioSubsystem_GetAudioParameterComponent::ReturnValue' has a wrong offset!");

struct AmbientAudioSubsystem_RemoveAmbientEntry final
{
public:
	class FName                                   AmbientName;
	float                                         CrossfadeOverride;
};
static_assert(alignof(AmbientAudioSubsystem_RemoveAmbientEntry) == 0x000004, "Wrong alignment on AmbientAudioSubsystem_RemoveAmbientEntry");
static_assert(sizeof(AmbientAudioSubsystem_RemoveAmbientEntry) == 0x000008, "Wrong size on AmbientAudioSubsystem_RemoveAmbientEntry");
static_assert(offsetof(AmbientAudioSubsystem_RemoveAmbientEntry, AmbientName) == 0x000000, "Member 'AmbientAudioSubsystem_RemoveAmbientEntry::AmbientName' has a wrong offset!");
static_assert(offsetof(AmbientAudioSubsystem_RemoveAmbientEntry, CrossfadeOverride) == 0x000004, "Member 'AmbientAudioSubsystem_RemoveAmbientEntry::CrossfadeOverride' has a wrong offset!");

struct AmbientAudioSubsystem_RemoveGameplayTag final
{
public:
	struct FGameplayTag                           GameplayTag;
};
static_assert(alignof(AmbientAudioSubsystem_RemoveGameplayTag) == 0x000004, "Wrong alignment on AmbientAudioSubsystem_RemoveGameplayTag");
static_assert(sizeof(AmbientAudioSubsystem_RemoveGameplayTag) == 0x000004, "Wrong size on AmbientAudioSubsystem_RemoveGameplayTag");
static_assert(offsetof(AmbientAudioSubsystem_RemoveGameplayTag, GameplayTag) == 0x000000, "Member 'AmbientAudioSubsystem_RemoveGameplayTag::GameplayTag' has a wrong offset!");

}
