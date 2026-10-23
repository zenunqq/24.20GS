#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"

namespace SDK::Params
{

struct BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange final
{
public:
	ESocialTagCategory                            InTagCategory;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange) == 0x000001, "Wrong alignment on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange");
static_assert(sizeof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange) == 0x000001, "Wrong size on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange, InTagCategory) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_OnTagCategoryChange::InTagCategory' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang final
{
public:
	bool                                          bShow;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang) == 0x000001, "Wrong alignment on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang");
static_assert(sizeof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang) == 0x000001, "Wrong size on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang, bShow) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_BP_ShowBang::bShow' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_1C[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          K2Node_Event_bShow;
	uint8                                         Pad_2A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	ESocialTagCategory                            K2Node_Event_InTagCategory;
	uint8                                         Pad_41[0x7];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_E9[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_FD[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_4;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_2;
	uint8                                         Pad_109[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_3;
	uint8                                         Pad_119[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_5;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags) == 0x000008, "Wrong alignment on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags");
static_assert(sizeof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags) == 0x000128, "Wrong size on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, EntryPoint) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000020, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_GetCurrentInputType_ReturnValue) == 0x000028, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, K2Node_Event_bShow) == 0x000029, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::K2Node_Event_bShow' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000038, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, K2Node_Event_InTagCategory) == 0x000040, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::K2Node_Event_InTagCategory' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000048, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000050, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000058, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure) == 0x000068, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x0000E0, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_IsUsingTouch_ReturnValue) == 0x0000E8, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x0000F0, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_IsUsingTouch_ReturnValue_1) == 0x0000F8, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_GetSelected_ReturnValue) == 0x0000F9, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_Not_PreBool_ReturnValue) == 0x0000FA, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000FB, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_BooleanAND_ReturnValue) == 0x0000FC, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_PlayAnimationForward_ReturnValue_4) == 0x000100, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_PlayAnimationForward_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_IsUsingTouch_ReturnValue_2) == 0x000108, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_IsUsingTouch_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, K2Node_CreateDelegate_OutputDelegate_1) == 0x00010C, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_IsUsingTouch_ReturnValue_3) == 0x000118, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_IsUsingTouch_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags, CallFunc_PlayAnimationForward_ReturnValue_5) == 0x000120, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags::CallFunc_PlayAnimationForward_ReturnValue_5' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              NewInputType;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	ECommonInputType                              Temp_byte_Variable;
	bool                                          K2Node_Select_Default;
	bool                                          CallFunc_GetSelected_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged) == 0x000008, "Wrong alignment on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged");
static_assert(sizeof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged) == 0x000030, "Wrong size on BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, NewInputType) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::NewInputType' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, Temp_bool_Variable) == 0x000001, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, Temp_bool_Variable_1) == 0x000002, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, Temp_bool_Variable_2) == 0x000003, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, Temp_bool_Variable_3) == 0x000004, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, Temp_byte_Variable) == 0x000005, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, K2Node_Select_Default) == 0x000006, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, CallFunc_GetSelected_ReturnValue) == 0x000007, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000010, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000018, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x000020, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged, CallFunc_GetSelected_ReturnValue_1) == 0x000028, "Member 'BP_SidebarCollectionScreenContainerTabButtonEditTags_C_HandleInputMethodChanged::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");

}
