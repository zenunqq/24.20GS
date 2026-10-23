#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_PlayerHealthDamage_CameraLensEffect_classes.hpp"

namespace SDK
{

class AB_PlayerShieldDamage_CameraLensEffect_C final : public AB_PlayerHealthDamage_CameraLensEffect_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_PlayerShieldDamage_CameraLensEffect_C;

public:
	void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32 EntryPoint);
	void PassParticle_Parameter_Shield(double NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerShieldDamage_CameraLensEffect_C">();
	}
	static class AB_PlayerShieldDamage_CameraLensEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerShieldDamage_CameraLensEffect_C>();
	}
};
static_assert(alignof(AB_PlayerShieldDamage_CameraLensEffect_C) == 0x000010, "Wrong alignment on AB_PlayerShieldDamage_CameraLensEffect_C");
static_assert(sizeof(AB_PlayerShieldDamage_CameraLensEffect_C) == 0x000380, "Wrong size on AB_PlayerShieldDamage_CameraLensEffect_C");
static_assert(offsetof(AB_PlayerShieldDamage_CameraLensEffect_C, UberGraphFrame_B_PlayerShieldDamage_CameraLensEffect_C) == 0x000378, "Member 'AB_PlayerShieldDamage_CameraLensEffect_C::UberGraphFrame_B_PlayerShieldDamage_CameraLensEffect_C' has a wrong offset!");

}
