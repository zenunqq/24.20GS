#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EFortKatanaPrimaryAttackVariation : uint8
{
	OnGroundFirst                            = 0,
	OnGroundSecond                           = 1,
	InAir                                    = 2,
	EFortKatanaPrimaryAttackVariation_MAX    = 3,
};

struct FFortKatanaPrimaryAttackVariationInfo final
{
public:
	struct FScalableFloat                         Range;
	struct FScalableFloat                         OffsetFromTarget;
	struct FFortAbilityTargetSelectionList        TargetSelectionList;
};
static_assert(alignof(FFortKatanaPrimaryAttackVariationInfo) == 0x000008, "Wrong alignment on FFortKatanaPrimaryAttackVariationInfo");
static_assert(sizeof(FFortKatanaPrimaryAttackVariationInfo) == 0x000098, "Wrong size on FFortKatanaPrimaryAttackVariationInfo");
static_assert(offsetof(FFortKatanaPrimaryAttackVariationInfo, Range) == 0x000000, "Member 'FFortKatanaPrimaryAttackVariationInfo::Range' has a wrong offset!");
static_assert(offsetof(FFortKatanaPrimaryAttackVariationInfo, OffsetFromTarget) == 0x000028, "Member 'FFortKatanaPrimaryAttackVariationInfo::OffsetFromTarget' has a wrong offset!");
static_assert(offsetof(FFortKatanaPrimaryAttackVariationInfo, TargetSelectionList) == 0x000050, "Member 'FFortKatanaPrimaryAttackVariationInfo::TargetSelectionList' has a wrong offset!");

struct FFortKatanaDashTargetingInfo final
{
public:
	struct FVector                                DashDirection;
	float                                         DashDistance;
	TWeakObjectPtr<class AActor>                  DashBlockingActor;
	bool                                          bWasDashDirectionAdjusted;
	uint8                                         Pad_25[0x3];
	TArray<class AActor*>                         DamagedActors;
	float                                         OutOfRangePercent;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FFortKatanaDashTargetingInfo) == 0x000008, "Wrong alignment on FFortKatanaDashTargetingInfo");
static_assert(sizeof(FFortKatanaDashTargetingInfo) == 0x000040, "Wrong size on FFortKatanaDashTargetingInfo");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DashDirection) == 0x000000, "Member 'FFortKatanaDashTargetingInfo::DashDirection' has a wrong offset!");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DashDistance) == 0x000018, "Member 'FFortKatanaDashTargetingInfo::DashDistance' has a wrong offset!");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DashBlockingActor) == 0x00001C, "Member 'FFortKatanaDashTargetingInfo::DashBlockingActor' has a wrong offset!");
static_assert(offsetof(FFortKatanaDashTargetingInfo, bWasDashDirectionAdjusted) == 0x000024, "Member 'FFortKatanaDashTargetingInfo::bWasDashDirectionAdjusted' has a wrong offset!");
static_assert(offsetof(FFortKatanaDashTargetingInfo, DamagedActors) == 0x000028, "Member 'FFortKatanaDashTargetingInfo::DamagedActors' has a wrong offset!");
static_assert(offsetof(FFortKatanaDashTargetingInfo, OutOfRangePercent) == 0x000038, "Member 'FFortKatanaDashTargetingInfo::OutOfRangePercent' has a wrong offset!");

struct FRootMotionSource_KatanaDashForce final : public FRootMotionSource_MoveToForce
{
public:
	float                                         HeightAboveGround;
	uint8                                         Pad_11C[0x4];
};
static_assert(alignof(FRootMotionSource_KatanaDashForce) == 0x000010, "Wrong alignment on FRootMotionSource_KatanaDashForce");
static_assert(sizeof(FRootMotionSource_KatanaDashForce) == 0x000120, "Wrong size on FRootMotionSource_KatanaDashForce");
static_assert(offsetof(FRootMotionSource_KatanaDashForce, HeightAboveGround) == 0x000118, "Member 'FRootMotionSource_KatanaDashForce::HeightAboveGround' has a wrong offset!");

}
