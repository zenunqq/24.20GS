#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bIsSelected;
};
static_assert(alignof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton) == 0x000008, "Wrong alignment on DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton");
static_assert(sizeof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton) == 0x000018, "Wrong size on DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton");
static_assert(offsetof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton, EntryPoint) == 0x000000, "Member 'DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton, K2Node_Event_bIsSelected) == 0x000010, "Member 'DivisionIconButton_C_ExecuteUbergraph_DivisionIconButton::K2Node_Event_bIsSelected' has a wrong offset!");

struct DivisionIconButton_C_OnRankButtonSelected final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(DivisionIconButton_C_OnRankButtonSelected) == 0x000001, "Wrong alignment on DivisionIconButton_C_OnRankButtonSelected");
static_assert(sizeof(DivisionIconButton_C_OnRankButtonSelected) == 0x000001, "Wrong size on DivisionIconButton_C_OnRankButtonSelected");
static_assert(offsetof(DivisionIconButton_C_OnRankButtonSelected, bIsSelected) == 0x000000, "Member 'DivisionIconButton_C_OnRankButtonSelected::bIsSelected' has a wrong offset!");

}
