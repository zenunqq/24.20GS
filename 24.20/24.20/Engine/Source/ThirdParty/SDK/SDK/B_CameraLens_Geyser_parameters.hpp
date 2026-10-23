#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser final
{
public:
	int32                                         EntryPoint;
	int32                                         CallFunc_GetRenderingDetailMode_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
};
static_assert(alignof(B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser) == 0x000004, "Wrong alignment on B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser");
static_assert(sizeof(B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser) == 0x00000C, "Wrong size on B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser");
static_assert(offsetof(B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser, EntryPoint) == 0x000000, "Member 'B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser, CallFunc_GetRenderingDetailMode_ReturnValue) == 0x000004, "Member 'B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser::CallFunc_GetRenderingDetailMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'B_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

}
