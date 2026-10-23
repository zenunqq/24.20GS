#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu) == 0x000008, "Wrong alignment on MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu");
static_assert(sizeof(MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu) == 0x000010, "Wrong size on MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu");
static_assert(offsetof(MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu, EntryPoint) == 0x000000, "Member 'MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MultiActionConfirmationMenu_C_ExecuteUbergraph_MultiActionConfirmationMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct MultiActionConfirmationMenu_C_UpdateText final
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(MultiActionConfirmationMenu_C_UpdateText) == 0x000008, "Wrong alignment on MultiActionConfirmationMenu_C_UpdateText");
static_assert(sizeof(MultiActionConfirmationMenu_C_UpdateText) == 0x000020, "Wrong size on MultiActionConfirmationMenu_C_UpdateText");
static_assert(offsetof(MultiActionConfirmationMenu_C_UpdateText, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'MultiActionConfirmationMenu_C_UpdateText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiActionConfirmationMenu_C_UpdateText, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'MultiActionConfirmationMenu_C_UpdateText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
