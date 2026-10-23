#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FDeploymentConsoleAircraftData final
{
public:
	uint8                                         Team;
	uint8                                         Pad_1[0x7];
	class AFortAthenaAircraft*                    Aircraft;
};
static_assert(alignof(FDeploymentConsoleAircraftData) == 0x000008, "Wrong alignment on FDeploymentConsoleAircraftData");
static_assert(sizeof(FDeploymentConsoleAircraftData) == 0x000010, "Wrong size on FDeploymentConsoleAircraftData");
static_assert(offsetof(FDeploymentConsoleAircraftData, Team) == 0x000000, "Member 'FDeploymentConsoleAircraftData::Team' has a wrong offset!");
static_assert(offsetof(FDeploymentConsoleAircraftData, Aircraft) == 0x000008, "Member 'FDeploymentConsoleAircraftData::Aircraft' has a wrong offset!");

struct FDeploymentConsoleTeamData final
{
public:
	uint8                                         Team;
	uint8                                         Pad_1[0x7];
	TArray<struct FVector2D>                      SpawnLocations;
};
static_assert(alignof(FDeploymentConsoleTeamData) == 0x000008, "Wrong alignment on FDeploymentConsoleTeamData");
static_assert(sizeof(FDeploymentConsoleTeamData) == 0x000018, "Wrong size on FDeploymentConsoleTeamData");
static_assert(offsetof(FDeploymentConsoleTeamData, Team) == 0x000000, "Member 'FDeploymentConsoleTeamData::Team' has a wrong offset!");
static_assert(offsetof(FDeploymentConsoleTeamData, SpawnLocations) == 0x000008, "Member 'FDeploymentConsoleTeamData::SpawnLocations' has a wrong offset!");

}
