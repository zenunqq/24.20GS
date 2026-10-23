#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

class FortAthenaVehicle
{
public:
	static void SpawnVehicles();

private:
	static void ServerMove(UObject* Context, FFrame& Stack);
	static void EquipVehicleWeapon(APawn* Vehicle, AFortPlayerPawn* PlayerPawn, int32 SeatIndex);
	static void ServerUpdateTowhook(UObject* Context, FFrame& Stack);
	DefUHookOg(ServerOnExitVehicle);
	DefHookOg(void, OnPawnEnterVehicle, __int64, AFortPlayerPawn*, int32);

	InitHooks;
};
