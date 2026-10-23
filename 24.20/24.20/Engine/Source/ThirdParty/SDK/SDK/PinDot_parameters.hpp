#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PinDot_C_ExecuteUbergraph_PinDot final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bFilled;
	uint8                                         Pad_5[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
};
static_assert(alignof(PinDot_C_ExecuteUbergraph_PinDot) == 0x000004, "Wrong alignment on PinDot_C_ExecuteUbergraph_PinDot");
static_assert(sizeof(PinDot_C_ExecuteUbergraph_PinDot) == 0x000018, "Wrong size on PinDot_C_ExecuteUbergraph_PinDot");
static_assert(offsetof(PinDot_C_ExecuteUbergraph_PinDot, EntryPoint) == 0x000000, "Member 'PinDot_C_ExecuteUbergraph_PinDot::EntryPoint' has a wrong offset!");
static_assert(offsetof(PinDot_C_ExecuteUbergraph_PinDot, K2Node_Event_bFilled) == 0x000004, "Member 'PinDot_C_ExecuteUbergraph_PinDot::K2Node_Event_bFilled' has a wrong offset!");
static_assert(offsetof(PinDot_C_ExecuteUbergraph_PinDot, CallFunc_SelectColor_ReturnValue) == 0x000008, "Member 'PinDot_C_ExecuteUbergraph_PinDot::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

struct PinDot_C_OnSetFilled final
{
public:
	bool                                          bFilled;
};
static_assert(alignof(PinDot_C_OnSetFilled) == 0x000001, "Wrong alignment on PinDot_C_OnSetFilled");
static_assert(sizeof(PinDot_C_OnSetFilled) == 0x000001, "Wrong size on PinDot_C_OnSetFilled");
static_assert(offsetof(PinDot_C_OnSetFilled, bFilled) == 0x000000, "Member 'PinDot_C_OnSetFilled::bFilled' has a wrong offset!");

}
