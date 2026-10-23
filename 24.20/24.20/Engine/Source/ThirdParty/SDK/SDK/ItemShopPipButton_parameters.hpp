#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton) == 0x000008, "Wrong alignment on ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton");
static_assert(sizeof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton) == 0x000038, "Wrong size on ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, EntryPoint) == 0x000000, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, Temp_bool_Variable) == 0x000004, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, Temp_byte_Variable) == 0x000005, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, Temp_byte_Variable_1) == 0x000006, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, K2Node_Event_IsDesignTime) == 0x000007, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000018, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, CallFunc_IsMobileGame_ReturnValue) == 0x000020, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000028, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton, K2Node_Select_Default) == 0x000031, "Member 'ItemShopPipButton_C_ExecuteUbergraph_ItemShopPipButton::K2Node_Select_Default' has a wrong offset!");

struct ItemShopPipButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ItemShopPipButton_C_PreConstruct) == 0x000001, "Wrong alignment on ItemShopPipButton_C_PreConstruct");
static_assert(sizeof(ItemShopPipButton_C_PreConstruct) == 0x000001, "Wrong size on ItemShopPipButton_C_PreConstruct");
static_assert(offsetof(ItemShopPipButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ItemShopPipButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
