#pragma once

#include "Basic.hpp"

#include "VictoryCrownsRuntime_classes.hpp"

namespace SDK
{

class UVictoryCrownGameStateComponent_C final : public UFortGameStateComponent_VictoryCrowns
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VictoryCrownGameStateComponent_C">();
	}
	static class UVictoryCrownGameStateComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVictoryCrownGameStateComponent_C>();
	}
};
static_assert(alignof(UVictoryCrownGameStateComponent_C) == 0x000008, "Wrong alignment on UVictoryCrownGameStateComponent_C");
static_assert(sizeof(UVictoryCrownGameStateComponent_C) == 0x0000F8, "Wrong size on UVictoryCrownGameStateComponent_C");

}
