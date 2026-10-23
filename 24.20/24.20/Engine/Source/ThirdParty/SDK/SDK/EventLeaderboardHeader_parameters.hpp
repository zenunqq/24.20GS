#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FText                                   CallFunc_GetWindowRoundDisplayString_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
};
static_assert(alignof(EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader) == 0x000008, "Wrong alignment on EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader");
static_assert(sizeof(EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader) == 0x000038, "Wrong size on EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader");
static_assert(offsetof(EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader, EntryPoint) == 0x000000, "Member 'EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader, CallFunc_GetWindowRoundDisplayString_ReturnValue) == 0x000008, "Member 'EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader::CallFunc_GetWindowRoundDisplayString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'EventLeaderboardHeader_C_ExecuteUbergraph_EventLeaderboardHeader::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}
