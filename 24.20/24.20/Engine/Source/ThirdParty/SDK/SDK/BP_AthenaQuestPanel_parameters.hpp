#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UWidget*                                K2Node_Event_WidgetToScroll;
	bool                                          CallFunc_IsQuestsTabActive_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_22[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_31[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_43[0x5];
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	bool                                          CallFunc_IsInZone_ReturnValue_1;
	uint8                                         Pad_51[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	struct FMargin                                K2Node_Select_Default;
};
static_assert(alignof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel) == 0x000008, "Wrong alignment on BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel");
static_assert(sizeof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel) == 0x000070, "Wrong size on BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, EntryPoint) == 0x000000, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, Temp_bool_Variable) == 0x000004, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000010, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, K2Node_Event_WidgetToScroll) == 0x000018, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::K2Node_Event_WidgetToScroll' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_IsQuestsTabActive_ReturnValue) == 0x000020, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_IsQuestsTabActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000030, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000038, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_IsInZone_ReturnValue) == 0x000040, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_Not_PreBool_ReturnValue_1) == 0x000041, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000048, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_IsInZone_ReturnValue_1) == 0x000050, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_IsInZone_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000058, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel, K2Node_Select_Default) == 0x000060, "Member 'BP_AthenaQuestPanel_C_ExecuteUbergraph_BP_AthenaQuestPanel::K2Node_Select_Default' has a wrong offset!");

struct BP_AthenaQuestPanel_C_OnUpdateScrollPosition final
{
public:
	class UWidget*                                WidgetToScroll;
};
static_assert(alignof(BP_AthenaQuestPanel_C_OnUpdateScrollPosition) == 0x000008, "Wrong alignment on BP_AthenaQuestPanel_C_OnUpdateScrollPosition");
static_assert(sizeof(BP_AthenaQuestPanel_C_OnUpdateScrollPosition) == 0x000008, "Wrong size on BP_AthenaQuestPanel_C_OnUpdateScrollPosition");
static_assert(offsetof(BP_AthenaQuestPanel_C_OnUpdateScrollPosition, WidgetToScroll) == 0x000000, "Member 'BP_AthenaQuestPanel_C_OnUpdateScrollPosition::WidgetToScroll' has a wrong offset!");

struct BP_AthenaQuestPanel_C_SetMobileVisuals final
{
public:
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FVector2D                              Temp_struct_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	uint8                                         Pad_57[0x1];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	struct FVector2D                              K2Node_Select_Default_1;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FMargin                                K2Node_MakeStruct_Margin_2;
	uint8                                         Pad_94[0xC];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_2;
};
static_assert(alignof(BP_AthenaQuestPanel_C_SetMobileVisuals) == 0x000010, "Wrong alignment on BP_AthenaQuestPanel_C_SetMobileVisuals");
static_assert(sizeof(BP_AthenaQuestPanel_C_SetMobileVisuals) == 0x000170, "Wrong size on BP_AthenaQuestPanel_C_SetMobileVisuals");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_MakeStruct_Margin) == 0x000000, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000010, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_GetPlayerController_ReturnValue) == 0x000018, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_MakeStruct_Margin_1) == 0x000020, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000030, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_IsInZone_ReturnValue) == 0x000038, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, Temp_struct_Variable) == 0x000040, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, Temp_bool_Variable) == 0x000050, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, Temp_byte_Variable) == 0x000051, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, Temp_byte_Variable_1) == 0x000052, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, Temp_bool_Variable_1) == 0x000053, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_IsMobileGame_ReturnValue) == 0x000054, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_Select_Default) == 0x000055, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_IsMobileGame_ReturnValue_1) == 0x000056, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000058, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_Select_Default_1) == 0x000060, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_MakeStruct_SlateColor) == 0x000070, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_MakeStruct_Margin_2) == 0x000084, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, K2Node_MakeStruct_SlateBrush) == 0x0000A0, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetMobileVisuals, CallFunc_SlotAsOverlaySlot_ReturnValue_2) == 0x000160, "Member 'BP_AthenaQuestPanel_C_SetMobileVisuals::CallFunc_SlotAsOverlaySlot_ReturnValue_2' has a wrong offset!");

struct BP_AthenaQuestPanel_C_SetXPBarVisibility final
{
public:
	bool                                          ShouldHide;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(BP_AthenaQuestPanel_C_SetXPBarVisibility) == 0x000001, "Wrong alignment on BP_AthenaQuestPanel_C_SetXPBarVisibility");
static_assert(sizeof(BP_AthenaQuestPanel_C_SetXPBarVisibility) == 0x000005, "Wrong size on BP_AthenaQuestPanel_C_SetXPBarVisibility");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetXPBarVisibility, ShouldHide) == 0x000000, "Member 'BP_AthenaQuestPanel_C_SetXPBarVisibility::ShouldHide' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetXPBarVisibility, Temp_bool_Variable) == 0x000001, "Member 'BP_AthenaQuestPanel_C_SetXPBarVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetXPBarVisibility, Temp_byte_Variable) == 0x000002, "Member 'BP_AthenaQuestPanel_C_SetXPBarVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetXPBarVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'BP_AthenaQuestPanel_C_SetXPBarVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaQuestPanel_C_SetXPBarVisibility, K2Node_Select_Default) == 0x000004, "Member 'BP_AthenaQuestPanel_C_SetXPBarVisibility::K2Node_Select_Default' has a wrong offset!");

struct BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState final
{
public:
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
};
static_assert(alignof(BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState) == 0x000001, "Wrong alignment on BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState");
static_assert(sizeof(BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState) == 0x000001, "Wrong size on BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState");
static_assert(offsetof(BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000000, "Member 'BP_AthenaQuestPanel_C_UpdateXPBarCollapsedState::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");

}
