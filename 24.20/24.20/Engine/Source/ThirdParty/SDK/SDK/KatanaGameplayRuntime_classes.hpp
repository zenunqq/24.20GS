#pragma once

#include "Basic.hpp"

#include "KatanaGameplayRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"
#include "MantisRuntime_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UFortKatanaLayerAnimInstance final : public UFortMantisLayerAnimInstance
{
public:
	bool                                          IsDashCharge;
	uint8                                         Pad_15B1[0x7];
	class AFortPlayerPawn*                        AsFortPlayerPawn;
	bool                                          IsBMeleeKatana;
	uint8                                         Pad_15C1[0x3];
	float                                         HandIKHipAttachAlpha;
	struct FVector                                LeftAttachedHandIKLoc;
	struct FRotator                               LeftAttachedhandIKRot;
	struct FVector                                RightWeaponLoc;
	struct FRotator                               RightWeaponRot;
	struct FVector                                LeftAttachedHandIKLocOffsetMED;
	struct FRotator                               LeftAttachedHandIKRotOffset;
	struct FVector                                RightWeaponLocOffsetMED;
	struct FRotator                               RightWeaponRotOffset;
	float                                         LocalLeftHandIKAlpha;
	float                                         LocalRightHandIKAlpha;
	bool                                          IsDashAttack;
	bool                                          IsDashOutro;
	uint8                                         Pad_1692[0x2];
	float                                         PelvisAOAlpha;
	float                                         ClampedAimPitch;
	bool                                          EarlyExitFromDashOutro;
	bool                                          IsTechniqueActive;
	bool                                          IsPrimaryAttack;
	uint8                                         Pad_169F[0x1];
	float                                         WeaponHipAttachAlpha;
	uint8                                         Pad_16A4[0x4];
	struct FVector                                LeftAttachedHandIKLocOffsetLRG;
	struct FVector                                RightWeaponLocOffsetLRG;
	float                                         FeetCorrectionAlpha;
	bool                                          IsInAirAttackLeap;
	bool                                          ShouldStartDashOutro;
	bool                                          StartedDashOutro;
	uint8                                         Pad_16DF[0x1];
	struct FScalableFloat                         DashRootMotionDuration;
	bool                                          IsPrimaryAttack2;
	bool                                          IsAirAttackSlam;
	bool                                          TransitionRuleToDefault;
	bool                                          IsGrindRailSwing;
	float                                         DashChargePlayRate;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortKatanaLayerAnimInstance">();
	}
	static class UFortKatanaLayerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortKatanaLayerAnimInstance>();
	}
};
static_assert(alignof(UFortKatanaLayerAnimInstance) == 0x000010, "Wrong alignment on UFortKatanaLayerAnimInstance");
static_assert(sizeof(UFortKatanaLayerAnimInstance) == 0x001710, "Wrong size on UFortKatanaLayerAnimInstance");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsDashCharge) == 0x0015B0, "Member 'UFortKatanaLayerAnimInstance::IsDashCharge' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, AsFortPlayerPawn) == 0x0015B8, "Member 'UFortKatanaLayerAnimInstance::AsFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsBMeleeKatana) == 0x0015C0, "Member 'UFortKatanaLayerAnimInstance::IsBMeleeKatana' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, HandIKHipAttachAlpha) == 0x0015C4, "Member 'UFortKatanaLayerAnimInstance::HandIKHipAttachAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKLoc) == 0x0015C8, "Member 'UFortKatanaLayerAnimInstance::LeftAttachedHandIKLoc' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedhandIKRot) == 0x0015E0, "Member 'UFortKatanaLayerAnimInstance::LeftAttachedhandIKRot' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponLoc) == 0x0015F8, "Member 'UFortKatanaLayerAnimInstance::RightWeaponLoc' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponRot) == 0x001610, "Member 'UFortKatanaLayerAnimInstance::RightWeaponRot' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKLocOffsetMED) == 0x001628, "Member 'UFortKatanaLayerAnimInstance::LeftAttachedHandIKLocOffsetMED' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKRotOffset) == 0x001640, "Member 'UFortKatanaLayerAnimInstance::LeftAttachedHandIKRotOffset' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponLocOffsetMED) == 0x001658, "Member 'UFortKatanaLayerAnimInstance::RightWeaponLocOffsetMED' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponRotOffset) == 0x001670, "Member 'UFortKatanaLayerAnimInstance::RightWeaponRotOffset' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LocalLeftHandIKAlpha) == 0x001688, "Member 'UFortKatanaLayerAnimInstance::LocalLeftHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LocalRightHandIKAlpha) == 0x00168C, "Member 'UFortKatanaLayerAnimInstance::LocalRightHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsDashAttack) == 0x001690, "Member 'UFortKatanaLayerAnimInstance::IsDashAttack' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsDashOutro) == 0x001691, "Member 'UFortKatanaLayerAnimInstance::IsDashOutro' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, PelvisAOAlpha) == 0x001694, "Member 'UFortKatanaLayerAnimInstance::PelvisAOAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, ClampedAimPitch) == 0x001698, "Member 'UFortKatanaLayerAnimInstance::ClampedAimPitch' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, EarlyExitFromDashOutro) == 0x00169C, "Member 'UFortKatanaLayerAnimInstance::EarlyExitFromDashOutro' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsTechniqueActive) == 0x00169D, "Member 'UFortKatanaLayerAnimInstance::IsTechniqueActive' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsPrimaryAttack) == 0x00169E, "Member 'UFortKatanaLayerAnimInstance::IsPrimaryAttack' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, WeaponHipAttachAlpha) == 0x0016A0, "Member 'UFortKatanaLayerAnimInstance::WeaponHipAttachAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, LeftAttachedHandIKLocOffsetLRG) == 0x0016A8, "Member 'UFortKatanaLayerAnimInstance::LeftAttachedHandIKLocOffsetLRG' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, RightWeaponLocOffsetLRG) == 0x0016C0, "Member 'UFortKatanaLayerAnimInstance::RightWeaponLocOffsetLRG' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, FeetCorrectionAlpha) == 0x0016D8, "Member 'UFortKatanaLayerAnimInstance::FeetCorrectionAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsInAirAttackLeap) == 0x0016DC, "Member 'UFortKatanaLayerAnimInstance::IsInAirAttackLeap' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, ShouldStartDashOutro) == 0x0016DD, "Member 'UFortKatanaLayerAnimInstance::ShouldStartDashOutro' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, StartedDashOutro) == 0x0016DE, "Member 'UFortKatanaLayerAnimInstance::StartedDashOutro' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, DashRootMotionDuration) == 0x0016E0, "Member 'UFortKatanaLayerAnimInstance::DashRootMotionDuration' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsPrimaryAttack2) == 0x001708, "Member 'UFortKatanaLayerAnimInstance::IsPrimaryAttack2' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsAirAttackSlam) == 0x001709, "Member 'UFortKatanaLayerAnimInstance::IsAirAttackSlam' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, TransitionRuleToDefault) == 0x00170A, "Member 'UFortKatanaLayerAnimInstance::TransitionRuleToDefault' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, IsGrindRailSwing) == 0x00170B, "Member 'UFortKatanaLayerAnimInstance::IsGrindRailSwing' has a wrong offset!");
static_assert(offsetof(UFortKatanaLayerAnimInstance, DashChargePlayRate) == 0x00170C, "Member 'UFortKatanaLayerAnimInstance::DashChargePlayRate' has a wrong offset!");

class UFortKatanaWeaponAnimInstance final : public UFortMantisLayerAnimInstance
{
public:
	class AFortPlayerPawn*                        AsFortPlayerPawn;
	class AFortWeapon*                            BMeleeKatanaAsWeapon;
	bool                                          IsBMeleeKatana;
	uint8                                         Pad_15C1[0x3];
	float                                         LocalLeftHandIKAlpha;
	float                                         LocalRightHandIKAlpha;
	bool                                          IsDashCharge;
	bool                                          IsDashAttack;
	uint8                                         Pad_15CE[0x2];
	float                                         SwordPlayRate;
	bool                                          IsInAirAttack_Leap;
	bool                                          IsInAirAttack_Slam;
	uint8                                         Pad_15D6[0x2];
	class UFortKatanaLayerAnimInstance*           KatanaPlayer;
	bool                                          EarlyExitFromDashOutro;
	bool                                          IsDashOutro;
	uint8                                         Pad_15E2[0x6];
	struct FVector                                ScabbardLoc;
	struct FRotator                               ScabbardRot;
	struct FVector                                ScabbardLocOffset;
	struct FRotator                               ScabbardRotOffset;
	bool                                          IsSurfaceSwimming;
	bool                                          IsTechniqueActive;
	uint8                                         Pad_164A[0x6];
	struct FVector                                SwordLoc;
	struct FRotator                               SwordRot;
	struct FVector                                SwordLocOffset;
	struct FRotator                               SwordRotOffset;
	bool                                          IsRidingSwing;
	bool                                          IsPrimaryAttack;
	bool                                          IsPrimaryAttack2;
	bool                                          ExitFromPrimaryAttack;
	bool                                          ExitFromPrimaryAttack2;
	bool                                          NonPrimaryAttackState;
	bool                                          IsComboAttack;
	bool                                          TransitionRuleToDefaultPose;
	bool                                          ExitFromInAirLand;
	bool                                          IsGrindRailSwing;
	uint8                                         Pad_16BA[0x2];
	int32                                         CurrentTechniqueBranch;
	int32                                         PreviousTechniqueBranch;
	class FName                                   PelvisSocket;
	struct FVector                                ScabbardLocOffsetVeh;
	struct FRotator                               ScabbardRotOffsetVeh;
	float                                         DashChargePlayRate;
	uint8                                         Pad_16FC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortKatanaWeaponAnimInstance">();
	}
	static class UFortKatanaWeaponAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortKatanaWeaponAnimInstance>();
	}
};
static_assert(alignof(UFortKatanaWeaponAnimInstance) == 0x000010, "Wrong alignment on UFortKatanaWeaponAnimInstance");
static_assert(sizeof(UFortKatanaWeaponAnimInstance) == 0x001700, "Wrong size on UFortKatanaWeaponAnimInstance");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, AsFortPlayerPawn) == 0x0015B0, "Member 'UFortKatanaWeaponAnimInstance::AsFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, BMeleeKatanaAsWeapon) == 0x0015B8, "Member 'UFortKatanaWeaponAnimInstance::BMeleeKatanaAsWeapon' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsBMeleeKatana) == 0x0015C0, "Member 'UFortKatanaWeaponAnimInstance::IsBMeleeKatana' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, LocalLeftHandIKAlpha) == 0x0015C4, "Member 'UFortKatanaWeaponAnimInstance::LocalLeftHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, LocalRightHandIKAlpha) == 0x0015C8, "Member 'UFortKatanaWeaponAnimInstance::LocalRightHandIKAlpha' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsDashCharge) == 0x0015CC, "Member 'UFortKatanaWeaponAnimInstance::IsDashCharge' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsDashAttack) == 0x0015CD, "Member 'UFortKatanaWeaponAnimInstance::IsDashAttack' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordPlayRate) == 0x0015D0, "Member 'UFortKatanaWeaponAnimInstance::SwordPlayRate' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsInAirAttack_Leap) == 0x0015D4, "Member 'UFortKatanaWeaponAnimInstance::IsInAirAttack_Leap' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsInAirAttack_Slam) == 0x0015D5, "Member 'UFortKatanaWeaponAnimInstance::IsInAirAttack_Slam' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, KatanaPlayer) == 0x0015D8, "Member 'UFortKatanaWeaponAnimInstance::KatanaPlayer' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, EarlyExitFromDashOutro) == 0x0015E0, "Member 'UFortKatanaWeaponAnimInstance::EarlyExitFromDashOutro' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsDashOutro) == 0x0015E1, "Member 'UFortKatanaWeaponAnimInstance::IsDashOutro' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardLoc) == 0x0015E8, "Member 'UFortKatanaWeaponAnimInstance::ScabbardLoc' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardRot) == 0x001600, "Member 'UFortKatanaWeaponAnimInstance::ScabbardRot' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardLocOffset) == 0x001618, "Member 'UFortKatanaWeaponAnimInstance::ScabbardLocOffset' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardRotOffset) == 0x001630, "Member 'UFortKatanaWeaponAnimInstance::ScabbardRotOffset' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsSurfaceSwimming) == 0x001648, "Member 'UFortKatanaWeaponAnimInstance::IsSurfaceSwimming' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsTechniqueActive) == 0x001649, "Member 'UFortKatanaWeaponAnimInstance::IsTechniqueActive' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordLoc) == 0x001650, "Member 'UFortKatanaWeaponAnimInstance::SwordLoc' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordRot) == 0x001668, "Member 'UFortKatanaWeaponAnimInstance::SwordRot' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordLocOffset) == 0x001680, "Member 'UFortKatanaWeaponAnimInstance::SwordLocOffset' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, SwordRotOffset) == 0x001698, "Member 'UFortKatanaWeaponAnimInstance::SwordRotOffset' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsRidingSwing) == 0x0016B0, "Member 'UFortKatanaWeaponAnimInstance::IsRidingSwing' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsPrimaryAttack) == 0x0016B1, "Member 'UFortKatanaWeaponAnimInstance::IsPrimaryAttack' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsPrimaryAttack2) == 0x0016B2, "Member 'UFortKatanaWeaponAnimInstance::IsPrimaryAttack2' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ExitFromPrimaryAttack) == 0x0016B3, "Member 'UFortKatanaWeaponAnimInstance::ExitFromPrimaryAttack' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ExitFromPrimaryAttack2) == 0x0016B4, "Member 'UFortKatanaWeaponAnimInstance::ExitFromPrimaryAttack2' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, NonPrimaryAttackState) == 0x0016B5, "Member 'UFortKatanaWeaponAnimInstance::NonPrimaryAttackState' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsComboAttack) == 0x0016B6, "Member 'UFortKatanaWeaponAnimInstance::IsComboAttack' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, TransitionRuleToDefaultPose) == 0x0016B7, "Member 'UFortKatanaWeaponAnimInstance::TransitionRuleToDefaultPose' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ExitFromInAirLand) == 0x0016B8, "Member 'UFortKatanaWeaponAnimInstance::ExitFromInAirLand' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, IsGrindRailSwing) == 0x0016B9, "Member 'UFortKatanaWeaponAnimInstance::IsGrindRailSwing' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, CurrentTechniqueBranch) == 0x0016BC, "Member 'UFortKatanaWeaponAnimInstance::CurrentTechniqueBranch' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, PreviousTechniqueBranch) == 0x0016C0, "Member 'UFortKatanaWeaponAnimInstance::PreviousTechniqueBranch' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, PelvisSocket) == 0x0016C4, "Member 'UFortKatanaWeaponAnimInstance::PelvisSocket' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardLocOffsetVeh) == 0x0016C8, "Member 'UFortKatanaWeaponAnimInstance::ScabbardLocOffsetVeh' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, ScabbardRotOffsetVeh) == 0x0016E0, "Member 'UFortKatanaWeaponAnimInstance::ScabbardRotOffsetVeh' has a wrong offset!");
static_assert(offsetof(UFortKatanaWeaponAnimInstance, DashChargePlayRate) == 0x0016F8, "Member 'UFortKatanaWeaponAnimInstance::DashChargePlayRate' has a wrong offset!");

class UKatanaTargetingComponent final : public UFortWeaponComponent
{
public:
	TSubclassOf<class UGameplayAbility>           KatanaTechniqueAbilityClass;
	class UFortGameplayAbility*                   CachedTechniqueAbilityCDO;
	struct FScalableFloat                         DashDistance;
	struct FScalableFloat                         AdditionalDashForwardAttackRange;
	struct FScalableFloat                         AdditionalOutOfRangeDetection;
	struct FScalableFloat                         DashOffsetFromTarget;
	struct FScalableFloat                         PropRemainingHealthToDestroy;
	struct FScalableFloat                         BuildingRemainingHealthToDestroy;
	struct FGameplayTagContainer                  DashBlockingBuildingTags;
	TSet<TSubclassOf<class ABuildingActor>>       DashBlockingBuildingClasses;
	struct FFortAbilityTargetSelectionList        PawnTargetSelectionList;
	ECollisionChannel                             DashTraceChannel;
	uint8                                         Pad_259[0x3];
	float                                         ObstructionOverlapBoxHalfSize;
	struct FFortTargetFilter                      ObstructionTargetFilter;
	TMap<EFortKatanaPrimaryAttackVariation, struct FFortKatanaPrimaryAttackVariationInfo> PrimaryAttackVariationInfos;
	float                                         PrimaryAttackMinForwardMovement;
	ECollisionChannel                             PrimaryAttackObstructionTraceChannel;
	uint8                                         Pad_2ED[0x3];

public:
	bool PerformDashTargeting(struct FFortKatanaDashTargetingInfo* OutDashTargetingInfo);
	struct FVector PerformPrimaryAttackTargeting(const EFortKatanaPrimaryAttackVariation AttackVariation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KatanaTargetingComponent">();
	}
	static class UKatanaTargetingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKatanaTargetingComponent>();
	}
};
static_assert(alignof(UKatanaTargetingComponent) == 0x000008, "Wrong alignment on UKatanaTargetingComponent");
static_assert(sizeof(UKatanaTargetingComponent) == 0x0002F0, "Wrong size on UKatanaTargetingComponent");
static_assert(offsetof(UKatanaTargetingComponent, KatanaTechniqueAbilityClass) == 0x0000A0, "Member 'UKatanaTargetingComponent::KatanaTechniqueAbilityClass' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, CachedTechniqueAbilityCDO) == 0x0000A8, "Member 'UKatanaTargetingComponent::CachedTechniqueAbilityCDO' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, DashDistance) == 0x0000B0, "Member 'UKatanaTargetingComponent::DashDistance' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, AdditionalDashForwardAttackRange) == 0x0000D8, "Member 'UKatanaTargetingComponent::AdditionalDashForwardAttackRange' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, AdditionalOutOfRangeDetection) == 0x000100, "Member 'UKatanaTargetingComponent::AdditionalOutOfRangeDetection' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, DashOffsetFromTarget) == 0x000128, "Member 'UKatanaTargetingComponent::DashOffsetFromTarget' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, PropRemainingHealthToDestroy) == 0x000150, "Member 'UKatanaTargetingComponent::PropRemainingHealthToDestroy' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, BuildingRemainingHealthToDestroy) == 0x000178, "Member 'UKatanaTargetingComponent::BuildingRemainingHealthToDestroy' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, DashBlockingBuildingTags) == 0x0001A0, "Member 'UKatanaTargetingComponent::DashBlockingBuildingTags' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, DashBlockingBuildingClasses) == 0x0001C0, "Member 'UKatanaTargetingComponent::DashBlockingBuildingClasses' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, PawnTargetSelectionList) == 0x000210, "Member 'UKatanaTargetingComponent::PawnTargetSelectionList' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, DashTraceChannel) == 0x000258, "Member 'UKatanaTargetingComponent::DashTraceChannel' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, ObstructionOverlapBoxHalfSize) == 0x00025C, "Member 'UKatanaTargetingComponent::ObstructionOverlapBoxHalfSize' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, ObstructionTargetFilter) == 0x000260, "Member 'UKatanaTargetingComponent::ObstructionTargetFilter' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, PrimaryAttackVariationInfos) == 0x000298, "Member 'UKatanaTargetingComponent::PrimaryAttackVariationInfos' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, PrimaryAttackMinForwardMovement) == 0x0002E8, "Member 'UKatanaTargetingComponent::PrimaryAttackMinForwardMovement' has a wrong offset!");
static_assert(offsetof(UKatanaTargetingComponent, PrimaryAttackObstructionTraceChannel) == 0x0002EC, "Member 'UKatanaTargetingComponent::PrimaryAttackObstructionTraceChannel' has a wrong offset!");

class UAbilityTask_ApplyRootMotion_KatanaDashForce final : public UAbilityTask_ApplyRootMotionMoveToForce
{
public:
	float                                         HeightAboveGround;
	uint8                                         Pad_124[0x4];

public:
	static class UAbilityTask_ApplyRootMotion_KatanaDashForce* ApplyRootMotion_KatanaDashForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InTargetLocation, float InDuration, float InHeightAboveGround, bool bInSetNewMovementMode, EMovementMode InMovementMode, bool bInRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AbilityTask_ApplyRootMotion_KatanaDashForce">();
	}
	static class UAbilityTask_ApplyRootMotion_KatanaDashForce* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityTask_ApplyRootMotion_KatanaDashForce>();
	}
};
static_assert(alignof(UAbilityTask_ApplyRootMotion_KatanaDashForce) == 0x000008, "Wrong alignment on UAbilityTask_ApplyRootMotion_KatanaDashForce");
static_assert(sizeof(UAbilityTask_ApplyRootMotion_KatanaDashForce) == 0x000128, "Wrong size on UAbilityTask_ApplyRootMotion_KatanaDashForce");
static_assert(offsetof(UAbilityTask_ApplyRootMotion_KatanaDashForce, HeightAboveGround) == 0x000120, "Member 'UAbilityTask_ApplyRootMotion_KatanaDashForce::HeightAboveGround' has a wrong offset!");

}
