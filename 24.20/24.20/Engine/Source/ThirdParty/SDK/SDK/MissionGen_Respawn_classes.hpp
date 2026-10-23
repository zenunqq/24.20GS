#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Respawn_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Respawn_C">();
	}
	static class UMissionGen_Respawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Respawn_C>();
	}
};
static_assert(alignof(UMissionGen_Respawn_C) == 0x000010, "Wrong alignment on UMissionGen_Respawn_C");
static_assert(sizeof(UMissionGen_Respawn_C) == 0x000850, "Wrong size on UMissionGen_Respawn_C");

}
