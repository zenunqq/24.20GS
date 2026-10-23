#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FSpawnBuildingActorParameters final
{
public:
	class UClass*                                 SpawnClass;
	TWeakObjectPtr<class ULevel>                  SpawnLevel;
	struct FTransform                             SpawnTransform;
};
static_assert(alignof(FSpawnBuildingActorParameters) == 0x000010, "Wrong alignment on FSpawnBuildingActorParameters");
static_assert(sizeof(FSpawnBuildingActorParameters) == 0x000070, "Wrong size on FSpawnBuildingActorParameters");
static_assert(offsetof(FSpawnBuildingActorParameters, SpawnClass) == 0x000000, "Member 'FSpawnBuildingActorParameters::SpawnClass' has a wrong offset!");
static_assert(offsetof(FSpawnBuildingActorParameters, SpawnLevel) == 0x000008, "Member 'FSpawnBuildingActorParameters::SpawnLevel' has a wrong offset!");
static_assert(offsetof(FSpawnBuildingActorParameters, SpawnTransform) == 0x000010, "Member 'FSpawnBuildingActorParameters::SpawnTransform' has a wrong offset!");

}
