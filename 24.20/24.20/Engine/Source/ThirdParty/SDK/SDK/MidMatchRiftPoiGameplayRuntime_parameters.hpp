#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation final
{
public:
	struct FVector                                Location;
};
static_assert(alignof(MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation) == 0x000008, "Wrong alignment on MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation");
static_assert(sizeof(MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation) == 0x000018, "Wrong size on MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation");
static_assert(offsetof(MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation, Location) == 0x000000, "Member 'MidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation::Location' has a wrong offset!");

struct MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation final
{
public:
	struct FVector                                Location;
};
static_assert(alignof(MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation) == 0x000008, "Wrong alignment on MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation");
static_assert(sizeof(MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation) == 0x000018, "Wrong size on MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation");
static_assert(offsetof(MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation, Location) == 0x000000, "Member 'MidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation::Location' has a wrong offset!");

struct MidMatchRiftPoiManagerActor_SetDynamicLandBrush final
{
public:
	struct FSlateBrush                            LandIcon;
};
static_assert(alignof(MidMatchRiftPoiManagerActor_SetDynamicLandBrush) == 0x000010, "Wrong alignment on MidMatchRiftPoiManagerActor_SetDynamicLandBrush");
static_assert(sizeof(MidMatchRiftPoiManagerActor_SetDynamicLandBrush) == 0x0000C0, "Wrong size on MidMatchRiftPoiManagerActor_SetDynamicLandBrush");
static_assert(offsetof(MidMatchRiftPoiManagerActor_SetDynamicLandBrush, LandIcon) == 0x000000, "Member 'MidMatchRiftPoiManagerActor_SetDynamicLandBrush::LandIcon' has a wrong offset!");

struct MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor final
{
public:
	class AActor*                                 VehicleActor;
	struct FVector                                TeleportLocation;
};
static_assert(alignof(MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor) == 0x000008, "Wrong alignment on MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor");
static_assert(sizeof(MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor) == 0x000020, "Wrong size on MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor");
static_assert(offsetof(MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor, VehicleActor) == 0x000000, "Member 'MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor::VehicleActor' has a wrong offset!");
static_assert(offsetof(MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor, TeleportLocation) == 0x000008, "Member 'MidmatchRiftPoiSpawnIndicator_TeleportVehicleActor::TeleportLocation' has a wrong offset!");

struct MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance final
{
public:
	const class AActor*                           Actor;
	const class UDataLayerInstance*               DataLayerInstance;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance) == 0x000008, "Wrong alignment on MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance");
static_assert(sizeof(MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance) == 0x000018, "Wrong size on MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance");
static_assert(offsetof(MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance, Actor) == 0x000000, "Member 'MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance::Actor' has a wrong offset!");
static_assert(offsetof(MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance, DataLayerInstance) == 0x000008, "Member 'MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance::DataLayerInstance' has a wrong offset!");
static_assert(offsetof(MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance, ReturnValue) == 0x000010, "Member 'MidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance::ReturnValue' has a wrong offset!");

}
