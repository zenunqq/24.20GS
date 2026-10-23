#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_RoofS_C : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_RoofS_C">();
	}
	static class UNavLink_RoofS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_RoofS_C>();
	}
};
static_assert(alignof(UNavLink_RoofS_C) == 0x000008, "Wrong alignment on UNavLink_RoofS_C");
static_assert(sizeof(UNavLink_RoofS_C) == 0x000080, "Wrong size on UNavLink_RoofS_C");

}
