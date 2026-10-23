#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen) == 0x000008, "Wrong alignment on QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen");
static_assert(sizeof(QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen) == 0x000010, "Wrong size on QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen");
static_assert(offsetof(QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen, EntryPoint) == 0x000000, "Member 'QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
