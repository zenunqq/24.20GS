#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_BalconyS_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_BalconyS_C">();
	}
	static class UNavLink_BalconyS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_BalconyS_C>();
	}
};
static_assert(alignof(UNavLink_BalconyS_C) == 0x000008, "Wrong alignment on UNavLink_BalconyS_C");
static_assert(sizeof(UNavLink_BalconyS_C) == 0x000080, "Wrong size on UNavLink_BalconyS_C");

}
