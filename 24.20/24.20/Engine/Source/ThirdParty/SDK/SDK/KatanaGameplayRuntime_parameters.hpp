#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "KatanaGameplayRuntime_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct KatanaTargetingComponent_PerformDashTargeting final
{
public:
	struct FFortKatanaDashTargetingInfo           OutDashTargetingInfo;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(KatanaTargetingComponent_PerformDashTargeting) == 0x000008, "Wrong alignment on KatanaTargetingComponent_PerformDashTargeting");
static_assert(sizeof(KatanaTargetingComponent_PerformDashTargeting) == 0x000048, "Wrong size on KatanaTargetingComponent_PerformDashTargeting");
static_assert(offsetof(KatanaTargetingComponent_PerformDashTargeting, OutDashTargetingInfo) == 0x000000, "Member 'KatanaTargetingComponent_PerformDashTargeting::OutDashTargetingInfo' has a wrong offset!");
static_assert(offsetof(KatanaTargetingComponent_PerformDashTargeting, ReturnValue) == 0x000040, "Member 'KatanaTargetingComponent_PerformDashTargeting::ReturnValue' has a wrong offset!");

struct KatanaTargetingComponent_PerformPrimaryAttackTargeting final
{
public:
	EFortKatanaPrimaryAttackVariation             AttackVariation;
	uint8                                         Pad_1[0x7];
	struct FVector                                ReturnValue;
};
static_assert(alignof(KatanaTargetingComponent_PerformPrimaryAttackTargeting) == 0x000008, "Wrong alignment on KatanaTargetingComponent_PerformPrimaryAttackTargeting");
static_assert(sizeof(KatanaTargetingComponent_PerformPrimaryAttackTargeting) == 0x000020, "Wrong size on KatanaTargetingComponent_PerformPrimaryAttackTargeting");
static_assert(offsetof(KatanaTargetingComponent_PerformPrimaryAttackTargeting, AttackVariation) == 0x000000, "Member 'KatanaTargetingComponent_PerformPrimaryAttackTargeting::AttackVariation' has a wrong offset!");
static_assert(offsetof(KatanaTargetingComponent_PerformPrimaryAttackTargeting, ReturnValue) == 0x000008, "Member 'KatanaTargetingComponent_PerformPrimaryAttackTargeting::ReturnValue' has a wrong offset!");

struct AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce final
{
public:
	class UGameplayAbility*                       InOwningAbility;
	class FName                                   InTaskInstanceName;
	uint8                                         Pad_C[0x4];
	struct FVector                                InTargetLocation;
	float                                         InDuration;
	float                                         InHeightAboveGround;
	bool                                          bInSetNewMovementMode;
	EMovementMode                                 InMovementMode;
	bool                                          bInRestrictSpeedToExpected;
	uint8                                         Pad_33[0x5];
	class UCurveVector*                           InPathOffsetCurve;
	ERootMotionFinishVelocityMode                 InVelocityOnFinishMode;
	uint8                                         Pad_41[0x7];
	struct FVector                                InSetVelocityOnFinish;
	float                                         InClampVelocityOnFinish;
	uint8                                         Pad_64[0x4];
	class UAbilityTask_ApplyRootMotion_KatanaDashForce* ReturnValue;
};
static_assert(alignof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce) == 0x000008, "Wrong alignment on AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce");
static_assert(sizeof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce) == 0x000070, "Wrong size on AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InOwningAbility) == 0x000000, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InOwningAbility' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InTaskInstanceName) == 0x000008, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InTaskInstanceName' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InTargetLocation) == 0x000010, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InTargetLocation' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InDuration) == 0x000028, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InDuration' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InHeightAboveGround) == 0x00002C, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InHeightAboveGround' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, bInSetNewMovementMode) == 0x000030, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::bInSetNewMovementMode' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InMovementMode) == 0x000031, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InMovementMode' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, bInRestrictSpeedToExpected) == 0x000032, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::bInRestrictSpeedToExpected' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InPathOffsetCurve) == 0x000038, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InPathOffsetCurve' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InVelocityOnFinishMode) == 0x000040, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InVelocityOnFinishMode' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InSetVelocityOnFinish) == 0x000048, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InSetVelocityOnFinish' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, InClampVelocityOnFinish) == 0x000060, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::InClampVelocityOnFinish' has a wrong offset!");
static_assert(offsetof(AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce, ReturnValue) == 0x000068, "Member 'AbilityTask_ApplyRootMotion_KatanaDashForce_ApplyRootMotion_KatanaDashForce::ReturnValue' has a wrong offset!");

}
