#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline) == 0x000008, "Wrong alignment on WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline");
static_assert(sizeof(WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline) == 0x000018, "Wrong size on WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline");
static_assert(offsetof(WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline, EntryPoint) == 0x000000, "Member 'WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'WBP_Tile_FocusOutline_C_ExecuteUbergraph_WBP_Tile_FocusOutline::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
