#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UTeamID_PvP_50_C final : public UFortTeamIdentification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamID_PvP_50_C">();
	}
	static class UTeamID_PvP_50_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamID_PvP_50_C>();
	}
};
static_assert(alignof(UTeamID_PvP_50_C) == 0x000008, "Wrong alignment on UTeamID_PvP_50_C");
static_assert(sizeof(UTeamID_PvP_50_C) == 0x000038, "Wrong size on UTeamID_PvP_50_C");

}
