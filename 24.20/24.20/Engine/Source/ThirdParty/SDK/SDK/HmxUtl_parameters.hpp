#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BehaviorTreeActor_GetBlackboard final
{
public:
	class UBlackboardComponent*                   ReturnValue;
};
static_assert(alignof(BehaviorTreeActor_GetBlackboard) == 0x000008, "Wrong alignment on BehaviorTreeActor_GetBlackboard");
static_assert(sizeof(BehaviorTreeActor_GetBlackboard) == 0x000008, "Wrong size on BehaviorTreeActor_GetBlackboard");
static_assert(offsetof(BehaviorTreeActor_GetBlackboard, ReturnValue) == 0x000000, "Member 'BehaviorTreeActor_GetBlackboard::ReturnValue' has a wrong offset!");

struct BehaviorTreeActor_RunBehaviorTree final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(BehaviorTreeActor_RunBehaviorTree) == 0x000001, "Wrong alignment on BehaviorTreeActor_RunBehaviorTree");
static_assert(sizeof(BehaviorTreeActor_RunBehaviorTree) == 0x000001, "Wrong size on BehaviorTreeActor_RunBehaviorTree");
static_assert(offsetof(BehaviorTreeActor_RunBehaviorTree, ReturnValue) == 0x000000, "Member 'BehaviorTreeActor_RunBehaviorTree::ReturnValue' has a wrong offset!");

struct HmxBPFL_IsNone final
{
public:
	class FName                                   Name_0;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(HmxBPFL_IsNone) == 0x000004, "Wrong alignment on HmxBPFL_IsNone");
static_assert(sizeof(HmxBPFL_IsNone) == 0x000008, "Wrong size on HmxBPFL_IsNone");
static_assert(offsetof(HmxBPFL_IsNone, Name_0) == 0x000000, "Member 'HmxBPFL_IsNone::Name_0' has a wrong offset!");
static_assert(offsetof(HmxBPFL_IsNone, ReturnValue) == 0x000004, "Member 'HmxBPFL_IsNone::ReturnValue' has a wrong offset!");

struct HmxBPFL_LoopDecrement final
{
public:
	int32                                         Value;
	int32                                         min_0;
	int32                                         max_0;
	int32                                         ReturnValue;
};
static_assert(alignof(HmxBPFL_LoopDecrement) == 0x000004, "Wrong alignment on HmxBPFL_LoopDecrement");
static_assert(sizeof(HmxBPFL_LoopDecrement) == 0x000010, "Wrong size on HmxBPFL_LoopDecrement");
static_assert(offsetof(HmxBPFL_LoopDecrement, Value) == 0x000000, "Member 'HmxBPFL_LoopDecrement::Value' has a wrong offset!");
static_assert(offsetof(HmxBPFL_LoopDecrement, min_0) == 0x000004, "Member 'HmxBPFL_LoopDecrement::min_0' has a wrong offset!");
static_assert(offsetof(HmxBPFL_LoopDecrement, max_0) == 0x000008, "Member 'HmxBPFL_LoopDecrement::max_0' has a wrong offset!");
static_assert(offsetof(HmxBPFL_LoopDecrement, ReturnValue) == 0x00000C, "Member 'HmxBPFL_LoopDecrement::ReturnValue' has a wrong offset!");

struct HmxBPFL_LoopIncrement final
{
public:
	int32                                         Value;
	int32                                         min_0;
	int32                                         max_0;
	int32                                         ReturnValue;
};
static_assert(alignof(HmxBPFL_LoopIncrement) == 0x000004, "Wrong alignment on HmxBPFL_LoopIncrement");
static_assert(sizeof(HmxBPFL_LoopIncrement) == 0x000010, "Wrong size on HmxBPFL_LoopIncrement");
static_assert(offsetof(HmxBPFL_LoopIncrement, Value) == 0x000000, "Member 'HmxBPFL_LoopIncrement::Value' has a wrong offset!");
static_assert(offsetof(HmxBPFL_LoopIncrement, min_0) == 0x000004, "Member 'HmxBPFL_LoopIncrement::min_0' has a wrong offset!");
static_assert(offsetof(HmxBPFL_LoopIncrement, max_0) == 0x000008, "Member 'HmxBPFL_LoopIncrement::max_0' has a wrong offset!");
static_assert(offsetof(HmxBPFL_LoopIncrement, ReturnValue) == 0x00000C, "Member 'HmxBPFL_LoopIncrement::ReturnValue' has a wrong offset!");

struct HmxBPFL_Modulo final
{
public:
	int32                                         Value;
	int32                                         Mod;
	int32                                         ReturnValue;
};
static_assert(alignof(HmxBPFL_Modulo) == 0x000004, "Wrong alignment on HmxBPFL_Modulo");
static_assert(sizeof(HmxBPFL_Modulo) == 0x00000C, "Wrong size on HmxBPFL_Modulo");
static_assert(offsetof(HmxBPFL_Modulo, Value) == 0x000000, "Member 'HmxBPFL_Modulo::Value' has a wrong offset!");
static_assert(offsetof(HmxBPFL_Modulo, Mod) == 0x000004, "Member 'HmxBPFL_Modulo::Mod' has a wrong offset!");
static_assert(offsetof(HmxBPFL_Modulo, ReturnValue) == 0x000008, "Member 'HmxBPFL_Modulo::ReturnValue' has a wrong offset!");

}
