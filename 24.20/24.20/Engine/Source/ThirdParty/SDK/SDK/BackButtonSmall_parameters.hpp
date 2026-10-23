#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall) == 0x000008, "Wrong alignment on BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall");
static_assert(sizeof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall) == 0x000038, "Wrong size on BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall");
static_assert(offsetof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall, EntryPoint) == 0x000000, "Member 'BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall::EntryPoint' has a wrong offset!");
static_assert(offsetof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall, K2Node_MakeStruct_Margin) == 0x000010, "Member 'BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall, CallFunc_IsUsingTouch_ReturnValue) == 0x000020, "Member 'BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'BackButtonSmall_C_ExecuteUbergraph_BackButtonSmall::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
