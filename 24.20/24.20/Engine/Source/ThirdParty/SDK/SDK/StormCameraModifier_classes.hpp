#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UStormCameraModifier_C final : public UStormCameraModifier
{
public:
	uint8                                         Pad_48[0x8];
	struct FVector4                               Saturation;
	struct FVector4                               Contrast;

public:
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StormCameraModifier_C">();
	}
	static class UStormCameraModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStormCameraModifier_C>();
	}
};
static_assert(alignof(UStormCameraModifier_C) == 0x000010, "Wrong alignment on UStormCameraModifier_C");
static_assert(sizeof(UStormCameraModifier_C) == 0x000090, "Wrong size on UStormCameraModifier_C");
static_assert(offsetof(UStormCameraModifier_C, Saturation) == 0x000050, "Member 'UStormCameraModifier_C::Saturation' has a wrong offset!");
static_assert(offsetof(UStormCameraModifier_C, Contrast) == 0x000070, "Member 'UStormCameraModifier_C::Contrast' has a wrong offset!");

}
