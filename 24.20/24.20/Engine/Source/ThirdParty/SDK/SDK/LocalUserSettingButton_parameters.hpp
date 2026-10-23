#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton) == 0x000008, "Wrong alignment on LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton");
static_assert(sizeof(LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton) == 0x000018, "Wrong size on LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton");
static_assert(offsetof(LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton, EntryPoint) == 0x000000, "Member 'LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LocalUserSettingButton_C_ExecuteUbergraph_LocalUserSettingButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
