#pragma once

#include "Basic.hpp"

#include "RidingCodeRuntime_classes.hpp"

namespace SDK
{

class URiding_PlayerCameraMode_TacticalSprint_C final : public UFortCameraMode_Riding
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Riding_PlayerCameraMode_TacticalSprint_C">();
	}
	static class URiding_PlayerCameraMode_TacticalSprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URiding_PlayerCameraMode_TacticalSprint_C>();
	}
};
static_assert(alignof(URiding_PlayerCameraMode_TacticalSprint_C) == 0x000010, "Wrong alignment on URiding_PlayerCameraMode_TacticalSprint_C");
static_assert(sizeof(URiding_PlayerCameraMode_TacticalSprint_C) == 0x001B40, "Wrong size on URiding_PlayerCameraMode_TacticalSprint_C");

}
