#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraModeRanged_C">();
	}
	static class UAthena_PlayerCameraModeRanged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraModeRanged_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraModeRanged_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraModeRanged_C");
static_assert(sizeof(UAthena_PlayerCameraModeRanged_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraModeRanged_C");

}
