#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Vaultbreakers_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Vaultbreakers_C">();
	}
	static class UMissionGen_Vaultbreakers_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Vaultbreakers_C>();
	}
};
static_assert(alignof(UMissionGen_Vaultbreakers_C) == 0x000010, "Wrong alignment on UMissionGen_Vaultbreakers_C");
static_assert(sizeof(UMissionGen_Vaultbreakers_C) == 0x000850, "Wrong size on UMissionGen_Vaultbreakers_C");

}
