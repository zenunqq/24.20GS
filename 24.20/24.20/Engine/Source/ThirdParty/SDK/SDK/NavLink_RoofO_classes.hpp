#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_RoofO_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_RoofO_C">();
	}
	static class UNavLink_RoofO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_RoofO_C>();
	}
};
static_assert(alignof(UNavLink_RoofO_C) == 0x000008, "Wrong alignment on UNavLink_RoofO_C");
static_assert(sizeof(UNavLink_RoofO_C) == 0x000080, "Wrong size on UNavLink_RoofO_C");

}
