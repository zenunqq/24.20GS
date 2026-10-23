#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner final
{
public:
	bool                                          bHasSale;
	uint8                                         Pad_1[0x7];
	class FText                                   SaleText;
	class FString                                 BannerOverrideTag;
	bool                                          bHasBattlePassStars_0;
	uint8                                         Pad_31[0x3];
	int32                                         iNumOfBattlePassStars;
};
static_assert(alignof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner) == 0x000008, "Wrong alignment on MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner");
static_assert(sizeof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner) == 0x000038, "Wrong size on MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner");
static_assert(offsetof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner, bHasSale) == 0x000000, "Member 'MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner::bHasSale' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner, SaleText) == 0x000008, "Member 'MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner::SaleText' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner, BannerOverrideTag) == 0x000020, "Member 'MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner::BannerOverrideTag' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner, bHasBattlePassStars_0) == 0x000030, "Member 'MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner::bHasBattlePassStars_0' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner, iNumOfBattlePassStars) == 0x000034, "Member 'MTXOffer_SpecialBanner_C_SetupSpecialOfferBanner::iNumOfBattlePassStars' has a wrong offset!");

struct MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	class FText                                   Temp_text_Variable;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_24[0x4];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_3F[0x1];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_99[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_C9[0x7];
	class FText                                   K2Node_Select_Default_2;
	bool                                          K2Node_CustomEvent_bHasSale;
	uint8                                         Pad_E9[0x7];
	class FText                                   K2Node_CustomEvent_SaleText;
	class FString                                 K2Node_CustomEvent_BannerOverrideTag;
	bool                                          K2Node_CustomEvent_bHasBattlePassStars;
	uint8                                         Pad_119[0x3];
	int32                                         K2Node_CustomEvent_iNumOfBattlePassStars;
	class FText                                   Temp_text_Variable_1;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	double                                        K2Node_Select_Default_3;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class FText                                   CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_172[0x6];
	class FText                                   K2Node_Select_Default_4;
	class FText                                   K2Node_Select_Default_5;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_1C5[0x3];
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
};
static_assert(alignof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner) == 0x000008, "Wrong alignment on MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner");
static_assert(sizeof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner) == 0x0001D0, "Wrong size on MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, EntryPoint) == 0x000000, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::EntryPoint' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_byte_Variable) == 0x000004, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_TextIsEmpty_ReturnValue) == 0x000005, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_byte_Variable_1) == 0x000006, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_bool_Variable) == 0x000007, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_text_Variable) == 0x000008, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_bool_Variable_1) == 0x000020, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_byte_Variable_2) == 0x000021, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_byte_Variable_3) == 0x000022, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_bool_Variable_2) == 0x000023, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_real_Variable) == 0x000028, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_real_Variable_1) == 0x000030, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_bool_Variable_3) == 0x000038, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000039, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x00003A, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue) == 0x00003B, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_TextIsEmpty_ReturnValue_1) == 0x00003C, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_Select_Default) == 0x00003D, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_Greater_IntInt_ReturnValue) == 0x00003E, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000040, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_bool_Variable_4) == 0x000098, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_MakeArray_Array) == 0x0000A0, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_Select_Default_1) == 0x0000C8, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_Select_Default_2) == 0x0000D0, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_CustomEvent_bHasSale) == 0x0000E8, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_CustomEvent_bHasSale' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_CustomEvent_SaleText) == 0x0000F0, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_CustomEvent_SaleText' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_CustomEvent_BannerOverrideTag) == 0x000108, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_CustomEvent_BannerOverrideTag' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_CustomEvent_bHasBattlePassStars) == 0x000118, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_CustomEvent_bHasBattlePassStars' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_CustomEvent_iNumOfBattlePassStars) == 0x00011C, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_CustomEvent_iNumOfBattlePassStars' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_text_Variable_1) == 0x000120, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000138, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_Select_Default_3) == 0x000140, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_MakeStruct_Margin) == 0x000148, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_Map_Find_Value) == 0x000158, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_Map_Find_ReturnValue) == 0x000170, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, Temp_bool_Variable_5) == 0x000171, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_Select_Default_4) == 0x000178, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_Select_Default_5) == 0x000190, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_TextToUpper_ReturnValue) == 0x0001A8, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue_1) == 0x0001C0, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue_2) == 0x0001C1, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_BooleanOR_ReturnValue) == 0x0001C2, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_Not_PreBool_ReturnValue) == 0x0001C3, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue_3) == 0x0001C4, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner, K2Node_MakeStruct_Top_ImplicitCast) == 0x0001C8, "Member 'MTXOffer_SpecialBanner_C_ExecuteUbergraph_MTXOffer_SpecialBanner::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

}
