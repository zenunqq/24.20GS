#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton final
{
public:
	int32                                         EntryPoint;
	struct FMargin                                K2Node_MakeStruct_Margin;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	uint8                                         Pad_15[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_29[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FVector2D                              Temp_struct_Variable;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_CustomEvent_IsActive_1;
	uint8                                         Pad_51[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_CustomEvent_IsActive;
	uint8                                         Pad_69[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_79[0x7];
	struct FVector2D                              Temp_struct_Variable_1;
	class UWidgetAnimation*                       CallFunc_GetActiveAnimation_ActiveAnimation;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	class UWidgetAnimation*                       CallFunc_GetActiveAnimation_ActiveAnimation_1;
	class UWidgetAnimation*                       CallFunc_GetActiveAnimation_ActiveAnimation_2;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_C2[0x6];
	struct FVector2D                              K2Node_Select_Default;
};
static_assert(alignof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton) == 0x000008, "Wrong alignment on QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton");
static_assert(sizeof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton) == 0x0000D8, "Wrong size on QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, EntryPoint) == 0x000000, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, K2Node_MakeStruct_Margin) == 0x000004, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_GetVisibility_ReturnValue) == 0x000014, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, K2Node_MakeStruct_Margin_1) == 0x000018, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_GetEndTime_ReturnValue) == 0x00002C, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, Temp_struct_Variable) == 0x000038, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, K2Node_CustomEvent_IsActive_1) == 0x000050, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::K2Node_CustomEvent_IsActive_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000058, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000060, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, K2Node_CustomEvent_IsActive) == 0x000068, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::K2Node_CustomEvent_IsActive' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000070, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, K2Node_Event_IsDesignTime) == 0x000078, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, Temp_struct_Variable_1) == 0x000080, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_GetActiveAnimation_ActiveAnimation) == 0x000090, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_GetActiveAnimation_ActiveAnimation' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000098, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_GetActiveAnimation_ActiveAnimation_1) == 0x0000A0, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_GetActiveAnimation_ActiveAnimation_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_GetActiveAnimation_ActiveAnimation_2) == 0x0000A8, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_GetActiveAnimation_ActiveAnimation_2' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000B0, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x0000B8, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, CallFunc_IsUsingTouch_ReturnValue) == 0x0000C0, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, Temp_bool_Variable) == 0x0000C1, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton, K2Node_Select_Default) == 0x0000C8, "Member 'QuestScreen_ArrowButton_C_ExecuteUbergraph_QuestScreen_ArrowButton::K2Node_Select_Default' has a wrong offset!");

struct QuestScreen_ArrowButton_C_GetActiveAnimation final
{
public:
	class UWidgetAnimation*                       ActiveAnimation;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x7];
	class UWidgetAnimation*                       K2Node_Select_Default;
};
static_assert(alignof(QuestScreen_ArrowButton_C_GetActiveAnimation) == 0x000008, "Wrong alignment on QuestScreen_ArrowButton_C_GetActiveAnimation");
static_assert(sizeof(QuestScreen_ArrowButton_C_GetActiveAnimation) == 0x000018, "Wrong size on QuestScreen_ArrowButton_C_GetActiveAnimation");
static_assert(offsetof(QuestScreen_ArrowButton_C_GetActiveAnimation, ActiveAnimation) == 0x000000, "Member 'QuestScreen_ArrowButton_C_GetActiveAnimation::ActiveAnimation' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_GetActiveAnimation, Temp_bool_Variable) == 0x000008, "Member 'QuestScreen_ArrowButton_C_GetActiveAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_GetActiveAnimation, K2Node_Select_Default) == 0x000010, "Member 'QuestScreen_ArrowButton_C_GetActiveAnimation::K2Node_Select_Default' has a wrong offset!");

struct QuestScreen_ArrowButton_C_OnRowActiveChanged final
{
public:
	bool                                          IsActive;
};
static_assert(alignof(QuestScreen_ArrowButton_C_OnRowActiveChanged) == 0x000001, "Wrong alignment on QuestScreen_ArrowButton_C_OnRowActiveChanged");
static_assert(sizeof(QuestScreen_ArrowButton_C_OnRowActiveChanged) == 0x000001, "Wrong size on QuestScreen_ArrowButton_C_OnRowActiveChanged");
static_assert(offsetof(QuestScreen_ArrowButton_C_OnRowActiveChanged, IsActive) == 0x000000, "Member 'QuestScreen_ArrowButton_C_OnRowActiveChanged::IsActive' has a wrong offset!");

struct QuestScreen_ArrowButton_C_OnRowReset final
{
public:
	bool                                          IsActive;
};
static_assert(alignof(QuestScreen_ArrowButton_C_OnRowReset) == 0x000001, "Wrong alignment on QuestScreen_ArrowButton_C_OnRowReset");
static_assert(sizeof(QuestScreen_ArrowButton_C_OnRowReset) == 0x000001, "Wrong size on QuestScreen_ArrowButton_C_OnRowReset");
static_assert(offsetof(QuestScreen_ArrowButton_C_OnRowReset, IsActive) == 0x000000, "Member 'QuestScreen_ArrowButton_C_OnRowReset::IsActive' has a wrong offset!");

struct QuestScreen_ArrowButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(QuestScreen_ArrowButton_C_PreConstruct) == 0x000001, "Wrong alignment on QuestScreen_ArrowButton_C_PreConstruct");
static_assert(sizeof(QuestScreen_ArrowButton_C_PreConstruct) == 0x000001, "Wrong size on QuestScreen_ArrowButton_C_PreConstruct");
static_assert(offsetof(QuestScreen_ArrowButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestScreen_ArrowButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct QuestScreen_ArrowButton_C_SnapAnimationToEnd final
{
public:
	class UWidgetAnimation*                       InAnimation;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(QuestScreen_ArrowButton_C_SnapAnimationToEnd) == 0x000008, "Wrong alignment on QuestScreen_ArrowButton_C_SnapAnimationToEnd");
static_assert(sizeof(QuestScreen_ArrowButton_C_SnapAnimationToEnd) == 0x000018, "Wrong size on QuestScreen_ArrowButton_C_SnapAnimationToEnd");
static_assert(offsetof(QuestScreen_ArrowButton_C_SnapAnimationToEnd, InAnimation) == 0x000000, "Member 'QuestScreen_ArrowButton_C_SnapAnimationToEnd::InAnimation' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_SnapAnimationToEnd, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'QuestScreen_ArrowButton_C_SnapAnimationToEnd::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_SnapAnimationToEnd, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'QuestScreen_ArrowButton_C_SnapAnimationToEnd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct QuestScreen_ArrowButton_C_UpdateArrowColor final
{
public:
	struct FLinearColor                           Color;
	struct FLinearColor                           HoverColor;
};
static_assert(alignof(QuestScreen_ArrowButton_C_UpdateArrowColor) == 0x000004, "Wrong alignment on QuestScreen_ArrowButton_C_UpdateArrowColor");
static_assert(sizeof(QuestScreen_ArrowButton_C_UpdateArrowColor) == 0x000020, "Wrong size on QuestScreen_ArrowButton_C_UpdateArrowColor");
static_assert(offsetof(QuestScreen_ArrowButton_C_UpdateArrowColor, Color) == 0x000000, "Member 'QuestScreen_ArrowButton_C_UpdateArrowColor::Color' has a wrong offset!");
static_assert(offsetof(QuestScreen_ArrowButton_C_UpdateArrowColor, HoverColor) == 0x000010, "Member 'QuestScreen_ArrowButton_C_UpdateArrowColor::HoverColor' has a wrong offset!");

}
