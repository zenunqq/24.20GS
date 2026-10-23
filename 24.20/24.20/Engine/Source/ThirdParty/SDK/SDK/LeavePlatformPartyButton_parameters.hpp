#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton) == 0x000008, "Wrong alignment on LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton");
static_assert(sizeof(LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton) == 0x000018, "Wrong size on LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton");
static_assert(offsetof(LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton, EntryPoint) == 0x000000, "Member 'LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct LeavePlatformPartyButton_C_SetText final
{
public:
	class FText                                   New_Text;
};
static_assert(alignof(LeavePlatformPartyButton_C_SetText) == 0x000008, "Wrong alignment on LeavePlatformPartyButton_C_SetText");
static_assert(sizeof(LeavePlatformPartyButton_C_SetText) == 0x000018, "Wrong size on LeavePlatformPartyButton_C_SetText");
static_assert(offsetof(LeavePlatformPartyButton_C_SetText, New_Text) == 0x000000, "Member 'LeavePlatformPartyButton_C_SetText::New_Text' has a wrong offset!");

}
