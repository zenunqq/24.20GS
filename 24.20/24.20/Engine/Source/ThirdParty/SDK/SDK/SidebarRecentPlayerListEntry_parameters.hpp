#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'SidebarRecentPlayerListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bUsingNewAvatars;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_31[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_45[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_51[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
};
static_assert(alignof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry) == 0x000008, "Wrong alignment on SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry");
static_assert(sizeof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry) == 0x000060, "Wrong size on SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, EntryPoint) == 0x000000, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, K2Node_Event_bUsingNewAvatars) == 0x000004, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, Temp_byte_Variable) == 0x000005, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, Temp_byte_Variable_1) == 0x000006, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, Temp_bool_Variable) == 0x000007, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, Temp_byte_Variable_2) == 0x000008, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, Temp_byte_Variable_3) == 0x000009, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, K2Node_ComponentBoundEvent_bIsOpen) == 0x00000A, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, K2Node_Select_Default) == 0x00000B, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000018, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, Temp_bool_Variable_1) == 0x000030, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, K2Node_Select_Default_1) == 0x000040, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_IsUsingTouch_ReturnValue) == 0x000041, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_IsUsingTouch_ReturnValue_1) == 0x000042, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000043, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_Not_PreBool_ReturnValue_1) == 0x000044, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000048, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_GetCurrentInputType_ReturnValue) == 0x000050, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000058, "Member 'SidebarRecentPlayerListEntry_C_ExecuteUbergraph_SidebarRecentPlayerListEntry::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");

struct SidebarRecentPlayerListEntry_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              NewInputType;
};
static_assert(alignof(SidebarRecentPlayerListEntry_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on SidebarRecentPlayerListEntry_C_HandleInputMethodChanged");
static_assert(sizeof(SidebarRecentPlayerListEntry_C_HandleInputMethodChanged) == 0x000001, "Wrong size on SidebarRecentPlayerListEntry_C_HandleInputMethodChanged");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_HandleInputMethodChanged, NewInputType) == 0x000000, "Member 'SidebarRecentPlayerListEntry_C_HandleInputMethodChanged::NewInputType' has a wrong offset!");

struct SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarRecentPlayerListEntry_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

struct SidebarRecentPlayerListEntry_C_SetUnhoverState final
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
static_assert(alignof(SidebarRecentPlayerListEntry_C_SetUnhoverState) == 0x000008, "Wrong alignment on SidebarRecentPlayerListEntry_C_SetUnhoverState");
static_assert(sizeof(SidebarRecentPlayerListEntry_C_SetUnhoverState) == 0x000038, "Wrong size on SidebarRecentPlayerListEntry_C_SetUnhoverState");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, bPlayAnimation) == 0x000000, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::bPlayAnimation' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_GetStartTime_ReturnValue) == 0x000004, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_SelectFloat_A_ImplicitCast) == 0x000020, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_SelectFloat_B_ImplicitCast) == 0x000028, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarRecentPlayerListEntry_C_SetUnhoverState, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000030, "Member 'SidebarRecentPlayerListEntry_C_SetUnhoverState::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");

}
