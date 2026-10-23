#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LoadingSubGameContentModal_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;
};
static_assert(alignof(LoadingSubGameContentModal_C_OnAnimationFinished) == 0x000008, "Wrong alignment on LoadingSubGameContentModal_C_OnAnimationFinished");
static_assert(sizeof(LoadingSubGameContentModal_C_OnAnimationFinished) == 0x000008, "Wrong size on LoadingSubGameContentModal_C_OnAnimationFinished");
static_assert(offsetof(LoadingSubGameContentModal_C_OnAnimationFinished, Animation) == 0x000000, "Member 'LoadingSubGameContentModal_C_OnAnimationFinished::Animation' has a wrong offset!");

struct LoadingSubGameContentModal_C_SetCancelButtonText final
{
public:
	class FText                                   InText;
};
static_assert(alignof(LoadingSubGameContentModal_C_SetCancelButtonText) == 0x000008, "Wrong alignment on LoadingSubGameContentModal_C_SetCancelButtonText");
static_assert(sizeof(LoadingSubGameContentModal_C_SetCancelButtonText) == 0x000018, "Wrong size on LoadingSubGameContentModal_C_SetCancelButtonText");
static_assert(offsetof(LoadingSubGameContentModal_C_SetCancelButtonText, InText) == 0x000000, "Member 'LoadingSubGameContentModal_C_SetCancelButtonText::InText' has a wrong offset!");

struct LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   K2Node_Event_InText;
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         K2Node_Event_Percent;
	uint8                                         Pad_3C[0x4];
	const class UWidgetAnimation*                 K2Node_Event_Animation;
	class FText                                   CallFunc_AsPercent_Float_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_64[0x4];
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal) == 0x000008, "Wrong alignment on LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal");
static_assert(sizeof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal) == 0x000078, "Wrong size on LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, EntryPoint) == 0x000000, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_InText) == 0x000008, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000020, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_Percent) == 0x000038, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_Percent' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_Animation) == 0x000040, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_AsPercent_Float_ReturnValue) == 0x000048, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_AsPercent_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000060, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000061, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000063, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct LoadingSubGameContentModal_C_OnUpdatedProgress final
{
public:
	float                                         Percent;
};
static_assert(alignof(LoadingSubGameContentModal_C_OnUpdatedProgress) == 0x000004, "Wrong alignment on LoadingSubGameContentModal_C_OnUpdatedProgress");
static_assert(sizeof(LoadingSubGameContentModal_C_OnUpdatedProgress) == 0x000004, "Wrong size on LoadingSubGameContentModal_C_OnUpdatedProgress");
static_assert(offsetof(LoadingSubGameContentModal_C_OnUpdatedProgress, Percent) == 0x000000, "Member 'LoadingSubGameContentModal_C_OnUpdatedProgress::Percent' has a wrong offset!");

}
