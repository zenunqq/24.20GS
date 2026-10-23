#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'UserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS final
{
public:
	int32                                         EntryPoint;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;
	uint8                                         Pad_D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
};
static_assert(alignof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS) == 0x000008, "Wrong alignment on UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS");
static_assert(sizeof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS) == 0x000038, "Wrong size on UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, EntryPoint) == 0x000000, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::EntryPoint' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, K2Node_Event_InFocusEvent) == 0x000004, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, K2Node_ComponentBoundEvent_bIsOpen) == 0x00000C, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS, CallFunc_PlayAnimation_ReturnValue_3) == 0x000030, "Member 'UserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

struct UserListEntry_XS_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(UserListEntry_XS_C_OnFocusLost) == 0x000004, "Wrong alignment on UserListEntry_XS_C_OnFocusLost");
static_assert(sizeof(UserListEntry_XS_C_OnFocusLost) == 0x000008, "Wrong size on UserListEntry_XS_C_OnFocusLost");
static_assert(offsetof(UserListEntry_XS_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UserListEntry_XS_C_OnFocusLost::InFocusEvent' has a wrong offset!");

}
