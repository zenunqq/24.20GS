#pragma once

#include "Basic.hpp"

#include "TextStyle_BaseParent_classes.hpp"

namespace SDK
{

class USidebar_TextStyle_BurbSmBk_15_DarkGray_C final : public UTextStyle_BaseParent_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sidebar_TextStyle_BurbSmBk_15_DarkGray_C">();
	}
	static class USidebar_TextStyle_BurbSmBk_15_DarkGray_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebar_TextStyle_BurbSmBk_15_DarkGray_C>();
	}
};
static_assert(alignof(USidebar_TextStyle_BurbSmBk_15_DarkGray_C) == 0x000010, "Wrong alignment on USidebar_TextStyle_BurbSmBk_15_DarkGray_C");
static_assert(sizeof(USidebar_TextStyle_BurbSmBk_15_DarkGray_C) == 0x0001A0, "Wrong size on USidebar_TextStyle_BurbSmBk_15_DarkGray_C");

}
