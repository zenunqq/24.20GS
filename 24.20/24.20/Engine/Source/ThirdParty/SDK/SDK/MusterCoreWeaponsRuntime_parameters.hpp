#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortMusterExplosiveARProjectile_SetHitLocation final
{
public:
	struct FVector                                NewHitLocation;
};
static_assert(alignof(FortMusterExplosiveARProjectile_SetHitLocation) == 0x000008, "Wrong alignment on FortMusterExplosiveARProjectile_SetHitLocation");
static_assert(sizeof(FortMusterExplosiveARProjectile_SetHitLocation) == 0x000018, "Wrong size on FortMusterExplosiveARProjectile_SetHitLocation");
static_assert(offsetof(FortMusterExplosiveARProjectile_SetHitLocation, NewHitLocation) == 0x000000, "Member 'FortMusterExplosiveARProjectile_SetHitLocation::NewHitLocation' has a wrong offset!");

struct FortMusterExplosiveARProjectile_SetHitPlayer final
{
public:
	bool                                          bWasHit;
};
static_assert(alignof(FortMusterExplosiveARProjectile_SetHitPlayer) == 0x000001, "Wrong alignment on FortMusterExplosiveARProjectile_SetHitPlayer");
static_assert(sizeof(FortMusterExplosiveARProjectile_SetHitPlayer) == 0x000001, "Wrong size on FortMusterExplosiveARProjectile_SetHitPlayer");
static_assert(offsetof(FortMusterExplosiveARProjectile_SetHitPlayer, bWasHit) == 0x000000, "Member 'FortMusterExplosiveARProjectile_SetHitPlayer::bWasHit' has a wrong offset!");

struct FortMusterExplosiveARProjectile_SetHitRotation final
{
public:
	struct FRotator                               NewHitRotation;
};
static_assert(alignof(FortMusterExplosiveARProjectile_SetHitRotation) == 0x000008, "Wrong alignment on FortMusterExplosiveARProjectile_SetHitRotation");
static_assert(sizeof(FortMusterExplosiveARProjectile_SetHitRotation) == 0x000018, "Wrong size on FortMusterExplosiveARProjectile_SetHitRotation");
static_assert(offsetof(FortMusterExplosiveARProjectile_SetHitRotation, NewHitRotation) == 0x000000, "Member 'FortMusterExplosiveARProjectile_SetHitRotation::NewHitRotation' has a wrong offset!");

struct FortExCaliberProjectile_OnAttachedActorDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(FortExCaliberProjectile_OnAttachedActorDestroyed) == 0x000008, "Wrong alignment on FortExCaliberProjectile_OnAttachedActorDestroyed");
static_assert(sizeof(FortExCaliberProjectile_OnAttachedActorDestroyed) == 0x000008, "Wrong size on FortExCaliberProjectile_OnAttachedActorDestroyed");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedActorDestroyed, DestroyedActor) == 0x000000, "Member 'FortExCaliberProjectile_OnAttachedActorDestroyed::DestroyedActor' has a wrong offset!");

struct FortExCaliberProjectile_OnAttachedBuildingDestroyed final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(FortExCaliberProjectile_OnAttachedBuildingDestroyed) == 0x000008, "Wrong alignment on FortExCaliberProjectile_OnAttachedBuildingDestroyed");
static_assert(sizeof(FortExCaliberProjectile_OnAttachedBuildingDestroyed) == 0x000060, "Wrong size on FortExCaliberProjectile_OnAttachedBuildingDestroyed");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, DamagedActor) == 0x000000, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::DamagedActor' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, Damage) == 0x000008, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::Damage' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, InstigatedBy) == 0x000010, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, DamageCauser) == 0x000018, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::DamageCauser' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, HitLocation) == 0x000020, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::HitLocation' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, FHitComponent) == 0x000038, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::FHitComponent' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, BoneName) == 0x000040, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::BoneName' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_OnAttachedBuildingDestroyed, Momentum) == 0x000048, "Member 'FortExCaliberProjectile_OnAttachedBuildingDestroyed::Momentum' has a wrong offset!");

struct FortExCaliberProjectile_SetupProjectileHitAudio final
{
public:
	struct FVector                                ProjectileImpactLocation;
	const class AActor*                           HitActor;
};
static_assert(alignof(FortExCaliberProjectile_SetupProjectileHitAudio) == 0x000008, "Wrong alignment on FortExCaliberProjectile_SetupProjectileHitAudio");
static_assert(sizeof(FortExCaliberProjectile_SetupProjectileHitAudio) == 0x000020, "Wrong size on FortExCaliberProjectile_SetupProjectileHitAudio");
static_assert(offsetof(FortExCaliberProjectile_SetupProjectileHitAudio, ProjectileImpactLocation) == 0x000000, "Member 'FortExCaliberProjectile_SetupProjectileHitAudio::ProjectileImpactLocation' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_SetupProjectileHitAudio, HitActor) == 0x000018, "Member 'FortExCaliberProjectile_SetupProjectileHitAudio::HitActor' has a wrong offset!");

struct FortExCaliberProjectile_SetupSwordRevealEffects final
{
public:
	class UStaticMeshComponent*                   ProjectileMesh;
	float                                         SwordRevealAlpha;
	float                                         ColorChangeAlpha;
	float                                         HDRMultiplierAlpha;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FortExCaliberProjectile_SetupSwordRevealEffects) == 0x000008, "Wrong alignment on FortExCaliberProjectile_SetupSwordRevealEffects");
static_assert(sizeof(FortExCaliberProjectile_SetupSwordRevealEffects) == 0x000018, "Wrong size on FortExCaliberProjectile_SetupSwordRevealEffects");
static_assert(offsetof(FortExCaliberProjectile_SetupSwordRevealEffects, ProjectileMesh) == 0x000000, "Member 'FortExCaliberProjectile_SetupSwordRevealEffects::ProjectileMesh' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_SetupSwordRevealEffects, SwordRevealAlpha) == 0x000008, "Member 'FortExCaliberProjectile_SetupSwordRevealEffects::SwordRevealAlpha' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_SetupSwordRevealEffects, ColorChangeAlpha) == 0x00000C, "Member 'FortExCaliberProjectile_SetupSwordRevealEffects::ColorChangeAlpha' has a wrong offset!");
static_assert(offsetof(FortExCaliberProjectile_SetupSwordRevealEffects, HDRMultiplierAlpha) == 0x000010, "Member 'FortExCaliberProjectile_SetupSwordRevealEffects::HDRMultiplierAlpha' has a wrong offset!");

}
