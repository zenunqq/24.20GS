#pragma once

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"

namespace SDK
{

class UNavFilter_NPC_AnyTraversable_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavFilter_NPC_AnyTraversable_C">();
	}
	static class UNavFilter_NPC_AnyTraversable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_NPC_AnyTraversable_C>();
	}
};
static_assert(alignof(UNavFilter_NPC_AnyTraversable_C) == 0x000008, "Wrong alignment on UNavFilter_NPC_AnyTraversable_C");
static_assert(sizeof(UNavFilter_NPC_AnyTraversable_C) == 0x000048, "Wrong size on UNavFilter_NPC_AnyTraversable_C");

}
