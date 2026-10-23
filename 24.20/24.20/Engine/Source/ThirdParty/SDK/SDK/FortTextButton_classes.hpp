#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortTextButton_C final : public UFortTextButton
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortTextButton_C">();
	}
	static class UFortTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTextButton_C>();
	}
};
static_assert(alignof(UFortTextButton_C) == 0x000010, "Wrong alignment on UFortTextButton_C");
static_assert(sizeof(UFortTextButton_C) == 0x0014D0, "Wrong size on UFortTextButton_C");

}
