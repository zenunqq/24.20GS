#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Lettuce_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Lettuce_C">();
	}
	static class UMissionGen_Lettuce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Lettuce_C>();
	}
};
static_assert(alignof(UMissionGen_Lettuce_C) == 0x000010, "Wrong alignment on UMissionGen_Lettuce_C");
static_assert(sizeof(UMissionGen_Lettuce_C) == 0x000850, "Wrong size on UMissionGen_Lettuce_C");

}
