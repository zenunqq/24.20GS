#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_BalconyI_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_BalconyI_C">();
	}
	static class UNavLink_BalconyI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_BalconyI_C>();
	}
};
static_assert(alignof(UNavLink_BalconyI_C) == 0x000008, "Wrong alignment on UNavLink_BalconyI_C");
static_assert(sizeof(UNavLink_BalconyI_C) == 0x000080, "Wrong size on UNavLink_BalconyI_C");

}
