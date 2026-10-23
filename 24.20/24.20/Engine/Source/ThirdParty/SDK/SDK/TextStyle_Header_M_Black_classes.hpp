#pragma once

#include "Basic.hpp"

#include "TextStyle_HeaderParent_classes.hpp"

namespace SDK
{

class UTextStyle_Header_M_Black_C final : public UTextStyle_HeaderParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextStyle-Header-M_Black_C">();
	}
	static class UTextStyle_Header_M_Black_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextStyle_Header_M_Black_C>();
	}
};
static_assert(alignof(UTextStyle_Header_M_Black_C) == 0x000010, "Wrong alignment on UTextStyle_Header_M_Black_C");
static_assert(sizeof(UTextStyle_Header_M_Black_C) == 0x0001A0, "Wrong size on UTextStyle_Header_M_Black_C");

}
