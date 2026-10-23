#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class Uv1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v1_PlayerCameraModeBase_C">();
	}
	static class Uv1_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uv1_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(Uv1_PlayerCameraModeBase_C) == 0x000010, "Wrong alignment on Uv1_PlayerCameraModeBase_C");
static_assert(sizeof(Uv1_PlayerCameraModeBase_C) == 0x001B20, "Wrong size on Uv1_PlayerCameraModeBase_C");

}
