#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu) == 0x000008, "Wrong alignment on LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu");
static_assert(sizeof(LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu) == 0x000010, "Wrong size on LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu");
static_assert(offsetof(LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu, EntryPoint) == 0x000000, "Member 'LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
