#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large) == 0x000008, "Wrong alignment on MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large");
static_assert(sizeof(MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large) == 0x000018, "Wrong size on MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large");
static_assert(offsetof(MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large, EntryPoint) == 0x000000, "Member 'MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'MainMenuButton_Large_C_ExecuteUbergraph_MainMenuButton_Large::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
