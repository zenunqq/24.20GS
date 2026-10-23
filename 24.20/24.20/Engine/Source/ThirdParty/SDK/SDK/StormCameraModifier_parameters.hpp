#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct StormCameraModifier_C_BlueprintModifyPostProcess final
{
public:
	float                                         DeltaTime;
	float                                         PostProcessBlendWeight;
	uint8                                         Pad_8[0x8];
	struct FPostProcessSettings                   PostProcessSettings;
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;
};
static_assert(alignof(StormCameraModifier_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alignment on StormCameraModifier_C_BlueprintModifyPostProcess");
static_assert(sizeof(StormCameraModifier_C_BlueprintModifyPostProcess) == 0x000DD0, "Wrong size on StormCameraModifier_C_BlueprintModifyPostProcess");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x0006F0, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}
