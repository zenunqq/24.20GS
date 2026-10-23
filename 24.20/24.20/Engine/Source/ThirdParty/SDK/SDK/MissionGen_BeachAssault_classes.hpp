#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_BeachAssault_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_BeachAssault_C">();
	}
	static class UMissionGen_BeachAssault_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_BeachAssault_C>();
	}
};
static_assert(alignof(UMissionGen_BeachAssault_C) == 0x000010, "Wrong alignment on UMissionGen_BeachAssault_C");
static_assert(sizeof(UMissionGen_BeachAssault_C) == 0x000850, "Wrong size on UMissionGen_BeachAssault_C");

}
