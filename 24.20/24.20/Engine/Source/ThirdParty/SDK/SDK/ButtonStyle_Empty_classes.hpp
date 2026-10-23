#pragma once

#include "Basic.hpp"

#include "ButtonStyle_Base_classes.hpp"

namespace SDK
{

class ButtonStyle_Empty::UButtonStyle_Empty_C final : public UButtonStyle_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass ButtonStyle-Empty.ButtonStyle-Empty_C", true, "ButtonStyle-Empty_C">();
	}
	static class ButtonStyle_Empty::UButtonStyle_Empty_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ButtonStyle_Empty::UButtonStyle_Empty_C>();
	}
};
static_assert(alignof(ButtonStyle_Empty::UButtonStyle_Empty_C) == 0x000010, "Wrong alignment on ButtonStyle_Empty::UButtonStyle_Empty_C");
static_assert(sizeof(ButtonStyle_Empty::UButtonStyle_Empty_C) == 0x000730, "Wrong size on ButtonStyle_Empty::UButtonStyle_Empty_C");

}
