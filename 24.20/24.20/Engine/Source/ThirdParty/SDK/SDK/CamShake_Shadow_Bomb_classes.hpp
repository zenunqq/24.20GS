#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCamShake_Shadow_Bomb_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CamShake_Shadow_Bomb_C">();
	}
	static class UCamShake_Shadow_Bomb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCamShake_Shadow_Bomb_C>();
	}
};
static_assert(alignof(UCamShake_Shadow_Bomb_C) == 0x000010, "Wrong alignment on UCamShake_Shadow_Bomb_C");
static_assert(sizeof(UCamShake_Shadow_Bomb_C) == 0x000210, "Wrong size on UCamShake_Shadow_Bomb_C");

}
