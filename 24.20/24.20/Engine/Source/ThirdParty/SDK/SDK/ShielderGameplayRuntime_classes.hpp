#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UShielderCollisionHelperComponent final : public UGameFrameworkComponent
{
public:
	class ABuildingGameplayActor*                 ShielderBGA;
	struct FVector                                StaticOffset;
	struct FVector                                AimOffset;
	struct FVector                                AimOffset2D;
	float                                         PitchMultiplier;
	float                                         PitchMin;
	float                                         PitchMax;
	uint8                                         Pad_FC[0x4];
	struct FScalableFloat                         ShouldUpdateShielderSkelMesh;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ShielderCollisionHelperComponent">();
	}
	static class UShielderCollisionHelperComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShielderCollisionHelperComponent>();
	}
};
static_assert(alignof(UShielderCollisionHelperComponent) == 0x000008, "Wrong alignment on UShielderCollisionHelperComponent");
static_assert(sizeof(UShielderCollisionHelperComponent) == 0x000128, "Wrong size on UShielderCollisionHelperComponent");
static_assert(offsetof(UShielderCollisionHelperComponent, ShielderBGA) == 0x0000A0, "Member 'UShielderCollisionHelperComponent::ShielderBGA' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, StaticOffset) == 0x0000A8, "Member 'UShielderCollisionHelperComponent::StaticOffset' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, AimOffset) == 0x0000C0, "Member 'UShielderCollisionHelperComponent::AimOffset' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, AimOffset2D) == 0x0000D8, "Member 'UShielderCollisionHelperComponent::AimOffset2D' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, PitchMultiplier) == 0x0000F0, "Member 'UShielderCollisionHelperComponent::PitchMultiplier' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, PitchMin) == 0x0000F4, "Member 'UShielderCollisionHelperComponent::PitchMin' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, PitchMax) == 0x0000F8, "Member 'UShielderCollisionHelperComponent::PitchMax' has a wrong offset!");
static_assert(offsetof(UShielderCollisionHelperComponent, ShouldUpdateShielderSkelMesh) == 0x000100, "Member 'UShielderCollisionHelperComponent::ShouldUpdateShielderSkelMesh' has a wrong offset!");

}
