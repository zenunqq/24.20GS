#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct MTXButton_C_GetHoverAnimation final
{
public:
	class UWidgetAnimation*                       ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class UWidgetAnimation*                       K2Node_Select_Default;
};
static_assert(alignof(MTXButton_C_GetHoverAnimation) == 0x000008, "Wrong alignment on MTXButton_C_GetHoverAnimation");
static_assert(sizeof(MTXButton_C_GetHoverAnimation) == 0x000028, "Wrong size on MTXButton_C_GetHoverAnimation");
static_assert(offsetof(MTXButton_C_GetHoverAnimation, ReturnValue) == 0x000000, "Member 'MTXButton_C_GetHoverAnimation::ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_GetHoverAnimation, Temp_bool_Variable) == 0x000008, "Member 'MTXButton_C_GetHoverAnimation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_GetHoverAnimation, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000010, "Member 'MTXButton_C_GetHoverAnimation::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_GetHoverAnimation, CallFunc_IsMobileGame_ReturnValue) == 0x000018, "Member 'MTXButton_C_GetHoverAnimation::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_GetHoverAnimation, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'MTXButton_C_GetHoverAnimation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_GetHoverAnimation, K2Node_Select_Default) == 0x000020, "Member 'MTXButton_C_GetHoverAnimation::K2Node_Select_Default' has a wrong offset!");

struct MTXButton_C_ExecuteUbergraph_MTXButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_2B[0x5];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	uint8                                         Pad_3A[0x2];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	uint8                                         Pad_4C[0x4];
	double                                        K2Node_Select_Default;
	class UMaterialInstance*                      CallFunc_SelectMaterialInstance_ReturnValue;
	double                                        Temp_real_Variable_2;
	double                                        Temp_real_Variable_3;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_71[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_81[0x7];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_C1[0x7];
	double                                        K2Node_Select_Default_1;
	class UWidgetAnimation*                       CallFunc_GetHoverAnimation_ReturnValue;
	class UWidgetAnimation*                       CallFunc_GetHoverAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_2;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_3;
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
};
static_assert(alignof(MTXButton_C_ExecuteUbergraph_MTXButton) == 0x000008, "Wrong alignment on MTXButton_C_ExecuteUbergraph_MTXButton");
static_assert(sizeof(MTXButton_C_ExecuteUbergraph_MTXButton) == 0x000100, "Wrong size on MTXButton_C_ExecuteUbergraph_MTXButton");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, EntryPoint) == 0x000000, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, Temp_real_Variable) == 0x000008, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, Temp_real_Variable_1) == 0x000010, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000018, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000020, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x000028, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, Temp_bool_Variable) == 0x000029, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsMobileGame_ReturnValue) == 0x00002A, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000030, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsMobileGame_ReturnValue_1) == 0x000039, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_SelectColor_ReturnValue) == 0x00003C, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_Select_Default) == 0x000050, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_SelectMaterialInstance_ReturnValue) == 0x000058, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_SelectMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, Temp_real_Variable_2) == 0x000060, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, Temp_real_Variable_3) == 0x000068, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_CustomEvent_bNewInputType) == 0x000070, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000080, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_SelectFloat_ReturnValue) == 0x000088, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_MakeStruct_Margin) == 0x000090, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x0000A0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_MakeVector2D_ReturnValue) == 0x0000B0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, Temp_bool_Variable_1) == 0x0000C0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_Select_Default_1) == 0x0000C8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetHoverAnimation_ReturnValue) == 0x0000D0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetHoverAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_GetHoverAnimation_ReturnValue_1) == 0x0000D8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_GetHoverAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000E0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000E8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsUsingTouch_ReturnValue) == 0x0000F0, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsUsingTouch_ReturnValue_1) == 0x0000F1, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsUsingTouch_ReturnValue_2) == 0x0000F2, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsUsingTouch_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_IsUsingTouch_ReturnValue_3) == 0x0000F3, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_IsUsingTouch_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x0000F4, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, K2Node_MakeStruct_Top_ImplicitCast) == 0x0000F8, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(MTXButton_C_ExecuteUbergraph_MTXButton, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x0000FC, "Member 'MTXButton_C_ExecuteUbergraph_MTXButton::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");

struct MTXButton_C_EventOnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(MTXButton_C_EventOnInputMethodChanged) == 0x000001, "Wrong alignment on MTXButton_C_EventOnInputMethodChanged");
static_assert(sizeof(MTXButton_C_EventOnInputMethodChanged) == 0x000001, "Wrong size on MTXButton_C_EventOnInputMethodChanged");
static_assert(offsetof(MTXButton_C_EventOnInputMethodChanged, bNewInputType) == 0x000000, "Member 'MTXButton_C_EventOnInputMethodChanged::bNewInputType' has a wrong offset!");

}
