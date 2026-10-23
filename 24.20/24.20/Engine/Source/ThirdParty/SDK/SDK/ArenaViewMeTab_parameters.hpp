#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct ArenaViewMeTab_C_Colorize final
{
public:
	struct FFortTournamentDisplayInfo             ColorInfo;
};
static_assert(alignof(ArenaViewMeTab_C_Colorize) == 0x000008, "Wrong alignment on ArenaViewMeTab_C_Colorize");
static_assert(sizeof(ArenaViewMeTab_C_Colorize) == 0x0001D0, "Wrong size on ArenaViewMeTab_C_Colorize");
static_assert(offsetof(ArenaViewMeTab_C_Colorize, ColorInfo) == 0x000000, "Member 'ArenaViewMeTab_C_Colorize::ColorInfo' has a wrong offset!");

struct ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_ColorInfo;
	class UArenaPersonalView_C*                   K2Node_DynamicCast_AsArena_Personal_View;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab) == 0x000008, "Wrong alignment on ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab");
static_assert(sizeof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab) == 0x0001E8, "Wrong size on ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, EntryPoint) == 0x000000, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, K2Node_CustomEvent_ColorInfo) == 0x000008, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::K2Node_CustomEvent_ColorInfo' has a wrong offset!");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, K2Node_DynamicCast_AsArena_Personal_View) == 0x0001D8, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::K2Node_DynamicCast_AsArena_Personal_View' has a wrong offset!");
static_assert(offsetof(ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'ArenaViewMeTab_C_ExecuteUbergraph_ArenaViewMeTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
