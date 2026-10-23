#pragma once

#include "Basic.hpp"

#include "TextStyle_Header_M_classes.hpp"

namespace SDK
{

class UTextStyle_Header_M_S_C final : public UTextStyle_Header_M_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Header-M-S_C">();
	}
	static class UTextStyle_Header_M_S_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Header_M_S_C>();
	}
};
static_assert(alignof(UTextStyle_Header_M_S_C) == 0x000010, "Wrong alignment on UTextStyle_Header_M_S_C");
static_assert(sizeof(UTextStyle_Header_M_S_C) == 0x0001A0, "Wrong size on UTextStyle_Header_M_S_C");

}
