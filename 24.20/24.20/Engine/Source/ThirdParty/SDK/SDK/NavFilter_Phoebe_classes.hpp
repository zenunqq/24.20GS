#pragma once

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"

namespace SDK
{

class UNavFilter_Phoebe_C final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavFilter_Phoebe_C">();
	}
	static class UNavFilter_Phoebe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_Phoebe_C>();
	}
};
static_assert(alignof(UNavFilter_Phoebe_C) == 0x000008, "Wrong alignment on UNavFilter_Phoebe_C");
static_assert(sizeof(UNavFilter_Phoebe_C) == 0x000048, "Wrong size on UNavFilter_Phoebe_C");

}
