#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget final
{
public:
	int32                                         EntryPoint;
	struct FMargin                                K2Node_MakeStruct_Margin;
	uint8                                         Pad_14[0x4];
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
};
static_assert(alignof(SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget) == 0x000008, "Wrong alignment on SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget");
static_assert(sizeof(SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget) == 0x000028, "Wrong size on SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget");
static_assert(offsetof(SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget, EntryPoint) == 0x000000, "Member 'SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget, K2Node_MakeStruct_Margin) == 0x000004, "Member 'SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000018, "Member 'SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget, CallFunc_IsMobileGame_ReturnValue) == 0x000020, "Member 'SidebarSpecialNavWidget_C_ExecuteUbergraph_SidebarSpecialNavWidget::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

}
