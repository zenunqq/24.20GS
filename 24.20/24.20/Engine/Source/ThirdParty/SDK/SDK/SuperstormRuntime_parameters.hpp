#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct TempestLightningComponent_GetCloudHeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(TempestLightningComponent_GetCloudHeight) == 0x000004, "Wrong alignment on TempestLightningComponent_GetCloudHeight");
static_assert(sizeof(TempestLightningComponent_GetCloudHeight) == 0x000004, "Wrong size on TempestLightningComponent_GetCloudHeight");
static_assert(offsetof(TempestLightningComponent_GetCloudHeight, ReturnValue) == 0x000000, "Member 'TempestLightningComponent_GetCloudHeight::ReturnValue' has a wrong offset!");

struct TempestLightningComponent_GetLightningRadius final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(TempestLightningComponent_GetLightningRadius) == 0x000004, "Wrong alignment on TempestLightningComponent_GetLightningRadius");
static_assert(sizeof(TempestLightningComponent_GetLightningRadius) == 0x000004, "Wrong size on TempestLightningComponent_GetLightningRadius");
static_assert(offsetof(TempestLightningComponent_GetLightningRadius, ReturnValue) == 0x000000, "Member 'TempestLightningComponent_GetLightningRadius::ReturnValue' has a wrong offset!");

struct TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit final
{
public:
	const class AFortPlayerControllerAthena*      PlayerController;
	class AFortAthenaVehicle*                     Vehicle;
};
static_assert(alignof(TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit) == 0x000008, "Wrong alignment on TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit");
static_assert(sizeof(TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit) == 0x000010, "Wrong size on TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit");
static_assert(offsetof(TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit, PlayerController) == 0x000000, "Member 'TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit::PlayerController' has a wrong offset!");
static_assert(offsetof(TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit, Vehicle) == 0x000008, "Member 'TempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit::Vehicle' has a wrong offset!");

struct TempestTornadoForcesComponent_IsActorInTornado final
{
public:
	class AActor*                                 Actor;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(TempestTornadoForcesComponent_IsActorInTornado) == 0x000008, "Wrong alignment on TempestTornadoForcesComponent_IsActorInTornado");
static_assert(sizeof(TempestTornadoForcesComponent_IsActorInTornado) == 0x000010, "Wrong size on TempestTornadoForcesComponent_IsActorInTornado");
static_assert(offsetof(TempestTornadoForcesComponent_IsActorInTornado, Actor) == 0x000000, "Member 'TempestTornadoForcesComponent_IsActorInTornado::Actor' has a wrong offset!");
static_assert(offsetof(TempestTornadoForcesComponent_IsActorInTornado, ReturnValue) == 0x000008, "Member 'TempestTornadoForcesComponent_IsActorInTornado::ReturnValue' has a wrong offset!");

}
