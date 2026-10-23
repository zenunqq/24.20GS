#pragma once

#include "Basic.hpp"

#include "Border_TabM_classes.hpp"

namespace SDK
{

class UBorder_TabM_Solid_C : public UBorder_TabM_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-TabM-Solid_C">();
	}
	static class UBorder_TabM_Solid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_TabM_Solid_C>();
	}
};
static_assert(alignof(UBorder_TabM_Solid_C) == 0x000010, "Wrong alignment on UBorder_TabM_Solid_C");
static_assert(sizeof(UBorder_TabM_Solid_C) == 0x0000F0, "Wrong size on UBorder_TabM_Solid_C");

}
