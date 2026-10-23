#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDiscoveryGenericLobbyViolator_C final : public UAthenaMatchmakingViolator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DiscoveryGenericLobbyViolator_C">();
	}
	static class UDiscoveryGenericLobbyViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscoveryGenericLobbyViolator_C>();
	}
};
static_assert(alignof(UDiscoveryGenericLobbyViolator_C) == 0x000008, "Wrong alignment on UDiscoveryGenericLobbyViolator_C");
static_assert(sizeof(UDiscoveryGenericLobbyViolator_C) == 0x0002F8, "Wrong size on UDiscoveryGenericLobbyViolator_C");

}
