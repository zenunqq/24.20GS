#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsVisible;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu) == 0x000008, "Wrong alignment on SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu");
static_assert(sizeof(SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu) == 0x000018, "Wrong size on SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu");
static_assert(offsetof(SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu, EntryPoint) == 0x000000, "Member 'SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu, K2Node_Event_bIsVisible) == 0x000004, "Member 'SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarUserActionMenu_C_ExecuteUbergraph_SidebarUserActionMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct SidebarUserActionMenu_C_OnToggleConfirmation final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(SidebarUserActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong alignment on SidebarUserActionMenu_C_OnToggleConfirmation");
static_assert(sizeof(SidebarUserActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong size on SidebarUserActionMenu_C_OnToggleConfirmation");
static_assert(offsetof(SidebarUserActionMenu_C_OnToggleConfirmation, bIsVisible) == 0x000000, "Member 'SidebarUserActionMenu_C_OnToggleConfirmation::bIsVisible' has a wrong offset!");

}
