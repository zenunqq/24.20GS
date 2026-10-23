#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_SoundIndicator_01_C final : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Long_Range;
	struct FRuntimeFloatCurve                     Chest_Falloff;
	struct FRuntimeFloatCurve                     Footsteps_Falloff;
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Mid_Range;
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Melee;
	struct FRuntimeFloatCurve                     Glider_Falloff;
	struct FRuntimeFloatCurve                     Plane_Falloff;

public:
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint);
	class UTexture* GetDefaultIcon();
	struct FLinearColor GetDefaultTint();

	struct FRuntimeFloatCurve GetStrengthCurveForActiveType() const;
	struct FRuntimeFloatCurve GetWeaponCurve() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SoundIndicator_01_C">();
	}
	static class AB_SoundIndicator_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SoundIndicator_01_C>();
	}
};
static_assert(alignof(AB_SoundIndicator_01_C) == 0x000010, "Wrong alignment on AB_SoundIndicator_01_C");
static_assert(sizeof(AB_SoundIndicator_01_C) == 0x0007F0, "Wrong size on AB_SoundIndicator_01_C");
static_assert(offsetof(AB_SoundIndicator_01_C, UberGraphFrame) == 0x000430, "Member 'AB_SoundIndicator_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Long_Range) == 0x000438, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Long_Range' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Chest_Falloff) == 0x0004C0, "Member 'AB_SoundIndicator_01_C::Chest_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Footsteps_Falloff) == 0x000548, "Member 'AB_SoundIndicator_01_C::Footsteps_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Mid_Range) == 0x0005D0, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Mid_Range' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Gunshot_Falloff_Melee) == 0x000658, "Member 'AB_SoundIndicator_01_C::Gunshot_Falloff_Melee' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Glider_Falloff) == 0x0006E0, "Member 'AB_SoundIndicator_01_C::Glider_Falloff' has a wrong offset!");
static_assert(offsetof(AB_SoundIndicator_01_C, Plane_Falloff) == 0x000768, "Member 'AB_SoundIndicator_01_C::Plane_Falloff' has a wrong offset!");

}
