#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton) == 0x000008, "Wrong alignment on SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton");
static_assert(sizeof(SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton) == 0x000018, "Wrong size on SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton");
static_assert(offsetof(SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton, EntryPoint) == 0x000000, "Member 'SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SocialPanelWeGameFriendButton_C_ExecuteUbergraph_SocialPanelWeGameFriendButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
