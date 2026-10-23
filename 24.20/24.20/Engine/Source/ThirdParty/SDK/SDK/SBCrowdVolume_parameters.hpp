#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SBCrowdSpawner_SpawnCrowd final
{
public:
	int32                                         Width;
	int32                                         Depth;
	int32                                         Height;
	int32                                         Precision;
	float                                         CharacterScaleRandomness;
	float                                         CharacterAngleRandomness;
	float                                         Density;
	int32                                         BatchSize;
};
static_assert(alignof(SBCrowdSpawner_SpawnCrowd) == 0x000004, "Wrong alignment on SBCrowdSpawner_SpawnCrowd");
static_assert(sizeof(SBCrowdSpawner_SpawnCrowd) == 0x000020, "Wrong size on SBCrowdSpawner_SpawnCrowd");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, Width) == 0x000000, "Member 'SBCrowdSpawner_SpawnCrowd::Width' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, Depth) == 0x000004, "Member 'SBCrowdSpawner_SpawnCrowd::Depth' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, Height) == 0x000008, "Member 'SBCrowdSpawner_SpawnCrowd::Height' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, Precision) == 0x00000C, "Member 'SBCrowdSpawner_SpawnCrowd::Precision' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, CharacterScaleRandomness) == 0x000010, "Member 'SBCrowdSpawner_SpawnCrowd::CharacterScaleRandomness' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, CharacterAngleRandomness) == 0x000014, "Member 'SBCrowdSpawner_SpawnCrowd::CharacterAngleRandomness' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, Density) == 0x000018, "Member 'SBCrowdSpawner_SpawnCrowd::Density' has a wrong offset!");
static_assert(offsetof(SBCrowdSpawner_SpawnCrowd, BatchSize) == 0x00001C, "Member 'SBCrowdSpawner_SpawnCrowd::BatchSize' has a wrong offset!");

}
