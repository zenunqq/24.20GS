#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class U_TextStyle_Body1_C final : public UCommonTextStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"_TextStyle_Body1_C">();
	}
	static class U_TextStyle_Body1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<U_TextStyle_Body1_C>();
	}
};
static_assert(alignof(U_TextStyle_Body1_C) == 0x000010, "Wrong alignment on U_TextStyle_Body1_C");
static_assert(sizeof(U_TextStyle_Body1_C) == 0x0001A0, "Wrong size on U_TextStyle_Body1_C");

}
