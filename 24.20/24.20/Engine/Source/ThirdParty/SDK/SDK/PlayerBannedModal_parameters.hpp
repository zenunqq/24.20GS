#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PlayerBannedModal_C_BanEnumToText final
{
public:
	EPlayerBanReasons                             Index_0;
	uint8                                         Pad_1[0x7];
	class FString                                 ExploitProgramName;
	EPlayerCompetitiveBanReasons                  Competitive_Ban_Reason;
	bool                                          bIsCompetitiveBan_0;
	uint8                                         Pad_1A[0x6];
	class FText                                   ReturnValue;
	EPlayerCompetitiveBanReasons                  Temp_byte_Variable;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Len_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_41[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_61[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_B9[0x7];
	class FText                                   Temp_text_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	class FText                                   Temp_text_Variable_5;
	class FText                                   Temp_text_Variable_6;
	class FText                                   Temp_text_Variable_7;
	class FText                                   Temp_text_Variable_8;
	class FText                                   Temp_text_Variable_9;
	class FText                                   Temp_text_Variable_10;
	class FText                                   Temp_text_Variable_11;
	class FText                                   Temp_text_Variable_12;
	class FText                                   Temp_text_Variable_13;
	class FText                                   Temp_text_Variable_14;
	class FText                                   Temp_text_Variable_15;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_249[0x7];
	class FText                                   K2Node_Select_Default;
	EPlayerBanReasons                             Temp_byte_Variable_1;
	uint8                                         Pad_269[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   Temp_text_Variable_16;
	class FText                                   Temp_text_Variable_17;
	class FText                                   Temp_text_Variable_18;
	class FText                                   Temp_text_Variable_19;
	class FText                                   Temp_text_Variable_20;
	class FText                                   Temp_text_Variable_21;
	class FText                                   Temp_text_Variable_22;
	class FText                                   Temp_text_Variable_23;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class FText                                   K2Node_Select_Default_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_401[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_449[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   K2Node_Select_Default_2;
	class FText                                   CallFunc_Format_ReturnValue_1;
	class FText                                   K2Node_Select_Default_3;
	class FText                                   K2Node_Select_Default_4;
};
static_assert(alignof(PlayerBannedModal_C_BanEnumToText) == 0x000008, "Wrong alignment on PlayerBannedModal_C_BanEnumToText");
static_assert(sizeof(PlayerBannedModal_C_BanEnumToText) == 0x000510, "Wrong size on PlayerBannedModal_C_BanEnumToText");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Index_0) == 0x000000, "Member 'PlayerBannedModal_C_BanEnumToText::Index_0' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, ExploitProgramName) == 0x000008, "Member 'PlayerBannedModal_C_BanEnumToText::ExploitProgramName' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Competitive_Ban_Reason) == 0x000018, "Member 'PlayerBannedModal_C_BanEnumToText::Competitive_Ban_Reason' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, bIsCompetitiveBan_0) == 0x000019, "Member 'PlayerBannedModal_C_BanEnumToText::bIsCompetitiveBan_0' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, ReturnValue) == 0x000020, "Member 'PlayerBannedModal_C_BanEnumToText::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_byte_Variable) == 0x000038, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_Len_ReturnValue) == 0x00003C, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000B8, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable) == 0x0000C0, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_BooleanAND_ReturnValue) == 0x0000D8, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_1) == 0x0000E0, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_2) == 0x0000F8, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_3) == 0x000110, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_4) == 0x000128, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_5) == 0x000140, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_6) == 0x000158, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_7) == 0x000170, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_8) == 0x000188, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_9) == 0x0001A0, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_9' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_10) == 0x0001B8, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_10' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_11) == 0x0001D0, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_11' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_12) == 0x0001E8, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_12' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_13) == 0x000200, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_13' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_14) == 0x000218, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_14' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_15) == 0x000230, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_15' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_bool_Variable) == 0x000248, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_Select_Default) == 0x000250, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_byte_Variable_1) == 0x000268, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_MakeStruct_FormatArgumentData_1) == 0x000270, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_16) == 0x0002C0, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_16' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_17) == 0x0002D8, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_17' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_18) == 0x0002F0, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_18' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_19) == 0x000308, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_19' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_20) == 0x000320, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_20' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_21) == 0x000338, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_21' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_22) == 0x000350, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_22' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_text_Variable_23) == 0x000368, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_text_Variable_23' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_MakeLiteralText_ReturnValue) == 0x000380, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_Select_Default_1) == 0x000398, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_MakeStruct_FormatArgumentData_2) == 0x0003B0, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_bool_Variable_1) == 0x000400, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_MakeArray_Array) == 0x000408, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_Format_ReturnValue) == 0x000418, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000430, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, Temp_bool_Variable_2) == 0x000448, "Member 'PlayerBannedModal_C_BanEnumToText::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_MakeStruct_FormatArgumentData_3) == 0x000450, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_MakeArray_Array_1) == 0x0004A0, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_Select_Default_2) == 0x0004B0, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, CallFunc_Format_ReturnValue_1) == 0x0004C8, "Member 'PlayerBannedModal_C_BanEnumToText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_Select_Default_3) == 0x0004E0, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_BanEnumToText, K2Node_Select_Default_4) == 0x0004F8, "Member 'PlayerBannedModal_C_BanEnumToText::K2Node_Select_Default_4' has a wrong offset!");

struct PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'PlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct PlayerBannedModal_C_DisableButton final
{
public:
	bool                                          DisableButton_0;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(PlayerBannedModal_C_DisableButton) == 0x000001, "Wrong alignment on PlayerBannedModal_C_DisableButton");
static_assert(sizeof(PlayerBannedModal_C_DisableButton) == 0x000002, "Wrong size on PlayerBannedModal_C_DisableButton");
static_assert(offsetof(PlayerBannedModal_C_DisableButton, DisableButton_0) == 0x000000, "Member 'PlayerBannedModal_C_DisableButton::DisableButton_0' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_DisableButton, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'PlayerBannedModal_C_DisableButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   Temp_text_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_21[0x7];
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue_1;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue_2;
	struct FMcpBanInfo                            CallFunc_GetBanInfo_ReturnValue;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_B9[0x7];
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	EPlayerBanReasons                             Temp_byte_Variable;
	bool                                          Temp_bool_Variable_2;
	EPlayerBanReasons                             Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_F5[0x3];
	class FText                                   Temp_text_Variable_5;
	class FText                                   Temp_text_Variable_6;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_12C[0x4];
	class FText                                   Temp_text_Variable_7;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_151[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1B4[0x4];
	class FText                                   K2Node_Select_Default;
	class FText                                   K2Node_Select_Default_1;
	struct FTimespan                              CallFunc_GetBanDuration_ReturnValue;
	class FText                                   K2Node_Select_Default_2;
	float                                         CallFunc_GetTotalSeconds_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_20D[0x3];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	struct FTimespan                              CallFunc_GetBanDuration_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue;
	int32                                         CallFunc_Len_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	EPlayerBanReasons                             CallFunc_Array_Get_Item;
	uint8                                         Pad_29E[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	bool                                          CallFunc_Array_Contains_ReturnValue_1;
	uint8                                         Pad_2A6[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_2AE[0x2];
	class FText                                   K2Node_Select_Default_3;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	class FText                                   K2Node_Select_Default_4;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_BanEnumToText_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue_2;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_494[0x4];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_4B1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_3;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_4;
	class FText                                   K2Node_Select_Default_5;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;
	class FText                                   CallFunc_Format_ReturnValue_3;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal) == 0x000008, "Wrong alignment on PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal");
static_assert(sizeof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal) == 0x000580, "Wrong size on PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, EntryPoint) == 0x000000, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable) == 0x000008, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_bool_Variable) == 0x000020, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_1) == 0x000028, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_2) == 0x000040, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetContext_ReturnValue) == 0x000058, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetContext_ReturnValue_1) == 0x000060, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetContext_ReturnValue_2) == 0x000068, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetBanInfo_ReturnValue) == 0x000070, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetBanInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetContext_ReturnValue_3) == 0x0000B0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_bool_Variable_1) == 0x0000B8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_3) == 0x0000C0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_4) == 0x0000D8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_byte_Variable) == 0x0000F0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_bool_Variable_2) == 0x0000F1, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_byte_Variable_1) == 0x0000F2, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_bool_Variable_3) == 0x0000F3, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_bool_Variable_4) == 0x0000F4, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_5) == 0x0000F8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_6) == 0x000110, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_int_Array_Index_Variable) == 0x000128, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_text_Variable_7) == 0x000130, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_ComponentBoundEvent_Button) == 0x000148, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_bool_Variable_5) == 0x000150, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeStruct_FormatArgumentData) == 0x000158, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_CreateDelegate_OutputDelegate) == 0x0001A8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_Select_Default) == 0x0001B8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_Select_Default_1) == 0x0001D0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetBanDuration_ReturnValue) == 0x0001E8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetBanDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_Select_Default_2) == 0x0001F0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetTotalSeconds_ReturnValue) == 0x000208, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00020C, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Conv_StringToText_ReturnValue) == 0x000210, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetBanDuration_ReturnValue_1) == 0x000228, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetBanDuration_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeStruct_FormatArgumentData_1) == 0x000230, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_GetTimespanAsText_ReturnValue) == 0x000280, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_GetTimespanAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Len_ReturnValue) == 0x000298, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Greater_IntInt_ReturnValue) == 0x00029C, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Array_Get_Item) == 0x00029D, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Array_Length_ReturnValue) == 0x0002A0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Array_Contains_ReturnValue) == 0x0002A4, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Array_Contains_ReturnValue_1) == 0x0002A5, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Array_Length_ReturnValue_1) == 0x0002A8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002AC, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_BooleanAND_ReturnValue) == 0x0002AD, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_Select_Default_3) == 0x0002B0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeStruct_FormatArgumentData_2) == 0x0002C8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeArray_Array) == 0x000318, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Format_ReturnValue) == 0x000328, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_Select_Default_4) == 0x000340, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeStruct_FormatArgumentData_3) == 0x000358, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeArray_Array_1) == 0x0003A8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_BanEnumToText_ReturnValue) == 0x0003B8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_BanEnumToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Format_ReturnValue_1) == 0x0003D0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeStruct_FormatArgumentData_4) == 0x0003E8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeArray_Array_2) == 0x000438, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_MakeLiteralText_ReturnValue) == 0x000448, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Format_ReturnValue_2) == 0x000460, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000478, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, Temp_int_Loop_Counter_Variable) == 0x000490, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000498, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Less_IntInt_ReturnValue) == 0x0004B0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Add_IntInt_ReturnValue) == 0x0004B4, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_MakeLiteralText_ReturnValue_3) == 0x0004B8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_MakeLiteralText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_MakeLiteralText_ReturnValue_4) == 0x0004D0, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_MakeLiteralText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_Select_Default_5) == 0x0004E8, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeStruct_FormatArgumentData_5) == 0x000500, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, K2Node_MakeArray_Array_3) == 0x000550, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_Format_ReturnValue_3) == 0x000560, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000578, "Member 'PlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerBannedModal_C_HandleCloseAttempted final
{
public:
	int32                                         Temp_int_Variable;
	uint8                                         Pad_4[0x4];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_11[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_19[0x3];
	TDelegate<void(bool bSuccess)>                K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(PlayerBannedModal_C_HandleCloseAttempted) == 0x000008, "Wrong alignment on PlayerBannedModal_C_HandleCloseAttempted");
static_assert(sizeof(PlayerBannedModal_C_HandleCloseAttempted) == 0x000028, "Wrong size on PlayerBannedModal_C_HandleCloseAttempted");
static_assert(offsetof(PlayerBannedModal_C_HandleCloseAttempted, Temp_int_Variable) == 0x000000, "Member 'PlayerBannedModal_C_HandleCloseAttempted::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_HandleCloseAttempted, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'PlayerBannedModal_C_HandleCloseAttempted::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_HandleCloseAttempted, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000010, "Member 'PlayerBannedModal_C_HandleCloseAttempted::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_HandleCloseAttempted, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'PlayerBannedModal_C_HandleCloseAttempted::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_HandleCloseAttempted, CallFunc_BooleanOR_ReturnValue) == 0x000018, "Member 'PlayerBannedModal_C_HandleCloseAttempted::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_HandleCloseAttempted, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'PlayerBannedModal_C_HandleCloseAttempted::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct PlayerBannedModal_C_OnBanAck final
{
public:
	bool                                          Success;
};
static_assert(alignof(PlayerBannedModal_C_OnBanAck) == 0x000001, "Wrong alignment on PlayerBannedModal_C_OnBanAck");
static_assert(sizeof(PlayerBannedModal_C_OnBanAck) == 0x000001, "Wrong size on PlayerBannedModal_C_OnBanAck");
static_assert(offsetof(PlayerBannedModal_C_OnBanAck, Success) == 0x000000, "Member 'PlayerBannedModal_C_OnBanAck::Success' has a wrong offset!");

struct PlayerBannedModal_C_UpdateText final
{
public:
	class FText                                   Title_0;
	class FText                                   Content;
};
static_assert(alignof(PlayerBannedModal_C_UpdateText) == 0x000008, "Wrong alignment on PlayerBannedModal_C_UpdateText");
static_assert(sizeof(PlayerBannedModal_C_UpdateText) == 0x000030, "Wrong size on PlayerBannedModal_C_UpdateText");
static_assert(offsetof(PlayerBannedModal_C_UpdateText, Title_0) == 0x000000, "Member 'PlayerBannedModal_C_UpdateText::Title_0' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateText, Content) == 0x000018, "Member 'PlayerBannedModal_C_UpdateText::Content' has a wrong offset!");

struct PlayerBannedModal_C_UpdateTimeRemaining final
{
public:
	class FText                                   Time;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_71[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(PlayerBannedModal_C_UpdateTimeRemaining) == 0x000008, "Wrong alignment on PlayerBannedModal_C_UpdateTimeRemaining");
static_assert(sizeof(PlayerBannedModal_C_UpdateTimeRemaining) == 0x0000A8, "Wrong size on PlayerBannedModal_C_UpdateTimeRemaining");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, Time) == 0x000000, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::Time' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, Temp_bool_Variable) == 0x000018, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, CallFunc_TextIsEmpty_ReturnValue) == 0x000070, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, K2Node_MakeArray_Array) == 0x000078, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, CallFunc_Format_ReturnValue) == 0x000088, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, Temp_byte_Variable) == 0x0000A0, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, Temp_byte_Variable_1) == 0x0000A1, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerBannedModal_C_UpdateTimeRemaining, K2Node_Select_Default) == 0x0000A2, "Member 'PlayerBannedModal_C_UpdateTimeRemaining::K2Node_Select_Default' has a wrong offset!");

}
