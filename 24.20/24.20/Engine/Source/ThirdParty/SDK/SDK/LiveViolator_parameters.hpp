#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LiveViolator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(LiveViolator_C_PreConstruct) == 0x000001, "Wrong alignment on LiveViolator_C_PreConstruct");
static_assert(sizeof(LiveViolator_C_PreConstruct) == 0x000001, "Wrong size on LiveViolator_C_PreConstruct");
static_assert(offsetof(LiveViolator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LiveViolator_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct LiveViolator_C_ExecuteUbergraph_LiveViolator final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(LiveViolator_C_ExecuteUbergraph_LiveViolator) == 0x000004, "Wrong alignment on LiveViolator_C_ExecuteUbergraph_LiveViolator");
static_assert(sizeof(LiveViolator_C_ExecuteUbergraph_LiveViolator) == 0x000008, "Wrong size on LiveViolator_C_ExecuteUbergraph_LiveViolator");
static_assert(offsetof(LiveViolator_C_ExecuteUbergraph_LiveViolator, EntryPoint) == 0x000000, "Member 'LiveViolator_C_ExecuteUbergraph_LiveViolator::EntryPoint' has a wrong offset!");
static_assert(offsetof(LiveViolator_C_ExecuteUbergraph_LiveViolator, K2Node_Event_IsDesignTime) == 0x000004, "Member 'LiveViolator_C_ExecuteUbergraph_LiveViolator::K2Node_Event_IsDesignTime' has a wrong offset!");

}
