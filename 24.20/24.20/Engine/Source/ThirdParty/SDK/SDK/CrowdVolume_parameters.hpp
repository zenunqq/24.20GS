#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CrowdSpawner_RefreshTrackedActors final
{
public:
	class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker;
};
static_assert(alignof(CrowdSpawner_RefreshTrackedActors) == 0x000008, "Wrong alignment on CrowdSpawner_RefreshTrackedActors");
static_assert(sizeof(CrowdSpawner_RefreshTrackedActors) == 0x000008, "Wrong size on CrowdSpawner_RefreshTrackedActors");
static_assert(offsetof(CrowdSpawner_RefreshTrackedActors, InPlaySpaceComponent_SpatialActorTracker) == 0x000000, "Member 'CrowdSpawner_RefreshTrackedActors::InPlaySpaceComponent_SpatialActorTracker' has a wrong offset!");

struct CrowdSpawner_SpawnCrowd final
{
public:
	int32                                         Width;
	int32                                         Depth;
	int32                                         Height;
	int32                                         Precision;
	int32                                         CharacterScaleRandomness;
	int32                                         CharacterAngleRandomness;
	int32                                         Density;
};
static_assert(alignof(CrowdSpawner_SpawnCrowd) == 0x000004, "Wrong alignment on CrowdSpawner_SpawnCrowd");
static_assert(sizeof(CrowdSpawner_SpawnCrowd) == 0x00001C, "Wrong size on CrowdSpawner_SpawnCrowd");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, Width) == 0x000000, "Member 'CrowdSpawner_SpawnCrowd::Width' has a wrong offset!");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, Depth) == 0x000004, "Member 'CrowdSpawner_SpawnCrowd::Depth' has a wrong offset!");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, Height) == 0x000008, "Member 'CrowdSpawner_SpawnCrowd::Height' has a wrong offset!");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, Precision) == 0x00000C, "Member 'CrowdSpawner_SpawnCrowd::Precision' has a wrong offset!");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, CharacterScaleRandomness) == 0x000010, "Member 'CrowdSpawner_SpawnCrowd::CharacterScaleRandomness' has a wrong offset!");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, CharacterAngleRandomness) == 0x000014, "Member 'CrowdSpawner_SpawnCrowd::CharacterAngleRandomness' has a wrong offset!");
static_assert(offsetof(CrowdSpawner_SpawnCrowd, Density) == 0x000018, "Member 'CrowdSpawner_SpawnCrowd::Density' has a wrong offset!");

}
