#pragma once

#include "Basic.hpp"

#include "MidMatchRiftPoiGameplayRuntime_classes.hpp"
#include "MidMatchRiftPoiGameplayRuntime_parameters.hpp"

namespace SDK
{

void UMidmatchRiftPoiCheatManager::MidmatchRiftPoiSpawnFurthestFromPawnLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "MidmatchRiftPoiSpawnFurthestFromPawnLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMidmatchRiftPoiCheatManager::MidmatchRiftPoiSpawnNearestToPawnLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "MidmatchRiftPoiSpawnNearestToPawnLocation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMidmatchRiftPoiCheatManager::SpawnMidmatchPoiFurthestLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "SpawnMidmatchPoiFurthestLocation");

	Params::MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}

void UMidmatchRiftPoiCheatManager::SpawnMidmatchPoiNearestLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidmatchRiftPoiCheatManager", "SpawnMidmatchPoiNearestLocation");

	Params::MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}

void AMidMatchRiftPoiManagerActor::SetDynamicLandBrush(const struct FSlateBrush& LandIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidMatchRiftPoiManagerActor", "SetDynamicLandBrush");

	Params::MidMatchRiftPoiManagerActor_SetDynamicLandBrush Parms{};

	Parms.LandIcon = std::move(LandIcon);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AMidmatchRiftPoiSpawnIndicator::TeleportVehicleActor(class AActor* VehicleActor, const struct FVector& TeleportLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidmatchRiftPoiSpawnIndicator", "TeleportVehicleActor");

	Params::MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor Parms{};

	Parms.VehicleActor = VehicleActor;
	Parms.TeleportLocation = std::move(TeleportLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool AMidmatchRiftPoiSpawnIndicator::IsActorInDataLayerInstance(const class AActor* Actor, const class UDataLayerInstance* DataLayerInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MidmatchRiftPoiSpawnIndicator", "IsActorInDataLayerInstance");

	Params::MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance Parms{};

	Parms.Actor = Actor;
	Parms.DataLayerInstance = DataLayerInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
