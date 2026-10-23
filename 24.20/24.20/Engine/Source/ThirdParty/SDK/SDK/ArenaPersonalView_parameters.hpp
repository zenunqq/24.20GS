#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct ArenaPersonalView_C_Colorize final
{
public:
	struct FFortTournamentDisplayInfo             Color_Info;
};
static_assert(alignof(ArenaPersonalView_C_Colorize) == 0x000008, "Wrong alignment on ArenaPersonalView_C_Colorize");
static_assert(sizeof(ArenaPersonalView_C_Colorize) == 0x0001D0, "Wrong size on ArenaPersonalView_C_Colorize");
static_assert(offsetof(ArenaPersonalView_C_Colorize, Color_Info) == 0x000000, "Member 'ArenaPersonalView_C_Colorize::Color_Info' has a wrong offset!");

struct ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_Color_Info;
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;
};
static_assert(alignof(ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView) == 0x000008, "Wrong alignment on ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView");
static_assert(sizeof(ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView) == 0x0001E8, "Wrong size on ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView");
static_assert(offsetof(ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView, EntryPoint) == 0x000000, "Member 'ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView::EntryPoint' has a wrong offset!");
static_assert(offsetof(ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView, K2Node_CustomEvent_Color_Info) == 0x000008, "Member 'ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView::K2Node_CustomEvent_Color_Info' has a wrong offset!");
static_assert(offsetof(ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView, K2Node_MakeStruct_LinearColor) == 0x0001D8, "Member 'ArenaPersonalView_C_ExecuteUbergraph_ArenaPersonalView::K2Node_MakeStruct_LinearColor' has a wrong offset!");

}
