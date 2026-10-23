#pragma once

#include "Basic.hpp"

#include "Athena_ButtonStyle_AngledBlueMenuButton_classes.hpp"

namespace SDK
{

class UAthena_ButtonStyle_AngledDarkBlueMenuButton_C final : public UAthena_ButtonStyle_AngledBlueMenuButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_ButtonStyle_AngledDarkBlueMenuButton_C">();
	}
	static class UAthena_ButtonStyle_AngledDarkBlueMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_ButtonStyle_AngledDarkBlueMenuButton_C>();
	}
};
static_assert(alignof(UAthena_ButtonStyle_AngledDarkBlueMenuButton_C) == 0x000010, "Wrong alignment on UAthena_ButtonStyle_AngledDarkBlueMenuButton_C");
static_assert(sizeof(UAthena_ButtonStyle_AngledDarkBlueMenuButton_C) == 0x000730, "Wrong size on UAthena_ButtonStyle_AngledDarkBlueMenuButton_C");

}
