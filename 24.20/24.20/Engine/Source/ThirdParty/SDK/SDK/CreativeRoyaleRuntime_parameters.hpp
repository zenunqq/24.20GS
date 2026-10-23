#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PlayspaceSystem_structs.hpp"

namespace SDK::Params
{

struct FortPoiSwapManager_SwapPoi final
{
public:
	const class AFortPoiVolume*                   PoiToSwap;
};
static_assert(alignof(FortPoiSwapManager_SwapPoi) == 0x000008, "Wrong alignment on FortPoiSwapManager_SwapPoi");
static_assert(sizeof(FortPoiSwapManager_SwapPoi) == 0x000008, "Wrong size on FortPoiSwapManager_SwapPoi");
static_assert(offsetof(FortPoiSwapManager_SwapPoi, PoiToSwap) == 0x000000, "Member 'FortPoiSwapManager_SwapPoi::PoiToSwap' has a wrong offset!");

struct AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress final
{
public:
	const class AFortPlayerState*                 FortPlayerState;
};
static_assert(alignof(AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress) == 0x000008, "Wrong alignment on AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress");
static_assert(sizeof(AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress) == 0x000008, "Wrong size on AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress");
static_assert(offsetof(AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress, FortPlayerState) == 0x000000, "Member 'AthenaAIServicePlayerBots_CreativeRoyale_OnPlayerJoiningInProgress::FortPlayerState' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks) == 0x000008, "Wrong size on CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks, Actor) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_BindActorToCallbacks::Actor' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged) == 0x000060, "Wrong size on CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, DamagedActor) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::DamagedActor' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, Damage) == 0x000008, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::Damage' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, InstigatedBy) == 0x000010, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::InstigatedBy' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, DamageCauser) == 0x000018, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::DamageCauser' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, HitLocation) == 0x000020, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::HitLocation' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, FHitComponent) == 0x000038, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::FHitComponent' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, BoneName) == 0x000040, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::BoneName' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged, Momentum) == 0x000048, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDamaged::Momentum' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied) == 0x000060, "Wrong size on CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, DamagedActor) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, Damage) == 0x000008, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::Damage' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, InstigatedBy) == 0x000010, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, DamageCauser) == 0x000018, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, HitLocation) == 0x000020, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::HitLocation' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, FHitComponent) == 0x000038, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, BoneName) == 0x000040, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::BoneName' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied, Momentum) == 0x000048, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleBuildingDied::Momentum' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged final
{
public:
	class AFortMinigame*                          Minigame;
	EFortMinigameState                            NewMinigameState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged) == 0x000010, "Wrong size on CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged, Minigame) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged::Minigame' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged, NewMinigameState) == 0x000008, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_HandleMinigameStateChanged::NewMinigameState' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned final
{
public:
	class AActor*                                 ActorToBeRespawned;
	bool                                          bRemoveDamagedActor;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned) == 0x000010, "Wrong size on CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned, ActorToBeRespawned) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned::ActorToBeRespawned' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned, bRemoveDamagedActor) == 0x000008, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_SaveActorToBeRespawned::bRemoveDamagedActor' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor final
{
public:
	class AActor*                                 DamagedActor;
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor) == 0x000008, "Wrong size on CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor, DamagedActor) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LevelReset_SaveDamagedActor::DamagedActor' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged final
{
public:
	class AFortMinigame*                          Minigame;
	EFortMinigameState                            MinigameState;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged) == 0x000010, "Wrong size on CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged, Minigame) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged::Minigame' has a wrong offset!");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged, MinigameState) == 0x000008, "Member 'CreativeRoyalePlayspaceComponent_LoadingScreen_OnMinigameStateChanged::MinigameState' has a wrong offset!");

struct CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded final
{
public:
	struct FPlayspaceUser                         AddedUser;
};
static_assert(alignof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded) == 0x000008, "Wrong alignment on CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded");
static_assert(sizeof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded) == 0x000058, "Wrong size on CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded");
static_assert(offsetof(CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded, AddedUser) == 0x000000, "Member 'CreativeRoyalePlayspaceComponent_LoadingScreen_OnPlayspaceUserAdded::AddedUser' has a wrong offset!");

struct CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation final
{
public:
	TArray<class FName>                           InOutResolverScopes;
	int32                                         InOutPriority;
	bool                                          ReturnValue;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation) == 0x000008, "Wrong alignment on CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation");
static_assert(sizeof(CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation) == 0x000018, "Wrong size on CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation");
static_assert(offsetof(CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation, InOutResolverScopes) == 0x000000, "Member 'CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation::InOutResolverScopes' has a wrong offset!");
static_assert(offsetof(CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation, InOutPriority) == 0x000010, "Member 'CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation::InOutPriority' has a wrong offset!");
static_assert(offsetof(CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation, ReturnValue) == 0x000014, "Member 'CreativeRoyaleRootPlayspace_BuildDataRegistryResolverScope_Implementation::ReturnValue' has a wrong offset!");

struct FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn final
{
public:
	class APlayerController*                      PlayerController;
};
static_assert(alignof(FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn) == 0x000008, "Wrong alignment on FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn");
static_assert(sizeof(FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn) == 0x000008, "Wrong size on FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn");
static_assert(offsetof(FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn, PlayerController) == 0x000000, "Member 'FortProjectEditComponent_CreativeRoyale_OnPlayerLoggedIn::PlayerController' has a wrong offset!");

}
