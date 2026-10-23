#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"

namespace SDK
{

class UCameraShake_Riding_BoarSprintImpact_Pawn_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShake_Riding_BoarSprintImpact_Pawn_C">();
	}
	static class UCameraShake_Riding_BoarSprintImpact_Pawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraShake_Riding_BoarSprintImpact_Pawn_C>();
	}
};
static_assert(alignof(UCameraShake_Riding_BoarSprintImpact_Pawn_C) == 0x000010, "Wrong alignment on UCameraShake_Riding_BoarSprintImpact_Pawn_C");
static_assert(sizeof(UCameraShake_Riding_BoarSprintImpact_Pawn_C) == 0x000210, "Wrong size on UCameraShake_Riding_BoarSprintImpact_Pawn_C");

}
