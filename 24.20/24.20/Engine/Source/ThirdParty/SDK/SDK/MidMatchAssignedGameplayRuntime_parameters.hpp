#pragma once

#include "Basic.hpp"

#include "MidMatchAssignedGameplayRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation final
{
public:
	uint8                                         SquadId;
	uint8                                         Pad_1[0x7];
	const class UObject*                          WorldContextObject;
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation) == 0x000008, "Wrong alignment on FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation");
static_assert(sizeof(FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation) == 0x000028, "Wrong size on FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation");
static_assert(offsetof(FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation, SquadId) == 0x000000, "Member 'FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation::SquadId' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation, WorldContextObject) == 0x000008, "Member 'FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation, ReturnValue) == 0x000010, "Member 'FortGameStateComponent_AssignedObjective_CalculateSquadAvgLocation::ReturnValue' has a wrong offset!");

struct FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady final
{
public:
	struct FFortAssignedObjectiveData             ObjectiveData;
};
static_assert(alignof(FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady) == 0x000008, "Wrong alignment on FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady");
static_assert(sizeof(FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady) == 0x000028, "Wrong size on FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady");
static_assert(offsetof(FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady, ObjectiveData) == 0x000000, "Member 'FortGameStateComponent_AssignedObjective_OnAssignedObjectiveReady::ObjectiveData' has a wrong offset!");

}
