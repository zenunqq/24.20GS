#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton) == 0x000008, "Wrong alignment on ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton");
static_assert(sizeof(ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton) == 0x000018, "Wrong size on ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton");
static_assert(offsetof(ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton, EntryPoint) == 0x000000, "Member 'ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'ItemShopRefreshTimerButton_C_ExecuteUbergraph_ItemShopRefreshTimerButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
