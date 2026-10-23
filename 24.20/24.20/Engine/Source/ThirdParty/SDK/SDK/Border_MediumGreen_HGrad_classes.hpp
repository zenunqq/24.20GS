#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_MediumGreen_HGrad_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_MediumGreen_HGrad_C">();
	}
	static class UBorder_MediumGreen_HGrad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_MediumGreen_HGrad_C>();
	}
};
static_assert(alignof(UBorder_MediumGreen_HGrad_C) == 0x000010, "Wrong alignment on UBorder_MediumGreen_HGrad_C");
static_assert(sizeof(UBorder_MediumGreen_HGrad_C) == 0x0000F0, "Wrong size on UBorder_MediumGreen_HGrad_C");

}
