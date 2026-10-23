#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ShowdownPin_C_ChooseScoreToDisplay final
{
public:
	int32                                         ScoreToDisplay;
	int32                                         CallFunc_GetAlternativeScoreToDisplay_ReturnValue;
	bool                                          CallFunc_ShouldUseAlternativeScore_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         CallFunc_GetScoreToDisplay_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(ShowdownPin_C_ChooseScoreToDisplay) == 0x000004, "Wrong alignment on ShowdownPin_C_ChooseScoreToDisplay");
static_assert(sizeof(ShowdownPin_C_ChooseScoreToDisplay) == 0x000014, "Wrong size on ShowdownPin_C_ChooseScoreToDisplay");
static_assert(offsetof(ShowdownPin_C_ChooseScoreToDisplay, ScoreToDisplay) == 0x000000, "Member 'ShowdownPin_C_ChooseScoreToDisplay::ScoreToDisplay' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ChooseScoreToDisplay, CallFunc_GetAlternativeScoreToDisplay_ReturnValue) == 0x000004, "Member 'ShowdownPin_C_ChooseScoreToDisplay::CallFunc_GetAlternativeScoreToDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ChooseScoreToDisplay, CallFunc_ShouldUseAlternativeScore_ReturnValue) == 0x000008, "Member 'ShowdownPin_C_ChooseScoreToDisplay::CallFunc_ShouldUseAlternativeScore_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ChooseScoreToDisplay, CallFunc_GetScoreToDisplay_ReturnValue) == 0x00000C, "Member 'ShowdownPin_C_ChooseScoreToDisplay::CallFunc_GetScoreToDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ChooseScoreToDisplay, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'ShowdownPin_C_ChooseScoreToDisplay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ChooseScoreToDisplay, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'ShowdownPin_C_ChooseScoreToDisplay::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct ShowdownPin_C_EventFixPts final
{
public:
	int32                                         Points;
};
static_assert(alignof(ShowdownPin_C_EventFixPts) == 0x000004, "Wrong alignment on ShowdownPin_C_EventFixPts");
static_assert(sizeof(ShowdownPin_C_EventFixPts) == 0x000004, "Wrong size on ShowdownPin_C_EventFixPts");
static_assert(offsetof(ShowdownPin_C_EventFixPts, Points) == 0x000000, "Member 'ShowdownPin_C_EventFixPts::Points' has a wrong offset!");

struct ShowdownPin_C_EventSetTier final
{
public:
	int32                                         Score;
};
static_assert(alignof(ShowdownPin_C_EventSetTier) == 0x000004, "Wrong alignment on ShowdownPin_C_EventSetTier");
static_assert(sizeof(ShowdownPin_C_EventSetTier) == 0x000004, "Wrong size on ShowdownPin_C_EventSetTier");
static_assert(offsetof(ShowdownPin_C_EventSetTier, Score) == 0x000000, "Member 'ShowdownPin_C_EventSetTier::Score' has a wrong offset!");

struct ShowdownPin_C_ExecuteUbergraph_ShowdownPin final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_15[0x3];
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_21[0x7];
	double                                        Temp_real_Variable;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_33[0x5];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_59[0x3];
	int32                                         K2Node_CustomEvent_Score;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	int32                                         Temp_int_Variable_4;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	int32                                         K2Node_CustomEvent_Points;
	uint8                                         Pad_84[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_F1[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_129[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          Temp_bool_Variable_5;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_13A[0x2];
	int32                                         Temp_int_Variable_5;
	float                                         CallFunc_PauseAnimation_ReturnValue;
	float                                         CallFunc_GetStartTime_ReturnValue;
	float                                         CallFunc_PauseAnimation_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_14D[0x3];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	int32                                         Temp_int_Variable_6;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          Temp_bool_Variable_6;
	uint8                                         Pad_181[0x3];
	int32                                         CallFunc_GetTournamentPinUnlockScore_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	int32                                         K2Node_Select_Default_2;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_19A[0x2];
	int32                                         K2Node_Select_Default_3;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;
	uint8                                         Pad_1A1[0x3];
	int32                                         K2Node_Select_Default_4;
	int32                                         K2Node_Select_Default_5;
	ESlateVisibility                              K2Node_Select_Default_6;
	uint8                                         Pad_1AD[0x3];
	class UMaterialInterface*                     K2Node_Select_Default_7;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	uint8                                         Pad_1EC[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1;
	uint8                                         Pad_1FC[0x4];
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin) == 0x000008, "Wrong alignment on ShowdownPin_C_ExecuteUbergraph_ShowdownPin");
static_assert(sizeof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin) == 0x000208, "Wrong size on ShowdownPin_C_ExecuteUbergraph_ShowdownPin");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, EntryPoint) == 0x000000, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable) == 0x000004, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable) == 0x000008, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable_1) == 0x00000C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable_1) == 0x000010, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable_2) == 0x000014, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable_2) == 0x000018, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable_3) == 0x00001C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable_3) == 0x000020, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_real_Variable) == 0x000028, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable_4) == 0x000030, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_byte_Variable) == 0x000031, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_byte_Variable_1) == 0x000032, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_object_Variable) == 0x000038, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_object_Variable_1) == 0x000040, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_object_Variable_2) == 0x000048, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_object_Variable_3) == 0x000050, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Event_IsDesignTime) == 0x000058, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_CustomEvent_Score) == 0x00005C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_CustomEvent_Score' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000060, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable_4) == 0x000064, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Conv_IntToText_ReturnValue) == 0x000068, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_CustomEvent_Points) == 0x000080, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_CustomEvent_Points' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000088, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_MakeStruct_FormatArgumentData) == 0x000090, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_MakeArray_Array) == 0x0000E0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_byte_Variable_2) == 0x0000F0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000110, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_MakeColor_ReturnValue) == 0x000118, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_byte_Variable_3) == 0x000128, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000130, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable_5) == 0x000138, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default) == 0x000139, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable_5) == 0x00013C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_PauseAnimation_ReturnValue) == 0x000140, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_GetStartTime_ReturnValue) == 0x000144, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_PauseAnimation_ReturnValue_1) == 0x000148, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00014C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000150, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_PlayAnimation_ReturnValue) == 0x000158, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_GetEndTime_ReturnValue) == 0x000160, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_int_Variable_6) == 0x000164, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000168, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_1) == 0x000170, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_PlayAnimation_ReturnValue_1) == 0x000178, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, Temp_bool_Variable_6) == 0x000180, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_GetTournamentPinUnlockScore_ReturnValue) == 0x000184, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_GetTournamentPinUnlockScore_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000188, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_2) == 0x00018C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000190, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000198, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x000199, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_3) == 0x00019C, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Less_DoubleDouble_ReturnValue_2) == 0x0001A0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Less_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_4) == 0x0001A4, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_5) == 0x0001A8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_6) == 0x0001AC, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, K2Node_Select_Default_7) == 0x0001B0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0001B8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0001C0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0001C8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0001D0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x0001D8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001E0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0001E8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0001F0, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x0001F8, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_ExecuteUbergraph_ShowdownPin, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000200, "Member 'ShowdownPin_C_ExecuteUbergraph_ShowdownPin::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct ShowdownPin_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ShowdownPin_C_PreConstruct) == 0x000001, "Wrong alignment on ShowdownPin_C_PreConstruct");
static_assert(sizeof(ShowdownPin_C_PreConstruct) == 0x000001, "Wrong size on ShowdownPin_C_PreConstruct");
static_assert(offsetof(ShowdownPin_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShowdownPin_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ShowdownPin_C_Refresh final
{
public:
	EFortShowdownPinState                         PinState;
	EFortShowdownPinState                         Temp_byte_Variable;
	uint8                                         Pad_2[0x2];
	int32                                         CallFunc_ChooseScoreToDisplay_ScoreToDisplay;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         CallFunc_GetScoreToDisplay_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_14[0x4];
	class FText                                   CallFunc_GetShorthandQuantityWithLimitedDigits_ReturnValue;
	class FText                                   CallFunc_GetShorthandQuantityWithLimitedDigits_ReturnValue_1;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          Temp_bool_Variable;
	EFortShowdownPinState                         Temp_byte_Variable_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_63[0x5];
	class UTextBlock*                             K2Node_Select_Default;
	class UWidget*                                K2Node_Select_Default_1;
	EFortShowdownPinState                         CallFunc_GetEventPinState_ReturnValue;
	EFortShowdownPinState                         CallFunc_GetTournamentBestPinState_ReturnValue;
	EFortShowdownPinState                         K2Node_Select_Default_2;
};
static_assert(alignof(ShowdownPin_C_Refresh) == 0x000008, "Wrong alignment on ShowdownPin_C_Refresh");
static_assert(sizeof(ShowdownPin_C_Refresh) == 0x000080, "Wrong size on ShowdownPin_C_Refresh");
static_assert(offsetof(ShowdownPin_C_Refresh, PinState) == 0x000000, "Member 'ShowdownPin_C_Refresh::PinState' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, Temp_byte_Variable) == 0x000001, "Member 'ShowdownPin_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_ChooseScoreToDisplay_ScoreToDisplay) == 0x000004, "Member 'ShowdownPin_C_Refresh::CallFunc_ChooseScoreToDisplay_ScoreToDisplay' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000008, "Member 'ShowdownPin_C_Refresh::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_GetScoreToDisplay_ReturnValue) == 0x00000C, "Member 'ShowdownPin_C_Refresh::CallFunc_GetScoreToDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000010, "Member 'ShowdownPin_C_Refresh::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_GetShorthandQuantityWithLimitedDigits_ReturnValue) == 0x000018, "Member 'ShowdownPin_C_Refresh::CallFunc_GetShorthandQuantityWithLimitedDigits_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_GetShorthandQuantityWithLimitedDigits_ReturnValue_1) == 0x000030, "Member 'ShowdownPin_C_Refresh::CallFunc_GetShorthandQuantityWithLimitedDigits_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_Conv_IntToText_ReturnValue) == 0x000048, "Member 'ShowdownPin_C_Refresh::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, Temp_bool_Variable) == 0x000060, "Member 'ShowdownPin_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, Temp_byte_Variable_1) == 0x000061, "Member 'ShowdownPin_C_Refresh::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, K2Node_SwitchEnum_CmpSuccess) == 0x000062, "Member 'ShowdownPin_C_Refresh::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, K2Node_Select_Default) == 0x000068, "Member 'ShowdownPin_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, K2Node_Select_Default_1) == 0x000070, "Member 'ShowdownPin_C_Refresh::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_GetEventPinState_ReturnValue) == 0x000078, "Member 'ShowdownPin_C_Refresh::CallFunc_GetEventPinState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, CallFunc_GetTournamentBestPinState_ReturnValue) == 0x000079, "Member 'ShowdownPin_C_Refresh::CallFunc_GetTournamentBestPinState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownPin_C_Refresh, K2Node_Select_Default_2) == 0x00007A, "Member 'ShowdownPin_C_Refresh::K2Node_Select_Default_2' has a wrong offset!");

}
