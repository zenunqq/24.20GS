#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;
	class AFortGameModeFrontEnd*                  K2Node_DynamicCast_AsFort_Game_Mode_Front_End;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
};
static_assert(alignof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker) == 0x000008, "Wrong alignment on PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker");
static_assert(sizeof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker) == 0x000028, "Wrong size on PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker");
static_assert(offsetof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker, EntryPoint) == 0x000000, "Member 'PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker::EntryPoint' has a wrong offset!");
static_assert(offsetof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker, K2Node_DynamicCast_AsFort_Game_Mode_Front_End) == 0x000010, "Member 'PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker::K2Node_DynamicCast_AsFort_Game_Mode_Front_End' has a wrong offset!");
static_assert(offsetof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000020, "Member 'PiPMediaSourcePicker_C_ExecuteUbergraph_PiPMediaSourcePicker::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

}
