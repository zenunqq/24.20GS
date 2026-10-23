#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ProgressiveStageWidget_C_AddStageItemWidget final
{
public:
	class UFortProgressiveItemWidget*             ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
};
static_assert(alignof(ProgressiveStageWidget_C_AddStageItemWidget) == 0x000008, "Wrong alignment on ProgressiveStageWidget_C_AddStageItemWidget");
static_assert(sizeof(ProgressiveStageWidget_C_AddStageItemWidget) == 0x000010, "Wrong size on ProgressiveStageWidget_C_AddStageItemWidget");
static_assert(offsetof(ProgressiveStageWidget_C_AddStageItemWidget, ReturnValue) == 0x000000, "Member 'ProgressiveStageWidget_C_AddStageItemWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_AddStageItemWidget, CallFunc_GetVisibility_ReturnValue) == 0x000008, "Member 'ProgressiveStageWidget_C_AddStageItemWidget::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_AddStageItemWidget, CallFunc_GetVisibility_ReturnValue_1) == 0x000009, "Member 'ProgressiveStageWidget_C_AddStageItemWidget::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_AddStageItemWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'ProgressiveStageWidget_C_AddStageItemWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_AddStageItemWidget, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000B, "Member 'ProgressiveStageWidget_C_AddStageItemWidget::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

struct ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget final
{
public:
	int32                                         EntryPoint;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	bool                                          K2Node_Event_bIsInPeekState;
	uint8                                         Pad_7[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class FText                                   K2Node_Event_InTooltipText;
	bool                                          K2Node_Event_bVisible;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_2B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget) == 0x000008, "Wrong alignment on ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget");
static_assert(sizeof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget) == 0x000038, "Wrong size on ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, EntryPoint) == 0x000000, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, Temp_byte_Variable) == 0x000004, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, Temp_byte_Variable_1) == 0x000005, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, K2Node_Event_bIsInPeekState) == 0x000006, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::K2Node_Event_bIsInPeekState' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, K2Node_Event_InTooltipText) == 0x000010, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::K2Node_Event_InTooltipText' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, K2Node_Event_bVisible) == 0x000028, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, Temp_bool_Variable) == 0x000029, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, K2Node_Select_Default) == 0x00002A, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'ProgressiveStageWidget_C_ExecuteUbergraph_ProgressiveStageWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct ProgressiveStageWidget_C_OnPeekStateChanged final
{
public:
	bool                                          bIsInPeekState;
};
static_assert(alignof(ProgressiveStageWidget_C_OnPeekStateChanged) == 0x000001, "Wrong alignment on ProgressiveStageWidget_C_OnPeekStateChanged");
static_assert(sizeof(ProgressiveStageWidget_C_OnPeekStateChanged) == 0x000001, "Wrong size on ProgressiveStageWidget_C_OnPeekStateChanged");
static_assert(offsetof(ProgressiveStageWidget_C_OnPeekStateChanged, bIsInPeekState) == 0x000000, "Member 'ProgressiveStageWidget_C_OnPeekStateChanged::bIsInPeekState' has a wrong offset!");

struct ProgressiveStageWidget_C_OnSetTooltipText final
{
public:
	class FText                                   InToolTipText;
};
static_assert(alignof(ProgressiveStageWidget_C_OnSetTooltipText) == 0x000008, "Wrong alignment on ProgressiveStageWidget_C_OnSetTooltipText");
static_assert(sizeof(ProgressiveStageWidget_C_OnSetTooltipText) == 0x000018, "Wrong size on ProgressiveStageWidget_C_OnSetTooltipText");
static_assert(offsetof(ProgressiveStageWidget_C_OnSetTooltipText, InToolTipText) == 0x000000, "Member 'ProgressiveStageWidget_C_OnSetTooltipText::InToolTipText' has a wrong offset!");

struct ProgressiveStageWidget_C_OnSetTooltipVisible final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(ProgressiveStageWidget_C_OnSetTooltipVisible) == 0x000001, "Wrong alignment on ProgressiveStageWidget_C_OnSetTooltipVisible");
static_assert(sizeof(ProgressiveStageWidget_C_OnSetTooltipVisible) == 0x000001, "Wrong size on ProgressiveStageWidget_C_OnSetTooltipVisible");
static_assert(offsetof(ProgressiveStageWidget_C_OnSetTooltipVisible, bVisible) == 0x000000, "Member 'ProgressiveStageWidget_C_OnSetTooltipVisible::bVisible' has a wrong offset!");

struct ProgressiveStageWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ProgressiveStageWidget_C_PreConstruct) == 0x000001, "Wrong alignment on ProgressiveStageWidget_C_PreConstruct");
static_assert(sizeof(ProgressiveStageWidget_C_PreConstruct) == 0x000001, "Wrong size on ProgressiveStageWidget_C_PreConstruct");
static_assert(offsetof(ProgressiveStageWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ProgressiveStageWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ProgressiveStageWidget_C_Update_Subscribed_Visuals final
{
public:
	bool                                          IsSubscribed;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
};
static_assert(alignof(ProgressiveStageWidget_C_Update_Subscribed_Visuals) == 0x000004, "Wrong alignment on ProgressiveStageWidget_C_Update_Subscribed_Visuals");
static_assert(sizeof(ProgressiveStageWidget_C_Update_Subscribed_Visuals) == 0x000014, "Wrong size on ProgressiveStageWidget_C_Update_Subscribed_Visuals");
static_assert(offsetof(ProgressiveStageWidget_C_Update_Subscribed_Visuals, IsSubscribed) == 0x000000, "Member 'ProgressiveStageWidget_C_Update_Subscribed_Visuals::IsSubscribed' has a wrong offset!");
static_assert(offsetof(ProgressiveStageWidget_C_Update_Subscribed_Visuals, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'ProgressiveStageWidget_C_Update_Subscribed_Visuals::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

}
