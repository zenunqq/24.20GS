#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFortGameStateComponent_SurfaceCoverageMap : public UFortGameStateComponent_SurfaceOverride
{
public:
	uint8                                         Pad_A8[0x68];

public:
	bool UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, const struct FVector& InTopLeftWorldCoordinate, const struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameStateComponent_SurfaceCoverageMap">();
	}
	static class UFortGameStateComponent_SurfaceCoverageMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameStateComponent_SurfaceCoverageMap>();
	}
};
static_assert(alignof(UFortGameStateComponent_SurfaceCoverageMap) == 0x000008, "Wrong alignment on UFortGameStateComponent_SurfaceCoverageMap");
static_assert(sizeof(UFortGameStateComponent_SurfaceCoverageMap) == 0x000110, "Wrong size on UFortGameStateComponent_SurfaceCoverageMap");

}
