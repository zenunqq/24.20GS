#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraFocalPoint_C final : public UFortCameraMode_FocalPoint
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraFocalPoint_C">();
	}
	static class UAthena_PlayerCameraFocalPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraFocalPoint_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraFocalPoint_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraFocalPoint_C");
static_assert(sizeof(UAthena_PlayerCameraFocalPoint_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraFocalPoint_C");

}
