#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_RoofI_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_RoofI_C">();
	}
	static class UNavLink_RoofI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_RoofI_C>();
	}
};
static_assert(alignof(UNavLink_RoofI_C) == 0x000008, "Wrong alignment on UNavLink_RoofI_C");
static_assert(sizeof(UNavLink_RoofI_C) == 0x000080, "Wrong size on UNavLink_RoofI_C");

}
