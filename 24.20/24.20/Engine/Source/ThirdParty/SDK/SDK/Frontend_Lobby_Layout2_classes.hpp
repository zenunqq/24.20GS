#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontend_Lobby_Layout2_C final : public AFortLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_Lobby_Layout2_C">();
	}
	static class AFrontend_Lobby_Layout2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_Lobby_Layout2_C>();
	}
};
static_assert(alignof(AFrontend_Lobby_Layout2_C) == 0x000008, "Wrong alignment on AFrontend_Lobby_Layout2_C");
static_assert(sizeof(AFrontend_Lobby_Layout2_C) == 0x0002A0, "Wrong size on AFrontend_Lobby_Layout2_C");

}
