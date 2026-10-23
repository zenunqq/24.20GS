#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct InfoFlag_C_UpdateTrimColor final
{
public:
	struct FLinearColor                           Color;
};
static_assert(alignof(InfoFlag_C_UpdateTrimColor) == 0x000004, "Wrong alignment on InfoFlag_C_UpdateTrimColor");
static_assert(sizeof(InfoFlag_C_UpdateTrimColor) == 0x000010, "Wrong size on InfoFlag_C_UpdateTrimColor");
static_assert(offsetof(InfoFlag_C_UpdateTrimColor, Color) == 0x000000, "Member 'InfoFlag_C_UpdateTrimColor::Color' has a wrong offset!");

struct InfoFlag_C_UpdateText final
{
public:
	class FText                                   Text;
};
static_assert(alignof(InfoFlag_C_UpdateText) == 0x000008, "Wrong alignment on InfoFlag_C_UpdateText");
static_assert(sizeof(InfoFlag_C_UpdateText) == 0x000018, "Wrong size on InfoFlag_C_UpdateText");
static_assert(offsetof(InfoFlag_C_UpdateText, Text) == 0x000000, "Member 'InfoFlag_C_UpdateText::Text' has a wrong offset!");

struct InfoFlag_C_UpdateGradientColor final
{
public:
	struct FLinearColor                           Color;
};
static_assert(alignof(InfoFlag_C_UpdateGradientColor) == 0x000004, "Wrong alignment on InfoFlag_C_UpdateGradientColor");
static_assert(sizeof(InfoFlag_C_UpdateGradientColor) == 0x000010, "Wrong size on InfoFlag_C_UpdateGradientColor");
static_assert(offsetof(InfoFlag_C_UpdateGradientColor, Color) == 0x000000, "Member 'InfoFlag_C_UpdateGradientColor::Color' has a wrong offset!");

struct InfoFlag_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(InfoFlag_C_PreConstruct) == 0x000001, "Wrong alignment on InfoFlag_C_PreConstruct");
static_assert(sizeof(InfoFlag_C_PreConstruct) == 0x000001, "Wrong size on InfoFlag_C_PreConstruct");
static_assert(offsetof(InfoFlag_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'InfoFlag_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct InfoFlag_C_ExecuteUbergraph_InfoFlag final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	uint8                                         Pad_18[0x8];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	uint8                                         Pad_111[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_121[0x3];
	float                                         K2Node_MakeStruct_Left_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;
	float                                         CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast;
};
static_assert(alignof(InfoFlag_C_ExecuteUbergraph_InfoFlag) == 0x000010, "Wrong alignment on InfoFlag_C_ExecuteUbergraph_InfoFlag");
static_assert(sizeof(InfoFlag_C_ExecuteUbergraph_InfoFlag) == 0x000140, "Wrong size on InfoFlag_C_ExecuteUbergraph_InfoFlag");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, EntryPoint) == 0x000000, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::EntryPoint' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, Temp_bool_Variable) == 0x000004, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, Temp_byte_Variable) == 0x000005, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, Temp_byte_Variable_1) == 0x000006, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_Event_IsDesignTime) == 0x000007, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_MakeVector2D_ReturnValue) == 0x000008, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000E0, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E8, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_Margin) == 0x0000F0, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_MakeVector2D_ReturnValue_1) == 0x000100, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000110, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000118, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_Select_Default) == 0x000120, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_Left_ImplicitCast) == 0x000124, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_Top_ImplicitCast) == 0x000128, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_Right_ImplicitCast) == 0x00012C, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x000130, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");
static_assert(offsetof(InfoFlag_C_ExecuteUbergraph_InfoFlag, CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast) == 0x000134, "Member 'InfoFlag_C_ExecuteUbergraph_InfoFlag::CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast' has a wrong offset!");

}
