#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	int32                                         CallFunc_FTrunc_ReturnValue;
	int32                                         CallFunc_FTrunc_ReturnValue_1;
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;
	class FText                                   K2Node_CustomEvent_InText_1;
	class FName                                   K2Node_CustomEvent_ParameterName;
	float                                         K2Node_CustomEvent_Value;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_101[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class FText                                   K2Node_CustomEvent_InText;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel) == 0x000010, "Wrong alignment on WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel");
static_assert(sizeof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel) == 0x000150, "Wrong size on WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, EntryPoint) == 0x000000, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_BreakVector2D_X) == 0x000008, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_BreakVector2D_Y) == 0x000010, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_FTrunc_ReturnValue) == 0x000018, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_FTrunc_ReturnValue_1) == 0x00001C, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000020, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, K2Node_CustomEvent_InText_1) == 0x0000E0, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::K2Node_CustomEvent_InText_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, K2Node_CustomEvent_ParameterName) == 0x0000F8, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::K2Node_CustomEvent_ParameterName' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, K2Node_CustomEvent_Value) == 0x0000FC, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000100, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000108, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000110, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, K2Node_CustomEvent_InText) == 0x000118, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_MakeVector2D_ReturnValue) == 0x000130, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000140, "Member 'WBP_RewardsProgressWheel_C_ExecuteUbergraph_WBP_RewardsProgressWheel::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct WBP_RewardsProgressWheel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_RewardsProgressWheel_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_RewardsProgressWheel_C_PreConstruct");
static_assert(sizeof(WBP_RewardsProgressWheel_C_PreConstruct) == 0x000001, "Wrong size on WBP_RewardsProgressWheel_C_PreConstruct");
static_assert(offsetof(WBP_RewardsProgressWheel_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_RewardsProgressWheel_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_RewardsProgressWheel_C_UpdateDescriptionText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(WBP_RewardsProgressWheel_C_UpdateDescriptionText) == 0x000008, "Wrong alignment on WBP_RewardsProgressWheel_C_UpdateDescriptionText");
static_assert(sizeof(WBP_RewardsProgressWheel_C_UpdateDescriptionText) == 0x000018, "Wrong size on WBP_RewardsProgressWheel_C_UpdateDescriptionText");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateDescriptionText, InText) == 0x000000, "Member 'WBP_RewardsProgressWheel_C_UpdateDescriptionText::InText' has a wrong offset!");

struct WBP_RewardsProgressWheel_C_UpdateNumberText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(WBP_RewardsProgressWheel_C_UpdateNumberText) == 0x000008, "Wrong alignment on WBP_RewardsProgressWheel_C_UpdateNumberText");
static_assert(sizeof(WBP_RewardsProgressWheel_C_UpdateNumberText) == 0x000018, "Wrong size on WBP_RewardsProgressWheel_C_UpdateNumberText");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateNumberText, InText) == 0x000000, "Member 'WBP_RewardsProgressWheel_C_UpdateNumberText::InText' has a wrong offset!");

struct WBP_RewardsProgressWheel_C_UpdateProgress final
{
public:
	class FName                                   ParameterName;
	float                                         Value;
};
static_assert(alignof(WBP_RewardsProgressWheel_C_UpdateProgress) == 0x000004, "Wrong alignment on WBP_RewardsProgressWheel_C_UpdateProgress");
static_assert(sizeof(WBP_RewardsProgressWheel_C_UpdateProgress) == 0x000008, "Wrong size on WBP_RewardsProgressWheel_C_UpdateProgress");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgress, ParameterName) == 0x000000, "Member 'WBP_RewardsProgressWheel_C_UpdateProgress::ParameterName' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgress, Value) == 0x000004, "Member 'WBP_RewardsProgressWheel_C_UpdateProgress::Value' has a wrong offset!");

struct WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut final
{
public:
	bool                                          GrayOut;
	uint8                                         Pad_1[0x3];
	class FName                                   ParameterName;
	float                                         Value;
	bool                                          IsComplete;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_17[0x1];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_22[0x2];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FLinearColor                           K2Node_Select_Default_2;
	struct FLinearColor                           K2Node_Select_Default_3;
	struct FLinearColor                           K2Node_Select_Default_4;
	struct FSlateColor                            K2Node_Select_Default_5;
	uint8                                         Pad_7C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut) == 0x000008, "Wrong alignment on WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut");
static_assert(sizeof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut) == 0x000090, "Wrong size on WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, GrayOut) == 0x000000, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::GrayOut' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, ParameterName) == 0x000004, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::ParameterName' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Value) == 0x000008, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Value' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, IsComplete) == 0x00000C, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::IsComplete' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_byte_Variable) == 0x00000D, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x00000E, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_byte_Variable_1) == 0x00000F, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_bool_Variable) == 0x000010, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_byte_Variable_2) == 0x000011, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_bool_Variable_1) == 0x000012, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_bool_Variable_2) == 0x000013, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_bool_Variable_3) == 0x000014, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_bool_Variable_4) == 0x000015, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, Temp_bool_Variable_5) == 0x000016, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_Select_Default) == 0x000020, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_Select_Default_1) == 0x000021, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_MakeStruct_SlateColor) == 0x000024, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_Select_Default_2) == 0x000038, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_Select_Default_3) == 0x000048, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_Select_Default_4) == 0x000058, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, K2Node_Select_Default_5) == 0x000068, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000080, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000088, "Member 'WBP_RewardsProgressWheel_C_UpdateProgressGrayedOut::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
