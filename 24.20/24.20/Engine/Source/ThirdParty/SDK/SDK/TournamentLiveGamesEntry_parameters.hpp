#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	int32                                         K2Node_Event_EntryIndex;
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_41[0x3];
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry) == 0x000008, "Wrong alignment on TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry");
static_assert(sizeof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry) == 0x000058, "Wrong size on TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, EntryPoint) == 0x000000, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, Temp_bool_Variable) == 0x000004, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, Temp_struct_Variable) == 0x000008, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, Temp_struct_Variable_1) == 0x000018, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, K2Node_Event_EntryIndex) == 0x000038, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::K2Node_Event_EntryIndex' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, CallFunc_Percent_IntInt_ReturnValue) == 0x00003C, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry, K2Node_Select_Default) == 0x000044, "Member 'TournamentLiveGamesEntry_C_ExecuteUbergraph_TournamentLiveGamesEntry::K2Node_Select_Default' has a wrong offset!");

struct TournamentLiveGamesEntry_C_OnEntrySet final
{
public:
	int32                                         EntryIndex;
};
static_assert(alignof(TournamentLiveGamesEntry_C_OnEntrySet) == 0x000004, "Wrong alignment on TournamentLiveGamesEntry_C_OnEntrySet");
static_assert(sizeof(TournamentLiveGamesEntry_C_OnEntrySet) == 0x000004, "Wrong size on TournamentLiveGamesEntry_C_OnEntrySet");
static_assert(offsetof(TournamentLiveGamesEntry_C_OnEntrySet, EntryIndex) == 0x000000, "Member 'TournamentLiveGamesEntry_C_OnEntrySet::EntryIndex' has a wrong offset!");

}
