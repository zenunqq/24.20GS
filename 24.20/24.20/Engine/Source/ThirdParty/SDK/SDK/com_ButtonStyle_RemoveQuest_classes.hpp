#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class Ucom_ButtonStyle_RemoveQuest_C final : public UCommonButtonStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"com_ButtonStyle_RemoveQuest_C">();
	}
	static class Ucom_ButtonStyle_RemoveQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ucom_ButtonStyle_RemoveQuest_C>();
	}
};
static_assert(alignof(Ucom_ButtonStyle_RemoveQuest_C) == 0x000010, "Wrong alignment on Ucom_ButtonStyle_RemoveQuest_C");
static_assert(sizeof(Ucom_ButtonStyle_RemoveQuest_C) == 0x000730, "Wrong size on Ucom_ButtonStyle_RemoveQuest_C");

}
