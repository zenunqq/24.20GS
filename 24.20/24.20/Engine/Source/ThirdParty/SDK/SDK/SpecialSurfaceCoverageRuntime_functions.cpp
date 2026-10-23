#pragma once

#include "Basic.hpp"

#include "SpecialSurfaceCoverageRuntime_classes.hpp"
#include "SpecialSurfaceCoverageRuntime_parameters.hpp"

namespace SDK
{

bool UFortGameStateComponent_SurfaceCoverageMap::UpdateCoverageMap(class UObject* WorldContextObject, class UTextureRenderTarget2D* SpecialSurfaceRenderTarget, const struct FVector& InTopLeftWorldCoordinate, const struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameStateComponent_SurfaceCoverageMap", "UpdateCoverageMap");

	Params::FortGameStateComponent_SurfaceCoverageMap_UpdateCoverageMap Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SpecialSurfaceRenderTarget = SpecialSurfaceRenderTarget;
	Parms.InTopLeftWorldCoordinate = std::move(InTopLeftWorldCoordinate);
	Parms.InBottomRightWorldCoordinate = std::move(InBottomRightWorldCoordinate);
	Parms.CoverageThreshold = CoverageThreshold;
	Parms.DebugDrawDuration = DebugDrawDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
