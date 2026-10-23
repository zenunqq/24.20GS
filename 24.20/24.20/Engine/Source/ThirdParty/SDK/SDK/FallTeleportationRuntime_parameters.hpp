#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortFallTeleportSpawnerComponent_HandleGamePhaseChanged final
{
public:
	EAthenaGamePhase                              GamePhase;
};
static_assert(alignof(FortFallTeleportSpawnerComponent_HandleGamePhaseChanged) == 0x000001, "Wrong alignment on FortFallTeleportSpawnerComponent_HandleGamePhaseChanged");
static_assert(sizeof(FortFallTeleportSpawnerComponent_HandleGamePhaseChanged) == 0x000001, "Wrong size on FortFallTeleportSpawnerComponent_HandleGamePhaseChanged");
static_assert(offsetof(FortFallTeleportSpawnerComponent_HandleGamePhaseChanged, GamePhase) == 0x000000, "Member 'FortFallTeleportSpawnerComponent_HandleGamePhaseChanged::GamePhase' has a wrong offset!");

struct FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated final
{
public:
	float                                         NewEndTime;
};
static_assert(alignof(FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated) == 0x000004, "Wrong alignment on FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated");
static_assert(sizeof(FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated) == 0x000004, "Wrong size on FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated");
static_assert(offsetof(FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated, NewEndTime) == 0x000000, "Member 'FortFallTeleportSpawnerComponent_HandleWarmupCountdownEndTimeUpdated::NewEndTime' has a wrong offset!");

struct FortFallTeleportComponentBase_UpdateLastGroundLocation final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortFallTeleportComponentBase_UpdateLastGroundLocation) == 0x000008, "Wrong alignment on FortFallTeleportComponentBase_UpdateLastGroundLocation");
static_assert(sizeof(FortFallTeleportComponentBase_UpdateLastGroundLocation) == 0x000010, "Wrong size on FortFallTeleportComponentBase_UpdateLastGroundLocation");
static_assert(offsetof(FortFallTeleportComponentBase_UpdateLastGroundLocation, Character) == 0x000000, "Member 'FortFallTeleportComponentBase_UpdateLastGroundLocation::Character' has a wrong offset!");
static_assert(offsetof(FortFallTeleportComponentBase_UpdateLastGroundLocation, PrevMovementMode) == 0x000008, "Member 'FortFallTeleportComponentBase_UpdateLastGroundLocation::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(FortFallTeleportComponentBase_UpdateLastGroundLocation, PreviousCustomMode) == 0x000009, "Member 'FortFallTeleportComponentBase_UpdateLastGroundLocation::PreviousCustomMode' has a wrong offset!");

struct FortFallTeleportComponentBase_IsTeleportLocationValid final
{
public:
	struct FVector                                LocationToTest;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FortFallTeleportComponentBase_IsTeleportLocationValid) == 0x000008, "Wrong alignment on FortFallTeleportComponentBase_IsTeleportLocationValid");
static_assert(sizeof(FortFallTeleportComponentBase_IsTeleportLocationValid) == 0x000020, "Wrong size on FortFallTeleportComponentBase_IsTeleportLocationValid");
static_assert(offsetof(FortFallTeleportComponentBase_IsTeleportLocationValid, LocationToTest) == 0x000000, "Member 'FortFallTeleportComponentBase_IsTeleportLocationValid::LocationToTest' has a wrong offset!");
static_assert(offsetof(FortFallTeleportComponentBase_IsTeleportLocationValid, ReturnValue) == 0x000018, "Member 'FortFallTeleportComponentBase_IsTeleportLocationValid::ReturnValue' has a wrong offset!");

struct FortFallTeleportComponentBase_IsValidActorToTeleportOn final
{
public:
	class AActor*                                 ActorToTeleportOn;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortFallTeleportComponentBase_IsValidActorToTeleportOn) == 0x000008, "Wrong alignment on FortFallTeleportComponentBase_IsValidActorToTeleportOn");
static_assert(sizeof(FortFallTeleportComponentBase_IsValidActorToTeleportOn) == 0x000010, "Wrong size on FortFallTeleportComponentBase_IsValidActorToTeleportOn");
static_assert(offsetof(FortFallTeleportComponentBase_IsValidActorToTeleportOn, ActorToTeleportOn) == 0x000000, "Member 'FortFallTeleportComponentBase_IsValidActorToTeleportOn::ActorToTeleportOn' has a wrong offset!");
static_assert(offsetof(FortFallTeleportComponentBase_IsValidActorToTeleportOn, ReturnValue) == 0x000008, "Member 'FortFallTeleportComponentBase_IsValidActorToTeleportOn::ReturnValue' has a wrong offset!");

}
