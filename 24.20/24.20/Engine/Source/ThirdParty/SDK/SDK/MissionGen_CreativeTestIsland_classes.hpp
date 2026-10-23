#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_CreativeTestIsland_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_CreativeTestIsland_C">();
	}
	static class UMissionGen_CreativeTestIsland_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_CreativeTestIsland_C>();
	}
};
static_assert(alignof(UMissionGen_CreativeTestIsland_C) == 0x000010, "Wrong alignment on UMissionGen_CreativeTestIsland_C");
static_assert(sizeof(UMissionGen_CreativeTestIsland_C) == 0x000850, "Wrong size on UMissionGen_CreativeTestIsland_C");

}
