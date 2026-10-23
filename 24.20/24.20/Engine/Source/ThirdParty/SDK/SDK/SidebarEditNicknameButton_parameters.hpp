#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton) == 0x000008, "Wrong alignment on SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton");
static_assert(sizeof(SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton) == 0x000018, "Wrong size on SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton");
static_assert(offsetof(SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton, EntryPoint) == 0x000000, "Member 'SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarEditNicknameButton_C_ExecuteUbergraph_SidebarEditNicknameButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
