#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthenaMinimapTeamIndicators_C final : public UFortMiniMapTeamIndicators
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMinimapTeamIndicators_C">();
	}
	static class UAthenaMinimapTeamIndicators_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMinimapTeamIndicators_C>();
	}
};
static_assert(alignof(UAthenaMinimapTeamIndicators_C) == 0x000010, "Wrong alignment on UAthenaMinimapTeamIndicators_C");
static_assert(sizeof(UAthenaMinimapTeamIndicators_C) == 0x000750, "Wrong size on UAthenaMinimapTeamIndicators_C");

}
