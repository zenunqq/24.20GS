#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct QuestNotification_C_BP_OnTimerSet final
{
public:
	EAthenaChallengeTimerState                    TimerState;
};
static_assert(alignof(QuestNotification_C_BP_OnTimerSet) == 0x000001, "Wrong alignment on QuestNotification_C_BP_OnTimerSet");
static_assert(sizeof(QuestNotification_C_BP_OnTimerSet) == 0x000001, "Wrong size on QuestNotification_C_BP_OnTimerSet");
static_assert(offsetof(QuestNotification_C_BP_OnTimerSet, TimerState) == 0x000000, "Member 'QuestNotification_C_BP_OnTimerSet::TimerState' has a wrong offset!");

struct QuestNotification_C_ExecuteUbergraph_QuestNotification final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_4;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_2B[0x1];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_35[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_45[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	struct FLinearColor                           Temp_struct_Variable;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_79[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	uint8                                         Pad_94[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          K2Node_Event_bWasAssisted;
	uint8                                         Pad_B9[0x7];
	class FString                                 K2Node_Event_OtherPlayersName;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	EAthenaChallengeTimerState                    K2Node_Event_TimerState;
	uint8                                         Pad_139[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_151[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_171[0x3];
	struct FLinearColor                           Temp_struct_Variable_2;
	struct FLinearColor                           Temp_struct_Variable_3;
	uint8                                         Pad_194[0x4];
	class UWidget*                                K2Node_Select_Default;
	struct FLinearColor                           Temp_struct_Variable_4;
	struct FLinearColor                           Temp_struct_Variable_5;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	float                                         CallFunc_GetEndTime_ReturnValue_2;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	uint8                                         Pad_1CD[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue_3;
	uint8                                         Temp_byte_Variable_6;
	uint8                                         Pad_1D5[0x3];
	struct FLinearColor                           K2Node_Select_Default_1;
	bool                                          K2Node_Event_IsEnabled;
	uint8                                         Pad_1E9[0x3];
	float                                         K2Node_Event_Rate;
	double                                        CallFunc_FMax_ReturnValue;
	bool                                          K2Node_Event_bUseRarityContainer;
	bool                                          K2Node_Event_bIsDailyPunchcardQuest;
	uint8                                         Pad_1FA[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	ESlateVisibility                              K2Node_Select_Default_2;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_20A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_234[0x4];
	class UWidget*                                K2Node_Select_Default_4;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_4;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_5;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	uint8                                         Pad_251[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_6;
	ESlateVisibility                              K2Node_Select_Default_5;
	uint8                                         Pad_261[0x7];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_271[0x7];
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;
	bool                                          CallFunc_ClassIsChildOf_ReturnValue;
	uint8                                         Pad_281[0x3];
	float                                         K2Node_Select_Default_6;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	double                                        CallFunc_FMax_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
};
static_assert(alignof(QuestNotification_C_ExecuteUbergraph_QuestNotification) == 0x000008, "Wrong alignment on QuestNotification_C_ExecuteUbergraph_QuestNotification");
static_assert(sizeof(QuestNotification_C_ExecuteUbergraph_QuestNotification) == 0x0002B8, "Wrong size on QuestNotification_C_ExecuteUbergraph_QuestNotification");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, EntryPoint) == 0x000000, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_bool_Variable) == 0x000004, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_bool_Variable_1) == 0x000020, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable) == 0x000021, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable_1) == 0x000022, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_bool_Variable_2) == 0x000023, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable_2) == 0x000024, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable_3) == 0x000025, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_bool_Variable_3) == 0x000026, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_bool_Variable_4) == 0x000027, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable_4) == 0x000028, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable_5) == 0x000029, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_bool_Variable_5) == 0x00002A, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_real_Variable) == 0x00002C, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_real_Variable_1) == 0x000030, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_IsDesignTime) == 0x000034, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000044, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetEndTime_ReturnValue) == 0x000050, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetEndTime_ReturnValue_1) == 0x000054, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_ReturnValue_2) == 0x000060, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_struct_Variable) == 0x000068, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000078, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000080, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000088, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Max_ReturnValue) == 0x00008C, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000090, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000098, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_struct_Variable_1) == 0x0000A8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_bWasAssisted) == 0x0000B8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_bWasAssisted' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_OtherPlayersName) == 0x0000C0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_OtherPlayersName' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_MakeStruct_FormatArgumentData) == 0x0000E8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_TimerState) == 0x000138, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_TimerState' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_MakeArray_Array) == 0x000140, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000150, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Format_ReturnValue) == 0x000158, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000170, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_struct_Variable_2) == 0x000174, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_struct_Variable_3) == 0x000184, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default) == 0x000198, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_struct_Variable_4) == 0x0001A0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_struct_Variable_5) == 0x0001B0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_ReturnValue_3) == 0x0001C0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetEndTime_ReturnValue_2) == 0x0001C8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x0001CC, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetEndTime_ReturnValue_3) == 0x0001D0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetEndTime_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, Temp_byte_Variable_6) == 0x0001D4, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default_1) == 0x0001D8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_IsEnabled) == 0x0001E8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_IsEnabled' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_Rate) == 0x0001EC, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_Rate' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_FMax_ReturnValue) == 0x0001F0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_bUseRarityContainer) == 0x0001F8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_bUseRarityContainer' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Event_bIsDailyPunchcardQuest) == 0x0001F9, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Event_bIsDailyPunchcardQuest' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_ReturnValue_4) == 0x000200, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default_2) == 0x000208, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default_3) == 0x000209, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_ReturnValue_5) == 0x000210, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000218, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue_3) == 0x000220, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_CreateDelegate_OutputDelegate_3) == 0x000228, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default_4) == 0x000238, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue_4) == 0x000240, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue_5) == 0x000248, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x000250, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetDynamicMaterial_ReturnValue_6) == 0x000258, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetDynamicMaterial_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default_5) == 0x000260, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetOwningPlayer_ReturnValue) == 0x000268, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_IsValid_ReturnValue) == 0x000270, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_GetObjectClass_ReturnValue) == 0x000278, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_ClassIsChildOf_ReturnValue) == 0x000280, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_ClassIsChildOf_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, K2Node_Select_Default_6) == 0x000284, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000288, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000290, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000298, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00029C, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_FMax_A_ImplicitCast) == 0x0002A0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_FMax_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast) == 0x0002A8, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1) == 0x0002AC, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_ExecuteUbergraph_QuestNotification, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x0002B0, "Member 'QuestNotification_C_ExecuteUbergraph_QuestNotification::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

struct QuestNotification_C_OnEnableCompleteFlavorText final
{
public:
	bool                                          IsEnabled;
};
static_assert(alignof(QuestNotification_C_OnEnableCompleteFlavorText) == 0x000001, "Wrong alignment on QuestNotification_C_OnEnableCompleteFlavorText");
static_assert(sizeof(QuestNotification_C_OnEnableCompleteFlavorText) == 0x000001, "Wrong size on QuestNotification_C_OnEnableCompleteFlavorText");
static_assert(offsetof(QuestNotification_C_OnEnableCompleteFlavorText, IsEnabled) == 0x000000, "Member 'QuestNotification_C_OnEnableCompleteFlavorText::IsEnabled' has a wrong offset!");

struct QuestNotification_C_OnPlayRushedNotificationIntro final
{
public:
	float                                         Rate;
};
static_assert(alignof(QuestNotification_C_OnPlayRushedNotificationIntro) == 0x000004, "Wrong alignment on QuestNotification_C_OnPlayRushedNotificationIntro");
static_assert(sizeof(QuestNotification_C_OnPlayRushedNotificationIntro) == 0x000004, "Wrong size on QuestNotification_C_OnPlayRushedNotificationIntro");
static_assert(offsetof(QuestNotification_C_OnPlayRushedNotificationIntro, Rate) == 0x000000, "Member 'QuestNotification_C_OnPlayRushedNotificationIntro::Rate' has a wrong offset!");

struct QuestNotification_C_OnUpdateNotificationBackground final
{
public:
	bool                                          bUseRarityContainer;
	bool                                          bIsDailyPunchcardQuest;
};
static_assert(alignof(QuestNotification_C_OnUpdateNotificationBackground) == 0x000001, "Wrong alignment on QuestNotification_C_OnUpdateNotificationBackground");
static_assert(sizeof(QuestNotification_C_OnUpdateNotificationBackground) == 0x000002, "Wrong size on QuestNotification_C_OnUpdateNotificationBackground");
static_assert(offsetof(QuestNotification_C_OnUpdateNotificationBackground, bUseRarityContainer) == 0x000000, "Member 'QuestNotification_C_OnUpdateNotificationBackground::bUseRarityContainer' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_OnUpdateNotificationBackground, bIsDailyPunchcardQuest) == 0x000001, "Member 'QuestNotification_C_OnUpdateNotificationBackground::bIsDailyPunchcardQuest' has a wrong offset!");

struct QuestNotification_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(QuestNotification_C_PreConstruct) == 0x000001, "Wrong alignment on QuestNotification_C_PreConstruct");
static_assert(sizeof(QuestNotification_C_PreConstruct) == 0x000001, "Wrong size on QuestNotification_C_PreConstruct");
static_assert(offsetof(QuestNotification_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestNotification_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct QuestNotification_C_SetAssistData final
{
public:
	bool                                          bWasAssisted;
	uint8                                         Pad_1[0x7];
	class FString                                 OtherPlayersName;
};
static_assert(alignof(QuestNotification_C_SetAssistData) == 0x000008, "Wrong alignment on QuestNotification_C_SetAssistData");
static_assert(sizeof(QuestNotification_C_SetAssistData) == 0x000018, "Wrong size on QuestNotification_C_SetAssistData");
static_assert(offsetof(QuestNotification_C_SetAssistData, bWasAssisted) == 0x000000, "Member 'QuestNotification_C_SetAssistData::bWasAssisted' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_SetAssistData, OtherPlayersName) == 0x000008, "Member 'QuestNotification_C_SetAssistData::OtherPlayersName' has a wrong offset!");

struct QuestNotification_C_UpdateProgress final
{
public:
	int32                                         CallFunc_Max_ReturnValue;
	int32                                         CallFunc_Max_ReturnValue_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(QuestNotification_C_UpdateProgress) == 0x000008, "Wrong alignment on QuestNotification_C_UpdateProgress");
static_assert(sizeof(QuestNotification_C_UpdateProgress) == 0x000060, "Wrong size on QuestNotification_C_UpdateProgress");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Max_ReturnValue) == 0x000000, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Max_ReturnValue_1) == 0x000004, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Max_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00000C, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000010, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x000014, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000020, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'QuestNotification_C_UpdateProgress::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000030, "Member 'QuestNotification_C_UpdateProgress::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000038, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Divide_DoubleDouble_B_ImplicitCast_1) == 0x000040, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Divide_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_Divide_DoubleDouble_A_ImplicitCast_1) == 0x000050, "Member 'QuestNotification_C_UpdateProgress::CallFunc_Divide_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000058, "Member 'QuestNotification_C_UpdateProgress::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuestNotification_C_UpdateProgress, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x00005C, "Member 'QuestNotification_C_UpdateProgress::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

}
