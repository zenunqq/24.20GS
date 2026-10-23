#pragma once

#include "Basic.hpp"

#include "MantisRuntime_structs.hpp"
#include "GameplayAbilities_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UFortMantisLayerAnimInstance : public UFortPlayerAnimInstanceProxy
{
public:
	struct FFortMantisReplicatedAnimInstanceInfo  MantisAnimInstanceInfo;

public:
	void OnMantisTechniqueEnded(const int32 TechniqueIndex, const class FName TechniqueName);
	void OnMantisTechniqueStarted(const int32 TechniqueIndex, const class FName TechniqueName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMantisLayerAnimInstance">();
	}
	static class UFortMantisLayerAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMantisLayerAnimInstance>();
	}
};
static_assert(alignof(UFortMantisLayerAnimInstance) == 0x000010, "Wrong alignment on UFortMantisLayerAnimInstance");
static_assert(sizeof(UFortMantisLayerAnimInstance) == 0x0015B0, "Wrong size on UFortMantisLayerAnimInstance");
static_assert(offsetof(UFortMantisLayerAnimInstance, MantisAnimInstanceInfo) == 0x0015A0, "Member 'UFortMantisLayerAnimInstance::MantisAnimInstanceInfo' has a wrong offset!");

class UFortItemLayerAnimInstance_UncleBrolly final : public UFortItemLayerAnimInstance
{
public:
	struct FCachedAnimStateArray                  UmbrellaGliderOpenStateDataArray;
	struct FVector                                WrapTranslation;
	struct FRotator                               WrapRotation;
	struct FRotator                               RootRotationOffset;
	float                                         LandingPredictedTimer;
	bool                                          bShouldUpdateYawCorrection;
	bool                                          bWasAcceleratingBeforeDodge;
	uint8                                         Pad_726[0x2];
	float                                         UncleBrollyDeployCurveValue;
	float                                         DashChargeTier;
	float                                         DashChargeAdditivePlayrate;
	bool                                          bIsUmbrellaFailing;
	bool                                          bIsMeleeGuarding;
	bool                                          bIsSprinting;
	bool                                          bIsInAir;
	bool                                          bIsLandingPredicted;
	bool                                          bIsJumping;
	bool                                          bIsDodging;
	bool                                          bIsDodgingEast;
	bool                                          bIsDodgingSouth;
	bool                                          bIsDodgingWest;
	bool                                          bIsDashing;
	bool                                          bIsDashCharging;
	bool                                          bIsDashPredictingEnd;
	bool                                          bIsChargeTier1;
	bool                                          bIsChargeTier2;
	bool                                          bIsChargeTier3;
	bool                                          bMeleeGuardingOrUmbrellaFailing;
	bool                                          bTransition_Default_to_GuardLoop;
	bool                                          bTransition_Default_to_GuardIntro;
	bool                                          bTransition_GuardIntro_to_Default;
	bool                                          bUpperBodyShouldPassThrough;
	bool                                          bUmbrellaGliderIsOpen;
	uint8                                         Pad_74A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortItemLayerAnimInstance_UncleBrolly">();
	}
	static class UFortItemLayerAnimInstance_UncleBrolly* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemLayerAnimInstance_UncleBrolly>();
	}
};
static_assert(alignof(UFortItemLayerAnimInstance_UncleBrolly) == 0x000010, "Wrong alignment on UFortItemLayerAnimInstance_UncleBrolly");
static_assert(sizeof(UFortItemLayerAnimInstance_UncleBrolly) == 0x000750, "Wrong size on UFortItemLayerAnimInstance_UncleBrolly");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, UmbrellaGliderOpenStateDataArray) == 0x0006C0, "Member 'UFortItemLayerAnimInstance_UncleBrolly::UmbrellaGliderOpenStateDataArray' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, WrapTranslation) == 0x0006D8, "Member 'UFortItemLayerAnimInstance_UncleBrolly::WrapTranslation' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, WrapRotation) == 0x0006F0, "Member 'UFortItemLayerAnimInstance_UncleBrolly::WrapRotation' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, RootRotationOffset) == 0x000708, "Member 'UFortItemLayerAnimInstance_UncleBrolly::RootRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, LandingPredictedTimer) == 0x000720, "Member 'UFortItemLayerAnimInstance_UncleBrolly::LandingPredictedTimer' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bShouldUpdateYawCorrection) == 0x000724, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bShouldUpdateYawCorrection' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bWasAcceleratingBeforeDodge) == 0x000725, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bWasAcceleratingBeforeDodge' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, UncleBrollyDeployCurveValue) == 0x000728, "Member 'UFortItemLayerAnimInstance_UncleBrolly::UncleBrollyDeployCurveValue' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, DashChargeTier) == 0x00072C, "Member 'UFortItemLayerAnimInstance_UncleBrolly::DashChargeTier' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, DashChargeAdditivePlayrate) == 0x000730, "Member 'UFortItemLayerAnimInstance_UncleBrolly::DashChargeAdditivePlayrate' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsUmbrellaFailing) == 0x000734, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsUmbrellaFailing' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsMeleeGuarding) == 0x000735, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsMeleeGuarding' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsSprinting) == 0x000736, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsSprinting' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsInAir) == 0x000737, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsInAir' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsLandingPredicted) == 0x000738, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsLandingPredicted' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsJumping) == 0x000739, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsJumping' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDodging) == 0x00073A, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDodging' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDodgingEast) == 0x00073B, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDodgingEast' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDodgingSouth) == 0x00073C, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDodgingSouth' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDodgingWest) == 0x00073D, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDodgingWest' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDashing) == 0x00073E, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDashing' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDashCharging) == 0x00073F, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDashCharging' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsDashPredictingEnd) == 0x000740, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsDashPredictingEnd' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsChargeTier1) == 0x000741, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsChargeTier1' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsChargeTier2) == 0x000742, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsChargeTier2' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bIsChargeTier3) == 0x000743, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bIsChargeTier3' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bMeleeGuardingOrUmbrellaFailing) == 0x000744, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bMeleeGuardingOrUmbrellaFailing' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bTransition_Default_to_GuardLoop) == 0x000745, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bTransition_Default_to_GuardLoop' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bTransition_Default_to_GuardIntro) == 0x000746, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bTransition_Default_to_GuardIntro' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bTransition_GuardIntro_to_Default) == 0x000747, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bTransition_GuardIntro_to_Default' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bUpperBodyShouldPassThrough) == 0x000748, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bUpperBodyShouldPassThrough' has a wrong offset!");
static_assert(offsetof(UFortItemLayerAnimInstance_UncleBrolly, bUmbrellaGliderIsOpen) == 0x000749, "Member 'UFortItemLayerAnimInstance_UncleBrolly::bUmbrellaGliderIsOpen' has a wrong offset!");

class UUncleBrollyWeaponAnimInstance final : public UAnimInstance
{
public:
	TSubclassOf<class UAnimInstance>              UncleBrollyItemLayer;
	struct FRotator                               UmbrellaRotation;
	float                                         UmbrellaSpinSpeed;
	float                                         BlockDeployEndPlayrate;
	float                                         BlockDeployEndStartPosition;
	bool                                          bIsDodging;
	bool                                          bIsPlayingMeleeAnim;
	bool                                          bIsUmbrellaFailing;
	bool                                          bIsMeleeGuarding;
	bool                                          bIsInAir;
	bool                                          bIsDashing;
	bool                                          bIsSprinting;
	bool                                          bIsPredictingEnd;
	bool                                          bIsDashCharging;
	bool                                          bIsDashPredictingEnd;
	bool                                          bInAirAndMeleeGuarding;
	bool                                          bTransition_Default_to_DeployStart;
	bool                                          bTransition_DeployStart_to_Default;
	bool                                          bTransition_Fail_to_FailToDeploy;
	bool                                          bTransition_FailLoop_to_DeployEnd;
	uint8                                         Pad_383[0xD];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"UncleBrollyWeaponAnimInstance">();
	}
	static class UUncleBrollyWeaponAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUncleBrollyWeaponAnimInstance>();
	}
};
static_assert(alignof(UUncleBrollyWeaponAnimInstance) == 0x000010, "Wrong alignment on UUncleBrollyWeaponAnimInstance");
static_assert(sizeof(UUncleBrollyWeaponAnimInstance) == 0x000390, "Wrong size on UUncleBrollyWeaponAnimInstance");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, UncleBrollyItemLayer) == 0x000348, "Member 'UUncleBrollyWeaponAnimInstance::UncleBrollyItemLayer' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, UmbrellaRotation) == 0x000350, "Member 'UUncleBrollyWeaponAnimInstance::UmbrellaRotation' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, UmbrellaSpinSpeed) == 0x000368, "Member 'UUncleBrollyWeaponAnimInstance::UmbrellaSpinSpeed' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, BlockDeployEndPlayrate) == 0x00036C, "Member 'UUncleBrollyWeaponAnimInstance::BlockDeployEndPlayrate' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, BlockDeployEndStartPosition) == 0x000370, "Member 'UUncleBrollyWeaponAnimInstance::BlockDeployEndStartPosition' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsDodging) == 0x000374, "Member 'UUncleBrollyWeaponAnimInstance::bIsDodging' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsPlayingMeleeAnim) == 0x000375, "Member 'UUncleBrollyWeaponAnimInstance::bIsPlayingMeleeAnim' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsUmbrellaFailing) == 0x000376, "Member 'UUncleBrollyWeaponAnimInstance::bIsUmbrellaFailing' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsMeleeGuarding) == 0x000377, "Member 'UUncleBrollyWeaponAnimInstance::bIsMeleeGuarding' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsInAir) == 0x000378, "Member 'UUncleBrollyWeaponAnimInstance::bIsInAir' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsDashing) == 0x000379, "Member 'UUncleBrollyWeaponAnimInstance::bIsDashing' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsSprinting) == 0x00037A, "Member 'UUncleBrollyWeaponAnimInstance::bIsSprinting' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsPredictingEnd) == 0x00037B, "Member 'UUncleBrollyWeaponAnimInstance::bIsPredictingEnd' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsDashCharging) == 0x00037C, "Member 'UUncleBrollyWeaponAnimInstance::bIsDashCharging' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bIsDashPredictingEnd) == 0x00037D, "Member 'UUncleBrollyWeaponAnimInstance::bIsDashPredictingEnd' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bInAirAndMeleeGuarding) == 0x00037E, "Member 'UUncleBrollyWeaponAnimInstance::bInAirAndMeleeGuarding' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bTransition_Default_to_DeployStart) == 0x00037F, "Member 'UUncleBrollyWeaponAnimInstance::bTransition_Default_to_DeployStart' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bTransition_DeployStart_to_Default) == 0x000380, "Member 'UUncleBrollyWeaponAnimInstance::bTransition_DeployStart_to_Default' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bTransition_Fail_to_FailToDeploy) == 0x000381, "Member 'UUncleBrollyWeaponAnimInstance::bTransition_Fail_to_FailToDeploy' has a wrong offset!");
static_assert(offsetof(UUncleBrollyWeaponAnimInstance, bTransition_FailLoop_to_DeployEnd) == 0x000382, "Member 'UUncleBrollyWeaponAnimInstance::bTransition_FailLoop_to_DeployEnd' has a wrong offset!");

class UFortAbilityTask_ApplyRootMotionMantisForce final : public UAbilityTask_ApplyRootMotion_Base
{
public:
	TMulticastInlineDelegate<void()>              OnFinish;
	float                                         Duration;
	uint8                                         Pad_CC[0x4];
	class UAnimMontage*                           TechniqueMontage;
	struct FFortMantisRootMotionWarpInfo          WarpInfo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAbilityTask_ApplyRootMotionMantisForce">();
	}
	static class UFortAbilityTask_ApplyRootMotionMantisForce* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAbilityTask_ApplyRootMotionMantisForce>();
	}
};
static_assert(alignof(UFortAbilityTask_ApplyRootMotionMantisForce) == 0x000008, "Wrong alignment on UFortAbilityTask_ApplyRootMotionMantisForce");
static_assert(sizeof(UFortAbilityTask_ApplyRootMotionMantisForce) == 0x000100, "Wrong size on UFortAbilityTask_ApplyRootMotionMantisForce");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, OnFinish) == 0x0000B8, "Member 'UFortAbilityTask_ApplyRootMotionMantisForce::OnFinish' has a wrong offset!");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, Duration) == 0x0000C8, "Member 'UFortAbilityTask_ApplyRootMotionMantisForce::Duration' has a wrong offset!");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, TechniqueMontage) == 0x0000D0, "Member 'UFortAbilityTask_ApplyRootMotionMantisForce::TechniqueMontage' has a wrong offset!");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, WarpInfo) == 0x0000D8, "Member 'UFortAbilityTask_ApplyRootMotionMantisForce::WarpInfo' has a wrong offset!");

class UFortAnimNotify_Mantis final : public UAnimNotify
{
public:
	EFortMantisNotifyEvent                        MantisNotifyEvent;
	EFortMantisBranchRule                         MantisBranchRule;
	EFortMantisBranchPath                         MantisBranchPath;
	uint8                                         Pad_3B[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAnimNotify_Mantis">();
	}
	static class UFortAnimNotify_Mantis* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAnimNotify_Mantis>();
	}
};
static_assert(alignof(UFortAnimNotify_Mantis) == 0x000008, "Wrong alignment on UFortAnimNotify_Mantis");
static_assert(sizeof(UFortAnimNotify_Mantis) == 0x000040, "Wrong size on UFortAnimNotify_Mantis");
static_assert(offsetof(UFortAnimNotify_Mantis, MantisNotifyEvent) == 0x000038, "Member 'UFortAnimNotify_Mantis::MantisNotifyEvent' has a wrong offset!");
static_assert(offsetof(UFortAnimNotify_Mantis, MantisBranchRule) == 0x000039, "Member 'UFortAnimNotify_Mantis::MantisBranchRule' has a wrong offset!");
static_assert(offsetof(UFortAnimNotify_Mantis, MantisBranchPath) == 0x00003A, "Member 'UFortAnimNotify_Mantis::MantisBranchPath' has a wrong offset!");

class UFortAnimNotifyState_Mantis final : public UAnimNotifyState
{
public:
	EFortMantisNotifyWindow                       MantisNotifyWindow;
	uint8                                         Pad_31[0x3];
	struct FGameplayTag                           MantisNotifyTag;
	EFortMantisNotifyRotationWarpRateRule         RotationRateWarpRule;
	uint8                                         bWarpRotation : 1;
	uint8                                         bWarpTranslation : 1;
	uint8                                         Pad_3A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAnimNotifyState_Mantis">();
	}
	static class UFortAnimNotifyState_Mantis* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAnimNotifyState_Mantis>();
	}
};
static_assert(alignof(UFortAnimNotifyState_Mantis) == 0x000008, "Wrong alignment on UFortAnimNotifyState_Mantis");
static_assert(sizeof(UFortAnimNotifyState_Mantis) == 0x000040, "Wrong size on UFortAnimNotifyState_Mantis");
static_assert(offsetof(UFortAnimNotifyState_Mantis, MantisNotifyWindow) == 0x000030, "Member 'UFortAnimNotifyState_Mantis::MantisNotifyWindow' has a wrong offset!");
static_assert(offsetof(UFortAnimNotifyState_Mantis, MantisNotifyTag) == 0x000034, "Member 'UFortAnimNotifyState_Mantis::MantisNotifyTag' has a wrong offset!");
static_assert(offsetof(UFortAnimNotifyState_Mantis, RotationRateWarpRule) == 0x000038, "Member 'UFortAnimNotifyState_Mantis::RotationRateWarpRule' has a wrong offset!");

class UFortGameplayAbility_Mantis final : public UFortGameplayAbility
{
public:
	bool                                          bAllowRootMotionWarping;
	bool                                          bApplyEffectContainerOnTechniqueDamage;
	bool                                          bApplyEffectContainerOnTechniqueStart;
	uint8                                         Pad_B2B[0x5];
	class UFortMantisPawnComponent*               MantisPawnComponent;
	class UAbilityTask_PlayMontageAndWait*        MontageTask;
	class UAbilityTask_ApplyRootMotion_Base*      RootMotionTask;
	uint8                                         Pad_B48[0x28];

public:
	void BP_MantisAbilityTechniqueStarted(const struct FGameplayTagContainer& OwningTags, class FName SequenceName, bool StartsSequence, bool EndsSequence);
	void BP_OnMantisInputEvent(const EFortMantisTechniqueActivationInputType InputType, const EFortMantisTechniqueActivationTimingType InputTiming, const bool bDidInputStartTechnique, const bool bDidInputQueueTechnique, const float InputHeldDuration);
	void BP_OnMantisTechniqueHit(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag);
	void BP_OnTechniqueNotifyEvent(const EFortMantisNotifyEvent NotifyEvent, const class UFortAnimNotify_Mantis* Notify);
	void BP_OnTechniqueNotifyWindowEnded(const EFortMantisNotifyWindow NotifyWindow, const class UFortAnimNotifyState_Mantis* Notify);
	void BP_OnTechniqueNotifyWindowStarted(const EFortMantisNotifyWindow NotifyWindow, const class UFortAnimNotifyState_Mantis* Notify);
	void ConfigureRootMotionWarping(const class FName TechniqueName, bool* bOutAllowTranslationWarp, bool* bOutAllowRotationWarp, class AActor** OutTargetActor, bool* bOutSnapshotTargetActorLocation, bool* bOutWarpTranslationToLocation, struct FVector* outTargetLocation);
	void FillMetadataForTechnique(const class FName TechniqueName, struct FFortMantisTechniqueMetadata* OutTechniqueMetadata);
	void OnMontageCancelled();
	void OnMontageFinished();

	class FName GetDynamicMontageNameForTechnique(const class FName TechniqueName) const;
	int32 GetLevelForGameplayEffectContainer(const struct FGameplayTag& ApplicationTag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayAbility_Mantis">();
	}
	static class UFortGameplayAbility_Mantis* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayAbility_Mantis>();
	}
};
static_assert(alignof(UFortGameplayAbility_Mantis) == 0x000008, "Wrong alignment on UFortGameplayAbility_Mantis");
static_assert(sizeof(UFortGameplayAbility_Mantis) == 0x000B70, "Wrong size on UFortGameplayAbility_Mantis");
static_assert(offsetof(UFortGameplayAbility_Mantis, bAllowRootMotionWarping) == 0x000B28, "Member 'UFortGameplayAbility_Mantis::bAllowRootMotionWarping' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_Mantis, bApplyEffectContainerOnTechniqueDamage) == 0x000B29, "Member 'UFortGameplayAbility_Mantis::bApplyEffectContainerOnTechniqueDamage' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_Mantis, bApplyEffectContainerOnTechniqueStart) == 0x000B2A, "Member 'UFortGameplayAbility_Mantis::bApplyEffectContainerOnTechniqueStart' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_Mantis, MantisPawnComponent) == 0x000B30, "Member 'UFortGameplayAbility_Mantis::MantisPawnComponent' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_Mantis, MontageTask) == 0x000B38, "Member 'UFortGameplayAbility_Mantis::MontageTask' has a wrong offset!");
static_assert(offsetof(UFortGameplayAbility_Mantis, RootMotionTask) == 0x000B40, "Member 'UFortGameplayAbility_Mantis::RootMotionTask' has a wrong offset!");

class UFortMantisData final : public UDataAsset
{
public:
	bool                                          bShowTargetHealthBar;
	uint8                                         Pad_31[0x7];
	TSubclassOf<class UFortGameplayAbility_Mantis> TechniqueAbility;
	TArray<struct FFortGameplayEffectContainer>   TechniqueAdditionEffectContainers;
	TArray<struct FFortMantisTechniqueData>       Techniques;
	TArray<struct FFortMantisTechniqueBranch>     Branches;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMantisData">();
	}
	static class UFortMantisData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMantisData>();
	}
};
static_assert(alignof(UFortMantisData) == 0x000008, "Wrong alignment on UFortMantisData");
static_assert(sizeof(UFortMantisData) == 0x000070, "Wrong size on UFortMantisData");
static_assert(offsetof(UFortMantisData, bShowTargetHealthBar) == 0x000030, "Member 'UFortMantisData::bShowTargetHealthBar' has a wrong offset!");
static_assert(offsetof(UFortMantisData, TechniqueAbility) == 0x000038, "Member 'UFortMantisData::TechniqueAbility' has a wrong offset!");
static_assert(offsetof(UFortMantisData, TechniqueAdditionEffectContainers) == 0x000040, "Member 'UFortMantisData::TechniqueAdditionEffectContainers' has a wrong offset!");
static_assert(offsetof(UFortMantisData, Techniques) == 0x000050, "Member 'UFortMantisData::Techniques' has a wrong offset!");
static_assert(offsetof(UFortMantisData, Branches) == 0x000060, "Member 'UFortMantisData::Branches' has a wrong offset!");

class UFortMantisPawnComponent final : public UPawnComponent
{
public:
	TMulticastInlineDelegate<void(struct FFortMantisTechniqueMetadata& TechniqueMetadata)> OnTechniqueMetadataReady;
	uint8                                         Pad_B0[0xC8];
	TMap<class UAnimMontage*, struct FFortMantisMontageData> MontageDataMap;
	class UFortMantisData*                        MantisData;
	class AFortWeapon*                            Weapon;
	uint8                                         Pad_1D8[0x270];

public:
	bool IsSpecificInputPressed(EFortMantisTechniqueActivationInputType InputType);
	void OnCharacterMovementPreUpdate(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
	void OnOwnerWeaponHolstered();
	void OnPostPhysicsRotation(class UCharacterMovementComponent* CharMoveComp, float DeltaSeconds);
	void SetBranchRule(EFortMantisBranchRule InBranchRule, EFortMantisBranchPath InBranchPath);
	void SetLockOnState(bool bEnabled, class AActor* TargetActor);
	void SimulateInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, const bool bForceProcessEvent);
	bool TryManuallyEndCurrentTechnique();
	bool TryManuallyStartTechnique(const int32 TechniqueDataIndex);

	const struct FFortMantisTechniqueMetadata GetCurrentTechniqueMetadata() const;
	class AActor* GetLockOnTarget() const;
	bool HasCurrentTechniqueMetadataBeenSet() const;
	bool HasLockOnTarget() const;
	bool IsPerformingLockOn() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMantisPawnComponent">();
	}
	static class UFortMantisPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMantisPawnComponent>();
	}
};
static_assert(alignof(UFortMantisPawnComponent) == 0x000008, "Wrong alignment on UFortMantisPawnComponent");
static_assert(sizeof(UFortMantisPawnComponent) == 0x000448, "Wrong size on UFortMantisPawnComponent");
static_assert(offsetof(UFortMantisPawnComponent, OnTechniqueMetadataReady) == 0x0000A0, "Member 'UFortMantisPawnComponent::OnTechniqueMetadataReady' has a wrong offset!");
static_assert(offsetof(UFortMantisPawnComponent, MontageDataMap) == 0x000178, "Member 'UFortMantisPawnComponent::MontageDataMap' has a wrong offset!");
static_assert(offsetof(UFortMantisPawnComponent, MantisData) == 0x0001C8, "Member 'UFortMantisPawnComponent::MantisData' has a wrong offset!");
static_assert(offsetof(UFortMantisPawnComponent, Weapon) == 0x0001D0, "Member 'UFortMantisPawnComponent::Weapon' has a wrong offset!");

class UFortMantisWeaponComponent final : public UFortWeaponComponent
{
public:
	class UFortMantisData*                        MantisData;
	bool                                          bAllowPrimaryFireInputsWhileHolstered;
	bool                                          bAllowSecondaryFireInputsWhileHolstered;
	uint8                                         Pad_AA[0x2];
	TWeakObjectPtr<class UFortMantisPawnComponent> MantisPawnComponent;
	uint8                                         Pad_B4[0xC];
	struct FFortMantisReplicatedAnimInstanceInfo  AnimInstanceInfo;
	struct FFortMantisReplicatedAnimInstanceInfo  ReplayAnimInstanceInfo;

public:
	void OnEquip(class AFortWeapon* Weapon);
	void OnPressSecondaryFire(class AFortWeapon* Weapon);
	void OnPressTrigger(class AFortWeapon* Weapon);
	void OnReleaseSecondaryFire(class AFortWeapon* Weapon);
	void OnReleaseTrigger(class AFortWeapon* Weapon);
	void OnRep_ReplayAnimInstanceInfo();
	void OnUnEquip(class AFortWeapon* Weapon);
	void OnWeaponAbilitiesRemoved(class AFortWeapon* Weapon, EFortWeaponAbilityRemovalReason RemovalReason);

	const struct FFortMantisReplicatedAnimInstanceInfo GetAnimInstanceInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMantisWeaponComponent">();
	}
	static class UFortMantisWeaponComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMantisWeaponComponent>();
	}
};
static_assert(alignof(UFortMantisWeaponComponent) == 0x000008, "Wrong alignment on UFortMantisWeaponComponent");
static_assert(sizeof(UFortMantisWeaponComponent) == 0x0000E0, "Wrong size on UFortMantisWeaponComponent");
static_assert(offsetof(UFortMantisWeaponComponent, MantisData) == 0x0000A0, "Member 'UFortMantisWeaponComponent::MantisData' has a wrong offset!");
static_assert(offsetof(UFortMantisWeaponComponent, bAllowPrimaryFireInputsWhileHolstered) == 0x0000A8, "Member 'UFortMantisWeaponComponent::bAllowPrimaryFireInputsWhileHolstered' has a wrong offset!");
static_assert(offsetof(UFortMantisWeaponComponent, bAllowSecondaryFireInputsWhileHolstered) == 0x0000A9, "Member 'UFortMantisWeaponComponent::bAllowSecondaryFireInputsWhileHolstered' has a wrong offset!");
static_assert(offsetof(UFortMantisWeaponComponent, MantisPawnComponent) == 0x0000AC, "Member 'UFortMantisWeaponComponent::MantisPawnComponent' has a wrong offset!");
static_assert(offsetof(UFortMantisWeaponComponent, AnimInstanceInfo) == 0x0000C0, "Member 'UFortMantisWeaponComponent::AnimInstanceInfo' has a wrong offset!");
static_assert(offsetof(UFortMantisWeaponComponent, ReplayAnimInstanceInfo) == 0x0000D0, "Member 'UFortMantisWeaponComponent::ReplayAnimInstanceInfo' has a wrong offset!");

}
