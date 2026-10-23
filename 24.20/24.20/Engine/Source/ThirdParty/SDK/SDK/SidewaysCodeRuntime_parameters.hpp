#pragma once

#include "Basic.hpp"

#include "SidewaysCodeRuntime_structs.hpp"

namespace SDK::Params
{

struct SidewaysCheatManager_SetSidewaysState final
{
public:
	ESidewaysState                                SidewaysState;
};
static_assert(alignof(SidewaysCheatManager_SetSidewaysState) == 0x000001, "Wrong alignment on SidewaysCheatManager_SetSidewaysState");
static_assert(sizeof(SidewaysCheatManager_SetSidewaysState) == 0x000001, "Wrong size on SidewaysCheatManager_SetSidewaysState");
static_assert(offsetof(SidewaysCheatManager_SetSidewaysState, SidewaysState) == 0x000000, "Member 'SidewaysCheatManager_SetSidewaysState::SidewaysState' has a wrong offset!");

struct SidewaysStateComponent_HandleSidewaysStateChanged final
{
public:
	class ASidewaysPlayspace*                     NewSidewaysPlayspace;
	ESidewaysState                                OldState;
	ESidewaysState                                NewState;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(SidewaysStateComponent_HandleSidewaysStateChanged) == 0x000008, "Wrong alignment on SidewaysStateComponent_HandleSidewaysStateChanged");
static_assert(sizeof(SidewaysStateComponent_HandleSidewaysStateChanged) == 0x000010, "Wrong size on SidewaysStateComponent_HandleSidewaysStateChanged");
static_assert(offsetof(SidewaysStateComponent_HandleSidewaysStateChanged, NewSidewaysPlayspace) == 0x000000, "Member 'SidewaysStateComponent_HandleSidewaysStateChanged::NewSidewaysPlayspace' has a wrong offset!");
static_assert(offsetof(SidewaysStateComponent_HandleSidewaysStateChanged, OldState) == 0x000008, "Member 'SidewaysStateComponent_HandleSidewaysStateChanged::OldState' has a wrong offset!");
static_assert(offsetof(SidewaysStateComponent_HandleSidewaysStateChanged, NewState) == 0x000009, "Member 'SidewaysStateComponent_HandleSidewaysStateChanged::NewState' has a wrong offset!");

struct SidewaysStateComponent_OnRep_SidewaysPlayspace final
{
public:
	class ASidewaysPlayspace*                     NewSidewaysPlayspace;
};
static_assert(alignof(SidewaysStateComponent_OnRep_SidewaysPlayspace) == 0x000008, "Wrong alignment on SidewaysStateComponent_OnRep_SidewaysPlayspace");
static_assert(sizeof(SidewaysStateComponent_OnRep_SidewaysPlayspace) == 0x000008, "Wrong size on SidewaysStateComponent_OnRep_SidewaysPlayspace");
static_assert(offsetof(SidewaysStateComponent_OnRep_SidewaysPlayspace, NewSidewaysPlayspace) == 0x000000, "Member 'SidewaysStateComponent_OnRep_SidewaysPlayspace::NewSidewaysPlayspace' has a wrong offset!");

struct SidewaysStateComponent_OnRep_SidewaysState final
{
public:
	ESidewaysState                                LastSidewaysState;
};
static_assert(alignof(SidewaysStateComponent_OnRep_SidewaysState) == 0x000001, "Wrong alignment on SidewaysStateComponent_OnRep_SidewaysState");
static_assert(sizeof(SidewaysStateComponent_OnRep_SidewaysState) == 0x000001, "Wrong size on SidewaysStateComponent_OnRep_SidewaysState");
static_assert(offsetof(SidewaysStateComponent_OnRep_SidewaysState, LastSidewaysState) == 0x000000, "Member 'SidewaysStateComponent_OnRep_SidewaysState::LastSidewaysState' has a wrong offset!");

struct SidewaysStateComponent_SetSidewaysState final
{
public:
	ESidewaysState                                NewState;
	uint8                                         Pad_1[0x7];
	class ASidewaysPlayspace*                     NewSidewaysPlayspace;
};
static_assert(alignof(SidewaysStateComponent_SetSidewaysState) == 0x000008, "Wrong alignment on SidewaysStateComponent_SetSidewaysState");
static_assert(sizeof(SidewaysStateComponent_SetSidewaysState) == 0x000010, "Wrong size on SidewaysStateComponent_SetSidewaysState");
static_assert(offsetof(SidewaysStateComponent_SetSidewaysState, NewState) == 0x000000, "Member 'SidewaysStateComponent_SetSidewaysState::NewState' has a wrong offset!");
static_assert(offsetof(SidewaysStateComponent_SetSidewaysState, NewSidewaysPlayspace) == 0x000008, "Member 'SidewaysStateComponent_SetSidewaysState::NewSidewaysPlayspace' has a wrong offset!");

struct SidewaysStateComponent_GetSidewaysState final
{
public:
	ESidewaysState                                ReturnValue;
};
static_assert(alignof(SidewaysStateComponent_GetSidewaysState) == 0x000001, "Wrong alignment on SidewaysStateComponent_GetSidewaysState");
static_assert(sizeof(SidewaysStateComponent_GetSidewaysState) == 0x000001, "Wrong size on SidewaysStateComponent_GetSidewaysState");
static_assert(offsetof(SidewaysStateComponent_GetSidewaysState, ReturnValue) == 0x000000, "Member 'SidewaysStateComponent_GetSidewaysState::ReturnValue' has a wrong offset!");

struct SidewaysLibrary_GetSidewaysStateComponent final
{
public:
	const class AActor*                           Owner;
	class USidewaysStateComponent*                ReturnValue;
};
static_assert(alignof(SidewaysLibrary_GetSidewaysStateComponent) == 0x000008, "Wrong alignment on SidewaysLibrary_GetSidewaysStateComponent");
static_assert(sizeof(SidewaysLibrary_GetSidewaysStateComponent) == 0x000010, "Wrong size on SidewaysLibrary_GetSidewaysStateComponent");
static_assert(offsetof(SidewaysLibrary_GetSidewaysStateComponent, Owner) == 0x000000, "Member 'SidewaysLibrary_GetSidewaysStateComponent::Owner' has a wrong offset!");
static_assert(offsetof(SidewaysLibrary_GetSidewaysStateComponent, ReturnValue) == 0x000008, "Member 'SidewaysLibrary_GetSidewaysStateComponent::ReturnValue' has a wrong offset!");

}
