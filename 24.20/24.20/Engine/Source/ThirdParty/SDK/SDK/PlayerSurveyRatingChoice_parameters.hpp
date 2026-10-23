#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice) == 0x000004, "Wrong alignment on PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice");
static_assert(sizeof(PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice) == 0x000004, "Wrong size on PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice");
static_assert(offsetof(PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice, EntryPoint) == 0x000000, "Member 'PlayerSurveyRatingChoice_C_ExecuteUbergraph_PlayerSurveyRatingChoice::EntryPoint' has a wrong offset!");

struct PlayerSurveyRatingChoice_C_GetCurrentButtonBrush final
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
static_assert(alignof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush) == 0x000010, "Wrong alignment on PlayerSurveyRatingChoice_C_GetCurrentButtonBrush");
static_assert(sizeof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush) == 0x000AA0, "Wrong size on PlayerSurveyRatingChoice_C_GetCurrentButtonBrush");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CurrentBrush) == 0x000000, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CurrentBrush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, Temp_bool_Variable) == 0x0000C0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_1) == 0x0000C1, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_2) == 0x0000C2, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_3) == 0x0000C3, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_4) == 0x0000C4, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, Temp_bool_Variable_5) == 0x0000C5, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_IsHovered_ReturnValue) == 0x0000C6, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_IsPressed_ReturnValue) == 0x0000C7, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_IsPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_IsPressed_ReturnValue_1) == 0x0000C8, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_IsPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_IsHovered_ReturnValue_1) == 0x0000C9, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_IsHovered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetSelected_ReturnValue) == 0x0000CA, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetIsEnabled_ReturnValue) == 0x0000CB, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetStyle_ReturnValue) == 0x0000D0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetDisabledBrush_Brush) == 0x0000E0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetDisabledBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetNormalBaseBrush_Brush) == 0x0001A0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetNormalBaseBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetNormalHoveredBrush_Brush) == 0x000260, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetNormalHoveredBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetNormalPressedBrush_Brush) == 0x000320, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetNormalPressedBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, K2Node_Select_Default) == 0x0003E0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetSelectedPressedBrush_Brush) == 0x0004A0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetSelectedPressedBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_1) == 0x000560, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetSelectedBaseBrush_Brush) == 0x000620, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetSelectedBaseBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, CallFunc_GetSelectedHoveredBrush_Brush) == 0x0006E0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::CallFunc_GetSelectedHoveredBrush_Brush' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_2) == 0x0007A0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_3) == 0x000860, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_4) == 0x000920, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_GetCurrentButtonBrush, K2Node_Select_Default_5) == 0x0009E0, "Member 'PlayerSurveyRatingChoice_C_GetCurrentButtonBrush::K2Node_Select_Default_5' has a wrong offset!");

struct PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity final
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
};
static_assert(alignof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity) == 0x000008, "Wrong alignment on PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity");
static_assert(sizeof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity) == 0x000030, "Wrong size on PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity, Temp_bool_Variable) == 0x000000, "Member 'PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity, Temp_real_Variable) == 0x000008, "Member 'PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity, Temp_real_Variable_1) == 0x000010, "Member 'PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity, CallFunc_IsHovered_ReturnValue) == 0x000018, "Member 'PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity, K2Node_Select_Default) == 0x000020, "Member 'PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000028, "Member 'PlayerSurveyRatingChoice_C_UpdateInputActionRenderOpacity::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

struct PlayerSurveyRatingChoice_C_UpdateTextStyle final
{
public:
	class UCommonTextStyle*                       CallFunc_GetCurrentTextStyle_ReturnValue;
	struct FLinearColor                           CallFunc_GetColor_OutColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(PlayerSurveyRatingChoice_C_UpdateTextStyle) == 0x000008, "Wrong alignment on PlayerSurveyRatingChoice_C_UpdateTextStyle");
static_assert(sizeof(PlayerSurveyRatingChoice_C_UpdateTextStyle) == 0x000030, "Wrong size on PlayerSurveyRatingChoice_C_UpdateTextStyle");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateTextStyle, CallFunc_GetCurrentTextStyle_ReturnValue) == 0x000000, "Member 'PlayerSurveyRatingChoice_C_UpdateTextStyle::CallFunc_GetCurrentTextStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateTextStyle, CallFunc_GetColor_OutColor) == 0x000008, "Member 'PlayerSurveyRatingChoice_C_UpdateTextStyle::CallFunc_GetColor_OutColor' has a wrong offset!");
static_assert(offsetof(PlayerSurveyRatingChoice_C_UpdateTextStyle, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'PlayerSurveyRatingChoice_C_UpdateTextStyle::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}
