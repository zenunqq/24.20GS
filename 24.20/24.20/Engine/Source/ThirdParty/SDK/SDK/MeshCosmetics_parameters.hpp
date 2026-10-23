#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct FortCustomizableObjectParameterVariant_ApplyVariants final
{
public:
	class AActor*                                 Actor;
	struct FFortAthenaLoadout                     Loadout;
};
static_assert(alignof(FortCustomizableObjectParameterVariant_ApplyVariants) == 0x000008, "Wrong alignment on FortCustomizableObjectParameterVariant_ApplyVariants");
static_assert(sizeof(FortCustomizableObjectParameterVariant_ApplyVariants) == 0x000180, "Wrong size on FortCustomizableObjectParameterVariant_ApplyVariants");
static_assert(offsetof(FortCustomizableObjectParameterVariant_ApplyVariants, Actor) == 0x000000, "Member 'FortCustomizableObjectParameterVariant_ApplyVariants::Actor' has a wrong offset!");
static_assert(offsetof(FortCustomizableObjectParameterVariant_ApplyVariants, Loadout) == 0x000008, "Member 'FortCustomizableObjectParameterVariant_ApplyVariants::Loadout' has a wrong offset!");

struct InstanceCache_FortGameInstance_OnGameInstanceWorldChanged final
{
public:
	class UWorld*                                 OldWorld;
	class UWorld*                                 NewWorld;
};
static_assert(alignof(InstanceCache_FortGameInstance_OnGameInstanceWorldChanged) == 0x000008, "Wrong alignment on InstanceCache_FortGameInstance_OnGameInstanceWorldChanged");
static_assert(sizeof(InstanceCache_FortGameInstance_OnGameInstanceWorldChanged) == 0x000010, "Wrong size on InstanceCache_FortGameInstance_OnGameInstanceWorldChanged");
static_assert(offsetof(InstanceCache_FortGameInstance_OnGameInstanceWorldChanged, OldWorld) == 0x000000, "Member 'InstanceCache_FortGameInstance_OnGameInstanceWorldChanged::OldWorld' has a wrong offset!");
static_assert(offsetof(InstanceCache_FortGameInstance_OnGameInstanceWorldChanged, NewWorld) == 0x000008, "Member 'InstanceCache_FortGameInstance_OnGameInstanceWorldChanged::NewWorld' has a wrong offset!");

struct InstanceCache_FortGameInstance_OnGamePhaseChanged final
{
public:
	EAthenaGamePhase                              GamePhase;
};
static_assert(alignof(InstanceCache_FortGameInstance_OnGamePhaseChanged) == 0x000001, "Wrong alignment on InstanceCache_FortGameInstance_OnGamePhaseChanged");
static_assert(sizeof(InstanceCache_FortGameInstance_OnGamePhaseChanged) == 0x000001, "Wrong size on InstanceCache_FortGameInstance_OnGamePhaseChanged");
static_assert(offsetof(InstanceCache_FortGameInstance_OnGamePhaseChanged, GamePhase) == 0x000000, "Member 'InstanceCache_FortGameInstance_OnGamePhaseChanged::GamePhase' has a wrong offset!");

struct InstanceCache_FortGameInstance_OnGameStateChanged final
{
public:
	class AGameStateBase*                         InGameState;
};
static_assert(alignof(InstanceCache_FortGameInstance_OnGameStateChanged) == 0x000008, "Wrong alignment on InstanceCache_FortGameInstance_OnGameStateChanged");
static_assert(sizeof(InstanceCache_FortGameInstance_OnGameStateChanged) == 0x000008, "Wrong size on InstanceCache_FortGameInstance_OnGameStateChanged");
static_assert(offsetof(InstanceCache_FortGameInstance_OnGameStateChanged, InGameState) == 0x000000, "Member 'InstanceCache_FortGameInstance_OnGameStateChanged::InGameState' has a wrong offset!");

struct InstanceCache_FortGameInstance_OnPreLoadMap final
{
public:
	struct FWorldContext                          WorldContext;
	class FString                                 MapName;
};
static_assert(alignof(InstanceCache_FortGameInstance_OnPreLoadMap) == 0x000008, "Wrong alignment on InstanceCache_FortGameInstance_OnPreLoadMap");
static_assert(sizeof(InstanceCache_FortGameInstance_OnPreLoadMap) == 0x0002D0, "Wrong size on InstanceCache_FortGameInstance_OnPreLoadMap");
static_assert(offsetof(InstanceCache_FortGameInstance_OnPreLoadMap, WorldContext) == 0x000000, "Member 'InstanceCache_FortGameInstance_OnPreLoadMap::WorldContext' has a wrong offset!");
static_assert(offsetof(InstanceCache_FortGameInstance_OnPreLoadMap, MapName) == 0x0002C0, "Member 'InstanceCache_FortGameInstance_OnPreLoadMap::MapName' has a wrong offset!");

struct MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP final
{
public:
	struct FGameplayTagContainer                  GameplayTags;
};
static_assert(alignof(MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP) == 0x000008, "Wrong alignment on MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP");
static_assert(sizeof(MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP) == 0x000020, "Wrong size on MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP");
static_assert(offsetof(MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP, GameplayTags) == 0x000000, "Member 'MeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP::GameplayTags' has a wrong offset!");

}
