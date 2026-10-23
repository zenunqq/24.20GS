#pragma once

#include "Basic.hpp"

#include "CommonUILegacy_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CommonInput_structs.hpp"
#include "SpecialEventGameplayRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class AFortAthenaMutator_SpecialEventTODM final : public AFortAthenaMutator
{
public:
	TArray<struct FSpecialEventTODMPhaseData>     PhaseDataArray;
	class ASpecialEventScript*                    SpecialEventScript;
	uint8                                         Pad_348[0x10];
	class AFortTimeOfDayManager*                  SpawnedTODM;

public:
	void OnPhaseActivated(class ASpecialEventScript* InSpecialEventScript, class ASpecialEventPhase* InSpecialEventPhase);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_SpecialEventTODM">();
	}
	static class AFortAthenaMutator_SpecialEventTODM* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_SpecialEventTODM>();
	}
};
static_assert(alignof(AFortAthenaMutator_SpecialEventTODM) == 0x000008, "Wrong alignment on AFortAthenaMutator_SpecialEventTODM");
static_assert(sizeof(AFortAthenaMutator_SpecialEventTODM) == 0x000360, "Wrong size on AFortAthenaMutator_SpecialEventTODM");
static_assert(offsetof(AFortAthenaMutator_SpecialEventTODM, PhaseDataArray) == 0x000330, "Member 'AFortAthenaMutator_SpecialEventTODM::PhaseDataArray' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEventTODM, SpecialEventScript) == 0x000340, "Member 'AFortAthenaMutator_SpecialEventTODM::SpecialEventScript' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEventTODM, SpawnedTODM) == 0x000358, "Member 'AFortAthenaMutator_SpecialEventTODM::SpawnedTODM' has a wrong offset!");

class UFortCheatManager_SpecialEvent final : public UFortCheatManager_Coupled
{
public:
	void AddCSVEvent(const class FString& CSVEventName);
	void AutobalanceTargetScore();
	void ChangeWinCondition(float NewGoalScore);
	void CloseParachutes();
	void PauseWinCondition(bool bLockScores);
	void PlacePlayersInAircraft();
	void ResetMatchTimeToPrevious();
	void ResetSpecialEventAircraft();
	void ResetWinCondition();
	void ResetWinConditionProgressToZero();
	void ResumeWinCondition();
	void SendToNightNight();
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
	void SetIsSimulatingDamage(bool bIsSimulating);
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
	void SetMatchTime(int32 NewMatchTime);
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void ShrinkSafeZone();
	void SpecialEventClearAdditionalViewpoint();
	void SpecialEventGameUserSettings_ClearDataForAllPlayers();
	void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z);
	void StartEventScript(int32 InStartingIndex);
	void TeleportAllPlayers(int32 SafeZoneIndex);
	void ToggleDisableParachutes(bool bIsDisabled);
	void UnloadTerrainMaps(class FName MapTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_SpecialEvent">();
	}
	static class UFortCheatManager_SpecialEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_SpecialEvent>();
	}
};
static_assert(alignof(UFortCheatManager_SpecialEvent) == 0x000008, "Wrong alignment on UFortCheatManager_SpecialEvent");
static_assert(sizeof(UFortCheatManager_SpecialEvent) == 0x000038, "Wrong size on UFortCheatManager_SpecialEvent");

class UFortCheatManager_DestroyActorsAndComponents final : public UFortCheatManager_Coupled
{
public:
	void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(const class FString& TagString, const bool bEnabled);

	void DestroyActorsAndComponentsMutator_ListActorComponents(const class FString& InActorName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_DestroyActorsAndComponents">();
	}
	static class UFortCheatManager_DestroyActorsAndComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_DestroyActorsAndComponents>();
	}
};
static_assert(alignof(UFortCheatManager_DestroyActorsAndComponents) == 0x000008, "Wrong alignment on UFortCheatManager_DestroyActorsAndComponents");
static_assert(sizeof(UFortCheatManager_DestroyActorsAndComponents) == 0x000038, "Wrong size on UFortCheatManager_DestroyActorsAndComponents");

class UFortCheatManager_FakeKillRelevancy final : public UFortCheatManager_Coupled
{
public:
	void FakeKillRelevancyDebug(const float TextScale);
	void FakeKillRelevancyReset();
	void FakeKillRelevancySetUpPhase(const int32 MaxPlayersRemaining, const class FString& ReasonGameplayTagString, const int32 NumWaves, const float RelevancyDelay);
	void FakeKillRelevancyStartNextWave();
	void FakeKillRelevancyTestAlgorithm(const int32 NumPlayers, const class FString& MaxPlayersRemainingAfterPhases, const int32 MinSquadSize, const int32 MaxSquadSize, const int32 Iterations, const int32 LogVerbosity);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_FakeKillRelevancy">();
	}
	static class UFortCheatManager_FakeKillRelevancy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_FakeKillRelevancy>();
	}
};
static_assert(alignof(UFortCheatManager_FakeKillRelevancy) == 0x000008, "Wrong alignment on UFortCheatManager_FakeKillRelevancy");
static_assert(sizeof(UFortCheatManager_FakeKillRelevancy) == 0x000038, "Wrong size on UFortCheatManager_FakeKillRelevancy");

class AFortAthenaMutator_DestroyActorsAndComponents final : public AFortAthenaMutator
{
public:
	TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions;
	uint8                                         Pad_340[0x20];

public:
	void OnActorSpawned(class AActor* Actor);
	void OnRep_ActorDefinitions(const TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions);
	void OnTrackedActorDestroyed(class AActor* DestroyedActor);
	void PermanentlyDisableActorDefinitions(const struct FGameplayTagContainer& InTags);
	void SetActorDefinitionsEnabled(const struct FGameplayTagContainer& InTags, const bool bEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_DestroyActorsAndComponents">();
	}
	static class AFortAthenaMutator_DestroyActorsAndComponents* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_DestroyActorsAndComponents>();
	}
};
static_assert(alignof(AFortAthenaMutator_DestroyActorsAndComponents) == 0x000008, "Wrong alignment on AFortAthenaMutator_DestroyActorsAndComponents");
static_assert(sizeof(AFortAthenaMutator_DestroyActorsAndComponents) == 0x000360, "Wrong size on AFortAthenaMutator_DestroyActorsAndComponents");
static_assert(offsetof(AFortAthenaMutator_DestroyActorsAndComponents, ActorDefinitions) == 0x000330, "Member 'AFortAthenaMutator_DestroyActorsAndComponents::ActorDefinitions' has a wrong offset!");

class UFortControllerComponent_FakeKillRelevancy final : public UFortControllerComponent
{
public:
	struct FFakeKillRelevancyPlayerDataArray      PlayerDataArray;
	TMap<class AFortPlayerStateAthena*, EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap;
	uint8                                         ResetCounter;
	uint8                                         Pad_219[0x7];
	TArray<class AFortPlayerStateAthena*>         DebugSupergroupPlayerStates;

public:
	void CancelKillEffectsOnClient(const TArray<class AFortPlayerStateAthena*>& PlayerStates);
	void CancelKillEffectsOnServer();
	void OnKillEffectsPlayed(const class AFortPlayerStateAthena* PlayerState);
	void OnRep_ResetCounter();
	void PlayKillEffects(const struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, const float RelevancyDelay);
	void ResetRelevancy();

	struct FVector GetDeathLocation(const class AFortPlayerStateAthena* PlayerState) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_FakeKillRelevancy">();
	}
	static class UFortControllerComponent_FakeKillRelevancy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_FakeKillRelevancy>();
	}
};
static_assert(alignof(UFortControllerComponent_FakeKillRelevancy) == 0x000008, "Wrong alignment on UFortControllerComponent_FakeKillRelevancy");
static_assert(sizeof(UFortControllerComponent_FakeKillRelevancy) == 0x000230, "Wrong size on UFortControllerComponent_FakeKillRelevancy");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, PlayerDataArray) == 0x0000A8, "Member 'UFortControllerComponent_FakeKillRelevancy::PlayerDataArray' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, ClientPlayerStateKillStepMap) == 0x0001C8, "Member 'UFortControllerComponent_FakeKillRelevancy::ClientPlayerStateKillStepMap' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, ResetCounter) == 0x000218, "Member 'UFortControllerComponent_FakeKillRelevancy::ResetCounter' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, DebugSupergroupPlayerStates) == 0x000220, "Member 'UFortControllerComponent_FakeKillRelevancy::DebugSupergroupPlayerStates' has a wrong offset!");

class AFortAthenaMutator_FakeKillRelevancy final : public AFortAthenaMutator_SpecialRelevancy
{
public:
	TSubclassOf<class UFortControllerComponent_FakeKillRelevancy> FakeKillControllerComponentClass;
	TArray<struct FFakeKillRelevancyPhaseData>    RelevancyPhaseDataArray;
	int32                                         PhaseNum;
	uint8                                         Pad_454[0x44];

public:
	void EndWave(const int32 EndPhaseNum, const int32 WaveNum);
	void ResetRelevancy();
	void SetUpKillPhase(const int32 MaxPlayersRemaining, const struct FGameplayTag& Reason, const int32 NumWaves, const float RelevancyDelay);
	void StartNextKillWave();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_FakeKillRelevancy">();
	}
	static class AFortAthenaMutator_FakeKillRelevancy* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_FakeKillRelevancy>();
	}
};
static_assert(alignof(AFortAthenaMutator_FakeKillRelevancy) == 0x000008, "Wrong alignment on AFortAthenaMutator_FakeKillRelevancy");
static_assert(sizeof(AFortAthenaMutator_FakeKillRelevancy) == 0x000498, "Wrong size on AFortAthenaMutator_FakeKillRelevancy");
static_assert(offsetof(AFortAthenaMutator_FakeKillRelevancy, FakeKillControllerComponentClass) == 0x000438, "Member 'AFortAthenaMutator_FakeKillRelevancy::FakeKillControllerComponentClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_FakeKillRelevancy, RelevancyPhaseDataArray) == 0x000440, "Member 'AFortAthenaMutator_FakeKillRelevancy::RelevancyPhaseDataArray' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_FakeKillRelevancy, PhaseNum) == 0x000450, "Member 'AFortAthenaMutator_FakeKillRelevancy::PhaseNum' has a wrong offset!");

class AFortAthenaMutator_LoadGameFeature final : public AFortAthenaMutator
{
public:
	class FString                                 GameFeatureToLoad;

public:
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_LoadGameFeature">();
	}
	static class AFortAthenaMutator_LoadGameFeature* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_LoadGameFeature>();
	}
};
static_assert(alignof(AFortAthenaMutator_LoadGameFeature) == 0x000008, "Wrong alignment on AFortAthenaMutator_LoadGameFeature");
static_assert(sizeof(AFortAthenaMutator_LoadGameFeature) == 0x000340, "Wrong size on AFortAthenaMutator_LoadGameFeature");
static_assert(offsetof(AFortAthenaMutator_LoadGameFeature, GameFeatureToLoad) == 0x000330, "Member 'AFortAthenaMutator_LoadGameFeature::GameFeatureToLoad' has a wrong offset!");

class AFortAthenaMutator_RemoveGameFeatures final : public AFortAthenaMutator
{
public:
	TArray<class FString>                         AllowedGameFeatures;

public:
	void OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_RemoveGameFeatures">();
	}
	static class AFortAthenaMutator_RemoveGameFeatures* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_RemoveGameFeatures>();
	}
};
static_assert(alignof(AFortAthenaMutator_RemoveGameFeatures) == 0x000008, "Wrong alignment on AFortAthenaMutator_RemoveGameFeatures");
static_assert(sizeof(AFortAthenaMutator_RemoveGameFeatures) == 0x000340, "Wrong size on AFortAthenaMutator_RemoveGameFeatures");
static_assert(offsetof(AFortAthenaMutator_RemoveGameFeatures, AllowedGameFeatures) == 0x000330, "Member 'AFortAthenaMutator_RemoveGameFeatures::AllowedGameFeatures' has a wrong offset!");

class AFortAthenaMutator_SpecialEvent final : public AFortAthenaMutator
{
public:
	TMulticastInlineDelegate<void()>              TeleportAllPlayersFinished;
	TMulticastInlineDelegate<void(class AFortPlayerPawnAthena* NewPawn)> OnPawnLoaded;
	TMulticastInlineDelegate<void(class AFortPlayerControllerAthena* NewPlayer)> OnInitController;
	TMulticastInlineDelegate<void()>              OnResumeGame;
	TMulticastInlineDelegate<void(const struct FSpecialClientEvent& ClientEventData)> OnSpecialClientEvent;
	TMulticastInlineDelegate<void(class APlayerState* PlayerState)> OnHandleLogout;
	TMulticastInlineDelegate<void()>              OnClientInitialLoadingFinished;
	uint8                                         Pad_3A0[0x68];
	bool                                          bPlayersAreInvincible;
	uint8                                         Pad_409[0x27];
	int32                                         MinimumScoreBumpForAutomadeGoal;
	uint8                                         Pad_434[0x4];
	TArray<float>                                 ScoreBrackets;
	bool                                          bEnforceInfiniteSafeZonePhase;
	uint8                                         Pad_449[0x3];
	class FName                                   WarmupIslandPlayerStartTag;
	bool                                          bAllowInventoryOpen;
	uint8                                         Pad_451[0x7];
	struct FScalableFloat                         bAllowFullScreenMap;
	bool                                          bShouldClearFrontEndMapMarkers;
	bool                                          bBlockTeamIndicators;
	uint8                                         Pad_482[0x2];
	int32                                         ForceDisplaySquadInfoDuringGamePhases;
	bool                                          bAllowSquadListLocalPlayerInSplitscreen;
	uint8                                         Pad_489[0x7];
	struct FGameplayTagContainer                  UIToHideDuringSpecialEvent;
	struct FGameplayTagContainer                  UIToHideWhenInInfiniteWarmup;
	struct FGameplayTagContainer                  ClientEventsThatUnhideHiddenWhileLoadingHUDElements;
	bool                                          bForceGarbageCollectionAfterUnloadOnServer;
	bool                                          bForceGarbageCollectionAfterUnloadOnClient;
	bool                                          bFullPurgeGC;
	uint8                                         Pad_4F3[0x5];
	class AFortAthenaAircraft*                    EventAircraft;
	struct FAircraftFlightInfo                    EventAircraftInfo;
	TSubclassOf<class AFortAthenaAircraft>        EventAircraftClass;
	class ASpecialEventScript*                    ScriptActor;
	bool                                          bDisableHUD;
	uint8                                         GameResumed;
	uint8                                         Pad_55A[0x6];
	struct FVector                                AdditionalViewpoint;
	bool                                          bParachutesDisabled;
	uint8                                         Pad_579[0x7];
	class FString                                 LastCSVEventName;
	bool                                          bCanStreamBuildingFoundationsIn;
	uint8                                         Pad_591[0x3];
	int32                                         AllPlayerTeleportedCount;
	struct FFortDelayRTMMData                     DelayPlayersFromReturningToLobbyData;
	class FName                                   NamedWeightForContainerLootRoll;
	float                                         WeightForContainerLootRoll;
	uint8                                         Pad_5B0[0x30];
	TArray<struct FFortSpecialEventEmoteData>     SpecialEventEmoteData;
	struct FGameplayTagContainer                  BlockedNativeActions;
	EFortItemType                                 DesiredQuickbarItemTypeAfterRemove;
	uint8                                         Pad_611[0x7];
	class UInputComponent*                        SpecialEventsInputComponent;
	bool                                          bLockingOnFocalPoint;
	uint8                                         Pad_621[0x7];
	TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts;
	struct FFortSpecialEventGEData                GameplayEffectToApplyOnSwapToDefault;
	TMap<struct FUniqueNetIdRepl, int32>          OverridePartsArrayIndexMap;
	TArray<struct FFortSpecialEventGEData>        GameplayEffectsToApplyOnLogin;
	TArray<struct FSpecialEventMapData>           TerrainMapsToUnload;
	uint8                                         Pad_6B8[0x10];
	TArray<class AFortPlayerControllerAthena*>    UnhandledPlayerControllers;
	TArray<class FName>                           HLODActorsToHideNames;
	bool                                          bForceAllowCloth;
	uint8                                         Pad_6E9[0x1];
	bool                                          bManageBackfill;
	uint8                                         Pad_6EB[0x1];
	int32                                         PlayerCountToTriggerBackfill;
	bool                                          bWaitForPlayerCountToTriggerBackfill;
	uint8                                         Pad_6F1[0x3];
	float                                         UpdateBackfillStatusTime;
	uint8                                         Pad_6F8[0x10];
	bool                                          bServerHasBackfillActive;
	bool                                          bCanToggleCursorModeInStasis;
	uint8                                         Pad_70A[0x6];
	struct FScalableFloat                         MannequinRecentlyRenderedCheckToleranceValue;
	TArray<class ASpecialEventPlayerMannequin*>   SpecialEventMannequins;
	TArray<TSubclassOf<class AActor>>             ActorSpawnDelegateClasses;
	uint8                                         Pad_758[0x10];

public:
	void AddClientCSVEvent(const class FString& CSVEventName);
	void AddCSVEvent(const class FString& CSVEventName, bool bShouldRepToClient);
	void AddToBlockedNativeActions(const struct FGameplayTagContainer& Actions, const bool bCancelAbilities);
	void AutobalanceTargetScore();
	void ChangeWinCondition(float NewGoalScore);
	void ClearAdditionalViewpoint();
	void ClearBlockedNativeActions();
	void CloseParachutes();
	void FlushUnhandledPlayerControllers();
	void ForceSafeZoneFinalLocation(const struct FVector& NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle);
	void HandleSpecialEventMannequinDestroyed(class AActor* MannequinActor);
	void JumpToSafeZonePhase(const struct FVector& PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);
	void NetMulticast_CheatClearSpecialEventGameUserSettings();
	void NotifyClientsGameResumed();
	void OnActorPreSpawnInitialization(class AActor* Actor);
	void OnActorSpawned(class AActor* Actor);
	void OnAircraftEnteredDropZone(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftExitedDropZone(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnAircraftFlightEnded(class AFortAthenaAircraft* FortAthenaAircraft);
	void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
	void OnGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
	void OnGameViewportActivationChanged(bool bHasFocus);
	void OnRep_AdditionalViewpoint();
	void OnRep_Aircraft();
	void OnRep_AllPlayerTeleportedCount();
	void OnRep_bCanStreamBuildingFoundationsIn();
	void OnRep_bDisableHUD();
	void OnRep_bLockingOnFocalPoint();
	void OnRep_bPlayersAreInvincible();
	void OnRep_DelayPlayersFromReturningToLobbyData();
	void OnRep_GameResumed();
	void OnRep_LastCSVEventName();
	void OnRep_TerrainMapsToUnload();
	void OnWarmUpTeleportComplete(class AFortPlayerPawn* PlayerPawn);
	void PauseStormDamage(bool bPause);
	void PauseStormProgression(bool bPause);
	void PauseSupplyDrops(bool bPause);
	void PauseWinCondition(bool bLockScores);
	void PlacePlayersInAircraft();
	void PopSpecialEventEmoteInputComponent();
	void PushSpecialEventEmoteInputComponent();
	void RemoveFromBlockedNativeActions(const struct FGameplayTagContainer& Actions);
	void ResetMatchTimeToPrevious();
	void ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void ResetSpecialEventAircraft();
	void ResetWinCondition();
	void ResetWinConditionProgressToZero();
	void ResumeWinCondition();
	void SendToNightNight();
	void SetAdditionalViewpoint(const struct FVector& WorldLocation);
	void SetCanStreamBuildingFoundationsIn(bool bEnable);
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
	void SetIsSimulatingDamage(bool bIsSimulating);
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);
	void SetMatchTime(int32 NewMatchTime);
	void SetNamedWeightForContainerLootRoll(const class FName WeightName);
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
	void SetWeightForContainerLootRoll(const float Weight);
	void ShrinkSafeZone();
	void StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent);
	void SwapBodyParts(const int32 ArrayIndex, class AFortPlayerController* FortPC);
	void TeleportAllPlayers(const struct FGameplayTagContainer& EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex);
	void ToggleAllPlayersInvincibility(bool bInvincible);
	void ToggleDisableParachutes(bool bDisable);
	void ToggleDisableWeapons(bool bDisableWeapons);
	void ToggleHUDs(bool bHide);
	void UnloadTerrainMaps(const struct FGameplayTag& MapTag);
	void UpdateBackfillStatus();
	void WarmUpIslandUpdated();

	bool GetHasInfiniteSafeZonePhase() const;
	class ASpecialEventScript* GetScript() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_SpecialEvent">();
	}
	static class AFortAthenaMutator_SpecialEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_SpecialEvent>();
	}
};
static_assert(alignof(AFortAthenaMutator_SpecialEvent) == 0x000008, "Wrong alignment on AFortAthenaMutator_SpecialEvent");
static_assert(sizeof(AFortAthenaMutator_SpecialEvent) == 0x000768, "Wrong size on AFortAthenaMutator_SpecialEvent");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, TeleportAllPlayersFinished) == 0x000330, "Member 'AFortAthenaMutator_SpecialEvent::TeleportAllPlayersFinished' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OnPawnLoaded) == 0x000340, "Member 'AFortAthenaMutator_SpecialEvent::OnPawnLoaded' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OnInitController) == 0x000350, "Member 'AFortAthenaMutator_SpecialEvent::OnInitController' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OnResumeGame) == 0x000360, "Member 'AFortAthenaMutator_SpecialEvent::OnResumeGame' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OnSpecialClientEvent) == 0x000370, "Member 'AFortAthenaMutator_SpecialEvent::OnSpecialClientEvent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OnHandleLogout) == 0x000380, "Member 'AFortAthenaMutator_SpecialEvent::OnHandleLogout' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OnClientInitialLoadingFinished) == 0x000390, "Member 'AFortAthenaMutator_SpecialEvent::OnClientInitialLoadingFinished' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bPlayersAreInvincible) == 0x000408, "Member 'AFortAthenaMutator_SpecialEvent::bPlayersAreInvincible' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, MinimumScoreBumpForAutomadeGoal) == 0x000430, "Member 'AFortAthenaMutator_SpecialEvent::MinimumScoreBumpForAutomadeGoal' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, ScoreBrackets) == 0x000438, "Member 'AFortAthenaMutator_SpecialEvent::ScoreBrackets' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bEnforceInfiniteSafeZonePhase) == 0x000448, "Member 'AFortAthenaMutator_SpecialEvent::bEnforceInfiniteSafeZonePhase' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, WarmupIslandPlayerStartTag) == 0x00044C, "Member 'AFortAthenaMutator_SpecialEvent::WarmupIslandPlayerStartTag' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bAllowInventoryOpen) == 0x000450, "Member 'AFortAthenaMutator_SpecialEvent::bAllowInventoryOpen' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bAllowFullScreenMap) == 0x000458, "Member 'AFortAthenaMutator_SpecialEvent::bAllowFullScreenMap' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bShouldClearFrontEndMapMarkers) == 0x000480, "Member 'AFortAthenaMutator_SpecialEvent::bShouldClearFrontEndMapMarkers' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bBlockTeamIndicators) == 0x000481, "Member 'AFortAthenaMutator_SpecialEvent::bBlockTeamIndicators' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, ForceDisplaySquadInfoDuringGamePhases) == 0x000484, "Member 'AFortAthenaMutator_SpecialEvent::ForceDisplaySquadInfoDuringGamePhases' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bAllowSquadListLocalPlayerInSplitscreen) == 0x000488, "Member 'AFortAthenaMutator_SpecialEvent::bAllowSquadListLocalPlayerInSplitscreen' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, UIToHideDuringSpecialEvent) == 0x000490, "Member 'AFortAthenaMutator_SpecialEvent::UIToHideDuringSpecialEvent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, UIToHideWhenInInfiniteWarmup) == 0x0004B0, "Member 'AFortAthenaMutator_SpecialEvent::UIToHideWhenInInfiniteWarmup' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, ClientEventsThatUnhideHiddenWhileLoadingHUDElements) == 0x0004D0, "Member 'AFortAthenaMutator_SpecialEvent::ClientEventsThatUnhideHiddenWhileLoadingHUDElements' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bForceGarbageCollectionAfterUnloadOnServer) == 0x0004F0, "Member 'AFortAthenaMutator_SpecialEvent::bForceGarbageCollectionAfterUnloadOnServer' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bForceGarbageCollectionAfterUnloadOnClient) == 0x0004F1, "Member 'AFortAthenaMutator_SpecialEvent::bForceGarbageCollectionAfterUnloadOnClient' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bFullPurgeGC) == 0x0004F2, "Member 'AFortAthenaMutator_SpecialEvent::bFullPurgeGC' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, EventAircraft) == 0x0004F8, "Member 'AFortAthenaMutator_SpecialEvent::EventAircraft' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, EventAircraftInfo) == 0x000500, "Member 'AFortAthenaMutator_SpecialEvent::EventAircraftInfo' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, EventAircraftClass) == 0x000548, "Member 'AFortAthenaMutator_SpecialEvent::EventAircraftClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, ScriptActor) == 0x000550, "Member 'AFortAthenaMutator_SpecialEvent::ScriptActor' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bDisableHUD) == 0x000558, "Member 'AFortAthenaMutator_SpecialEvent::bDisableHUD' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, GameResumed) == 0x000559, "Member 'AFortAthenaMutator_SpecialEvent::GameResumed' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, AdditionalViewpoint) == 0x000560, "Member 'AFortAthenaMutator_SpecialEvent::AdditionalViewpoint' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bParachutesDisabled) == 0x000578, "Member 'AFortAthenaMutator_SpecialEvent::bParachutesDisabled' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, LastCSVEventName) == 0x000580, "Member 'AFortAthenaMutator_SpecialEvent::LastCSVEventName' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bCanStreamBuildingFoundationsIn) == 0x000590, "Member 'AFortAthenaMutator_SpecialEvent::bCanStreamBuildingFoundationsIn' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, AllPlayerTeleportedCount) == 0x000594, "Member 'AFortAthenaMutator_SpecialEvent::AllPlayerTeleportedCount' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, DelayPlayersFromReturningToLobbyData) == 0x000598, "Member 'AFortAthenaMutator_SpecialEvent::DelayPlayersFromReturningToLobbyData' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, NamedWeightForContainerLootRoll) == 0x0005A8, "Member 'AFortAthenaMutator_SpecialEvent::NamedWeightForContainerLootRoll' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, WeightForContainerLootRoll) == 0x0005AC, "Member 'AFortAthenaMutator_SpecialEvent::WeightForContainerLootRoll' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, SpecialEventEmoteData) == 0x0005E0, "Member 'AFortAthenaMutator_SpecialEvent::SpecialEventEmoteData' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, BlockedNativeActions) == 0x0005F0, "Member 'AFortAthenaMutator_SpecialEvent::BlockedNativeActions' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, DesiredQuickbarItemTypeAfterRemove) == 0x000610, "Member 'AFortAthenaMutator_SpecialEvent::DesiredQuickbarItemTypeAfterRemove' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, SpecialEventsInputComponent) == 0x000618, "Member 'AFortAthenaMutator_SpecialEvent::SpecialEventsInputComponent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bLockingOnFocalPoint) == 0x000620, "Member 'AFortAthenaMutator_SpecialEvent::bLockingOnFocalPoint' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, SpecialEventOverrideParts) == 0x000628, "Member 'AFortAthenaMutator_SpecialEvent::SpecialEventOverrideParts' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, GameplayEffectToApplyOnSwapToDefault) == 0x000638, "Member 'AFortAthenaMutator_SpecialEvent::GameplayEffectToApplyOnSwapToDefault' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, OverridePartsArrayIndexMap) == 0x000648, "Member 'AFortAthenaMutator_SpecialEvent::OverridePartsArrayIndexMap' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, GameplayEffectsToApplyOnLogin) == 0x000698, "Member 'AFortAthenaMutator_SpecialEvent::GameplayEffectsToApplyOnLogin' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, TerrainMapsToUnload) == 0x0006A8, "Member 'AFortAthenaMutator_SpecialEvent::TerrainMapsToUnload' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, UnhandledPlayerControllers) == 0x0006C8, "Member 'AFortAthenaMutator_SpecialEvent::UnhandledPlayerControllers' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, HLODActorsToHideNames) == 0x0006D8, "Member 'AFortAthenaMutator_SpecialEvent::HLODActorsToHideNames' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bForceAllowCloth) == 0x0006E8, "Member 'AFortAthenaMutator_SpecialEvent::bForceAllowCloth' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bManageBackfill) == 0x0006EA, "Member 'AFortAthenaMutator_SpecialEvent::bManageBackfill' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, PlayerCountToTriggerBackfill) == 0x0006EC, "Member 'AFortAthenaMutator_SpecialEvent::PlayerCountToTriggerBackfill' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bWaitForPlayerCountToTriggerBackfill) == 0x0006F0, "Member 'AFortAthenaMutator_SpecialEvent::bWaitForPlayerCountToTriggerBackfill' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, UpdateBackfillStatusTime) == 0x0006F4, "Member 'AFortAthenaMutator_SpecialEvent::UpdateBackfillStatusTime' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bServerHasBackfillActive) == 0x000708, "Member 'AFortAthenaMutator_SpecialEvent::bServerHasBackfillActive' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, bCanToggleCursorModeInStasis) == 0x000709, "Member 'AFortAthenaMutator_SpecialEvent::bCanToggleCursorModeInStasis' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, MannequinRecentlyRenderedCheckToleranceValue) == 0x000710, "Member 'AFortAthenaMutator_SpecialEvent::MannequinRecentlyRenderedCheckToleranceValue' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, SpecialEventMannequins) == 0x000738, "Member 'AFortAthenaMutator_SpecialEvent::SpecialEventMannequins' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_SpecialEvent, ActorSpawnDelegateClasses) == 0x000748, "Member 'AFortAthenaMutator_SpecialEvent::ActorSpawnDelegateClasses' has a wrong offset!");

class UFortCameraMode_SpecialEventFocalPoint final : public UFortCameraMode_FocalPoint
{
public:
	float                                         OverrideTransitionTime;
	uint8                                         Pad_1B24[0xC];

public:
	void OnBecomeActiveBP(class AActor* ViewTarget);
	void OnBecomeInactiveBP(class AActor* ViewTarget);
	void SetOverrideTransitionTime(const float InTransitionTime);
	void UpdateCameraBP(class AActor* ViewTarget, float DeltaTime, struct FTViewTarget& OutVT);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraMode_SpecialEventFocalPoint">();
	}
	static class UFortCameraMode_SpecialEventFocalPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraMode_SpecialEventFocalPoint>();
	}
};
static_assert(alignof(UFortCameraMode_SpecialEventFocalPoint) == 0x000010, "Wrong alignment on UFortCameraMode_SpecialEventFocalPoint");
static_assert(sizeof(UFortCameraMode_SpecialEventFocalPoint) == 0x001B30, "Wrong size on UFortCameraMode_SpecialEventFocalPoint");
static_assert(offsetof(UFortCameraMode_SpecialEventFocalPoint, OverrideTransitionTime) == 0x001B20, "Member 'UFortCameraMode_SpecialEventFocalPoint::OverrideTransitionTime' has a wrong offset!");

class UFortCharacterMovementMutatorComponent final : public UActorComponent
{
public:
	class ACharacter*                             CharacterOwner;
	class UFortMovementComp_CharacterAthena*      MovementComponent;
	class UFortMovementComp_CharacterAthena*      CDOMovementComponent;
	uint8                                         Pad_B8[0x10];
	struct FScalableFloat                         BuffetBubblesMoveToBoxSpeed;
	struct FScalableFloat                         BuffetBubblesRelativeVelocityInterpSpeed;
	struct FScalableFloat                         BuffetBubblesLocationInterpSpeed;
	struct FScalableFloat                         BuffetBubblesRotationInterpSpeed;
	struct FScalableFloat                         BuffetBubblesMinRelativeX;
	struct FScalableFloat                         BuffetBubblesMaxRelativeX;
	struct FScalableFloat                         BuffetBubblesMinRelativeY;
	struct FScalableFloat                         BuffetBubblesMaxRelativeY;
	struct FScalableFloat                         BuffetBubblesMinRelativeZ;
	struct FScalableFloat                         BuffetBubblesMaxRelativeZ;
	struct FRotator                               BuffetBubblesRotationRate;
	struct FScalableFloat                         BuffetBubblesMaxAcceleration;
	struct FScalableFloat                         BuffetBubblesMaxRelativeSpeed;
	struct FScalableFloat                         BuffetBubblesRelativeDeceleration;
	struct FScalableFloat                         BuffetBubblesSphereRadius;
	class AActor*                                 BuffetBubblesFollowActor;
	struct FVector                                BuffetBubblesInitialFollowBoxOffsetPercent;
	uint8                                         Pad_330[0xE0];
	struct FBuffetBubblesReplicatedData           BuffetBubblesReplicatedData;
	uint8                                         Pad_490[0x280];
	struct FScalableFloat                         BuffetBubblesIntroSpeed;
	uint8                                         Pad_738[0x8];
	struct FTransform                             BuffetBubblesIntroTargetTransform;
	struct FScalableFloat                         BuffetFlyingMaxPitchDegrees;
	struct FScalableFloat                         BuffetFlyingMaxSpeed;
	struct FScalableFloat                         BuffetFlyingVelocityDirectionInterpSpeed;
	struct FRotator                               BuffetFlyingRotationRate;
	float                                         BuffetFlyingMaxSpeedOverride;
	float                                         BuffetFlyingMaxSpeedInterpSpeed;
	uint8                                         Pad_838[0x4];
	float                                         BuffetFlyingVelocityDirectionInterpSpeedOverride;
	struct FScalableFloat                         BuffetFlyingRicochetSphereSize;
	struct FScalableFloat                         BuffetFlyingRicochetRotationDuration;
	struct FScalableFloat                         BuffetFlyingRicochetControlRotationInterpSpeed;
	uint8                                         Pad_8B8[0x48];
	struct FBuffetFlyingRicochetReplicatedData    BuffetFlyingRicochetReplicatedData;

public:
	void OnMovementModeChanged(class ACharacter* Character, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void OnRep_BuffetBubblesFollowActor();
	void OnRep_BuffetFlyingRicochetReplicatedData();
	void OverrideBuffetFlyingMaxSpeed(const float Value, const bool bAsMultiplier, const float InterpSpeed);
	void OverrideBuffetFlyingVelocityDirectionInterpSpeed(const float Value, const bool bAsMultiplier);
	void SetBuffetBubblesFollowActor(class AActor* Actor);
	void SetBuffetBubblesInitialFollowBoxOffsetPercent(const struct FVector& BoxOffsetPercent);
	void SetBuffetBubblesIntroTargetTransform(const struct FTransform& Transform);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCharacterMovementMutatorComponent">();
	}
	static class UFortCharacterMovementMutatorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCharacterMovementMutatorComponent>();
	}
};
static_assert(alignof(UFortCharacterMovementMutatorComponent) == 0x000010, "Wrong alignment on UFortCharacterMovementMutatorComponent");
static_assert(sizeof(UFortCharacterMovementMutatorComponent) == 0x000920, "Wrong size on UFortCharacterMovementMutatorComponent");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, CharacterOwner) == 0x0000A0, "Member 'UFortCharacterMovementMutatorComponent::CharacterOwner' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, MovementComponent) == 0x0000A8, "Member 'UFortCharacterMovementMutatorComponent::MovementComponent' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, CDOMovementComponent) == 0x0000B0, "Member 'UFortCharacterMovementMutatorComponent::CDOMovementComponent' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMoveToBoxSpeed) == 0x0000C8, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMoveToBoxSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRelativeVelocityInterpSpeed) == 0x0000F0, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesRelativeVelocityInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesLocationInterpSpeed) == 0x000118, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesLocationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRotationInterpSpeed) == 0x000140, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMinRelativeX) == 0x000168, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMinRelativeX' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeX) == 0x000190, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeX' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMinRelativeY) == 0x0001B8, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMinRelativeY' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeY) == 0x0001E0, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeY' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMinRelativeZ) == 0x000208, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMinRelativeZ' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeZ) == 0x000230, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeZ' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRotationRate) == 0x000258, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesRotationRate' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxAcceleration) == 0x000270, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMaxAcceleration' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeSpeed) == 0x000298, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRelativeDeceleration) == 0x0002C0, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesRelativeDeceleration' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesSphereRadius) == 0x0002E8, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesSphereRadius' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesFollowActor) == 0x000310, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesFollowActor' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesInitialFollowBoxOffsetPercent) == 0x000318, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesInitialFollowBoxOffsetPercent' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesReplicatedData) == 0x000410, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesReplicatedData' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesIntroSpeed) == 0x000710, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesIntroSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesIntroTargetTransform) == 0x000740, "Member 'UFortCharacterMovementMutatorComponent::BuffetBubblesIntroTargetTransform' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxPitchDegrees) == 0x0007A0, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingMaxPitchDegrees' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeed) == 0x0007C8, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingMaxSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingVelocityDirectionInterpSpeed) == 0x0007F0, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingVelocityDirectionInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRotationRate) == 0x000818, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingRotationRate' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeedOverride) == 0x000830, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingMaxSpeedOverride' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeedInterpSpeed) == 0x000834, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingMaxSpeedInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingVelocityDirectionInterpSpeedOverride) == 0x00083C, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingVelocityDirectionInterpSpeedOverride' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetSphereSize) == 0x000840, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetSphereSize' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetRotationDuration) == 0x000868, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetRotationDuration' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetControlRotationInterpSpeed) == 0x000890, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetControlRotationInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetReplicatedData) == 0x000900, "Member 'UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetReplicatedData' has a wrong offset!");

class AFortCharacterMovementMutator final : public AFortAthenaMutator
{
public:
	TSubclassOf<class UFortCharacterMovementMutatorComponent> MovementMutatorComponentClass;

public:
	void OnFortPawnChanged(class AFortPawn* NewPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCharacterMovementMutator">();
	}
	static class AFortCharacterMovementMutator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortCharacterMovementMutator>();
	}
};
static_assert(alignof(AFortCharacterMovementMutator) == 0x000008, "Wrong alignment on AFortCharacterMovementMutator");
static_assert(sizeof(AFortCharacterMovementMutator) == 0x000338, "Wrong size on AFortCharacterMovementMutator");
static_assert(offsetof(AFortCharacterMovementMutator, MovementMutatorComponentClass) == 0x000330, "Member 'AFortCharacterMovementMutator::MovementMutatorComponentClass' has a wrong offset!");

class UFortControllerComponent_GameplayCinematic final : public UFortControllerComponent
{
public:
	uint8                                         Pad_A8[0x30];
	TMulticastInlineDelegate<void(class AFortPlayerControllerAthena* PlayerControllerAthena)> BP_OnStartGameplayOutro;
	TMulticastInlineDelegate<void(class AFortPlayerControllerAthena* PlayerControllerAthena)> BP_OnGameplayIntroFinished;
	bool                                          bIsReadyForGameplay;
	uint8                                         Pad_F9[0x7];

public:
	void HideHUDElementsForLoadingScreen(const bool bHideElements);
	void OnRep_bIsReadyForGameplay();
	void ServerOnGameplayIntroFinished();
	void SetReadyForGameplay(bool bIsReady);
	void ShowCinematicWidget(class FName WidgetName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_GameplayCinematic">();
	}
	static class UFortControllerComponent_GameplayCinematic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_GameplayCinematic>();
	}
};
static_assert(alignof(UFortControllerComponent_GameplayCinematic) == 0x000008, "Wrong alignment on UFortControllerComponent_GameplayCinematic");
static_assert(sizeof(UFortControllerComponent_GameplayCinematic) == 0x000100, "Wrong size on UFortControllerComponent_GameplayCinematic");
static_assert(offsetof(UFortControllerComponent_GameplayCinematic, BP_OnStartGameplayOutro) == 0x0000D8, "Member 'UFortControllerComponent_GameplayCinematic::BP_OnStartGameplayOutro' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_GameplayCinematic, BP_OnGameplayIntroFinished) == 0x0000E8, "Member 'UFortControllerComponent_GameplayCinematic::BP_OnGameplayIntroFinished' has a wrong offset!");
static_assert(offsetof(UFortControllerComponent_GameplayCinematic, bIsReadyForGameplay) == 0x0000F8, "Member 'UFortControllerComponent_GameplayCinematic::bIsReadyForGameplay' has a wrong offset!");

class UFortControllerComponent_SpecialEvent final : public UFortControllerComponent
{
public:
	TWeakObjectPtr<class AFortAthenaMutator_SpecialEvent> SpecialEventMutator;

public:
	void SendSpecialClientEvent(const struct FGameplayTag& EventTag, const int32 Count);
	void ServerHandleSpecialClientEvent(const struct FGameplayTag& EventTag, const int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortControllerComponent_SpecialEvent">();
	}
	static class UFortControllerComponent_SpecialEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortControllerComponent_SpecialEvent>();
	}
};
static_assert(alignof(UFortControllerComponent_SpecialEvent) == 0x000008, "Wrong alignment on UFortControllerComponent_SpecialEvent");
static_assert(sizeof(UFortControllerComponent_SpecialEvent) == 0x0000B0, "Wrong size on UFortControllerComponent_SpecialEvent");
static_assert(offsetof(UFortControllerComponent_SpecialEvent, SpecialEventMutator) == 0x0000A8, "Member 'UFortControllerComponent_SpecialEvent::SpecialEventMutator' has a wrong offset!");

class UFortCustomTickComponent final : public UActorComponent
{
public:
	EFortCustomTickComponentCondition             Condition;
	uint8                                         Pad_A1[0x3];
	struct FGameplayTag                           AuthorityQualitySettingsTag;
	struct FGameplayTag                           DefaultClientQualitySettingsTag;
	uint8                                         Pad_AC[0x4];
	TMap<ECommonPlatformType, struct FGameplayTag> ClientPlatformQualitySettingsTagMap;
	TMap<struct FGameplayTag, struct FCustomTickComonentQualitySettings> QualitySettingsMap;
	float                                         WasRecentlyRenderedTolerance;
	uint8                                         Pad_154[0x4];
	TMulticastInlineDelegate<void(class UFortCustomTickComponent* CustomTickComonent, float DeltaTime)> OnCustomTick;
	uint8                                         Pad_168[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCustomTickComponent">();
	}
	static class UFortCustomTickComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCustomTickComponent>();
	}
};
static_assert(alignof(UFortCustomTickComponent) == 0x000008, "Wrong alignment on UFortCustomTickComponent");
static_assert(sizeof(UFortCustomTickComponent) == 0x0001A0, "Wrong size on UFortCustomTickComponent");
static_assert(offsetof(UFortCustomTickComponent, Condition) == 0x0000A0, "Member 'UFortCustomTickComponent::Condition' has a wrong offset!");
static_assert(offsetof(UFortCustomTickComponent, AuthorityQualitySettingsTag) == 0x0000A4, "Member 'UFortCustomTickComponent::AuthorityQualitySettingsTag' has a wrong offset!");
static_assert(offsetof(UFortCustomTickComponent, DefaultClientQualitySettingsTag) == 0x0000A8, "Member 'UFortCustomTickComponent::DefaultClientQualitySettingsTag' has a wrong offset!");
static_assert(offsetof(UFortCustomTickComponent, ClientPlatformQualitySettingsTagMap) == 0x0000B0, "Member 'UFortCustomTickComponent::ClientPlatformQualitySettingsTagMap' has a wrong offset!");
static_assert(offsetof(UFortCustomTickComponent, QualitySettingsMap) == 0x000100, "Member 'UFortCustomTickComponent::QualitySettingsMap' has a wrong offset!");
static_assert(offsetof(UFortCustomTickComponent, WasRecentlyRenderedTolerance) == 0x000150, "Member 'UFortCustomTickComponent::WasRecentlyRenderedTolerance' has a wrong offset!");
static_assert(offsetof(UFortCustomTickComponent, OnCustomTick) == 0x000158, "Member 'UFortCustomTickComponent::OnCustomTick' has a wrong offset!");

class AFortSpecialRelevancyActorSpawner final : public AFortActorSpawner
{
public:
	uint8                                         Pad_2B8[0x8];

public:
	void BP_OnActorSpawnedPerRelevancyGroup(const TArray<class AActor*>& InSpawnedActors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortSpecialRelevancyActorSpawner">();
	}
	static class AFortSpecialRelevancyActorSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortSpecialRelevancyActorSpawner>();
	}
};
static_assert(alignof(AFortSpecialRelevancyActorSpawner) == 0x000008, "Wrong alignment on AFortSpecialRelevancyActorSpawner");
static_assert(sizeof(AFortSpecialRelevancyActorSpawner) == 0x0002C0, "Wrong size on AFortSpecialRelevancyActorSpawner");

class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{
public:
	float                                         CurrentTime;
	uint8                                         Pad_A4[0x4];
	class ULoudnessNRT*                           LoudnessNRT;
	class UOnsetNRT*                              OnsetNRT;
	class UConstantQNRT*                          ConstantQNRT;

public:
	void UpdateConstantQ(float Time);
	void UpdateLoudness(float Time);
	void UpdateOnset(float Time);
	void UpdateTime(const float NewTime);

	class UConstantQNRT* GetConstantQNRT() const;
	float GetCurrentNormalizedLoudness() const;
	class ULoudnessNRT* GetLoudnessNRT() const;
	class UOnsetNRT* GetOnsetNRT() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventAudioAnalysisBaseComponent">();
	}
	static class USpecialEventAudioAnalysisBaseComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventAudioAnalysisBaseComponent>();
	}
};
static_assert(alignof(USpecialEventAudioAnalysisBaseComponent) == 0x000008, "Wrong alignment on USpecialEventAudioAnalysisBaseComponent");
static_assert(sizeof(USpecialEventAudioAnalysisBaseComponent) == 0x0000C0, "Wrong size on USpecialEventAudioAnalysisBaseComponent");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, CurrentTime) == 0x0000A0, "Member 'USpecialEventAudioAnalysisBaseComponent::CurrentTime' has a wrong offset!");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, LoudnessNRT) == 0x0000A8, "Member 'USpecialEventAudioAnalysisBaseComponent::LoudnessNRT' has a wrong offset!");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, OnsetNRT) == 0x0000B0, "Member 'USpecialEventAudioAnalysisBaseComponent::OnsetNRT' has a wrong offset!");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, ConstantQNRT) == 0x0000B8, "Member 'USpecialEventAudioAnalysisBaseComponent::ConstantQNRT' has a wrong offset!");

class USpecialEventAudioHapticsComponent final : public USpecialEventAudioAnalysisBaseComponent
{
public:
	TArray<struct FSpecialEventAudioHapticsAction> HapticsActions;
	bool                                          bStartHapticsOnBeginPlay;
	uint8                                         Pad_D1[0x3];
	float                                         IntensityMultiplier;
	uint8                                         Pad_D8[0x10];

public:
	void StartHaptics();
	void StopHaptics();

	bool AreHapticsActive() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventAudioHapticsComponent">();
	}
	static class USpecialEventAudioHapticsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventAudioHapticsComponent>();
	}
};
static_assert(alignof(USpecialEventAudioHapticsComponent) == 0x000008, "Wrong alignment on USpecialEventAudioHapticsComponent");
static_assert(sizeof(USpecialEventAudioHapticsComponent) == 0x0000E8, "Wrong size on USpecialEventAudioHapticsComponent");
static_assert(offsetof(USpecialEventAudioHapticsComponent, HapticsActions) == 0x0000C0, "Member 'USpecialEventAudioHapticsComponent::HapticsActions' has a wrong offset!");
static_assert(offsetof(USpecialEventAudioHapticsComponent, bStartHapticsOnBeginPlay) == 0x0000D0, "Member 'USpecialEventAudioHapticsComponent::bStartHapticsOnBeginPlay' has a wrong offset!");
static_assert(offsetof(USpecialEventAudioHapticsComponent, IntensityMultiplier) == 0x0000D4, "Member 'USpecialEventAudioHapticsComponent::IntensityMultiplier' has a wrong offset!");

class USpecialEventCinematicCameraMode final : public UFortCinematicCamera
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventCinematicCameraMode">();
	}
	static class USpecialEventCinematicCameraMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventCinematicCameraMode>();
	}
};
static_assert(alignof(USpecialEventCinematicCameraMode) == 0x000008, "Wrong alignment on USpecialEventCinematicCameraMode");
static_assert(sizeof(USpecialEventCinematicCameraMode) == 0x000068, "Wrong size on USpecialEventCinematicCameraMode");

class ISpecialEventCursorInstigatorInterface final : public IInterface
{
public:
	bool SpecialEventCursorTrace(struct FHitResult* OutHitResult, class USpecialEventCursorPawnComponent* CursorPawnComponent, const struct FGameplayTag& CursorModeTag, const class UCameraComponent* CameraComponent, const struct FVector& CursorWorldDirection);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventCursorInstigatorInterface">();
	}
	static class ISpecialEventCursorInstigatorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISpecialEventCursorInstigatorInterface>();
	}
};
static_assert(alignof(ISpecialEventCursorInstigatorInterface) == 0x000008, "Wrong alignment on ISpecialEventCursorInstigatorInterface");
static_assert(sizeof(ISpecialEventCursorInstigatorInterface) == 0x000028, "Wrong size on ISpecialEventCursorInstigatorInterface");

class USpecialEventCursorPawnComponent final : public UPawnComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TMulticastInlineDelegate<void(class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible)> OnDesiredVisibilityChanged;
	bool                                          bAllowOnNonOwningClients;
	uint8                                         Pad_B9[0x7];
	class APawn*                                  OwningPawn;
	class AFortPlayerController*                  OwningController;
	uint8                                         Pad_D0[0x10];
	TMulticastInlineDelegate<void(class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag)> OnCursorModeChanged;
	struct FGameplayTag                           DefaultCursorModeTag;
	bool                                          bDefaultCursorModeAutoActivate;
	uint8                                         Pad_F5[0x3];
	TMap<struct FGameplayTag, struct FSpecialEventCursorMode> CursorModes;
	TArray<struct FSpecialEventCursorStackEntry>  CursorStack;
	struct FSpecialEventCursorStackEntry          ReplicatedCursorStackEntry;
	uint8                                         Pad_164[0x4];
	TSubclassOf<class USpecialEventInputHelperComponent> InputHelperClass;
	bool                                          bUseGamepadLookInput;
	bool                                          bUseGamepadMoveInput;
	bool                                          bUseGyroInput;
	bool                                          bObeyInvertedPitchUserSetting;
	uint8                                         Pad_174[0x4];
	class UCommonInputSubsystem*                  CommonInputSubsystem;
	class USpecialEventInputHelperComponent*      InputHelperComponent;
	uint8                                         Pad_188[0x38];
	TMulticastInlineDelegate<void(class USpecialEventCursorPawnComponent* CursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation)> OnViewportLocationChanged;
	struct FScalableFloat                         NonOwningInterpSpeed;
	struct FScalableFloat                         MinDeltaToSendWorldLocationToServer;
	uint8                                         Pad_220[0x8];
	struct FVector                                ReplicatedWorldLocation;
	uint8                                         Pad_240[0x50];
	TArray<class UUserWidget*>                    Widgets;
	uint8                                         Pad_2A0[0xE9];
	bool                                          bAdditiveRotationAllowedByDefault;
	uint8                                         Pad_38A[0x1];
	bool                                          bZoomAllowedByDefault;
	class FName                                   ZoomActionName;
	uint8                                         Pad_390[0x8];
	class UCameraComponent*                       AdditiveOffsetCameraComponent;
	uint8                                         Pad_3A0[0x8];

public:
	static class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(const class APawn* Pawn, const struct FGameplayTag& CursorModeTag, const bool bMustBeActive);

	bool GetCurrentHitResult(struct FHitResult* OutHitResult);
	void GyroInputUpdate(const struct FVector& InInputVector);
	void InputPressed(const class FName& ActionName, const bool bPressed);
	void LookInputUpdate(const struct FVector& InInputVector);
	void MoveInputUpdate(const struct FVector& InInputVector);
	void OnHUDPostRender(class AHUD* HUD, class UCanvas* Canvas);
	void OnInputMethodChanged(ECommonInputType InputType);
	void OnLocallyControlledCursorVisibilityChanged(class USpecialEventCursorPawnComponent* CursorPawnComponent, const struct FGameplayTag& CursorModeTag, const bool bShouldBeVisible);
	void OnRep_bAllowOnNonOwningClients();
	void OnRep_ReplicatedCursorStackEntry(const struct FSpecialEventCursorStackEntry& OldCursorStackEntry);
	void OnRep_ReplicatedWorldLocation();
	void PopAllCursorsForObject(class UObject* InstigatingObject, const bool bDeactivateIfStackEmpty);
	void PopCursor(const struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, const bool bDeactivateIfStackEmpty);
	void PushCursor(const struct FGameplayTag& CursorModeTag, class UObject* InstigatingObject, const bool bActivate);
	void ServerOnWorldLocationChanged(const struct FVector& WorldLocation);
	void SetAdditiveRotationAllowed(const bool bInAdditiveRotationAllowed);
	void SetAllowOnNonOwningClients(const bool bAllow);
	void SetZoomAllowed(const bool bInZoomAllowed);

	bool CanBeVisible() const;
	bool ConvertNormalizedToViewportLocation(struct FVector2D* OutViewportLocation, const struct FVector2D& NormalizedLocation) const;
	bool ConvertNormalizedToWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection, const struct FVector2D& NormalizedLocation) const;
	bool ConvertViewportToNormalizedLocation(struct FVector2D* OutNormalizedLocation, const struct FVector2D& ViewportLocation) const;
	bool ConvertViewportToWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection, const struct FVector2D& ViewportLocation) const;
	bool ConvertWorldToNormalizedLocation(struct FVector2D* OutNormalizedLocation, const struct FVector& WorldLocation) const;
	bool ConvertWorldToViewportLocation(struct FVector2D* OutViewportLocation, const struct FVector& WorldLocation) const;
	class UCameraComponent* GetCameraComponent() const;
	struct FVector2D GetCenteredWidgetLocation(class UUserWidget* Widget, const struct FVector2D& ViewportLocation) const;
	const struct FGameplayTag GetCurrentCursorModeTag() const;
	class UUserWidget* GetCurrentWidget() const;
	struct FGameplayTagContainer GetCursorModeTagsForWidget(const class UUserWidget* Widget) const;
	ECommonInputType GetInputType() const;
	class APlayerController* GetLocalController() const;
	struct FVector2D GetNormalizedLocation() const;
	bool GetViewportCenter(struct FVector2D* OutViewportCenter) const;
	bool GetViewportLocation(struct FVector2D* OutViewportLocation) const;
	bool GetViewportSize(struct FVector2D* OutViewportSize) const;
	bool GetWorldLocationAndDirection(struct FVector* OutWorldLocation, struct FVector* OutWorldDirection) const;
	bool IsAdditiveRotationAllowed() const;
	bool IsLocallyControlled() const;
	bool IsZoomAllowed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventCursorPawnComponent">();
	}
	static class USpecialEventCursorPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventCursorPawnComponent>();
	}
};
static_assert(alignof(USpecialEventCursorPawnComponent) == 0x000008, "Wrong alignment on USpecialEventCursorPawnComponent");
static_assert(sizeof(USpecialEventCursorPawnComponent) == 0x0003A8, "Wrong size on USpecialEventCursorPawnComponent");
static_assert(offsetof(USpecialEventCursorPawnComponent, OnDesiredVisibilityChanged) == 0x0000A8, "Member 'USpecialEventCursorPawnComponent::OnDesiredVisibilityChanged' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bAllowOnNonOwningClients) == 0x0000B8, "Member 'USpecialEventCursorPawnComponent::bAllowOnNonOwningClients' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, OwningPawn) == 0x0000C0, "Member 'USpecialEventCursorPawnComponent::OwningPawn' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, OwningController) == 0x0000C8, "Member 'USpecialEventCursorPawnComponent::OwningController' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, OnCursorModeChanged) == 0x0000E0, "Member 'USpecialEventCursorPawnComponent::OnCursorModeChanged' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, DefaultCursorModeTag) == 0x0000F0, "Member 'USpecialEventCursorPawnComponent::DefaultCursorModeTag' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bDefaultCursorModeAutoActivate) == 0x0000F4, "Member 'USpecialEventCursorPawnComponent::bDefaultCursorModeAutoActivate' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, CursorModes) == 0x0000F8, "Member 'USpecialEventCursorPawnComponent::CursorModes' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, CursorStack) == 0x000148, "Member 'USpecialEventCursorPawnComponent::CursorStack' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, ReplicatedCursorStackEntry) == 0x000158, "Member 'USpecialEventCursorPawnComponent::ReplicatedCursorStackEntry' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, InputHelperClass) == 0x000168, "Member 'USpecialEventCursorPawnComponent::InputHelperClass' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bUseGamepadLookInput) == 0x000170, "Member 'USpecialEventCursorPawnComponent::bUseGamepadLookInput' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bUseGamepadMoveInput) == 0x000171, "Member 'USpecialEventCursorPawnComponent::bUseGamepadMoveInput' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bUseGyroInput) == 0x000172, "Member 'USpecialEventCursorPawnComponent::bUseGyroInput' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bObeyInvertedPitchUserSetting) == 0x000173, "Member 'USpecialEventCursorPawnComponent::bObeyInvertedPitchUserSetting' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, CommonInputSubsystem) == 0x000178, "Member 'USpecialEventCursorPawnComponent::CommonInputSubsystem' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, InputHelperComponent) == 0x000180, "Member 'USpecialEventCursorPawnComponent::InputHelperComponent' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, OnViewportLocationChanged) == 0x0001C0, "Member 'USpecialEventCursorPawnComponent::OnViewportLocationChanged' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, NonOwningInterpSpeed) == 0x0001D0, "Member 'USpecialEventCursorPawnComponent::NonOwningInterpSpeed' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, MinDeltaToSendWorldLocationToServer) == 0x0001F8, "Member 'USpecialEventCursorPawnComponent::MinDeltaToSendWorldLocationToServer' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, ReplicatedWorldLocation) == 0x000228, "Member 'USpecialEventCursorPawnComponent::ReplicatedWorldLocation' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, Widgets) == 0x000290, "Member 'USpecialEventCursorPawnComponent::Widgets' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bAdditiveRotationAllowedByDefault) == 0x000389, "Member 'USpecialEventCursorPawnComponent::bAdditiveRotationAllowedByDefault' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, bZoomAllowedByDefault) == 0x00038B, "Member 'USpecialEventCursorPawnComponent::bZoomAllowedByDefault' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, ZoomActionName) == 0x00038C, "Member 'USpecialEventCursorPawnComponent::ZoomActionName' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorPawnComponent, AdditiveOffsetCameraComponent) == 0x000398, "Member 'USpecialEventCursorPawnComponent::AdditiveOffsetCameraComponent' has a wrong offset!");

class USpecialEventCursorWeaponComponent final : public UFortWeaponComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TMulticastInlineDelegate<void(class USpecialEventCursorPawnComponent* CursorPawnComponent, class AFortWeapon* Weapon)> OnCursorPawnComponentSet;
	TSubclassOf<class USpecialEventCursorPawnComponent> CursorPawnComponentClass;
	struct FGameplayTag                           CursorModeTag;
	bool                                          bAlignFXToCursor;
	uint8                                         Pad_C5[0x3];
	class AFortWeapon*                            OwningWeapon;
	class AFortPlayerPawn*                        Pawn;
	class USpecialEventCursorPawnComponent*       CursorPawnComponent;
	uint8                                         Pad_E0[0x58];

public:
	static class USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(const class AFortPlayerPawn* Pawn_0);
	static class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(const class AFortPlayerPawn* Pawn_0);
	static class USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(const class AFortWeapon* Weapon);

	void OnBeamFired(class AFortWeapon* Weapon, bool bUsePersistentBeam, class UFXSystemComponent* PSC, const struct FVector& BeamOrigin, const struct FVector& HitLocation);
	void OnEquip(class AFortWeapon* Weapon);
	void OnGetAimRotOverride(const class AFortWeapon* Weapon, const EFortAbilityTargetingSource TargetingSource, struct FRotator* OutOverride, bool* bOutExecutionResult);
	void OnPlayImpactFX(class AFortWeapon* Weapon, const struct FHitResult& HitResult, class UFXSystemComponent* FXSystemComponent);
	void OnRep_CursorPawnComponent();
	void OnUnEquip(class AFortWeapon* Weapon);

	bool GetCurrentHitResult(struct FHitResult* OutHitResult) const;
	class USpecialEventCursorPawnComponent* GetCursorPawnComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventCursorWeaponComponent">();
	}
	static class USpecialEventCursorWeaponComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventCursorWeaponComponent>();
	}
};
static_assert(alignof(USpecialEventCursorWeaponComponent) == 0x000008, "Wrong alignment on USpecialEventCursorWeaponComponent");
static_assert(sizeof(USpecialEventCursorWeaponComponent) == 0x000138, "Wrong size on USpecialEventCursorWeaponComponent");
static_assert(offsetof(USpecialEventCursorWeaponComponent, OnCursorPawnComponentSet) == 0x0000A8, "Member 'USpecialEventCursorWeaponComponent::OnCursorPawnComponentSet' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWeaponComponent, CursorPawnComponentClass) == 0x0000B8, "Member 'USpecialEventCursorWeaponComponent::CursorPawnComponentClass' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWeaponComponent, CursorModeTag) == 0x0000C0, "Member 'USpecialEventCursorWeaponComponent::CursorModeTag' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWeaponComponent, bAlignFXToCursor) == 0x0000C4, "Member 'USpecialEventCursorWeaponComponent::bAlignFXToCursor' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWeaponComponent, OwningWeapon) == 0x0000C8, "Member 'USpecialEventCursorWeaponComponent::OwningWeapon' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWeaponComponent, Pawn) == 0x0000D0, "Member 'USpecialEventCursorWeaponComponent::Pawn' has a wrong offset!");
static_assert(offsetof(USpecialEventCursorWeaponComponent, CursorPawnComponent) == 0x0000D8, "Member 'USpecialEventCursorWeaponComponent::CursorPawnComponent' has a wrong offset!");

class USpecialEventGameplayGlobals final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventGameplayGlobals">();
	}
	static class USpecialEventGameplayGlobals* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventGameplayGlobals>();
	}
};
static_assert(alignof(USpecialEventGameplayGlobals) == 0x000008, "Wrong alignment on USpecialEventGameplayGlobals");
static_assert(sizeof(USpecialEventGameplayGlobals) == 0x000028, "Wrong size on USpecialEventGameplayGlobals");

class USpecialEventGameplayLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void AddSpecialEventKillFeedEntry(const class UObject* WorldContextObject, const class AFortPlayerStateAthena* VictimPlayerState, const class AFortPlayerStateAthena* KillerPlayerState, const class FText& NonPlayerVictimName, const class FText& NonPlayerKillerName, const struct FGameplayTag& DeathCauseTag, const EDeathCauseReason DeathCauseReason, const float Distance);
	static void AddSpecialEventRecentElimination(const struct FVector& Location, const class AFortPlayerStateAthena* PlayerState);
	static bool AttachPawnToComponent(class AFortPawn* Pawn, class USceneComponent* Component, const class FName SocketName, const EAttachmentRule LocationRule, const EAttachmentRule RotationRule, const EAttachmentRule ScaleRule, const bool bWeldSimulatedBodies);
	static void CreateSpecialEventPlayerEliminationWorldMarker(const class AFortPlayerControllerAthena* LocalController, const class AFortPlayerStateAthena* VictimPlayerState, const struct FVector& DeathLocation);
	static bool DetachPawn(class AFortPawn* Pawn, const EDetachmentRule LocationRule, const EDetachmentRule RotationRule, const EDetachmentRule ScaleRule);
	static bool DetachPawnFromComponent(class AFortPawn* Pawn, const class USceneComponent* Component, const EDetachmentRule LocationRule, const EDetachmentRule RotationRule, const EDetachmentRule ScaleRule);
	static class UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(class AController* Controller);
	static class UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(class AController* Controller);
	static void ForceDestroyComponents(const TArray<class UActorComponent*>& Components, const bool bPromoteChildren, const class FString& LogContext);
	static void ForceUpdateGrass(class UObject* WorldContextObject, const struct FVector& Location);
	static bool GetHasInfiniteSafeZonePhase(class UObject* WorldContextObject);
	static struct FFortAthenaLoadout GetLocalPlayerLoadout(class UObject* WorldContextObject);
	static class AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(class UObject* WorldContextObject);
	static class FString GetSpecialEventPlayerDisplayName(const class AFortPlayerControllerAthena* LocalController, const class AFortPlayerStateAthena* PlayerState);
	static class ASpecialEventScript* GetSpecialEventScript(class UObject* WorldContextObject);
	static void HideSkydivingShadowProxy(const class UObject* WorldContextObject);
	static void SetLODOnLandscapProxies(class UObject* WorldContextObject, bool bForced, int32 InLODValue);
	static void SetNextLoadingScreen(class UObject* WorldContextObject, const class UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, const bool bCanShowLoadingBar);
	static void StreamOutAllBuildingFoundations(const class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventGameplayLibrary">();
	}
	static class USpecialEventGameplayLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventGameplayLibrary>();
	}
};
static_assert(alignof(USpecialEventGameplayLibrary) == 0x000008, "Wrong alignment on USpecialEventGameplayLibrary");
static_assert(sizeof(USpecialEventGameplayLibrary) == 0x000028, "Wrong size on USpecialEventGameplayLibrary");

class UFortAsyncAction_GameplayCinematicComponentReady final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class UFortControllerComponent_GameplayCinematic* FoundComponent)> OnReady;
	uint8                                         Pad_40[0x8];

public:
	static class UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(class AController* Conroller);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAsyncAction_GameplayCinematicComponentReady">();
	}
	static class UFortAsyncAction_GameplayCinematicComponentReady* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAsyncAction_GameplayCinematicComponentReady>();
	}
};
static_assert(alignof(UFortAsyncAction_GameplayCinematicComponentReady) == 0x000008, "Wrong alignment on UFortAsyncAction_GameplayCinematicComponentReady");
static_assert(sizeof(UFortAsyncAction_GameplayCinematicComponentReady) == 0x000048, "Wrong size on UFortAsyncAction_GameplayCinematicComponentReady");
static_assert(offsetof(UFortAsyncAction_GameplayCinematicComponentReady, OnReady) == 0x000030, "Member 'UFortAsyncAction_GameplayCinematicComponentReady::OnReady' has a wrong offset!");

class USpecialEventGameUserSettingsControllerComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(class USpecialEventGameUserSettingsControllerComponent* GameUserSettingsComponent)> OnLoaded;
	class FString                                 Version;
	float                                         MinTimeBetweenSaves;
	uint8                                         Pad_C4[0x24];

public:
	static class USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(const class UObject* WorldContextObject);

	void ParseLoadedData(const class FString& Data);
	void SetData(const class FString& Data, const bool bAllowSave, const bool bSaveNow);
	void SetSavingBlocked(const bool bBlocked);
	void SpecialEventGameUserSettings_ClearData();
	void SpecialEventGameUserSettings_SetData(const class FString& Data);
	void SpecialEventGameUserSettings_ToggleDebug();

	void GetData(ESpecialEventGameUserSettingsResult* outResult, class FString* OutData) const;
	void SpecialEventGameUserSettings_LogData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventGameUserSettingsControllerComponent">();
	}
	static class USpecialEventGameUserSettingsControllerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventGameUserSettingsControllerComponent>();
	}
};
static_assert(alignof(USpecialEventGameUserSettingsControllerComponent) == 0x000008, "Wrong alignment on USpecialEventGameUserSettingsControllerComponent");
static_assert(sizeof(USpecialEventGameUserSettingsControllerComponent) == 0x0000E8, "Wrong size on USpecialEventGameUserSettingsControllerComponent");
static_assert(offsetof(USpecialEventGameUserSettingsControllerComponent, OnLoaded) == 0x0000A0, "Member 'USpecialEventGameUserSettingsControllerComponent::OnLoaded' has a wrong offset!");
static_assert(offsetof(USpecialEventGameUserSettingsControllerComponent, Version) == 0x0000B0, "Member 'USpecialEventGameUserSettingsControllerComponent::Version' has a wrong offset!");
static_assert(offsetof(USpecialEventGameUserSettingsControllerComponent, MinTimeBetweenSaves) == 0x0000C0, "Member 'USpecialEventGameUserSettingsControllerComponent::MinTimeBetweenSaves' has a wrong offset!");

class UFortAsyncAction_SpecialEventGameUserSettingsReady final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class USpecialEventGameUserSettingsControllerComponent* GameUserSettingsControllerComponent)> OnReady;
	uint8                                         Pad_40[0x8];

public:
	static class UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(const class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAsyncAction_SpecialEventGameUserSettingsReady">();
	}
	static class UFortAsyncAction_SpecialEventGameUserSettingsReady* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAsyncAction_SpecialEventGameUserSettingsReady>();
	}
};
static_assert(alignof(UFortAsyncAction_SpecialEventGameUserSettingsReady) == 0x000008, "Wrong alignment on UFortAsyncAction_SpecialEventGameUserSettingsReady");
static_assert(sizeof(UFortAsyncAction_SpecialEventGameUserSettingsReady) == 0x000048, "Wrong size on UFortAsyncAction_SpecialEventGameUserSettingsReady");
static_assert(offsetof(UFortAsyncAction_SpecialEventGameUserSettingsReady, OnReady) == 0x000030, "Member 'UFortAsyncAction_SpecialEventGameUserSettingsReady::OnReady' has a wrong offset!");

class ASpecialEventPhase final : public AInfo
{
public:
	uint8                                         Pad_288[0x18];
	struct FGameplayTag                           PhaseTag;
	bool                                          bApplyGameplayEffects;
	uint8                                         Pad_2A5[0x3];
	TArray<TSubclassOf<class UGameplayEffect>>    GameplayEffectsToApply;
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToApplyInfoList;
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToApplyInfoList;
	TSubclassOf<class UCameraModifier>            CameraModifierToApply;
	bool                                          bRemoveModifierOnPhaseDeactivation;
	bool                                          bRemoveGameplayEffects;
	uint8                                         Pad_2E2[0x6];
	TArray<TSubclassOf<class UGameplayEffect>>    GameplayEffectsToRemove;
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToRemoveInfoList;
	TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToRemoveInfoList;
	class UCameraModifier*                        AppliedCameraModifier;
	ESpecialEventPhaseState                       PhaseState;
	uint8                                         Pad_321[0x7];

public:
	void DebugActivatePhase();
	void OnPhaseActivation_Client();
	void OnPhaseActivation_Server();
	void OnPhaseDeactivation_Client();
	void OnPhaseDeactivation_Server();
	void OnPhaseFinished();
	void OnRep_PhaseState();
	void PrePhaseActivation_Server();
	void SetHUDElementVisibility(const struct FGameplayTagContainer& HUDElementTags, bool bHideElements);

	struct FGameplayTag GetPhaseTag() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventPhase">();
	}
	static class ASpecialEventPhase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpecialEventPhase>();
	}
};
static_assert(alignof(ASpecialEventPhase) == 0x000008, "Wrong alignment on ASpecialEventPhase");
static_assert(sizeof(ASpecialEventPhase) == 0x000328, "Wrong size on ASpecialEventPhase");
static_assert(offsetof(ASpecialEventPhase, PhaseTag) == 0x0002A0, "Member 'ASpecialEventPhase::PhaseTag' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, bApplyGameplayEffects) == 0x0002A4, "Member 'ASpecialEventPhase::bApplyGameplayEffects' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, GameplayEffectsToApply) == 0x0002A8, "Member 'ASpecialEventPhase::GameplayEffectsToApply' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, ControllerComponentsToApplyInfoList) == 0x0002B8, "Member 'ASpecialEventPhase::ControllerComponentsToApplyInfoList' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, PawnComponentsToApplyInfoList) == 0x0002C8, "Member 'ASpecialEventPhase::PawnComponentsToApplyInfoList' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, CameraModifierToApply) == 0x0002D8, "Member 'ASpecialEventPhase::CameraModifierToApply' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, bRemoveModifierOnPhaseDeactivation) == 0x0002E0, "Member 'ASpecialEventPhase::bRemoveModifierOnPhaseDeactivation' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, bRemoveGameplayEffects) == 0x0002E1, "Member 'ASpecialEventPhase::bRemoveGameplayEffects' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, GameplayEffectsToRemove) == 0x0002E8, "Member 'ASpecialEventPhase::GameplayEffectsToRemove' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, ControllerComponentsToRemoveInfoList) == 0x0002F8, "Member 'ASpecialEventPhase::ControllerComponentsToRemoveInfoList' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, PawnComponentsToRemoveInfoList) == 0x000308, "Member 'ASpecialEventPhase::PawnComponentsToRemoveInfoList' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, AppliedCameraModifier) == 0x000318, "Member 'ASpecialEventPhase::AppliedCameraModifier' has a wrong offset!");
static_assert(offsetof(ASpecialEventPhase, PhaseState) == 0x000320, "Member 'ASpecialEventPhase::PhaseState' has a wrong offset!");

class ASpecialEventPlayerMannequin final : public AFortPlayerMannequin
{
public:
	uint8                                         bDisableCollisionOnBeginPlay : 1;
	uint8                                         bDisableComponentsTickOnServer : 1;
	uint8                                         bRegisterWithSpecialEventMutatorOnClient : 1;
	uint8                                         bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization : 1;
	uint8                                         Pad_5F9[0x7];

public:
	void DestroyUnusedSkeletalMeshComponents();
	void HandleOnMutatorAdded(class AFortGameplayMutator* NewMutator);
	void RegisterWithSpecialEventMutator();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventPlayerMannequin">();
	}
	static class ASpecialEventPlayerMannequin* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpecialEventPlayerMannequin>();
	}
};
static_assert(alignof(ASpecialEventPlayerMannequin) == 0x000008, "Wrong alignment on ASpecialEventPlayerMannequin");
static_assert(sizeof(ASpecialEventPlayerMannequin) == 0x000600, "Wrong size on ASpecialEventPlayerMannequin");

class USpecialEventRewindComponent : public UActorComponent
{
public:
	float                                         MaxRecordingDuration;
	float                                         LocalRecordingFPS;
	float                                         ReplicatedRecordingFPS;
	bool                                          bAutoStartRecording;
	uint8                                         Pad_AD[0x3];
	float                                         RewindLerpTime;
	float                                         DefaultRewindDuration;
	float                                         DefaultRewindPlaybackSpeed;
	struct FSpecialEventRewindComponentStateData  StateData;
	float                                         ReplicatedRewindDuration;

public:
	void OnRep_StateData(const struct FSpecialEventRewindComponentStateData& OldStateData);
	bool TryStartRewinding(const float Duration, const float PlaybackSpeed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventRewindComponent">();
	}
	static class USpecialEventRewindComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventRewindComponent>();
	}
};
static_assert(alignof(USpecialEventRewindComponent) == 0x000008, "Wrong alignment on USpecialEventRewindComponent");
static_assert(sizeof(USpecialEventRewindComponent) == 0x0000C8, "Wrong size on USpecialEventRewindComponent");
static_assert(offsetof(USpecialEventRewindComponent, MaxRecordingDuration) == 0x0000A0, "Member 'USpecialEventRewindComponent::MaxRecordingDuration' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, LocalRecordingFPS) == 0x0000A4, "Member 'USpecialEventRewindComponent::LocalRecordingFPS' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, ReplicatedRecordingFPS) == 0x0000A8, "Member 'USpecialEventRewindComponent::ReplicatedRecordingFPS' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, bAutoStartRecording) == 0x0000AC, "Member 'USpecialEventRewindComponent::bAutoStartRecording' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, RewindLerpTime) == 0x0000B0, "Member 'USpecialEventRewindComponent::RewindLerpTime' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, DefaultRewindDuration) == 0x0000B4, "Member 'USpecialEventRewindComponent::DefaultRewindDuration' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, DefaultRewindPlaybackSpeed) == 0x0000B8, "Member 'USpecialEventRewindComponent::DefaultRewindPlaybackSpeed' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, StateData) == 0x0000BC, "Member 'USpecialEventRewindComponent::StateData' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent, ReplicatedRewindDuration) == 0x0000C4, "Member 'USpecialEventRewindComponent::ReplicatedRewindDuration' has a wrong offset!");

class USpecialEventRewindComponent_PlayerPawn final : public USpecialEventRewindComponent
{
public:
	bool                                          bStartServerRecordingOnLastGroundFrame;
	uint8                                         Pad_C9[0x27];
	struct FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording;
	uint8                                         Pad_110[0x118];
	struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray;
	uint8                                         Pad_340[0x48];

public:
	void OnServerLanded(const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventRewindComponent_PlayerPawn">();
	}
	static class USpecialEventRewindComponent_PlayerPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventRewindComponent_PlayerPawn>();
	}
};
static_assert(alignof(USpecialEventRewindComponent_PlayerPawn) == 0x000008, "Wrong alignment on USpecialEventRewindComponent_PlayerPawn");
static_assert(sizeof(USpecialEventRewindComponent_PlayerPawn) == 0x000388, "Wrong size on USpecialEventRewindComponent_PlayerPawn");
static_assert(offsetof(USpecialEventRewindComponent_PlayerPawn, bStartServerRecordingOnLastGroundFrame) == 0x0000C8, "Member 'USpecialEventRewindComponent_PlayerPawn::bStartServerRecordingOnLastGroundFrame' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent_PlayerPawn, ReplicatedRecording) == 0x0000F0, "Member 'USpecialEventRewindComponent_PlayerPawn::ReplicatedRecording' has a wrong offset!");
static_assert(offsetof(USpecialEventRewindComponent_PlayerPawn, ReplicatedRecordingFastArray) == 0x000228, "Member 'USpecialEventRewindComponent_PlayerPawn::ReplicatedRecordingFastArray' has a wrong offset!");

class ASpecialEventScript final : public AInfo
{
public:
	TMulticastInlineDelegate<void(class ASpecialEventScript* SpecialEventScript, class ASpecialEventPhase* SpecialEventPhase)> OnSpecialEventPhaseActivated;
	TMulticastInlineDelegate<void(class ASpecialEventScript* SpecialEventScript, class ASpecialEventPhase* SpecialEventPhase)> OnSpecialEventPhaseDeactivated;
	TArray<struct FPhaseInfo>                     PhaseInfoArray;
	class ALevelSequenceActor*                    MasterSequence;
	float                                         DropDeadWindowSizeInSeconds;
	float                                         DelayAfterConentLoad;
	float                                         DelayAfterWarmup;
	float                                         ForceReturnToMainMenuTime;
	float                                         ForceReturnToMainMenuTimeRandomness;
	float                                         MinDelayReturnToMainMenu;
	float                                         MaxDelayReturnToMainMenu;
	bool                                          bPreloadAllLevelsOnServer;
	bool                                          bAllowGarbageCollectionAfterUnload;
	bool                                          bFullPurgeGC;
	uint8                                         Pad_2DF[0x1];
	int32                                         ReplicatedActivePhaseIndex;
	uint8                                         Pad_2E4[0xC];
	class UMeshNetworkComponent*                  MeshNetworkComponent;
	uint8                                         Pad_2F8[0x10];

public:
	void AttemptFinishPhase(const struct FGameplayTag& PhaseTag);
	void AttemptStartNextPhase(const struct FGameplayTag& CurrentPhaseTag);
	void BP_OnScriptFinished();
	void BP_OnScriptReady();
	void OnRep_ReplicatedActivePhaseIndex();
	void StartEventAtIndex(int32 InStartingIndex);
	void UpdateMasterSequence(float Time);

	int32 GetActivePhaseIndex() const;
	void SetLocalPlayersSignificantForSpecialEventSequence(const bool bIsSignificant) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventScript">();
	}
	static class ASpecialEventScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpecialEventScript>();
	}
};
static_assert(alignof(ASpecialEventScript) == 0x000008, "Wrong alignment on ASpecialEventScript");
static_assert(sizeof(ASpecialEventScript) == 0x000308, "Wrong size on ASpecialEventScript");
static_assert(offsetof(ASpecialEventScript, OnSpecialEventPhaseActivated) == 0x000288, "Member 'ASpecialEventScript::OnSpecialEventPhaseActivated' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, OnSpecialEventPhaseDeactivated) == 0x000298, "Member 'ASpecialEventScript::OnSpecialEventPhaseDeactivated' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, PhaseInfoArray) == 0x0002A8, "Member 'ASpecialEventScript::PhaseInfoArray' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, MasterSequence) == 0x0002B8, "Member 'ASpecialEventScript::MasterSequence' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, DropDeadWindowSizeInSeconds) == 0x0002C0, "Member 'ASpecialEventScript::DropDeadWindowSizeInSeconds' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, DelayAfterConentLoad) == 0x0002C4, "Member 'ASpecialEventScript::DelayAfterConentLoad' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, DelayAfterWarmup) == 0x0002C8, "Member 'ASpecialEventScript::DelayAfterWarmup' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, ForceReturnToMainMenuTime) == 0x0002CC, "Member 'ASpecialEventScript::ForceReturnToMainMenuTime' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, ForceReturnToMainMenuTimeRandomness) == 0x0002D0, "Member 'ASpecialEventScript::ForceReturnToMainMenuTimeRandomness' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, MinDelayReturnToMainMenu) == 0x0002D4, "Member 'ASpecialEventScript::MinDelayReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, MaxDelayReturnToMainMenu) == 0x0002D8, "Member 'ASpecialEventScript::MaxDelayReturnToMainMenu' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, bPreloadAllLevelsOnServer) == 0x0002DC, "Member 'ASpecialEventScript::bPreloadAllLevelsOnServer' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, bAllowGarbageCollectionAfterUnload) == 0x0002DD, "Member 'ASpecialEventScript::bAllowGarbageCollectionAfterUnload' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, bFullPurgeGC) == 0x0002DE, "Member 'ASpecialEventScript::bFullPurgeGC' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, ReplicatedActivePhaseIndex) == 0x0002E0, "Member 'ASpecialEventScript::ReplicatedActivePhaseIndex' has a wrong offset!");
static_assert(offsetof(ASpecialEventScript, MeshNetworkComponent) == 0x0002F0, "Member 'ASpecialEventScript::MeshNetworkComponent' has a wrong offset!");

class ASpecialEventScriptMeshActor final : public AInfo
{
public:
	struct FDateTime                              RootStartTime;
	class FString                                 CalendarEventName;
	float                                         CalenderEventOffsetInSeconds;
	float                                         EncryptionKeyDeliveryTimeOffset;
	uint8                                         Pad_2A8[0x8];
	class UMeshNetworkComponent*                  MeshNetworkComponent;

public:
	void MeshRootClearCalendarTimer();
	void MeshRootLogCalendarTimer();
	void MeshRootResetEvent();
	void MeshRootStartCalendarTimer();
	void MeshRootStartCalendarTimerOnly();
	void MeshRootStartEvent();
	void OnRep_RootStartTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventScriptMeshActor">();
	}
	static class ASpecialEventScriptMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpecialEventScriptMeshActor>();
	}
};
static_assert(alignof(ASpecialEventScriptMeshActor) == 0x000008, "Wrong alignment on ASpecialEventScriptMeshActor");
static_assert(sizeof(ASpecialEventScriptMeshActor) == 0x0002B8, "Wrong size on ASpecialEventScriptMeshActor");
static_assert(offsetof(ASpecialEventScriptMeshActor, RootStartTime) == 0x000288, "Member 'ASpecialEventScriptMeshActor::RootStartTime' has a wrong offset!");
static_assert(offsetof(ASpecialEventScriptMeshActor, CalendarEventName) == 0x000290, "Member 'ASpecialEventScriptMeshActor::CalendarEventName' has a wrong offset!");
static_assert(offsetof(ASpecialEventScriptMeshActor, CalenderEventOffsetInSeconds) == 0x0002A0, "Member 'ASpecialEventScriptMeshActor::CalenderEventOffsetInSeconds' has a wrong offset!");
static_assert(offsetof(ASpecialEventScriptMeshActor, EncryptionKeyDeliveryTimeOffset) == 0x0002A4, "Member 'ASpecialEventScriptMeshActor::EncryptionKeyDeliveryTimeOffset' has a wrong offset!");
static_assert(offsetof(ASpecialEventScriptMeshActor, MeshNetworkComponent) == 0x0002B0, "Member 'ASpecialEventScriptMeshActor::MeshNetworkComponent' has a wrong offset!");

class USpecialEventStatComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(struct FSpecialEventStatArrayEntry& Stat)> OnValueChangedDelegate;
	TArray<struct FSpecialEventStatDefinition>    StatDefinitions;
	struct FSpecialEventStatArray                 StatFastArray;

public:
	static void AdjustSpecialEventStat(class AActor* Actor, const struct FGameplayTag& LookupTag, const float Adjustment);
	static const struct FSpecialEventStatArrayEntry GetSpecialEventStat(bool* bOutValid, const class AActor* Actor, const struct FGameplayTag& LookupTag);

	bool AdjustStat(const struct FGameplayTag& LookupTag, const float Adjustment, const bool bLogError);
	const struct FSpecialEventStatArrayEntry GetStat(bool* bOutValid, const struct FGameplayTag& LookupTag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialEventStatComponent">();
	}
	static class USpecialEventStatComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialEventStatComponent>();
	}
};
static_assert(alignof(USpecialEventStatComponent) == 0x000008, "Wrong alignment on USpecialEventStatComponent");
static_assert(sizeof(USpecialEventStatComponent) == 0x0001E0, "Wrong size on USpecialEventStatComponent");
static_assert(offsetof(USpecialEventStatComponent, OnValueChangedDelegate) == 0x0000A0, "Member 'USpecialEventStatComponent::OnValueChangedDelegate' has a wrong offset!");
static_assert(offsetof(USpecialEventStatComponent, StatDefinitions) == 0x0000B0, "Member 'USpecialEventStatComponent::StatDefinitions' has a wrong offset!");
static_assert(offsetof(USpecialEventStatComponent, StatFastArray) == 0x0000C0, "Member 'USpecialEventStatComponent::StatFastArray' has a wrong offset!");

class UDamageRecordEntry final : public UObject
{
public:
	float                                         DamageTotal;
	float                                         EndReplicationTime;
	struct FGameplayTagContainer                  DamageTags;
	struct FGameplayEffectContextHandle           EffectContext;
	struct FGameplayCueParameters                 GameplayCueParams;
	uint8                                         Pad_138[0x10];

public:
	void OnRep_DamageTotal();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DamageRecordEntry">();
	}
	static class UDamageRecordEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageRecordEntry>();
	}
};
static_assert(alignof(UDamageRecordEntry) == 0x000008, "Wrong alignment on UDamageRecordEntry");
static_assert(sizeof(UDamageRecordEntry) == 0x000148, "Wrong size on UDamageRecordEntry");
static_assert(offsetof(UDamageRecordEntry, DamageTotal) == 0x000028, "Member 'UDamageRecordEntry::DamageTotal' has a wrong offset!");
static_assert(offsetof(UDamageRecordEntry, EndReplicationTime) == 0x00002C, "Member 'UDamageRecordEntry::EndReplicationTime' has a wrong offset!");
static_assert(offsetof(UDamageRecordEntry, DamageTags) == 0x000030, "Member 'UDamageRecordEntry::DamageTags' has a wrong offset!");
static_assert(offsetof(UDamageRecordEntry, EffectContext) == 0x000050, "Member 'UDamageRecordEntry::EffectContext' has a wrong offset!");
static_assert(offsetof(UDamageRecordEntry, GameplayCueParams) == 0x000068, "Member 'UDamageRecordEntry::GameplayCueParams' has a wrong offset!");

class USpecialRelevancyHealthComponent final : public USpecialRelevancyComponentBase
{
public:
	struct FScalableFloat                         RelevancyDeathTimeLength;
	bool                                          bSetLifespanOnLastRelevancyDeath;
	uint8                                         Pad_C9[0x3];
	float                                         OwnerMaxHealthCached;
	TArray<class UDamageRecordEntry*>             ReplicatedDamageRecords;
	TMulticastInlineDelegate<void(struct FGameplayTagContainer& DamageTags)> OnSpecialRelevancyDeath;
	TMulticastInlineDelegate<void(class AFortPlayerState* InstigatingPlayerState, struct FGameplayEffectContextHandle& EffectContext, struct FGameplayCueParameters& GameplayCueParams, int32 RelevancyGroupIndex, float DealtDamage, struct FGameplayTagContainer& DeathTags, bool bKilled)> OnSpecialRelevancyDamage;
	class AFortAthenaMutator_SpecialRelevancy*    CachedMutator;

public:
	void OnDamaged(const class AFortPlayerState* DamagingPlayerState, const int32 RelevancyGroupIndex, const float DealtDamage, const float ActualDealtDamage, const float TotalDamage, const float DealtDamagePercent, const float ActualDealtDamagePercent, const float TotalDamagePercent, const float MaxHealth, const bool bKilled);
	void OnKilled(const class AFortPlayerState* KillingPlayerState, const int32 RelevancyGroupIndex);

	float ClientGetHealth() const;
	float ClientGetHealthPercent() const;
	float GetHealth(const class AActor* RelevancyActor) const;
	float GetHealthFromRelevancyIndex(int32 Index_0) const;
	float GetHealthPercent(const class AActor* RelevancyActor) const;
	float GetHealthPercentFromRelevancyIndex(int32 Index_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpecialRelevancyHealthComponent">();
	}
	static class USpecialRelevancyHealthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpecialRelevancyHealthComponent>();
	}
};
static_assert(alignof(USpecialRelevancyHealthComponent) == 0x000008, "Wrong alignment on USpecialRelevancyHealthComponent");
static_assert(sizeof(USpecialRelevancyHealthComponent) == 0x000108, "Wrong size on USpecialRelevancyHealthComponent");
static_assert(offsetof(USpecialRelevancyHealthComponent, RelevancyDeathTimeLength) == 0x0000A0, "Member 'USpecialRelevancyHealthComponent::RelevancyDeathTimeLength' has a wrong offset!");
static_assert(offsetof(USpecialRelevancyHealthComponent, bSetLifespanOnLastRelevancyDeath) == 0x0000C8, "Member 'USpecialRelevancyHealthComponent::bSetLifespanOnLastRelevancyDeath' has a wrong offset!");
static_assert(offsetof(USpecialRelevancyHealthComponent, OwnerMaxHealthCached) == 0x0000CC, "Member 'USpecialRelevancyHealthComponent::OwnerMaxHealthCached' has a wrong offset!");
static_assert(offsetof(USpecialRelevancyHealthComponent, ReplicatedDamageRecords) == 0x0000D0, "Member 'USpecialRelevancyHealthComponent::ReplicatedDamageRecords' has a wrong offset!");
static_assert(offsetof(USpecialRelevancyHealthComponent, OnSpecialRelevancyDeath) == 0x0000E0, "Member 'USpecialRelevancyHealthComponent::OnSpecialRelevancyDeath' has a wrong offset!");
static_assert(offsetof(USpecialRelevancyHealthComponent, OnSpecialRelevancyDamage) == 0x0000F0, "Member 'USpecialRelevancyHealthComponent::OnSpecialRelevancyDamage' has a wrong offset!");
static_assert(offsetof(USpecialRelevancyHealthComponent, CachedMutator) == 0x000100, "Member 'USpecialRelevancyHealthComponent::CachedMutator' has a wrong offset!");

}
