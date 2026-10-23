#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UHoverboardCameraMode_C final : public UFortHoverboardCameraMode
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HoverboardCameraMode_C">();
	}
	static class UHoverboardCameraMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHoverboardCameraMode_C>();
	}
};
static_assert(alignof(UHoverboardCameraMode_C) == 0x000010, "Wrong alignment on UHoverboardCameraMode_C");
static_assert(sizeof(UHoverboardCameraMode_C) == 0x001B20, "Wrong size on UHoverboardCameraMode_C");

}
