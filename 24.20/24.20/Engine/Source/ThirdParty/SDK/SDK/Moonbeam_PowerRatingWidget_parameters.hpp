#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HasTeamMembers_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	int32                                         K2Node_Event_BasePowerRating;
	int32                                         K2Node_Event_TeamPowerRating;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_1C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	float                                         K2Node_Event_BaseRatingProgress;
	float                                         K2Node_Event_TeamRatingProgress;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          K2Node_Event_IsDesignTime;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_AF[0x1];
	int32                                         CallFunc_GetBasePowerRating_ReturnValue;
	int32                                         CallFunc_GetTeamPowerRating_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_BA[0x6];
	class UWidget*                                K2Node_Select_Default_2;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetProgressBarSectionPercent_Percent_ImplicitCast;
	float                                         CallFunc_InterpolateToValue_MaximumInterpolationDuration_ImplicitCast;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget) == 0x000008, "Wrong alignment on Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget) == 0x0000E0, "Wrong size on Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, EntryPoint) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_HasTeamMembers_ReturnValue) == 0x000004, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_HasTeamMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_bool_Variable) == 0x000005, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_byte_Variable) == 0x000006, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_byte_Variable_1) == 0x000007, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Event_BasePowerRating) == 0x000008, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Event_BasePowerRating' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Event_TeamPowerRating) == 0x00000C, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Event_TeamPowerRating' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000010, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Event_BaseRatingProgress) == 0x000070, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Event_BaseRatingProgress' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Event_TeamRatingProgress) == 0x000074, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Event_TeamRatingProgress' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_MakeArray_Array) == 0x000078, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000088, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Format_ReturnValue) == 0x000090, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Select_Default) == 0x0000A8, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Event_IsDesignTime) == 0x0000A9, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_byte_Variable_2) == 0x0000AA, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000AB, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_byte_Variable_3) == 0x0000AC, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_bool_Variable_1) == 0x0000AD, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Select_Default_1) == 0x0000AE, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_GetBasePowerRating_ReturnValue) == 0x0000B0, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_GetBasePowerRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_GetTeamPowerRating_ReturnValue) == 0x0000B4, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_GetTeamPowerRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, Temp_bool_Variable_2) == 0x0000B8, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B9, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, K2Node_Select_Default_2) == 0x0000C0, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0000C8, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000D0, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_SetProgressBarSectionPercent_Percent_ImplicitCast) == 0x0000D8, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_SetProgressBarSectionPercent_Percent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget, CallFunc_InterpolateToValue_MaximumInterpolationDuration_ImplicitCast) == 0x0000DC, "Member 'Moonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget::CallFunc_InterpolateToValue_MaximumInterpolationDuration_ImplicitCast' has a wrong offset!");

struct Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated final
{
public:
	int32                                         BasePowerRating;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated) == 0x000004, "Wrong alignment on Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated) == 0x000004, "Wrong size on Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated, BasePowerRating) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated::BasePowerRating' has a wrong offset!");

struct Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated final
{
public:
	float                                         BaseRatingProgress;
	float                                         TeamRatingProgress;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated) == 0x000004, "Wrong alignment on Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated) == 0x000008, "Wrong size on Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated, BaseRatingProgress) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated::BaseRatingProgress' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated, TeamRatingProgress) == 0x000004, "Member 'Moonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated::TeamRatingProgress' has a wrong offset!");

struct Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated final
{
public:
	int32                                         TeamPowerRating;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated) == 0x000004, "Wrong alignment on Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated) == 0x000004, "Wrong size on Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated, TeamPowerRating) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated::TeamPowerRating' has a wrong offset!");

struct Moonbeam_PowerRatingWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_PreConstruct) == 0x000001, "Wrong alignment on Moonbeam_PowerRatingWidget_C_PreConstruct");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_PreConstruct) == 0x000001, "Wrong size on Moonbeam_PowerRatingWidget_C_PreConstruct");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct Moonbeam_PowerRatingWidget_C_SetBackgroundColor final
{
public:
	struct FLinearColor                           NewColor;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_SetBackgroundColor) == 0x000004, "Wrong alignment on Moonbeam_PowerRatingWidget_C_SetBackgroundColor");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_SetBackgroundColor) == 0x000010, "Wrong size on Moonbeam_PowerRatingWidget_C_SetBackgroundColor");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_SetBackgroundColor, NewColor) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_SetBackgroundColor::NewColor' has a wrong offset!");

struct Moonbeam_PowerRatingWidget_C_UpdateWidgetState final
{
public:
	bool                                          IsContributingToTeamPowerRating;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_5[0x3];
	int32                                         CallFunc_GetBasePowerRating_ReturnValue;
	bool                                          CallFunc_HasTeamMembers_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         CallFunc_GetBasePowerRating_ReturnValue_1;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_HasTeamMembers_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_1B[0x5];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;
};
static_assert(alignof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState) == 0x000010, "Wrong alignment on Moonbeam_PowerRatingWidget_C_UpdateWidgetState");
static_assert(sizeof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState) == 0x000320, "Wrong size on Moonbeam_PowerRatingWidget_C_UpdateWidgetState");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, IsContributingToTeamPowerRating) == 0x000000, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::IsContributingToTeamPowerRating' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, Temp_byte_Variable) == 0x000001, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, Temp_bool_Has_Been_Initd_Variable) == 0x000002, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, Temp_bool_IsClosed_Variable) == 0x000003, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, Temp_byte_Variable_1) == 0x000004, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_GetBasePowerRating_ReturnValue) == 0x000008, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_GetBasePowerRating_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_HasTeamMembers_ReturnValue) == 0x00000C, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_HasTeamMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_GetBasePowerRating_ReturnValue_1) == 0x000010, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_GetBasePowerRating_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_HasTeamMembers_ReturnValue_1) == 0x000016, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_HasTeamMembers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, Temp_bool_Variable) == 0x000017, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_BooleanAND_ReturnValue_1) == 0x000018, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, CallFunc_BooleanAND_ReturnValue_2) == 0x000019, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, K2Node_Select_Default) == 0x00001A, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, K2Node_MakeStruct_SlateBrush_1) == 0x0000E0, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, K2Node_MakeStruct_SlateBrush_2) == 0x0001A0, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(Moonbeam_PowerRatingWidget_C_UpdateWidgetState, K2Node_MakeStruct_SlateBrush_3) == 0x000260, "Member 'Moonbeam_PowerRatingWidget_C_UpdateWidgetState::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");

}
