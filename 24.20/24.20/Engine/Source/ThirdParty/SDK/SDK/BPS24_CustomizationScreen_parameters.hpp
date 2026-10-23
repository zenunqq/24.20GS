#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen) == 0x000008, "Wrong alignment on BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen");
static_assert(sizeof(BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen) == 0x000010, "Wrong size on BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen");
static_assert(offsetof(BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen, EntryPoint) == 0x000000, "Member 'BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BPS24_CustomizationScreen_C_ExecuteUbergraph_BPS24_CustomizationScreen::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
