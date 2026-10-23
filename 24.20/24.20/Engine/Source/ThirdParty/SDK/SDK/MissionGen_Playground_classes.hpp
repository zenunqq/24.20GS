#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Playground_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Playground_C">();
	}
	static class UMissionGen_Playground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Playground_C>();
	}
};
static_assert(alignof(UMissionGen_Playground_C) == 0x000010, "Wrong alignment on UMissionGen_Playground_C");
static_assert(sizeof(UMissionGen_Playground_C) == 0x000850, "Wrong size on UMissionGen_Playground_C");

}
