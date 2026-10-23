#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_11[0x7];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_51[0x3];
	float                                         K2Node_Select_Default;
	struct FVector2D                              K2Node_Select_Default_1;
	struct FMargin                                K2Node_MakeStruct_Margin;
};
static_assert(alignof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton) == 0x000008, "Wrong alignment on WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton");
static_assert(sizeof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton) == 0x000078, "Wrong size on WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, EntryPoint) == 0x000000, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, Temp_bool_Variable) == 0x000004, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, Temp_real_Variable) == 0x000008, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, Temp_real_Variable_1) == 0x00000C, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, Temp_bool_Variable_1) == 0x000010, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, Temp_struct_Variable) == 0x000018, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, Temp_struct_Variable_1) == 0x000028, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000038, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000040, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000048, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, CallFunc_IsMobileGame_ReturnValue) == 0x000050, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, K2Node_Select_Default) == 0x000054, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, K2Node_Select_Default_1) == 0x000058, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton, K2Node_MakeStruct_Margin) == 0x000068, "Member 'WBP_LoadoutTitleButton_C_ExecuteUbergraph_WBP_LoadoutTitleButton::K2Node_MakeStruct_Margin' has a wrong offset!");

struct WBP_LoadoutTitleButton_C_Set_Text final
{
public:
	class FText                                   Text;
};
static_assert(alignof(WBP_LoadoutTitleButton_C_Set_Text) == 0x000008, "Wrong alignment on WBP_LoadoutTitleButton_C_Set_Text");
static_assert(sizeof(WBP_LoadoutTitleButton_C_Set_Text) == 0x000018, "Wrong size on WBP_LoadoutTitleButton_C_Set_Text");
static_assert(offsetof(WBP_LoadoutTitleButton_C_Set_Text, Text) == 0x000000, "Member 'WBP_LoadoutTitleButton_C_Set_Text::Text' has a wrong offset!");

}
