#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_RoundBoxM_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border-RoundBoxM_C">();
	}
	static class UBorder_RoundBoxM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_RoundBoxM_C>();
	}
};
static_assert(alignof(UBorder_RoundBoxM_C) == 0x000010, "Wrong alignment on UBorder_RoundBoxM_C");
static_assert(sizeof(UBorder_RoundBoxM_C) == 0x0000F0, "Wrong size on UBorder_RoundBoxM_C");

}
