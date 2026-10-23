#pragma once

#include "Basic.hpp"

#include "Athena_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraModeSkydiveDive_C final : public UAthena_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraModeSkydiveDive_C">();
	}
	static class UAthena_PlayerCameraModeSkydiveDive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraModeSkydiveDive_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraModeSkydiveDive_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraModeSkydiveDive_C");
static_assert(sizeof(UAthena_PlayerCameraModeSkydiveDive_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraModeSkydiveDive_C");

}
