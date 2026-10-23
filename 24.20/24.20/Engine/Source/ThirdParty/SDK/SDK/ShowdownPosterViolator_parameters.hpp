#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct ShowdownPosterViolator_C_OnViolatorStateRefreshed final
{
public:
	ETournmentPosterViolatorState                 NewTimeState;
};
static_assert(alignof(ShowdownPosterViolator_C_OnViolatorStateRefreshed) == 0x000001, "Wrong alignment on ShowdownPosterViolator_C_OnViolatorStateRefreshed");
static_assert(sizeof(ShowdownPosterViolator_C_OnViolatorStateRefreshed) == 0x000001, "Wrong size on ShowdownPosterViolator_C_OnViolatorStateRefreshed");
static_assert(offsetof(ShowdownPosterViolator_C_OnViolatorStateRefreshed, NewTimeState) == 0x000000, "Member 'ShowdownPosterViolator_C_OnViolatorStateRefreshed::NewTimeState' has a wrong offset!");

struct ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator final
{
public:
	int32                                         EntryPoint;
	ETournmentPosterViolatorState                 Temp_byte_Variable;
	ETournmentPosterViolatorState                 K2Node_Event_NewTimeState;
	uint8                                         Pad_6[0x2];
	class UCommonBorder*                          K2Node_Select_Default;
};
static_assert(alignof(ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator) == 0x000008, "Wrong alignment on ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator");
static_assert(sizeof(ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator) == 0x000010, "Wrong size on ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator");
static_assert(offsetof(ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator, EntryPoint) == 0x000000, "Member 'ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator, Temp_byte_Variable) == 0x000004, "Member 'ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator, K2Node_Event_NewTimeState) == 0x000005, "Member 'ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator::K2Node_Event_NewTimeState' has a wrong offset!");
static_assert(offsetof(ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator, K2Node_Select_Default) == 0x000008, "Member 'ShowdownPosterViolator_C_ExecuteUbergraph_ShowdownPosterViolator::K2Node_Select_Default' has a wrong offset!");

}
