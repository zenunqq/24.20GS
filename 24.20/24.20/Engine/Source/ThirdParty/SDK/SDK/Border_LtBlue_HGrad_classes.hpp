#pragma once

#include "Basic.hpp"

#include "Border_TabM_classes.hpp"

namespace SDK
{

class UBorder_LtBlue_HGrad_C final : public UBorder_TabM_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_LtBlue_HGrad_C">();
	}
	static class UBorder_LtBlue_HGrad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_LtBlue_HGrad_C>();
	}
};
static_assert(alignof(UBorder_LtBlue_HGrad_C) == 0x000010, "Wrong alignment on UBorder_LtBlue_HGrad_C");
static_assert(sizeof(UBorder_LtBlue_HGrad_C) == 0x0000F0, "Wrong size on UBorder_LtBlue_HGrad_C");

}
