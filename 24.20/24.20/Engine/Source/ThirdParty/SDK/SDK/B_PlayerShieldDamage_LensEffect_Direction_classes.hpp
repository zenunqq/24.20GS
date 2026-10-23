#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_PlayerShieldDamage_LensEffect_Direction_C final : public AFortEmitterCameraLensEffectDirectional
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerShieldDamage_LensEffect_Direction_C">();
	}
	static class AB_PlayerShieldDamage_LensEffect_Direction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerShieldDamage_LensEffect_Direction_C>();
	}
};
static_assert(alignof(AB_PlayerShieldDamage_LensEffect_Direction_C) == 0x000010, "Wrong alignment on AB_PlayerShieldDamage_LensEffect_Direction_C");
static_assert(sizeof(AB_PlayerShieldDamage_LensEffect_Direction_C) == 0x0003B0, "Wrong size on AB_PlayerShieldDamage_LensEffect_Direction_C");

}
