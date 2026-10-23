#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UGoalComponent_Default_C final : public UFortAIGoalComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoalComponent_Default_C">();
	}
	static class UGoalComponent_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoalComponent_Default_C>();
	}
};
static_assert(alignof(UGoalComponent_Default_C) == 0x000008, "Wrong alignment on UGoalComponent_Default_C");
static_assert(sizeof(UGoalComponent_Default_C) == 0x000158, "Wrong size on UGoalComponent_Default_C");

}
