#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UObject*                                K2Node_Event_ListItemObject;
	class UFortEventTeamMatchHistoryEntryData*    K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x3];
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_51[0x3];
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry) == 0x000008, "Wrong alignment on EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry");
static_assert(sizeof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry) == 0x000068, "Wrong size on EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, EntryPoint) == 0x000000, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, Temp_bool_Variable) == 0x000004, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, Temp_struct_Variable) == 0x000008, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, Temp_struct_Variable_1) == 0x000018, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, K2Node_Event_ListItemObject) == 0x000038, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data) == 0x000040, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::K2Node_DynamicCast_AsFort_Event_Team_Match_History_Entry_Data' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, CallFunc_Percent_IntInt_ReturnValue) == 0x00004C, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry, K2Node_Select_Default) == 0x000054, "Member 'EventTeamMatchHistoryEntry_C_ExecuteUbergraph_EventTeamMatchHistoryEntry::K2Node_Select_Default' has a wrong offset!");

struct EventTeamMatchHistoryEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;
};
static_assert(alignof(EventTeamMatchHistoryEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on EventTeamMatchHistoryEntry_C_OnListItemObjectSet");
static_assert(sizeof(EventTeamMatchHistoryEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on EventTeamMatchHistoryEntry_C_OnListItemObjectSet");
static_assert(offsetof(EventTeamMatchHistoryEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'EventTeamMatchHistoryEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

}
