#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UVK_Edit_MissionGen_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VK_Edit_MissionGen_C">();
	}
	static class UVK_Edit_MissionGen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVK_Edit_MissionGen_C>();
	}
};
static_assert(alignof(UVK_Edit_MissionGen_C) == 0x000010, "Wrong alignment on UVK_Edit_MissionGen_C");
static_assert(sizeof(UVK_Edit_MissionGen_C) == 0x000850, "Wrong size on UVK_Edit_MissionGen_C");

}
