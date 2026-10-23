#pragma once

#include "Basic.hpp"

#include "v1_PlayerCameraModeBase_classes.hpp"

namespace SDK
{

class Uv1_PlayerCameraModeTargetingScope_C final : public Uv1_PlayerCameraModeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v1_PlayerCameraModeTargetingScope_C">();
	}
	static class Uv1_PlayerCameraModeTargetingScope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Uv1_PlayerCameraModeTargetingScope_C>();
	}
};
static_assert(alignof(Uv1_PlayerCameraModeTargetingScope_C) == 0x000010, "Wrong alignment on Uv1_PlayerCameraModeTargetingScope_C");
static_assert(sizeof(Uv1_PlayerCameraModeTargetingScope_C) == 0x001B20, "Wrong size on Uv1_PlayerCameraModeTargetingScope_C");

}
