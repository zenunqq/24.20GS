#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong size on AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature::Widget' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature) == 0x000008, "Wrong size on AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature::Widget' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;
	bool                                          K2Node_CustomEvent_NewIsHovered;
	uint8                                         Pad_11[0x7];
	class UAthenaMOTDTile_C*                      K2Node_DynamicCast_AsAthena_MOTDTile;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x3];
	TDelegate<void(bool NewIsHovered)>            K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	TDelegate<void(bool NewIsHovered)>            K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_4C[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	int32                                         CallFunc_Max_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Variable;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	uint8                                         Pad_9C[0x4];
	class UCommonButtonLegacy*                    K2Node_CustomEvent_Button;
	TDelegate<void(class UCommonButtonLegacy* Button)> K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void(class UCommonButtonLegacy* Button)> K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_C1[0x7];
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget_1;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	class UAthenaMOTDTile_C*                      K2Node_DynamicCast_AsAthena_MOTDTile_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_E1[0x7];
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget) == 0x0000F8, "Wrong size on AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, EntryPoint) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_ComponentBoundEvent_Widget) == 0x000008, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CustomEvent_NewIsHovered) == 0x000010, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CustomEvent_NewIsHovered' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_DynamicCast_AsAthena_MOTDTile) == 0x000018, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_DynamicCast_AsAthena_MOTDTile' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_ComponentBoundEvent_Button) == 0x000050, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_Max_ReturnValue) == 0x000058, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x00005C, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000068, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000070, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, Temp_int_Variable) == 0x000078, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_MakeStruct_Margin) == 0x00007C, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_MakeStruct_Margin_1) == 0x00008C, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CustomEvent_Button) == 0x0000A0, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CustomEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000A8, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000B4, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_IsMobileGame_ReturnValue) == 0x0000C0, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_ComponentBoundEvent_Widget_1) == 0x0000C8, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_ComponentBoundEvent_Widget_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x0000D0, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_DynamicCast_AsAthena_MOTDTile_1) == 0x0000D8, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_DynamicCast_AsAthena_MOTDTile_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1) == 0x0000E8, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x0000F0, "Member 'AthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged final
{
public:
	bool                                          NewIsHovered;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged) == 0x000001, "Wrong alignment on AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged) == 0x000001, "Wrong size on AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged, NewIsHovered) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged::NewIsHovered' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_OnClicked final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_OnClicked) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_OnClicked");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_OnClicked) == 0x000008, "Wrong size on AthenaMOTDTeaserWidget_C_OnClicked");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_OnClicked, Button) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_OnClicked::Button' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaMOTDTeaserWidget_C_PreConstruct");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_PreConstruct) == 0x000001, "Wrong size on AthenaMOTDTeaserWidget_C_PreConstruct");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_SetDynamicColors final
{
public:
	struct FLinearColor                           DarkColor;
	struct FLinearColor                           LightColor;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_SetDynamicColors) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_SetDynamicColors");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_SetDynamicColors) == 0x000030, "Wrong size on AthenaMOTDTeaserWidget_C_SetDynamicColors");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_SetDynamicColors, DarkColor) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_SetDynamicColors::DarkColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_SetDynamicColors, LightColor) == 0x000010, "Member 'AthenaMOTDTeaserWidget_C_SetDynamicColors::LightColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_SetDynamicColors, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'AthenaMOTDTeaserWidget_C_SetDynamicColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_SetDynamicColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'AthenaMOTDTeaserWidget_C_SetDynamicColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

struct AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	struct FAthenaMOTDBase                        CallFunc_GetNewsByIndex_ReturnValue;
	int32                                         CallFunc_GetNewsCount_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_DD[0x3];
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;
	struct FLinearColor                           K2Node_Select_Default;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;
};
static_assert(alignof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual) == 0x000008, "Wrong alignment on AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual");
static_assert(sizeof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual) == 0x000130, "Wrong size on AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_GetNewsByIndex_ReturnValue) == 0x000008, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_GetNewsByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_GetNewsCount_ReturnValue) == 0x0000D8, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_GetNewsCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000DC, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x0000E0, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, K2Node_Select_Default) == 0x0000F0, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_Conv_StringToText_ReturnValue) == 0x000100, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000118, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000120, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000128, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x00012C, "Member 'AthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");

}
