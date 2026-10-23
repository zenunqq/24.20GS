#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaGenericLobbyViolator_C final : public UAthenaMatchmakingViolator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaGenericLobbyViolator_C">();
	}
	static class UAthenaGenericLobbyViolator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGenericLobbyViolator_C>();
	}
};
static_assert(alignof(UAthenaGenericLobbyViolator_C) == 0x000008, "Wrong alignment on UAthenaGenericLobbyViolator_C");
static_assert(sizeof(UAthenaGenericLobbyViolator_C) == 0x0002F8, "Wrong size on UAthenaGenericLobbyViolator_C");

}
