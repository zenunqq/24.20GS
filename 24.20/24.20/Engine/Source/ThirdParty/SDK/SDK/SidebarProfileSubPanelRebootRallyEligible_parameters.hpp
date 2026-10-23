#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarProfileSubPanelRebootRallyEligible_C_DisplayText final
{
public:
	bool                                          bRallied;
};
static_assert(alignof(SidebarProfileSubPanelRebootRallyEligible_C_DisplayText) == 0x000001, "Wrong alignment on SidebarProfileSubPanelRebootRallyEligible_C_DisplayText");
static_assert(sizeof(SidebarProfileSubPanelRebootRallyEligible_C_DisplayText) == 0x000001, "Wrong size on SidebarProfileSubPanelRebootRallyEligible_C_DisplayText");
static_assert(offsetof(SidebarProfileSubPanelRebootRallyEligible_C_DisplayText, bRallied) == 0x000000, "Member 'SidebarProfileSubPanelRebootRallyEligible_C_DisplayText::bRallied' has a wrong offset!");

struct SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          K2Node_Event_bRallied;
	bool                                          CallFunc_IsLocalUser_ReturnValue;
	uint8                                         Pad_7[0x1];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible) == 0x000008, "Wrong alignment on SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible");
static_assert(sizeof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible) == 0x000020, "Wrong size on SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible");
static_assert(offsetof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible, EntryPoint) == 0x000000, "Member 'SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible, Temp_bool_Variable) == 0x000004, "Member 'SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible, K2Node_Event_bRallied) == 0x000005, "Member 'SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible::K2Node_Event_bRallied' has a wrong offset!");
static_assert(offsetof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible, CallFunc_IsLocalUser_ReturnValue) == 0x000006, "Member 'SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible::CallFunc_IsLocalUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible, K2Node_Select_Default) == 0x000008, "Member 'SidebarProfileSubPanelRebootRallyEligible_C_ExecuteUbergraph_SidebarProfileSubPanelRebootRallyEligible::K2Node_Select_Default' has a wrong offset!");

}
