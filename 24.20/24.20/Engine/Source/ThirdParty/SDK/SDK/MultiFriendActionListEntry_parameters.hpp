#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature final
{
public:
	bool                                          bIsOpen;
};
static_assert(alignof(MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong alignment on MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(sizeof(MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature) == 0x000001, "Wrong size on MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
static_assert(offsetof(MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature, bIsOpen) == 0x000000, "Member 'MultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature::bIsOpen' has a wrong offset!");

struct MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry final
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
	EMultiFriendAction                            K2Node_Event_InAction;
	uint8                                         Pad_31[0x7];
	class FText                                   CallFunc_GetText_Text;
};
static_assert(alignof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry) == 0x000008, "Wrong alignment on MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry");
static_assert(sizeof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry) == 0x000050, "Wrong size on MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, EntryPoint) == 0x000000, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, K2Node_ComponentBoundEvent_bIsOpen) == 0x000004, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::K2Node_ComponentBoundEvent_bIsOpen' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000020, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, CallFunc_PlayAnimation_ReturnValue_3) == 0x000028, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, K2Node_Event_InAction) == 0x000030, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::K2Node_Event_InAction' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry, CallFunc_GetText_Text) == 0x000038, "Member 'MultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry::CallFunc_GetText_Text' has a wrong offset!");

struct MultiFriendActionListEntry_C_GetText final
{
public:
	EMultiFriendAction                            InAction;
	uint8                                         Pad_1[0x7];
	class FText                                   Text;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(MultiFriendActionListEntry_C_GetText) == 0x000008, "Wrong alignment on MultiFriendActionListEntry_C_GetText");
static_assert(sizeof(MultiFriendActionListEntry_C_GetText) == 0x000028, "Wrong size on MultiFriendActionListEntry_C_GetText");
static_assert(offsetof(MultiFriendActionListEntry_C_GetText, InAction) == 0x000000, "Member 'MultiFriendActionListEntry_C_GetText::InAction' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_GetText, Text) == 0x000008, "Member 'MultiFriendActionListEntry_C_GetText::Text' has a wrong offset!");
static_assert(offsetof(MultiFriendActionListEntry_C_GetText, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'MultiFriendActionListEntry_C_GetText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct MultiFriendActionListEntry_C_OnActionUpdated final
{
public:
	EMultiFriendAction                            InAction;
};
static_assert(alignof(MultiFriendActionListEntry_C_OnActionUpdated) == 0x000001, "Wrong alignment on MultiFriendActionListEntry_C_OnActionUpdated");
static_assert(sizeof(MultiFriendActionListEntry_C_OnActionUpdated) == 0x000001, "Wrong size on MultiFriendActionListEntry_C_OnActionUpdated");
static_assert(offsetof(MultiFriendActionListEntry_C_OnActionUpdated, InAction) == 0x000000, "Member 'MultiFriendActionListEntry_C_OnActionUpdated::InAction' has a wrong offset!");

}
