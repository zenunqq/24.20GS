#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap final
{
public:
	class UObject*                                WorldContextObject;
	class UTextureRenderTarget2D*                 SpecialSurfaceRenderTarget;
	struct FVector                                InTopLeftWorldCoordinate;
	struct FVector                                InBottomRightWorldCoordinate;
	float                                         CoverageThreshold;
	float                                         DebugDrawDuration;
	bool                                          ReturnValue;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap) == 0x000008, "Wrong alignment on FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap");
static_assert(sizeof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap) == 0x000050, "Wrong size on FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, WorldContextObject) == 0x000000, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::WorldContextObject' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, SpecialSurfaceRenderTarget) == 0x000008, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::SpecialSurfaceRenderTarget' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, InTopLeftWorldCoordinate) == 0x000010, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::InTopLeftWorldCoordinate' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, InBottomRightWorldCoordinate) == 0x000028, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::InBottomRightWorldCoordinate' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, CoverageThreshold) == 0x000040, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::CoverageThreshold' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, DebugDrawDuration) == 0x000044, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::DebugDrawDuration' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap, ReturnValue) == 0x000048, "Member 'FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap::ReturnValue' has a wrong offset!");

}
