#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton) == 0x000008, "Wrong alignment on EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton");
static_assert(sizeof(EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton) == 0x000018, "Wrong size on EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton");
static_assert(offsetof(EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton, EntryPoint) == 0x000000, "Member 'EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'EditNicknameButton_C_ExecuteUbergraph_EditNicknameButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
