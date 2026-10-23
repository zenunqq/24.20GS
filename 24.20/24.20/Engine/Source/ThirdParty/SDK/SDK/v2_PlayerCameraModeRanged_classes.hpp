#pragma once

#include "Basic.hpp"

#include "v2_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class Uv2_PlayerCameraModeRanged_C : public Uv2_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v2_PlayerCameraModeRanged_C">();
	}
	static class Uv2_PlayerCameraModeRanged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uv2_PlayerCameraModeRanged_C>();
	}
};
static_assert(alignof(Uv2_PlayerCameraModeRanged_C) == 0x000010, "Wrong alignment on Uv2_PlayerCameraModeRanged_C");
static_assert(sizeof(Uv2_PlayerCameraModeRanged_C) == 0x001B20, "Wrong size on Uv2_PlayerCameraModeRanged_C");

}
