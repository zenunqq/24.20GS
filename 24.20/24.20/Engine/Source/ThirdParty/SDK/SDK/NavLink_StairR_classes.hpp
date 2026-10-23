#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_StairR_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_StairR_C">();
	}
	static class UNavLink_StairR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_StairR_C>();
	}
};
static_assert(alignof(UNavLink_StairR_C) == 0x000008, "Wrong alignment on UNavLink_StairR_C");
static_assert(sizeof(UNavLink_StairR_C) == 0x000080, "Wrong size on UNavLink_StairR_C");

}
