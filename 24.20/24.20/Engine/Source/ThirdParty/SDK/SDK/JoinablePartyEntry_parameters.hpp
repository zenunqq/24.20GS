#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'JoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_ComponentBoundEvent_bIsOpen;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          K2Node_Event_bIsInvited;
};
static_assert(alignof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry) == 0x000008, "Wrong alignment on JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry");
static_assert(sizeof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry) == 0x000038, "Wrong size on JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, EntryPoint) == 0x000000, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, K2Node_ComponentBoundEvent_bIsOpen) == 0x000004, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry, K2Node_Event_bIsInvited) == 0x000030, "Member 'JoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry::K2Node_Event_bIsInvited' has a wrong offset!");

struct JoinablePartyEntry_C_OnInviteStatusUpdated final
{
public:
	bool                                          bIsInvited;
};
static_assert(alignof(JoinablePartyEntry_C_OnInviteStatusUpdated) == 0x000001, "Wrong alignment on JoinablePartyEntry_C_OnInviteStatusUpdated");
static_assert(sizeof(JoinablePartyEntry_C_OnInviteStatusUpdated) == 0x000001, "Wrong size on JoinablePartyEntry_C_OnInviteStatusUpdated");
static_assert(offsetof(JoinablePartyEntry_C_OnInviteStatusUpdated, bIsInvited) == 0x000000, "Member 'JoinablePartyEntry_C_OnInviteStatusUpdated::bIsInvited' has a wrong offset!");

}
