#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class URichTextLockerInputActions_C final : public URichTextBlockActionDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RichTextLockerInputActions_C">();
	}
	static class URichTextLockerInputActions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URichTextLockerInputActions_C>();
	}
};
static_assert(alignof(URichTextLockerInputActions_C) == 0x000008, "Wrong alignment on URichTextLockerInputActions_C");
static_assert(sizeof(URichTextLockerInputActions_C) == 0x000038, "Wrong size on URichTextLockerInputActions_C");

}
