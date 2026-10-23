#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader) == 0x000004, "Wrong alignment on WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader");
static_assert(sizeof(WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader) == 0x000008, "Wrong size on WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader, EntryPoint) == 0x000000, "Member 'WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_VariantCustomizationHeader_C_ExecuteUbergraph_WBP_VariantCustomizationHeader::K2Node_Event_IsDesignTime' has a wrong offset!");

struct WBP_VariantCustomizationHeader_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_VariantCustomizationHeader_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_VariantCustomizationHeader_C_PreConstruct");
static_assert(sizeof(WBP_VariantCustomizationHeader_C_PreConstruct) == 0x000001, "Wrong size on WBP_VariantCustomizationHeader_C_PreConstruct");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_VariantCustomizationHeader_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_VariantCustomizationHeader_C_Set_Header final
{
public:
	class FText                                   InText;
	class UMaterialInterface*                     Image;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(WBP_VariantCustomizationHeader_C_Set_Header) == 0x000008, "Wrong alignment on WBP_VariantCustomizationHeader_C_Set_Header");
static_assert(sizeof(WBP_VariantCustomizationHeader_C_Set_Header) == 0x000028, "Wrong size on WBP_VariantCustomizationHeader_C_Set_Header");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, InText) == 0x000000, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::InText' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, Image) == 0x000018, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::Image' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, Temp_byte_Variable) == 0x000020, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, Temp_byte_Variable_1) == 0x000022, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, Temp_bool_Variable) == 0x000023, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Header, K2Node_Select_Default) == 0x000024, "Member 'WBP_VariantCustomizationHeader_C_Set_Header::K2Node_Select_Default' has a wrong offset!");

struct WBP_VariantCustomizationHeader_C_Set_Subheader final
{
public:
	class FText                                   InText;
	class UTexture2D*                             Image;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_27[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_32[0x6];
	class UWidgetAnimation*                       K2Node_Select_Default_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(WBP_VariantCustomizationHeader_C_Set_Subheader) == 0x000008, "Wrong alignment on WBP_VariantCustomizationHeader_C_Set_Subheader");
static_assert(sizeof(WBP_VariantCustomizationHeader_C_Set_Subheader) == 0x000048, "Wrong size on WBP_VariantCustomizationHeader_C_Set_Subheader");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, InText) == 0x000000, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::InText' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, Image) == 0x000018, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::Image' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, Temp_byte_Variable) == 0x000020, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, CallFunc_TextIsEmpty_ReturnValue) == 0x000022, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, CallFunc_BooleanOR_ReturnValue) == 0x000024, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, Temp_byte_Variable_1) == 0x000025, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, Temp_bool_Variable) == 0x000026, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, K2Node_Select_Default) == 0x000030, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, Temp_bool_Variable_1) == 0x000031, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, K2Node_Select_Default_1) == 0x000038, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_VariantCustomizationHeader_C_Set_Subheader, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'WBP_VariantCustomizationHeader_C_Set_Subheader::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}
