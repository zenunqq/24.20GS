#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_FloorS_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_FloorS_C">();
	}
	static class UNavLink_FloorS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_FloorS_C>();
	}
};
static_assert(alignof(UNavLink_FloorS_C) == 0x000008, "Wrong alignment on UNavLink_FloorS_C");
static_assert(sizeof(UNavLink_FloorS_C) == 0x000080, "Wrong size on UNavLink_FloorS_C");

}
