#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu) == 0x000008, "Wrong alignment on MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu");
static_assert(sizeof(MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu) == 0x000010, "Wrong size on MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu");
static_assert(offsetof(MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu, EntryPoint) == 0x000000, "Member 'MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct MissedInvitesActionMenu_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;
	struct FKeyEvent                              InKeyEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	struct FKey                                   CallFunc_GetKey_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
	uint8                                         Pad_209[0x7];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
};
static_assert(alignof(MissedInvitesActionMenu_C_OnKeyUp) == 0x000008, "Wrong alignment on MissedInvitesActionMenu_C_OnKeyUp");
static_assert(sizeof(MissedInvitesActionMenu_C_OnKeyUp) == 0x0002C8, "Wrong size on MissedInvitesActionMenu_C_OnKeyUp");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'MissedInvitesActionMenu_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, InKeyEvent) == 0x000040, "Member 'MissedInvitesActionMenu_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, ReturnValue) == 0x000080, "Member 'MissedInvitesActionMenu_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000138, "Member 'MissedInvitesActionMenu_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x0001F0, "Member 'MissedInvitesActionMenu_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000208, "Member 'MissedInvitesActionMenu_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissedInvitesActionMenu_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000210, "Member 'MissedInvitesActionMenu_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

}
