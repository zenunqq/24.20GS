#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ClamberingCodeRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct ClamberingComponent_BP_HandleClamberingStateChanged final
{
public:
	EClamberingState                              OldClamberingState;
	EClamberingState                              NewClamberingState;
};
static_assert(alignof(ClamberingComponent_BP_HandleClamberingStateChanged) == 0x000001, "Wrong alignment on ClamberingComponent_BP_HandleClamberingStateChanged");
static_assert(sizeof(ClamberingComponent_BP_HandleClamberingStateChanged) == 0x000002, "Wrong size on ClamberingComponent_BP_HandleClamberingStateChanged");
static_assert(offsetof(ClamberingComponent_BP_HandleClamberingStateChanged, OldClamberingState) == 0x000000, "Member 'ClamberingComponent_BP_HandleClamberingStateChanged::OldClamberingState' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_BP_HandleClamberingStateChanged, NewClamberingState) == 0x000001, "Member 'ClamberingComponent_BP_HandleClamberingStateChanged::NewClamberingState' has a wrong offset!");

struct ClamberingComponent_BP_HandleSynchedActionStarted final
{
public:
	struct FSynchedActionInfo                     SynchedActionInfo;
};
static_assert(alignof(ClamberingComponent_BP_HandleSynchedActionStarted) == 0x000004, "Wrong alignment on ClamberingComponent_BP_HandleSynchedActionStarted");
static_assert(sizeof(ClamberingComponent_BP_HandleSynchedActionStarted) == 0x000030, "Wrong size on ClamberingComponent_BP_HandleSynchedActionStarted");
static_assert(offsetof(ClamberingComponent_BP_HandleSynchedActionStarted, SynchedActionInfo) == 0x000000, "Member 'ClamberingComponent_BP_HandleSynchedActionStarted::SynchedActionInfo' has a wrong offset!");

struct ClamberingComponent_DrawDebugHUD final
{
public:
	class AHUD*                                   HUD;
	class UCanvas*                                Canvas;
};
static_assert(alignof(ClamberingComponent_DrawDebugHUD) == 0x000008, "Wrong alignment on ClamberingComponent_DrawDebugHUD");
static_assert(sizeof(ClamberingComponent_DrawDebugHUD) == 0x000010, "Wrong size on ClamberingComponent_DrawDebugHUD");
static_assert(offsetof(ClamberingComponent_DrawDebugHUD, HUD) == 0x000000, "Member 'ClamberingComponent_DrawDebugHUD::HUD' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_DrawDebugHUD, Canvas) == 0x000008, "Member 'ClamberingComponent_DrawDebugHUD::Canvas' has a wrong offset!");

struct ClamberingComponent_HandleOwnerASCInitialized final
{
public:
	class UFortAbilitySystemComponent*            AbilitySystemComponent;
	class AFortPlayerPawn*                        AffectedPawn;
};
static_assert(alignof(ClamberingComponent_HandleOwnerASCInitialized) == 0x000008, "Wrong alignment on ClamberingComponent_HandleOwnerASCInitialized");
static_assert(sizeof(ClamberingComponent_HandleOwnerASCInitialized) == 0x000010, "Wrong size on ClamberingComponent_HandleOwnerASCInitialized");
static_assert(offsetof(ClamberingComponent_HandleOwnerASCInitialized, AbilitySystemComponent) == 0x000000, "Member 'ClamberingComponent_HandleOwnerASCInitialized::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_HandleOwnerASCInitialized, AffectedPawn) == 0x000008, "Member 'ClamberingComponent_HandleOwnerASCInitialized::AffectedPawn' has a wrong offset!");

struct ClamberingComponent_HandleOwnerDied final
{
public:
	class AFortPawn*                              DeadPawn;
};
static_assert(alignof(ClamberingComponent_HandleOwnerDied) == 0x000008, "Wrong alignment on ClamberingComponent_HandleOwnerDied");
static_assert(sizeof(ClamberingComponent_HandleOwnerDied) == 0x000008, "Wrong size on ClamberingComponent_HandleOwnerDied");
static_assert(offsetof(ClamberingComponent_HandleOwnerDied, DeadPawn) == 0x000000, "Member 'ClamberingComponent_HandleOwnerDied::DeadPawn' has a wrong offset!");

struct ClamberingComponent_HandleOwnerJumpInput final
{
public:
	bool                                          bPressed;
};
static_assert(alignof(ClamberingComponent_HandleOwnerJumpInput) == 0x000001, "Wrong alignment on ClamberingComponent_HandleOwnerJumpInput");
static_assert(sizeof(ClamberingComponent_HandleOwnerJumpInput) == 0x000001, "Wrong size on ClamberingComponent_HandleOwnerJumpInput");
static_assert(offsetof(ClamberingComponent_HandleOwnerJumpInput, bPressed) == 0x000000, "Member 'ClamberingComponent_HandleOwnerJumpInput::bPressed' has a wrong offset!");

struct ClamberingComponent_HandleOwnerMovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PreviousMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(ClamberingComponent_HandleOwnerMovementModeChanged) == 0x000008, "Wrong alignment on ClamberingComponent_HandleOwnerMovementModeChanged");
static_assert(sizeof(ClamberingComponent_HandleOwnerMovementModeChanged) == 0x000010, "Wrong size on ClamberingComponent_HandleOwnerMovementModeChanged");
static_assert(offsetof(ClamberingComponent_HandleOwnerMovementModeChanged, Character) == 0x000000, "Member 'ClamberingComponent_HandleOwnerMovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_HandleOwnerMovementModeChanged, PreviousMovementMode) == 0x000008, "Member 'ClamberingComponent_HandleOwnerMovementModeChanged::PreviousMovementMode' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_HandleOwnerMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'ClamberingComponent_HandleOwnerMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct ClamberingComponent_HandleOwnerTeleported final
{
public:
	class AFortPawn*                              TeleportedOwner;
};
static_assert(alignof(ClamberingComponent_HandleOwnerTeleported) == 0x000008, "Wrong alignment on ClamberingComponent_HandleOwnerTeleported");
static_assert(sizeof(ClamberingComponent_HandleOwnerTeleported) == 0x000008, "Wrong size on ClamberingComponent_HandleOwnerTeleported");
static_assert(offsetof(ClamberingComponent_HandleOwnerTeleported, TeleportedOwner) == 0x000000, "Member 'ClamberingComponent_HandleOwnerTeleported::TeleportedOwner' has a wrong offset!");

struct ClamberingComponent_HandleTargetActorDestroyed final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(ClamberingComponent_HandleTargetActorDestroyed) == 0x000008, "Wrong alignment on ClamberingComponent_HandleTargetActorDestroyed");
static_assert(sizeof(ClamberingComponent_HandleTargetActorDestroyed) == 0x000008, "Wrong size on ClamberingComponent_HandleTargetActorDestroyed");
static_assert(offsetof(ClamberingComponent_HandleTargetActorDestroyed, Actor) == 0x000000, "Member 'ClamberingComponent_HandleTargetActorDestroyed::Actor' has a wrong offset!");

struct ClamberingComponent_HandleTargetingDataValid final
{
public:
	struct FClamberingTargetingData               TargetingData;
};
static_assert(alignof(ClamberingComponent_HandleTargetingDataValid) == 0x000008, "Wrong alignment on ClamberingComponent_HandleTargetingDataValid");
static_assert(sizeof(ClamberingComponent_HandleTargetingDataValid) == 0x0000D0, "Wrong size on ClamberingComponent_HandleTargetingDataValid");
static_assert(offsetof(ClamberingComponent_HandleTargetingDataValid, TargetingData) == 0x000000, "Member 'ClamberingComponent_HandleTargetingDataValid::TargetingData' has a wrong offset!");

struct ClamberingComponent_NetMulticast_ClamberingLedgeFailed final
{
public:
	EClamberingFailedReason                       FailedReason;
	EClamberingState                              FailedState;
};
static_assert(alignof(ClamberingComponent_NetMulticast_ClamberingLedgeFailed) == 0x000001, "Wrong alignment on ClamberingComponent_NetMulticast_ClamberingLedgeFailed");
static_assert(sizeof(ClamberingComponent_NetMulticast_ClamberingLedgeFailed) == 0x000002, "Wrong size on ClamberingComponent_NetMulticast_ClamberingLedgeFailed");
static_assert(offsetof(ClamberingComponent_NetMulticast_ClamberingLedgeFailed, FailedReason) == 0x000000, "Member 'ClamberingComponent_NetMulticast_ClamberingLedgeFailed::FailedReason' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_NetMulticast_ClamberingLedgeFailed, FailedState) == 0x000001, "Member 'ClamberingComponent_NetMulticast_ClamberingLedgeFailed::FailedState' has a wrong offset!");

struct ClamberingComponent_OnPlayerStatePawnSet final
{
public:
	class APlayerState*                           Player;
	class APawn*                                  NewPawn;
	class APawn*                                  OldPawn;
};
static_assert(alignof(ClamberingComponent_OnPlayerStatePawnSet) == 0x000008, "Wrong alignment on ClamberingComponent_OnPlayerStatePawnSet");
static_assert(sizeof(ClamberingComponent_OnPlayerStatePawnSet) == 0x000018, "Wrong size on ClamberingComponent_OnPlayerStatePawnSet");
static_assert(offsetof(ClamberingComponent_OnPlayerStatePawnSet, Player) == 0x000000, "Member 'ClamberingComponent_OnPlayerStatePawnSet::Player' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_OnPlayerStatePawnSet, NewPawn) == 0x000008, "Member 'ClamberingComponent_OnPlayerStatePawnSet::NewPawn' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_OnPlayerStatePawnSet, OldPawn) == 0x000010, "Member 'ClamberingComponent_OnPlayerStatePawnSet::OldPawn' has a wrong offset!");

struct ClamberingComponent_RegisterMutatorUpdatedDelegate final
{
public:
	class APawn*                                  AffectedPawn;
};
static_assert(alignof(ClamberingComponent_RegisterMutatorUpdatedDelegate) == 0x000008, "Wrong alignment on ClamberingComponent_RegisterMutatorUpdatedDelegate");
static_assert(sizeof(ClamberingComponent_RegisterMutatorUpdatedDelegate) == 0x000008, "Wrong size on ClamberingComponent_RegisterMutatorUpdatedDelegate");
static_assert(offsetof(ClamberingComponent_RegisterMutatorUpdatedDelegate, AffectedPawn) == 0x000000, "Member 'ClamberingComponent_RegisterMutatorUpdatedDelegate::AffectedPawn' has a wrong offset!");

struct ClamberingComponent_ServerStartClambering final
{
public:
	struct FReplicatedClamberingTargetingData     InReplicatedTargetingData;
	double                                        ClientLastTeleportTime;
};
static_assert(alignof(ClamberingComponent_ServerStartClambering) == 0x000008, "Wrong alignment on ClamberingComponent_ServerStartClambering");
static_assert(sizeof(ClamberingComponent_ServerStartClambering) == 0x000080, "Wrong size on ClamberingComponent_ServerStartClambering");
static_assert(offsetof(ClamberingComponent_ServerStartClambering, InReplicatedTargetingData) == 0x000000, "Member 'ClamberingComponent_ServerStartClambering::InReplicatedTargetingData' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_ServerStartClambering, ClientLastTeleportTime) == 0x000078, "Member 'ClamberingComponent_ServerStartClambering::ClientLastTeleportTime' has a wrong offset!");

struct ClamberingComponent_SetTutorialModeEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(ClamberingComponent_SetTutorialModeEnabled) == 0x000001, "Wrong alignment on ClamberingComponent_SetTutorialModeEnabled");
static_assert(sizeof(ClamberingComponent_SetTutorialModeEnabled) == 0x000001, "Wrong size on ClamberingComponent_SetTutorialModeEnabled");
static_assert(offsetof(ClamberingComponent_SetTutorialModeEnabled, bEnabled) == 0x000000, "Member 'ClamberingComponent_SetTutorialModeEnabled::bEnabled' has a wrong offset!");

struct ClamberingComponent_BP_CanStartClambering final
{
public:
	bool                                          bCanStartClambering;
};
static_assert(alignof(ClamberingComponent_BP_CanStartClambering) == 0x000001, "Wrong alignment on ClamberingComponent_BP_CanStartClambering");
static_assert(sizeof(ClamberingComponent_BP_CanStartClambering) == 0x000001, "Wrong size on ClamberingComponent_BP_CanStartClambering");
static_assert(offsetof(ClamberingComponent_BP_CanStartClambering, bCanStartClambering) == 0x000000, "Member 'ClamberingComponent_BP_CanStartClambering::bCanStartClambering' has a wrong offset!");

struct ClamberingComponent_BP_CanStartTargeting final
{
public:
	bool                                          bCanStartTargeting;
};
static_assert(alignof(ClamberingComponent_BP_CanStartTargeting) == 0x000001, "Wrong alignment on ClamberingComponent_BP_CanStartTargeting");
static_assert(sizeof(ClamberingComponent_BP_CanStartTargeting) == 0x000001, "Wrong size on ClamberingComponent_BP_CanStartTargeting");
static_assert(offsetof(ClamberingComponent_BP_CanStartTargeting, bCanStartTargeting) == 0x000000, "Member 'ClamberingComponent_BP_CanStartTargeting::bCanStartTargeting' has a wrong offset!");

struct ClamberingComponent_BP_IsValidTargetActor final
{
public:
	const class AActor*                           TargetActor;
	bool                                          bIsValidTargetActor;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(ClamberingComponent_BP_IsValidTargetActor) == 0x000008, "Wrong alignment on ClamberingComponent_BP_IsValidTargetActor");
static_assert(sizeof(ClamberingComponent_BP_IsValidTargetActor) == 0x000010, "Wrong size on ClamberingComponent_BP_IsValidTargetActor");
static_assert(offsetof(ClamberingComponent_BP_IsValidTargetActor, TargetActor) == 0x000000, "Member 'ClamberingComponent_BP_IsValidTargetActor::TargetActor' has a wrong offset!");
static_assert(offsetof(ClamberingComponent_BP_IsValidTargetActor, bIsValidTargetActor) == 0x000008, "Member 'ClamberingComponent_BP_IsValidTargetActor::bIsValidTargetActor' has a wrong offset!");

struct ClamberingComponent_IsAutoClamberingEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ClamberingComponent_IsAutoClamberingEnabled) == 0x000001, "Wrong alignment on ClamberingComponent_IsAutoClamberingEnabled");
static_assert(sizeof(ClamberingComponent_IsAutoClamberingEnabled) == 0x000001, "Wrong size on ClamberingComponent_IsAutoClamberingEnabled");
static_assert(offsetof(ClamberingComponent_IsAutoClamberingEnabled, ReturnValue) == 0x000000, "Member 'ClamberingComponent_IsAutoClamberingEnabled::ReturnValue' has a wrong offset!");

struct ClamberingComponent_IsClamberingEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ClamberingComponent_IsClamberingEnabled) == 0x000001, "Wrong alignment on ClamberingComponent_IsClamberingEnabled");
static_assert(sizeof(ClamberingComponent_IsClamberingEnabled) == 0x000001, "Wrong size on ClamberingComponent_IsClamberingEnabled");
static_assert(offsetof(ClamberingComponent_IsClamberingEnabled, ReturnValue) == 0x000000, "Member 'ClamberingComponent_IsClamberingEnabled::ReturnValue' has a wrong offset!");

struct ClamberingComponent_IsTutorialModeEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ClamberingComponent_IsTutorialModeEnabled) == 0x000001, "Wrong alignment on ClamberingComponent_IsTutorialModeEnabled");
static_assert(sizeof(ClamberingComponent_IsTutorialModeEnabled) == 0x000001, "Wrong size on ClamberingComponent_IsTutorialModeEnabled");
static_assert(offsetof(ClamberingComponent_IsTutorialModeEnabled, ReturnValue) == 0x000000, "Member 'ClamberingComponent_IsTutorialModeEnabled::ReturnValue' has a wrong offset!");

struct ClamberingComponent_ShouldShowClamberIndicator final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ClamberingComponent_ShouldShowClamberIndicator) == 0x000001, "Wrong alignment on ClamberingComponent_ShouldShowClamberIndicator");
static_assert(sizeof(ClamberingComponent_ShouldShowClamberIndicator) == 0x000001, "Wrong size on ClamberingComponent_ShouldShowClamberIndicator");
static_assert(offsetof(ClamberingComponent_ShouldShowClamberIndicator, ReturnValue) == 0x000000, "Member 'ClamberingComponent_ShouldShowClamberIndicator::ReturnValue' has a wrong offset!");

struct ClamberingLibrary_PerformClamberingTargeting final
{
public:
	const class ACharacter*                       Character;
	struct FClamberingTargetingData               OutTargetingData;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x7];
};
static_assert(alignof(ClamberingLibrary_PerformClamberingTargeting) == 0x000008, "Wrong alignment on ClamberingLibrary_PerformClamberingTargeting");
static_assert(sizeof(ClamberingLibrary_PerformClamberingTargeting) == 0x0000E0, "Wrong size on ClamberingLibrary_PerformClamberingTargeting");
static_assert(offsetof(ClamberingLibrary_PerformClamberingTargeting, Character) == 0x000000, "Member 'ClamberingLibrary_PerformClamberingTargeting::Character' has a wrong offset!");
static_assert(offsetof(ClamberingLibrary_PerformClamberingTargeting, OutTargetingData) == 0x000008, "Member 'ClamberingLibrary_PerformClamberingTargeting::OutTargetingData' has a wrong offset!");
static_assert(offsetof(ClamberingLibrary_PerformClamberingTargeting, ReturnValue) == 0x0000D8, "Member 'ClamberingLibrary_PerformClamberingTargeting::ReturnValue' has a wrong offset!");

}
