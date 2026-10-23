#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

class FortGameModeAthena
{
private:
	static inline TArray<UFortAbilitySet*> AbilitySets;
	static inline uint8_t CurrentTeam = 3;
	static inline uint8_t PlayersOnCurTeam = 0;

	static void ApplyPlaylist(AFortGameModeAthena* GameMode, UFortPlaylistAthena* Playlist);
	static void BeginPlaylistSetup(AFortGameModeAthena* GameMode, AFortGameStateAthena* GameState, UFortPlaylistAthena* Playlist);
	static bool PrepareWorld(AFortGameModeAthena* GameMode, AFortGameStateAthena* GameState, UFortPlaylistAthena* Playlist);
	static void RegisterLootTables(UFortPlaylistAthena* Playlist);
	static void FlattenSafeZoneDamage(AFortGameStateAthena* GameState);
	static void SetupConversationProps();
	static void GiveLateGameLoadout(AFortPlayerController* PlayerController);
	static void InitializeNewPlayer(AFortPlayerController* PlayerController, APawn* Pawn);

	DefUHookOgRet(bool, ReadyToStartMatch);
	static APawn* SpawnDefaultPawnFor(UObject* Context, FFrame& Stack, APawn** Result);
	DefHookOg(EFortTeam, PickTeam, AFortGameModeAthena*, uint8_t, AFortPlayerControllerAthena*);
	DefUHookOg(HandleStartingNewPlayer);
	DefUHookOg(OnAircraftExitedDropZone);

	InitHooks;
};
