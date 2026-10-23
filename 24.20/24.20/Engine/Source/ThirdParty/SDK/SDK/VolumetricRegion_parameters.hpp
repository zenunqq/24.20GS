#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VolumetricRegionNativeComponent_RefreshTrackedActors final
{
public:
	class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker;
};
static_assert(alignof(VolumetricRegionNativeComponent_RefreshTrackedActors) == 0x000008, "Wrong alignment on VolumetricRegionNativeComponent_RefreshTrackedActors");
static_assert(sizeof(VolumetricRegionNativeComponent_RefreshTrackedActors) == 0x000008, "Wrong size on VolumetricRegionNativeComponent_RefreshTrackedActors");
static_assert(offsetof(VolumetricRegionNativeComponent_RefreshTrackedActors, InPlaySpaceComponent_SpatialActorTracker) == 0x000000, "Member 'VolumetricRegionNativeComponent_RefreshTrackedActors::InPlaySpaceComponent_SpatialActorTracker' has a wrong offset!");

}
