#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice final
{
public:
	int32                                         EntryPoint;
	EFortPlayerSurveyResponseChoiceType           K2Node_Event_Type;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice) == 0x000004, "Wrong alignment on PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice");
static_assert(sizeof(PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice) == 0x000008, "Wrong size on PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice");
static_assert(offsetof(PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice, EntryPoint) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice, K2Node_Event_Type) == 0x000004, "Member 'PlayerSurveyResponseChoice_C_ExecuteUbergraph_PlayerSurveyResponseChoice::K2Node_Event_Type' has a wrong offset!");

struct PlayerSurveyResponseChoice_C_GetCurrentButtonBrush final
{
public:
	struct FSlateBrush                            CurrentBrush;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	bool                                          Temp_bool_Variable_5;
	bool                                          CallFunc_IsHovered_ReturnValue;
	bool                                          CallFunc_IsPressed_ReturnValue;
	bool                                          CallFunc_IsPressed_ReturnValue_1;
	bool                                          CallFunc_IsHovered_ReturnValue_1;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	uint8                                         Pad_CC[0x4];
	class UCommonButtonStyle*                     CallFunc_GetStyle_ReturnValue;
	uint8                                         Pad_D8[0x8];
	struct FSlateBrush                            CallFunc_GetDisabledBrush_Brush;
	struct FSlateBrush                            CallFunc_GetNormalBaseBrush_Brush;
	struct FSlateBrush                            CallFunc_GetNormalHoveredBrush_Brush;
	struct FSlateBrush                            CallFunc_GetNormalPressedBrush_Brush;
	struct FSlateBrush                            K2Node_Select_Default;
	struct FSlateBrush                            CallFunc_GetSelectedPressedBrush_Brush;
	struct FSlateBrush                            K2Node_Select_Default_1;
	struct FSlateBrush                            CallFunc_GetSelectedBaseBrush_Brush;
	struct FSlateBrush                            CallFunc_GetSelectedHoveredBrush_Brush;
	struct FSlateBrush                            K2Node_Select_Default_2;
	struct FSlateBrush                            K2Node_Select_Default_3;
	struct FSlateBrush                            K2Node_Select_Default_4;
	struct FSlateBrush                            K2Node_Select_Default_5;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush) == 0x000010, "Wrong alignment on PlayerSurveyResponseChoice_C_GetCurrentButtonBrush");
static_assert(sizeof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush) == 0x000AA0, "Wrong size on PlayerSurveyResponseChoice_C_GetCurrentButtonBrush");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CurrentBrush) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CurrentBrush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, Temp_bool_Variable) == 0x0000C0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_1) == 0x0000C1, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_2) == 0x0000C2, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_3) == 0x0000C3, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_4) == 0x0000C4, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_5) == 0x0000C5, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_IsHovered_ReturnValue) == 0x0000C6, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_IsPressed_ReturnValue) == 0x0000C7, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_IsPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_IsPressed_ReturnValue_1) == 0x0000C8, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_IsPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_IsHovered_ReturnValue_1) == 0x0000C9, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_IsHovered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetSelected_ReturnValue) == 0x0000CA, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetIsEnabled_ReturnValue) == 0x0000CB, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetStyle_ReturnValue) == 0x0000D0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetDisabledBrush_Brush) == 0x0000E0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetDisabledBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetNormalBaseBrush_Brush) == 0x0001A0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetNormalBaseBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetNormalHoveredBrush_Brush) == 0x000260, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetNormalHoveredBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetNormalPressedBrush_Brush) == 0x000320, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetNormalPressedBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, K2Node_Select_Default) == 0x0003E0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetSelectedPressedBrush_Brush) == 0x0004A0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetSelectedPressedBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_1) == 0x000560, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetSelectedBaseBrush_Brush) == 0x000620, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetSelectedBaseBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, CallFunc_GetSelectedHoveredBrush_Brush) == 0x0006E0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::CallFunc_GetSelectedHoveredBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_2) == 0x0007A0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_3) == 0x000860, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_4) == 0x000920, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_5) == 0x0009E0, "Member 'PlayerSurveyResponseChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_5' has a wrong offset!");

struct PlayerSurveyResponseChoice_C_SetChoiceType final
{
public:
	EFortPlayerSurveyResponseChoiceType           Type;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_SetChoiceType) == 0x000001, "Wrong alignment on PlayerSurveyResponseChoice_C_SetChoiceType");
static_assert(sizeof(PlayerSurveyResponseChoice_C_SetChoiceType) == 0x000001, "Wrong size on PlayerSurveyResponseChoice_C_SetChoiceType");
static_assert(offsetof(PlayerSurveyResponseChoice_C_SetChoiceType, Type) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_SetChoiceType::Type' has a wrong offset!");

struct PlayerSurveyResponseChoice_C_Update_Text_Scale final
{
public:
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_Update_Text_Scale) == 0x000008, "Wrong alignment on PlayerSurveyResponseChoice_C_Update_Text_Scale");
static_assert(sizeof(PlayerSurveyResponseChoice_C_Update_Text_Scale) == 0x000080, "Wrong size on PlayerSurveyResponseChoice_C_Update_Text_Scale");
static_assert(offsetof(PlayerSurveyResponseChoice_C_Update_Text_Scale, CallFunc_GetDesiredSize_ReturnValue) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_Update_Text_Scale::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_Update_Text_Scale, CallFunc_BreakVector2D_X) == 0x000010, "Member 'PlayerSurveyResponseChoice_C_Update_Text_Scale::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_Update_Text_Scale, CallFunc_BreakVector2D_Y) == 0x000018, "Member 'PlayerSurveyResponseChoice_C_Update_Text_Scale::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_Update_Text_Scale, K2Node_MakeStruct_SlateFontInfo) == 0x000020, "Member 'PlayerSurveyResponseChoice_C_Update_Text_Scale::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_Update_Text_Scale, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'PlayerSurveyResponseChoice_C_Update_Text_Scale::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");

struct PlayerSurveyResponseChoice_C_UpdateButtonColor final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	uint8                                         Pad_14[0x4];
	TSubclassOf<class UCommonTextStyle>           CallFunc_GetCurrentTextStyleClass_ReturnValue;
	struct FSlateBrush                            CallFunc_GetCurrentButtonBrush_CurrentBrush;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_E1[0x7];
	class UCommonTextStyle*                       CallFunc_GetCurrentTextStyle_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_F1[0x3];
	struct FLinearColor                           CallFunc_GetColor_OutColor;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_105[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_UpdateButtonColor) == 0x000010, "Wrong alignment on PlayerSurveyResponseChoice_C_UpdateButtonColor");
static_assert(sizeof(PlayerSurveyResponseChoice_C_UpdateButtonColor) == 0x000130, "Wrong size on PlayerSurveyResponseChoice_C_UpdateButtonColor");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, Temp_bool_Variable) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, Temp_struct_Variable) == 0x000004, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_GetCurrentTextStyleClass_ReturnValue) == 0x000018, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_GetCurrentTextStyleClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_GetCurrentButtonBrush_CurrentBrush) == 0x000020, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_GetCurrentButtonBrush_CurrentBrush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_GetSelected_ReturnValue) == 0x0000E0, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_GetCurrentTextStyle_ReturnValue) == 0x0000E8, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_GetCurrentTextStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F0, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_GetColor_OutColor) == 0x0000F4, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_GetColor_OutColor' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, CallFunc_BooleanAND_ReturnValue) == 0x000104, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, K2Node_Select_Default) == 0x000108, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateButtonColor, K2Node_MakeStruct_SlateColor) == 0x000118, "Member 'PlayerSurveyResponseChoice_C_UpdateButtonColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");

struct PlayerSurveyResponseChoice_C_UpdateChoiceImage final
{
public:
	EFortPlayerSurveyResponseChoiceType           Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
	uint8                                         Pad_5[0xB];
	struct FSlateBrush                            K2Node_Select_Default;
	struct FSlateBrush                            K2Node_Select_Default_1;
	struct FSlateBrush                            K2Node_Select_Default_2;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_UpdateChoiceImage) == 0x000010, "Wrong alignment on PlayerSurveyResponseChoice_C_UpdateChoiceImage");
static_assert(sizeof(PlayerSurveyResponseChoice_C_UpdateChoiceImage) == 0x000250, "Wrong size on PlayerSurveyResponseChoice_C_UpdateChoiceImage");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, Temp_byte_Variable) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, Temp_bool_Variable) == 0x000001, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, Temp_bool_Variable_1) == 0x000002, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, CallFunc_GetSelected_ReturnValue) == 0x000003, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, CallFunc_GetSelected_ReturnValue_1) == 0x000004, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, K2Node_Select_Default) == 0x000010, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, K2Node_Select_Default_1) == 0x0000D0, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateChoiceImage, K2Node_Select_Default_2) == 0x000190, "Member 'PlayerSurveyResponseChoice_C_UpdateChoiceImage::K2Node_Select_Default_2' has a wrong offset!");

struct PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	bool                                          CallFunc_IsHovered_ReturnValue;
	uint8                                         Pad_19[0x7];
	double                                        K2Node_Select_Default;
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;
};
static_assert(alignof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity) == 0x000008, "Wrong alignment on PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity");
static_assert(sizeof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity) == 0x000030, "Wrong size on PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, Temp_bool_Variable) == 0x000000, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, Temp_real_Variable) == 0x000008, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, Temp_real_Variable_1) == 0x000010, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, CallFunc_IsHovered_ReturnValue) == 0x000018, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, K2Node_Select_Default) == 0x000020, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000028, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x00002C, "Member 'PlayerSurveyResponseChoice_C_UpdateInputActionRenderOpacity::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");

}
