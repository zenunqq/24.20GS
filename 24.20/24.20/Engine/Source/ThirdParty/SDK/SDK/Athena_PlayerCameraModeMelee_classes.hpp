#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraModeMelee_C">();
	}
	static class UAthena_PlayerCameraModeMelee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraModeMelee_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraModeMelee_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraModeMelee_C");
static_assert(sizeof(UAthena_PlayerCameraModeMelee_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraModeMelee_C");

}
