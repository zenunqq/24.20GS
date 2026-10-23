#pragma once

#include "Basic.hpp"

#include "VaultingCodeRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct HurdleComponent_BP_CanStartHurdle final
{
public:
	bool                                          OutCanStartHurdle;
};
static_assert(alignof(HurdleComponent_BP_CanStartHurdle) == 0x000001, "Wrong alignment on HurdleComponent_BP_CanStartHurdle");
static_assert(sizeof(HurdleComponent_BP_CanStartHurdle) == 0x000001, "Wrong size on HurdleComponent_BP_CanStartHurdle");
static_assert(offsetof(HurdleComponent_BP_CanStartHurdle, OutCanStartHurdle) == 0x000000, "Member 'HurdleComponent_BP_CanStartHurdle::OutCanStartHurdle' has a wrong offset!");

struct HurdleComponent_BP_HandleHurdleStarted final
{
public:
	EHurdleType                                   HurdleType;
	uint8                                         Pad_1[0x3];
	struct FSynchedActionInfo                     SynchedActionInfo;
};
static_assert(alignof(HurdleComponent_BP_HandleHurdleStarted) == 0x000004, "Wrong alignment on HurdleComponent_BP_HandleHurdleStarted");
static_assert(sizeof(HurdleComponent_BP_HandleHurdleStarted) == 0x000034, "Wrong size on HurdleComponent_BP_HandleHurdleStarted");
static_assert(offsetof(HurdleComponent_BP_HandleHurdleStarted, HurdleType) == 0x000000, "Member 'HurdleComponent_BP_HandleHurdleStarted::HurdleType' has a wrong offset!");
static_assert(offsetof(HurdleComponent_BP_HandleHurdleStarted, SynchedActionInfo) == 0x000004, "Member 'HurdleComponent_BP_HandleHurdleStarted::SynchedActionInfo' has a wrong offset!");

struct HurdleComponent_HandleOwnerJumpInput final
{
public:
	bool                                          bPressed;
};
static_assert(alignof(HurdleComponent_HandleOwnerJumpInput) == 0x000001, "Wrong alignment on HurdleComponent_HandleOwnerJumpInput");
static_assert(sizeof(HurdleComponent_HandleOwnerJumpInput) == 0x000001, "Wrong size on HurdleComponent_HandleOwnerJumpInput");
static_assert(offsetof(HurdleComponent_HandleOwnerJumpInput, bPressed) == 0x000000, "Member 'HurdleComponent_HandleOwnerJumpInput::bPressed' has a wrong offset!");

struct HurdleComponent_HandleOwnerMovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PreviousMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(HurdleComponent_HandleOwnerMovementModeChanged) == 0x000008, "Wrong alignment on HurdleComponent_HandleOwnerMovementModeChanged");
static_assert(sizeof(HurdleComponent_HandleOwnerMovementModeChanged) == 0x000010, "Wrong size on HurdleComponent_HandleOwnerMovementModeChanged");
static_assert(offsetof(HurdleComponent_HandleOwnerMovementModeChanged, Character) == 0x000000, "Member 'HurdleComponent_HandleOwnerMovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(HurdleComponent_HandleOwnerMovementModeChanged, PreviousMovementMode) == 0x000008, "Member 'HurdleComponent_HandleOwnerMovementModeChanged::PreviousMovementMode' has a wrong offset!");
static_assert(offsetof(HurdleComponent_HandleOwnerMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'HurdleComponent_HandleOwnerMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct HurdleComponent_HandleOwnerTeleported final
{
public:
	class AFortPawn*                              TeleportedOwner;
};
static_assert(alignof(HurdleComponent_HandleOwnerTeleported) == 0x000008, "Wrong alignment on HurdleComponent_HandleOwnerTeleported");
static_assert(sizeof(HurdleComponent_HandleOwnerTeleported) == 0x000008, "Wrong size on HurdleComponent_HandleOwnerTeleported");
static_assert(offsetof(HurdleComponent_HandleOwnerTeleported, TeleportedOwner) == 0x000000, "Member 'HurdleComponent_HandleOwnerTeleported::TeleportedOwner' has a wrong offset!");

struct HurdleComponent_HandleTargetingDataValid final
{
public:
	struct FHurdleTargetingData                   TargetingData;
};
static_assert(alignof(HurdleComponent_HandleTargetingDataValid) == 0x000008, "Wrong alignment on HurdleComponent_HandleTargetingDataValid");
static_assert(sizeof(HurdleComponent_HandleTargetingDataValid) == 0x000130, "Wrong size on HurdleComponent_HandleTargetingDataValid");
static_assert(offsetof(HurdleComponent_HandleTargetingDataValid, TargetingData) == 0x000000, "Member 'HurdleComponent_HandleTargetingDataValid::TargetingData' has a wrong offset!");

struct HurdleComponent_OnPlayerStatePawnSet final
{
public:
	class APlayerState*                           Player;
	class APawn*                                  NewPawn;
	class APawn*                                  OldPawn;
};
static_assert(alignof(HurdleComponent_OnPlayerStatePawnSet) == 0x000008, "Wrong alignment on HurdleComponent_OnPlayerStatePawnSet");
static_assert(sizeof(HurdleComponent_OnPlayerStatePawnSet) == 0x000018, "Wrong size on HurdleComponent_OnPlayerStatePawnSet");
static_assert(offsetof(HurdleComponent_OnPlayerStatePawnSet, Player) == 0x000000, "Member 'HurdleComponent_OnPlayerStatePawnSet::Player' has a wrong offset!");
static_assert(offsetof(HurdleComponent_OnPlayerStatePawnSet, NewPawn) == 0x000008, "Member 'HurdleComponent_OnPlayerStatePawnSet::NewPawn' has a wrong offset!");
static_assert(offsetof(HurdleComponent_OnPlayerStatePawnSet, OldPawn) == 0x000010, "Member 'HurdleComponent_OnPlayerStatePawnSet::OldPawn' has a wrong offset!");

struct HurdleComponent_RegisterMutatorUpdatedDelegate final
{
public:
	class APawn*                                  AffectedPawn;
};
static_assert(alignof(HurdleComponent_RegisterMutatorUpdatedDelegate) == 0x000008, "Wrong alignment on HurdleComponent_RegisterMutatorUpdatedDelegate");
static_assert(sizeof(HurdleComponent_RegisterMutatorUpdatedDelegate) == 0x000008, "Wrong size on HurdleComponent_RegisterMutatorUpdatedDelegate");
static_assert(offsetof(HurdleComponent_RegisterMutatorUpdatedDelegate, AffectedPawn) == 0x000000, "Member 'HurdleComponent_RegisterMutatorUpdatedDelegate::AffectedPawn' has a wrong offset!");

struct HurdleComponent_ServerStartHurdle final
{
public:
	struct FReplicatedHurdleTargetingData         InReplicatedTargetingData;
	double                                        ClientLastTeleportTime;
};
static_assert(alignof(HurdleComponent_ServerStartHurdle) == 0x000008, "Wrong alignment on HurdleComponent_ServerStartHurdle");
static_assert(sizeof(HurdleComponent_ServerStartHurdle) == 0x000078, "Wrong size on HurdleComponent_ServerStartHurdle");
static_assert(offsetof(HurdleComponent_ServerStartHurdle, InReplicatedTargetingData) == 0x000000, "Member 'HurdleComponent_ServerStartHurdle::InReplicatedTargetingData' has a wrong offset!");
static_assert(offsetof(HurdleComponent_ServerStartHurdle, ClientLastTeleportTime) == 0x000070, "Member 'HurdleComponent_ServerStartHurdle::ClientLastTeleportTime' has a wrong offset!");

struct HurdleComponent_ShouldShowHurdleIndicator final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(HurdleComponent_ShouldShowHurdleIndicator) == 0x000001, "Wrong alignment on HurdleComponent_ShouldShowHurdleIndicator");
static_assert(sizeof(HurdleComponent_ShouldShowHurdleIndicator) == 0x000001, "Wrong size on HurdleComponent_ShouldShowHurdleIndicator");
static_assert(offsetof(HurdleComponent_ShouldShowHurdleIndicator, ReturnValue) == 0x000000, "Member 'HurdleComponent_ShouldShowHurdleIndicator::ReturnValue' has a wrong offset!");

struct HurdleLibrary_PerformHurdleTargeting final
{
public:
	const class ACharacter*                       Character;
	struct FHurdleInputConfig                     HurdleInputConfig;
	struct FHurdleTargetingData                   OutTargetingData;
	bool                                          bIsAutoHurdle;
	bool                                          ReturnValue;
	uint8                                         Pad_5A2[0x6];
};
static_assert(alignof(HurdleLibrary_PerformHurdleTargeting) == 0x000008, "Wrong alignment on HurdleLibrary_PerformHurdleTargeting");
static_assert(sizeof(HurdleLibrary_PerformHurdleTargeting) == 0x0005A8, "Wrong size on HurdleLibrary_PerformHurdleTargeting");
static_assert(offsetof(HurdleLibrary_PerformHurdleTargeting, Character) == 0x000000, "Member 'HurdleLibrary_PerformHurdleTargeting::Character' has a wrong offset!");
static_assert(offsetof(HurdleLibrary_PerformHurdleTargeting, HurdleInputConfig) == 0x000008, "Member 'HurdleLibrary_PerformHurdleTargeting::HurdleInputConfig' has a wrong offset!");
static_assert(offsetof(HurdleLibrary_PerformHurdleTargeting, OutTargetingData) == 0x000470, "Member 'HurdleLibrary_PerformHurdleTargeting::OutTargetingData' has a wrong offset!");
static_assert(offsetof(HurdleLibrary_PerformHurdleTargeting, bIsAutoHurdle) == 0x0005A0, "Member 'HurdleLibrary_PerformHurdleTargeting::bIsAutoHurdle' has a wrong offset!");
static_assert(offsetof(HurdleLibrary_PerformHurdleTargeting, ReturnValue) == 0x0005A1, "Member 'HurdleLibrary_PerformHurdleTargeting::ReturnValue' has a wrong offset!");

}
