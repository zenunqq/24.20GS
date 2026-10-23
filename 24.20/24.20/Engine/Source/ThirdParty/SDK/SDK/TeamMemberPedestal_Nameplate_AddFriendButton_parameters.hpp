#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals final
{
public:
	bool                                          IsUsingTouch;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals, IsUsingTouch) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_UpdateVisuals::IsUsingTouch' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility final
{
public:
	ESlateVisibility                              InVisibility;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility, InVisibility) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_SetInputActionVisibility::InVisibility' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText) == 0x000018, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText, InText) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_SetButtonText::InText' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;
	uint8                                         Pad_19[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton");
static_assert(sizeof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton) == 0x000028, "Wrong size on TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, K2Node_CustomEvent_InVisibility) == 0x000018, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000020, "Member 'TeamMemberPedestal_Nameplate_AddFriendButton_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate_AddFriendButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

}
