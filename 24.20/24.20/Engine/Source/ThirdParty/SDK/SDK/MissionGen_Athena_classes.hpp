#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Athena_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Athena_C">();
	}
	static class UMissionGen_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Athena_C>();
	}
};
static_assert(alignof(UMissionGen_Athena_C) == 0x000010, "Wrong alignment on UMissionGen_Athena_C");
static_assert(sizeof(UMissionGen_Athena_C) == 0x000850, "Wrong size on UMissionGen_Athena_C");

}
