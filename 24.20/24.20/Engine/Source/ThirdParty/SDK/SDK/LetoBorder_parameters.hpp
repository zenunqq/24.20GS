#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct LetoBorder_C_ExecuteUbergraph_LetoBorder final
{
public:
	int32                                         EntryPoint;
	float                                         K2Node_Event_HalfBorderWidth;
	struct FMargin                                K2Node_MakeStruct_Margin;
};
static_assert(alignof(LetoBorder_C_ExecuteUbergraph_LetoBorder) == 0x000004, "Wrong alignment on LetoBorder_C_ExecuteUbergraph_LetoBorder");
static_assert(sizeof(LetoBorder_C_ExecuteUbergraph_LetoBorder) == 0x000018, "Wrong size on LetoBorder_C_ExecuteUbergraph_LetoBorder");
static_assert(offsetof(LetoBorder_C_ExecuteUbergraph_LetoBorder, EntryPoint) == 0x000000, "Member 'LetoBorder_C_ExecuteUbergraph_LetoBorder::EntryPoint' has a wrong offset!");
static_assert(offsetof(LetoBorder_C_ExecuteUbergraph_LetoBorder, K2Node_Event_HalfBorderWidth) == 0x000004, "Member 'LetoBorder_C_ExecuteUbergraph_LetoBorder::K2Node_Event_HalfBorderWidth' has a wrong offset!");
static_assert(offsetof(LetoBorder_C_ExecuteUbergraph_LetoBorder, K2Node_MakeStruct_Margin) == 0x000008, "Member 'LetoBorder_C_ExecuteUbergraph_LetoBorder::K2Node_MakeStruct_Margin' has a wrong offset!");

struct LetoBorder_C_UpdateBorderWidth final
{
public:
	float                                         HalfBorderWidth;
};
static_assert(alignof(LetoBorder_C_UpdateBorderWidth) == 0x000004, "Wrong alignment on LetoBorder_C_UpdateBorderWidth");
static_assert(sizeof(LetoBorder_C_UpdateBorderWidth) == 0x000004, "Wrong size on LetoBorder_C_UpdateBorderWidth");
static_assert(offsetof(LetoBorder_C_UpdateBorderWidth, HalfBorderWidth) == 0x000000, "Member 'LetoBorder_C_UpdateBorderWidth::HalfBorderWidth' has a wrong offset!");

}
