#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class UMinimalTeamDisplay_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinimalTeamDisplay_C">();
	}
	static class UMinimalTeamDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinimalTeamDisplay_C>();
	}
};
static_assert(alignof(UMinimalTeamDisplay_C) == 0x000008, "Wrong alignment on UMinimalTeamDisplay_C");
static_assert(sizeof(UMinimalTeamDisplay_C) == 0x000268, "Wrong size on UMinimalTeamDisplay_C");

}
