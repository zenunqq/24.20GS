#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_AthenaDuo_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_AthenaDuo_C">();
	}
	static class UMissionGen_AthenaDuo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_AthenaDuo_C>();
	}
};
static_assert(alignof(UMissionGen_AthenaDuo_C) == 0x000010, "Wrong alignment on UMissionGen_AthenaDuo_C");
static_assert(sizeof(UMissionGen_AthenaDuo_C) == 0x000850, "Wrong size on UMissionGen_AthenaDuo_C");

}
