#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNavLink_StairF_C final : public UFortNavLinkDefinition
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_StairF_C">();
	}
	static class UNavLink_StairF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_StairF_C>();
	}
};
static_assert(alignof(UNavLink_StairF_C) == 0x000008, "Wrong alignment on UNavLink_StairF_C");
static_assert(sizeof(UNavLink_StairF_C) == 0x000080, "Wrong size on UNavLink_StairF_C");

}
