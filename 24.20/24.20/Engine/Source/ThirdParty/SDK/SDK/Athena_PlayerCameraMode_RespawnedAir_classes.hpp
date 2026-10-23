#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraMode_RespawnedAir_C final : public UFortCameraMode_RespawnedAir
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraMode_RespawnedAir_C">();
	}
	static class UAthena_PlayerCameraMode_RespawnedAir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraMode_RespawnedAir_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraMode_RespawnedAir_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraMode_RespawnedAir_C");
static_assert(sizeof(UAthena_PlayerCameraMode_RespawnedAir_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraMode_RespawnedAir_C");

}
