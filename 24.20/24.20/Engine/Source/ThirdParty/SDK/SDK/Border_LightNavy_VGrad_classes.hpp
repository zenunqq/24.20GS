#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_LightNavy_VGrad_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_LightNavy_VGrad_C">();
	}
	static class UBorder_LightNavy_VGrad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_LightNavy_VGrad_C>();
	}
};
static_assert(alignof(UBorder_LightNavy_VGrad_C) == 0x000010, "Wrong alignment on UBorder_LightNavy_VGrad_C");
static_assert(sizeof(UBorder_LightNavy_VGrad_C) == 0x0000F0, "Wrong size on UBorder_LightNavy_VGrad_C");

}
