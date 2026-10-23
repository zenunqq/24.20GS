#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAccountLinkingWindow_C final : public UFortAccountLinkingWindow
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccountLinkingWindow_C">();
	}
	static class UAccountLinkingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccountLinkingWindow_C>();
	}
};
static_assert(alignof(UAccountLinkingWindow_C) == 0x000008, "Wrong alignment on UAccountLinkingWindow_C");
static_assert(sizeof(UAccountLinkingWindow_C) == 0x0005E0, "Wrong size on UAccountLinkingWindow_C");

}
