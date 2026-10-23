#pragma once

#include "Basic.hpp"

#include "TempestRuntime_structs.hpp"

namespace SDK::Params
{

struct FortCheatManager_Tempest_EndTempestStorm final
{
public:
	class FString                                 StormName;
};
static_assert(alignof(FortCheatManager_Tempest_EndTempestStorm) == 0x000008, "Wrong alignment on FortCheatManager_Tempest_EndTempestStorm");
static_assert(sizeof(FortCheatManager_Tempest_EndTempestStorm) == 0x000010, "Wrong size on FortCheatManager_Tempest_EndTempestStorm");
static_assert(offsetof(FortCheatManager_Tempest_EndTempestStorm, StormName) == 0x000000, "Member 'FortCheatManager_Tempest_EndTempestStorm::StormName' has a wrong offset!");

struct TempestStateMachineComponent_ForceDissipate final
{
public:
	class FString                                 InDissipationReason;
};
static_assert(alignof(TempestStateMachineComponent_ForceDissipate) == 0x000008, "Wrong alignment on TempestStateMachineComponent_ForceDissipate");
static_assert(sizeof(TempestStateMachineComponent_ForceDissipate) == 0x000010, "Wrong size on TempestStateMachineComponent_ForceDissipate");
static_assert(offsetof(TempestStateMachineComponent_ForceDissipate, InDissipationReason) == 0x000000, "Member 'TempestStateMachineComponent_ForceDissipate::InDissipationReason' has a wrong offset!");

struct TempestStateMachineComponent_GetCurrentState final
{
public:
	ETempestState                                 ReturnValue;
};
static_assert(alignof(TempestStateMachineComponent_GetCurrentState) == 0x000001, "Wrong alignment on TempestStateMachineComponent_GetCurrentState");
static_assert(sizeof(TempestStateMachineComponent_GetCurrentState) == 0x000001, "Wrong size on TempestStateMachineComponent_GetCurrentState");
static_assert(offsetof(TempestStateMachineComponent_GetCurrentState, ReturnValue) == 0x000000, "Member 'TempestStateMachineComponent_GetCurrentState::ReturnValue' has a wrong offset!");

struct TempestStateMachineComponent_GetCurrentStateCompletionPercentage final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(TempestStateMachineComponent_GetCurrentStateCompletionPercentage) == 0x000004, "Wrong alignment on TempestStateMachineComponent_GetCurrentStateCompletionPercentage");
static_assert(sizeof(TempestStateMachineComponent_GetCurrentStateCompletionPercentage) == 0x000004, "Wrong size on TempestStateMachineComponent_GetCurrentStateCompletionPercentage");
static_assert(offsetof(TempestStateMachineComponent_GetCurrentStateCompletionPercentage, ReturnValue) == 0x000000, "Member 'TempestStateMachineComponent_GetCurrentStateCompletionPercentage::ReturnValue' has a wrong offset!");

struct TempestStateMachineComponent_GetCurrentStateInfo final
{
public:
	struct FTempestStateInfo                      ReturnValue;
};
static_assert(alignof(TempestStateMachineComponent_GetCurrentStateInfo) == 0x000004, "Wrong alignment on TempestStateMachineComponent_GetCurrentStateInfo");
static_assert(sizeof(TempestStateMachineComponent_GetCurrentStateInfo) == 0x00000C, "Wrong size on TempestStateMachineComponent_GetCurrentStateInfo");
static_assert(offsetof(TempestStateMachineComponent_GetCurrentStateInfo, ReturnValue) == 0x000000, "Member 'TempestStateMachineComponent_GetCurrentStateInfo::ReturnValue' has a wrong offset!");

}
