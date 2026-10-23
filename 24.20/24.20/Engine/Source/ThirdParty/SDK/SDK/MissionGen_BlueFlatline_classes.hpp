#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_BlueFlatline_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_BlueFlatline_C">();
	}
	static class UMissionGen_BlueFlatline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_BlueFlatline_C>();
	}
};
static_assert(alignof(UMissionGen_BlueFlatline_C) == 0x000010, "Wrong alignment on UMissionGen_BlueFlatline_C");
static_assert(sizeof(UMissionGen_BlueFlatline_C) == 0x000850, "Wrong size on UMissionGen_BlueFlatline_C");

}
