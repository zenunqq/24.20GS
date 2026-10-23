#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class Uv2_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v2_PlayerCameraModeBase_C">();
	}
	static class Uv2_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uv2_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(Uv2_PlayerCameraModeBase_C) == 0x000010, "Wrong alignment on Uv2_PlayerCameraModeBase_C");
static_assert(sizeof(Uv2_PlayerCameraModeBase_C) == 0x001B20, "Wrong size on Uv2_PlayerCameraModeBase_C");

}
