#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_PlayerCameraModeBase_C">();
	}
	static class UAthena_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(UAthena_PlayerCameraModeBase_C) == 0x000010, "Wrong alignment on UAthena_PlayerCameraModeBase_C");
static_assert(sizeof(UAthena_PlayerCameraModeBase_C) == 0x001B20, "Wrong size on UAthena_PlayerCameraModeBase_C");

}
