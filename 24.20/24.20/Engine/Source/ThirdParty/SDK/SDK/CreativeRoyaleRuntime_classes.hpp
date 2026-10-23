#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteAI_classes.hpp"
#include "Engine_classes.hpp"
#include "CreativeRoyaleRuntime_structs.hpp"
#include "PlayspaceSystem_classes.hpp"

namespace SDK
{

class ACreativeRoyaleIslandPlayspace final : public AFortPlayspace
{
public:
	class UFortProjectEditComponent_CreativeRoyale* ProjectEditComponent;
	class UPlayspaceComponent_PlayStopPauseManager* PlayStopPauseManager;
	class UPlayspaceComponent_CreativeLoadingStateProxy* CreativeLoadingStateProxy;
	class UPlayspaceComponent_SpatialGameplay*    SpatialGameplayComponent;
	class UFortVolumeObjectTrackingComponent*     ObjectTrackingComponent;
	class UPlayspaceComponent_DeviceTracking*     DeviceTrackerComponent;
	class UPlayspaceComponent_CreativeModifyEmotes* CreativeModifyEmotesComponent;
	class UFortPlayspaceComponent_WorldTimeOfDayOverride* WorldTimeOfDayOverrideComponent;
	class UCreativeRoyalePlayspaceComponent_LoadingScreen* LoadingScreenComponent;
	class UFortPoiSwapManager*                    FortPoiSwapManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeRoyaleIslandPlayspace">();
	}
	static class ACreativeRoyaleIslandPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeRoyaleIslandPlayspace>();
	}
};
static_assert(alignof(ACreativeRoyaleIslandPlayspace) == 0x000008, "Wrong alignment on ACreativeRoyaleIslandPlayspace");
static_assert(sizeof(ACreativeRoyaleIslandPlayspace) == 0x0006C0, "Wrong size on ACreativeRoyaleIslandPlayspace");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, ProjectEditComponent) == 0x000670, "Member 'ACreativeRoyaleIslandPlayspace::ProjectEditComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, PlayStopPauseManager) == 0x000678, "Member 'ACreativeRoyaleIslandPlayspace::PlayStopPauseManager' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, CreativeLoadingStateProxy) == 0x000680, "Member 'ACreativeRoyaleIslandPlayspace::CreativeLoadingStateProxy' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, SpatialGameplayComponent) == 0x000688, "Member 'ACreativeRoyaleIslandPlayspace::SpatialGameplayComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, ObjectTrackingComponent) == 0x000690, "Member 'ACreativeRoyaleIslandPlayspace::ObjectTrackingComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, DeviceTrackerComponent) == 0x000698, "Member 'ACreativeRoyaleIslandPlayspace::DeviceTrackerComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, CreativeModifyEmotesComponent) == 0x0006A0, "Member 'ACreativeRoyaleIslandPlayspace::CreativeModifyEmotesComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, WorldTimeOfDayOverrideComponent) == 0x0006A8, "Member 'ACreativeRoyaleIslandPlayspace::WorldTimeOfDayOverrideComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, LoadingScreenComponent) == 0x0006B0, "Member 'ACreativeRoyaleIslandPlayspace::LoadingScreenComponent' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleIslandPlayspace, FortPoiSwapManager) == 0x0006B8, "Member 'ACreativeRoyaleIslandPlayspace::FortPoiSwapManager' has a wrong offset!");

class UFortPoiSwapManager final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x50];
	class UFortCreativeRealEstatePlotItemDefinition* PoiPlotDefinition;
	struct FVector                                PoiPlotLocationOffset;

public:
	void SwapPoi(const class AFortPoiVolume* PoiToSwap);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPoiSwapManager">();
	}
	static class UFortPoiSwapManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPoiSwapManager>();
	}
};
static_assert(alignof(UFortPoiSwapManager) == 0x000008, "Wrong alignment on UFortPoiSwapManager");
static_assert(sizeof(UFortPoiSwapManager) == 0x000110, "Wrong size on UFortPoiSwapManager");
static_assert(offsetof(UFortPoiSwapManager, PoiPlotDefinition) == 0x0000F0, "Member 'UFortPoiSwapManager::PoiPlotDefinition' has a wrong offset!");
static_assert(offsetof(UFortPoiSwapManager, PoiPlotLocationOffset) == 0x0000F8, "Member 'UFortPoiSwapManager::PoiPlotLocationOffset' has a wrong offset!");

class AFortPoiSwapPlayspace final : public AFortPlayspace
{
public:
	class USceneComponent*                        SceneComponent;
	class UFortLevelSaveComponent*                LevelSaveComponent;
	class UPlaysetLevelStreamComponent*           PlaysetLevelStreamComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPoiSwapPlayspace">();
	}
	static class AFortPoiSwapPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortPoiSwapPlayspace>();
	}
};
static_assert(alignof(AFortPoiSwapPlayspace) == 0x000008, "Wrong alignment on AFortPoiSwapPlayspace");
static_assert(sizeof(AFortPoiSwapPlayspace) == 0x000688, "Wrong size on AFortPoiSwapPlayspace");
static_assert(offsetof(AFortPoiSwapPlayspace, SceneComponent) == 0x000670, "Member 'AFortPoiSwapPlayspace::SceneComponent' has a wrong offset!");
static_assert(offsetof(AFortPoiSwapPlayspace, LevelSaveComponent) == 0x000678, "Member 'AFortPoiSwapPlayspace::LevelSaveComponent' has a wrong offset!");
static_assert(offsetof(AFortPoiSwapPlayspace, PlaysetLevelStreamComponent) == 0x000680, "Member 'AFortPoiSwapPlayspace::PlaysetLevelStreamComponent' has a wrong offset!");

class UAthenaAIServicePlayerBots_CreativeRoyale final : public UAthenaAIServiceCreativePlayerBots
{
public:
	struct FScalableFloat                         PlayerBotsEnabled;

public:
	void OnPlayerJoiningInProgress(const class AFortPlayerState* FortPlayerState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaAIServicePlayerBots_CreativeRoyale">();
	}
	static class UAthenaAIServicePlayerBots_CreativeRoyale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaAIServicePlayerBots_CreativeRoyale>();
	}
};
static_assert(alignof(UAthenaAIServicePlayerBots_CreativeRoyale) == 0x000010, "Wrong alignment on UAthenaAIServicePlayerBots_CreativeRoyale");
static_assert(sizeof(UAthenaAIServicePlayerBots_CreativeRoyale) == 0x0012E0, "Wrong size on UAthenaAIServicePlayerBots_CreativeRoyale");
static_assert(offsetof(UAthenaAIServicePlayerBots_CreativeRoyale, PlayerBotsEnabled) == 0x0012B8, "Member 'UAthenaAIServicePlayerBots_CreativeRoyale::PlayerBotsEnabled' has a wrong offset!");

class UCreativeRoyalePlayspaceComponent_LevelReset final : public UPlayspaceComponent
{
public:
	TWeakObjectPtr<class ULevelSaveRecord>        CachedLevelSaveRecord;
	bool                                          bSpawnFromGameplay;
	uint8                                         Pad_A9[0x7];
	TArray<TWeakObjectPtr<class AActor>>          SavedFoundActors;
	TMap<TWeakObjectPtr<class AActor>, struct FSpawnBuildingActorParameters> SavedDeadActors;
	TArray<TWeakObjectPtr<class AActor>>          SavedDamagedActors;
	TArray<TWeakObjectPtr<class AActor>>          FoundActorsDied;
	TArray<struct FGuid>                          FoundActorsDiedGuid;
	TArray<TWeakObjectPtr<class AActor>>          FoundActorsDamaged;
	TArray<struct FGuid>                          FoundActorsDamagedGuid;
	uint8                                         Pad_160[0x18];

public:
	void AddFoundActors();
	void BindActorToCallbacks(class AActor* Actor);
	void ClearFoundActors();
	void DestroyDamagedActors();
	void HandleBuildingDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleBuildingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void HandleMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
	void OnPlotLoadComplete();
	void OnSpawningFromSaveFinish();
	void RespawnDeadActors();
	void SaveActorToBeRespawned(class AActor* ActorToBeRespawned, const bool bRemoveDamagedActor);
	void SaveDamagedActor(class AActor* DamagedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeRoyalePlayspaceComponent_LevelReset">();
	}
	static class UCreativeRoyalePlayspaceComponent_LevelReset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeRoyalePlayspaceComponent_LevelReset>();
	}
};
static_assert(alignof(UCreativeRoyalePlayspaceComponent_LevelReset) == 0x000008, "Wrong alignment on UCreativeRoyalePlayspaceComponent_LevelReset");
static_assert(sizeof(UCreativeRoyalePlayspaceComponent_LevelReset) == 0x000178, "Wrong size on UCreativeRoyalePlayspaceComponent_LevelReset");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, CachedLevelSaveRecord) == 0x0000A0, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::CachedLevelSaveRecord' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, bSpawnFromGameplay) == 0x0000A8, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::bSpawnFromGameplay' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, SavedFoundActors) == 0x0000B0, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::SavedFoundActors' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, SavedDeadActors) == 0x0000C0, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::SavedDeadActors' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, SavedDamagedActors) == 0x000110, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::SavedDamagedActors' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, FoundActorsDied) == 0x000120, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::FoundActorsDied' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, FoundActorsDiedGuid) == 0x000130, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::FoundActorsDiedGuid' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, FoundActorsDamaged) == 0x000140, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::FoundActorsDamaged' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LevelReset, FoundActorsDamagedGuid) == 0x000150, "Member 'UCreativeRoyalePlayspaceComponent_LevelReset::FoundActorsDamagedGuid' has a wrong offset!");

class UCreativeRoyalePlayspaceComponent_LoadingScreen final : public UPlayspaceComponent_LoadingScreen
{
public:
	bool                                          bShouldDisplayLoadingScreenDuringPostGame;
	uint8                                         Pad_A1[0x7];
	class FText                                   PlotNotFinishedLoadingContext;
	class FText                                   MinigameResetContext;
	uint8                                         Pad_D8[0x18];
	struct FScalableFloat                         FailsafeTimeoutLength;
	uint8                                         Pad_118[0x10];

public:
	void OnMinigameStateChanged(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void OnPlayspaceUserAdded(struct FPlayspaceUser* AddedUser);
	void OnPlotLoadComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeRoyalePlayspaceComponent_LoadingScreen">();
	}
	static class UCreativeRoyalePlayspaceComponent_LoadingScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeRoyalePlayspaceComponent_LoadingScreen>();
	}
};
static_assert(alignof(UCreativeRoyalePlayspaceComponent_LoadingScreen) == 0x000008, "Wrong alignment on UCreativeRoyalePlayspaceComponent_LoadingScreen");
static_assert(sizeof(UCreativeRoyalePlayspaceComponent_LoadingScreen) == 0x000128, "Wrong size on UCreativeRoyalePlayspaceComponent_LoadingScreen");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LoadingScreen, bShouldDisplayLoadingScreenDuringPostGame) == 0x0000A0, "Member 'UCreativeRoyalePlayspaceComponent_LoadingScreen::bShouldDisplayLoadingScreenDuringPostGame' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LoadingScreen, PlotNotFinishedLoadingContext) == 0x0000A8, "Member 'UCreativeRoyalePlayspaceComponent_LoadingScreen::PlotNotFinishedLoadingContext' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LoadingScreen, MinigameResetContext) == 0x0000C0, "Member 'UCreativeRoyalePlayspaceComponent_LoadingScreen::MinigameResetContext' has a wrong offset!");
static_assert(offsetof(UCreativeRoyalePlayspaceComponent_LoadingScreen, FailsafeTimeoutLength) == 0x0000F0, "Member 'UCreativeRoyalePlayspaceComponent_LoadingScreen::FailsafeTimeoutLength' has a wrong offset!");

class UCreativeRoyalePlayspaceComponent_PlayerSpawning final : public UFortPlayspaceComponent_PlayerSpawning
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeRoyalePlayspaceComponent_PlayerSpawning">();
	}
	static class UCreativeRoyalePlayspaceComponent_PlayerSpawning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreativeRoyalePlayspaceComponent_PlayerSpawning>();
	}
};
static_assert(alignof(UCreativeRoyalePlayspaceComponent_PlayerSpawning) == 0x000008, "Wrong alignment on UCreativeRoyalePlayspaceComponent_PlayerSpawning");
static_assert(sizeof(UCreativeRoyalePlayspaceComponent_PlayerSpawning) == 0x0000B0, "Wrong size on UCreativeRoyalePlayspaceComponent_PlayerSpawning");

class ACreativeRoyaleRootPlayspace final : public AFortPlayspace
{
public:
	uint8                                         Pad_670[0x18];
	class AFortPlayerControllerAthena*            EditorIslandOwnerPlayerController;
	uint8                                         Pad_690[0x8];
	bool                                          bHasPlotLoaded;
	uint8                                         Pad_699[0xF];

public:
	void Cheat_LoadEditorIsland();
	void OnPlotLoadComplete();
	void OnRep_bHasPlotLoaded();
	void TeleportPlayersToPlayerStarts();

	bool BuildDataRegistryResolverScope_Implementation(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreativeRoyaleRootPlayspace">();
	}
	static class ACreativeRoyaleRootPlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreativeRoyaleRootPlayspace>();
	}
};
static_assert(alignof(ACreativeRoyaleRootPlayspace) == 0x000008, "Wrong alignment on ACreativeRoyaleRootPlayspace");
static_assert(sizeof(ACreativeRoyaleRootPlayspace) == 0x0006A8, "Wrong size on ACreativeRoyaleRootPlayspace");
static_assert(offsetof(ACreativeRoyaleRootPlayspace, EditorIslandOwnerPlayerController) == 0x000688, "Member 'ACreativeRoyaleRootPlayspace::EditorIslandOwnerPlayerController' has a wrong offset!");
static_assert(offsetof(ACreativeRoyaleRootPlayspace, bHasPlotLoaded) == 0x000698, "Member 'ACreativeRoyaleRootPlayspace::bHasPlotLoaded' has a wrong offset!");

class AFortAthenaMutator_CreativeRoyaleSafeZoneOverride final : public AFortAthenaMutator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_CreativeRoyaleSafeZoneOverride">();
	}
	static class AFortAthenaMutator_CreativeRoyaleSafeZoneOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_CreativeRoyaleSafeZoneOverride>();
	}
};
static_assert(alignof(AFortAthenaMutator_CreativeRoyaleSafeZoneOverride) == 0x000008, "Wrong alignment on AFortAthenaMutator_CreativeRoyaleSafeZoneOverride");
static_assert(sizeof(AFortAthenaMutator_CreativeRoyaleSafeZoneOverride) == 0x000330, "Wrong size on AFortAthenaMutator_CreativeRoyaleSafeZoneOverride");

class UFortCheatManager_CreativeRoyale final : public UFortCheatManager_Coupled
{
public:
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition;
	struct FGameplayTag                           CreativeRoyaleVolumeTag;
	uint8                                         Pad_44[0x4];

public:
	void CreativeRoyaleLoadEditPlot() const;
	void CreativeRoyaleResetIslandFile() const;
	void CreativeRoyaleTeleportToEditZone() const;
	void TeleportToPlotAferLoad() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_CreativeRoyale">();
	}
	static class UFortCheatManager_CreativeRoyale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_CreativeRoyale>();
	}
};
static_assert(alignof(UFortCheatManager_CreativeRoyale) == 0x000008, "Wrong alignment on UFortCheatManager_CreativeRoyale");
static_assert(sizeof(UFortCheatManager_CreativeRoyale) == 0x000048, "Wrong size on UFortCheatManager_CreativeRoyale");
static_assert(offsetof(UFortCheatManager_CreativeRoyale, CreativeRoyaleEditPlotDefinition) == 0x000038, "Member 'UFortCheatManager_CreativeRoyale::CreativeRoyaleEditPlotDefinition' has a wrong offset!");
static_assert(offsetof(UFortCheatManager_CreativeRoyale, CreativeRoyaleVolumeTag) == 0x000040, "Member 'UFortCheatManager_CreativeRoyale::CreativeRoyaleVolumeTag' has a wrong offset!");

class UFortProjectEditComponent_CreativeRoyale final : public UFortProjectEditComponent
{
public:
	uint8                                         Pad_500[0x8];
	class UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition;

public:
	void LoadPlotFromProject();
	void OnPlayerLoggedIn(class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortProjectEditComponent_CreativeRoyale">();
	}
	static class UFortProjectEditComponent_CreativeRoyale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortProjectEditComponent_CreativeRoyale>();
	}
};
static_assert(alignof(UFortProjectEditComponent_CreativeRoyale) == 0x000010, "Wrong alignment on UFortProjectEditComponent_CreativeRoyale");
static_assert(sizeof(UFortProjectEditComponent_CreativeRoyale) == 0x000510, "Wrong size on UFortProjectEditComponent_CreativeRoyale");
static_assert(offsetof(UFortProjectEditComponent_CreativeRoyale, CreativeRoyaleEditPlotDefinition) == 0x000508, "Member 'UFortProjectEditComponent_CreativeRoyale::CreativeRoyaleEditPlotDefinition' has a wrong offset!");

}
