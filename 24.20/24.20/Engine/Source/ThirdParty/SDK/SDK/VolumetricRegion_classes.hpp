#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UVolumetricRegionNativeComponent final : public UActorComponent
{
public:
	void RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VolumetricRegionNativeComponent">();
	}
	static class UVolumetricRegionNativeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVolumetricRegionNativeComponent>();
	}
};
static_assert(alignof(UVolumetricRegionNativeComponent) == 0x000008, "Wrong alignment on UVolumetricRegionNativeComponent");
static_assert(sizeof(UVolumetricRegionNativeComponent) == 0x0000A0, "Wrong size on UVolumetricRegionNativeComponent");

}
