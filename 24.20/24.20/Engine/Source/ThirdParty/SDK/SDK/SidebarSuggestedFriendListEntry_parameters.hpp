#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'SidebarSuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;
	uint8                                         Pad_A[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_35[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          K2Node_Event_bUsingNewAvatars;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_47[0x1];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
};
static_assert(alignof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry) == 0x000008, "Wrong alignment on SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry");
static_assert(sizeof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry) == 0x000060, "Wrong size on SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, EntryPoint) == 0x000000, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, Temp_byte_Variable) == 0x000004, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, Temp_byte_Variable_1) == 0x000005, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, Temp_bool_Variable) == 0x000006, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, Temp_byte_Variable_2) == 0x000007, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, Temp_byte_Variable_3) == 0x000008, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, K2Node_ComponentBoundEvent_bIsOpen) == 0x000009, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_IsUsingTouch_ReturnValue) == 0x000030, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_IsUsingTouch_ReturnValue_1) == 0x000031, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_Not_PreBool_ReturnValue_1) == 0x000033, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, Temp_bool_Variable_1) == 0x000034, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, K2Node_Event_bUsingNewAvatars) == 0x000044, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, K2Node_Select_Default) == 0x000045, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, K2Node_Select_Default_1) == 0x000046, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000048, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000050, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry, CallFunc_GetCurrentInputType_ReturnValue) == 0x000058, "Member 'SidebarSuggestedFriendListEntry_C_ExecuteUbergraph_SidebarSuggestedFriendListEntry::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");

struct SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged");
static_assert(sizeof(SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged) == 0x000001, "Wrong size on SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged, NewInputType) == 0x000000, "Member 'SidebarSuggestedFriendListEntry_C_HandleInputMethodChanged::NewInputType' has a wrong offset!");

struct SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarSuggestedFriendListEntry_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

struct SidebarSuggestedFriendListEntry_C_SetUnhoverState final
{
public:
	bool                                          bPlayAnimation;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_GetStartTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_SelectFloat_A_ImplicitCast;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
};
static_assert(alignof(SidebarSuggestedFriendListEntry_C_SetUnhoverState) == 0x000008, "Wrong alignment on SidebarSuggestedFriendListEntry_C_SetUnhoverState");
static_assert(sizeof(SidebarSuggestedFriendListEntry_C_SetUnhoverState) == 0x000038, "Wrong size on SidebarSuggestedFriendListEntry_C_SetUnhoverState");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, bPlayAnimation) == 0x000000, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::bPlayAnimation' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_GetStartTime_ReturnValue) == 0x000004, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_SelectFloat_A_ImplicitCast) == 0x000020, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_SelectFloat_B_ImplicitCast) == 0x000028, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarSuggestedFriendListEntry_C_SetUnhoverState, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000030, "Member 'SidebarSuggestedFriendListEntry_C_SetUnhoverState::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");

}
