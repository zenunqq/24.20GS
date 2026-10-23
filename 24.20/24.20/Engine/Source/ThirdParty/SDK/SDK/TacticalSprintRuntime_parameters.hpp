#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TacticalSprintRuntime_structs.hpp"

namespace SDK::Params
{

struct FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog final
{
public:
	class UObject*                                LoggingSource;
	ESprintLoggingVerbosityLevel                  Verbosity;
	uint8                                         Pad_9[0x7];
	class FString                                 LogString;
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog) == 0x000020, "Wrong size on FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog, LoggingSource) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog::LoggingSource' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog, Verbosity) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog::Verbosity' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog, LogString) == 0x000010, "Member 'FortPlayerControllerComponent_TacticalSprint_LogAndVisualLog::LogString' has a wrong offset!");

struct FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged final
{
public:
	bool                                          bAutoRunIsOn;
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged) == 0x000001, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged) == 0x000001, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged, bAutoRunIsOn) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnAutoRunChanged::bAutoRunIsOn' has a wrong offset!");

struct FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged) == 0x000010, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged, Character) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged, PrevMovementMode) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'FortPlayerControllerComponent_TacticalSprint_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct FortPlayerControllerComponent_TacticalSprint_OnPawnChanged final
{
public:
	class AFortPawn*                              InPawn;
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnPawnChanged) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnPawnChanged");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnPawnChanged) == 0x000008, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnPawnChanged");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnPawnChanged, InPawn) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnPawnChanged::InPawn' has a wrong offset!");

struct FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet final
{
public:
	class APlayerState*                           Player;
	class APawn*                                  NewPawn;
	class APawn*                                  OldPawn;
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet) == 0x000018, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet, Player) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet::Player' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet, NewPawn) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet::NewPawn' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet, OldPawn) == 0x000010, "Member 'FortPlayerControllerComponent_TacticalSprint_OnPlayerStatePawnSet::OldPawn' has a wrong offset!");

struct FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PreviousWeapon;
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped) == 0x000008, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped) == 0x000010, "Wrong size on FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped, NewWeapon) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped, PreviousWeapon) == 0x000008, "Member 'FortPlayerControllerComponent_TacticalSprint_OnWeaponEquipped::PreviousWeapon' has a wrong offset!");

struct FortPlayerControllerComponent_TacticalSprint_SetIsSprinting final
{
public:
	bool                                          bNewIsSprinting;
};
static_assert(alignof(FortPlayerControllerComponent_TacticalSprint_SetIsSprinting) == 0x000001, "Wrong alignment on FortPlayerControllerComponent_TacticalSprint_SetIsSprinting");
static_assert(sizeof(FortPlayerControllerComponent_TacticalSprint_SetIsSprinting) == 0x000001, "Wrong size on FortPlayerControllerComponent_TacticalSprint_SetIsSprinting");
static_assert(offsetof(FortPlayerControllerComponent_TacticalSprint_SetIsSprinting, bNewIsSprinting) == 0x000000, "Member 'FortPlayerControllerComponent_TacticalSprint_SetIsSprinting::bNewIsSprinting' has a wrong offset!");

}
