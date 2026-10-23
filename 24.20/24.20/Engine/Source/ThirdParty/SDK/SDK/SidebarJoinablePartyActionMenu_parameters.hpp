#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsVisible;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu) == 0x000008, "Wrong alignment on SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu");
static_assert(sizeof(SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu) == 0x000018, "Wrong size on SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu");
static_assert(offsetof(SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu, EntryPoint) == 0x000000, "Member 'SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu, K2Node_Event_bIsVisible) == 0x000004, "Member 'SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarJoinablePartyActionMenu_C_ExecuteUbergraph_SidebarJoinablePartyActionMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct SidebarJoinablePartyActionMenu_C_OnToggleConfirmation final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(SidebarJoinablePartyActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong alignment on SidebarJoinablePartyActionMenu_C_OnToggleConfirmation");
static_assert(sizeof(SidebarJoinablePartyActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong size on SidebarJoinablePartyActionMenu_C_OnToggleConfirmation");
static_assert(offsetof(SidebarJoinablePartyActionMenu_C_OnToggleConfirmation, bIsVisible) == 0x000000, "Member 'SidebarJoinablePartyActionMenu_C_OnToggleConfirmation::bIsVisible' has a wrong offset!");

}
