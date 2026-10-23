#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading) == 0x000008, "Wrong alignment on BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading");
static_assert(sizeof(BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading) == 0x000010, "Wrong size on BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading");
static_assert(offsetof(BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading, EntryPoint) == 0x000000, "Member 'BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading, K2Node_Event_IsDesignTime) == 0x000004, "Member 'BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BattlePassSeasonHeading_C_ExecuteUbergraph_BattlePassSeasonHeading::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct BattlePassSeasonHeading_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BattlePassSeasonHeading_C_PreConstruct) == 0x000001, "Wrong alignment on BattlePassSeasonHeading_C_PreConstruct");
static_assert(sizeof(BattlePassSeasonHeading_C_PreConstruct) == 0x000001, "Wrong size on BattlePassSeasonHeading_C_PreConstruct");
static_assert(offsetof(BattlePassSeasonHeading_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BattlePassSeasonHeading_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
