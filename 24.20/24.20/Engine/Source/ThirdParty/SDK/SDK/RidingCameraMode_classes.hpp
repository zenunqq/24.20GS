#pragma once

#include "Basic.hpp"

#include "RidingCodeRuntime_classes.hpp"

namespace SDK
{

class URidingCameraMode_C final : public UFortCameraMode_Riding
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RidingCameraMode_C">();
	}
	static class URidingCameraMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URidingCameraMode_C>();
	}
};
static_assert(alignof(URidingCameraMode_C) == 0x000010, "Wrong alignment on URidingCameraMode_C");
static_assert(sizeof(URidingCameraMode_C) == 0x001B40, "Wrong size on URidingCameraMode_C");

}
