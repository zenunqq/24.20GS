#pragma once

#include "Basic.hpp"

#include "WaterMeshAssetsToReplace_structs.hpp"

namespace SDK
{

struct FArrayOfWaterMeshWaterBlueprintPairs final
{
public:
	TArray<struct FWaterMeshAssetsToReplace>      ArrayOfPairedMeshesandBlueprints_3_66DC153A4804C5BFDF6D5187A0EEF992;
};
static_assert(alignof(FArrayOfWaterMeshWaterBlueprintPairs) == 0x000008, "Wrong alignment on FArrayOfWaterMeshWaterBlueprintPairs");
static_assert(sizeof(FArrayOfWaterMeshWaterBlueprintPairs) == 0x000010, "Wrong size on FArrayOfWaterMeshWaterBlueprintPairs");
static_assert(offsetof(FArrayOfWaterMeshWaterBlueprintPairs, ArrayOfPairedMeshesandBlueprints_3_66DC153A4804C5BFDF6D5187A0EEF992) == 0x000000, "Member 'FArrayOfWaterMeshWaterBlueprintPairs::ArrayOfPairedMeshesandBlueprints_3_66DC153A4804C5BFDF6D5187A0EEF992' has a wrong offset!");

}
