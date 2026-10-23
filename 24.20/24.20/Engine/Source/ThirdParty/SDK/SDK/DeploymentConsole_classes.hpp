#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DeploymentConsole_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UDeploymentConsoleComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x28];
	TArray<struct FDeploymentConsoleAircraftData> Aircrafts;
	struct FScalableFloat                         RadiusPercentForRespawnMin;
	struct FScalableFloat                         RadiusPercentForRespawnMax;
	struct FScalableFloat                         MaxRespawnRadius;
	struct FScalableFloat                         TeamMemberSpread;
	struct FScalableFloat                         TraceForGroundStart;
	struct FScalableFloat                         TraceForGroundEnd;
	struct FScalableFloat                         MinHeightFromGround;
	struct FScalableFloat                         MinHeightFromZero;
	TArray<struct FVector2D>                      SpawnPoints;
	TArray<struct FDeploymentConsoleTeamData>     TeamSpawnData;

public:
	static void ForcePlayerEnterAircraft(class AFortPlayerControllerAthena* InController, class AFortAthenaAircraft* InAircraft);
	static TArray<uint8> GetMinigameTeamsWithPlayers(const class AFortMinigame* InMinigame);
	static struct FBox2D MoveBoxTo(const struct FBox2D& InBox, const struct FVector2D& VectorToMoveTo);

	void ConstructInventoryOnController(class AFortPlayerControllerAthena* InController);
	void InitializeFlightPath(class AFortGameStateAthena* GSA, const struct FAircraftFlightConstructionInfo& FlightPathConstructionInfo);
	struct FVector2D RetrievePlayerSpawnLocation(const bool bIsGameInProgress, const bool bGroupTeams, const uint8 InTeam);
	void SetAircraftDropZone(const struct FBox2D& InDropZone);
	void SetAircraftLock(const bool bIsLocked);
	void SetPlayerIsWaiting(class AController* InController, const bool bInPlayerIsWaiting);
	void SetupTeamSpawnPoints(const bool bGroupTeams);
	class AFortAthenaAircraft* SpawnAircraft(const int32 FlightIndex);
	TArray<struct FDeploymentConsoleAircraftData> SpawnAircrafts(const bool bSpawnAircraftForEachTeam);

	struct FVector AdjustLocationToValidHeight(const struct FVector& RespawnLocation) const;
	struct FRotator CalculateSpawnRotationFromLocation(const struct FVector& InSpawnLocation) const;
	void ClearFlightInfos() const;
	const struct FBox2D GetCachedAircraftSpawnZone() const;
	struct FAircraftFlightConstructionInfo GetDefaultFlightPathConstructionInfo(const class AFortGameStateAthena* GameStateAthena, const EAirCraftBehavior AirCraftBehavior) const;
	class AFortAthenaMapInfo* GetMapInfo() const;
	const TArray<struct FVector2D> GetSpawnPoints() const;
	const TArray<struct FDeploymentConsoleTeamData> GetTeamSpawnData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DeploymentConsoleComponent">();
	}
	static class UDeploymentConsoleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeploymentConsoleComponent>();
	}
};
static_assert(alignof(UDeploymentConsoleComponent) == 0x000008, "Wrong alignment on UDeploymentConsoleComponent");
static_assert(sizeof(UDeploymentConsoleComponent) == 0x000238, "Wrong size on UDeploymentConsoleComponent");
static_assert(offsetof(UDeploymentConsoleComponent, Aircrafts) == 0x0000C8, "Member 'UDeploymentConsoleComponent::Aircrafts' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, RadiusPercentForRespawnMin) == 0x0000D8, "Member 'UDeploymentConsoleComponent::RadiusPercentForRespawnMin' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, RadiusPercentForRespawnMax) == 0x000100, "Member 'UDeploymentConsoleComponent::RadiusPercentForRespawnMax' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, MaxRespawnRadius) == 0x000128, "Member 'UDeploymentConsoleComponent::MaxRespawnRadius' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, TeamMemberSpread) == 0x000150, "Member 'UDeploymentConsoleComponent::TeamMemberSpread' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, TraceForGroundStart) == 0x000178, "Member 'UDeploymentConsoleComponent::TraceForGroundStart' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, TraceForGroundEnd) == 0x0001A0, "Member 'UDeploymentConsoleComponent::TraceForGroundEnd' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, MinHeightFromGround) == 0x0001C8, "Member 'UDeploymentConsoleComponent::MinHeightFromGround' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, MinHeightFromZero) == 0x0001F0, "Member 'UDeploymentConsoleComponent::MinHeightFromZero' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, SpawnPoints) == 0x000218, "Member 'UDeploymentConsoleComponent::SpawnPoints' has a wrong offset!");
static_assert(offsetof(UDeploymentConsoleComponent, TeamSpawnData) == 0x000228, "Member 'UDeploymentConsoleComponent::TeamSpawnData' has a wrong offset!");

class AFortAthenaMutator_CR_Respawn final : public AFortAthenaMutator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaMutator_CR_Respawn">();
	}
	static class AFortAthenaMutator_CR_Respawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_CR_Respawn>();
	}
};
static_assert(alignof(AFortAthenaMutator_CR_Respawn) == 0x000008, "Wrong alignment on AFortAthenaMutator_CR_Respawn");
static_assert(sizeof(AFortAthenaMutator_CR_Respawn) == 0x000330, "Wrong size on AFortAthenaMutator_CR_Respawn");

}
