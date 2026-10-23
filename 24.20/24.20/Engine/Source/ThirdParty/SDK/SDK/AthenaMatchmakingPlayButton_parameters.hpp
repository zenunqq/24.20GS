#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton) == 0x000008, "Wrong alignment on AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton");
static_assert(sizeof(AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton) == 0x000018, "Wrong size on AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton");
static_assert(offsetof(AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton, EntryPoint) == 0x000000, "Member 'AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'AthenaMatchmakingPlayButton_C_ExecuteUbergraph_AthenaMatchmakingPlayButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct AthenaMatchmakingPlayButton_C_SetButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(AthenaMatchmakingPlayButton_C_SetButtonText) == 0x000008, "Wrong alignment on AthenaMatchmakingPlayButton_C_SetButtonText");
static_assert(sizeof(AthenaMatchmakingPlayButton_C_SetButtonText) == 0x000018, "Wrong size on AthenaMatchmakingPlayButton_C_SetButtonText");
static_assert(offsetof(AthenaMatchmakingPlayButton_C_SetButtonText, InText) == 0x000000, "Member 'AthenaMatchmakingPlayButton_C_SetButtonText::InText' has a wrong offset!");

}
