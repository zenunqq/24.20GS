#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bEligible;
	uint8                                         Pad_11[0x7];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header) == 0x000008, "Wrong alignment on WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header");
static_assert(sizeof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header) == 0x000030, "Wrong size on WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header");
static_assert(offsetof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header, EntryPoint) == 0x000000, "Member 'WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header, Temp_bool_Variable) == 0x000004, "Member 'WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header, K2Node_Event_bEligible) == 0x000010, "Member 'WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header::K2Node_Event_bEligible' has a wrong offset!");
static_assert(offsetof(WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header, K2Node_Select_Default) == 0x000018, "Member 'WBP_PanelRebootRally_Header_C_ExecuteUbergraph_WBP_PanelRebootRally_Header::K2Node_Select_Default' has a wrong offset!");

struct WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated final
{
public:
	bool                                          bEligible;
};
static_assert(alignof(WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated) == 0x000001, "Wrong alignment on WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated");
static_assert(sizeof(WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated) == 0x000001, "Wrong size on WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated");
static_assert(offsetof(WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated, bEligible) == 0x000000, "Member 'WBP_PanelRebootRally_Header_C_OnRebootRallyEligibilityUpdated::bEligible' has a wrong offset!");

}
