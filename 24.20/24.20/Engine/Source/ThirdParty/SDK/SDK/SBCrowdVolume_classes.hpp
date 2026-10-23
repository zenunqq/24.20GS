#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class USBCrowdSpawner final : public USceneComponent
{
public:
	uint8                                         Pad_2A0[0x50];

public:
	void SpawnCrowd(int32 Width, int32 Depth, int32 Height, int32 Precision, float CharacterScaleRandomness, float CharacterAngleRandomness, float Density, int32 BatchSize);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBCrowdSpawner">();
	}
	static class USBCrowdSpawner* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBCrowdSpawner>();
	}
};
static_assert(alignof(USBCrowdSpawner) == 0x000010, "Wrong alignment on USBCrowdSpawner");
static_assert(sizeof(USBCrowdSpawner) == 0x0002F0, "Wrong size on USBCrowdSpawner");

}
