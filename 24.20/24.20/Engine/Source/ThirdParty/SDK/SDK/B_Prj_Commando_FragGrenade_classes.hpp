#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class AB_Prj_Commando_FragGrenade_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class URotatingMovementComponent*             RotatingMovement;
	class UParticleSystemComponent*               Fuse_Particle;
	class UStaticMeshComponent*                   Mesh;
	class UAudioComponent*                        GrenadeFuse_AudioComponent;
	class UParticleSystemComponent*               Effect_Distance;
	class UParticleSystem*                        P_Explosion;
	class USoundBase*                             Cue_DistantSound;
	class USoundBase*                             Cue_CloseSound;
	double                                        ExplosionRadius;
	int32                                         NumberOfBouncesTillExplode;
	int32                                         CurrentNumberOfBounces;
	class USoundBase*                             Cue_GrenadeFuseSound;
	double                                        BouncePawnAgainstPawnGravityScale;
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;
	int32                                         MaxClusterGrenades;
	struct FGameplayTag                           EC_ClusterExplosion;
	bool                                          bHasCluster;
	uint8                                         Pad_AA1[0x7];
	class UClass*                                 Prj_Cluster;
	struct FFortGameplayEffectContainerSpec       ClusterContainerSpec;
	bool                                          bHasKeepOut;
	uint8                                         Pad_B69[0x7];
	struct FFortGameplayEffectContainerSpec       KeepOutContainerSpec;
	class UClass*                                 AOE_KeepOut;
	bool                                          bHasClusterTactical;
	uint8                                         Pad_C31[0x7];
	struct FFortGameplayEffectContainerSpec       Cluster_Tactical_Container_Spec;
	struct FGameplayTagContainer                  TC_ActorTagsThatShouldExplodeOnOverlap;
	struct FGameplayTag                           T_Event_GrenadeExploded;

public:
	void Bind_Destroy_Grenade();
	double CalcGrenadeSpeed(double Angle);
	void CheckKeepOutAndCluster();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint);
	void Force_On_Exploded_Effects();
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void OnRep_StoredHit();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SendExplodedEvent();
	void SpawnClusters();
	void SpawnKeepOut();
	void Stop_Rotation();
	void TriggerDoExplsoion();
	void Unbind_Destroy_Grenade();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Commando_FragGrenade_C">();
	}
	static class AB_Prj_Commando_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Commando_FragGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Commando_FragGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Commando_FragGrenade_C");
static_assert(sizeof(AB_Prj_Commando_FragGrenade_C) == 0x000D18, "Wrong size on AB_Prj_Commando_FragGrenade_C");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, UberGraphFrame) == 0x000A20, "Member 'AB_Prj_Commando_FragGrenade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, RotatingMovement) == 0x000A28, "Member 'AB_Prj_Commando_FragGrenade_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Fuse_Particle) == 0x000A30, "Member 'AB_Prj_Commando_FragGrenade_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Mesh) == 0x000A38, "Member 'AB_Prj_Commando_FragGrenade_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, GrenadeFuse_AudioComponent) == 0x000A40, "Member 'AB_Prj_Commando_FragGrenade_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Effect_Distance) == 0x000A48, "Member 'AB_Prj_Commando_FragGrenade_C::Effect_Distance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, P_Explosion) == 0x000A50, "Member 'AB_Prj_Commando_FragGrenade_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_DistantSound) == 0x000A58, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_DistantSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_CloseSound) == 0x000A60, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_CloseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionRadius) == 0x000A68, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, NumberOfBouncesTillExplode) == 0x000A70, "Member 'AB_Prj_Commando_FragGrenade_C::NumberOfBouncesTillExplode' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, CurrentNumberOfBounces) == 0x000A74, "Member 'AB_Prj_Commando_FragGrenade_C::CurrentNumberOfBounces' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cue_GrenadeFuseSound) == 0x000A78, "Member 'AB_Prj_Commando_FragGrenade_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, BouncePawnAgainstPawnGravityScale) == 0x000A80, "Member 'AB_Prj_Commando_FragGrenade_C::BouncePawnAgainstPawnGravityScale' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionForceFeedbackNear) == 0x000A88, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ExplosionForceFeedbackFar) == 0x000A90, "Member 'AB_Prj_Commando_FragGrenade_C::ExplosionForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, MaxClusterGrenades) == 0x000A98, "Member 'AB_Prj_Commando_FragGrenade_C::MaxClusterGrenades' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, EC_ClusterExplosion) == 0x000A9C, "Member 'AB_Prj_Commando_FragGrenade_C::EC_ClusterExplosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasCluster) == 0x000AA0, "Member 'AB_Prj_Commando_FragGrenade_C::bHasCluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Prj_Cluster) == 0x000AA8, "Member 'AB_Prj_Commando_FragGrenade_C::Prj_Cluster' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, ClusterContainerSpec) == 0x000AB0, "Member 'AB_Prj_Commando_FragGrenade_C::ClusterContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasKeepOut) == 0x000B68, "Member 'AB_Prj_Commando_FragGrenade_C::bHasKeepOut' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, KeepOutContainerSpec) == 0x000B70, "Member 'AB_Prj_Commando_FragGrenade_C::KeepOutContainerSpec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, AOE_KeepOut) == 0x000C28, "Member 'AB_Prj_Commando_FragGrenade_C::AOE_KeepOut' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, bHasClusterTactical) == 0x000C30, "Member 'AB_Prj_Commando_FragGrenade_C::bHasClusterTactical' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, Cluster_Tactical_Container_Spec) == 0x000C38, "Member 'AB_Prj_Commando_FragGrenade_C::Cluster_Tactical_Container_Spec' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, TC_ActorTagsThatShouldExplodeOnOverlap) == 0x000CF0, "Member 'AB_Prj_Commando_FragGrenade_C::TC_ActorTagsThatShouldExplodeOnOverlap' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_C, T_Event_GrenadeExploded) == 0x000D10, "Member 'AB_Prj_Commando_FragGrenade_C::T_Event_GrenadeExploded' has a wrong offset!");

}
