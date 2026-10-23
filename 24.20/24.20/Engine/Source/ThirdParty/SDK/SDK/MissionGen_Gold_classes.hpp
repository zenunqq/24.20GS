#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Gold_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Gold_C">();
	}
	static class UMissionGen_Gold_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Gold_C>();
	}
};
static_assert(alignof(UMissionGen_Gold_C) == 0x000010, "Wrong alignment on UMissionGen_Gold_C");
static_assert(sizeof(UMissionGen_Gold_C) == 0x000850, "Wrong size on UMissionGen_Gold_C");

}
