#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_Prj_Commando_FragGrenade_Cluster_C final : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UParticleSystemComponent*               ParticleSystem1;
	class UAudioComponent*                        Audio1;
	class USoundBase*                             BounceSound;
	class UParticleSystem*                        P_Explosion;
	class USoundBase*                             ExplosionSound;
	struct FVector                                ExplosionLocation;
	double                                        MinExplosionDelay;
	double                                        MaxExplosionDelay;

public:
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32 EntryPoint);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void OnStop(const struct FHitResult& Hit);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Commando_FragGrenade_Cluster_C">();
	}
	static class AB_Prj_Commando_FragGrenade_Cluster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Commando_FragGrenade_Cluster_C>();
	}
};
static_assert(alignof(AB_Prj_Commando_FragGrenade_Cluster_C) == 0x000008, "Wrong alignment on AB_Prj_Commando_FragGrenade_Cluster_C");
static_assert(sizeof(AB_Prj_Commando_FragGrenade_Cluster_C) == 0x000A78, "Wrong size on AB_Prj_Commando_FragGrenade_Cluster_C");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, UberGraphFrame) == 0x000A20, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, ParticleSystem1) == 0x000A28, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::ParticleSystem1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, Audio1) == 0x000A30, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::Audio1' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, BounceSound) == 0x000A38, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::BounceSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, P_Explosion) == 0x000A40, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, ExplosionSound) == 0x000A48, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::ExplosionSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, ExplosionLocation) == 0x000A50, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::ExplosionLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, MinExplosionDelay) == 0x000A68, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::MinExplosionDelay' has a wrong offset!");
static_assert(offsetof(AB_Prj_Commando_FragGrenade_Cluster_C, MaxExplosionDelay) == 0x000A70, "Member 'AB_Prj_Commando_FragGrenade_Cluster_C::MaxExplosionDelay' has a wrong offset!");

}
