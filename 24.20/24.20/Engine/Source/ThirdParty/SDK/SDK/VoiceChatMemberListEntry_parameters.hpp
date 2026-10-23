#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'VoiceChatMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry final
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
};
static_assert(alignof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry) == 0x000008, "Wrong alignment on VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry");
static_assert(sizeof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry) == 0x000030, "Wrong size on VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, EntryPoint) == 0x000000, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, K2Node_ComponentBoundEvent_bIsOpen) == 0x000004, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'VoiceChatMemberListEntry_C_ExecuteUbergraph_VoiceChatMemberListEntry::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

}
