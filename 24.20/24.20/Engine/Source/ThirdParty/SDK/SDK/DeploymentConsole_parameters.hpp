#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DeploymentConsole_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct DeploymentConsoleComponent_ForcePlayerEnterAircraft final
{
public:
	class AFortPlayerControllerAthena*            InController;
	class AFortAthenaAircraft*                    InAircraft;
};
static_assert(alignof(DeploymentConsoleComponent_ForcePlayerEnterAircraft) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_ForcePlayerEnterAircraft");
static_assert(sizeof(DeploymentConsoleComponent_ForcePlayerEnterAircraft) == 0x000010, "Wrong size on DeploymentConsoleComponent_ForcePlayerEnterAircraft");
static_assert(offsetof(DeploymentConsoleComponent_ForcePlayerEnterAircraft, InController) == 0x000000, "Member 'DeploymentConsoleComponent_ForcePlayerEnterAircraft::InController' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_ForcePlayerEnterAircraft, InAircraft) == 0x000008, "Member 'DeploymentConsoleComponent_ForcePlayerEnterAircraft::InAircraft' has a wrong offset!");

struct DeploymentConsoleComponent_GetMinigameTeamsWithPlayers final
{
public:
	const class AFortMinigame*                    InMinigame;
	TArray<uint8>                                 ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_GetMinigameTeamsWithPlayers) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_GetMinigameTeamsWithPlayers");
static_assert(sizeof(DeploymentConsoleComponent_GetMinigameTeamsWithPlayers) == 0x000018, "Wrong size on DeploymentConsoleComponent_GetMinigameTeamsWithPlayers");
static_assert(offsetof(DeploymentConsoleComponent_GetMinigameTeamsWithPlayers, InMinigame) == 0x000000, "Member 'DeploymentConsoleComponent_GetMinigameTeamsWithPlayers::InMinigame' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_GetMinigameTeamsWithPlayers, ReturnValue) == 0x000008, "Member 'DeploymentConsoleComponent_GetMinigameTeamsWithPlayers::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_MoveBoxTo final
{
public:
	struct FBox2D                                 InBox;
	struct FVector2D                              VectorToMoveTo;
	struct FBox2D                                 ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_MoveBoxTo) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_MoveBoxTo");
static_assert(sizeof(DeploymentConsoleComponent_MoveBoxTo) == 0x000060, "Wrong size on DeploymentConsoleComponent_MoveBoxTo");
static_assert(offsetof(DeploymentConsoleComponent_MoveBoxTo, InBox) == 0x000000, "Member 'DeploymentConsoleComponent_MoveBoxTo::InBox' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_MoveBoxTo, VectorToMoveTo) == 0x000028, "Member 'DeploymentConsoleComponent_MoveBoxTo::VectorToMoveTo' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_MoveBoxTo, ReturnValue) == 0x000038, "Member 'DeploymentConsoleComponent_MoveBoxTo::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_ConstructInventoryOnController final
{
public:
	class AFortPlayerControllerAthena*            InController;
};
static_assert(alignof(DeploymentConsoleComponent_ConstructInventoryOnController) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_ConstructInventoryOnController");
static_assert(sizeof(DeploymentConsoleComponent_ConstructInventoryOnController) == 0x000008, "Wrong size on DeploymentConsoleComponent_ConstructInventoryOnController");
static_assert(offsetof(DeploymentConsoleComponent_ConstructInventoryOnController, InController) == 0x000000, "Member 'DeploymentConsoleComponent_ConstructInventoryOnController::InController' has a wrong offset!");

struct DeploymentConsoleComponent_InitializeFlightPath final
{
public:
	class AFortGameStateAthena*                   GSA;
	struct FAircraftFlightConstructionInfo        FlightPathConstructionInfo;
};
static_assert(alignof(DeploymentConsoleComponent_InitializeFlightPath) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_InitializeFlightPath");
static_assert(sizeof(DeploymentConsoleComponent_InitializeFlightPath) == 0x000080, "Wrong size on DeploymentConsoleComponent_InitializeFlightPath");
static_assert(offsetof(DeploymentConsoleComponent_InitializeFlightPath, GSA) == 0x000000, "Member 'DeploymentConsoleComponent_InitializeFlightPath::GSA' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_InitializeFlightPath, FlightPathConstructionInfo) == 0x000008, "Member 'DeploymentConsoleComponent_InitializeFlightPath::FlightPathConstructionInfo' has a wrong offset!");

struct DeploymentConsoleComponent_RetrievePlayerSpawnLocation final
{
public:
	bool                                          bIsGameInProgress;
	bool                                          bGroupTeams;
	uint8                                         InTeam;
	uint8                                         Pad_3[0x5];
	struct FVector2D                              ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_RetrievePlayerSpawnLocation) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_RetrievePlayerSpawnLocation");
static_assert(sizeof(DeploymentConsoleComponent_RetrievePlayerSpawnLocation) == 0x000018, "Wrong size on DeploymentConsoleComponent_RetrievePlayerSpawnLocation");
static_assert(offsetof(DeploymentConsoleComponent_RetrievePlayerSpawnLocation, bIsGameInProgress) == 0x000000, "Member 'DeploymentConsoleComponent_RetrievePlayerSpawnLocation::bIsGameInProgress' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_RetrievePlayerSpawnLocation, bGroupTeams) == 0x000001, "Member 'DeploymentConsoleComponent_RetrievePlayerSpawnLocation::bGroupTeams' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_RetrievePlayerSpawnLocation, InTeam) == 0x000002, "Member 'DeploymentConsoleComponent_RetrievePlayerSpawnLocation::InTeam' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_RetrievePlayerSpawnLocation, ReturnValue) == 0x000008, "Member 'DeploymentConsoleComponent_RetrievePlayerSpawnLocation::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_SetAircraftDropZone final
{
public:
	struct FBox2D                                 InDropZone;
};
static_assert(alignof(DeploymentConsoleComponent_SetAircraftDropZone) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_SetAircraftDropZone");
static_assert(sizeof(DeploymentConsoleComponent_SetAircraftDropZone) == 0x000028, "Wrong size on DeploymentConsoleComponent_SetAircraftDropZone");
static_assert(offsetof(DeploymentConsoleComponent_SetAircraftDropZone, InDropZone) == 0x000000, "Member 'DeploymentConsoleComponent_SetAircraftDropZone::InDropZone' has a wrong offset!");

struct DeploymentConsoleComponent_SetAircraftLock final
{
public:
	bool                                          bIsLocked;
};
static_assert(alignof(DeploymentConsoleComponent_SetAircraftLock) == 0x000001, "Wrong alignment on DeploymentConsoleComponent_SetAircraftLock");
static_assert(sizeof(DeploymentConsoleComponent_SetAircraftLock) == 0x000001, "Wrong size on DeploymentConsoleComponent_SetAircraftLock");
static_assert(offsetof(DeploymentConsoleComponent_SetAircraftLock, bIsLocked) == 0x000000, "Member 'DeploymentConsoleComponent_SetAircraftLock::bIsLocked' has a wrong offset!");

struct DeploymentConsoleComponent_SetPlayerIsWaiting final
{
public:
	class AController*                            InController;
	bool                                          bInPlayerIsWaiting;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(DeploymentConsoleComponent_SetPlayerIsWaiting) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_SetPlayerIsWaiting");
static_assert(sizeof(DeploymentConsoleComponent_SetPlayerIsWaiting) == 0x000010, "Wrong size on DeploymentConsoleComponent_SetPlayerIsWaiting");
static_assert(offsetof(DeploymentConsoleComponent_SetPlayerIsWaiting, InController) == 0x000000, "Member 'DeploymentConsoleComponent_SetPlayerIsWaiting::InController' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_SetPlayerIsWaiting, bInPlayerIsWaiting) == 0x000008, "Member 'DeploymentConsoleComponent_SetPlayerIsWaiting::bInPlayerIsWaiting' has a wrong offset!");

struct DeploymentConsoleComponent_SetupTeamSpawnPoints final
{
public:
	bool                                          bGroupTeams;
};
static_assert(alignof(DeploymentConsoleComponent_SetupTeamSpawnPoints) == 0x000001, "Wrong alignment on DeploymentConsoleComponent_SetupTeamSpawnPoints");
static_assert(sizeof(DeploymentConsoleComponent_SetupTeamSpawnPoints) == 0x000001, "Wrong size on DeploymentConsoleComponent_SetupTeamSpawnPoints");
static_assert(offsetof(DeploymentConsoleComponent_SetupTeamSpawnPoints, bGroupTeams) == 0x000000, "Member 'DeploymentConsoleComponent_SetupTeamSpawnPoints::bGroupTeams' has a wrong offset!");

struct DeploymentConsoleComponent_SpawnAircraft final
{
public:
	int32                                         FlightIndex;
	uint8                                         Pad_4[0x4];
	class AFortAthenaAircraft*                    ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_SpawnAircraft) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_SpawnAircraft");
static_assert(sizeof(DeploymentConsoleComponent_SpawnAircraft) == 0x000010, "Wrong size on DeploymentConsoleComponent_SpawnAircraft");
static_assert(offsetof(DeploymentConsoleComponent_SpawnAircraft, FlightIndex) == 0x000000, "Member 'DeploymentConsoleComponent_SpawnAircraft::FlightIndex' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_SpawnAircraft, ReturnValue) == 0x000008, "Member 'DeploymentConsoleComponent_SpawnAircraft::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_SpawnAircrafts final
{
public:
	bool                                          bSpawnAircraftForEachTeam;
	uint8                                         Pad_1[0x7];
	TArray<struct FDeploymentConsoleAircraftData> ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_SpawnAircrafts) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_SpawnAircrafts");
static_assert(sizeof(DeploymentConsoleComponent_SpawnAircrafts) == 0x000018, "Wrong size on DeploymentConsoleComponent_SpawnAircrafts");
static_assert(offsetof(DeploymentConsoleComponent_SpawnAircrafts, bSpawnAircraftForEachTeam) == 0x000000, "Member 'DeploymentConsoleComponent_SpawnAircrafts::bSpawnAircraftForEachTeam' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_SpawnAircrafts, ReturnValue) == 0x000008, "Member 'DeploymentConsoleComponent_SpawnAircrafts::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_AdjustLocationToValidHeight final
{
public:
	struct FVector                                RespawnLocation;
	struct FVector                                ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_AdjustLocationToValidHeight) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_AdjustLocationToValidHeight");
static_assert(sizeof(DeploymentConsoleComponent_AdjustLocationToValidHeight) == 0x000030, "Wrong size on DeploymentConsoleComponent_AdjustLocationToValidHeight");
static_assert(offsetof(DeploymentConsoleComponent_AdjustLocationToValidHeight, RespawnLocation) == 0x000000, "Member 'DeploymentConsoleComponent_AdjustLocationToValidHeight::RespawnLocation' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_AdjustLocationToValidHeight, ReturnValue) == 0x000018, "Member 'DeploymentConsoleComponent_AdjustLocationToValidHeight::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_CalculateSpawnRotationFromLocation final
{
public:
	struct FVector                                InSpawnLocation;
	struct FRotator                               ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_CalculateSpawnRotationFromLocation) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_CalculateSpawnRotationFromLocation");
static_assert(sizeof(DeploymentConsoleComponent_CalculateSpawnRotationFromLocation) == 0x000030, "Wrong size on DeploymentConsoleComponent_CalculateSpawnRotationFromLocation");
static_assert(offsetof(DeploymentConsoleComponent_CalculateSpawnRotationFromLocation, InSpawnLocation) == 0x000000, "Member 'DeploymentConsoleComponent_CalculateSpawnRotationFromLocation::InSpawnLocation' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_CalculateSpawnRotationFromLocation, ReturnValue) == 0x000018, "Member 'DeploymentConsoleComponent_CalculateSpawnRotationFromLocation::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_GetCachedAircraftSpawnZone final
{
public:
	struct FBox2D                                 ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_GetCachedAircraftSpawnZone) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_GetCachedAircraftSpawnZone");
static_assert(sizeof(DeploymentConsoleComponent_GetCachedAircraftSpawnZone) == 0x000028, "Wrong size on DeploymentConsoleComponent_GetCachedAircraftSpawnZone");
static_assert(offsetof(DeploymentConsoleComponent_GetCachedAircraftSpawnZone, ReturnValue) == 0x000000, "Member 'DeploymentConsoleComponent_GetCachedAircraftSpawnZone::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo final
{
public:
	const class AFortGameStateAthena*             GameStateAthena;
	EAirCraftBehavior                             AirCraftBehavior;
	uint8                                         Pad_9[0x7];
	struct FAircraftFlightConstructionInfo        ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo");
static_assert(sizeof(DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo) == 0x000088, "Wrong size on DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo");
static_assert(offsetof(DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo, GameStateAthena) == 0x000000, "Member 'DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo::GameStateAthena' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo, AirCraftBehavior) == 0x000008, "Member 'DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo::AirCraftBehavior' has a wrong offset!");
static_assert(offsetof(DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo, ReturnValue) == 0x000010, "Member 'DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_GetMapInfo final
{
public:
	class AFortAthenaMapInfo*                     ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_GetMapInfo) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_GetMapInfo");
static_assert(sizeof(DeploymentConsoleComponent_GetMapInfo) == 0x000008, "Wrong size on DeploymentConsoleComponent_GetMapInfo");
static_assert(offsetof(DeploymentConsoleComponent_GetMapInfo, ReturnValue) == 0x000000, "Member 'DeploymentConsoleComponent_GetMapInfo::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_GetSpawnPoints final
{
public:
	TArray<struct FVector2D>                      ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_GetSpawnPoints) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_GetSpawnPoints");
static_assert(sizeof(DeploymentConsoleComponent_GetSpawnPoints) == 0x000010, "Wrong size on DeploymentConsoleComponent_GetSpawnPoints");
static_assert(offsetof(DeploymentConsoleComponent_GetSpawnPoints, ReturnValue) == 0x000000, "Member 'DeploymentConsoleComponent_GetSpawnPoints::ReturnValue' has a wrong offset!");

struct DeploymentConsoleComponent_GetTeamSpawnData final
{
public:
	TArray<struct FDeploymentConsoleTeamData>     ReturnValue;
};
static_assert(alignof(DeploymentConsoleComponent_GetTeamSpawnData) == 0x000008, "Wrong alignment on DeploymentConsoleComponent_GetTeamSpawnData");
static_assert(sizeof(DeploymentConsoleComponent_GetTeamSpawnData) == 0x000010, "Wrong size on DeploymentConsoleComponent_GetTeamSpawnData");
static_assert(offsetof(DeploymentConsoleComponent_GetTeamSpawnData, ReturnValue) == 0x000000, "Member 'DeploymentConsoleComponent_GetTeamSpawnData::ReturnValue' has a wrong offset!");

}
