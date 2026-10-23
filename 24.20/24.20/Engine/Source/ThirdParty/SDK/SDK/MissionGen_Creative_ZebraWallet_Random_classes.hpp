#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_Creative_ZebraWallet_Random_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Creative_ZebraWallet_Random_C">();
	}
	static class UMissionGen_Creative_ZebraWallet_Random_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Creative_ZebraWallet_Random_C>();
	}
};
static_assert(alignof(UMissionGen_Creative_ZebraWallet_Random_C) == 0x000010, "Wrong alignment on UMissionGen_Creative_ZebraWallet_Random_C");
static_assert(sizeof(UMissionGen_Creative_ZebraWallet_Random_C) == 0x000850, "Wrong size on UMissionGen_Creative_ZebraWallet_Random_C");

}
