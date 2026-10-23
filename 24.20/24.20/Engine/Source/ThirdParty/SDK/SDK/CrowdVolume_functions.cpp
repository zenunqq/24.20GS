#pragma once

#include "Basic.hpp"

#include "CrowdVolume_classes.hpp"
#include "CrowdVolume_parameters.hpp"

namespace SDK
{

void UCrowdSpawner::RefreshTrackedActors(class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrowdSpawner", "RefreshTrackedActors");

	Params::CrowdSpawner_RefreshTrackedActors Parms{};

	Parms.InPlaySpaceComponent_SpatialActorTracker = InPlaySpaceComponent_SpatialActorTracker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCrowdSpawner::SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, int32 CharacterScaleRandomness, int32 CharacterAngleRandomness, int32 Density)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrowdSpawner", "SpawnCrowd");

	Params::CrowdSpawner_SpawnCrowd Parms{};

	Parms.Width = Width;
	Parms.Depth = Depth;
	Parms.Height = Height;
	Parms.Precision = Precision;
	Parms.CharacterScaleRandomness = CharacterScaleRandomness;
	Parms.CharacterAngleRandomness = CharacterAngleRandomness;
	Parms.Density = Density;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
