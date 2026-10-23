#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Papaya_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Papaya_C">();
	}
	static class UMissionGen_Papaya_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Papaya_C>();
	}
};
static_assert(alignof(UMissionGen_Papaya_C) == 0x000010, "Wrong alignment on UMissionGen_Papaya_C");
static_assert(sizeof(UMissionGen_Papaya_C) == 0x000850, "Wrong size on UMissionGen_Papaya_C");

}
