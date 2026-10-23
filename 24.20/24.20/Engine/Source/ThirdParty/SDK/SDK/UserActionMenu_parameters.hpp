#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct UserActionMenu_C_ExecuteUbergraph_UserActionMenu final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bIsVisible;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu) == 0x000008, "Wrong alignment on UserActionMenu_C_ExecuteUbergraph_UserActionMenu");
static_assert(sizeof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu) == 0x000018, "Wrong size on UserActionMenu_C_ExecuteUbergraph_UserActionMenu");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, EntryPoint) == 0x000000, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, K2Node_Event_bIsVisible) == 0x000004, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::K2Node_Event_bIsVisible' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserActionMenu_C_ExecuteUbergraph_UserActionMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UserActionMenu_C_ExecuteUbergraph_UserActionMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct UserActionMenu_C_OnToggleConfirmation final
{
public:
	bool                                          bIsVisible;
};
static_assert(alignof(UserActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong alignment on UserActionMenu_C_OnToggleConfirmation");
static_assert(sizeof(UserActionMenu_C_OnToggleConfirmation) == 0x000001, "Wrong size on UserActionMenu_C_OnToggleConfirmation");
static_assert(offsetof(UserActionMenu_C_OnToggleConfirmation, bIsVisible) == 0x000000, "Member 'UserActionMenu_C_OnToggleConfirmation::bIsVisible' has a wrong offset!");

}
