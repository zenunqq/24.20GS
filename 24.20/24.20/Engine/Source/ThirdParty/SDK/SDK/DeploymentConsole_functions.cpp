#pragma once

#include "Basic.hpp"

#include "DeploymentConsole_classes.hpp"
#include "DeploymentConsole_parameters.hpp"

namespace SDK
{

void UDeploymentConsoleComponent::ForcePlayerEnterAircraft(class AFortPlayerControllerAthena* InController, class AFortAthenaAircraft* InAircraft)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DeploymentConsoleComponent", "ForcePlayerEnterAircraft");

	Params::DeploymentConsoleComponent_ForcePlayerEnterAircraft Parms{};

	Parms.InController = InController;
	Parms.InAircraft = InAircraft;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<uint8> UDeploymentConsoleComponent::GetMinigameTeamsWithPlayers(const class AFortMinigame* InMinigame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DeploymentConsoleComponent", "GetMinigameTeamsWithPlayers");

	Params::DeploymentConsoleComponent_GetMinigameTeamsWithPlayers Parms{};

	Parms.InMinigame = InMinigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FBox2D UDeploymentConsoleComponent::MoveBoxTo(const struct FBox2D& InBox, const struct FVector2D& VectorToMoveTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DeploymentConsoleComponent", "MoveBoxTo");

	Params::DeploymentConsoleComponent_MoveBoxTo Parms{};

	Parms.InBox = std::move(InBox);
	Parms.VectorToMoveTo = std::move(VectorToMoveTo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDeploymentConsoleComponent::ConstructInventoryOnController(class AFortPlayerControllerAthena* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "ConstructInventoryOnController");

	Params::DeploymentConsoleComponent_ConstructInventoryOnController Parms{};

	Parms.InController = InController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDeploymentConsoleComponent::InitializeFlightPath(class AFortGameStateAthena* GSA, const struct FAircraftFlightConstructionInfo& FlightPathConstructionInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "InitializeFlightPath");

	Params::DeploymentConsoleComponent_InitializeFlightPath Parms{};

	Parms.GSA = GSA;
	Parms.FlightPathConstructionInfo = std::move(FlightPathConstructionInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FVector2D UDeploymentConsoleComponent::RetrievePlayerSpawnLocation(const bool bIsGameInProgress, const bool bGroupTeams, const uint8 InTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "RetrievePlayerSpawnLocation");

	Params::DeploymentConsoleComponent_RetrievePlayerSpawnLocation Parms{};

	Parms.bIsGameInProgress = bIsGameInProgress;
	Parms.bGroupTeams = bGroupTeams;
	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDeploymentConsoleComponent::SetAircraftDropZone(const struct FBox2D& InDropZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetAircraftDropZone");

	Params::DeploymentConsoleComponent_SetAircraftDropZone Parms{};

	Parms.InDropZone = std::move(InDropZone);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDeploymentConsoleComponent::SetAircraftLock(const bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetAircraftLock");

	Params::DeploymentConsoleComponent_SetAircraftLock Parms{};

	Parms.bIsLocked = bIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDeploymentConsoleComponent::SetPlayerIsWaiting(class AController* InController, const bool bInPlayerIsWaiting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetPlayerIsWaiting");

	Params::DeploymentConsoleComponent_SetPlayerIsWaiting Parms{};

	Parms.InController = InController;
	Parms.bInPlayerIsWaiting = bInPlayerIsWaiting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDeploymentConsoleComponent::SetupTeamSpawnPoints(const bool bGroupTeams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SetupTeamSpawnPoints");

	Params::DeploymentConsoleComponent_SetupTeamSpawnPoints Parms{};

	Parms.bGroupTeams = bGroupTeams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortAthenaAircraft* UDeploymentConsoleComponent::SpawnAircraft(const int32 FlightIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SpawnAircraft");

	Params::DeploymentConsoleComponent_SpawnAircraft Parms{};

	Parms.FlightIndex = FlightIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FDeploymentConsoleAircraftData> UDeploymentConsoleComponent::SpawnAircrafts(const bool bSpawnAircraftForEachTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "SpawnAircrafts");

	Params::DeploymentConsoleComponent_SpawnAircrafts Parms{};

	Parms.bSpawnAircraftForEachTeam = bSpawnAircraftForEachTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UDeploymentConsoleComponent::AdjustLocationToValidHeight(const struct FVector& RespawnLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "AdjustLocationToValidHeight");

	Params::DeploymentConsoleComponent_AdjustLocationToValidHeight Parms{};

	Parms.RespawnLocation = std::move(RespawnLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FRotator UDeploymentConsoleComponent::CalculateSpawnRotationFromLocation(const struct FVector& InSpawnLocation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "CalculateSpawnRotationFromLocation");

	Params::DeploymentConsoleComponent_CalculateSpawnRotationFromLocation Parms{};

	Parms.InSpawnLocation = std::move(InSpawnLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDeploymentConsoleComponent::ClearFlightInfos() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "ClearFlightInfos");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const struct FBox2D UDeploymentConsoleComponent::GetCachedAircraftSpawnZone() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetCachedAircraftSpawnZone");

	Params::DeploymentConsoleComponent_GetCachedAircraftSpawnZone Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAircraftFlightConstructionInfo UDeploymentConsoleComponent::GetDefaultFlightPathConstructionInfo(const class AFortGameStateAthena* GameStateAthena, const EAirCraftBehavior AirCraftBehavior) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetDefaultFlightPathConstructionInfo");

	Params::DeploymentConsoleComponent_GetDefaultFlightPathConstructionInfo Parms{};

	Parms.GameStateAthena = GameStateAthena;
	Parms.AirCraftBehavior = AirCraftBehavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortAthenaMapInfo* UDeploymentConsoleComponent::GetMapInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetMapInfo");

	Params::DeploymentConsoleComponent_GetMapInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FVector2D> UDeploymentConsoleComponent::GetSpawnPoints() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetSpawnPoints");

	Params::DeploymentConsoleComponent_GetSpawnPoints Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FDeploymentConsoleTeamData> UDeploymentConsoleComponent::GetTeamSpawnData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeploymentConsoleComponent", "GetTeamSpawnData");

	Params::DeploymentConsoleComponent_GetTeamSpawnData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
