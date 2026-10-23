#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class U_BorderStyle_Modal_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"_BorderStyle_Modal_C">();
	}
	static class U_BorderStyle_Modal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<U_BorderStyle_Modal_C>();
	}
};
static_assert(alignof(U_BorderStyle_Modal_C) == 0x000010, "Wrong alignment on U_BorderStyle_Modal_C");
static_assert(sizeof(U_BorderStyle_Modal_C) == 0x0000F0, "Wrong size on U_BorderStyle_Modal_C");

}
