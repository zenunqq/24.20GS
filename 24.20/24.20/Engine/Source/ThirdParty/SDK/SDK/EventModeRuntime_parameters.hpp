#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed final
{
public:
	class APawn*                                  PossessedPawn;
};
static_assert(alignof(FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed) == 0x000008, "Wrong alignment on FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed");
static_assert(sizeof(FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed) == 0x000008, "Wrong size on FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed");
static_assert(offsetof(FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed, PossessedPawn) == 0x000000, "Member 'FortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed::PossessedPawn' has a wrong offset!");

struct FortGameFrameworkComponent_EventMode_GetIsEventModeActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortGameFrameworkComponent_EventMode_GetIsEventModeActive) == 0x000001, "Wrong alignment on FortGameFrameworkComponent_EventMode_GetIsEventModeActive");
static_assert(sizeof(FortGameFrameworkComponent_EventMode_GetIsEventModeActive) == 0x000001, "Wrong size on FortGameFrameworkComponent_EventMode_GetIsEventModeActive");
static_assert(offsetof(FortGameFrameworkComponent_EventMode_GetIsEventModeActive, ReturnValue) == 0x000000, "Member 'FortGameFrameworkComponent_EventMode_GetIsEventModeActive::ReturnValue' has a wrong offset!");

struct FortGameFrameworkComponent_EventMode_GetIsFocusAvailable final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortGameFrameworkComponent_EventMode_GetIsFocusAvailable) == 0x000001, "Wrong alignment on FortGameFrameworkComponent_EventMode_GetIsFocusAvailable");
static_assert(sizeof(FortGameFrameworkComponent_EventMode_GetIsFocusAvailable) == 0x000001, "Wrong size on FortGameFrameworkComponent_EventMode_GetIsFocusAvailable");
static_assert(offsetof(FortGameFrameworkComponent_EventMode_GetIsFocusAvailable, ReturnValue) == 0x000000, "Member 'FortGameFrameworkComponent_EventMode_GetIsFocusAvailable::ReturnValue' has a wrong offset!");

struct FortGameFrameworkComponent_EventMode_GetIsFocusing final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortGameFrameworkComponent_EventMode_GetIsFocusing) == 0x000001, "Wrong alignment on FortGameFrameworkComponent_EventMode_GetIsFocusing");
static_assert(sizeof(FortGameFrameworkComponent_EventMode_GetIsFocusing) == 0x000001, "Wrong size on FortGameFrameworkComponent_EventMode_GetIsFocusing");
static_assert(offsetof(FortGameFrameworkComponent_EventMode_GetIsFocusing, ReturnValue) == 0x000000, "Member 'FortGameFrameworkComponent_EventMode_GetIsFocusing::ReturnValue' has a wrong offset!");

}
