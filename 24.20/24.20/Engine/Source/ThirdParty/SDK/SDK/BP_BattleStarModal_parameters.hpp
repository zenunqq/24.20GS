#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UFortBattlePassContext*                 CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_11[0x7];
	class FText                                   CallFunc_GetLevelPurchaseDisclaimerText_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_32[0x6];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	int32                                         Temp_int_Variable;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_56[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_5C[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	int32                                         K2Node_Event_NewPrice;
	uint8                                         Pad_7C[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_9C[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_BA[0x2];
	int32                                         K2Node_Event_NewAmount;
	int32                                         K2Node_Event_LevelsLeft;
	uint8                                         Pad_C4[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_189[0x7];
	class FText                                   CallFunc_Format_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_231[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_269[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	class FText                                   K2Node_Select_Default;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_309[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;
	class FText                                   CallFunc_Format_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_4;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_33B[0x5];
	class FText                                   K2Node_Select_Default_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_3B9[0x7];
	class FText                                   CallFunc_Format_ReturnValue_3;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_3;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;
	class FText                                   CallFunc_Format_ReturnValue_4;
	bool                                          CallFunc_IsReloadMtxEnabled_ReturnValue;
	uint8                                         Pad_459[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	int32                                         CallFunc_SelectInt_ReturnValue;
	uint8                                         Pad_464[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;
	int32                                         K2Node_Select_Default_3;
	uint8                                         Pad_484[0x4];
	class FText                                   K2Node_Event_PageUnlockText;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_4;
};
static_assert(alignof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal) == 0x000008, "Wrong alignment on BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal");
static_assert(sizeof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal) == 0x0004B0, "Wrong size on BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, EntryPoint) == 0x000000, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_bool_Variable) == 0x000004, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_bool_Variable_1) == 0x000010, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_GetLevelPurchaseDisclaimerText_ReturnValue) == 0x000018, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_GetLevelPurchaseDisclaimerText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_byte_Variable) == 0x000030, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_byte_Variable_1) == 0x000031, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_int_Variable) == 0x000050, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_bool_Variable_2) == 0x000054, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_byte_Variable_2) == 0x000055, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000060, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Event_NewPrice) == 0x000078, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Event_NewPrice' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000080, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Add_IntInt_ReturnValue_1) == 0x000098, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0000A0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_byte_Variable_3) == 0x0000B8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B9, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Event_NewAmount) == 0x0000BC, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Event_NewAmount' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Event_LevelsLeft) == 0x0000C0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Event_LevelsLeft' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000C8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000D0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeStruct_FormatArgumentData) == 0x0000D8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeStruct_FormatArgumentData_1) == 0x000128, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeArray_Array) == 0x000178, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000188, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Format_ReturnValue) == 0x000190, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001A8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Multiply_IntInt_ReturnValue) == 0x0001AC, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToString_ReturnValue) == 0x0001B0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x0001C0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeStruct_FormatArgumentData_2) == 0x0001E0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000230, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeArray_Array_1) == 0x000238, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Format_ReturnValue_1) == 0x000248, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000260, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Event_IsDesignTime) == 0x000268, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_MakeLiteralText_ReturnValue) == 0x000270, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000288, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Select_Default) == 0x0002A0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeStruct_FormatArgumentData_3) == 0x0002B8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_bool_Variable_3) == 0x000308, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeArray_Array_2) == 0x000310, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Format_ReturnValue_2) == 0x000320, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Select_Default_1) == 0x000338, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, Temp_bool_Variable_4) == 0x000339, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Less_IntInt_ReturnValue) == 0x00033A, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Select_Default_2) == 0x000340, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeStruct_FormatArgumentData_4) == 0x000358, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeArray_Array_3) == 0x0003A8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0003B8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Format_ReturnValue_3) == 0x0003C0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToInt64_ReturnValue_3) == 0x0003D8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToInt64_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeStruct_FormatArgumentData_5) == 0x0003E0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_MakeArray_Array_4) == 0x000430, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Format_ReturnValue_4) == 0x000440, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_IsReloadMtxEnabled_ReturnValue) == 0x000458, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_IsReloadMtxEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Add_IntInt_ReturnValue_3) == 0x00045C, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_SelectInt_ReturnValue) == 0x000460, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000468, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Select_Default_3) == 0x000480, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Event_PageUnlockText) == 0x000488, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Event_PageUnlockText' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_SpawnSound2D_ReturnValue) == 0x0004A0, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, CallFunc_TextIsEmpty_ReturnValue) == 0x0004A8, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal, K2Node_Select_Default_4) == 0x0004A9, "Member 'BP_BattleStarModal_C_ExecuteUbergraph_BP_BattleStarModal::K2Node_Select_Default_4' has a wrong offset!");

struct BP_BattleStarModal_C_OnPurchaseAmountChanged final
{
public:
	int32                                         NewAmount;
	int32                                         LevelsLeft;
};
static_assert(alignof(BP_BattleStarModal_C_OnPurchaseAmountChanged) == 0x000004, "Wrong alignment on BP_BattleStarModal_C_OnPurchaseAmountChanged");
static_assert(sizeof(BP_BattleStarModal_C_OnPurchaseAmountChanged) == 0x000008, "Wrong size on BP_BattleStarModal_C_OnPurchaseAmountChanged");
static_assert(offsetof(BP_BattleStarModal_C_OnPurchaseAmountChanged, NewAmount) == 0x000000, "Member 'BP_BattleStarModal_C_OnPurchaseAmountChanged::NewAmount' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_OnPurchaseAmountChanged, LevelsLeft) == 0x000004, "Member 'BP_BattleStarModal_C_OnPurchaseAmountChanged::LevelsLeft' has a wrong offset!");

struct BP_BattleStarModal_C_OnTotalPriceChanged final
{
public:
	int32                                         NewPrice;
};
static_assert(alignof(BP_BattleStarModal_C_OnTotalPriceChanged) == 0x000004, "Wrong alignment on BP_BattleStarModal_C_OnTotalPriceChanged");
static_assert(sizeof(BP_BattleStarModal_C_OnTotalPriceChanged) == 0x000004, "Wrong size on BP_BattleStarModal_C_OnTotalPriceChanged");
static_assert(offsetof(BP_BattleStarModal_C_OnTotalPriceChanged, NewPrice) == 0x000000, "Member 'BP_BattleStarModal_C_OnTotalPriceChanged::NewPrice' has a wrong offset!");

struct BP_BattleStarModal_C_OnUpdatePageUnlockText final
{
public:
	class FText                                   PageUnlockText;
};
static_assert(alignof(BP_BattleStarModal_C_OnUpdatePageUnlockText) == 0x000008, "Wrong alignment on BP_BattleStarModal_C_OnUpdatePageUnlockText");
static_assert(sizeof(BP_BattleStarModal_C_OnUpdatePageUnlockText) == 0x000018, "Wrong size on BP_BattleStarModal_C_OnUpdatePageUnlockText");
static_assert(offsetof(BP_BattleStarModal_C_OnUpdatePageUnlockText, PageUnlockText) == 0x000000, "Member 'BP_BattleStarModal_C_OnUpdatePageUnlockText::PageUnlockText' has a wrong offset!");

struct BP_BattleStarModal_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BP_BattleStarModal_C_PreConstruct) == 0x000001, "Wrong alignment on BP_BattleStarModal_C_PreConstruct");
static_assert(sizeof(BP_BattleStarModal_C_PreConstruct) == 0x000001, "Wrong size on BP_BattleStarModal_C_PreConstruct");
static_assert(offsetof(BP_BattleStarModal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_BattleStarModal_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BP_BattleStarModal_C_Randomize_stars_hovering final
{
public:
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
};
static_assert(alignof(BP_BattleStarModal_C_Randomize_stars_hovering) == 0x000008, "Wrong alignment on BP_BattleStarModal_C_Randomize_stars_hovering");
static_assert(sizeof(BP_BattleStarModal_C_Randomize_stars_hovering) == 0x000040, "Wrong size on BP_BattleStarModal_C_Randomize_stars_hovering");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000008, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000020, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000028, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000030, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000034, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_BattleStarModal_C_Randomize_stars_hovering, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000038, "Member 'BP_BattleStarModal_C_Randomize_stars_hovering::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

}
