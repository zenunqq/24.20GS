#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'SidebarUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	int32                                         Temp_int_Array_Index_Variable;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;
	uint8                                         Pad_19[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_31[0x7];
	TArray<class USocialTagWidget*>               K2Node_MakeArray_Array;
	class USocialTagWidget*                       CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_54[0x4];
	class USidebarSocialTagWidget_C*              K2Node_DynamicCast_AsSidebar_Social_Tag_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_62[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_69[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_71[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          K2Node_Event_bUsingNewAvatars;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_87[0x1];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
};
static_assert(alignof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS) == 0x000008, "Wrong alignment on SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS");
static_assert(sizeof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS) == 0x0000A0, "Wrong size on SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, EntryPoint) == 0x000000, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_byte_Variable) == 0x000004, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_bool_Variable) == 0x000005, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_byte_Variable_1) == 0x000006, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_byte_Variable_2) == 0x000007, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_int_Array_Index_Variable) == 0x000008, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_byte_Variable_3) == 0x00000C, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_ComponentBoundEvent_bIsOpen) == 0x000018, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000030, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_MakeArray_Array) == 0x000038, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_Array_Get_Item) == 0x000048, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_DynamicCast_AsSidebar_Social_Tag_Widget) == 0x000058, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_DynamicCast_AsSidebar_Social_Tag_Widget' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_IsMobileGame_ReturnValue) == 0x000061, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, Temp_bool_Variable_1) == 0x000070, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_IsUsingTouch_ReturnValue) == 0x000080, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_IsUsingTouch_ReturnValue_1) == 0x000081, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_Not_PreBool_ReturnValue) == 0x000082, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_Not_PreBool_ReturnValue_1) == 0x000083, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_Event_bUsingNewAvatars) == 0x000084, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_Select_Default) == 0x000085, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, K2Node_Select_Default_1) == 0x000086, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000088, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000090, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS, CallFunc_GetCurrentInputType_ReturnValue) == 0x000098, "Member 'SidebarUserListEntry_XS_C_ExecuteUbergraph_SidebarUserListEntry_XS::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

struct SidebarUserListEntry_XS_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(SidebarUserListEntry_XS_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on SidebarUserListEntry_XS_C_HandleInputMethodChanged");
static_assert(sizeof(SidebarUserListEntry_XS_C_HandleInputMethodChanged) == 0x000001, "Wrong size on SidebarUserListEntry_XS_C_HandleInputMethodChanged");
static_assert(offsetof(SidebarUserListEntry_XS_C_HandleInputMethodChanged, NewInputType) == 0x000000, "Member 'SidebarUserListEntry_XS_C_HandleInputMethodChanged::NewInputType' has a wrong offset!");

struct SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarUserListEntry_XS_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

struct SidebarUserListEntry_XS_C_SetUnhoverState final
{
public:
	bool                                          PlayAnimation_0;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class USocialTagWidget*                       CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class USidebarSocialTagWidget_C*              K2Node_DynamicCast_AsSidebar_Social_Tag_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2A[0x2];
	float                                         CallFunc_GetStartTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_34[0x4];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_SelectFloat_A_ImplicitCast;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
};
static_assert(alignof(SidebarUserListEntry_XS_C_SetUnhoverState) == 0x000008, "Wrong alignment on SidebarUserListEntry_XS_C_SetUnhoverState");
static_assert(sizeof(SidebarUserListEntry_XS_C_SetUnhoverState) == 0x000060, "Wrong size on SidebarUserListEntry_XS_C_SetUnhoverState");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, PlayAnimation_0) == 0x000000, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::PlayAnimation_0' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, Temp_int_Array_Index_Variable) == 0x000004, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_Array_Get_Item) == 0x000010, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, K2Node_DynamicCast_AsSidebar_Social_Tag_Widget) == 0x000020, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::K2Node_DynamicCast_AsSidebar_Social_Tag_Widget' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_Less_IntInt_ReturnValue) == 0x000029, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_GetStartTime_ReturnValue) == 0x00002C, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_GetEndTime_ReturnValue) == 0x000030, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_SelectFloat_A_ImplicitCast) == 0x000048, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_SelectFloat_B_ImplicitCast) == 0x000050, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarUserListEntry_XS_C_SetUnhoverState, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000058, "Member 'SidebarUserListEntry_XS_C_SetUnhoverState::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");

}
