#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_RoofC_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_RoofC_C">();
	}
	static class UNavLink_RoofC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_RoofC_C>();
	}
};
static_assert(alignof(UNavLink_RoofC_C) == 0x000008, "Wrong alignment on UNavLink_RoofC_C");
static_assert(sizeof(UNavLink_RoofC_C) == 0x000080, "Wrong size on UNavLink_RoofC_C");

}
