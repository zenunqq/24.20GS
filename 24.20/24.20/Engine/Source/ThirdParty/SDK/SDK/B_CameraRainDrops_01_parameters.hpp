#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01 final
{
public:
	int32                                         EntryPoint;
	int32                                         CallFunc_GetRenderingDetailMode_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
};
static_assert(alignof(B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01) == 0x000004, "Wrong alignment on B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01");
static_assert(sizeof(B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01) == 0x00000C, "Wrong size on B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01");
static_assert(offsetof(B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01, EntryPoint) == 0x000000, "Member 'B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01, CallFunc_GetRenderingDetailMode_ReturnValue) == 0x000004, "Member 'B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01::CallFunc_GetRenderingDetailMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}
