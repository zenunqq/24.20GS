#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct Campfire_Interface_C_GetLocationToSpawnFireVFX final
{
public:
	struct FVector                                WorldLocation;
};
static_assert(alignof(Campfire_Interface_C_GetLocationToSpawnFireVFX) == 0x000008, "Wrong alignment on Campfire_Interface_C_GetLocationToSpawnFireVFX");
static_assert(sizeof(Campfire_Interface_C_GetLocationToSpawnFireVFX) == 0x000018, "Wrong size on Campfire_Interface_C_GetLocationToSpawnFireVFX");
static_assert(offsetof(Campfire_Interface_C_GetLocationToSpawnFireVFX, WorldLocation) == 0x000000, "Member 'Campfire_Interface_C_GetLocationToSpawnFireVFX::WorldLocation' has a wrong offset!");

struct Campfire_Interface_C_GetWoodComponent final
{
public:
	class UStaticMeshComponent*                   WoodComponent;
};
static_assert(alignof(Campfire_Interface_C_GetWoodComponent) == 0x000008, "Wrong alignment on Campfire_Interface_C_GetWoodComponent");
static_assert(sizeof(Campfire_Interface_C_GetWoodComponent) == 0x000008, "Wrong size on Campfire_Interface_C_GetWoodComponent");
static_assert(offsetof(Campfire_Interface_C_GetWoodComponent, WoodComponent) == 0x000000, "Member 'Campfire_Interface_C_GetWoodComponent::WoodComponent' has a wrong offset!");

struct Campfire_Interface_C_IsStoked final
{
public:
	bool                                          IsStoked_0;
};
static_assert(alignof(Campfire_Interface_C_IsStoked) == 0x000001, "Wrong alignment on Campfire_Interface_C_IsStoked");
static_assert(sizeof(Campfire_Interface_C_IsStoked) == 0x000001, "Wrong size on Campfire_Interface_C_IsStoked");
static_assert(offsetof(Campfire_Interface_C_IsStoked, IsStoked_0) == 0x000000, "Member 'Campfire_Interface_C_IsStoked::IsStoked_0' has a wrong offset!");

}
