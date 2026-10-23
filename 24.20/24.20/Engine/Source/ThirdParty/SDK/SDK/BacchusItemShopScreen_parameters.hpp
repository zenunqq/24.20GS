#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bEmpty;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_6[0x2];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen) == 0x000008, "Wrong alignment on BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen");
static_assert(sizeof(BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen) == 0x000010, "Wrong size on BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen");
static_assert(offsetof(BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen, EntryPoint) == 0x000000, "Member 'BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen, K2Node_Event_bEmpty) == 0x000004, "Member 'BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen::K2Node_Event_bEmpty' has a wrong offset!");
static_assert(offsetof(BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen, Temp_bool_Variable) == 0x000005, "Member 'BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen, K2Node_Select_Default) == 0x000008, "Member 'BacchusItemShopScreen_C_ExecuteUbergraph_BacchusItemShopScreen::K2Node_Select_Default' has a wrong offset!");

struct BacchusItemShopScreen_C_OnSectionsEstablished final
{
public:
	bool                                          bEmpty;
};
static_assert(alignof(BacchusItemShopScreen_C_OnSectionsEstablished) == 0x000001, "Wrong alignment on BacchusItemShopScreen_C_OnSectionsEstablished");
static_assert(sizeof(BacchusItemShopScreen_C_OnSectionsEstablished) == 0x000001, "Wrong size on BacchusItemShopScreen_C_OnSectionsEstablished");
static_assert(offsetof(BacchusItemShopScreen_C_OnSectionsEstablished, bEmpty) == 0x000000, "Member 'BacchusItemShopScreen_C_OnSectionsEstablished::bEmpty' has a wrong offset!");

}
