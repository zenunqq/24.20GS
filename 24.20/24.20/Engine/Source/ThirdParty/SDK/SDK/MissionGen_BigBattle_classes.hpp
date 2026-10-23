#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_BigBattle_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_BigBattle_C">();
	}
	static class UMissionGen_BigBattle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_BigBattle_C>();
	}
};
static_assert(alignof(UMissionGen_BigBattle_C) == 0x000010, "Wrong alignment on UMissionGen_BigBattle_C");
static_assert(sizeof(UMissionGen_BigBattle_C) == 0x000850, "Wrong size on UMissionGen_BigBattle_C");

}
