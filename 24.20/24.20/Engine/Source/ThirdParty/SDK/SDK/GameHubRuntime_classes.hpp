#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "PlayspaceSystem_classes.hpp"

namespace SDK
{

class AGameHubBaseMutator final : public AFortAthenaMutator
{
public:
	uint8                                         Pad_330[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameHubBaseMutator">();
	}
	static class AGameHubBaseMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameHubBaseMutator>();
	}
};
static_assert(alignof(AGameHubBaseMutator) == 0x000008, "Wrong alignment on AGameHubBaseMutator");
static_assert(sizeof(AGameHubBaseMutator) == 0x000340, "Wrong size on AGameHubBaseMutator");

class UGameHubPlayerSpawningComponent final : public UPlayspaceComponent_PlayerSpawning
{
public:
	struct FGameplayTagContainer                  PlayerStartRequirements;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameHubPlayerSpawningComponent">();
	}
	static class UGameHubPlayerSpawningComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameHubPlayerSpawningComponent>();
	}
};
static_assert(alignof(UGameHubPlayerSpawningComponent) == 0x000008, "Wrong alignment on UGameHubPlayerSpawningComponent");
static_assert(sizeof(UGameHubPlayerSpawningComponent) == 0x0000D0, "Wrong size on UGameHubPlayerSpawningComponent");
static_assert(offsetof(UGameHubPlayerSpawningComponent, PlayerStartRequirements) == 0x0000B0, "Member 'UGameHubPlayerSpawningComponent::PlayerStartRequirements' has a wrong offset!");

class AGameHubPlayspace final : public AFortPlayspace
{
public:
	bool                                          bSimulatePlayerDamage;
	uint8                                         Pad_671[0x7];
	struct FGameplayTagContainer                  PlayerStartRequirements;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameHubPlayspace">();
	}
	static class AGameHubPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameHubPlayspace>();
	}
};
static_assert(alignof(AGameHubPlayspace) == 0x000008, "Wrong alignment on AGameHubPlayspace");
static_assert(sizeof(AGameHubPlayspace) == 0x000698, "Wrong size on AGameHubPlayspace");
static_assert(offsetof(AGameHubPlayspace, bSimulatePlayerDamage) == 0x000670, "Member 'AGameHubPlayspace::bSimulatePlayerDamage' has a wrong offset!");
static_assert(offsetof(AGameHubPlayspace, PlayerStartRequirements) == 0x000678, "Member 'AGameHubPlayspace::PlayerStartRequirements' has a wrong offset!");

}
