#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct UserListHeaderEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;
};
static_assert(alignof(UserListHeaderEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on UserListHeaderEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(UserListHeaderEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on UserListHeaderEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(UserListHeaderEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'UserListHeaderEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

struct UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry final
{
public:
	int32                                         EntryPoint;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	bool                                          Temp_bool_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable;
	EUMGSequencePlayMode                          Temp_byte_Variable_1;
	uint8                                         Pad_F[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_Event_bIsExpanded;
	EUMGSequencePlayMode                          K2Node_Select_Default;
	uint8                                         Pad_22[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_34[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          CallFunc_IsListItemExpanded_ReturnValue;
	uint8                                         Pad_41[0x7];
	class UObject*                                K2Node_Event_ListItemObject;
};
static_assert(alignof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry) == 0x000008, "Wrong alignment on UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry");
static_assert(sizeof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry) == 0x000050, "Wrong size on UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, EntryPoint) == 0x000000, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, K2Node_Event_InFocusEvent) == 0x000004, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, Temp_bool_Variable) == 0x00000C, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, Temp_byte_Variable) == 0x00000D, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, Temp_byte_Variable_1) == 0x00000E, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, K2Node_Event_bIsExpanded) == 0x000020, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, K2Node_Select_Default) == 0x000021, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, CallFunc_GetEndTime_ReturnValue) == 0x000030, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, CallFunc_PlayAnimation_ReturnValue_3) == 0x000038, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, CallFunc_IsListItemExpanded_ReturnValue) == 0x000040, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::CallFunc_IsListItemExpanded_ReturnValue' has a wrong offset!");
static_assert(offsetof(UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry, K2Node_Event_ListItemObject) == 0x000048, "Member 'UserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry::K2Node_Event_ListItemObject' has a wrong offset!");

struct UserListHeaderEntry_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(UserListHeaderEntry_C_OnFocusLost) == 0x000004, "Wrong alignment on UserListHeaderEntry_C_OnFocusLost");
static_assert(sizeof(UserListHeaderEntry_C_OnFocusLost) == 0x000008, "Wrong size on UserListHeaderEntry_C_OnFocusLost");
static_assert(offsetof(UserListHeaderEntry_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UserListHeaderEntry_C_OnFocusLost::InFocusEvent' has a wrong offset!");

struct UserListHeaderEntry_C_OnListItemObjectSet_1 final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(UserListHeaderEntry_C_OnListItemObjectSet_1) == 0x000008, "Wrong alignment on UserListHeaderEntry_C_OnListItemObjectSet_1");
static_assert(sizeof(UserListHeaderEntry_C_OnListItemObjectSet_1) == 0x000008, "Wrong size on UserListHeaderEntry_C_OnListItemObjectSet_1");
static_assert(offsetof(UserListHeaderEntry_C_OnListItemObjectSet_1, ListItemObject) == 0x000000, "Member 'UserListHeaderEntry_C_OnListItemObjectSet_1::ListItemObject' has a wrong offset!");

}
