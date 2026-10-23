#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_RoofD_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_RoofD_C">();
	}
	static class UNavLink_RoofD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_RoofD_C>();
	}
};
static_assert(alignof(UNavLink_RoofD_C) == 0x000008, "Wrong alignment on UNavLink_RoofD_C");
static_assert(sizeof(UNavLink_RoofD_C) == 0x000080, "Wrong size on UNavLink_RoofD_C");

}
