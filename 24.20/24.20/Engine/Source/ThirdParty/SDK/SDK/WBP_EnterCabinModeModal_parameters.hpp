#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UWidget*                                K2Node_Event_PanelToSwapTo;
};
static_assert(alignof(WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal) == 0x000008, "Wrong alignment on WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal");
static_assert(sizeof(WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal) == 0x000010, "Wrong size on WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal");
static_assert(offsetof(WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal, EntryPoint) == 0x000000, "Member 'WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal, K2Node_Event_PanelToSwapTo) == 0x000008, "Member 'WBP_EnterCabinModeModal_C_ExecuteUbergraph_WBP_EnterCabinModeModal::K2Node_Event_PanelToSwapTo' has a wrong offset!");

struct WBP_EnterCabinModeModal_C_SwapPanel final
{
public:
	class UWidget*                                PanelToSwapTo;
};
static_assert(alignof(WBP_EnterCabinModeModal_C_SwapPanel) == 0x000008, "Wrong alignment on WBP_EnterCabinModeModal_C_SwapPanel");
static_assert(sizeof(WBP_EnterCabinModeModal_C_SwapPanel) == 0x000008, "Wrong size on WBP_EnterCabinModeModal_C_SwapPanel");
static_assert(offsetof(WBP_EnterCabinModeModal_C_SwapPanel, PanelToSwapTo) == 0x000000, "Member 'WBP_EnterCabinModeModal_C_SwapPanel::PanelToSwapTo' has a wrong offset!");

}
