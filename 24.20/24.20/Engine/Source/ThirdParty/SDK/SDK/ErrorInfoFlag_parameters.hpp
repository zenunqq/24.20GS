#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ErrorInfoFlag_C_UpdateText final
{
public:
	class FText                                   Text;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ErrorInfoFlag_C_UpdateText) == 0x000008, "Wrong alignment on ErrorInfoFlag_C_UpdateText");
static_assert(sizeof(ErrorInfoFlag_C_UpdateText) == 0x000020, "Wrong size on ErrorInfoFlag_C_UpdateText");
static_assert(offsetof(ErrorInfoFlag_C_UpdateText, Text) == 0x000000, "Member 'ErrorInfoFlag_C_UpdateText::Text' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_UpdateText, Temp_bool_Variable) == 0x000018, "Member 'ErrorInfoFlag_C_UpdateText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_UpdateText, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'ErrorInfoFlag_C_UpdateText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_UpdateText, Temp_byte_Variable) == 0x00001A, "Member 'ErrorInfoFlag_C_UpdateText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_UpdateText, Temp_byte_Variable_1) == 0x00001B, "Member 'ErrorInfoFlag_C_UpdateText::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_UpdateText, K2Node_Select_Default) == 0x00001C, "Member 'ErrorInfoFlag_C_UpdateText::K2Node_Select_Default' has a wrong offset!");

struct ErrorInfoFlag_C_UpdateIconMaterial final
{
public:
	class UMaterialInterface*                     Material;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(ErrorInfoFlag_C_UpdateIconMaterial) == 0x000008, "Wrong alignment on ErrorInfoFlag_C_UpdateIconMaterial");
static_assert(sizeof(ErrorInfoFlag_C_UpdateIconMaterial) == 0x000010, "Wrong size on ErrorInfoFlag_C_UpdateIconMaterial");
static_assert(offsetof(ErrorInfoFlag_C_UpdateIconMaterial, Material) == 0x000000, "Member 'ErrorInfoFlag_C_UpdateIconMaterial::Material' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_UpdateIconMaterial, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ErrorInfoFlag_C_UpdateIconMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct ErrorInfoFlag_C_UpdateAccentColor final
{
public:
	struct FLinearColor                           Color;
};
static_assert(alignof(ErrorInfoFlag_C_UpdateAccentColor) == 0x000004, "Wrong alignment on ErrorInfoFlag_C_UpdateAccentColor");
static_assert(sizeof(ErrorInfoFlag_C_UpdateAccentColor) == 0x000010, "Wrong size on ErrorInfoFlag_C_UpdateAccentColor");
static_assert(offsetof(ErrorInfoFlag_C_UpdateAccentColor, Color) == 0x000000, "Member 'ErrorInfoFlag_C_UpdateAccentColor::Color' has a wrong offset!");

struct ErrorInfoFlag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ErrorInfoFlag_C_PreConstruct) == 0x000001, "Wrong alignment on ErrorInfoFlag_C_PreConstruct");
static_assert(sizeof(ErrorInfoFlag_C_PreConstruct) == 0x000001, "Wrong size on ErrorInfoFlag_C_PreConstruct");
static_assert(offsetof(ErrorInfoFlag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ErrorInfoFlag_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
};
static_assert(alignof(ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag) == 0x000004, "Wrong alignment on ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag");
static_assert(sizeof(ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag) == 0x000008, "Wrong size on ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag");
static_assert(offsetof(ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag, EntryPoint) == 0x000000, "Member 'ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag::EntryPoint' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag, K2Node_Event_IsDesignTime) == 0x000004, "Member 'ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag, CallFunc_IsMobileGame_ReturnValue) == 0x000005, "Member 'ErrorInfoFlag_C_ExecuteUbergraph_ErrorInfoFlag::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

}
