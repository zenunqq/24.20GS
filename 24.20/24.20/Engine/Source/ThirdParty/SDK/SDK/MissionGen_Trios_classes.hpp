#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Trios_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Trios_C">();
	}
	static class UMissionGen_Trios_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Trios_C>();
	}
};
static_assert(alignof(UMissionGen_Trios_C) == 0x000010, "Wrong alignment on UMissionGen_Trios_C");
static_assert(sizeof(UMissionGen_Trios_C) == 0x000850, "Wrong size on UMissionGen_Trios_C");

}
