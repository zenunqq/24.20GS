#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SpecialEventGameplayRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct FortAthenaMutator_SpecialEventTODM_OnPhaseActivated final
{
public:
	class ASpecialEventScript*                    InSpecialEventScript;
	class ASpecialEventPhase*                     InSpecialEventPhase;
};
static_assert(alignof(FortAthenaMutator_SpecialEventTODM_OnPhaseActivated) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEventTODM_OnPhaseActivated");
static_assert(sizeof(FortAthenaMutator_SpecialEventTODM_OnPhaseActivated) == 0x000010, "Wrong size on FortAthenaMutator_SpecialEventTODM_OnPhaseActivated");
static_assert(offsetof(FortAthenaMutator_SpecialEventTODM_OnPhaseActivated, InSpecialEventScript) == 0x000000, "Member 'FortAthenaMutator_SpecialEventTODM_OnPhaseActivated::InSpecialEventScript' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEventTODM_OnPhaseActivated, InSpecialEventPhase) == 0x000008, "Member 'FortAthenaMutator_SpecialEventTODM_OnPhaseActivated::InSpecialEventPhase' has a wrong offset!");

struct FortCheatManager_SpecialEvent_AddCSVEvent final
{
public:
	class FString                                 CSVEventName;
};
static_assert(alignof(FortCheatManager_SpecialEvent_AddCSVEvent) == 0x000008, "Wrong alignment on FortCheatManager_SpecialEvent_AddCSVEvent");
static_assert(sizeof(FortCheatManager_SpecialEvent_AddCSVEvent) == 0x000010, "Wrong size on FortCheatManager_SpecialEvent_AddCSVEvent");
static_assert(offsetof(FortCheatManager_SpecialEvent_AddCSVEvent, CSVEventName) == 0x000000, "Member 'FortCheatManager_SpecialEvent_AddCSVEvent::CSVEventName' has a wrong offset!");

struct FortCheatManager_SpecialEvent_ChangeWinCondition final
{
public:
	float                                         NewGoalScore;
};
static_assert(alignof(FortCheatManager_SpecialEvent_ChangeWinCondition) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_ChangeWinCondition");
static_assert(sizeof(FortCheatManager_SpecialEvent_ChangeWinCondition) == 0x000004, "Wrong size on FortCheatManager_SpecialEvent_ChangeWinCondition");
static_assert(offsetof(FortCheatManager_SpecialEvent_ChangeWinCondition, NewGoalScore) == 0x000000, "Member 'FortCheatManager_SpecialEvent_ChangeWinCondition::NewGoalScore' has a wrong offset!");

struct FortCheatManager_SpecialEvent_PauseWinCondition final
{
public:
	bool                                          bLockScores;
};
static_assert(alignof(FortCheatManager_SpecialEvent_PauseWinCondition) == 0x000001, "Wrong alignment on FortCheatManager_SpecialEvent_PauseWinCondition");
static_assert(sizeof(FortCheatManager_SpecialEvent_PauseWinCondition) == 0x000001, "Wrong size on FortCheatManager_SpecialEvent_PauseWinCondition");
static_assert(offsetof(FortCheatManager_SpecialEvent_PauseWinCondition, bLockScores) == 0x000000, "Member 'FortCheatManager_SpecialEvent_PauseWinCondition::bLockScores' has a wrong offset!");

struct FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm final
{
public:
	bool                                          bDestroyVehiclesInStorm;
};
static_assert(alignof(FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm) == 0x000001, "Wrong alignment on FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm");
static_assert(sizeof(FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm) == 0x000001, "Wrong size on FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm");
static_assert(offsetof(FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm, bDestroyVehiclesInStorm) == 0x000000, "Member 'FortCheatManager_SpecialEvent_SetDestroyVehiclesInStorm::bDestroyVehiclesInStorm' has a wrong offset!");

struct FortCheatManager_SpecialEvent_SetIsSimulatingDamage final
{
public:
	bool                                          bIsSimulating;
};
static_assert(alignof(FortCheatManager_SpecialEvent_SetIsSimulatingDamage) == 0x000001, "Wrong alignment on FortCheatManager_SpecialEvent_SetIsSimulatingDamage");
static_assert(sizeof(FortCheatManager_SpecialEvent_SetIsSimulatingDamage) == 0x000001, "Wrong size on FortCheatManager_SpecialEvent_SetIsSimulatingDamage");
static_assert(offsetof(FortCheatManager_SpecialEvent_SetIsSimulatingDamage, bIsSimulating) == 0x000000, "Member 'FortCheatManager_SpecialEvent_SetIsSimulatingDamage::bIsSimulating' has a wrong offset!");

struct FortCheatManager_SpecialEvent_SetLockingOnFocalPoint final
{
public:
	bool                                          bInLockingOnFocalPoint;
};
static_assert(alignof(FortCheatManager_SpecialEvent_SetLockingOnFocalPoint) == 0x000001, "Wrong alignment on FortCheatManager_SpecialEvent_SetLockingOnFocalPoint");
static_assert(sizeof(FortCheatManager_SpecialEvent_SetLockingOnFocalPoint) == 0x000001, "Wrong size on FortCheatManager_SpecialEvent_SetLockingOnFocalPoint");
static_assert(offsetof(FortCheatManager_SpecialEvent_SetLockingOnFocalPoint, bInLockingOnFocalPoint) == 0x000000, "Member 'FortCheatManager_SpecialEvent_SetLockingOnFocalPoint::bInLockingOnFocalPoint' has a wrong offset!");

struct FortCheatManager_SpecialEvent_SetMatchTime final
{
public:
	int32                                         NewMatchTime;
};
static_assert(alignof(FortCheatManager_SpecialEvent_SetMatchTime) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_SetMatchTime");
static_assert(sizeof(FortCheatManager_SpecialEvent_SetMatchTime) == 0x000004, "Wrong size on FortCheatManager_SpecialEvent_SetMatchTime");
static_assert(offsetof(FortCheatManager_SpecialEvent_SetMatchTime, NewMatchTime) == 0x000000, "Member 'FortCheatManager_SpecialEvent_SetMatchTime::NewMatchTime' has a wrong offset!");

struct FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay final
{
public:
	float                                         MinDelayReturnToMainMenu;
	float                                         MaxDelayReturnToMainMenu;
};
static_assert(alignof(FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay");
static_assert(sizeof(FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay) == 0x000008, "Wrong size on FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay");
static_assert(offsetof(FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay, MinDelayReturnToMainMenu) == 0x000000, "Member 'FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay::MinDelayReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay, MaxDelayReturnToMainMenu) == 0x000004, "Member 'FortCheatManager_SpecialEvent_SetReturnToMainMenuDelay::MaxDelayReturnToMainMenu' has a wrong offset!");

struct FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint final
{
public:
	float                                         X;
	float                                         Y;
	float                                         Z;
};
static_assert(alignof(FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint");
static_assert(sizeof(FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint) == 0x00000C, "Wrong size on FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint");
static_assert(offsetof(FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint, X) == 0x000000, "Member 'FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint::X' has a wrong offset!");
static_assert(offsetof(FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint, Y) == 0x000004, "Member 'FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint::Y' has a wrong offset!");
static_assert(offsetof(FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint, Z) == 0x000008, "Member 'FortCheatManager_SpecialEvent_SpecialEventSetAdditionalViewpoint::Z' has a wrong offset!");

struct FortCheatManager_SpecialEvent_StartEventScript final
{
public:
	int32                                         InStartingIndex;
};
static_assert(alignof(FortCheatManager_SpecialEvent_StartEventScript) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_StartEventScript");
static_assert(sizeof(FortCheatManager_SpecialEvent_StartEventScript) == 0x000004, "Wrong size on FortCheatManager_SpecialEvent_StartEventScript");
static_assert(offsetof(FortCheatManager_SpecialEvent_StartEventScript, InStartingIndex) == 0x000000, "Member 'FortCheatManager_SpecialEvent_StartEventScript::InStartingIndex' has a wrong offset!");

struct FortCheatManager_SpecialEvent_TeleportAllPlayers final
{
public:
	int32                                         SafeZoneIndex;
};
static_assert(alignof(FortCheatManager_SpecialEvent_TeleportAllPlayers) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_TeleportAllPlayers");
static_assert(sizeof(FortCheatManager_SpecialEvent_TeleportAllPlayers) == 0x000004, "Wrong size on FortCheatManager_SpecialEvent_TeleportAllPlayers");
static_assert(offsetof(FortCheatManager_SpecialEvent_TeleportAllPlayers, SafeZoneIndex) == 0x000000, "Member 'FortCheatManager_SpecialEvent_TeleportAllPlayers::SafeZoneIndex' has a wrong offset!");

struct FortCheatManager_SpecialEvent_ToggleDisableParachutes final
{
public:
	bool                                          bIsDisabled;
};
static_assert(alignof(FortCheatManager_SpecialEvent_ToggleDisableParachutes) == 0x000001, "Wrong alignment on FortCheatManager_SpecialEvent_ToggleDisableParachutes");
static_assert(sizeof(FortCheatManager_SpecialEvent_ToggleDisableParachutes) == 0x000001, "Wrong size on FortCheatManager_SpecialEvent_ToggleDisableParachutes");
static_assert(offsetof(FortCheatManager_SpecialEvent_ToggleDisableParachutes, bIsDisabled) == 0x000000, "Member 'FortCheatManager_SpecialEvent_ToggleDisableParachutes::bIsDisabled' has a wrong offset!");

struct FortCheatManager_SpecialEvent_UnloadTerrainMaps final
{
public:
	class FName                                   MapTag;
};
static_assert(alignof(FortCheatManager_SpecialEvent_UnloadTerrainMaps) == 0x000004, "Wrong alignment on FortCheatManager_SpecialEvent_UnloadTerrainMaps");
static_assert(sizeof(FortCheatManager_SpecialEvent_UnloadTerrainMaps) == 0x000004, "Wrong size on FortCheatManager_SpecialEvent_UnloadTerrainMaps");
static_assert(offsetof(FortCheatManager_SpecialEvent_UnloadTerrainMaps, MapTag) == 0x000000, "Member 'FortCheatManager_SpecialEvent_UnloadTerrainMaps::MapTag' has a wrong offset!");

struct FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled final
{
public:
	class FString                                 TagString;
	bool                                          bEnabled;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled) == 0x000008, "Wrong alignment on FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled");
static_assert(sizeof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled) == 0x000018, "Wrong size on FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled");
static_assert(offsetof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled, TagString) == 0x000000, "Member 'FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled::TagString' has a wrong offset!");
static_assert(offsetof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled, bEnabled) == 0x000010, "Member 'FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled::bEnabled' has a wrong offset!");

struct FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents final
{
public:
	class FString                                 InActorName;
};
static_assert(alignof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents) == 0x000008, "Wrong alignment on FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents");
static_assert(sizeof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents) == 0x000010, "Wrong size on FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents");
static_assert(offsetof(FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents, InActorName) == 0x000000, "Member 'FortCheatManager_DestroyActorsAndComponents_DestroyActorsAndComponentsMutator_ListActorComponents::InActorName' has a wrong offset!");

struct FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug final
{
public:
	float                                         TextScale;
};
static_assert(alignof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug) == 0x000004, "Wrong alignment on FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug");
static_assert(sizeof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug) == 0x000004, "Wrong size on FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug, TextScale) == 0x000000, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyDebug::TextScale' has a wrong offset!");

struct FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase final
{
public:
	int32                                         MaxPlayersRemaining;
	uint8                                         Pad_4[0x4];
	class FString                                 ReasonGameplayTagString;
	int32                                         NumWaves;
	float                                         RelevancyDelay;
};
static_assert(alignof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase) == 0x000008, "Wrong alignment on FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase");
static_assert(sizeof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase) == 0x000020, "Wrong size on FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase, MaxPlayersRemaining) == 0x000000, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase::MaxPlayersRemaining' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase, ReasonGameplayTagString) == 0x000008, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase::ReasonGameplayTagString' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase, NumWaves) == 0x000018, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase::NumWaves' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase, RelevancyDelay) == 0x00001C, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancySetUpPhase::RelevancyDelay' has a wrong offset!");

struct FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm final
{
public:
	int32                                         NumPlayers;
	uint8                                         Pad_4[0x4];
	class FString                                 MaxPlayersRemainingAfterPhases;
	int32                                         MinSquadSize;
	int32                                         MaxSquadSize;
	int32                                         Iterations;
	int32                                         LogVerbosity;
};
static_assert(alignof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm) == 0x000008, "Wrong alignment on FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm");
static_assert(sizeof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm) == 0x000028, "Wrong size on FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm, NumPlayers) == 0x000000, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm::NumPlayers' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm, MaxPlayersRemainingAfterPhases) == 0x000008, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm::MaxPlayersRemainingAfterPhases' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm, MinSquadSize) == 0x000018, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm::MinSquadSize' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm, MaxSquadSize) == 0x00001C, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm::MaxSquadSize' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm, Iterations) == 0x000020, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm::Iterations' has a wrong offset!");
static_assert(offsetof(FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm, LogVerbosity) == 0x000024, "Member 'FortCheatManager_FakeKillRelevancy_FakeKillRelevancyTestAlgorithm::LogVerbosity' has a wrong offset!");

struct FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned) == 0x000008, "Wrong alignment on FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned");
static_assert(sizeof(FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned) == 0x000008, "Wrong size on FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned");
static_assert(offsetof(FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned, Actor) == 0x000000, "Member 'FortAthenaMutator_DestroyActorsAndComponents_OnActorSpawned::Actor' has a wrong offset!");

struct FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions final
{
public:
	TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> OldActorDefinitions;
};
static_assert(alignof(FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions) == 0x000008, "Wrong alignment on FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions");
static_assert(sizeof(FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions) == 0x000010, "Wrong size on FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions");
static_assert(offsetof(FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions, OldActorDefinitions) == 0x000000, "Member 'FortAthenaMutator_DestroyActorsAndComponents_OnRep_ActorDefinitions::OldActorDefinitions' has a wrong offset!");

struct FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed) == 0x000008, "Wrong alignment on FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed");
static_assert(sizeof(FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed) == 0x000008, "Wrong size on FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed");
static_assert(offsetof(FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed, DestroyedActor) == 0x000000, "Member 'FortAthenaMutator_DestroyActorsAndComponents_OnTrackedActorDestroyed::DestroyedActor' has a wrong offset!");

struct FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions final
{
public:
	struct FGameplayTagContainer                  InTags;
};
static_assert(alignof(FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions) == 0x000008, "Wrong alignment on FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions");
static_assert(sizeof(FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions) == 0x000020, "Wrong size on FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions");
static_assert(offsetof(FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions, InTags) == 0x000000, "Member 'FortAthenaMutator_DestroyActorsAndComponents_PermanentlyDisableActorDefinitions::InTags' has a wrong offset!");

struct FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled final
{
public:
	struct FGameplayTagContainer                  InTags;
	bool                                          bEnabled;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled) == 0x000008, "Wrong alignment on FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled");
static_assert(sizeof(FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled) == 0x000028, "Wrong size on FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled");
static_assert(offsetof(FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled, InTags) == 0x000000, "Member 'FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled::InTags' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled, bEnabled) == 0x000020, "Member 'FortAthenaMutator_DestroyActorsAndComponents_SetActorDefinitionsEnabled::bEnabled' has a wrong offset!");

struct FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient final
{
public:
	TArray<class AFortPlayerStateAthena*>         PlayerStates;
};
static_assert(alignof(FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient) == 0x000008, "Wrong alignment on FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient");
static_assert(sizeof(FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient) == 0x000010, "Wrong size on FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient");
static_assert(offsetof(FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient, PlayerStates) == 0x000000, "Member 'FortControllerComponent_FakeKillRelevancy_CancelKillEffectsOnClient::PlayerStates' has a wrong offset!");

struct FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed final
{
public:
	const class AFortPlayerStateAthena*           PlayerState;
};
static_assert(alignof(FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed) == 0x000008, "Wrong alignment on FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed");
static_assert(sizeof(FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed) == 0x000008, "Wrong size on FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed");
static_assert(offsetof(FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed, PlayerState) == 0x000000, "Member 'FortControllerComponent_FakeKillRelevancy_OnKillEffectsPlayed::PlayerState' has a wrong offset!");

struct FortControllerComponent_FakeKillRelevancy_PlayKillEffects final
{
public:
	struct FFakeKillRelevancyPlayerDataEntry      FakeKillData;
	float                                         RelevancyDelay;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FortControllerComponent_FakeKillRelevancy_PlayKillEffects) == 0x000008, "Wrong alignment on FortControllerComponent_FakeKillRelevancy_PlayKillEffects");
static_assert(sizeof(FortControllerComponent_FakeKillRelevancy_PlayKillEffects) == 0x000040, "Wrong size on FortControllerComponent_FakeKillRelevancy_PlayKillEffects");
static_assert(offsetof(FortControllerComponent_FakeKillRelevancy_PlayKillEffects, FakeKillData) == 0x000000, "Member 'FortControllerComponent_FakeKillRelevancy_PlayKillEffects::FakeKillData' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_FakeKillRelevancy_PlayKillEffects, RelevancyDelay) == 0x000038, "Member 'FortControllerComponent_FakeKillRelevancy_PlayKillEffects::RelevancyDelay' has a wrong offset!");

struct FortControllerComponent_FakeKillRelevancy_GetDeathLocation final
{
public:
	const class AFortPlayerStateAthena*           PlayerState;
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortControllerComponent_FakeKillRelevancy_GetDeathLocation) == 0x000008, "Wrong alignment on FortControllerComponent_FakeKillRelevancy_GetDeathLocation");
static_assert(sizeof(FortControllerComponent_FakeKillRelevancy_GetDeathLocation) == 0x000020, "Wrong size on FortControllerComponent_FakeKillRelevancy_GetDeathLocation");
static_assert(offsetof(FortControllerComponent_FakeKillRelevancy_GetDeathLocation, PlayerState) == 0x000000, "Member 'FortControllerComponent_FakeKillRelevancy_GetDeathLocation::PlayerState' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_FakeKillRelevancy_GetDeathLocation, ReturnValue) == 0x000008, "Member 'FortControllerComponent_FakeKillRelevancy_GetDeathLocation::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_FakeKillRelevancy_EndWave final
{
public:
	int32                                         EndPhaseNum;
	int32                                         WaveNum;
};
static_assert(alignof(FortAthenaMutator_FakeKillRelevancy_EndWave) == 0x000004, "Wrong alignment on FortAthenaMutator_FakeKillRelevancy_EndWave");
static_assert(sizeof(FortAthenaMutator_FakeKillRelevancy_EndWave) == 0x000008, "Wrong size on FortAthenaMutator_FakeKillRelevancy_EndWave");
static_assert(offsetof(FortAthenaMutator_FakeKillRelevancy_EndWave, EndPhaseNum) == 0x000000, "Member 'FortAthenaMutator_FakeKillRelevancy_EndWave::EndPhaseNum' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_FakeKillRelevancy_EndWave, WaveNum) == 0x000004, "Member 'FortAthenaMutator_FakeKillRelevancy_EndWave::WaveNum' has a wrong offset!");

struct FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase final
{
public:
	int32                                         MaxPlayersRemaining;
	struct FGameplayTag                           Reason;
	int32                                         NumWaves;
	float                                         RelevancyDelay;
};
static_assert(alignof(FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase) == 0x000004, "Wrong alignment on FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase");
static_assert(sizeof(FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase) == 0x000010, "Wrong size on FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase");
static_assert(offsetof(FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase, MaxPlayersRemaining) == 0x000000, "Member 'FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase::MaxPlayersRemaining' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase, Reason) == 0x000004, "Member 'FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase::Reason' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase, NumWaves) == 0x000008, "Member 'FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase::NumWaves' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase, RelevancyDelay) == 0x00000C, "Member 'FortAthenaMutator_FakeKillRelevancy_SetUpKillPhase::RelevancyDelay' has a wrong offset!");

struct FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady) == 0x000008, "Wrong alignment on FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady");
static_assert(sizeof(FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady) == 0x000030, "Wrong size on FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady");
static_assert(offsetof(FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady, GameState) == 0x000000, "Member 'FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady::GameState' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady, Playlist) == 0x000008, "Member 'FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady::Playlist' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady, PlaylistContextTags) == 0x000010, "Member 'FortAthenaMutator_LoadGameFeature_OnPlaylistDataReady::PlaylistContextTags' has a wrong offset!");

struct FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady) == 0x000008, "Wrong alignment on FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady");
static_assert(sizeof(FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady) == 0x000030, "Wrong size on FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady");
static_assert(offsetof(FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady, GameState) == 0x000000, "Member 'FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady::GameState' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady, Playlist) == 0x000008, "Member 'FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady::Playlist' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady, PlaylistContextTags) == 0x000010, "Member 'FortAthenaMutator_RemoveGameFeatures_OnPlaylistDataReady::PlaylistContextTags' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_AddClientCSVEvent final
{
public:
	class FString                                 CSVEventName;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_AddClientCSVEvent) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_AddClientCSVEvent");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_AddClientCSVEvent) == 0x000010, "Wrong size on FortAthenaMutator_SpecialEvent_AddClientCSVEvent");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_AddClientCSVEvent, CSVEventName) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_AddClientCSVEvent::CSVEventName' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_AddCSVEvent final
{
public:
	class FString                                 CSVEventName;
	bool                                          bShouldRepToClient;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_AddCSVEvent) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_AddCSVEvent");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_AddCSVEvent) == 0x000018, "Wrong size on FortAthenaMutator_SpecialEvent_AddCSVEvent");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_AddCSVEvent, CSVEventName) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_AddCSVEvent::CSVEventName' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_AddCSVEvent, bShouldRepToClient) == 0x000010, "Member 'FortAthenaMutator_SpecialEvent_AddCSVEvent::bShouldRepToClient' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions final
{
public:
	struct FGameplayTagContainer                  Actions;
	bool                                          bCancelAbilities;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions) == 0x000028, "Wrong size on FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions, Actions) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions::Actions' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions, bCancelAbilities) == 0x000020, "Member 'FortAthenaMutator_SpecialEvent_AddToBlockedNativeActions::bCancelAbilities' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ChangeWinCondition final
{
public:
	float                                         NewGoalScore;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ChangeWinCondition) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_ChangeWinCondition");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ChangeWinCondition) == 0x000004, "Wrong size on FortAthenaMutator_SpecialEvent_ChangeWinCondition");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ChangeWinCondition, NewGoalScore) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ChangeWinCondition::NewGoalScore' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation final
{
public:
	struct FVector                                NewFinalLocation;
	float                                         DefaultAircraftOffsetFromMidLine;
	float                                         MinDefaultMidlineAngle;
	float                                         MaxDefaultMidlineAngle;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation) == 0x000028, "Wrong size on FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation, NewFinalLocation) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation::NewFinalLocation' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation, DefaultAircraftOffsetFromMidLine) == 0x000018, "Member 'FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation::DefaultAircraftOffsetFromMidLine' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation, MinDefaultMidlineAngle) == 0x00001C, "Member 'FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation::MinDefaultMidlineAngle' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation, MaxDefaultMidlineAngle) == 0x000020, "Member 'FortAthenaMutator_SpecialEvent_ForceSafeZoneFinalLocation::MaxDefaultMidlineAngle' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed final
{
public:
	class AActor*                                 MannequinActor;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed, MannequinActor) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_HandleSpecialEventMannequinDestroyed::MannequinActor' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase final
{
public:
	struct FVector                                PawnSpawnCenterLocation;
	float                                         PawnSpawnMinDistance;
	float                                         PawnSpawnMaxDistance;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase) == 0x000020, "Wrong size on FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase, PawnSpawnCenterLocation) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase::PawnSpawnCenterLocation' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase, PawnSpawnMinDistance) == 0x000018, "Member 'FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase::PawnSpawnMinDistance' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase, PawnSpawnMaxDistance) == 0x00001C, "Member 'FortAthenaMutator_SpecialEvent_JumpToSafeZonePhase::PawnSpawnMaxDistance' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization, Actor) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnActorPreSpawnInitialization::Actor' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnActorSpawned final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnActorSpawned) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnActorSpawned");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnActorSpawned) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_OnActorSpawned");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnActorSpawned, Actor) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnActorSpawned::Actor' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone final
{
public:
	class AFortAthenaAircraft*                    FortAthenaAircraft;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone, FortAthenaAircraft) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnAircraftEnteredDropZone::FortAthenaAircraft' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone final
{
public:
	class AFortAthenaAircraft*                    FortAthenaAircraft;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone, FortAthenaAircraft) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnAircraftExitedDropZone::FortAthenaAircraft' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded final
{
public:
	class AFortAthenaAircraft*                    FortAthenaAircraft;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded, FortAthenaAircraft) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnAircraftFlightEnded::FortAthenaAircraft' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnGamePhaseChanged final
{
public:
	EAthenaGamePhase                              NewPhase;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnGamePhaseChanged) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnGamePhaseChanged");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnGamePhaseChanged) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_OnGamePhaseChanged");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnGamePhaseChanged, NewPhase) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnGamePhaseChanged::NewPhase' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged final
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;
	EAthenaGamePhaseStep                          GamePhaseStep;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged) == 0x000018, "Wrong size on FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged, SafeZoneInterface) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged::SafeZoneInterface' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged, GamePhaseStep) == 0x000010, "Member 'FortAthenaMutator_SpecialEvent_OnGamePhaseStepChanged::GamePhaseStep' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged final
{
public:
	bool                                          bHasFocus;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged, bHasFocus) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnGameViewportActivationChanged::bHasFocus' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete, PlayerPawn) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_OnWarmUpTeleportComplete::PlayerPawn' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_PauseStormDamage final
{
public:
	bool                                          bPause;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_PauseStormDamage) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_PauseStormDamage");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_PauseStormDamage) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_PauseStormDamage");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_PauseStormDamage, bPause) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_PauseStormDamage::bPause' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_PauseStormProgression final
{
public:
	bool                                          bPause;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_PauseStormProgression) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_PauseStormProgression");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_PauseStormProgression) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_PauseStormProgression");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_PauseStormProgression, bPause) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_PauseStormProgression::bPause' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_PauseSupplyDrops final
{
public:
	bool                                          bPause;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_PauseSupplyDrops) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_PauseSupplyDrops");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_PauseSupplyDrops) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_PauseSupplyDrops");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_PauseSupplyDrops, bPause) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_PauseSupplyDrops::bPause' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_PauseWinCondition final
{
public:
	bool                                          bLockScores;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_PauseWinCondition) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_PauseWinCondition");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_PauseWinCondition) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_PauseWinCondition");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_PauseWinCondition, bLockScores) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_PauseWinCondition::bLockScores' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions final
{
public:
	struct FGameplayTagContainer                  Actions;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions) == 0x000020, "Wrong size on FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions, Actions) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_RemoveFromBlockedNativeActions::Actions' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent final
{
public:
	int32                                         MinResetSafeZoneIndex;
	float                                         MinDelayReturnToMainMenu;
	float                                         MaxDelayReturnToMainMenu;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent) == 0x00000C, "Wrong size on FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent, MinResetSafeZoneIndex) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent::MinResetSafeZoneIndex' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent, MinDelayReturnToMainMenu) == 0x000004, "Member 'FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent::MinDelayReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent, MaxDelayReturnToMainMenu) == 0x000008, "Member 'FortAthenaMutator_SpecialEvent_ResetSafeZoneOverrideAfterEvent::MaxDelayReturnToMainMenu' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint final
{
public:
	struct FVector                                WorldLocation;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint) == 0x000018, "Wrong size on FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint, WorldLocation) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetAdditionalViewpoint::WorldLocation' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn, bEnable) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetCanStreamBuildingFoundationsIn::bEnable' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm final
{
public:
	bool                                          bDestroyVehiclesInStorm;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm, bDestroyVehiclesInStorm) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetDestroyVehiclesInStorm::bDestroyVehiclesInStorm' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage final
{
public:
	bool                                          bIsSimulating;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage, bIsSimulating) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetIsSimulatingDamage::bIsSimulating' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint final
{
public:
	bool                                          bInLockingOnFocalPoint;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint, bInLockingOnFocalPoint) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetLockingOnFocalPoint::bInLockingOnFocalPoint' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetMatchTime final
{
public:
	int32                                         NewMatchTime;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetMatchTime) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetMatchTime");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetMatchTime) == 0x000004, "Wrong size on FortAthenaMutator_SpecialEvent_SetMatchTime");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetMatchTime, NewMatchTime) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetMatchTime::NewMatchTime' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll final
{
public:
	class FName                                   WeightName;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll) == 0x000004, "Wrong size on FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll, WeightName) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetNamedWeightForContainerLootRoll::WeightName' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay final
{
public:
	float                                         MinDelayReturnToMainMenu;
	float                                         MaxDelayReturnToMainMenu;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay, MinDelayReturnToMainMenu) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay::MinDelayReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay, MaxDelayReturnToMainMenu) == 0x000004, "Member 'FortAthenaMutator_SpecialEvent_SetReturnToMainMenuDelay::MaxDelayReturnToMainMenu' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll final
{
public:
	float                                         Weight;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll) == 0x000004, "Wrong size on FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll, Weight) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SetWeightForContainerLootRoll::Weight' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent final
{
public:
	int32                                         SafeZoneIndexForEvent;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent) == 0x000004, "Wrong size on FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent, SafeZoneIndexForEvent) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_StartSafeZoneOverrideForEvent::SafeZoneIndexForEvent' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_SwapBodyParts final
{
public:
	int32                                         ArrayIndex;
	uint8                                         Pad_4[0x4];
	class AFortPlayerController*                  FortPC;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_SwapBodyParts) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_SwapBodyParts");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_SwapBodyParts) == 0x000010, "Wrong size on FortAthenaMutator_SpecialEvent_SwapBodyParts");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SwapBodyParts, ArrayIndex) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_SwapBodyParts::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_SwapBodyParts, FortPC) == 0x000008, "Member 'FortAthenaMutator_SpecialEvent_SwapBodyParts::FortPC' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_TeleportAllPlayers final
{
public:
	struct FGameplayTagContainer                  EventTags;
	int32                                         TeleportsPerFrame;
	int32                                         SafeZoneIndex;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_TeleportAllPlayers) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_TeleportAllPlayers");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_TeleportAllPlayers) == 0x000028, "Wrong size on FortAthenaMutator_SpecialEvent_TeleportAllPlayers");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_TeleportAllPlayers, EventTags) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_TeleportAllPlayers::EventTags' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_TeleportAllPlayers, TeleportsPerFrame) == 0x000020, "Member 'FortAthenaMutator_SpecialEvent_TeleportAllPlayers::TeleportsPerFrame' has a wrong offset!");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_TeleportAllPlayers, SafeZoneIndex) == 0x000024, "Member 'FortAthenaMutator_SpecialEvent_TeleportAllPlayers::SafeZoneIndex' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility final
{
public:
	bool                                          bInvincible;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility, bInvincible) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ToggleAllPlayersInvincibility::bInvincible' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ToggleDisableParachutes final
{
public:
	bool                                          bDisable;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ToggleDisableParachutes) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_ToggleDisableParachutes");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ToggleDisableParachutes) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_ToggleDisableParachutes");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ToggleDisableParachutes, bDisable) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ToggleDisableParachutes::bDisable' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ToggleDisableWeapons final
{
public:
	bool                                          bDisableWeapons;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ToggleDisableWeapons) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_ToggleDisableWeapons");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ToggleDisableWeapons) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_ToggleDisableWeapons");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ToggleDisableWeapons, bDisableWeapons) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ToggleDisableWeapons::bDisableWeapons' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_ToggleHUDs final
{
public:
	bool                                          bHide;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_ToggleHUDs) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_ToggleHUDs");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_ToggleHUDs) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_ToggleHUDs");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_ToggleHUDs, bHide) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_ToggleHUDs::bHide' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_UnloadTerrainMaps final
{
public:
	struct FGameplayTag                           MapTag;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_UnloadTerrainMaps) == 0x000004, "Wrong alignment on FortAthenaMutator_SpecialEvent_UnloadTerrainMaps");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_UnloadTerrainMaps) == 0x000004, "Wrong size on FortAthenaMutator_SpecialEvent_UnloadTerrainMaps");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_UnloadTerrainMaps, MapTag) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_UnloadTerrainMaps::MapTag' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase) == 0x000001, "Wrong alignment on FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase) == 0x000001, "Wrong size on FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_GetHasInfiniteSafeZonePhase::ReturnValue' has a wrong offset!");

struct FortAthenaMutator_SpecialEvent_GetScript final
{
public:
	class ASpecialEventScript*                    ReturnValue;
};
static_assert(alignof(FortAthenaMutator_SpecialEvent_GetScript) == 0x000008, "Wrong alignment on FortAthenaMutator_SpecialEvent_GetScript");
static_assert(sizeof(FortAthenaMutator_SpecialEvent_GetScript) == 0x000008, "Wrong size on FortAthenaMutator_SpecialEvent_GetScript");
static_assert(offsetof(FortAthenaMutator_SpecialEvent_GetScript, ReturnValue) == 0x000000, "Member 'FortAthenaMutator_SpecialEvent_GetScript::ReturnValue' has a wrong offset!");

struct FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP final
{
public:
	class AActor*                                 ViewTarget;
};
static_assert(alignof(FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP) == 0x000008, "Wrong alignment on FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP");
static_assert(sizeof(FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP) == 0x000008, "Wrong size on FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP");
static_assert(offsetof(FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP, ViewTarget) == 0x000000, "Member 'FortCameraMode_SpecialEventFocalPoint_OnBecomeActiveBP::ViewTarget' has a wrong offset!");

struct FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP final
{
public:
	class AActor*                                 ViewTarget;
};
static_assert(alignof(FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP) == 0x000008, "Wrong alignment on FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP");
static_assert(sizeof(FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP) == 0x000008, "Wrong size on FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP");
static_assert(offsetof(FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP, ViewTarget) == 0x000000, "Member 'FortCameraMode_SpecialEventFocalPoint_OnBecomeInactiveBP::ViewTarget' has a wrong offset!");

struct FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime final
{
public:
	float                                         InTransitionTime;
};
static_assert(alignof(FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime) == 0x000004, "Wrong alignment on FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime");
static_assert(sizeof(FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime) == 0x000004, "Wrong size on FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime");
static_assert(offsetof(FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime, InTransitionTime) == 0x000000, "Member 'FortCameraMode_SpecialEventFocalPoint_SetOverrideTransitionTime::InTransitionTime' has a wrong offset!");

struct FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP final
{
public:
	class AActor*                                 ViewTarget;
	float                                         DeltaTime;
	uint8                                         Pad_C[0x4];
	struct FTViewTarget                           OutVT;
};
static_assert(alignof(FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP) == 0x000010, "Wrong alignment on FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP");
static_assert(sizeof(FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP) == 0x0007F0, "Wrong size on FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP");
static_assert(offsetof(FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP, ViewTarget) == 0x000000, "Member 'FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP::ViewTarget' has a wrong offset!");
static_assert(offsetof(FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP, DeltaTime) == 0x000008, "Member 'FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP::DeltaTime' has a wrong offset!");
static_assert(offsetof(FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP, OutVT) == 0x000010, "Member 'FortCameraMode_SpecialEventFocalPoint_UpdateCameraBP::OutVT' has a wrong offset!");

struct FortCharacterMovementMutatorComponent_OnMovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PreviousMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortCharacterMovementMutatorComponent_OnMovementModeChanged) == 0x000008, "Wrong alignment on FortCharacterMovementMutatorComponent_OnMovementModeChanged");
static_assert(sizeof(FortCharacterMovementMutatorComponent_OnMovementModeChanged) == 0x000010, "Wrong size on FortCharacterMovementMutatorComponent_OnMovementModeChanged");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OnMovementModeChanged, Character) == 0x000000, "Member 'FortCharacterMovementMutatorComponent_OnMovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OnMovementModeChanged, PreviousMovementMode) == 0x000008, "Member 'FortCharacterMovementMutatorComponent_OnMovementModeChanged::PreviousMovementMode' has a wrong offset!");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'FortCharacterMovementMutatorComponent_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed final
{
public:
	float                                         Value;
	bool                                          bAsMultiplier;
	uint8                                         Pad_5[0x3];
	float                                         InterpSpeed;
};
static_assert(alignof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed) == 0x000004, "Wrong alignment on FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed");
static_assert(sizeof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed) == 0x00000C, "Wrong size on FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed, Value) == 0x000000, "Member 'FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed::Value' has a wrong offset!");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed, bAsMultiplier) == 0x000004, "Member 'FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed::bAsMultiplier' has a wrong offset!");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed, InterpSpeed) == 0x000008, "Member 'FortCharacterMovementMutatorComponent_OverrideBuffetFlyingMaxSpeed::InterpSpeed' has a wrong offset!");

struct FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed final
{
public:
	float                                         Value;
	bool                                          bAsMultiplier;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed) == 0x000004, "Wrong alignment on FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed");
static_assert(sizeof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed) == 0x000008, "Wrong size on FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed, Value) == 0x000000, "Member 'FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed::Value' has a wrong offset!");
static_assert(offsetof(FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed, bAsMultiplier) == 0x000004, "Member 'FortCharacterMovementMutatorComponent_OverrideBuffetFlyingVelocityDirectionInterpSpeed::bAsMultiplier' has a wrong offset!");

struct FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor) == 0x000008, "Wrong alignment on FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor");
static_assert(sizeof(FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor) == 0x000008, "Wrong size on FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor");
static_assert(offsetof(FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor, Actor) == 0x000000, "Member 'FortCharacterMovementMutatorComponent_SetBuffetBubblesFollowActor::Actor' has a wrong offset!");

struct FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent final
{
public:
	struct FVector                                BoxOffsetPercent;
};
static_assert(alignof(FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent) == 0x000008, "Wrong alignment on FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent");
static_assert(sizeof(FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent) == 0x000018, "Wrong size on FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent");
static_assert(offsetof(FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent, BoxOffsetPercent) == 0x000000, "Member 'FortCharacterMovementMutatorComponent_SetBuffetBubblesInitialFollowBoxOffsetPercent::BoxOffsetPercent' has a wrong offset!");

struct FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform final
{
public:
	struct FTransform                             Transform;
};
static_assert(alignof(FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform) == 0x000010, "Wrong alignment on FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform");
static_assert(sizeof(FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform) == 0x000060, "Wrong size on FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform");
static_assert(offsetof(FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform, Transform) == 0x000000, "Member 'FortCharacterMovementMutatorComponent_SetBuffetBubblesIntroTargetTransform::Transform' has a wrong offset!");

struct FortCharacterMovementMutator_OnFortPawnChanged final
{
public:
	class AFortPawn*                              NewPawn;
};
static_assert(alignof(FortCharacterMovementMutator_OnFortPawnChanged) == 0x000008, "Wrong alignment on FortCharacterMovementMutator_OnFortPawnChanged");
static_assert(sizeof(FortCharacterMovementMutator_OnFortPawnChanged) == 0x000008, "Wrong size on FortCharacterMovementMutator_OnFortPawnChanged");
static_assert(offsetof(FortCharacterMovementMutator_OnFortPawnChanged, NewPawn) == 0x000000, "Member 'FortCharacterMovementMutator_OnFortPawnChanged::NewPawn' has a wrong offset!");

struct FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen final
{
public:
	bool                                          bHideElements;
};
static_assert(alignof(FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen) == 0x000001, "Wrong alignment on FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen");
static_assert(sizeof(FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen) == 0x000001, "Wrong size on FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen");
static_assert(offsetof(FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen, bHideElements) == 0x000000, "Member 'FortControllerComponent_GameplayCinematic_HideHUDElementsForLoadingScreen::bHideElements' has a wrong offset!");

struct FortControllerComponent_GameplayCinematic_SetReadyForGameplay final
{
public:
	bool                                          bIsReady;
};
static_assert(alignof(FortControllerComponent_GameplayCinematic_SetReadyForGameplay) == 0x000001, "Wrong alignment on FortControllerComponent_GameplayCinematic_SetReadyForGameplay");
static_assert(sizeof(FortControllerComponent_GameplayCinematic_SetReadyForGameplay) == 0x000001, "Wrong size on FortControllerComponent_GameplayCinematic_SetReadyForGameplay");
static_assert(offsetof(FortControllerComponent_GameplayCinematic_SetReadyForGameplay, bIsReady) == 0x000000, "Member 'FortControllerComponent_GameplayCinematic_SetReadyForGameplay::bIsReady' has a wrong offset!");

struct FortControllerComponent_GameplayCinematic_ShowCinematicWidget final
{
public:
	class FName                                   WidgetName;
};
static_assert(alignof(FortControllerComponent_GameplayCinematic_ShowCinematicWidget) == 0x000004, "Wrong alignment on FortControllerComponent_GameplayCinematic_ShowCinematicWidget");
static_assert(sizeof(FortControllerComponent_GameplayCinematic_ShowCinematicWidget) == 0x000004, "Wrong size on FortControllerComponent_GameplayCinematic_ShowCinematicWidget");
static_assert(offsetof(FortControllerComponent_GameplayCinematic_ShowCinematicWidget, WidgetName) == 0x000000, "Member 'FortControllerComponent_GameplayCinematic_ShowCinematicWidget::WidgetName' has a wrong offset!");

struct FortControllerComponent_SpecialEvent_SendSpecialClientEvent final
{
public:
	struct FGameplayTag                           EventTag;
	int32                                         Count;
};
static_assert(alignof(FortControllerComponent_SpecialEvent_SendSpecialClientEvent) == 0x000004, "Wrong alignment on FortControllerComponent_SpecialEvent_SendSpecialClientEvent");
static_assert(sizeof(FortControllerComponent_SpecialEvent_SendSpecialClientEvent) == 0x000008, "Wrong size on FortControllerComponent_SpecialEvent_SendSpecialClientEvent");
static_assert(offsetof(FortControllerComponent_SpecialEvent_SendSpecialClientEvent, EventTag) == 0x000000, "Member 'FortControllerComponent_SpecialEvent_SendSpecialClientEvent::EventTag' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_SpecialEvent_SendSpecialClientEvent, Count) == 0x000004, "Member 'FortControllerComponent_SpecialEvent_SendSpecialClientEvent::Count' has a wrong offset!");

struct FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent final
{
public:
	struct FGameplayTag                           EventTag;
	int32                                         Count;
};
static_assert(alignof(FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent) == 0x000004, "Wrong alignment on FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent");
static_assert(sizeof(FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent) == 0x000008, "Wrong size on FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent");
static_assert(offsetof(FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent, EventTag) == 0x000000, "Member 'FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent::EventTag' has a wrong offset!");
static_assert(offsetof(FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent, Count) == 0x000004, "Member 'FortControllerComponent_SpecialEvent_ServerHandleSpecialClientEvent::Count' has a wrong offset!");

struct FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup final
{
public:
	TArray<class AActor*>                         InSpawnedActors;
};
static_assert(alignof(FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup) == 0x000008, "Wrong alignment on FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup");
static_assert(sizeof(FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup) == 0x000010, "Wrong size on FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup");
static_assert(offsetof(FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup, InSpawnedActors) == 0x000000, "Member 'FortSpecialRelevancyActorSpawner_BP_OnActorSpawnedPerRelevancyGroup::InSpawnedActors' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ final
{
public:
	float                                         Time;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ) == 0x000004, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ) == 0x000004, "Wrong size on SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ, Time) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_UpdateConstantQ::Time' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_UpdateLoudness final
{
public:
	float                                         Time;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_UpdateLoudness) == 0x000004, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_UpdateLoudness");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_UpdateLoudness) == 0x000004, "Wrong size on SpecialEventAudioAnalysisBaseComponent_UpdateLoudness");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_UpdateLoudness, Time) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_UpdateLoudness::Time' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_UpdateOnset final
{
public:
	float                                         Time;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_UpdateOnset) == 0x000004, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_UpdateOnset");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_UpdateOnset) == 0x000004, "Wrong size on SpecialEventAudioAnalysisBaseComponent_UpdateOnset");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_UpdateOnset, Time) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_UpdateOnset::Time' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_UpdateTime final
{
public:
	float                                         NewTime;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_UpdateTime) == 0x000004, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_UpdateTime");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_UpdateTime) == 0x000004, "Wrong size on SpecialEventAudioAnalysisBaseComponent_UpdateTime");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_UpdateTime, NewTime) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_UpdateTime::NewTime' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT final
{
public:
	class UConstantQNRT*                          ReturnValue;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT) == 0x000008, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT) == 0x000008, "Wrong size on SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT, ReturnValue) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_GetConstantQNRT::ReturnValue' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness) == 0x000004, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness) == 0x000004, "Wrong size on SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness, ReturnValue) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_GetCurrentNormalizedLoudness::ReturnValue' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT final
{
public:
	class ULoudnessNRT*                           ReturnValue;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT) == 0x000008, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT) == 0x000008, "Wrong size on SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT, ReturnValue) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_GetLoudnessNRT::ReturnValue' has a wrong offset!");

struct SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT final
{
public:
	class UOnsetNRT*                              ReturnValue;
};
static_assert(alignof(SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT) == 0x000008, "Wrong alignment on SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT");
static_assert(sizeof(SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT) == 0x000008, "Wrong size on SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT");
static_assert(offsetof(SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT, ReturnValue) == 0x000000, "Member 'SpecialEventAudioAnalysisBaseComponent_GetOnsetNRT::ReturnValue' has a wrong offset!");

struct SpecialEventAudioHapticsComponent_AreHapticsActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SpecialEventAudioHapticsComponent_AreHapticsActive) == 0x000001, "Wrong alignment on SpecialEventAudioHapticsComponent_AreHapticsActive");
static_assert(sizeof(SpecialEventAudioHapticsComponent_AreHapticsActive) == 0x000001, "Wrong size on SpecialEventAudioHapticsComponent_AreHapticsActive");
static_assert(offsetof(SpecialEventAudioHapticsComponent_AreHapticsActive, ReturnValue) == 0x000000, "Member 'SpecialEventAudioHapticsComponent_AreHapticsActive::ReturnValue' has a wrong offset!");

struct SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace final
{
public:
	struct FHitResult                             OutHitResult;
	class USpecialEventCursorPawnComponent*       CursorPawnComponent;
	struct FGameplayTag                           CursorModeTag;
	uint8                                         Pad_EC[0x4];
	const class UCameraComponent*                 CameraComponent;
	struct FVector                                CursorWorldDirection;
	bool                                          ReturnValue;
	uint8                                         Pad_111[0x7];
};
static_assert(alignof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace) == 0x000008, "Wrong alignment on SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace");
static_assert(sizeof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace) == 0x000118, "Wrong size on SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace");
static_assert(offsetof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace, OutHitResult) == 0x000000, "Member 'SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace::OutHitResult' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace, CursorPawnComponent) == 0x0000E0, "Member 'SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace::CursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace, CursorModeTag) == 0x0000E8, "Member 'SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace, CameraComponent) == 0x0000F0, "Member 'SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace::CameraComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace, CursorWorldDirection) == 0x0000F8, "Member 'SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace::CursorWorldDirection' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace, ReturnValue) == 0x000110, "Member 'SpecialEventCursorInstigatorInterface_SpecialEventCursorTrace::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent final
{
public:
	const class APawn*                            Pawn;
	struct FGameplayTag                           CursorModeTag;
	bool                                          bMustBeActive;
	uint8                                         Pad_D[0x3];
	class USpecialEventCursorPawnComponent*       ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent, Pawn) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent::Pawn' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent, CursorModeTag) == 0x000008, "Member 'SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent, bMustBeActive) == 0x00000C, "Member 'SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent::bMustBeActive' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent, ReturnValue) == 0x000010, "Member 'SpecialEventCursorPawnComponent_GetSpecialEventCursorPawnComponent::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetCurrentHitResult final
{
public:
	struct FHitResult                             OutHitResult;
	bool                                          ReturnValue;
	uint8                                         Pad_E1[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetCurrentHitResult) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetCurrentHitResult");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetCurrentHitResult) == 0x0000E8, "Wrong size on SpecialEventCursorPawnComponent_GetCurrentHitResult");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCurrentHitResult, OutHitResult) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetCurrentHitResult::OutHitResult' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCurrentHitResult, ReturnValue) == 0x0000E0, "Member 'SpecialEventCursorPawnComponent_GetCurrentHitResult::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GyroInputUpdate final
{
public:
	struct FVector                                InInputVector;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GyroInputUpdate) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GyroInputUpdate");
static_assert(sizeof(SpecialEventCursorPawnComponent_GyroInputUpdate) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_GyroInputUpdate");
static_assert(offsetof(SpecialEventCursorPawnComponent_GyroInputUpdate, InInputVector) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GyroInputUpdate::InInputVector' has a wrong offset!");

struct SpecialEventCursorPawnComponent_InputPressed final
{
public:
	class FName                                   ActionName;
	bool                                          bPressed;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(SpecialEventCursorPawnComponent_InputPressed) == 0x000004, "Wrong alignment on SpecialEventCursorPawnComponent_InputPressed");
static_assert(sizeof(SpecialEventCursorPawnComponent_InputPressed) == 0x000008, "Wrong size on SpecialEventCursorPawnComponent_InputPressed");
static_assert(offsetof(SpecialEventCursorPawnComponent_InputPressed, ActionName) == 0x000000, "Member 'SpecialEventCursorPawnComponent_InputPressed::ActionName' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_InputPressed, bPressed) == 0x000004, "Member 'SpecialEventCursorPawnComponent_InputPressed::bPressed' has a wrong offset!");

struct SpecialEventCursorPawnComponent_LookInputUpdate final
{
public:
	struct FVector                                InInputVector;
};
static_assert(alignof(SpecialEventCursorPawnComponent_LookInputUpdate) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_LookInputUpdate");
static_assert(sizeof(SpecialEventCursorPawnComponent_LookInputUpdate) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_LookInputUpdate");
static_assert(offsetof(SpecialEventCursorPawnComponent_LookInputUpdate, InInputVector) == 0x000000, "Member 'SpecialEventCursorPawnComponent_LookInputUpdate::InInputVector' has a wrong offset!");

struct SpecialEventCursorPawnComponent_MoveInputUpdate final
{
public:
	struct FVector                                InInputVector;
};
static_assert(alignof(SpecialEventCursorPawnComponent_MoveInputUpdate) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_MoveInputUpdate");
static_assert(sizeof(SpecialEventCursorPawnComponent_MoveInputUpdate) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_MoveInputUpdate");
static_assert(offsetof(SpecialEventCursorPawnComponent_MoveInputUpdate, InInputVector) == 0x000000, "Member 'SpecialEventCursorPawnComponent_MoveInputUpdate::InInputVector' has a wrong offset!");

struct SpecialEventCursorPawnComponent_OnHUDPostRender final
{
public:
	class AHUD*                                   HUD;
	class UCanvas*                                Canvas;
};
static_assert(alignof(SpecialEventCursorPawnComponent_OnHUDPostRender) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_OnHUDPostRender");
static_assert(sizeof(SpecialEventCursorPawnComponent_OnHUDPostRender) == 0x000010, "Wrong size on SpecialEventCursorPawnComponent_OnHUDPostRender");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnHUDPostRender, HUD) == 0x000000, "Member 'SpecialEventCursorPawnComponent_OnHUDPostRender::HUD' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnHUDPostRender, Canvas) == 0x000008, "Member 'SpecialEventCursorPawnComponent_OnHUDPostRender::Canvas' has a wrong offset!");

struct SpecialEventCursorPawnComponent_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;
};
static_assert(alignof(SpecialEventCursorPawnComponent_OnInputMethodChanged) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_OnInputMethodChanged");
static_assert(sizeof(SpecialEventCursorPawnComponent_OnInputMethodChanged) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_OnInputMethodChanged");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnInputMethodChanged, InputType) == 0x000000, "Member 'SpecialEventCursorPawnComponent_OnInputMethodChanged::InputType' has a wrong offset!");

struct SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged final
{
public:
	class USpecialEventCursorPawnComponent*       CursorPawnComponent;
	struct FGameplayTag                           CursorModeTag;
	bool                                          bShouldBeVisible;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged");
static_assert(sizeof(SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged) == 0x000010, "Wrong size on SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged, CursorPawnComponent) == 0x000000, "Member 'SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged::CursorPawnComponent' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged, CursorModeTag) == 0x000008, "Member 'SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged, bShouldBeVisible) == 0x00000C, "Member 'SpecialEventCursorPawnComponent_OnLocallyControlledCursorVisibilityChanged::bShouldBeVisible' has a wrong offset!");

struct SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry final
{
public:
	struct FSpecialEventCursorStackEntry          OldCursorStackEntry;
};
static_assert(alignof(SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry) == 0x000004, "Wrong alignment on SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry");
static_assert(sizeof(SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry) == 0x00000C, "Wrong size on SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry");
static_assert(offsetof(SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry, OldCursorStackEntry) == 0x000000, "Member 'SpecialEventCursorPawnComponent_OnRep_ReplicatedCursorStackEntry::OldCursorStackEntry' has a wrong offset!");

struct SpecialEventCursorPawnComponent_PopAllCursorsForObject final
{
public:
	class UObject*                                InstigatingObject;
	bool                                          bDeactivateIfStackEmpty;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_PopAllCursorsForObject) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_PopAllCursorsForObject");
static_assert(sizeof(SpecialEventCursorPawnComponent_PopAllCursorsForObject) == 0x000010, "Wrong size on SpecialEventCursorPawnComponent_PopAllCursorsForObject");
static_assert(offsetof(SpecialEventCursorPawnComponent_PopAllCursorsForObject, InstigatingObject) == 0x000000, "Member 'SpecialEventCursorPawnComponent_PopAllCursorsForObject::InstigatingObject' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_PopAllCursorsForObject, bDeactivateIfStackEmpty) == 0x000008, "Member 'SpecialEventCursorPawnComponent_PopAllCursorsForObject::bDeactivateIfStackEmpty' has a wrong offset!");

struct SpecialEventCursorPawnComponent_PopCursor final
{
public:
	struct FGameplayTag                           CursorModeTag;
	uint8                                         Pad_4[0x4];
	class UObject*                                InstigatingObject;
	bool                                          bDeactivateIfStackEmpty;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_PopCursor) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_PopCursor");
static_assert(sizeof(SpecialEventCursorPawnComponent_PopCursor) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_PopCursor");
static_assert(offsetof(SpecialEventCursorPawnComponent_PopCursor, CursorModeTag) == 0x000000, "Member 'SpecialEventCursorPawnComponent_PopCursor::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_PopCursor, InstigatingObject) == 0x000008, "Member 'SpecialEventCursorPawnComponent_PopCursor::InstigatingObject' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_PopCursor, bDeactivateIfStackEmpty) == 0x000010, "Member 'SpecialEventCursorPawnComponent_PopCursor::bDeactivateIfStackEmpty' has a wrong offset!");

struct SpecialEventCursorPawnComponent_PushCursor final
{
public:
	struct FGameplayTag                           CursorModeTag;
	uint8                                         Pad_4[0x4];
	class UObject*                                InstigatingObject;
	bool                                          bActivate;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_PushCursor) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_PushCursor");
static_assert(sizeof(SpecialEventCursorPawnComponent_PushCursor) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_PushCursor");
static_assert(offsetof(SpecialEventCursorPawnComponent_PushCursor, CursorModeTag) == 0x000000, "Member 'SpecialEventCursorPawnComponent_PushCursor::CursorModeTag' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_PushCursor, InstigatingObject) == 0x000008, "Member 'SpecialEventCursorPawnComponent_PushCursor::InstigatingObject' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_PushCursor, bActivate) == 0x000010, "Member 'SpecialEventCursorPawnComponent_PushCursor::bActivate' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged final
{
public:
	struct FVector                                WorldLocation;
};
static_assert(alignof(SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged");
static_assert(sizeof(SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged");
static_assert(offsetof(SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged, WorldLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ServerOnWorldLocationChanged::WorldLocation' has a wrong offset!");

struct SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed final
{
public:
	bool                                          bInAdditiveRotationAllowed;
};
static_assert(alignof(SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed");
static_assert(sizeof(SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed");
static_assert(offsetof(SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed, bInAdditiveRotationAllowed) == 0x000000, "Member 'SpecialEventCursorPawnComponent_SetAdditiveRotationAllowed::bInAdditiveRotationAllowed' has a wrong offset!");

struct SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients final
{
public:
	bool                                          bAllow;
};
static_assert(alignof(SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients");
static_assert(sizeof(SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients");
static_assert(offsetof(SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients, bAllow) == 0x000000, "Member 'SpecialEventCursorPawnComponent_SetAllowOnNonOwningClients::bAllow' has a wrong offset!");

struct SpecialEventCursorPawnComponent_SetZoomAllowed final
{
public:
	bool                                          bInZoomAllowed;
};
static_assert(alignof(SpecialEventCursorPawnComponent_SetZoomAllowed) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_SetZoomAllowed");
static_assert(sizeof(SpecialEventCursorPawnComponent_SetZoomAllowed) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_SetZoomAllowed");
static_assert(offsetof(SpecialEventCursorPawnComponent_SetZoomAllowed, bInZoomAllowed) == 0x000000, "Member 'SpecialEventCursorPawnComponent_SetZoomAllowed::bInZoomAllowed' has a wrong offset!");

struct SpecialEventCursorPawnComponent_CanBeVisible final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_CanBeVisible) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_CanBeVisible");
static_assert(sizeof(SpecialEventCursorPawnComponent_CanBeVisible) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_CanBeVisible");
static_assert(offsetof(SpecialEventCursorPawnComponent_CanBeVisible, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_CanBeVisible::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation final
{
public:
	struct FVector2D                              OutViewportLocation;
	struct FVector2D                              NormalizedLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation) == 0x000028, "Wrong size on SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation, OutViewportLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation::OutViewportLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation, NormalizedLocation) == 0x000010, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation::NormalizedLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation, ReturnValue) == 0x000020, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToViewportLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection final
{
public:
	struct FVector                                OutWorldLocation;
	struct FVector                                OutWorldDirection;
	struct FVector2D                              NormalizedLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection");
static_assert(sizeof(SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection) == 0x000048, "Wrong size on SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection, OutWorldLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection::OutWorldLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection, OutWorldDirection) == 0x000018, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection::OutWorldDirection' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection, NormalizedLocation) == 0x000030, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection::NormalizedLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection, ReturnValue) == 0x000040, "Member 'SpecialEventCursorPawnComponent_ConvertNormalizedToWorldLocationAndDirection::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation final
{
public:
	struct FVector2D                              OutNormalizedLocation;
	struct FVector2D                              ViewportLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation) == 0x000028, "Wrong size on SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation, OutNormalizedLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation::OutNormalizedLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation, ViewportLocation) == 0x000010, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation::ViewportLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation, ReturnValue) == 0x000020, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToNormalizedLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection final
{
public:
	struct FVector                                OutWorldLocation;
	struct FVector                                OutWorldDirection;
	struct FVector2D                              ViewportLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection");
static_assert(sizeof(SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection) == 0x000048, "Wrong size on SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection, OutWorldLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection::OutWorldLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection, OutWorldDirection) == 0x000018, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection::OutWorldDirection' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection, ViewportLocation) == 0x000030, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection::ViewportLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection, ReturnValue) == 0x000040, "Member 'SpecialEventCursorPawnComponent_ConvertViewportToWorldLocationAndDirection::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation final
{
public:
	struct FVector2D                              OutNormalizedLocation;
	struct FVector                                WorldLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation) == 0x000030, "Wrong size on SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation, OutNormalizedLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation::OutNormalizedLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation, WorldLocation) == 0x000010, "Member 'SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation::WorldLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation, ReturnValue) == 0x000028, "Member 'SpecialEventCursorPawnComponent_ConvertWorldToNormalizedLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation final
{
public:
	struct FVector2D                              OutViewportLocation;
	struct FVector                                WorldLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation) == 0x000030, "Wrong size on SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation, OutViewportLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation::OutViewportLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation, WorldLocation) == 0x000010, "Member 'SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation::WorldLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation, ReturnValue) == 0x000028, "Member 'SpecialEventCursorPawnComponent_ConvertWorldToViewportLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetCameraComponent final
{
public:
	class UCameraComponent*                       ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetCameraComponent) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetCameraComponent");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetCameraComponent) == 0x000008, "Wrong size on SpecialEventCursorPawnComponent_GetCameraComponent");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCameraComponent, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetCameraComponent::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetCenteredWidgetLocation final
{
public:
	class UUserWidget*                            Widget;
	struct FVector2D                              ViewportLocation;
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetCenteredWidgetLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetCenteredWidgetLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetCenteredWidgetLocation) == 0x000028, "Wrong size on SpecialEventCursorPawnComponent_GetCenteredWidgetLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCenteredWidgetLocation, Widget) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetCenteredWidgetLocation::Widget' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCenteredWidgetLocation, ViewportLocation) == 0x000008, "Member 'SpecialEventCursorPawnComponent_GetCenteredWidgetLocation::ViewportLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCenteredWidgetLocation, ReturnValue) == 0x000018, "Member 'SpecialEventCursorPawnComponent_GetCenteredWidgetLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetCurrentCursorModeTag final
{
public:
	struct FGameplayTag                           ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetCurrentCursorModeTag) == 0x000004, "Wrong alignment on SpecialEventCursorPawnComponent_GetCurrentCursorModeTag");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetCurrentCursorModeTag) == 0x000004, "Wrong size on SpecialEventCursorPawnComponent_GetCurrentCursorModeTag");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCurrentCursorModeTag, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetCurrentCursorModeTag::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetCurrentWidget final
{
public:
	class UUserWidget*                            ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetCurrentWidget) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetCurrentWidget");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetCurrentWidget) == 0x000008, "Wrong size on SpecialEventCursorPawnComponent_GetCurrentWidget");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCurrentWidget, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetCurrentWidget::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget final
{
public:
	const class UUserWidget*                      Widget;
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget) == 0x000028, "Wrong size on SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget, Widget) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget::Widget' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget, ReturnValue) == 0x000008, "Member 'SpecialEventCursorPawnComponent_GetCursorModeTagsForWidget::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetInputType final
{
public:
	ECommonInputType                              ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetInputType) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_GetInputType");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetInputType) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_GetInputType");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetInputType, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetInputType::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetLocalController final
{
public:
	class APlayerController*                      ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetLocalController) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetLocalController");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetLocalController) == 0x000008, "Wrong size on SpecialEventCursorPawnComponent_GetLocalController");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetLocalController, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetLocalController::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetNormalizedLocation final
{
public:
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetNormalizedLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetNormalizedLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetNormalizedLocation) == 0x000010, "Wrong size on SpecialEventCursorPawnComponent_GetNormalizedLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetNormalizedLocation, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetNormalizedLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetViewportCenter final
{
public:
	struct FVector2D                              OutViewportCenter;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetViewportCenter) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetViewportCenter");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetViewportCenter) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_GetViewportCenter");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetViewportCenter, OutViewportCenter) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetViewportCenter::OutViewportCenter' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetViewportCenter, ReturnValue) == 0x000010, "Member 'SpecialEventCursorPawnComponent_GetViewportCenter::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetViewportLocation final
{
public:
	struct FVector2D                              OutViewportLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetViewportLocation) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetViewportLocation");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetViewportLocation) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_GetViewportLocation");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetViewportLocation, OutViewportLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetViewportLocation::OutViewportLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetViewportLocation, ReturnValue) == 0x000010, "Member 'SpecialEventCursorPawnComponent_GetViewportLocation::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetViewportSize final
{
public:
	struct FVector2D                              OutViewportSize;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetViewportSize) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetViewportSize");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetViewportSize) == 0x000018, "Wrong size on SpecialEventCursorPawnComponent_GetViewportSize");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetViewportSize, OutViewportSize) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetViewportSize::OutViewportSize' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetViewportSize, ReturnValue) == 0x000010, "Member 'SpecialEventCursorPawnComponent_GetViewportSize::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_GetWorldLocationAndDirection final
{
public:
	struct FVector                                OutWorldLocation;
	struct FVector                                OutWorldDirection;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(SpecialEventCursorPawnComponent_GetWorldLocationAndDirection) == 0x000008, "Wrong alignment on SpecialEventCursorPawnComponent_GetWorldLocationAndDirection");
static_assert(sizeof(SpecialEventCursorPawnComponent_GetWorldLocationAndDirection) == 0x000038, "Wrong size on SpecialEventCursorPawnComponent_GetWorldLocationAndDirection");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetWorldLocationAndDirection, OutWorldLocation) == 0x000000, "Member 'SpecialEventCursorPawnComponent_GetWorldLocationAndDirection::OutWorldLocation' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetWorldLocationAndDirection, OutWorldDirection) == 0x000018, "Member 'SpecialEventCursorPawnComponent_GetWorldLocationAndDirection::OutWorldDirection' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorPawnComponent_GetWorldLocationAndDirection, ReturnValue) == 0x000030, "Member 'SpecialEventCursorPawnComponent_GetWorldLocationAndDirection::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed");
static_assert(sizeof(SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed");
static_assert(offsetof(SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_IsAdditiveRotationAllowed::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_IsLocallyControlled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_IsLocallyControlled) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_IsLocallyControlled");
static_assert(sizeof(SpecialEventCursorPawnComponent_IsLocallyControlled) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_IsLocallyControlled");
static_assert(offsetof(SpecialEventCursorPawnComponent_IsLocallyControlled, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_IsLocallyControlled::ReturnValue' has a wrong offset!");

struct SpecialEventCursorPawnComponent_IsZoomAllowed final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(SpecialEventCursorPawnComponent_IsZoomAllowed) == 0x000001, "Wrong alignment on SpecialEventCursorPawnComponent_IsZoomAllowed");
static_assert(sizeof(SpecialEventCursorPawnComponent_IsZoomAllowed) == 0x000001, "Wrong size on SpecialEventCursorPawnComponent_IsZoomAllowed");
static_assert(offsetof(SpecialEventCursorPawnComponent_IsZoomAllowed, ReturnValue) == 0x000000, "Member 'SpecialEventCursorPawnComponent_IsZoomAllowed::ReturnValue' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent final
{
public:
	const class AFortPlayerPawn*                  Pawn_0;
	class USpecialEventCursorWeaponComponent*     ReturnValue;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent");
static_assert(sizeof(SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent) == 0x000010, "Wrong size on SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent, Pawn_0) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent::Pawn_0' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent, ReturnValue) == 0x000008, "Member 'SpecialEventCursorWeaponComponent_GetCurrentSpecialEventCursorWeaponComponent::ReturnValue' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon final
{
public:
	const class AFortPlayerPawn*                  Pawn_0;
	class USpecialEventCursorPawnComponent*       ReturnValue;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon");
static_assert(sizeof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon) == 0x000010, "Wrong size on SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon, Pawn_0) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon::Pawn_0' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon, ReturnValue) == 0x000008, "Member 'SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForCurrentWeapon::ReturnValue' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon final
{
public:
	const class AFortWeapon*                      Weapon;
	class USpecialEventCursorPawnComponent*       ReturnValue;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon");
static_assert(sizeof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon) == 0x000010, "Wrong size on SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon, Weapon) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon::Weapon' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon, ReturnValue) == 0x000008, "Member 'SpecialEventCursorWeaponComponent_GetSpecialEventCursorPawnComponentForWeapon::ReturnValue' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_OnBeamFired final
{
public:
	class AFortWeapon*                            Weapon;
	bool                                          bUsePersistentBeam;
	uint8                                         Pad_9[0x7];
	class UFXSystemComponent*                     PSC;
	struct FVector                                BeamOrigin;
	struct FVector                                HitLocation;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_OnBeamFired) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_OnBeamFired");
static_assert(sizeof(SpecialEventCursorWeaponComponent_OnBeamFired) == 0x000048, "Wrong size on SpecialEventCursorWeaponComponent_OnBeamFired");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnBeamFired, Weapon) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_OnBeamFired::Weapon' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnBeamFired, bUsePersistentBeam) == 0x000008, "Member 'SpecialEventCursorWeaponComponent_OnBeamFired::bUsePersistentBeam' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnBeamFired, PSC) == 0x000010, "Member 'SpecialEventCursorWeaponComponent_OnBeamFired::PSC' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnBeamFired, BeamOrigin) == 0x000018, "Member 'SpecialEventCursorWeaponComponent_OnBeamFired::BeamOrigin' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnBeamFired, HitLocation) == 0x000030, "Member 'SpecialEventCursorWeaponComponent_OnBeamFired::HitLocation' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_OnEquip final
{
public:
	class AFortWeapon*                            Weapon;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_OnEquip) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_OnEquip");
static_assert(sizeof(SpecialEventCursorWeaponComponent_OnEquip) == 0x000008, "Wrong size on SpecialEventCursorWeaponComponent_OnEquip");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnEquip, Weapon) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_OnEquip::Weapon' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_OnGetAimRotOverride final
{
public:
	const class AFortWeapon*                      Weapon;
	EFortAbilityTargetingSource                   TargetingSource;
	uint8                                         Pad_9[0x7];
	struct FRotator                               OutOverride;
	bool                                          bOutExecutionResult;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(SpecialEventCursorWeaponComponent_OnGetAimRotOverride) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_OnGetAimRotOverride");
static_assert(sizeof(SpecialEventCursorWeaponComponent_OnGetAimRotOverride) == 0x000030, "Wrong size on SpecialEventCursorWeaponComponent_OnGetAimRotOverride");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnGetAimRotOverride, Weapon) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_OnGetAimRotOverride::Weapon' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnGetAimRotOverride, TargetingSource) == 0x000008, "Member 'SpecialEventCursorWeaponComponent_OnGetAimRotOverride::TargetingSource' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnGetAimRotOverride, OutOverride) == 0x000010, "Member 'SpecialEventCursorWeaponComponent_OnGetAimRotOverride::OutOverride' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnGetAimRotOverride, bOutExecutionResult) == 0x000028, "Member 'SpecialEventCursorWeaponComponent_OnGetAimRotOverride::bOutExecutionResult' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_OnPlayImpactFX final
{
public:
	class AFortWeapon*                            Weapon;
	struct FHitResult                             HitResult;
	class UFXSystemComponent*                     FXSystemComponent;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_OnPlayImpactFX) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_OnPlayImpactFX");
static_assert(sizeof(SpecialEventCursorWeaponComponent_OnPlayImpactFX) == 0x0000F0, "Wrong size on SpecialEventCursorWeaponComponent_OnPlayImpactFX");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnPlayImpactFX, Weapon) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_OnPlayImpactFX::Weapon' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnPlayImpactFX, HitResult) == 0x000008, "Member 'SpecialEventCursorWeaponComponent_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnPlayImpactFX, FXSystemComponent) == 0x0000E8, "Member 'SpecialEventCursorWeaponComponent_OnPlayImpactFX::FXSystemComponent' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_OnUnEquip final
{
public:
	class AFortWeapon*                            Weapon;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_OnUnEquip) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_OnUnEquip");
static_assert(sizeof(SpecialEventCursorWeaponComponent_OnUnEquip) == 0x000008, "Wrong size on SpecialEventCursorWeaponComponent_OnUnEquip");
static_assert(offsetof(SpecialEventCursorWeaponComponent_OnUnEquip, Weapon) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_OnUnEquip::Weapon' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_GetCurrentHitResult final
{
public:
	struct FHitResult                             OutHitResult;
	bool                                          ReturnValue;
	uint8                                         Pad_E1[0x7];
};
static_assert(alignof(SpecialEventCursorWeaponComponent_GetCurrentHitResult) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_GetCurrentHitResult");
static_assert(sizeof(SpecialEventCursorWeaponComponent_GetCurrentHitResult) == 0x0000E8, "Wrong size on SpecialEventCursorWeaponComponent_GetCurrentHitResult");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetCurrentHitResult, OutHitResult) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_GetCurrentHitResult::OutHitResult' has a wrong offset!");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetCurrentHitResult, ReturnValue) == 0x0000E0, "Member 'SpecialEventCursorWeaponComponent_GetCurrentHitResult::ReturnValue' has a wrong offset!");

struct SpecialEventCursorWeaponComponent_GetCursorPawnComponent final
{
public:
	class USpecialEventCursorPawnComponent*       ReturnValue;
};
static_assert(alignof(SpecialEventCursorWeaponComponent_GetCursorPawnComponent) == 0x000008, "Wrong alignment on SpecialEventCursorWeaponComponent_GetCursorPawnComponent");
static_assert(sizeof(SpecialEventCursorWeaponComponent_GetCursorPawnComponent) == 0x000008, "Wrong size on SpecialEventCursorWeaponComponent_GetCursorPawnComponent");
static_assert(offsetof(SpecialEventCursorWeaponComponent_GetCursorPawnComponent, ReturnValue) == 0x000000, "Member 'SpecialEventCursorWeaponComponent_GetCursorPawnComponent::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry final
{
public:
	const class UObject*                          WorldContextObject;
	const class AFortPlayerStateAthena*           VictimPlayerState;
	const class AFortPlayerStateAthena*           KillerPlayerState;
	class FText                                   NonPlayerVictimName;
	class FText                                   NonPlayerKillerName;
	struct FGameplayTag                           DeathCauseTag;
	EDeathCauseReason                             DeathCauseReason;
	uint8                                         Pad_4D[0x3];
	float                                         Distance;
	uint8                                         Pad_54[0x4];
};
static_assert(alignof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry");
static_assert(sizeof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry) == 0x000058, "Wrong size on SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, VictimPlayerState) == 0x000008, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::VictimPlayerState' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, KillerPlayerState) == 0x000010, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::KillerPlayerState' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, NonPlayerVictimName) == 0x000018, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::NonPlayerVictimName' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, NonPlayerKillerName) == 0x000030, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::NonPlayerKillerName' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, DeathCauseTag) == 0x000048, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::DeathCauseTag' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, DeathCauseReason) == 0x00004C, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::DeathCauseReason' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry, Distance) == 0x000050, "Member 'SpecialEventGameplayLibrary_AddSpecialEventKillFeedEntry::Distance' has a wrong offset!");

struct SpecialEventGameplayLibrary_AddSpecialEventRecentElimination final
{
public:
	struct FVector                                Location;
	const class AFortPlayerStateAthena*           PlayerState;
};
static_assert(alignof(SpecialEventGameplayLibrary_AddSpecialEventRecentElimination) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_AddSpecialEventRecentElimination");
static_assert(sizeof(SpecialEventGameplayLibrary_AddSpecialEventRecentElimination) == 0x000020, "Wrong size on SpecialEventGameplayLibrary_AddSpecialEventRecentElimination");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventRecentElimination, Location) == 0x000000, "Member 'SpecialEventGameplayLibrary_AddSpecialEventRecentElimination::Location' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AddSpecialEventRecentElimination, PlayerState) == 0x000018, "Member 'SpecialEventGameplayLibrary_AddSpecialEventRecentElimination::PlayerState' has a wrong offset!");

struct SpecialEventGameplayLibrary_AttachPawnToComponent final
{
public:
	class AFortPawn*                              Pawn;
	class USceneComponent*                        Component;
	class FName                                   SocketName;
	EAttachmentRule                               LocationRule;
	EAttachmentRule                               RotationRule;
	EAttachmentRule                               ScaleRule;
	bool                                          bWeldSimulatedBodies;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(SpecialEventGameplayLibrary_AttachPawnToComponent) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_AttachPawnToComponent");
static_assert(sizeof(SpecialEventGameplayLibrary_AttachPawnToComponent) == 0x000020, "Wrong size on SpecialEventGameplayLibrary_AttachPawnToComponent");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, Pawn) == 0x000000, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::Pawn' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, Component) == 0x000008, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::Component' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, SocketName) == 0x000010, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::SocketName' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, LocationRule) == 0x000014, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::LocationRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, RotationRule) == 0x000015, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::RotationRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, ScaleRule) == 0x000016, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::ScaleRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, bWeldSimulatedBodies) == 0x000017, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::bWeldSimulatedBodies' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_AttachPawnToComponent, ReturnValue) == 0x000018, "Member 'SpecialEventGameplayLibrary_AttachPawnToComponent::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker final
{
public:
	const class AFortPlayerControllerAthena*      LocalController;
	const class AFortPlayerStateAthena*           VictimPlayerState;
	struct FVector                                DeathLocation;
};
static_assert(alignof(SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker");
static_assert(sizeof(SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker) == 0x000028, "Wrong size on SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker");
static_assert(offsetof(SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker, LocalController) == 0x000000, "Member 'SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker::LocalController' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker, VictimPlayerState) == 0x000008, "Member 'SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker::VictimPlayerState' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker, DeathLocation) == 0x000010, "Member 'SpecialEventGameplayLibrary_CreateSpecialEventPlayerEliminationWorldMarker::DeathLocation' has a wrong offset!");

struct SpecialEventGameplayLibrary_DetachPawn final
{
public:
	class AFortPawn*                              Pawn;
	EDetachmentRule                               LocationRule;
	EDetachmentRule                               RotationRule;
	EDetachmentRule                               ScaleRule;
	bool                                          ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SpecialEventGameplayLibrary_DetachPawn) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_DetachPawn");
static_assert(sizeof(SpecialEventGameplayLibrary_DetachPawn) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_DetachPawn");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawn, Pawn) == 0x000000, "Member 'SpecialEventGameplayLibrary_DetachPawn::Pawn' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawn, LocationRule) == 0x000008, "Member 'SpecialEventGameplayLibrary_DetachPawn::LocationRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawn, RotationRule) == 0x000009, "Member 'SpecialEventGameplayLibrary_DetachPawn::RotationRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawn, ScaleRule) == 0x00000A, "Member 'SpecialEventGameplayLibrary_DetachPawn::ScaleRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawn, ReturnValue) == 0x00000B, "Member 'SpecialEventGameplayLibrary_DetachPawn::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_DetachPawnFromComponent final
{
public:
	class AFortPawn*                              Pawn;
	const class USceneComponent*                  Component;
	EDetachmentRule                               LocationRule;
	EDetachmentRule                               RotationRule;
	EDetachmentRule                               ScaleRule;
	bool                                          ReturnValue;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(SpecialEventGameplayLibrary_DetachPawnFromComponent) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_DetachPawnFromComponent");
static_assert(sizeof(SpecialEventGameplayLibrary_DetachPawnFromComponent) == 0x000018, "Wrong size on SpecialEventGameplayLibrary_DetachPawnFromComponent");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawnFromComponent, Pawn) == 0x000000, "Member 'SpecialEventGameplayLibrary_DetachPawnFromComponent::Pawn' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawnFromComponent, Component) == 0x000008, "Member 'SpecialEventGameplayLibrary_DetachPawnFromComponent::Component' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawnFromComponent, LocationRule) == 0x000010, "Member 'SpecialEventGameplayLibrary_DetachPawnFromComponent::LocationRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawnFromComponent, RotationRule) == 0x000011, "Member 'SpecialEventGameplayLibrary_DetachPawnFromComponent::RotationRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawnFromComponent, ScaleRule) == 0x000012, "Member 'SpecialEventGameplayLibrary_DetachPawnFromComponent::ScaleRule' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_DetachPawnFromComponent, ReturnValue) == 0x000013, "Member 'SpecialEventGameplayLibrary_DetachPawnFromComponent::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_FindGameplayCinematicComponent final
{
public:
	class AController*                            Controller;
	class UFortControllerComponent_GameplayCinematic* ReturnValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_FindGameplayCinematicComponent) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_FindGameplayCinematicComponent");
static_assert(sizeof(SpecialEventGameplayLibrary_FindGameplayCinematicComponent) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_FindGameplayCinematicComponent");
static_assert(offsetof(SpecialEventGameplayLibrary_FindGameplayCinematicComponent, Controller) == 0x000000, "Member 'SpecialEventGameplayLibrary_FindGameplayCinematicComponent::Controller' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_FindGameplayCinematicComponent, ReturnValue) == 0x000008, "Member 'SpecialEventGameplayLibrary_FindGameplayCinematicComponent::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_FindSpecialEventComponent final
{
public:
	class AController*                            Controller;
	class UFortControllerComponent_SpecialEvent*  ReturnValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_FindSpecialEventComponent) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_FindSpecialEventComponent");
static_assert(sizeof(SpecialEventGameplayLibrary_FindSpecialEventComponent) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_FindSpecialEventComponent");
static_assert(offsetof(SpecialEventGameplayLibrary_FindSpecialEventComponent, Controller) == 0x000000, "Member 'SpecialEventGameplayLibrary_FindSpecialEventComponent::Controller' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_FindSpecialEventComponent, ReturnValue) == 0x000008, "Member 'SpecialEventGameplayLibrary_FindSpecialEventComponent::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_ForceDestroyComponents final
{
public:
	TArray<class UActorComponent*>                Components;
	bool                                          bPromoteChildren;
	uint8                                         Pad_11[0x7];
	class FString                                 LogContext;
};
static_assert(alignof(SpecialEventGameplayLibrary_ForceDestroyComponents) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_ForceDestroyComponents");
static_assert(sizeof(SpecialEventGameplayLibrary_ForceDestroyComponents) == 0x000028, "Wrong size on SpecialEventGameplayLibrary_ForceDestroyComponents");
static_assert(offsetof(SpecialEventGameplayLibrary_ForceDestroyComponents, Components) == 0x000000, "Member 'SpecialEventGameplayLibrary_ForceDestroyComponents::Components' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_ForceDestroyComponents, bPromoteChildren) == 0x000010, "Member 'SpecialEventGameplayLibrary_ForceDestroyComponents::bPromoteChildren' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_ForceDestroyComponents, LogContext) == 0x000018, "Member 'SpecialEventGameplayLibrary_ForceDestroyComponents::LogContext' has a wrong offset!");

struct SpecialEventGameplayLibrary_ForceUpdateGrass final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                Location;
};
static_assert(alignof(SpecialEventGameplayLibrary_ForceUpdateGrass) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_ForceUpdateGrass");
static_assert(sizeof(SpecialEventGameplayLibrary_ForceUpdateGrass) == 0x000020, "Wrong size on SpecialEventGameplayLibrary_ForceUpdateGrass");
static_assert(offsetof(SpecialEventGameplayLibrary_ForceUpdateGrass, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_ForceUpdateGrass::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_ForceUpdateGrass, Location) == 0x000008, "Member 'SpecialEventGameplayLibrary_ForceUpdateGrass::Location' has a wrong offset!");

struct SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase final
{
public:
	class UObject*                                WorldContextObject;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase");
static_assert(sizeof(SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase");
static_assert(offsetof(SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase, ReturnValue) == 0x000008, "Member 'SpecialEventGameplayLibrary_GetHasInfiniteSafeZonePhase::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_GetLocalPlayerLoadout final
{
public:
	class UObject*                                WorldContextObject;
	struct FFortAthenaLoadout                     ReturnValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_GetLocalPlayerLoadout) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_GetLocalPlayerLoadout");
static_assert(sizeof(SpecialEventGameplayLibrary_GetLocalPlayerLoadout) == 0x000180, "Wrong size on SpecialEventGameplayLibrary_GetLocalPlayerLoadout");
static_assert(offsetof(SpecialEventGameplayLibrary_GetLocalPlayerLoadout, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_GetLocalPlayerLoadout::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_GetLocalPlayerLoadout, ReturnValue) == 0x000008, "Member 'SpecialEventGameplayLibrary_GetLocalPlayerLoadout::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_GetSpecialEventMutator final
{
public:
	class UObject*                                WorldContextObject;
	class AFortAthenaMutator_SpecialEvent*        ReturnValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_GetSpecialEventMutator) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_GetSpecialEventMutator");
static_assert(sizeof(SpecialEventGameplayLibrary_GetSpecialEventMutator) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_GetSpecialEventMutator");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventMutator, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_GetSpecialEventMutator::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventMutator, ReturnValue) == 0x000008, "Member 'SpecialEventGameplayLibrary_GetSpecialEventMutator::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName final
{
public:
	const class AFortPlayerControllerAthena*      LocalController;
	const class AFortPlayerStateAthena*           PlayerState;
	class FString                                 ReturnValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName");
static_assert(sizeof(SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName) == 0x000020, "Wrong size on SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName, LocalController) == 0x000000, "Member 'SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName::LocalController' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName, PlayerState) == 0x000008, "Member 'SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName::PlayerState' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName, ReturnValue) == 0x000010, "Member 'SpecialEventGameplayLibrary_GetSpecialEventPlayerDisplayName::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_GetSpecialEventScript final
{
public:
	class UObject*                                WorldContextObject;
	class ASpecialEventScript*                    ReturnValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_GetSpecialEventScript) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_GetSpecialEventScript");
static_assert(sizeof(SpecialEventGameplayLibrary_GetSpecialEventScript) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_GetSpecialEventScript");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventScript, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_GetSpecialEventScript::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_GetSpecialEventScript, ReturnValue) == 0x000008, "Member 'SpecialEventGameplayLibrary_GetSpecialEventScript::ReturnValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_HideSkydivingShadowProxy final
{
public:
	const class UObject*                          WorldContextObject;
};
static_assert(alignof(SpecialEventGameplayLibrary_HideSkydivingShadowProxy) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_HideSkydivingShadowProxy");
static_assert(sizeof(SpecialEventGameplayLibrary_HideSkydivingShadowProxy) == 0x000008, "Wrong size on SpecialEventGameplayLibrary_HideSkydivingShadowProxy");
static_assert(offsetof(SpecialEventGameplayLibrary_HideSkydivingShadowProxy, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_HideSkydivingShadowProxy::WorldContextObject' has a wrong offset!");

struct SpecialEventGameplayLibrary_SetLODOnLandscapProxies final
{
public:
	class UObject*                                WorldContextObject;
	bool                                          bForced;
	uint8                                         Pad_9[0x3];
	int32                                         InLODValue;
};
static_assert(alignof(SpecialEventGameplayLibrary_SetLODOnLandscapProxies) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_SetLODOnLandscapProxies");
static_assert(sizeof(SpecialEventGameplayLibrary_SetLODOnLandscapProxies) == 0x000010, "Wrong size on SpecialEventGameplayLibrary_SetLODOnLandscapProxies");
static_assert(offsetof(SpecialEventGameplayLibrary_SetLODOnLandscapProxies, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_SetLODOnLandscapProxies::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_SetLODOnLandscapProxies, bForced) == 0x000008, "Member 'SpecialEventGameplayLibrary_SetLODOnLandscapProxies::bForced' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_SetLODOnLandscapProxies, InLODValue) == 0x00000C, "Member 'SpecialEventGameplayLibrary_SetLODOnLandscapProxies::InLODValue' has a wrong offset!");

struct SpecialEventGameplayLibrary_SetNextLoadingScreen final
{
public:
	class UObject*                                WorldContextObject;
	const class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition;
	bool                                          bCanShowLoadingBar;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SpecialEventGameplayLibrary_SetNextLoadingScreen) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_SetNextLoadingScreen");
static_assert(sizeof(SpecialEventGameplayLibrary_SetNextLoadingScreen) == 0x000018, "Wrong size on SpecialEventGameplayLibrary_SetNextLoadingScreen");
static_assert(offsetof(SpecialEventGameplayLibrary_SetNextLoadingScreen, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_SetNextLoadingScreen::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_SetNextLoadingScreen, LoadingScreenDefinition) == 0x000008, "Member 'SpecialEventGameplayLibrary_SetNextLoadingScreen::LoadingScreenDefinition' has a wrong offset!");
static_assert(offsetof(SpecialEventGameplayLibrary_SetNextLoadingScreen, bCanShowLoadingBar) == 0x000010, "Member 'SpecialEventGameplayLibrary_SetNextLoadingScreen::bCanShowLoadingBar' has a wrong offset!");

struct SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations final
{
public:
	const class UObject*                          WorldContextObject;
};
static_assert(alignof(SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations) == 0x000008, "Wrong alignment on SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations");
static_assert(sizeof(SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations) == 0x000008, "Wrong size on SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations");
static_assert(offsetof(SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations, WorldContextObject) == 0x000000, "Member 'SpecialEventGameplayLibrary_StreamOutAllBuildingFoundations::WorldContextObject' has a wrong offset!");

struct FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync final
{
public:
	class AController*                            Conroller;
	class UFortAsyncAction_GameplayCinematicComponentReady* ReturnValue;
};
static_assert(alignof(FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync) == 0x000008, "Wrong alignment on FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync");
static_assert(sizeof(FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync) == 0x000010, "Wrong size on FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync");
static_assert(offsetof(FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync, Conroller) == 0x000000, "Member 'FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync::Conroller' has a wrong offset!");
static_assert(offsetof(FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync, ReturnValue) == 0x000008, "Member 'FortAsyncAction_GameplayCinematicComponentReady_FindGameplayCinematicComponentAsync::ReturnValue' has a wrong offset!");

struct SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent final
{
public:
	const class UObject*                          WorldContextObject;
	class USpecialEventGameUserSettingsControllerComponent* ReturnValue;
};
static_assert(alignof(SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent) == 0x000008, "Wrong alignment on SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent");
static_assert(sizeof(SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent) == 0x000010, "Wrong size on SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent, WorldContextObject) == 0x000000, "Member 'SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent, ReturnValue) == 0x000008, "Member 'SpecialEventGameUserSettingsControllerComponent_GetSpecialEventGameUserSettingsControllerComponent::ReturnValue' has a wrong offset!");

struct SpecialEventGameUserSettingsControllerComponent_ParseLoadedData final
{
public:
	class FString                                 Data;
};
static_assert(alignof(SpecialEventGameUserSettingsControllerComponent_ParseLoadedData) == 0x000008, "Wrong alignment on SpecialEventGameUserSettingsControllerComponent_ParseLoadedData");
static_assert(sizeof(SpecialEventGameUserSettingsControllerComponent_ParseLoadedData) == 0x000010, "Wrong size on SpecialEventGameUserSettingsControllerComponent_ParseLoadedData");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_ParseLoadedData, Data) == 0x000000, "Member 'SpecialEventGameUserSettingsControllerComponent_ParseLoadedData::Data' has a wrong offset!");

struct SpecialEventGameUserSettingsControllerComponent_SetData final
{
public:
	class FString                                 Data;
	bool                                          bAllowSave;
	bool                                          bSaveNow;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(SpecialEventGameUserSettingsControllerComponent_SetData) == 0x000008, "Wrong alignment on SpecialEventGameUserSettingsControllerComponent_SetData");
static_assert(sizeof(SpecialEventGameUserSettingsControllerComponent_SetData) == 0x000018, "Wrong size on SpecialEventGameUserSettingsControllerComponent_SetData");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_SetData, Data) == 0x000000, "Member 'SpecialEventGameUserSettingsControllerComponent_SetData::Data' has a wrong offset!");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_SetData, bAllowSave) == 0x000010, "Member 'SpecialEventGameUserSettingsControllerComponent_SetData::bAllowSave' has a wrong offset!");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_SetData, bSaveNow) == 0x000011, "Member 'SpecialEventGameUserSettingsControllerComponent_SetData::bSaveNow' has a wrong offset!");

struct SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked final
{
public:
	bool                                          bBlocked;
};
static_assert(alignof(SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked) == 0x000001, "Wrong alignment on SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked");
static_assert(sizeof(SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked) == 0x000001, "Wrong size on SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked, bBlocked) == 0x000000, "Member 'SpecialEventGameUserSettingsControllerComponent_SetSavingBlocked::bBlocked' has a wrong offset!");

struct SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData final
{
public:
	class FString                                 Data;
};
static_assert(alignof(SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData) == 0x000008, "Wrong alignment on SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData");
static_assert(sizeof(SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData) == 0x000010, "Wrong size on SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData, Data) == 0x000000, "Member 'SpecialEventGameUserSettingsControllerComponent_SpecialEventGameUserSettings_SetData::Data' has a wrong offset!");

struct SpecialEventGameUserSettingsControllerComponent_GetData final
{
public:
	ESpecialEventGameUserSettingsResult           outResult;
	uint8                                         Pad_1[0x7];
	class FString                                 OutData;
};
static_assert(alignof(SpecialEventGameUserSettingsControllerComponent_GetData) == 0x000008, "Wrong alignment on SpecialEventGameUserSettingsControllerComponent_GetData");
static_assert(sizeof(SpecialEventGameUserSettingsControllerComponent_GetData) == 0x000018, "Wrong size on SpecialEventGameUserSettingsControllerComponent_GetData");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_GetData, outResult) == 0x000000, "Member 'SpecialEventGameUserSettingsControllerComponent_GetData::outResult' has a wrong offset!");
static_assert(offsetof(SpecialEventGameUserSettingsControllerComponent_GetData, OutData) == 0x000008, "Member 'SpecialEventGameUserSettingsControllerComponent_GetData::OutData' has a wrong offset!");

struct FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync final
{
public:
	const class UObject*                          WorldContextObject;
	class UFortAsyncAction_SpecialEventGameUserSettingsReady* ReturnValue;
};
static_assert(alignof(FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync) == 0x000008, "Wrong alignment on FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync");
static_assert(sizeof(FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync) == 0x000010, "Wrong size on FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync");
static_assert(offsetof(FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync, WorldContextObject) == 0x000000, "Member 'FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync, ReturnValue) == 0x000008, "Member 'FortAsyncAction_SpecialEventGameUserSettingsReady_SpecialEventGameUserSettingsReadyAsync::ReturnValue' has a wrong offset!");

struct SpecialEventPhase_SetHUDElementVisibility final
{
public:
	struct FGameplayTagContainer                  HUDElementTags;
	bool                                          bHideElements;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(SpecialEventPhase_SetHUDElementVisibility) == 0x000008, "Wrong alignment on SpecialEventPhase_SetHUDElementVisibility");
static_assert(sizeof(SpecialEventPhase_SetHUDElementVisibility) == 0x000028, "Wrong size on SpecialEventPhase_SetHUDElementVisibility");
static_assert(offsetof(SpecialEventPhase_SetHUDElementVisibility, HUDElementTags) == 0x000000, "Member 'SpecialEventPhase_SetHUDElementVisibility::HUDElementTags' has a wrong offset!");
static_assert(offsetof(SpecialEventPhase_SetHUDElementVisibility, bHideElements) == 0x000020, "Member 'SpecialEventPhase_SetHUDElementVisibility::bHideElements' has a wrong offset!");

struct SpecialEventPhase_GetPhaseTag final
{
public:
	struct FGameplayTag                           ReturnValue;
};
static_assert(alignof(SpecialEventPhase_GetPhaseTag) == 0x000004, "Wrong alignment on SpecialEventPhase_GetPhaseTag");
static_assert(sizeof(SpecialEventPhase_GetPhaseTag) == 0x000004, "Wrong size on SpecialEventPhase_GetPhaseTag");
static_assert(offsetof(SpecialEventPhase_GetPhaseTag, ReturnValue) == 0x000000, "Member 'SpecialEventPhase_GetPhaseTag::ReturnValue' has a wrong offset!");

struct SpecialEventPlayerMannequin_HandleOnMutatorAdded final
{
public:
	class AFortGameplayMutator*                   NewMutator;
};
static_assert(alignof(SpecialEventPlayerMannequin_HandleOnMutatorAdded) == 0x000008, "Wrong alignment on SpecialEventPlayerMannequin_HandleOnMutatorAdded");
static_assert(sizeof(SpecialEventPlayerMannequin_HandleOnMutatorAdded) == 0x000008, "Wrong size on SpecialEventPlayerMannequin_HandleOnMutatorAdded");
static_assert(offsetof(SpecialEventPlayerMannequin_HandleOnMutatorAdded, NewMutator) == 0x000000, "Member 'SpecialEventPlayerMannequin_HandleOnMutatorAdded::NewMutator' has a wrong offset!");

struct SpecialEventRewindComponent_OnRep_StateData final
{
public:
	struct FSpecialEventRewindComponentStateData  OldStateData;
};
static_assert(alignof(SpecialEventRewindComponent_OnRep_StateData) == 0x000004, "Wrong alignment on SpecialEventRewindComponent_OnRep_StateData");
static_assert(sizeof(SpecialEventRewindComponent_OnRep_StateData) == 0x000008, "Wrong size on SpecialEventRewindComponent_OnRep_StateData");
static_assert(offsetof(SpecialEventRewindComponent_OnRep_StateData, OldStateData) == 0x000000, "Member 'SpecialEventRewindComponent_OnRep_StateData::OldStateData' has a wrong offset!");

struct SpecialEventRewindComponent_TryStartRewinding final
{
public:
	float                                         Duration;
	float                                         PlaybackSpeed;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(SpecialEventRewindComponent_TryStartRewinding) == 0x000004, "Wrong alignment on SpecialEventRewindComponent_TryStartRewinding");
static_assert(sizeof(SpecialEventRewindComponent_TryStartRewinding) == 0x00000C, "Wrong size on SpecialEventRewindComponent_TryStartRewinding");
static_assert(offsetof(SpecialEventRewindComponent_TryStartRewinding, Duration) == 0x000000, "Member 'SpecialEventRewindComponent_TryStartRewinding::Duration' has a wrong offset!");
static_assert(offsetof(SpecialEventRewindComponent_TryStartRewinding, PlaybackSpeed) == 0x000004, "Member 'SpecialEventRewindComponent_TryStartRewinding::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(SpecialEventRewindComponent_TryStartRewinding, ReturnValue) == 0x000008, "Member 'SpecialEventRewindComponent_TryStartRewinding::ReturnValue' has a wrong offset!");

struct SpecialEventRewindComponent_PlayerPawn_OnServerLanded final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(SpecialEventRewindComponent_PlayerPawn_OnServerLanded) == 0x000008, "Wrong alignment on SpecialEventRewindComponent_PlayerPawn_OnServerLanded");
static_assert(sizeof(SpecialEventRewindComponent_PlayerPawn_OnServerLanded) == 0x0000E0, "Wrong size on SpecialEventRewindComponent_PlayerPawn_OnServerLanded");
static_assert(offsetof(SpecialEventRewindComponent_PlayerPawn_OnServerLanded, Hit) == 0x000000, "Member 'SpecialEventRewindComponent_PlayerPawn_OnServerLanded::Hit' has a wrong offset!");

struct SpecialEventScript_AttemptFinishPhase final
{
public:
	struct FGameplayTag                           PhaseTag;
};
static_assert(alignof(SpecialEventScript_AttemptFinishPhase) == 0x000004, "Wrong alignment on SpecialEventScript_AttemptFinishPhase");
static_assert(sizeof(SpecialEventScript_AttemptFinishPhase) == 0x000004, "Wrong size on SpecialEventScript_AttemptFinishPhase");
static_assert(offsetof(SpecialEventScript_AttemptFinishPhase, PhaseTag) == 0x000000, "Member 'SpecialEventScript_AttemptFinishPhase::PhaseTag' has a wrong offset!");

struct SpecialEventScript_AttemptStartNextPhase final
{
public:
	struct FGameplayTag                           CurrentPhaseTag;
};
static_assert(alignof(SpecialEventScript_AttemptStartNextPhase) == 0x000004, "Wrong alignment on SpecialEventScript_AttemptStartNextPhase");
static_assert(sizeof(SpecialEventScript_AttemptStartNextPhase) == 0x000004, "Wrong size on SpecialEventScript_AttemptStartNextPhase");
static_assert(offsetof(SpecialEventScript_AttemptStartNextPhase, CurrentPhaseTag) == 0x000000, "Member 'SpecialEventScript_AttemptStartNextPhase::CurrentPhaseTag' has a wrong offset!");

struct SpecialEventScript_StartEventAtIndex final
{
public:
	int32                                         InStartingIndex;
};
static_assert(alignof(SpecialEventScript_StartEventAtIndex) == 0x000004, "Wrong alignment on SpecialEventScript_StartEventAtIndex");
static_assert(sizeof(SpecialEventScript_StartEventAtIndex) == 0x000004, "Wrong size on SpecialEventScript_StartEventAtIndex");
static_assert(offsetof(SpecialEventScript_StartEventAtIndex, InStartingIndex) == 0x000000, "Member 'SpecialEventScript_StartEventAtIndex::InStartingIndex' has a wrong offset!");

struct SpecialEventScript_UpdateMasterSequence final
{
public:
	float                                         Time;
};
static_assert(alignof(SpecialEventScript_UpdateMasterSequence) == 0x000004, "Wrong alignment on SpecialEventScript_UpdateMasterSequence");
static_assert(sizeof(SpecialEventScript_UpdateMasterSequence) == 0x000004, "Wrong size on SpecialEventScript_UpdateMasterSequence");
static_assert(offsetof(SpecialEventScript_UpdateMasterSequence, Time) == 0x000000, "Member 'SpecialEventScript_UpdateMasterSequence::Time' has a wrong offset!");

struct SpecialEventScript_GetActivePhaseIndex final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(SpecialEventScript_GetActivePhaseIndex) == 0x000004, "Wrong alignment on SpecialEventScript_GetActivePhaseIndex");
static_assert(sizeof(SpecialEventScript_GetActivePhaseIndex) == 0x000004, "Wrong size on SpecialEventScript_GetActivePhaseIndex");
static_assert(offsetof(SpecialEventScript_GetActivePhaseIndex, ReturnValue) == 0x000000, "Member 'SpecialEventScript_GetActivePhaseIndex::ReturnValue' has a wrong offset!");

struct SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence final
{
public:
	bool                                          bIsSignificant;
};
static_assert(alignof(SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence) == 0x000001, "Wrong alignment on SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence");
static_assert(sizeof(SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence) == 0x000001, "Wrong size on SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence");
static_assert(offsetof(SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence, bIsSignificant) == 0x000000, "Member 'SpecialEventScript_SetLocalPlayersSignificantForSpecialEventSequence::bIsSignificant' has a wrong offset!");

struct SpecialEventStatComponent_AdjustSpecialEventStat final
{
public:
	class AActor*                                 Actor;
	struct FGameplayTag                           LookupTag;
	float                                         Adjustment;
};
static_assert(alignof(SpecialEventStatComponent_AdjustSpecialEventStat) == 0x000008, "Wrong alignment on SpecialEventStatComponent_AdjustSpecialEventStat");
static_assert(sizeof(SpecialEventStatComponent_AdjustSpecialEventStat) == 0x000010, "Wrong size on SpecialEventStatComponent_AdjustSpecialEventStat");
static_assert(offsetof(SpecialEventStatComponent_AdjustSpecialEventStat, Actor) == 0x000000, "Member 'SpecialEventStatComponent_AdjustSpecialEventStat::Actor' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_AdjustSpecialEventStat, LookupTag) == 0x000008, "Member 'SpecialEventStatComponent_AdjustSpecialEventStat::LookupTag' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_AdjustSpecialEventStat, Adjustment) == 0x00000C, "Member 'SpecialEventStatComponent_AdjustSpecialEventStat::Adjustment' has a wrong offset!");

struct SpecialEventStatComponent_GetSpecialEventStat final
{
public:
	bool                                          bOutValid;
	uint8                                         Pad_1[0x7];
	const class AActor*                           Actor;
	struct FGameplayTag                           LookupTag;
	uint8                                         Pad_14[0x4];
	struct FSpecialEventStatArrayEntry            ReturnValue;
};
static_assert(alignof(SpecialEventStatComponent_GetSpecialEventStat) == 0x000008, "Wrong alignment on SpecialEventStatComponent_GetSpecialEventStat");
static_assert(sizeof(SpecialEventStatComponent_GetSpecialEventStat) == 0x000058, "Wrong size on SpecialEventStatComponent_GetSpecialEventStat");
static_assert(offsetof(SpecialEventStatComponent_GetSpecialEventStat, bOutValid) == 0x000000, "Member 'SpecialEventStatComponent_GetSpecialEventStat::bOutValid' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_GetSpecialEventStat, Actor) == 0x000008, "Member 'SpecialEventStatComponent_GetSpecialEventStat::Actor' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_GetSpecialEventStat, LookupTag) == 0x000010, "Member 'SpecialEventStatComponent_GetSpecialEventStat::LookupTag' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_GetSpecialEventStat, ReturnValue) == 0x000018, "Member 'SpecialEventStatComponent_GetSpecialEventStat::ReturnValue' has a wrong offset!");

struct SpecialEventStatComponent_AdjustStat final
{
public:
	struct FGameplayTag                           LookupTag;
	float                                         Adjustment;
	bool                                          bLogError;
	bool                                          ReturnValue;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(SpecialEventStatComponent_AdjustStat) == 0x000004, "Wrong alignment on SpecialEventStatComponent_AdjustStat");
static_assert(sizeof(SpecialEventStatComponent_AdjustStat) == 0x00000C, "Wrong size on SpecialEventStatComponent_AdjustStat");
static_assert(offsetof(SpecialEventStatComponent_AdjustStat, LookupTag) == 0x000000, "Member 'SpecialEventStatComponent_AdjustStat::LookupTag' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_AdjustStat, Adjustment) == 0x000004, "Member 'SpecialEventStatComponent_AdjustStat::Adjustment' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_AdjustStat, bLogError) == 0x000008, "Member 'SpecialEventStatComponent_AdjustStat::bLogError' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_AdjustStat, ReturnValue) == 0x000009, "Member 'SpecialEventStatComponent_AdjustStat::ReturnValue' has a wrong offset!");

struct SpecialEventStatComponent_GetStat final
{
public:
	bool                                          bOutValid;
	uint8                                         Pad_1[0x3];
	struct FGameplayTag                           LookupTag;
	struct FSpecialEventStatArrayEntry            ReturnValue;
};
static_assert(alignof(SpecialEventStatComponent_GetStat) == 0x000008, "Wrong alignment on SpecialEventStatComponent_GetStat");
static_assert(sizeof(SpecialEventStatComponent_GetStat) == 0x000048, "Wrong size on SpecialEventStatComponent_GetStat");
static_assert(offsetof(SpecialEventStatComponent_GetStat, bOutValid) == 0x000000, "Member 'SpecialEventStatComponent_GetStat::bOutValid' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_GetStat, LookupTag) == 0x000004, "Member 'SpecialEventStatComponent_GetStat::LookupTag' has a wrong offset!");
static_assert(offsetof(SpecialEventStatComponent_GetStat, ReturnValue) == 0x000008, "Member 'SpecialEventStatComponent_GetStat::ReturnValue' has a wrong offset!");

struct SpecialRelevancyHealthComponent_OnDamaged final
{
public:
	const class AFortPlayerState*                 DamagingPlayerState;
	int32                                         RelevancyGroupIndex;
	float                                         DealtDamage;
	float                                         ActualDealtDamage;
	float                                         TotalDamage;
	float                                         DealtDamagePercent;
	float                                         ActualDealtDamagePercent;
	float                                         TotalDamagePercent;
	float                                         MaxHealth;
	bool                                          bKilled;
	uint8                                         Pad_29[0x7];
};
static_assert(alignof(SpecialRelevancyHealthComponent_OnDamaged) == 0x000008, "Wrong alignment on SpecialRelevancyHealthComponent_OnDamaged");
static_assert(sizeof(SpecialRelevancyHealthComponent_OnDamaged) == 0x000030, "Wrong size on SpecialRelevancyHealthComponent_OnDamaged");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, DamagingPlayerState) == 0x000000, "Member 'SpecialRelevancyHealthComponent_OnDamaged::DamagingPlayerState' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, RelevancyGroupIndex) == 0x000008, "Member 'SpecialRelevancyHealthComponent_OnDamaged::RelevancyGroupIndex' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, DealtDamage) == 0x00000C, "Member 'SpecialRelevancyHealthComponent_OnDamaged::DealtDamage' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, ActualDealtDamage) == 0x000010, "Member 'SpecialRelevancyHealthComponent_OnDamaged::ActualDealtDamage' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, TotalDamage) == 0x000014, "Member 'SpecialRelevancyHealthComponent_OnDamaged::TotalDamage' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, DealtDamagePercent) == 0x000018, "Member 'SpecialRelevancyHealthComponent_OnDamaged::DealtDamagePercent' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, ActualDealtDamagePercent) == 0x00001C, "Member 'SpecialRelevancyHealthComponent_OnDamaged::ActualDealtDamagePercent' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, TotalDamagePercent) == 0x000020, "Member 'SpecialRelevancyHealthComponent_OnDamaged::TotalDamagePercent' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, MaxHealth) == 0x000024, "Member 'SpecialRelevancyHealthComponent_OnDamaged::MaxHealth' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnDamaged, bKilled) == 0x000028, "Member 'SpecialRelevancyHealthComponent_OnDamaged::bKilled' has a wrong offset!");

struct SpecialRelevancyHealthComponent_OnKilled final
{
public:
	const class AFortPlayerState*                 KillingPlayerState;
	int32                                         RelevancyGroupIndex;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SpecialRelevancyHealthComponent_OnKilled) == 0x000008, "Wrong alignment on SpecialRelevancyHealthComponent_OnKilled");
static_assert(sizeof(SpecialRelevancyHealthComponent_OnKilled) == 0x000010, "Wrong size on SpecialRelevancyHealthComponent_OnKilled");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnKilled, KillingPlayerState) == 0x000000, "Member 'SpecialRelevancyHealthComponent_OnKilled::KillingPlayerState' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_OnKilled, RelevancyGroupIndex) == 0x000008, "Member 'SpecialRelevancyHealthComponent_OnKilled::RelevancyGroupIndex' has a wrong offset!");

struct SpecialRelevancyHealthComponent_ClientGetHealth final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(SpecialRelevancyHealthComponent_ClientGetHealth) == 0x000004, "Wrong alignment on SpecialRelevancyHealthComponent_ClientGetHealth");
static_assert(sizeof(SpecialRelevancyHealthComponent_ClientGetHealth) == 0x000004, "Wrong size on SpecialRelevancyHealthComponent_ClientGetHealth");
static_assert(offsetof(SpecialRelevancyHealthComponent_ClientGetHealth, ReturnValue) == 0x000000, "Member 'SpecialRelevancyHealthComponent_ClientGetHealth::ReturnValue' has a wrong offset!");

struct SpecialRelevancyHealthComponent_ClientGetHealthPercent final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(SpecialRelevancyHealthComponent_ClientGetHealthPercent) == 0x000004, "Wrong alignment on SpecialRelevancyHealthComponent_ClientGetHealthPercent");
static_assert(sizeof(SpecialRelevancyHealthComponent_ClientGetHealthPercent) == 0x000004, "Wrong size on SpecialRelevancyHealthComponent_ClientGetHealthPercent");
static_assert(offsetof(SpecialRelevancyHealthComponent_ClientGetHealthPercent, ReturnValue) == 0x000000, "Member 'SpecialRelevancyHealthComponent_ClientGetHealthPercent::ReturnValue' has a wrong offset!");

struct SpecialRelevancyHealthComponent_GetHealth final
{
public:
	const class AActor*                           RelevancyActor;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SpecialRelevancyHealthComponent_GetHealth) == 0x000008, "Wrong alignment on SpecialRelevancyHealthComponent_GetHealth");
static_assert(sizeof(SpecialRelevancyHealthComponent_GetHealth) == 0x000010, "Wrong size on SpecialRelevancyHealthComponent_GetHealth");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealth, RelevancyActor) == 0x000000, "Member 'SpecialRelevancyHealthComponent_GetHealth::RelevancyActor' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealth, ReturnValue) == 0x000008, "Member 'SpecialRelevancyHealthComponent_GetHealth::ReturnValue' has a wrong offset!");

struct SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex final
{
public:
	int32                                         Index_0;
	float                                         ReturnValue;
};
static_assert(alignof(SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex) == 0x000004, "Wrong alignment on SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex");
static_assert(sizeof(SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex) == 0x000008, "Wrong size on SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex, Index_0) == 0x000000, "Member 'SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex::Index_0' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex, ReturnValue) == 0x000004, "Member 'SpecialRelevancyHealthComponent_GetHealthFromRelevancyIndex::ReturnValue' has a wrong offset!");

struct SpecialRelevancyHealthComponent_GetHealthPercent final
{
public:
	const class AActor*                           RelevancyActor;
	float                                         ReturnValue;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SpecialRelevancyHealthComponent_GetHealthPercent) == 0x000008, "Wrong alignment on SpecialRelevancyHealthComponent_GetHealthPercent");
static_assert(sizeof(SpecialRelevancyHealthComponent_GetHealthPercent) == 0x000010, "Wrong size on SpecialRelevancyHealthComponent_GetHealthPercent");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealthPercent, RelevancyActor) == 0x000000, "Member 'SpecialRelevancyHealthComponent_GetHealthPercent::RelevancyActor' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealthPercent, ReturnValue) == 0x000008, "Member 'SpecialRelevancyHealthComponent_GetHealthPercent::ReturnValue' has a wrong offset!");

struct SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex final
{
public:
	int32                                         Index_0;
	float                                         ReturnValue;
};
static_assert(alignof(SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex) == 0x000004, "Wrong alignment on SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex");
static_assert(sizeof(SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex) == 0x000008, "Wrong size on SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex, Index_0) == 0x000000, "Member 'SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex::Index_0' has a wrong offset!");
static_assert(offsetof(SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex, ReturnValue) == 0x000004, "Member 'SpecialRelevancyHealthComponent_GetHealthPercentFromRelevancyIndex::ReturnValue' has a wrong offset!");

}
