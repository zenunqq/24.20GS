#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated final
{
public:
	class UUserWidget*                            Widget;
	EUIExtensionSlot                              SlotType;
};
static_assert(alignof(NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated) == 0x000008, "Wrong alignment on NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated");
static_assert(sizeof(NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated) == 0x000010, "Wrong size on NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated");
static_assert(offsetof(NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated, Widget) == 0x000000, "Member 'NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated::Widget' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated, SlotType) == 0x000008, "Member 'NPCStatusWidget_C_BP_HandlePlaylistExtensionWidgetCreated::SlotType' has a wrong offset!");

struct NPCStatusWidget_C_ChangeWidgetVisibleDuration final
{
public:
	double                                        StatusWidgetVisibleDuration_0;
};
static_assert(alignof(NPCStatusWidget_C_ChangeWidgetVisibleDuration) == 0x000008, "Wrong alignment on NPCStatusWidget_C_ChangeWidgetVisibleDuration");
static_assert(sizeof(NPCStatusWidget_C_ChangeWidgetVisibleDuration) == 0x000008, "Wrong size on NPCStatusWidget_C_ChangeWidgetVisibleDuration");
static_assert(offsetof(NPCStatusWidget_C_ChangeWidgetVisibleDuration, StatusWidgetVisibleDuration_0) == 0x000000, "Member 'NPCStatusWidget_C_ChangeWidgetVisibleDuration::StatusWidgetVisibleDuration_0' has a wrong offset!");

struct NPCStatusWidget_C_EventUpdateStatus final
{
public:
	double                                        Health;
	double                                        Shield;
	bool                                          ShowShield;
};
static_assert(alignof(NPCStatusWidget_C_EventUpdateStatus) == 0x000008, "Wrong alignment on NPCStatusWidget_C_EventUpdateStatus");
static_assert(sizeof(NPCStatusWidget_C_EventUpdateStatus) == 0x000018, "Wrong size on NPCStatusWidget_C_EventUpdateStatus");
static_assert(offsetof(NPCStatusWidget_C_EventUpdateStatus, Health) == 0x000000, "Member 'NPCStatusWidget_C_EventUpdateStatus::Health' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_EventUpdateStatus, Shield) == 0x000008, "Member 'NPCStatusWidget_C_EventUpdateStatus::Shield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_EventUpdateStatus, ShowShield) == 0x000010, "Member 'NPCStatusWidget_C_EventUpdateStatus::ShowShield' has a wrong offset!");

struct NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        K2Node_CustomEvent_StatusWidgetVisibleDuration;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	uint8                                         Pad_11[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          K2Node_CustomEvent_KeepVisibilityOn;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	uint8                                         Pad_2B[0x5];
	class UUserWidget*                            K2Node_Event_Widget;
	EUIExtensionSlot                              K2Node_Event_SlotType;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_3A[0x6];
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;
	class UNPCStatusWidgetExtensionBase*          K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;
	double                                        K2Node_CustomEvent_health;
	double                                        K2Node_CustomEvent_shield;
	bool                                          K2Node_CustomEvent_ShowShield;
	bool                                          CallFunc_BooleanNAND_ReturnValue;
	uint8                                         Pad_72[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_8B[0x1];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
};
static_assert(alignof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget) == 0x000008, "Wrong alignment on NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget");
static_assert(sizeof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget) == 0x000098, "Wrong size on NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, EntryPoint) == 0x000000, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CustomEvent_StatusWidgetVisibleDuration) == 0x000008, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CustomEvent_StatusWidgetVisibleDuration' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000010, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_BooleanOR_ReturnValue) == 0x000028, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CustomEvent_KeepVisibilityOn) == 0x000029, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CustomEvent_KeepVisibilityOn' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x00002A, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_Event_Widget) == 0x000030, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_Event_SlotType) == 0x000038, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_Event_SlotType' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_SwitchEnum_CmpSuccess) == 0x000039, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000040, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base) == 0x000048, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_AddChildToOverlay_ReturnValue) == 0x000058, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CustomEvent_health) == 0x000060, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CustomEvent_health' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CustomEvent_shield) == 0x000068, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CustomEvent_shield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CustomEvent_ShowShield) == 0x000070, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CustomEvent_ShowShield' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_BooleanNAND_ReturnValue) == 0x000071, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_BooleanNAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000074, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000080, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000088, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_NotEqual_DoubleDouble_ReturnValue_1) == 0x000089, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_NotEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_BooleanOR_ReturnValue_1) == 0x00008A, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00008C, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000090, "Member 'NPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

struct NPCStatusWidget_C_SetKeepVisibilityOn final
{
public:
	bool                                          KeepVisibilityOn_0;
};
static_assert(alignof(NPCStatusWidget_C_SetKeepVisibilityOn) == 0x000001, "Wrong alignment on NPCStatusWidget_C_SetKeepVisibilityOn");
static_assert(sizeof(NPCStatusWidget_C_SetKeepVisibilityOn) == 0x000001, "Wrong size on NPCStatusWidget_C_SetKeepVisibilityOn");
static_assert(offsetof(NPCStatusWidget_C_SetKeepVisibilityOn, KeepVisibilityOn_0) == 0x000000, "Member 'NPCStatusWidget_C_SetKeepVisibilityOn::KeepVisibilityOn_0' has a wrong offset!");

}
