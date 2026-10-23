#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue;
	float                                         CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast;
};
static_assert(alignof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo) == 0x000008, "Wrong alignment on LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo");
static_assert(sizeof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo) == 0x000018, "Wrong size on LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, EntryPoint) == 0x000000, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo, CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast) == 0x000010, "Member 'LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo::CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast' has a wrong offset!");

}
