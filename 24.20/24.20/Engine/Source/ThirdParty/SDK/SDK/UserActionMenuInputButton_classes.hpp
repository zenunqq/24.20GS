#pragma once

#include "Basic.hpp"

#include "CommonUILegacy_classes.hpp"

namespace SDK
{

class UUserActionMenuInputButton_C final : public UCommonButtonLegacy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserActionMenuInputButton_C">();
	}
	static class UUserActionMenuInputButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserActionMenuInputButton_C>();
	}
};
static_assert(alignof(UUserActionMenuInputButton_C) == 0x000010, "Wrong alignment on UUserActionMenuInputButton_C");
static_assert(sizeof(UUserActionMenuInputButton_C) == 0x001430, "Wrong size on UUserActionMenuInputButton_C");

}
