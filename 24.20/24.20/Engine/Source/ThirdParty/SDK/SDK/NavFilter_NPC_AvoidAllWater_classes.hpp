#pragma once

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"

namespace SDK
{

class UNavFilter_NPC_AvoidAllWater_C final : public URecastFilter_UseDefaultArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavFilter_NPC_AvoidAllWater_C">();
	}
	static class UNavFilter_NPC_AvoidAllWater_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_NPC_AvoidAllWater_C>();
	}
};
static_assert(alignof(UNavFilter_NPC_AvoidAllWater_C) == 0x000008, "Wrong alignment on UNavFilter_NPC_AvoidAllWater_C");
static_assert(sizeof(UNavFilter_NPC_AvoidAllWater_C) == 0x000048, "Wrong size on UNavFilter_NPC_AvoidAllWater_C");

}
