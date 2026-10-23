#pragma once

#include "Basic.hpp"

#include "MidMatchAssignedGameplayRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AIModule_classes.hpp"

namespace SDK
{

class UFortGameStateComponent_AssignedObjective final : public UFortGameStateComponent
{
public:
	struct FScalableFloat                         IdealNumSquadsPerObjective;
	struct FScalableFloat                         bAllowUnopposedSquads;
	struct FScalableFloat                         MinPairedSquadDistForUnopposed;
	struct FScalableFloat                         UnopposedSquad_FakeSquadMaxSafeZonePct;
	struct FScalableFloat                         UnopposedSquad_FakeSquadMinDistToSquad;
	struct FScalableFloat                         SpawnObjectivesInsideSafeZonePct;
	TSoftObjectPtr<class UEnvQuery>               AssignedObjectiveLocationEnvQuery;
	TArray<struct FFortAssignedObjectiveData>     AssignedObjectives;
	uint8                                         Pad_1C8[0x8];

public:
	static struct FVector CalculateSquadAvgLocation(const uint8 SquadId, const class UObject* WorldContextObject);

	void OnAssignedObjectiveReady(struct FFortAssignedObjectiveData& ObjectiveData);
	void StartAssignedObjectives();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameStateComponent_AssignedObjective">();
	}
	static class UFortGameStateComponent_AssignedObjective* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameStateComponent_AssignedObjective>();
	}
};
static_assert(alignof(UFortGameStateComponent_AssignedObjective) == 0x000008, "Wrong alignment on UFortGameStateComponent_AssignedObjective");
static_assert(sizeof(UFortGameStateComponent_AssignedObjective) == 0x0001D0, "Wrong size on UFortGameStateComponent_AssignedObjective");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, IdealNumSquadsPerObjective) == 0x0000A0, "Member 'UFortGameStateComponent_AssignedObjective::IdealNumSquadsPerObjective' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, bAllowUnopposedSquads) == 0x0000C8, "Member 'UFortGameStateComponent_AssignedObjective::bAllowUnopposedSquads' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, MinPairedSquadDistForUnopposed) == 0x0000F0, "Member 'UFortGameStateComponent_AssignedObjective::MinPairedSquadDistForUnopposed' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, UnopposedSquad_FakeSquadMaxSafeZonePct) == 0x000118, "Member 'UFortGameStateComponent_AssignedObjective::UnopposedSquad_FakeSquadMaxSafeZonePct' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, UnopposedSquad_FakeSquadMinDistToSquad) == 0x000140, "Member 'UFortGameStateComponent_AssignedObjective::UnopposedSquad_FakeSquadMinDistToSquad' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, SpawnObjectivesInsideSafeZonePct) == 0x000168, "Member 'UFortGameStateComponent_AssignedObjective::SpawnObjectivesInsideSafeZonePct' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, AssignedObjectiveLocationEnvQuery) == 0x000190, "Member 'UFortGameStateComponent_AssignedObjective::AssignedObjectiveLocationEnvQuery' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_AssignedObjective, AssignedObjectives) == 0x0001B8, "Member 'UFortGameStateComponent_AssignedObjective::AssignedObjectives' has a wrong offset!");

class UFortQueryContext_SpawnedObjectiveLocations final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_SpawnedObjectiveLocations">();
	}
	static class UFortQueryContext_SpawnedObjectiveLocations* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_SpawnedObjectiveLocations>();
	}
};
static_assert(alignof(UFortQueryContext_SpawnedObjectiveLocations) == 0x000008, "Wrong alignment on UFortQueryContext_SpawnedObjectiveLocations");
static_assert(sizeof(UFortQueryContext_SpawnedObjectiveLocations) == 0x000028, "Wrong size on UFortQueryContext_SpawnedObjectiveLocations");

class UFortQueryContext_SquadAvgLocationsForObjective final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_SquadAvgLocationsForObjective">();
	}
	static class UFortQueryContext_SquadAvgLocationsForObjective* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_SquadAvgLocationsForObjective>();
	}
};
static_assert(alignof(UFortQueryContext_SquadAvgLocationsForObjective) == 0x000008, "Wrong alignment on UFortQueryContext_SquadAvgLocationsForObjective");
static_assert(sizeof(UFortQueryContext_SquadAvgLocationsForObjective) == 0x000028, "Wrong size on UFortQueryContext_SquadAvgLocationsForObjective");

class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance final : public UEnvQueryTest
{
public:
	bool                                          bUseDistance2D;
	uint8                                         Pad_1F9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_ClosestPlayersToObjectiveDeltaDistance">();
	}
	static class UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance>();
	}
};
static_assert(alignof(UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance) == 0x000008, "Wrong alignment on UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance");
static_assert(sizeof(UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance) == 0x000200, "Wrong size on UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance");
static_assert(offsetof(UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance, bUseDistance2D) == 0x0001F8, "Member 'UFortQueryTest_ClosestPlayersToObjectiveDeltaDistance::bUseDistance2D' has a wrong offset!");

}
