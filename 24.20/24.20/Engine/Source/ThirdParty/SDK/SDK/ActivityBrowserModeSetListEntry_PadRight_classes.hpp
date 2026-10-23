#pragma once

#include "Basic.hpp"

#include "ActivityBrowserModeSetListEntry_classes.hpp"

namespace SDK
{

class UActivityBrowserModeSetListEntry_PadRight_C final : public UActivityBrowserModeSetListEntry_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActivityBrowserModeSetListEntry_PadRight_C">();
	}
	static class UActivityBrowserModeSetListEntry_PadRight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivityBrowserModeSetListEntry_PadRight_C>();
	}
};
static_assert(alignof(UActivityBrowserModeSetListEntry_PadRight_C) == 0x000010, "Wrong alignment on UActivityBrowserModeSetListEntry_PadRight_C");
static_assert(sizeof(UActivityBrowserModeSetListEntry_PadRight_C) == 0x001490, "Wrong size on UActivityBrowserModeSetListEntry_PadRight_C");

}
