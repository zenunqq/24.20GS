#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar) == 0x000004, "Wrong alignment on WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar");
static_assert(sizeof(WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar) == 0x000004, "Wrong size on WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar");
static_assert(offsetof(WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar, EntryPoint) == 0x000000, "Member 'WBP_QuestScreen_PlayerProfileAndXPBar_C_ExecuteUbergraph_WBP_QuestScreen_PlayerProfileAndXPBar::EntryPoint' has a wrong offset!");

struct WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode final
{
public:
	bool                                          IsCollapsed;
};
static_assert(alignof(WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode) == 0x000001, "Wrong alignment on WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode");
static_assert(sizeof(WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode) == 0x000001, "Wrong size on WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode");
static_assert(offsetof(WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode, IsCollapsed) == 0x000000, "Member 'WBP_QuestScreen_PlayerProfileAndXPBar_C_SetCollapsedMode::IsCollapsed' has a wrong offset!");

}
