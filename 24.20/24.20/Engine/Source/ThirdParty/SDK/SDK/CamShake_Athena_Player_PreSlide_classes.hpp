#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCamShake_Athena_Player_PreSlide_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CamShake_Athena_Player_PreSlide_C">();
	}
	static class UCamShake_Athena_Player_PreSlide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCamShake_Athena_Player_PreSlide_C>();
	}
};
static_assert(alignof(UCamShake_Athena_Player_PreSlide_C) == 0x000010, "Wrong alignment on UCamShake_Athena_Player_PreSlide_C");
static_assert(sizeof(UCamShake_Athena_Player_PreSlide_C) == 0x000210, "Wrong size on UCamShake_Athena_Player_PreSlide_C");

}
