#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGA_Athena_Consumable_Throw_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	bool                                          AbilityKeyPressed;
	bool                                          InThrowWindup;
	uint8                                         Pad_B3A[0x6];
	double                                        AdditionalThrowAngle;
	double                                        MaxTossPitch;
	struct FVector                                GrenadeTargetingOriginOffset;
	struct FVector                                GrenadeTargetingOriginOffset_Crouched;
	class AFortProjectileBase*                    SpawnedProjectile;
	struct FScalableFloat                         bIsEnabled;
	struct FGameplayTagContainer                  Tag_BlockAbilityActivation;
	class UClass*                                 ThrownProjectileClass;
	bool                                          bIsSecondaryFire;
	bool                                          bThrowInstantly;
	uint8                                         Pad_BDA[0x6];
	struct FScalableFloat                         ProjectileGravityScale;
	struct FScalableFloat                         ProjectileSpeed;
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;
	class UClass*                                 TrajectoryIndicatorClass;
	double                                        TrajectoryUpdateInterval;
	class UAnimMontage*                           CookMontage;
	class UAnimMontage*                           ThrowMontage;
	struct FGameplayTag                           GC_OnThrow;
	uint8                                         Pad_C5C[0x4];
	double                                        TrajectoryTimeStep;
	int32                                         TrajectoryMaxSteps;
	class FName                                   TrajectoryCollisionProfileName;
	struct FGameplayTag                           GC_CookLoop;
	uint8                                         Pad_C74[0x4];
	class UClass*                                 GE_InWindup;
	class UClass*                                 CameraMode;
	struct FVector                                GrenadeTargetingOriginOffsetWater;
	struct FGameplayTag                           EC_DefaultExplosion;
	int32                                         ExplosionEffectLevel;
	struct FGameplayTag                           EC_DefaultHit;
	int32                                         HitEffectLevel;
	TMulticastInlineDelegate<void()>              OnProjectileSpawn;
	bool                                          HasAdditionalExplosion;
	uint8                                         Pad_CC1[0x3];
	struct FGameplayTag                           EC_AdditionalExplosion;
	int32                                         AdditionalExplodeLevel;
	uint8                                         Pad_CCC[0x4];
	struct FGameplayTagContainer                  QuestCreditTargetTag;
	bool                                          ReturnPhysicalMaterial;
	uint8                                         Pad_CF1[0x7];
	struct FGameplayTagContainer                  Tags_UseNullFailedActivateReason;
	bool                                          bIsThrowing;
	bool                                          SpawnedOnEquip;
	uint8                                         Pad_D1A[0x2];
	struct FActiveGameplayEffectHandle            Handle_GE_InWindup;
	uint8                                         Pad_D24[0x4];
	struct FFortGameplayEffectContainerSpec       HitContainerSpec;
	struct FFortGameplayEffectContainerSpec       ExplosionContainerSpec;
	struct FFortGameplayEffectContainerSpec       AdditionalExplosionContainerSpec;
	bool                                          bPreventDeploymentInBlockAreas;
	uint8                                         Pad_F51[0x3];
	float                                         DeployableBlockingAreaCheckRadius;
	struct FVector                                DeployableBlockingAreaCheckOffset;
	struct FFortProjectileTrajectoryData          Projectile_Trajectory_Data;
	float                                         Trajectory_Max_Distance_Between_Spline_Points;
	int32                                         Trajectory_Max_Bounces;
	float                                         Trajectory_Initial_Distance;
	bool                                          Projectile_Trajectory_Data_Initialized;
	uint8                                         Pad_F9D[0x3];
	double                                        Projectile_Gravity_Scale_to_Use;

public:
	void AddCookGC();
	void AddValidCamera();
	void AttemptSpawnThrownProjectile();
	void Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void CleanupTrajectory();
	void CleanupTrajectoryIndicatorOnUnequip();
	void Completed_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_05B8BFFC4ECA26FE5390E9BC303AACA6(const struct FGameplayEventData& Payload);
	void EventReceived_E3F1B58D4D7A664CB557709F9DAE3C9F(const struct FGameplayEventData& Payload);
	void ExecuteThrowGC();
	void ExecuteUbergraph_GA_Athena_Consumable_Throw_Parent(int32 EntryPoint);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	void InitTrajectoryVariables();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_OverrideFailedReason(const struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer* OverridenFailedReason);
	void OnAbilityInputReleased();
	void OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnFinish_96367E244486362FDDE5ED87D909C17B();
	void OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnProjectileSetup();
	void OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile_0);
	void OnRelease_76BCD7D74FEC0FB6EFBBDFB57A0107B0(float TimeHeld);
	void OnSync_9C8FDC8044B1444580A9809C231F294D();
	void OnUpdateTrajectory(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, const struct FHitResult& TrajectoryHitResult);
	void PostThrowCleanup();
	void PrethrowSetup();
	void RemoveCookGC();
	void SetupDummyProjectile();
	void SpawnThrownProjectile(class UClass* ProjectileClass_0, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, double ProjectileInitialSpeed, double ProjectileGravityScale_0, class AFortProjectileBase** SpawnedProjectile_0);
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void ThrowMontageStarted();
	void ThrowProjectile();
	void Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void UpdateTrajectory();
	void UpdateTrajectorySpline();

	void CalculateProjectileTrajectory(class AFortPawn* Instigator, const struct FVector& InitialLocation, const struct FVector& InitialVelocity, struct FHitResult* OutHitResult, TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents) const;
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn) const;
	void GetProjectileAdditionalThrowAngleToUse(double* AdditionalThrowAngleToUse) const;
	void GetProjectileInitialGravityScaleToUse(double* GravityScaleToUse) const;
	void GetProjectileInitialSpeedToUse(double* ProjectileSpeedToUse) const;
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor() const;
	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation) const;
	void IsTrajectoryLocationValid(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents, const struct FHitResult& TrajectoryHitResult, bool* bIsLocationValid) const;
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	bool ShouldOnlyShowTrajectoryOnUse() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Consumable_Throw_Parent_C">();
	}
	static class UGA_Athena_Consumable_Throw_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Consumable_Throw_Parent_C>();
	}
};
static_assert(alignof(UGA_Athena_Consumable_Throw_Parent_C) == 0x000008, "Wrong alignment on UGA_Athena_Consumable_Throw_Parent_C");
static_assert(sizeof(UGA_Athena_Consumable_Throw_Parent_C) == 0x000FA8, "Wrong size on UGA_Athena_Consumable_Throw_Parent_C");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_Consumable_Throw_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, PlayerPawn) == 0x000B30, "Member 'UGA_Athena_Consumable_Throw_Parent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, AbilityKeyPressed) == 0x000B38, "Member 'UGA_Athena_Consumable_Throw_Parent_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, InThrowWindup) == 0x000B39, "Member 'UGA_Athena_Consumable_Throw_Parent_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, AdditionalThrowAngle) == 0x000B40, "Member 'UGA_Athena_Consumable_Throw_Parent_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, MaxTossPitch) == 0x000B48, "Member 'UGA_Athena_Consumable_Throw_Parent_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, GrenadeTargetingOriginOffset) == 0x000B50, "Member 'UGA_Athena_Consumable_Throw_Parent_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, GrenadeTargetingOriginOffset_Crouched) == 0x000B68, "Member 'UGA_Athena_Consumable_Throw_Parent_C::GrenadeTargetingOriginOffset_Crouched' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, SpawnedProjectile) == 0x000B80, "Member 'UGA_Athena_Consumable_Throw_Parent_C::SpawnedProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, bIsEnabled) == 0x000B88, "Member 'UGA_Athena_Consumable_Throw_Parent_C::bIsEnabled' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Tag_BlockAbilityActivation) == 0x000BB0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Tag_BlockAbilityActivation' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ThrownProjectileClass) == 0x000BD0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ThrownProjectileClass' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, bIsSecondaryFire) == 0x000BD8, "Member 'UGA_Athena_Consumable_Throw_Parent_C::bIsSecondaryFire' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, bThrowInstantly) == 0x000BD9, "Member 'UGA_Athena_Consumable_Throw_Parent_C::bThrowInstantly' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ProjectileGravityScale) == 0x000BE0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ProjectileGravityScale' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ProjectileSpeed) == 0x000C08, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ProjectileSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, TrajectoryIndicator) == 0x000C30, "Member 'UGA_Athena_Consumable_Throw_Parent_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, TrajectoryIndicatorClass) == 0x000C38, "Member 'UGA_Athena_Consumable_Throw_Parent_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, TrajectoryUpdateInterval) == 0x000C40, "Member 'UGA_Athena_Consumable_Throw_Parent_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, CookMontage) == 0x000C48, "Member 'UGA_Athena_Consumable_Throw_Parent_C::CookMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ThrowMontage) == 0x000C50, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ThrowMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, GC_OnThrow) == 0x000C58, "Member 'UGA_Athena_Consumable_Throw_Parent_C::GC_OnThrow' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, TrajectoryTimeStep) == 0x000C60, "Member 'UGA_Athena_Consumable_Throw_Parent_C::TrajectoryTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, TrajectoryMaxSteps) == 0x000C68, "Member 'UGA_Athena_Consumable_Throw_Parent_C::TrajectoryMaxSteps' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, TrajectoryCollisionProfileName) == 0x000C6C, "Member 'UGA_Athena_Consumable_Throw_Parent_C::TrajectoryCollisionProfileName' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, GC_CookLoop) == 0x000C70, "Member 'UGA_Athena_Consumable_Throw_Parent_C::GC_CookLoop' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, GE_InWindup) == 0x000C78, "Member 'UGA_Athena_Consumable_Throw_Parent_C::GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, CameraMode) == 0x000C80, "Member 'UGA_Athena_Consumable_Throw_Parent_C::CameraMode' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, GrenadeTargetingOriginOffsetWater) == 0x000C88, "Member 'UGA_Athena_Consumable_Throw_Parent_C::GrenadeTargetingOriginOffsetWater' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, EC_DefaultExplosion) == 0x000CA0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::EC_DefaultExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ExplosionEffectLevel) == 0x000CA4, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ExplosionEffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, EC_DefaultHit) == 0x000CA8, "Member 'UGA_Athena_Consumable_Throw_Parent_C::EC_DefaultHit' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, HitEffectLevel) == 0x000CAC, "Member 'UGA_Athena_Consumable_Throw_Parent_C::HitEffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, OnProjectileSpawn) == 0x000CB0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::OnProjectileSpawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, HasAdditionalExplosion) == 0x000CC0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::HasAdditionalExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, EC_AdditionalExplosion) == 0x000CC4, "Member 'UGA_Athena_Consumable_Throw_Parent_C::EC_AdditionalExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, AdditionalExplodeLevel) == 0x000CC8, "Member 'UGA_Athena_Consumable_Throw_Parent_C::AdditionalExplodeLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, QuestCreditTargetTag) == 0x000CD0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::QuestCreditTargetTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ReturnPhysicalMaterial) == 0x000CF0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ReturnPhysicalMaterial' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Tags_UseNullFailedActivateReason) == 0x000CF8, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Tags_UseNullFailedActivateReason' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, bIsThrowing) == 0x000D18, "Member 'UGA_Athena_Consumable_Throw_Parent_C::bIsThrowing' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, SpawnedOnEquip) == 0x000D19, "Member 'UGA_Athena_Consumable_Throw_Parent_C::SpawnedOnEquip' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Handle_GE_InWindup) == 0x000D1C, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Handle_GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, HitContainerSpec) == 0x000D28, "Member 'UGA_Athena_Consumable_Throw_Parent_C::HitContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, ExplosionContainerSpec) == 0x000DE0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::ExplosionContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, AdditionalExplosionContainerSpec) == 0x000E98, "Member 'UGA_Athena_Consumable_Throw_Parent_C::AdditionalExplosionContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, bPreventDeploymentInBlockAreas) == 0x000F50, "Member 'UGA_Athena_Consumable_Throw_Parent_C::bPreventDeploymentInBlockAreas' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, DeployableBlockingAreaCheckRadius) == 0x000F54, "Member 'UGA_Athena_Consumable_Throw_Parent_C::DeployableBlockingAreaCheckRadius' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, DeployableBlockingAreaCheckOffset) == 0x000F58, "Member 'UGA_Athena_Consumable_Throw_Parent_C::DeployableBlockingAreaCheckOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Projectile_Trajectory_Data) == 0x000F70, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Projectile_Trajectory_Data' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Trajectory_Max_Distance_Between_Spline_Points) == 0x000F90, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Trajectory_Max_Distance_Between_Spline_Points' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Trajectory_Max_Bounces) == 0x000F94, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Trajectory_Max_Bounces' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Trajectory_Initial_Distance) == 0x000F98, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Trajectory_Initial_Distance' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Projectile_Trajectory_Data_Initialized) == 0x000F9C, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Projectile_Trajectory_Data_Initialized' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Parent_C, Projectile_Gravity_Scale_to_Use) == 0x000FA0, "Member 'UGA_Athena_Consumable_Throw_Parent_C::Projectile_Gravity_Scale_to_Use' has a wrong offset!");

}
