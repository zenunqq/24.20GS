#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UVK_Play_MissionGen_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VK_Play_MissionGen_C">();
	}
	static class UVK_Play_MissionGen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVK_Play_MissionGen_C>();
	}
};
static_assert(alignof(UVK_Play_MissionGen_C) == 0x000010, "Wrong alignment on UVK_Play_MissionGen_C");
static_assert(sizeof(UVK_Play_MissionGen_C) == 0x000850, "Wrong size on UVK_Play_MissionGen_C");

}
