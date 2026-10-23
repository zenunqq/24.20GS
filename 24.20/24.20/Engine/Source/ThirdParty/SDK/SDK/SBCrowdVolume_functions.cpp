#pragma once

#include "Basic.hpp"

#include "SBCrowdVolume_classes.hpp"
#include "SBCrowdVolume_parameters.hpp"

namespace SDK
{

void USBCrowdSpawner::SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, float CharacterScaleRandomness, float CharacterAngleRandomness, float Density, int32 BatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCrowdSpawner", "SpawnCrowd");

	Params::SBCrowdSpawner_SpawnCrowd Parms{};

	Parms.Width = Width;
	Parms.Depth = Depth;
	Parms.Height = Height;
	Parms.Precision = Precision;
	Parms.CharacterScaleRandomness = CharacterScaleRandomness;
	Parms.CharacterAngleRandomness = CharacterAngleRandomness;
	Parms.Density = Density;
	Parms.BatchSize = BatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
