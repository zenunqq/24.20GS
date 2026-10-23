#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsVisible;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu) == 0x000008, "Wrong alignment on JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu");
static_assert(sizeof(JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu) == 0x000018, "Wrong size on JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu");
static_assert(offsetof(JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu, EntryPoint) == 0x000000, "Member 'JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu, K2Node_Event_bIsVisible) == 0x000004, "Member 'JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'JoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct JoinablePartyActionMenu_C_OnToggleConfirmation final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(JoinablePartyActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong alignment on JoinablePartyActionMenu_C_OnToggleConfirmation");
static_assert(sizeof(JoinablePartyActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong size on JoinablePartyActionMenu_C_OnToggleConfirmation");
static_assert(offsetof(JoinablePartyActionMenu_C_OnToggleConfirmation, bIsVisible) == 0x000000, "Member 'JoinablePartyActionMenu_C_OnToggleConfirmation::bIsVisible' has a wrong offset!");

}
