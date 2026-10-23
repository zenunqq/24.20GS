#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton) == 0x000008, "Wrong alignment on SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton");
static_assert(sizeof(SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton) == 0x000018, "Wrong size on SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton");
static_assert(offsetof(SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton, EntryPoint) == 0x000000, "Member 'SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarEmptyPanelButton_C_ExecuteUbergraph_SidebarEmptyPanelButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
