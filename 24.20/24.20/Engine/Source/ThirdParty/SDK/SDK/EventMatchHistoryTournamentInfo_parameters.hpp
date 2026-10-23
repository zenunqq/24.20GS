#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_GetWindowRoundDisplayString_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo) == 0x000008, "Wrong alignment on EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo");
static_assert(sizeof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo) == 0x000138, "Wrong size on EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, EntryPoint) == 0x000000, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, CallFunc_GetWindowRoundDisplayString_ReturnValue) == 0x000008, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::CallFunc_GetWindowRoundDisplayString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, K2Node_MakeStruct_FormatArgumentData_1) == 0x000070, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000C0, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, K2Node_MakeArray_Array) == 0x000110, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo, CallFunc_Format_ReturnValue) == 0x000120, "Member 'EventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo::CallFunc_Format_ReturnValue' has a wrong offset!");

}
