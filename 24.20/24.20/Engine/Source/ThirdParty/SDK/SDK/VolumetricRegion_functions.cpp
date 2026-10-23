#pragma once

#include "Basic.hpp"

#include "VolumetricRegion_classes.hpp"
#include "VolumetricRegion_parameters.hpp"

namespace SDK
{

void UVolumetricRegionNativeComponent::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VolumetricRegionNativeComponent", "RefreshTrackedActors");

	Params::VolumetricRegionNativeComponent_RefreshTrackedActors Parms{};

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
