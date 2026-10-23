#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath");
static_assert(sizeof(TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'TournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

struct TournamentPayoutThresholdEntry_C_OnPayoutDataSet final
{
public:
	int32                                         EntryIndex;
};
static_assert(alignof(TournamentPayoutThresholdEntry_C_OnPayoutDataSet) == 0x000004, "Wrong alignment on TournamentPayoutThresholdEntry_C_OnPayoutDataSet");
static_assert(sizeof(TournamentPayoutThresholdEntry_C_OnPayoutDataSet) == 0x000004, "Wrong size on TournamentPayoutThresholdEntry_C_OnPayoutDataSet");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_OnPayoutDataSet, EntryIndex) == 0x000000, "Member 'TournamentPayoutThresholdEntry_C_OnPayoutDataSet::EntryIndex' has a wrong offset!");

struct TournamentPayoutThresholdEntry_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(TournamentPayoutThresholdEntry_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on TournamentPayoutThresholdEntry_C_OnAddedToFocusPath");
static_assert(sizeof(TournamentPayoutThresholdEntry_C_OnAddedToFocusPath) == 0x000008, "Wrong size on TournamentPayoutThresholdEntry_C_OnAddedToFocusPath");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'TournamentPayoutThresholdEntry_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

struct TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	int32                                         K2Node_Event_EntryIndex;
	uint8                                         Pad_3C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	uint8                                         Pad_4C[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_59[0x3];
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry) == 0x000008, "Wrong alignment on TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry");
static_assert(sizeof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry) == 0x000070, "Wrong size on TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, EntryPoint) == 0x000000, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, Temp_bool_Variable) == 0x000004, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, Temp_struct_Variable) == 0x000008, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, Temp_struct_Variable_1) == 0x000018, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, K2Node_Event_InFocusEvent_1) == 0x000028, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, K2Node_Event_InFocusEvent) == 0x000030, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, K2Node_Event_EntryIndex) == 0x000038, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::K2Node_Event_EntryIndex' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, CallFunc_Percent_IntInt_ReturnValue) == 0x000048, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000058, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry, K2Node_Select_Default) == 0x00005C, "Member 'TournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry::K2Node_Select_Default' has a wrong offset!");

}
