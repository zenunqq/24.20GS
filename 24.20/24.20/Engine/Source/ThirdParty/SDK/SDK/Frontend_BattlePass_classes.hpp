#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontend_BattlePass_C final : public AFortLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_BattlePass_C">();
	}
	static class AFrontend_BattlePass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_BattlePass_C>();
	}
};
static_assert(alignof(AFrontend_BattlePass_C) == 0x000008, "Wrong alignment on AFrontend_BattlePass_C");
static_assert(sizeof(AFrontend_BattlePass_C) == 0x0002A0, "Wrong size on AFrontend_BattlePass_C");

}
