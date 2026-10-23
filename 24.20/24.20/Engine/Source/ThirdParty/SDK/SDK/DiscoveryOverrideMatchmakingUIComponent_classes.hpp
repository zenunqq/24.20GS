#pragma once

#include "Basic.hpp"

#include "DiscoveryBrowserUI_classes.hpp"

namespace SDK
{

class UDiscoveryOverrideMatchmakingUIComponent_C final : public UOverrideMatchmakingUIComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DiscoveryOverrideMatchmakingUIComponent_C">();
	}
	static class UDiscoveryOverrideMatchmakingUIComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscoveryOverrideMatchmakingUIComponent_C>();
	}
};
static_assert(alignof(UDiscoveryOverrideMatchmakingUIComponent_C) == 0x000008, "Wrong alignment on UDiscoveryOverrideMatchmakingUIComponent_C");
static_assert(sizeof(UDiscoveryOverrideMatchmakingUIComponent_C) == 0x000118, "Wrong size on UDiscoveryOverrideMatchmakingUIComponent_C");

}
