#pragma once

#include "Basic.hpp"

#include "v3_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class UPlayerCameraMode_DBNO_C final : public Uv3_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerCameraMode_DBNO_C">();
	}
	static class UPlayerCameraMode_DBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerCameraMode_DBNO_C>();
	}
};
static_assert(alignof(UPlayerCameraMode_DBNO_C) == 0x000010, "Wrong alignment on UPlayerCameraMode_DBNO_C");
static_assert(sizeof(UPlayerCameraMode_DBNO_C) == 0x001B20, "Wrong size on UPlayerCameraMode_DBNO_C");

}
