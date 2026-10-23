#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_Prj_Athena_Grenade_Base_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortCollisionAudioComponent*           FortCollisionAudio;
	class URotatingMovementComponent*             RotatingMovement;
	class UParticleSystemComponent*               Fuse_Particle;
	class UStaticMeshComponent*                   Mesh;
	class UAudioComponent*                        GrenadeFuse_AudioComponent;
	class UParticleSystemComponent*               Effect_Distance;
	TSoftObjectPtr<class UParticleSystem>         P_Explosion;
	class USoundBase*                             Cue_ExplosionSound;
	TSoftObjectPtr<class UParticleSystem>         P_Explosion_Water;
	int32                                         NumberOfBouncesTillExplode;
	int32                                         CurrentNumberOfBounces;
	class USoundBase*                             Cue_GrenadeFuseSound;
	double                                        BouncePawnAgainstPawnGravityScale;
	class UForceFeedbackEffect*                   ExplosionForceFeedbackNear;
	class UForceFeedbackEffect*                   ExplosionForceFeedbackFar;
	class USoundBase*                             Cue_Bounce;
	class UClass*                                 ExplosionCameraShake;
	double                                        FuseTime;
	double                                        ExplosionRadius;
	struct FRotator                               Explosion_Rotation;
	class UAudioComponent*                        WaterFuseAudioComponent;
	class USoundBase*                             Water_Debris_Explosion;
	class USoundBase*                             Splash_Sound;
	class UTexture*                               SoundIndicatorIcon;
	struct FTimerHandle                           FuseIndicatorTimer;
	TSoftObjectPtr<class UNiagaraSystem>          NS_Explosion;
	TSoftObjectPtr<class UNiagaraSystem>          NS_Explosion_Water;
	EFXType                                       FXType;
	uint8                                         Pad_B89[0x7];
	class UFXSystemAsset*                         VFX_Explosion;
	class UFXSystemAsset*                         VFX_Explosion_Water;
	struct FTimerHandle                           FuseTimer_;
	class UNiagaraSystem*                         NS_HitWater;
	class USoundBase*                             WaterFuseSound;

public:
	void AysncLoad();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsFirstBody);
	void ExecuteUbergraph_B_Prj_Athena_Grenade_Base(int32 EntryPoint);
	void FuseEnded();
	void Held_Water_Impact();
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void OnLoaded_6A6D02914DCE95902837C994C3BE7DC5(class UObject* Loaded);
	void OnLoaded_6A6D02914DCE95902837C994D84D08EA(class UObject* Loaded);
	void OnResumeSimulation();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ShowFuseIndicator();
	void Splash(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsFirstBody);
	void Stop_Rotation();
	void UserConstructionScript();

	void GetExplosion(bool InWater, class UFXSystemAsset** FX_System) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_Grenade_Base_C">();
	}
	static class AB_Prj_Athena_Grenade_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_Grenade_Base_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_Grenade_Base_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_Grenade_Base_C");
static_assert(sizeof(AB_Prj_Athena_Grenade_Base_C) == 0x000BB8, "Wrong size on AB_Prj_Athena_Grenade_Base_C");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, UberGraphFrame) == 0x000A20, "Member 'AB_Prj_Athena_Grenade_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, FortCollisionAudio) == 0x000A28, "Member 'AB_Prj_Athena_Grenade_Base_C::FortCollisionAudio' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, RotatingMovement) == 0x000A30, "Member 'AB_Prj_Athena_Grenade_Base_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Fuse_Particle) == 0x000A38, "Member 'AB_Prj_Athena_Grenade_Base_C::Fuse_Particle' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Mesh) == 0x000A40, "Member 'AB_Prj_Athena_Grenade_Base_C::Mesh' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, GrenadeFuse_AudioComponent) == 0x000A48, "Member 'AB_Prj_Athena_Grenade_Base_C::GrenadeFuse_AudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Effect_Distance) == 0x000A50, "Member 'AB_Prj_Athena_Grenade_Base_C::Effect_Distance' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, P_Explosion) == 0x000A58, "Member 'AB_Prj_Athena_Grenade_Base_C::P_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Cue_ExplosionSound) == 0x000A80, "Member 'AB_Prj_Athena_Grenade_Base_C::Cue_ExplosionSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, P_Explosion_Water) == 0x000A88, "Member 'AB_Prj_Athena_Grenade_Base_C::P_Explosion_Water' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, NumberOfBouncesTillExplode) == 0x000AB0, "Member 'AB_Prj_Athena_Grenade_Base_C::NumberOfBouncesTillExplode' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, CurrentNumberOfBounces) == 0x000AB4, "Member 'AB_Prj_Athena_Grenade_Base_C::CurrentNumberOfBounces' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Cue_GrenadeFuseSound) == 0x000AB8, "Member 'AB_Prj_Athena_Grenade_Base_C::Cue_GrenadeFuseSound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, BouncePawnAgainstPawnGravityScale) == 0x000AC0, "Member 'AB_Prj_Athena_Grenade_Base_C::BouncePawnAgainstPawnGravityScale' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, ExplosionForceFeedbackNear) == 0x000AC8, "Member 'AB_Prj_Athena_Grenade_Base_C::ExplosionForceFeedbackNear' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, ExplosionForceFeedbackFar) == 0x000AD0, "Member 'AB_Prj_Athena_Grenade_Base_C::ExplosionForceFeedbackFar' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Cue_Bounce) == 0x000AD8, "Member 'AB_Prj_Athena_Grenade_Base_C::Cue_Bounce' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, ExplosionCameraShake) == 0x000AE0, "Member 'AB_Prj_Athena_Grenade_Base_C::ExplosionCameraShake' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, FuseTime) == 0x000AE8, "Member 'AB_Prj_Athena_Grenade_Base_C::FuseTime' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, ExplosionRadius) == 0x000AF0, "Member 'AB_Prj_Athena_Grenade_Base_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Explosion_Rotation) == 0x000AF8, "Member 'AB_Prj_Athena_Grenade_Base_C::Explosion_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, WaterFuseAudioComponent) == 0x000B10, "Member 'AB_Prj_Athena_Grenade_Base_C::WaterFuseAudioComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Water_Debris_Explosion) == 0x000B18, "Member 'AB_Prj_Athena_Grenade_Base_C::Water_Debris_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, Splash_Sound) == 0x000B20, "Member 'AB_Prj_Athena_Grenade_Base_C::Splash_Sound' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, SoundIndicatorIcon) == 0x000B28, "Member 'AB_Prj_Athena_Grenade_Base_C::SoundIndicatorIcon' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, FuseIndicatorTimer) == 0x000B30, "Member 'AB_Prj_Athena_Grenade_Base_C::FuseIndicatorTimer' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, NS_Explosion) == 0x000B38, "Member 'AB_Prj_Athena_Grenade_Base_C::NS_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, NS_Explosion_Water) == 0x000B60, "Member 'AB_Prj_Athena_Grenade_Base_C::NS_Explosion_Water' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, FXType) == 0x000B88, "Member 'AB_Prj_Athena_Grenade_Base_C::FXType' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, VFX_Explosion) == 0x000B90, "Member 'AB_Prj_Athena_Grenade_Base_C::VFX_Explosion' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, VFX_Explosion_Water) == 0x000B98, "Member 'AB_Prj_Athena_Grenade_Base_C::VFX_Explosion_Water' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, FuseTimer_) == 0x000BA0, "Member 'AB_Prj_Athena_Grenade_Base_C::FuseTimer_' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, NS_HitWater) == 0x000BA8, "Member 'AB_Prj_Athena_Grenade_Base_C::NS_HitWater' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_Grenade_Base_C, WaterFuseSound) == 0x000BB0, "Member 'AB_Prj_Athena_Grenade_Base_C::WaterFuseSound' has a wrong offset!");

}
