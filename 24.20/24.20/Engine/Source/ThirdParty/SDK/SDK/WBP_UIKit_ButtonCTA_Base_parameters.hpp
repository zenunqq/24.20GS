#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "ModularButtonSize_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct WBP_UIKit_ButtonCTA_Base_C_AddModularBlock final
{
public:
	class UWBP_UIKit_Block_Base_C*                Modular_Block;
	int32                                         CallFunc_Array_Add_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_AddModularBlock) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_AddModularBlock");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_AddModularBlock) == 0x000010, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_AddModularBlock");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_AddModularBlock, Modular_Block) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_AddModularBlock::Modular_Block' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_AddModularBlock, CallFunc_Array_Add_ReturnValue) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_AddModularBlock::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded) == 0x000008, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded, HoldPercentage) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded::HoldPercentage' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldEnded::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted final
{
public:
	float                                         HoldPercentage;
	bool                                          bInUseSecondaryHoldAnimation;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted) == 0x000008, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted, HoldPercentage) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted::HoldPercentage' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted, bInUseSecondaryHoldAnimation) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_OnHoldStarted::bInUseSecondaryHoldAnimation' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged final
{
public:
	ECommonInputType                              CurrentInputType_0;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged, CurrentInputType_0) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_OnInputMethodChanged::CurrentInputType_0' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText) == 0x000018, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText, Text_0) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_SetSecondaryText::Text_0' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_BP_SetText final
{
public:
	class FText                                   Text_0;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_BP_SetText) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_BP_SetText");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_BP_SetText) == 0x000018, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_BP_SetText");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_BP_SetText, Text_0) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_BP_SetText::Text_0' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_17[0x1];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_21[0x7];
	class UAudioComponent*                        CallFunc_CreateSound2D_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_31[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_41[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_4C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	ECommonInputType                              K2Node_Event_CurrentInputType;
	uint8                                         Pad_69[0x3];
	float                                         K2Node_Event_HeldPercent;
	float                                         K2Node_Event_HoldPercentage_1;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation_1;
	uint8                                         Pad_75[0x3];
	float                                         K2Node_Event_HoldPercentage;
	bool                                          K2Node_Event_bInUseSecondaryHoldAnimation;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_7E[0x2];
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_84[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_A1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	class FString                                 CallFunc_GetCurrentLanguage_ReturnValue;
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;
	uint8                                         Pad_C9[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue_2;
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_DD[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_E4[0x4];
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_F5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_FD[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable_2;
	uint8                                         Pad_10C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item_2;
	bool                                          CallFunc_SetText_Empty;
	uint8                                         Pad_121[0x7];
	class FText                                   K2Node_Event_Text_1;
	bool                                          CallFunc_SetText_Empty_1;
	uint8                                         Pad_141[0x7];
	class FText                                   K2Node_Event_Text;
	int32                                         CallFunc_Array_Add_ReturnValue_3;
	int32                                         CallFunc_Array_Add_ReturnValue_4;
	bool                                          CallFunc_IsPromptHoldable_Holdable;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsPromptHoldable_Holdable_1;
	uint8                                         Pad_16B[0x1];
	int32                                         Temp_int_Loop_Counter_Variable_3;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_171[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;
	uint8                                         Pad_181[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	int32                                         Temp_int_Array_Index_Variable_3;
	uint8                                         Pad_18C[0x4];
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item_3;
	bool                                          K2Node_Event_bHoldRequired;
	uint8                                         Pad_199[0x3];
	float                                         CallFunc_FadeIn_FadeInDuration_ImplicitCast;
	float                                         CallFunc_FadeOut_FadeOutDuration_ImplicitCast;
	float                                         CallFunc_FadeOut_FadeOutDuration_ImplicitCast_1;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base) == 0x0001D8, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, EntryPoint) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_bool_Variable) == 0x000014, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsValid_ReturnValue_1) == 0x000016, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_SpawnSound2D_ReturnValue) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsValid_ReturnValue_2) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_CreateSound2D_ReturnValue) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_CreateSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsValid_ReturnValue_3) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_IsDesignTime) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimationForward_ReturnValue) == 0x000050, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000058, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Add_ReturnValue_1) == 0x000064, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_CurrentInputType) == 0x000068, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_CurrentInputType' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_HeldPercent) == 0x00006C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_HeldPercent' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_HoldPercentage_1) == 0x000070, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_HoldPercentage_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_bInUseSecondaryHoldAnimation_1) == 0x000074, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_bInUseSecondaryHoldAnimation_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_HoldPercentage) == 0x000078, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_HoldPercentage' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_bInUseSecondaryHoldAnimation) == 0x00007C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_bInUseSecondaryHoldAnimation' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00007D, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_GetEndTime_ReturnValue) == 0x000080, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000088, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000090, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000098, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_bool_Variable_1) == 0x0000A0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimation_ReturnValue) == 0x0000A8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Loop_Counter_Variable_2) == 0x0000B0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B4, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_GetCurrentLanguage_ReturnValue) == 0x0000B8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_GetCurrentLanguage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x0000C8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Add_ReturnValue_2) == 0x0000CC, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Length_ReturnValue) == 0x0000D8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Less_IntInt_ReturnValue) == 0x0000DC, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Length_ReturnValue_1) == 0x0000E0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Get_Item_1) == 0x0000E8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Length_ReturnValue_2) == 0x0000F0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F4, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Length_ReturnValue_3) == 0x0000F8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000FC, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000100, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Array_Index_Variable_2) == 0x000108, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000110, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Get_Item_2) == 0x000118, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_SetText_Empty) == 0x000120, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_SetText_Empty' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_Text_1) == 0x000128, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_SetText_Empty_1) == 0x000140, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_SetText_Empty_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_Text) == 0x000148, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_Text' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Add_ReturnValue_3) == 0x000160, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Add_ReturnValue_4) == 0x000164, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsPromptHoldable_Holdable) == 0x000168, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsPromptHoldable_Holdable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsValid_ReturnValue_4) == 0x000169, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsPromptHoldable_Holdable_1) == 0x00016A, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsPromptHoldable_Holdable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Loop_Counter_Variable_3) == 0x00016C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_IsValid_ReturnValue_5) == 0x000170, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_SpawnSound2D_ReturnValue_2) == 0x000178, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_SpawnSound2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Less_IntInt_ReturnValue_3) == 0x000180, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Add_IntInt_ReturnValue_3) == 0x000184, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, Temp_int_Array_Index_Variable_3) == 0x000188, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Array_Get_Item_3) == 0x000190, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, K2Node_Event_bHoldRequired) == 0x000198, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::K2Node_Event_bHoldRequired' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_FadeIn_FadeInDuration_ImplicitCast) == 0x00019C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_FadeIn_FadeInDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_FadeOut_FadeOutDuration_ImplicitCast) == 0x0001A0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_FadeOut_FadeOutDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_FadeOut_FadeOutDuration_ImplicitCast_1) == 0x0001A4, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_FadeOut_FadeOutDuration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001A8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0001B0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0001B8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0001C0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0001C8, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0001D0, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x0001D4, "Member 'WBP_UIKit_ButtonCTA_Base_C_ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_IsPromptAction final
{
public:
	bool                                          Valid;
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_IsPromptAction) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_IsPromptAction");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_IsPromptAction) == 0x000003, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_IsPromptAction");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptAction, Valid) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptAction::Valid' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptAction, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptAction::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptAction, CallFunc_NotEqual_NameName_ReturnValue) == 0x000002, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptAction::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable final
{
public:
	bool                                          Holdable;
	bool                                          CallFunc_GetIsHoldRequired_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsHeldAction_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable) == 0x000005, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable, Holdable) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable::Holdable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable, CallFunc_GetIsHoldRequired_ReturnValue) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable::CallFunc_GetIsHoldRequired_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable, CallFunc_IsHeldAction_ReturnValue) == 0x000003, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable::CallFunc_IsHeldAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptHoldable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon final
{
public:
	bool                                          Valid;
	uint8                                         Pad_1[0xF];
	struct FSlateBrush                            CallFunc_GetIcon_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon) == 0x000010, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon) == 0x0000E0, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon, Valid) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon::Valid' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon, CallFunc_GetIcon_ReturnValue) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'WBP_UIKit_ButtonCTA_Base_C_IsPromptIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_OnActionProgress final
{
public:
	float                                         HeldPercent;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_OnActionProgress) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_OnActionProgress");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_OnActionProgress) == 0x000004, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_OnActionProgress");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_OnActionProgress, HeldPercent) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_OnActionProgress::HeldPercent' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged final
{
public:
	bool                                          bHoldRequired;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged) == 0x000001, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged, bHoldRequired) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_OnHoldRequiredChanged::bHoldRequired' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_PreConstruct");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_PreConstruct) == 0x000001, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_PreConstruct");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_ResetButtonState final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	uint8                                         Pad_11[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_ResetButtonState");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState) == 0x000040, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_ResetButtonState");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_GetIsEnabled_ReturnValue) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Array_Length_ReturnValue_1) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ResetButtonState, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003C, "Member 'WBP_UIKit_ButtonCTA_Base_C_ResetButtonState::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_Set_Prompt final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_Set_Prompt) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_Set_Prompt");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_Set_Prompt) == 0x000018, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_Set_Prompt");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_Set_Prompt, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_Set_Prompt::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_Set_Prompt, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_Set_Prompt::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_Set_Prompt, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_Set_Prompt::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_Set_Prompt, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'WBP_UIKit_ButtonCTA_Base_C_Set_Prompt::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial final
{
public:
	class UMaterialInstance*                      Background_0;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial) == 0x000008, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial, Background_0) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBackgroundMaterial::Background_0' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility final
{
public:
	bool                                          Visible;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility) == 0x000001, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility, Visible) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBackgroundVisibility::Visible' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming final
{
public:
	class UWBP_UIKit_Block_Base_C*                bLock;
	double                                        Time_Hovering;
	double                                        Time_Unhovering;
	double                                        Time_Focusing;
	double                                        Time_Unfocusing;
	double                                        Time_Pressing;
	double                                        Time_Releasing;
	double                                        Time_Disabling;
	double                                        Time_Enabling;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming) == 0x000048, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, bLock) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::bLock' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Hovering) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Hovering' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Unhovering) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Unhovering' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Focusing) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Focusing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Unfocusing) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Unfocusing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Pressing) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Pressing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Releasing) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Releasing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Disabling) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Disabling' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming, Time_Enabling) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBlockTiming::Time_Enabling' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial final
{
public:
	class UMaterialInstance*                      BorderMaterial_0;
	bool                                          IsAdditive;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial) == 0x000010, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial, BorderMaterial_0) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial::BorderMaterial_0' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial, IsAdditive) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetBorderMaterial::IsAdditive' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable_2;
	uint8                                         Pad_1C[0x4];
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsHovered_ReturnValue;
	uint8                                         Pad_2E[0x2];
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	bool                                          CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;
	uint8                                         Pad_36[0x2];
	int32                                         Temp_int_Loop_Counter_Variable_2;
	uint8                                         Pad_3C[0x4];
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	uint8                                         Pad_4C[0x4];
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item_3;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_5D[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled) == 0x000068, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, Temp_int_Array_Index_Variable_2) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_IsHovered_ReturnValue) == 0x00002D, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_LastIndex_ReturnValue) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Get_Item_1) == 0x000034, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000035, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, Temp_int_Loop_Counter_Variable_2) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Get_Item_2) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Add_IntInt_ReturnValue_2) == 0x000048, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Get_Item_3) == 0x000050, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Less_IntInt_ReturnValue_1) == 0x00005C, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Array_Length_ReturnValue_2) == 0x000060, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled, CallFunc_Less_IntInt_ReturnValue_2) == 0x000064, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonIsEnabled::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetButtonSize final
{
public:
	EModularButtonSize                            ButtonSize_0;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetButtonSize) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetButtonSize");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetButtonSize) == 0x000001, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetButtonSize");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonSize, ButtonSize_0) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonSize::ButtonSize_0' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming final
{
public:
	double                                        Time_Hovering;
	double                                        Time_Unhovering;
	double                                        Time_Focusing;
	double                                        Time_Unfocusing;
	double                                        Time_Pressing;
	double                                        Time_Releasing;
	double                                        Time_Disabling;
	double                                        Time_Enabling;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UWBP_UIKit_Block_Base_C*                CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming) == 0x000060, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Hovering) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Hovering' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Unhovering) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Unhovering' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Focusing) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Focusing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Unfocusing) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Unfocusing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Pressing) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Pressing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Releasing) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Releasing' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Disabling) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Disabling' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Time_Enabling) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Time_Enabling' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Temp_int_Array_Index_Variable) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetButtonTiming::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection final
{
public:
	bool                                          RightToLeft;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	struct FWidgetTransform                       K2Node_Select_Default;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection) == 0x000040, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection, RightToLeft) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection::RightToLeft' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection, Temp_bool_Variable) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection, K2Node_Select_Default) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_SetLanguageDirection::K2Node_Select_Default' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText final
{
public:
	class FText                                   CallFunc_GetDisplayText_ReturnValue;
	bool                                          CallFunc_SetText_Empty;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText) == 0x000020, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText, CallFunc_GetDisplayText_ReturnValue) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText::CallFunc_GetDisplayText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText, CallFunc_SetText_Empty) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowInputActionText::CallFunc_SetText_Empty' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction final
{
public:
	bool                                          Show;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction) == 0x000001, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction) == 0x000007, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, Show) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::Show' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, Temp_bool_Variable) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, Temp_byte_Variable) == 0x000002, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, K2Node_Select_Default) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000005, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction, CallFunc_BooleanAND_ReturnValue) == 0x000006, "Member 'WBP_UIKit_ButtonCTA_Base_C_ShowPromptFallbackAction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze final
{
public:
	EModularButtonSize                            Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	EModularButtonSize                            Temp_byte_Variable_1;
	EModularButtonSize                            Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_1;
	EModularButtonSize                            Temp_byte_Variable_3;
	EModularButtonSize                            Temp_byte_Variable_4;
	EModularButtonSize                            Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	EModularButtonSize                            Temp_byte_Variable_6;
	EModularButtonSize                            Temp_byte_Variable_7;
	uint8                                         Pad_B[0x5];
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	struct FMargin                                K2Node_Select_Default;
	struct FMargin                                K2Node_Select_Default_1;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	struct FMargin                                K2Node_Select_Default_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_51[0x3];
	struct FMargin                                K2Node_Select_Default_3;
	int32                                         K2Node_Select_Default_4;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;
	int32                                         K2Node_Select_Default_5;
	struct FMargin                                K2Node_Select_Default_6;
	struct FMargin                                K2Node_Select_Default_7;
	struct FMargin                                K2Node_Select_Default_8;
	uint8                                         Pad_A4[0x4];
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;
	struct FMargin                                K2Node_Select_Default_9;
	int32                                         K2Node_Select_Default_10;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze) == 0x0000C8, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_bool_Variable) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_2) == 0x000003, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_bool_Variable_1) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_3) == 0x000005, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_4) == 0x000006, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_5) == 0x000007, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_bool_Variable_2) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_6) == 0x000009, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, Temp_byte_Variable_7) == 0x00000A, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_1) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_2) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, CallFunc_IsMobileGame_ReturnValue) == 0x000050, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_3) == 0x000054, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_4) == 0x000064, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1) == 0x000068, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_5) == 0x000070, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_6) == 0x000074, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_7) == 0x000084, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_8) == 0x000094, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1) == 0x0000A8, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_9) == 0x0000B0, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze, K2Node_Select_Default_10) == 0x0000C0, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSIze::K2Node_Select_Default_10' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid final
{
public:
	double                                        NewGridAlignedSize;
	EModularButtonSize                            Temp_byte_Variable;
	uint8                                         Pad_9[0x3];
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         K2Node_Select_Default;
	uint8                                         Pad_14[0x4];
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	uint8                                         Pad_29[0x7];
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	int32                                         CallFunc_SelectInt_ReturnValue;
	uint8                                         Pad_44[0x4];
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_1;
	uint8                                         Pad_54[0x4];
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_61[0x7];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	int32                                         CallFunc_FCeil_ReturnValue;
	uint8                                         Pad_74[0x4];
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid) == 0x000088, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, NewGridAlignedSize) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::NewGridAlignedSize' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, Temp_byte_Variable) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_FTrunc_ReturnValue) == 0x00000C, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, K2Node_Select_Default) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_GetDesiredSize_ReturnValue) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_BreakVector2D_X) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_BreakVector2D_Y) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_SelectInt_ReturnValue) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000048, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_FTrunc_ReturnValue_1) == 0x000050, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000058, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000068, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_FCeil_ReturnValue) == 0x000070, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_Conv_IntToDouble_ReturnValue_2) == 0x000078, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_Conv_IntToDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000080, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateButtonSizeToGrid::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_UpdateFonts final
{
public:
	bool                                          Temp_bool_Variable;
	EModularButtonSize                            Temp_byte_Variable;
	EModularButtonSize                            Temp_byte_Variable_1;
	EModularButtonSize                            Temp_byte_Variable_2;
	EModularButtonSize                            Temp_byte_Variable_3;
	EModularButtonSize                            Temp_byte_Variable_4;
	uint8                                         Pad_6[0x2];
	double                                        K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_11[0x7];
	double                                        K2Node_Select_Default_1;
	double                                        K2Node_Select_Default_2;
	double                                        K2Node_Select_Default_3;
	double                                        K2Node_Select_Default_4;
	struct FSlateFontInfo                         K2Node_Select_Default_5;
	struct FSlateFontInfo                         K2Node_Select_Default_6;
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue;
	uint8                                         Pad_FC[0x4];
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	float                                         CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast;
	float                                         CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_1;
	float                                         CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_2;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts) == 0x000008, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_UpdateFonts");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts) == 0x000168, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_UpdateFonts");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_bool_Variable) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_byte_Variable) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_byte_Variable_2) == 0x000003, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_byte_Variable_3) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_byte_Variable_4) == 0x000005, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, Temp_bool_Variable_1) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default_1) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default_2) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default_3) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default_4) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default_5) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_Select_Default_6) == 0x000090, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, CallFunc_Conv_IntToDouble_ReturnValue) == 0x0000E8, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000F0, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, CallFunc_FTrunc_ReturnValue) == 0x0000F8, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, K2Node_MakeStruct_SlateFontInfo) == 0x000100, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast) == 0x000158, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_1) == 0x00015C, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdateFonts, CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_2) == 0x000160, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdateFonts::CallFunc_SetMobileFontSizeMultiplier_MobileFontSizeMultiplier_ImplicitCast_2' has a wrong offset!");

struct WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt final
{
public:
	ECommonInputType                              InputType;
	bool                                          IsPromptHoldable_0;
	bool                                          IsPromptIcon_0;
	ECommonInputType                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	ECommonInputType                              Temp_byte_Variable_6;
	uint8                                         Pad_B[0x1];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	float                                         Temp_real_Variable_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_19[0x3];
	float                                         Temp_real_Variable_3;
	float                                         Temp_real_Variable_4;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_7;
	ESlateVisibility                              Temp_byte_Variable_8;
	bool                                          Temp_bool_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_9;
	ESlateVisibility                              Temp_byte_Variable_10;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_11;
	ESlateVisibility                              Temp_byte_Variable_12;
	ECommonInputType                              Temp_byte_Variable_13;
	ESlateVisibility                              Temp_byte_Variable_14;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_31[0x3];
	float                                         K2Node_Select_Default_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_39[0x3];
	float                                         K2Node_Select_Default_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_15;
	ESlateVisibility                              K2Node_Select_Default_4;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_5;
	bool                                          Temp_bool_Variable_5;
	ESlateVisibility                              K2Node_Select_Default_6;
	ESlateVisibility                              K2Node_Select_Default_7;
	bool                                          CallFunc_IsPromptHoldable_Holdable;
	ESlateVisibility                              K2Node_Select_Default_8;
	bool                                          CallFunc_IsPromptIcon_Valid;
};
static_assert(alignof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt) == 0x000004, "Wrong alignment on WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt");
static_assert(sizeof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt) == 0x00004C, "Wrong size on WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, InputType) == 0x000000, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::InputType' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, IsPromptHoldable_0) == 0x000001, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::IsPromptHoldable_0' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, IsPromptIcon_0) == 0x000002, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::IsPromptIcon_0' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable) == 0x000003, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_1) == 0x000004, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_2) == 0x000005, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_3) == 0x000006, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_bool_Variable) == 0x000007, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_4) == 0x000008, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_5) == 0x000009, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_6) == 0x00000A, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_real_Variable) == 0x00000C, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_real_Variable_1) == 0x000010, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_real_Variable_2) == 0x000014, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_bool_Variable_1) == 0x000018, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_real_Variable_3) == 0x00001C, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_real_Variable_4) == 0x000020, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_bool_Variable_2) == 0x000024, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_7) == 0x000025, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_8) == 0x000026, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_bool_Variable_3) == 0x000027, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_9) == 0x000028, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_10) == 0x000029, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_bool_Variable_4) == 0x00002A, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_11) == 0x00002B, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_12) == 0x00002C, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_13) == 0x00002D, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_14) == 0x00002E, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, CallFunc_GetIsEnabled_ReturnValue) == 0x00002F, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default) == 0x000030, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_1) == 0x000034, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_2) == 0x000038, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_3) == 0x00003C, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_byte_Variable_15) == 0x000041, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_4) == 0x000042, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, CallFunc_BooleanAND_ReturnValue) == 0x000044, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_5) == 0x000045, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, Temp_bool_Variable_5) == 0x000046, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_6) == 0x000047, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_7) == 0x000048, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, CallFunc_IsPromptHoldable_Holdable) == 0x000049, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::CallFunc_IsPromptHoldable_Holdable' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, K2Node_Select_Default_8) == 0x00004A, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt, CallFunc_IsPromptIcon_Valid) == 0x00004B, "Member 'WBP_UIKit_ButtonCTA_Base_C_UpdatePrompt::CallFunc_IsPromptIcon_Valid' has a wrong offset!");

}
