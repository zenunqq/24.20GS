#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "ModularGameplay_classes.hpp"
#include "PlayspaceSystem_structs.hpp"
#include "GameFeatures_classes.hpp"

namespace SDK
{

class UOverlapComponent : public UStaticMeshComponent
{
public:
	uint8                                         Pad_620[0x20];

public:
	void OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OverlapComponent">();
	}
	static class UOverlapComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOverlapComponent>();
	}
};
static_assert(alignof(UOverlapComponent) == 0x000010, "Wrong alignment on UOverlapComponent");
static_assert(sizeof(UOverlapComponent) == 0x000640, "Wrong size on UOverlapComponent");

class UPlayspaceComponent : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent">();
	}
	static class UPlayspaceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent>();
	}
};
static_assert(alignof(UPlayspaceComponent) == 0x000008, "Wrong alignment on UPlayspaceComponent");
static_assert(sizeof(UPlayspaceComponent) == 0x0000A0, "Wrong size on UPlayspaceComponent");

class UPlayspaceComponent_PlayerSpawning : public UPlayspaceComponent
{
public:
	bool                                          bQueueUserForSpawnWhenAdded;
	uint8                                         Pad_A1[0x3];
	float                                         SpawnDelayMin;
	float                                         SpawnDelayMax;
	uint8                                         Pad_AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_PlayerSpawning">();
	}
	static class UPlayspaceComponent_PlayerSpawning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_PlayerSpawning>();
	}
};
static_assert(alignof(UPlayspaceComponent_PlayerSpawning) == 0x000008, "Wrong alignment on UPlayspaceComponent_PlayerSpawning");
static_assert(sizeof(UPlayspaceComponent_PlayerSpawning) == 0x0000B0, "Wrong size on UPlayspaceComponent_PlayerSpawning");
static_assert(offsetof(UPlayspaceComponent_PlayerSpawning, bQueueUserForSpawnWhenAdded) == 0x0000A0, "Member 'UPlayspaceComponent_PlayerSpawning::bQueueUserForSpawnWhenAdded' has a wrong offset!");
static_assert(offsetof(UPlayspaceComponent_PlayerSpawning, SpawnDelayMin) == 0x0000A4, "Member 'UPlayspaceComponent_PlayerSpawning::SpawnDelayMin' has a wrong offset!");
static_assert(offsetof(UPlayspaceComponent_PlayerSpawning, SpawnDelayMax) == 0x0000A8, "Member 'UPlayspaceComponent_PlayerSpawning::SpawnDelayMax' has a wrong offset!");

class UPlayspaceComponent_VoiceManager final : public UPlayspaceComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceComponent_VoiceManager">();
	}
	static class UPlayspaceComponent_VoiceManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponent_VoiceManager>();
	}
};
static_assert(alignof(UPlayspaceComponent_VoiceManager) == 0x000008, "Wrong alignment on UPlayspaceComponent_VoiceManager");
static_assert(sizeof(UPlayspaceComponent_VoiceManager) == 0x0000A0, "Wrong size on UPlayspaceComponent_VoiceManager");

class UPlayspaceControllerComponent_PlayerSpawning final : public UControllerComponent
{
public:
	TMulticastInlineDelegate<void(class APlayerController* Controller, struct FReplicatedSpawnInfo& SpawnInfo)> OnPlayerQueuedToSpawn;
	class ACameraActor*                           SpawnCameraActor;
	bool                                          bClientReadyForSpawning;
	uint8                                         Pad_B9[0x7];
	struct FReplicatedSpawnInfo                   ReplicatedSpawnInfo;

public:
	void OnRep_ReplicatedSpawnInfo();
	void ServerMarkReadyForSpawning();

	const struct FReplicatedSpawnInfo GetSpawnInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceControllerComponent_PlayerSpawning">();
	}
	static class UPlayspaceControllerComponent_PlayerSpawning* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceControllerComponent_PlayerSpawning>();
	}
};
static_assert(alignof(UPlayspaceControllerComponent_PlayerSpawning) == 0x000008, "Wrong alignment on UPlayspaceControllerComponent_PlayerSpawning");
static_assert(sizeof(UPlayspaceControllerComponent_PlayerSpawning) == 0x000118, "Wrong size on UPlayspaceControllerComponent_PlayerSpawning");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, OnPlayerQueuedToSpawn) == 0x0000A0, "Member 'UPlayspaceControllerComponent_PlayerSpawning::OnPlayerQueuedToSpawn' has a wrong offset!");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, SpawnCameraActor) == 0x0000B0, "Member 'UPlayspaceControllerComponent_PlayerSpawning::SpawnCameraActor' has a wrong offset!");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, bClientReadyForSpawning) == 0x0000B8, "Member 'UPlayspaceControllerComponent_PlayerSpawning::bClientReadyForSpawning' has a wrong offset!");
static_assert(offsetof(UPlayspaceControllerComponent_PlayerSpawning, ReplicatedSpawnInfo) == 0x0000C0, "Member 'UPlayspaceControllerComponent_PlayerSpawning::ReplicatedSpawnInfo' has a wrong offset!");

class UPlayspaceGameStateComponent : public UGameStateComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceGameStateComponent">();
	}
	static class UPlayspaceGameStateComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceGameStateComponent>();
	}
};
static_assert(alignof(UPlayspaceGameStateComponent) == 0x000008, "Wrong alignment on UPlayspaceGameStateComponent");
static_assert(sizeof(UPlayspaceGameStateComponent) == 0x0000A0, "Wrong size on UPlayspaceGameStateComponent");

class UPlayspaceGameStateComponent_PlayerSpawningManager final : public UPlayspaceGameStateComponent
{
public:
	uint8                                         Pad_A0[0x48];
	TArray<struct FPlayspaceSpawningInfo>         SpawningUsersArray;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceGameStateComponent_PlayerSpawningManager">();
	}
	static class UPlayspaceGameStateComponent_PlayerSpawningManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceGameStateComponent_PlayerSpawningManager>();
	}
};
static_assert(alignof(UPlayspaceGameStateComponent_PlayerSpawningManager) == 0x000008, "Wrong alignment on UPlayspaceGameStateComponent_PlayerSpawningManager");
static_assert(sizeof(UPlayspaceGameStateComponent_PlayerSpawningManager) == 0x0000F8, "Wrong size on UPlayspaceGameStateComponent_PlayerSpawningManager");
static_assert(offsetof(UPlayspaceGameStateComponent_PlayerSpawningManager, SpawningUsersArray) == 0x0000E8, "Member 'UPlayspaceGameStateComponent_PlayerSpawningManager::SpawningUsersArray' has a wrong offset!");

class UGameFeatureAction_AddPlayspaceComponent final : public UGameFeatureAction
{
public:
	TArray<struct FPlayspaceComponentConfiguration> PlayspaceComponentDataList;
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddPlayspaceComponent">();
	}
	static class UGameFeatureAction_AddPlayspaceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddPlayspaceComponent>();
	}
};
static_assert(alignof(UGameFeatureAction_AddPlayspaceComponent) == 0x000008, "Wrong alignment on UGameFeatureAction_AddPlayspaceComponent");
static_assert(sizeof(UGameFeatureAction_AddPlayspaceComponent) == 0x000040, "Wrong size on UGameFeatureAction_AddPlayspaceComponent");
static_assert(offsetof(UGameFeatureAction_AddPlayspaceComponent, PlayspaceComponentDataList) == 0x000028, "Member 'UGameFeatureAction_AddPlayspaceComponent::PlayspaceComponentDataList' has a wrong offset!");

class UGameFeatureAction_CreatePlayspacesFromConfig final : public UGameFeatureAction
{
public:
	TArray<struct FPlayspaceConfiguration>        PlayspaceDataList;
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_CreatePlayspacesFromConfig">();
	}
	static class UGameFeatureAction_CreatePlayspacesFromConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_CreatePlayspacesFromConfig>();
	}
};
static_assert(alignof(UGameFeatureAction_CreatePlayspacesFromConfig) == 0x000008, "Wrong alignment on UGameFeatureAction_CreatePlayspacesFromConfig");
static_assert(sizeof(UGameFeatureAction_CreatePlayspacesFromConfig) == 0x000040, "Wrong size on UGameFeatureAction_CreatePlayspacesFromConfig");
static_assert(offsetof(UGameFeatureAction_CreatePlayspacesFromConfig, PlayspaceDataList) == 0x000028, "Member 'UGameFeatureAction_CreatePlayspacesFromConfig::PlayspaceDataList' has a wrong offset!");

class AGameplayVolume : public AActor
{
public:
	TSoftClassPtr<class UClass>                   PlayspaceClassTemplate;
	EPlayspaceCreationType                        PlayspaceCreationType;
	uint8                                         Pad_2B1[0x7];
	TSubclassOf<class APlayspace>                 PlayspaceClass;
	bool                                          bDestroyPlayspaceOnEndPlay;
	uint8                                         Pad_2C1[0x7];
	class APlayspace*                             Playspace;
	struct FGameplayTagContainer                  VolumeTags;
	class UOverlapComponent*                      BoundsComponent;
	uint8                                         Pad_2F8[0x20];

public:
	void InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent);
	void OnOverlappedPawnControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController);
	void UpdateSize(const struct FVector& NewScale);

	class APlayspace* GetPlayspace() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayVolume">();
	}
	static class AGameplayVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameplayVolume>();
	}
};
static_assert(alignof(AGameplayVolume) == 0x000008, "Wrong alignment on AGameplayVolume");
static_assert(sizeof(AGameplayVolume) == 0x000318, "Wrong size on AGameplayVolume");
static_assert(offsetof(AGameplayVolume, PlayspaceClassTemplate) == 0x000288, "Member 'AGameplayVolume::PlayspaceClassTemplate' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, PlayspaceCreationType) == 0x0002B0, "Member 'AGameplayVolume::PlayspaceCreationType' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, PlayspaceClass) == 0x0002B8, "Member 'AGameplayVolume::PlayspaceClass' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, bDestroyPlayspaceOnEndPlay) == 0x0002C0, "Member 'AGameplayVolume::bDestroyPlayspaceOnEndPlay' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, Playspace) == 0x0002C8, "Member 'AGameplayVolume::Playspace' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, VolumeTags) == 0x0002D0, "Member 'AGameplayVolume::VolumeTags' has a wrong offset!");
static_assert(offsetof(AGameplayVolume, BoundsComponent) == 0x0002F0, "Member 'AGameplayVolume::BoundsComponent' has a wrong offset!");

class APlayspace : public AInfo
{
public:
	TMulticastInlineDelegate<void(struct FPlayspaceUser& AddedUser)> NotifyPlayspaceUserAdded;
	uint8                                         Pad_298[0x18];
	TMulticastInlineDelegate<void(struct FPlayspaceUser& RemovedUser)> NotifyPlayspaceUserRemoved;
	uint8                                         Pad_2C0[0x18];
	TMulticastInlineDelegate<void(class APlayspace* Playspace)> NotifyPlayspaceInitialized;
	uint8                                         Pad_2E8[0x18];
	TMulticastInlineDelegate<void()>              NotifyStartMatch;
	uint8                                         Pad_310[0x18];
	TMulticastInlineDelegate<void()>              NotifyEndMatch;
	uint8                                         Pad_338[0x18];
	struct FGameplayTagContainer                  GameplayTags;
	struct FGameplayTag                           RequestedPlayspaceParentTag;
	uint8                                         Pad_374[0x4];
	TArray<TSubclassOf<class APlayspace>>         ChildPlayspaceClasses;
	struct FPlayspaceUserList                     PlayspaceUsers;
	TArray<class APlayspace*>                     ChildPlayspaces;
	TArray<struct FUniqueNetIdRepl>               PendingUsers;
	bool                                          bAutoStartMatchOnServerStart;
	EWithinBoundsEvaluationType                   BoundsEvaluationType;
	uint8                                         Pad_522[0x6];
	class UPlayspaceManagerComponent*             PlayspaceManagerCached;
	class AGameplayVolume*                        BoundGameplayVolume;
	bool                                          bIsInitialized;
	uint8                                         Pad_539[0x1];
	bool                                          bMatchHasEnded;
	uint8                                         Pad_53B[0x1];
	float                                         MatchStartTime;
	uint8                                         Pad_540[0x18];

public:
	void OnRep_bIsInitialized();
	void OnRep_bMatchHasEnded();
	void OnRep_MatchStartTime();
	void OnRep_PlayspaceUsers();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Playspace">();
	}
	static class APlayspace* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayspace>();
	}
};
static_assert(alignof(APlayspace) == 0x000008, "Wrong alignment on APlayspace");
static_assert(sizeof(APlayspace) == 0x000558, "Wrong size on APlayspace");
static_assert(offsetof(APlayspace, NotifyPlayspaceUserAdded) == 0x000288, "Member 'APlayspace::NotifyPlayspaceUserAdded' has a wrong offset!");
static_assert(offsetof(APlayspace, NotifyPlayspaceUserRemoved) == 0x0002B0, "Member 'APlayspace::NotifyPlayspaceUserRemoved' has a wrong offset!");
static_assert(offsetof(APlayspace, NotifyPlayspaceInitialized) == 0x0002D8, "Member 'APlayspace::NotifyPlayspaceInitialized' has a wrong offset!");
static_assert(offsetof(APlayspace, NotifyStartMatch) == 0x000300, "Member 'APlayspace::NotifyStartMatch' has a wrong offset!");
static_assert(offsetof(APlayspace, NotifyEndMatch) == 0x000328, "Member 'APlayspace::NotifyEndMatch' has a wrong offset!");
static_assert(offsetof(APlayspace, GameplayTags) == 0x000350, "Member 'APlayspace::GameplayTags' has a wrong offset!");
static_assert(offsetof(APlayspace, RequestedPlayspaceParentTag) == 0x000370, "Member 'APlayspace::RequestedPlayspaceParentTag' has a wrong offset!");
static_assert(offsetof(APlayspace, ChildPlayspaceClasses) == 0x000378, "Member 'APlayspace::ChildPlayspaceClasses' has a wrong offset!");
static_assert(offsetof(APlayspace, PlayspaceUsers) == 0x000388, "Member 'APlayspace::PlayspaceUsers' has a wrong offset!");
static_assert(offsetof(APlayspace, ChildPlayspaces) == 0x000500, "Member 'APlayspace::ChildPlayspaces' has a wrong offset!");
static_assert(offsetof(APlayspace, PendingUsers) == 0x000510, "Member 'APlayspace::PendingUsers' has a wrong offset!");
static_assert(offsetof(APlayspace, bAutoStartMatchOnServerStart) == 0x000520, "Member 'APlayspace::bAutoStartMatchOnServerStart' has a wrong offset!");
static_assert(offsetof(APlayspace, BoundsEvaluationType) == 0x000521, "Member 'APlayspace::BoundsEvaluationType' has a wrong offset!");
static_assert(offsetof(APlayspace, PlayspaceManagerCached) == 0x000528, "Member 'APlayspace::PlayspaceManagerCached' has a wrong offset!");
static_assert(offsetof(APlayspace, BoundGameplayVolume) == 0x000530, "Member 'APlayspace::BoundGameplayVolume' has a wrong offset!");
static_assert(offsetof(APlayspace, bIsInitialized) == 0x000538, "Member 'APlayspace::bIsInitialized' has a wrong offset!");
static_assert(offsetof(APlayspace, bMatchHasEnded) == 0x00053A, "Member 'APlayspace::bMatchHasEnded' has a wrong offset!");
static_assert(offsetof(APlayspace, MatchStartTime) == 0x00053C, "Member 'APlayspace::MatchStartTime' has a wrong offset!");

class UPlayspaceLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DestroyPlayspace(class APlayspace* PlayspaceToDestroy);
	static class APlayspace* GetPlayspaceForActor(const class UObject* WorldContextObject, class AActor* InActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceLibrary">();
	}
	static class UPlayspaceLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceLibrary>();
	}
};
static_assert(alignof(UPlayspaceLibrary) == 0x000008, "Wrong alignment on UPlayspaceLibrary");
static_assert(sizeof(UPlayspaceLibrary) == 0x000028, "Wrong size on UPlayspaceLibrary");

class APlayspaceLogic final : public AActor
{
public:
	class APlayspace*                             Playspace;
	bool                                          bAutoStartMatchOnServerStart;
	uint8                                         Pad_291[0x1];
	bool                                          bMatchHasEnded;
	uint8                                         Pad_293[0x1];
	float                                         MatchStartTime;

public:
	void OnRep_bMatchHasEnded();
	void OnRep_MatchStartTime();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceLogic">();
	}
	static class APlayspaceLogic* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayspaceLogic>();
	}
};
static_assert(alignof(APlayspaceLogic) == 0x000008, "Wrong alignment on APlayspaceLogic");
static_assert(sizeof(APlayspaceLogic) == 0x000298, "Wrong size on APlayspaceLogic");
static_assert(offsetof(APlayspaceLogic, Playspace) == 0x000288, "Member 'APlayspaceLogic::Playspace' has a wrong offset!");
static_assert(offsetof(APlayspaceLogic, bAutoStartMatchOnServerStart) == 0x000290, "Member 'APlayspaceLogic::bAutoStartMatchOnServerStart' has a wrong offset!");
static_assert(offsetof(APlayspaceLogic, bMatchHasEnded) == 0x000292, "Member 'APlayspaceLogic::bMatchHasEnded' has a wrong offset!");
static_assert(offsetof(APlayspaceLogic, MatchStartTime) == 0x000294, "Member 'APlayspaceLogic::MatchStartTime' has a wrong offset!");

class UPlayspaceLogicComponent final : public UGameFrameworkComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceLogicComponent">();
	}
	static class UPlayspaceLogicComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceLogicComponent>();
	}
};
static_assert(alignof(UPlayspaceLogicComponent) == 0x000008, "Wrong alignment on UPlayspaceLogicComponent");
static_assert(sizeof(UPlayspaceLogicComponent) == 0x0000A0, "Wrong size on UPlayspaceLogicComponent");

class alignas(0x10) UPlayspaceManagerComponent final : public UGameStateComponent
{
public:
	uint8                                         Pad_A0[0x18];
	class APlayspace*                             RootPlayspace;
	EPlayspaceRootType                            PlayspaceRootType;
	uint8                                         Pad_C1[0x11F];
	TArray<struct FActorOverlapEvent>             UnhandledEnterEvents;
	TArray<struct FActorOverlapEvent>             UnhandledExitEvents;
	TSet<class APlayerController*>                UnassignedPlayers;

public:
	void OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
	void OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume);
	void OnRep_RootPlayspace();
	bool ProcessOverlapEvents(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceManagerComponent">();
	}
	static class UPlayspaceManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceManagerComponent>();
	}
};
static_assert(alignof(UPlayspaceManagerComponent) == 0x000010, "Wrong alignment on UPlayspaceManagerComponent");
static_assert(sizeof(UPlayspaceManagerComponent) == 0x000250, "Wrong size on UPlayspaceManagerComponent");
static_assert(offsetof(UPlayspaceManagerComponent, RootPlayspace) == 0x0000B8, "Member 'UPlayspaceManagerComponent::RootPlayspace' has a wrong offset!");
static_assert(offsetof(UPlayspaceManagerComponent, PlayspaceRootType) == 0x0000C0, "Member 'UPlayspaceManagerComponent::PlayspaceRootType' has a wrong offset!");
static_assert(offsetof(UPlayspaceManagerComponent, UnhandledEnterEvents) == 0x0001E0, "Member 'UPlayspaceManagerComponent::UnhandledEnterEvents' has a wrong offset!");
static_assert(offsetof(UPlayspaceManagerComponent, UnhandledExitEvents) == 0x0001F0, "Member 'UPlayspaceManagerComponent::UnhandledExitEvents' has a wrong offset!");
static_assert(offsetof(UPlayspaceManagerComponent, UnassignedPlayers) == 0x000200, "Member 'UPlayspaceManagerComponent::UnassignedPlayers' has a wrong offset!");

class UPlayspacePlayerManagerComponent final : public UPlayspaceComponent
{
public:
	TArray<TSubclassOf<class UControllerComponent>> ControllerComponents;
	TArray<TSubclassOf<class UPlayerStateComponent>> PlayerStateComponents;
	TArray<TSubclassOf<class UActorComponent>>    ActorComponents;
	uint8                                         Pad_D0[0xF0];

public:
	void OnPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspacePlayerManagerComponent">();
	}
	static class UPlayspacePlayerManagerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspacePlayerManagerComponent>();
	}
};
static_assert(alignof(UPlayspacePlayerManagerComponent) == 0x000008, "Wrong alignment on UPlayspacePlayerManagerComponent");
static_assert(sizeof(UPlayspacePlayerManagerComponent) == 0x0001C0, "Wrong size on UPlayspacePlayerManagerComponent");
static_assert(offsetof(UPlayspacePlayerManagerComponent, ControllerComponents) == 0x0000A0, "Member 'UPlayspacePlayerManagerComponent::ControllerComponents' has a wrong offset!");
static_assert(offsetof(UPlayspacePlayerManagerComponent, PlayerStateComponents) == 0x0000B0, "Member 'UPlayspacePlayerManagerComponent::PlayerStateComponents' has a wrong offset!");
static_assert(offsetof(UPlayspacePlayerManagerComponent, ActorComponents) == 0x0000C0, "Member 'UPlayspacePlayerManagerComponent::ActorComponents' has a wrong offset!");

class APlayspaceSpawnActor final : public AActor
{
public:
	class USceneComponent*                        SceneComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayspaceSpawnActor">();
	}
	static class APlayspaceSpawnActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayspaceSpawnActor>();
	}
};
static_assert(alignof(APlayspaceSpawnActor) == 0x000008, "Wrong alignment on APlayspaceSpawnActor");
static_assert(sizeof(APlayspaceSpawnActor) == 0x000290, "Wrong size on APlayspaceSpawnActor");
static_assert(offsetof(APlayspaceSpawnActor, SceneComponent) == 0x000288, "Member 'APlayspaceSpawnActor::SceneComponent' has a wrong offset!");

}
