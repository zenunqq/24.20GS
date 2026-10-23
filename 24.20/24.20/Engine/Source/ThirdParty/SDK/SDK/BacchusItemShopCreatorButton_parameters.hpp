#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton) == 0x000008, "Wrong alignment on BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton");
static_assert(sizeof(BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton) == 0x000018, "Wrong size on BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton");
static_assert(offsetof(BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton, EntryPoint) == 0x000000, "Member 'BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'BacchusItemShopCreatorButton_C_ExecuteUbergraph_BacchusItemShopCreatorButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
