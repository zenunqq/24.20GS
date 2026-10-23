#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaStatsRow_C_SetStatValueAsText final
{
public:
	class FText                                   StatValue;
};
static_assert(alignof(AthenaStatsRow_C_SetStatValueAsText) == 0x000008, "Wrong alignment on AthenaStatsRow_C_SetStatValueAsText");
static_assert(sizeof(AthenaStatsRow_C_SetStatValueAsText) == 0x000018, "Wrong size on AthenaStatsRow_C_SetStatValueAsText");
static_assert(offsetof(AthenaStatsRow_C_SetStatValueAsText, StatValue) == 0x000000, "Member 'AthenaStatsRow_C_SetStatValueAsText::StatValue' has a wrong offset!");

struct AthenaStatsRow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaStatsRow_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaStatsRow_C_PreConstruct");
static_assert(sizeof(AthenaStatsRow_C_PreConstruct) == 0x000001, "Wrong size on AthenaStatsRow_C_PreConstruct");
static_assert(offsetof(AthenaStatsRow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaStatsRow_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow) == 0x000004, "Wrong alignment on AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow");
static_assert(sizeof(AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow) == 0x000008, "Wrong size on AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow");
static_assert(offsetof(AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow, EntryPoint) == 0x000000, "Member 'AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow::K2Node_Event_IsDesignTime' has a wrong offset!");

}
