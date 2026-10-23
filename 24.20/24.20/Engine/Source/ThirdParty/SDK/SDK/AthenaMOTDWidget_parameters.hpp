#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaMOTDWidget_C_BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7 final
{
public:
	EFortDialogResult                             Result;
	uint8                                         Pad_1[0x3];
	class FName                                   ResultName;
};
static_assert(alignof(AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7) == 0x000004, "Wrong alignment on AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7");
static_assert(sizeof(AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7) == 0x000008, "Wrong size on AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7");
static_assert(offsetof(AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7, Result) == 0x000000, "Member 'AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7::Result' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7, ResultName) == 0x000004, "Member 'AthenaMOTDWidget_C_DialogResult_B7839D98483DEF9593D448BA28AE74F7::ResultName' has a wrong offset!");

struct AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget final
{
public:
	int32                                         EntryPoint;
	float                                         Temp_real_Variable;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x7];
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_42[0x6];
	class FText                                   K2Node_Event_InText_3;
	class FText                                   K2Node_Event_InText_2;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_7A[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	struct FMargin                                K2Node_MakeStruct_Margin_2;
	class FText                                   K2Node_Event_InText_1;
	class FText                                   K2Node_Event_InText;
	bool                                          K2Node_Event_bIsLoading;
	uint8                                         Pad_E9[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin_3;
	class FName                                   Temp_name_Variable;
	class FName                                   Temp_name_Variable_1;
	uint8                                         Pad_104[0x4];
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_131[0xF];
	struct FVector4                               CallFunc_GetSafeZonePadding_SafePadding;
	struct FVector2D                              CallFunc_GetSafeZonePadding_SafePaddingScale;
	struct FVector4                               CallFunc_GetSafeZonePadding_SpillOverPadding;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_191[0x7];
	double                                        CallFunc_BreakVector4_X;
	double                                        CallFunc_BreakVector4_Y;
	double                                        CallFunc_BreakVector4_Z;
	double                                        CallFunc_BreakVector4_W;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_1B9[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue_2;
	int32                                         CallFunc_GetNumPlayersInLocalParty_ReturnValue;
	uint8                                         Pad_1D4[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_1E1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_1FE[0x2];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_209[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	uint8                                         Pad_21F[0x1];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_229[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	ESlateVisibility                              K2Node_Select_Default;
	EFortDialogResult                             Temp_byte_Variable_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_23D[0x3];
	struct FAthenaMOTDBase                        K2Node_Event_NewsEntry;
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;
	uint8                                         Pad_311[0x7];
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;
	double                                        CallFunc_BreakVector2D_X;
	double                                        CallFunc_BreakVector2D_Y;
	double                                        CallFunc_SafeDivide_ReturnValue;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_351[0x3];
	class FName                                   Temp_name_Variable_2;
	EFortDialogResult                             K2Node_CustomEvent_Result;
	uint8                                         Pad_359[0x3];
	class FName                                   K2Node_CustomEvent_ResultName;
	float                                         K2Node_Select_Default_1;
	struct FMargin                                K2Node_MakeStruct_Margin_4;
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;
	float                                         K2Node_Select_Option_1_ImplicitCast;
};
static_assert(alignof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget) == 0x000010, "Wrong alignment on AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget");
static_assert(sizeof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget) == 0x000390, "Wrong size on AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, EntryPoint) == 0x000000, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_real_Variable) == 0x000004, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_ComponentBoundEvent_Button_1) == 0x000008, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_bool_Variable) == 0x000030, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue) == 0x000038, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_byte_Variable) == 0x000040, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Event_InText_3) == 0x000048, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Event_InText_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Event_InText_2) == 0x000060, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Event_InText_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_byte_Variable_1) == 0x000078, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_bool_Variable_1) == 0x000079, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_ComponentBoundEvent_Button) == 0x000080, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_MakeStruct_Margin) == 0x000088, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_MakeStruct_Margin_1) == 0x000098, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_MakeStruct_Margin_2) == 0x0000A8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Event_InText_1) == 0x0000B8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Event_InText_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Event_InText) == 0x0000D0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Event_bIsLoading) == 0x0000E8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Event_bIsLoading' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_MakeStruct_Margin_3) == 0x0000EC, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_MakeStruct_Margin_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_name_Variable) == 0x0000FC, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_name_Variable_1) == 0x000100, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetContext_ReturnValue) == 0x000108, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000110, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_IsMobileGame_ReturnValue) == 0x000130, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetSafeZonePadding_SafePadding) == 0x000140, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetSafeZonePadding_SafePadding' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetSafeZonePadding_SafePaddingScale) == 0x000160, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetSafeZonePadding_SafePaddingScale' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetSafeZonePadding_SpillOverPadding) == 0x000170, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetSafeZonePadding_SpillOverPadding' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_IsUsingTouch_ReturnValue) == 0x000190, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BreakVector4_X) == 0x000198, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BreakVector4_X' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BreakVector4_Y) == 0x0001A0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BreakVector4_Y' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BreakVector4_Z) == 0x0001A8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BreakVector4_Z' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BreakVector4_W) == 0x0001B0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BreakVector4_W' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0001B8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetContext_ReturnValue_1) == 0x0001C0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetContext_ReturnValue_2) == 0x0001C8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetNumPlayersInLocalParty_ReturnValue) == 0x0001D0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetNumPlayersInLocalParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0001D8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x0001E0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001E8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x0001F0, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetVisibility_ReturnValue) == 0x0001F8, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001F9, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BooleanAND_ReturnValue) == 0x0001FA, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetVisibility_ReturnValue_1) == 0x0001FB, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001FC, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BooleanAND_ReturnValue_1) == 0x0001FD, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000200, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_bSuccess) == 0x000208, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1) == 0x000210, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_bSuccess_1) == 0x000218, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetVisibility_ReturnValue_2) == 0x000219, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetVisibility_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00021A, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BooleanAND_ReturnValue_2) == 0x00021B, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetVisibility_ReturnValue_3) == 0x00021C, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetVisibility_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00021D, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BooleanAND_ReturnValue_3) == 0x00021E, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_2) == 0x000220, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_bSuccess_2) == 0x000228, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_3) == 0x000230, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_DynamicCast_bSuccess_3) == 0x000238, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_IsMobileGame_ReturnValue_1) == 0x000239, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Select_Default) == 0x00023A, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_byte_Variable_2) == 0x00023B, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_SwitchEnum_CmpSuccess) == 0x00023C, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Event_NewsEntry) == 0x000240, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Event_NewsEntry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_IsMobileGame_ReturnValue_2) == 0x000310, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GetViewportSize_ReturnValue) == 0x000318, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BreakVector2D_X) == 0x000328, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_BreakVector2D_Y) == 0x000330, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_SafeDivide_ReturnValue) == 0x000338, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000340, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000348, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000350, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, Temp_name_Variable_2) == 0x000354, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_CustomEvent_Result) == 0x000358, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_CustomEvent_ResultName) == 0x00035C, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Select_Default_1) == 0x000360, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_MakeStruct_Margin_4) == 0x000364, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_MakeStruct_Margin_4' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000374, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget, K2Node_Select_Option_1_ImplicitCast) == 0x000380, "Member 'AthenaMOTDWidget_C_ExecuteUbergraph_AthenaMOTDWidget::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");

struct AthenaMOTDWidget_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;
	struct FFocusEvent                            InFocusEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	class UCommonButtonLegacy*                    CallFunc_GetSelectedButton_ReturnValue;
};
static_assert(alignof(AthenaMOTDWidget_C_OnFocusReceived) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_OnFocusReceived");
static_assert(sizeof(AthenaMOTDWidget_C_OnFocusReceived) == 0x0001C0, "Wrong size on AthenaMOTDWidget_C_OnFocusReceived");
static_assert(offsetof(AthenaMOTDWidget_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'AthenaMOTDWidget_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_OnFocusReceived, InFocusEvent) == 0x000040, "Member 'AthenaMOTDWidget_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_OnFocusReceived, ReturnValue) == 0x000048, "Member 'AthenaMOTDWidget_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000100, "Member 'AthenaMOTDWidget_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_OnFocusReceived, CallFunc_GetSelectedButton_ReturnValue) == 0x0001B8, "Member 'AthenaMOTDWidget_C_OnFocusReceived::CallFunc_GetSelectedButton_ReturnValue' has a wrong offset!");

struct AthenaMOTDWidget_C_OnIsActivityLoadingChanged final
{
public:
	bool                                          bIsLoading;
};
static_assert(alignof(AthenaMOTDWidget_C_OnIsActivityLoadingChanged) == 0x000001, "Wrong alignment on AthenaMOTDWidget_C_OnIsActivityLoadingChanged");
static_assert(sizeof(AthenaMOTDWidget_C_OnIsActivityLoadingChanged) == 0x000001, "Wrong size on AthenaMOTDWidget_C_OnIsActivityLoadingChanged");
static_assert(offsetof(AthenaMOTDWidget_C_OnIsActivityLoadingChanged, bIsLoading) == 0x000000, "Member 'AthenaMOTDWidget_C_OnIsActivityLoadingChanged::bIsLoading' has a wrong offset!");

struct AthenaMOTDWidget_C_OnSelectedNews final
{
public:
	struct FAthenaMOTDBase                        NewsEntry;
};
static_assert(alignof(AthenaMOTDWidget_C_OnSelectedNews) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_OnSelectedNews");
static_assert(sizeof(AthenaMOTDWidget_C_OnSelectedNews) == 0x0000D0, "Wrong size on AthenaMOTDWidget_C_OnSelectedNews");
static_assert(offsetof(AthenaMOTDWidget_C_OnSelectedNews, NewsEntry) == 0x000000, "Member 'AthenaMOTDWidget_C_OnSelectedNews::NewsEntry' has a wrong offset!");

struct AthenaMOTDWidget_C_SetNormalButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(AthenaMOTDWidget_C_SetNormalButtonText) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_SetNormalButtonText");
static_assert(sizeof(AthenaMOTDWidget_C_SetNormalButtonText) == 0x000018, "Wrong size on AthenaMOTDWidget_C_SetNormalButtonText");
static_assert(offsetof(AthenaMOTDWidget_C_SetNormalButtonText, InText) == 0x000000, "Member 'AthenaMOTDWidget_C_SetNormalButtonText::InText' has a wrong offset!");

struct AthenaMOTDWidget_C_SetSecondaryNormalButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(AthenaMOTDWidget_C_SetSecondaryNormalButtonText) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_SetSecondaryNormalButtonText");
static_assert(sizeof(AthenaMOTDWidget_C_SetSecondaryNormalButtonText) == 0x000018, "Wrong size on AthenaMOTDWidget_C_SetSecondaryNormalButtonText");
static_assert(offsetof(AthenaMOTDWidget_C_SetSecondaryNormalButtonText, InText) == 0x000000, "Member 'AthenaMOTDWidget_C_SetSecondaryNormalButtonText::InText' has a wrong offset!");

struct AthenaMOTDWidget_C_SetSecondarySpecialButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(AthenaMOTDWidget_C_SetSecondarySpecialButtonText) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_SetSecondarySpecialButtonText");
static_assert(sizeof(AthenaMOTDWidget_C_SetSecondarySpecialButtonText) == 0x000018, "Wrong size on AthenaMOTDWidget_C_SetSecondarySpecialButtonText");
static_assert(offsetof(AthenaMOTDWidget_C_SetSecondarySpecialButtonText, InText) == 0x000000, "Member 'AthenaMOTDWidget_C_SetSecondarySpecialButtonText::InText' has a wrong offset!");

struct AthenaMOTDWidget_C_SetSpecialButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(AthenaMOTDWidget_C_SetSpecialButtonText) == 0x000008, "Wrong alignment on AthenaMOTDWidget_C_SetSpecialButtonText");
static_assert(sizeof(AthenaMOTDWidget_C_SetSpecialButtonText) == 0x000018, "Wrong size on AthenaMOTDWidget_C_SetSpecialButtonText");
static_assert(offsetof(AthenaMOTDWidget_C_SetSpecialButtonText, InText) == 0x000000, "Member 'AthenaMOTDWidget_C_SetSpecialButtonText::InText' has a wrong offset!");

struct AthenaMOTDWidget_C_UpdateCustomColorStyle final
{
public:
	bool                                          bHasCustomColor;
	uint8                                         Pad_1[0x3];
	struct FColor                                 CustomDarkColor;
	struct FColor                                 CustomLightColor;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_D[0x3];
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	struct FLinearColor                           Temp_struct_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_41[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FLinearColor                           K2Node_Select_Default_1;
};
static_assert(alignof(AthenaMOTDWidget_C_UpdateCustomColorStyle) == 0x000004, "Wrong alignment on AthenaMOTDWidget_C_UpdateCustomColorStyle");
static_assert(sizeof(AthenaMOTDWidget_C_UpdateCustomColorStyle) == 0x000088, "Wrong size on AthenaMOTDWidget_C_UpdateCustomColorStyle");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, bHasCustomColor) == 0x000000, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::bHasCustomColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, CustomDarkColor) == 0x000004, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::CustomDarkColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, CustomLightColor) == 0x000008, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::CustomLightColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, Temp_bool_Variable) == 0x00000C, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000010, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x000020, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, Temp_struct_Variable) == 0x000030, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, Temp_bool_Variable_1) == 0x000040, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, K2Node_Select_Default) == 0x000044, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, Temp_struct_Variable_1) == 0x000054, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, K2Node_MakeStruct_SlateColor) == 0x000064, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDWidget_C_UpdateCustomColorStyle, K2Node_Select_Default_1) == 0x000078, "Member 'AthenaMOTDWidget_C_UpdateCustomColorStyle::K2Node_Select_Default_1' has a wrong offset!");

}
