#pragma once

#include "Basic.hpp"

#include "NavLink_RoofS_classes.hpp"

namespace SDK
{

class UNavLink_StairW_C final : public UNavLink_RoofS_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NavLink_StairW_C">();
	}
	static class UNavLink_StairW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLink_StairW_C>();
	}
};
static_assert(alignof(UNavLink_StairW_C) == 0x000008, "Wrong alignment on UNavLink_StairW_C");
static_assert(sizeof(UNavLink_StairW_C) == 0x000080, "Wrong size on UNavLink_StairW_C");

}
