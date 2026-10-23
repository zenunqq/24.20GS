#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_CreativeLTM_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_CreativeLTM_C">();
	}
	static class UMissionGen_CreativeLTM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_CreativeLTM_C>();
	}
};
static_assert(alignof(UMissionGen_CreativeLTM_C) == 0x000010, "Wrong alignment on UMissionGen_CreativeLTM_C");
static_assert(sizeof(UMissionGen_CreativeLTM_C) == 0x000850, "Wrong size on UMissionGen_CreativeLTM_C");

}
