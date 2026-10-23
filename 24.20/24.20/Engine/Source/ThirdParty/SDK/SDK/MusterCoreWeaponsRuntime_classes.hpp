#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortMusterExplosiveARProjectile final : public AFortProjectileAthena
{
public:
	struct FVector                                HitLocation;
	struct FRotator                               HitRotation;
	bool                                          bHitPlayer;
	uint8                                         Pad_BD1[0x3];
	float                                         DrawDistance;
	class UParticleSystemComponent*               ProjectileTrail;
	class UNiagaraSystem*                         NS_Explosion;
	struct FGameplayTag                           FeedbackCue;
	uint8                                         Pad_BEC[0x4];
	struct FVector                                DecalSize;
	float                                         DecalLifespan;
	float                                         TimebeforeDecalFadeOut;
	float                                         DecalFadeOutDuration;
	uint8                                         Pad_C14[0x4];
	class UMaterialInterface*                     DecalMaterial;
	class USoundBase*                             Cue_CloseSound;
	class USoundBase*                             Cue_DistantSound;

public:
	void OnRep_HitLocation();
	void SetHitLocation(const struct FVector& NewHitLocation);
	void SetHitPlayer(bool bWasHit);
	void SetHitRotation(const struct FRotator& NewHitRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMusterExplosiveARProjectile">();
	}
	static class AFortMusterExplosiveARProjectile* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortMusterExplosiveARProjectile>();
	}
};
static_assert(alignof(AFortMusterExplosiveARProjectile) == 0x000008, "Wrong alignment on AFortMusterExplosiveARProjectile");
static_assert(sizeof(AFortMusterExplosiveARProjectile) == 0x000C30, "Wrong size on AFortMusterExplosiveARProjectile");
static_assert(offsetof(AFortMusterExplosiveARProjectile, HitLocation) == 0x000BA0, "Member 'AFortMusterExplosiveARProjectile::HitLocation' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, HitRotation) == 0x000BB8, "Member 'AFortMusterExplosiveARProjectile::HitRotation' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, bHitPlayer) == 0x000BD0, "Member 'AFortMusterExplosiveARProjectile::bHitPlayer' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, DrawDistance) == 0x000BD4, "Member 'AFortMusterExplosiveARProjectile::DrawDistance' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, ProjectileTrail) == 0x000BD8, "Member 'AFortMusterExplosiveARProjectile::ProjectileTrail' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, NS_Explosion) == 0x000BE0, "Member 'AFortMusterExplosiveARProjectile::NS_Explosion' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, FeedbackCue) == 0x000BE8, "Member 'AFortMusterExplosiveARProjectile::FeedbackCue' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, DecalSize) == 0x000BF0, "Member 'AFortMusterExplosiveARProjectile::DecalSize' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, DecalLifespan) == 0x000C08, "Member 'AFortMusterExplosiveARProjectile::DecalLifespan' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, TimebeforeDecalFadeOut) == 0x000C0C, "Member 'AFortMusterExplosiveARProjectile::TimebeforeDecalFadeOut' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, DecalFadeOutDuration) == 0x000C10, "Member 'AFortMusterExplosiveARProjectile::DecalFadeOutDuration' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, DecalMaterial) == 0x000C18, "Member 'AFortMusterExplosiveARProjectile::DecalMaterial' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, Cue_CloseSound) == 0x000C20, "Member 'AFortMusterExplosiveARProjectile::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AFortMusterExplosiveARProjectile, Cue_DistantSound) == 0x000C28, "Member 'AFortMusterExplosiveARProjectile::Cue_DistantSound' has a wrong offset!");

class UMusterCoreWeaponsAnimInstance final : public UAnimInstance
{
public:
	class AFortWeapon*                            OwningWeapon;
	bool                                          bIsShotFired;
	uint8                                         Pad_351[0x3];
	int32                                         LocalAmmoCount;
	float                                         CylinderMaskAlpha;
	bool                                          bIsAmmoCountTwo;
	bool                                          bIsAmmoCountOne;
	bool                                          bStateRuleFromFullToTwoAmmo;
	bool                                          bStateRuleFromTwoToOneAmmo;
	bool                                          bStateRuleFromOneToZero;
	uint8                                         Pad_361[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MusterCoreWeaponsAnimInstance">();
	}
	static class UMusterCoreWeaponsAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMusterCoreWeaponsAnimInstance>();
	}
};
static_assert(alignof(UMusterCoreWeaponsAnimInstance) == 0x000010, "Wrong alignment on UMusterCoreWeaponsAnimInstance");
static_assert(sizeof(UMusterCoreWeaponsAnimInstance) == 0x000370, "Wrong size on UMusterCoreWeaponsAnimInstance");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, OwningWeapon) == 0x000348, "Member 'UMusterCoreWeaponsAnimInstance::OwningWeapon' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bIsShotFired) == 0x000350, "Member 'UMusterCoreWeaponsAnimInstance::bIsShotFired' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, LocalAmmoCount) == 0x000354, "Member 'UMusterCoreWeaponsAnimInstance::LocalAmmoCount' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, CylinderMaskAlpha) == 0x000358, "Member 'UMusterCoreWeaponsAnimInstance::CylinderMaskAlpha' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bIsAmmoCountTwo) == 0x00035C, "Member 'UMusterCoreWeaponsAnimInstance::bIsAmmoCountTwo' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bIsAmmoCountOne) == 0x00035D, "Member 'UMusterCoreWeaponsAnimInstance::bIsAmmoCountOne' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bStateRuleFromFullToTwoAmmo) == 0x00035E, "Member 'UMusterCoreWeaponsAnimInstance::bStateRuleFromFullToTwoAmmo' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bStateRuleFromTwoToOneAmmo) == 0x00035F, "Member 'UMusterCoreWeaponsAnimInstance::bStateRuleFromTwoToOneAmmo' has a wrong offset!");
static_assert(offsetof(UMusterCoreWeaponsAnimInstance, bStateRuleFromOneToZero) == 0x000360, "Member 'UMusterCoreWeaponsAnimInstance::bStateRuleFromOneToZero' has a wrong offset!");

class AFortExCaliberProjectile final : public AFortProjectileAthena
{
public:
	bool                                          bSimulationRunning;
	uint8                                         Pad_BA1[0x7];
	struct FScalableFloat                         TimeToExplode;
	bool                                          bHasStopped;
	uint8                                         Pad_BD1[0x7];
	struct FVector                                HitNormal;
	EPhysicalSurface                              SurfaceType;
	uint8                                         Pad_BF1[0x3];
	class FName                                   SwordRevealMaterialParam;
	class FName                                   EmissiveColorMaterialParam;
	class FName                                   HDRMultiplierMaterialParam;
	struct FLinearColor                           EmissiveBlueColor;
	struct FLinearColor                           EmissivePurpleColor;
	float                                         MinPitchForRotationAdjustment;
	float                                         MaxPitchForRotationAdjustment;
	uint8                                         Pad_C28[0x8];

public:
	void BP_OnProjectileStopped();
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void OnAttachedBuildingDestroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnRep_bSimulationRunning();
	void PlayPreExplosionEfffects();
	void RestartSimulating();
	void SetFuseColorBasedOnTeam();
	void SetupProjectileHitAudio(const struct FVector& ProjectileImpactLocation, const class AActor* HitActor);
	void SetupSwordRevealEffects(class UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha);
	void TriggerExplosion();
	void UnblockPawnCollision();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortExCaliberProjectile">();
	}
	static class AFortExCaliberProjectile* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortExCaliberProjectile>();
	}
};
static_assert(alignof(AFortExCaliberProjectile) == 0x000008, "Wrong alignment on AFortExCaliberProjectile");
static_assert(sizeof(AFortExCaliberProjectile) == 0x000C30, "Wrong size on AFortExCaliberProjectile");
static_assert(offsetof(AFortExCaliberProjectile, bSimulationRunning) == 0x000BA0, "Member 'AFortExCaliberProjectile::bSimulationRunning' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, TimeToExplode) == 0x000BA8, "Member 'AFortExCaliberProjectile::TimeToExplode' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, bHasStopped) == 0x000BD0, "Member 'AFortExCaliberProjectile::bHasStopped' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, HitNormal) == 0x000BD8, "Member 'AFortExCaliberProjectile::HitNormal' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, SurfaceType) == 0x000BF0, "Member 'AFortExCaliberProjectile::SurfaceType' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, SwordRevealMaterialParam) == 0x000BF4, "Member 'AFortExCaliberProjectile::SwordRevealMaterialParam' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, EmissiveColorMaterialParam) == 0x000BF8, "Member 'AFortExCaliberProjectile::EmissiveColorMaterialParam' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, HDRMultiplierMaterialParam) == 0x000BFC, "Member 'AFortExCaliberProjectile::HDRMultiplierMaterialParam' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, EmissiveBlueColor) == 0x000C00, "Member 'AFortExCaliberProjectile::EmissiveBlueColor' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, EmissivePurpleColor) == 0x000C10, "Member 'AFortExCaliberProjectile::EmissivePurpleColor' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, MinPitchForRotationAdjustment) == 0x000C20, "Member 'AFortExCaliberProjectile::MinPitchForRotationAdjustment' has a wrong offset!");
static_assert(offsetof(AFortExCaliberProjectile, MaxPitchForRotationAdjustment) == 0x000C24, "Member 'AFortExCaliberProjectile::MaxPitchForRotationAdjustment' has a wrong offset!");

}
