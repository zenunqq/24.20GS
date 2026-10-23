#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UCrowdSpawner final : public USceneComponent
{
public:
	uint8                                         Pad_2A0[0x40];

public:
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);
	void SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, int32 CharacterScaleRandomness, int32 CharacterAngleRandomness, int32 Density);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrowdSpawner">();
	}
	static class UCrowdSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrowdSpawner>();
	}
};
static_assert(alignof(UCrowdSpawner) == 0x000010, "Wrong alignment on UCrowdSpawner");
static_assert(sizeof(UCrowdSpawner) == 0x0002E0, "Wrong size on UCrowdSpawner");

}
