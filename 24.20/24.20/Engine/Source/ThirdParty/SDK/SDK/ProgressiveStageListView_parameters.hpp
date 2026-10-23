#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ProgressiveStageListView_C_AddStageWidget final
{
public:
	class UFortProgressiveStageWidget*            ReturnValue;
	TDelegate<void(EUINavigation Navigation)>     K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_HasAnyChildren_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UProgressiveStageWidget_C*              CallFunc_Create_ReturnValue;
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;
};
static_assert(alignof(ProgressiveStageListView_C_AddStageWidget) == 0x000008, "Wrong alignment on ProgressiveStageListView_C_AddStageWidget");
static_assert(sizeof(ProgressiveStageListView_C_AddStageWidget) == 0x000038, "Wrong size on ProgressiveStageListView_C_AddStageWidget");
static_assert(offsetof(ProgressiveStageListView_C_AddStageWidget, ReturnValue) == 0x000000, "Member 'ProgressiveStageListView_C_AddStageWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_AddStageWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ProgressiveStageListView_C_AddStageWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_AddStageWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'ProgressiveStageListView_C_AddStageWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_AddStageWidget, CallFunc_HasAnyChildren_ReturnValue) == 0x000020, "Member 'ProgressiveStageListView_C_AddStageWidget::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_AddStageWidget, CallFunc_Create_ReturnValue) == 0x000028, "Member 'ProgressiveStageListView_C_AddStageWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_AddStageWidget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000030, "Member 'ProgressiveStageListView_C_AddStageWidget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

struct ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary final
{
public:
	EUINavigation                                 Navigation_0;
	uint8                                         Pad_1[0x7];
	class UWidget*                                ReturnValue;
	EUINavigation                                 Temp_byte_Variable;
	uint8                                         Pad_11[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	int32                                         Temp_int_Variable_4;
	int32                                         Temp_int_Variable_5;
	int32                                         Temp_int_Variable_6;
	class UWidget*                                CallFunc_GetDesiredFocusTarget_ReturnValue;
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary) == 0x000008, "Wrong alignment on ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary");
static_assert(sizeof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary) == 0x000040, "Wrong size on ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Navigation_0) == 0x000000, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Navigation_0' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, ReturnValue) == 0x000008, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_byte_Variable) == 0x000010, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable) == 0x000014, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable_1) == 0x000018, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable_2) == 0x00001C, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable_3) == 0x000020, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable_4) == 0x000024, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable_5) == 0x000028, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, Temp_int_Variable_6) == 0x00002C, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, CallFunc_GetDesiredFocusTarget_ReturnValue) == 0x000030, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::CallFunc_GetDesiredFocusTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary, K2Node_Select_Default) == 0x000038, "Member 'ProgressiveStageListView_C_On_Stage_Widget_Custom_Boundary::K2Node_Select_Default' has a wrong offset!");

struct ProgressiveStageListView_C_Update_Subscribed_Visuals final
{
public:
	bool                                          Is_Subscribed;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_24[0x4];
	class UWidget*                                CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_31[0x7];
	class UProgressiveStageWidget_C*              K2Node_DynamicCast_AsProgressive_Stage_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ProgressiveStageListView_C_Update_Subscribed_Visuals) == 0x000008, "Wrong alignment on ProgressiveStageListView_C_Update_Subscribed_Visuals");
static_assert(sizeof(ProgressiveStageListView_C_Update_Subscribed_Visuals) == 0x000048, "Wrong size on ProgressiveStageListView_C_Update_Subscribed_Visuals");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, Is_Subscribed) == 0x000000, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::Is_Subscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, CallFunc_Array_Get_Item) == 0x000028, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, K2Node_DynamicCast_AsProgressive_Stage_Widget) == 0x000038, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::K2Node_DynamicCast_AsProgressive_Stage_Widget' has a wrong offset!");
static_assert(offsetof(ProgressiveStageListView_C_Update_Subscribed_Visuals, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ProgressiveStageListView_C_Update_Subscribed_Visuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
