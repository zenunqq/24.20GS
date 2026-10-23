#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton) == 0x000008, "Wrong alignment on JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton");
static_assert(sizeof(JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton) == 0x000018, "Wrong size on JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton");
static_assert(offsetof(JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton, EntryPoint) == 0x000000, "Member 'JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'JoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
