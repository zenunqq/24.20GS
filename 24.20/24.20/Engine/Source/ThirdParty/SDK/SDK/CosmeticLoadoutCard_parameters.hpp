#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard final
{
public:
	int32                                         EntryPoint;
	EFortLoadoutCardType                          Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	EFortLoadoutCardType                          Temp_byte_Variable_1;
	uint8                                         Pad_29[0x7];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_64[0x4];
	class UTexture2D*                             Temp_object_Variable_4;
	class UTexture2D*                             Temp_object_Variable_5;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_79[0x7];
	class FText                                   Temp_text_Variable_2;
	class UObject*                                Temp_object_Variable_6;
	bool                                          Temp_bool_B_Execution_Happened_Variable;
	bool                                          Temp_bool_A_Execution_Happened_Variable;
	bool                                          Temp_bool_B_Execution_Happened_Variable_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          Temp_bool_A_Execution_Happened_Variable_1;
	bool                                          Temp_bool_A_Execution_Happened_Variable_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          Temp_bool_B_Execution_Happened_Variable_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_A9[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded_4;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
	class UAthenaItemWrapDefinition*              CallFunc_Array_Get_Item;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_E5[0x3];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_112[0x6];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_141[0x7];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_171[0x7];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue_3;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          Temp_bool_B_Execution_Happened_Variable_3;
	bool                                          Temp_bool_A_Execution_Happened_Variable_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_1BB[0x5];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_1D1[0x7];
	class UObject*                                Temp_object_Variable_7;
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_1F9[0x7];
	class UMaterialInterface*                     K2Node_Select_Default_2;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	uint8                                         Pad_209[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class FText                                   K2Node_Select_Default_3;
	class FText                                   K2Node_Select_Default_4;
	class UObject*                                Temp_object_Variable_8;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_2C9[0x7];
	class UObject*                                Temp_object_Variable_9;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UObject*                                K2Node_CustomEvent_Loaded_2;
	class UObject*                                Temp_object_Variable_10;
	class UObject*                                K2Node_CustomEvent_Loaded_3;
	bool                                          CallFunc_IsInSubGame_ReturnValue;
	uint8                                         Pad_301[0x7];
	class UTexture2D*                             K2Node_Select_Default_5;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetCharacterPreviewImage_ReturnValue;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_349[0x3];
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard");
static_assert(sizeof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard) == 0x000350, "Wrong size on CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, EntryPoint) == 0x000000, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::EntryPoint' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_byte_Variable) == 0x000004, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable) == 0x000008, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_1) == 0x000010, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_2) == 0x000018, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_3) == 0x000020, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_byte_Variable_1) == 0x000028, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_text_Variable) == 0x000030, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_text_Variable_1) == 0x000048, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_Variable) == 0x000060, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_byte_Variable_2) == 0x000061, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_byte_Variable_3) == 0x000062, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_Variable_1) == 0x000063, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_4) == 0x000068, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_5) == 0x000070, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_Variable_2) == 0x000078, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_text_Variable_2) == 0x000080, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_6) == 0x000098, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_B_Execution_Happened_Variable) == 0x0000A0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_B_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_A_Execution_Happened_Variable) == 0x0000A1, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_A_Execution_Happened_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_B_Execution_Happened_Variable_1) == 0x0000A2, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_B_Execution_Happened_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_BooleanAND_ReturnValue) == 0x0000A3, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_A_Execution_Happened_Variable_1) == 0x0000A4, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_A_Execution_Happened_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_A_Execution_Happened_Variable_2) == 0x0000A5, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_A_Execution_Happened_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_BooleanAND_ReturnValue_1) == 0x0000A6, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_B_Execution_Happened_Variable_2) == 0x0000A7, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_B_Execution_Happened_Variable_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_BooleanAND_ReturnValue_2) == 0x0000A8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CustomEvent_Loaded_4) == 0x0000B0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CustomEvent_Loaded_4' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CreateDelegate_OutputDelegate) == 0x0000B8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C4, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_IsValid_ReturnValue) == 0x0000E4, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x0000E8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000110, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_IsValid_ReturnValue_1) == 0x000111, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_GetSmallPreviewImage_ReturnValue_1) == 0x000118, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_GetSmallPreviewImage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_IsValid_ReturnValue_2) == 0x000140, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_GetSmallPreviewImage_ReturnValue_2) == 0x000148, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_GetSmallPreviewImage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_IsValid_ReturnValue_3) == 0x000170, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_GetSmallPreviewImage_ReturnValue_3) == 0x000178, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_GetSmallPreviewImage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001A0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001AC, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_B_Execution_Happened_Variable_3) == 0x0001B8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_B_Execution_Happened_Variable_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_A_Execution_Happened_Variable_3) == 0x0001B9, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_A_Execution_Happened_Variable_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_BooleanAND_ReturnValue_3) == 0x0001BA, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_real_Variable) == 0x0001C0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_real_Variable_1) == 0x0001C8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_bool_Variable_3) == 0x0001D0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_7) == 0x0001D8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CustomEvent_Loaded) == 0x0001E0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0001E8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Select_Default) == 0x0001F0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Select_Default_1) == 0x0001F8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Select_Default_2) == 0x000200, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000208, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_Conv_StringToText_ReturnValue) == 0x000210, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Select_Default_3) == 0x000228, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Select_Default_4) == 0x000240, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_8) == 0x000258, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000260, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CustomEvent_Loaded_1) == 0x000268, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_MakeStruct_SlateFontInfo) == 0x000270, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Event_IsDesignTime) == 0x0002C8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_9) == 0x0002D0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_MakeStruct_Margin) == 0x0002D8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CustomEvent_Loaded_2) == 0x0002E8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, Temp_object_Variable_10) == 0x0002F0, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::Temp_object_Variable_10' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_CustomEvent_Loaded_3) == 0x0002F8, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_CustomEvent_Loaded_3' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_IsInSubGame_ReturnValue) == 0x000300, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_IsInSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, K2Node_Select_Default_5) == 0x000308, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_PlayAnimationForward_ReturnValue) == 0x000310, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000318, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_GetCharacterPreviewImage_ReturnValue) == 0x000320, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_GetCharacterPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000348, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x00034C, "Member 'CosmeticLoadoutCard_C_ExecuteUbergraph_CosmeticLoadoutCard::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct CosmeticLoadoutCard_C_Get_First_Item final
{
public:
	TArray<class UFortItemDefinition*>            inArray;
	class UFortItemDefinition*                    Result;
};
static_assert(alignof(CosmeticLoadoutCard_C_Get_First_Item) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_Get_First_Item");
static_assert(sizeof(CosmeticLoadoutCard_C_Get_First_Item) == 0x000018, "Wrong size on CosmeticLoadoutCard_C_Get_First_Item");
static_assert(offsetof(CosmeticLoadoutCard_C_Get_First_Item, inArray) == 0x000000, "Member 'CosmeticLoadoutCard_C_Get_First_Item::inArray' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_Get_First_Item, Result) == 0x000010, "Member 'CosmeticLoadoutCard_C_Get_First_Item::Result' has a wrong offset!");

struct CosmeticLoadoutCard_C_IsBlank final
{
public:
	bool                                          Blank;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(CosmeticLoadoutCard_C_IsBlank) == 0x000001, "Wrong alignment on CosmeticLoadoutCard_C_IsBlank");
static_assert(sizeof(CosmeticLoadoutCard_C_IsBlank) == 0x000002, "Wrong size on CosmeticLoadoutCard_C_IsBlank");
static_assert(offsetof(CosmeticLoadoutCard_C_IsBlank, Blank) == 0x000000, "Member 'CosmeticLoadoutCard_C_IsBlank::Blank' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_IsBlank, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'CosmeticLoadoutCard_C_IsBlank::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE");
static_assert(sizeof(CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE");
static_assert(offsetof(CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE, Loaded) == 0x000000, "Member 'CosmeticLoadoutCard_C_OnLoaded_1E2615E24358EA93BCC3BBB4925113EE::Loaded' has a wrong offset!");

struct CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060");
static_assert(sizeof(CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060");
static_assert(offsetof(CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060, Loaded) == 0x000000, "Member 'CosmeticLoadoutCard_C_OnLoaded_720B049647023D90A92C789B29FB1060::Loaded' has a wrong offset!");

struct CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D");
static_assert(sizeof(CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D");
static_assert(offsetof(CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D, Loaded) == 0x000000, "Member 'CosmeticLoadoutCard_C_OnLoaded_9C1753664F831A575C95389EB3050D6D::Loaded' has a wrong offset!");

struct CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55");
static_assert(sizeof(CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55");
static_assert(offsetof(CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55, Loaded) == 0x000000, "Member 'CosmeticLoadoutCard_C_OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55::Loaded' has a wrong offset!");

struct CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69");
static_assert(sizeof(CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69");
static_assert(offsetof(CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69, Loaded) == 0x000000, "Member 'CosmeticLoadoutCard_C_OnLoaded_C53A1CD444E6E41E6696819693452D69::Loaded' has a wrong offset!");

struct CosmeticLoadoutCard_C_PlayHoverForward final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(CosmeticLoadoutCard_C_PlayHoverForward) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_PlayHoverForward");
static_assert(sizeof(CosmeticLoadoutCard_C_PlayHoverForward) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_PlayHoverForward");
static_assert(offsetof(CosmeticLoadoutCard_C_PlayHoverForward, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'CosmeticLoadoutCard_C_PlayHoverForward::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct CosmeticLoadoutCard_C_PlayHoverReverse final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(CosmeticLoadoutCard_C_PlayHoverReverse) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_PlayHoverReverse");
static_assert(sizeof(CosmeticLoadoutCard_C_PlayHoverReverse) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_PlayHoverReverse");
static_assert(offsetof(CosmeticLoadoutCard_C_PlayHoverReverse, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'CosmeticLoadoutCard_C_PlayHoverReverse::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct CosmeticLoadoutCard_C_PlaySelectedForward final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(CosmeticLoadoutCard_C_PlaySelectedForward) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_PlaySelectedForward");
static_assert(sizeof(CosmeticLoadoutCard_C_PlaySelectedForward) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_PlaySelectedForward");
static_assert(offsetof(CosmeticLoadoutCard_C_PlaySelectedForward, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'CosmeticLoadoutCard_C_PlaySelectedForward::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct CosmeticLoadoutCard_C_PlaySelectedReverse final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(CosmeticLoadoutCard_C_PlaySelectedReverse) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_PlaySelectedReverse");
static_assert(sizeof(CosmeticLoadoutCard_C_PlaySelectedReverse) == 0x000008, "Wrong size on CosmeticLoadoutCard_C_PlaySelectedReverse");
static_assert(offsetof(CosmeticLoadoutCard_C_PlaySelectedReverse, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'CosmeticLoadoutCard_C_PlaySelectedReverse::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

struct CosmeticLoadoutCard_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(CosmeticLoadoutCard_C_PreConstruct) == 0x000001, "Wrong alignment on CosmeticLoadoutCard_C_PreConstruct");
static_assert(sizeof(CosmeticLoadoutCard_C_PreConstruct) == 0x000001, "Wrong size on CosmeticLoadoutCard_C_PreConstruct");
static_assert(offsetof(CosmeticLoadoutCard_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CosmeticLoadoutCard_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals final
{
public:
	class FName                                   PreviewImageTextureParameterName;
	class FName                                   DefaultSwitchScalarName;
	class UObject*                                Object;
	class UTexture2D*                             DefaultTexture;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
};
static_assert(alignof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals) == 0x000008, "Wrong alignment on CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals");
static_assert(sizeof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals) == 0x000038, "Wrong size on CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, PreviewImageTextureParameterName) == 0x000000, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::PreviewImageTextureParameterName' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, DefaultSwitchScalarName) == 0x000004, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::DefaultSwitchScalarName' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, Object) == 0x000008, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::Object' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, DefaultTexture) == 0x000010, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::DefaultTexture' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000030, "Member 'CosmeticLoadoutCard_C_UpdateLoadoutSlotVisuals::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

}
