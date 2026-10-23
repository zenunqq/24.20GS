#pragma once

#include "Basic.hpp"

#include "STW_PlayerCameraModeMelee_classes.hpp"

namespace SDK
{

class USTW_PlayerCameraModeBase_C final : public USTW_PlayerCameraModeMelee_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"STW_PlayerCameraModeBase_C">();
	}
	static class USTW_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USTW_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(USTW_PlayerCameraModeBase_C) == 0x000010, "Wrong alignment on USTW_PlayerCameraModeBase_C");
static_assert(sizeof(USTW_PlayerCameraModeBase_C) == 0x001B20, "Wrong size on USTW_PlayerCameraModeBase_C");

}
