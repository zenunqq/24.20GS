#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton) == 0x000008, "Wrong alignment on BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton");
static_assert(sizeof(BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton) == 0x000018, "Wrong size on BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton");
static_assert(offsetof(BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton, EntryPoint) == 0x000000, "Member 'BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'BacchusItemShopRefreshTimerButton_C_ExecuteUbergraph_BacchusItemShopRefreshTimerButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
