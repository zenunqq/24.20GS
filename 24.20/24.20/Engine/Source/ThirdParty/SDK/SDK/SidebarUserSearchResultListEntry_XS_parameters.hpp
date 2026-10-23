#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished) == 0x000004, "Wrong alignment on SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished");
static_assert(sizeof(SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished) == 0x00000C, "Wrong size on SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'SidebarUserSearchResultListEntry_XS_C_BindHoverAnimFinished::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'SidebarUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS final
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
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          K2Node_Event_bUsingNewAvatars;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	float                                         CallFunc_GetEndTime_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
};
static_assert(alignof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS) == 0x000008, "Wrong alignment on SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS");
static_assert(sizeof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS) == 0x000048, "Wrong size on SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, EntryPoint) == 0x000000, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, Temp_byte_Variable) == 0x000004, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, Temp_byte_Variable_1) == 0x000005, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, Temp_bool_Variable) == 0x000006, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, Temp_byte_Variable_2) == 0x000007, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, Temp_byte_Variable_3) == 0x000008, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, K2Node_ComponentBoundEvent_bIsOpen) == 0x000009, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_PlayAnimation_ReturnValue_3) == 0x000030, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, K2Node_Event_bUsingNewAvatars) == 0x000038, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::K2Node_Event_bUsingNewAvatars' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, Temp_bool_Variable_1) == 0x000039, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, K2Node_Select_Default) == 0x00003A, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, K2Node_Select_Default_1) == 0x00003B, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_GetEndTime_ReturnValue) == 0x00003C, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS, CallFunc_PlayAnimation_ReturnValue_4) == 0x000040, "Member 'SidebarUserSearchResultListEntry_XS_C_ExecuteUbergraph_SidebarUserSearchResultListEntry_XS::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");

struct SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged final
{
public:
	bool                                          bUsingNewAvatars;
};
static_assert(alignof(SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong alignment on SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged");
static_assert(sizeof(SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged) == 0x000001, "Wrong size on SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged");
static_assert(offsetof(SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged, bUsingNewAvatars) == 0x000000, "Member 'SidebarUserSearchResultListEntry_XS_C_OnNewAvatarsEnabledChanged::bUsingNewAvatars' has a wrong offset!");

}
