#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraModeRangedTargeting_C">();
	}
	static class UAthena_PlayerCameraModeRangedTargeting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraModeRangedTargeting_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraModeRangedTargeting_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraModeRangedTargeting_C");
static_assert(sizeof(UAthena_PlayerCameraModeRangedTargeting_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraModeRangedTargeting_C");

}
