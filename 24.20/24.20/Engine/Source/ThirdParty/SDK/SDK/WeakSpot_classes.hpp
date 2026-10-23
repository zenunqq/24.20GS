#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AWeakSpot_C final : public ABuildingWeakSpot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   ConnectTheDotsComponent;
	class UParticleSystemComponent*               ParticleComponent;
	class UCapsuleComponent*                      CollisionComponent;
	float                                         ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E;
	ETimelineDirection                            ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E;
	uint8                                         Pad_325[0x3];
	class UTimelineComponent*                     ScaleDownParticleTL;
	class USoundBase*                             SpawnSound;
	struct FVector                                Particle_Location;
	TArray<class USoundBase*>                     Crack_sounds;
	double                                        ConnectTheDotsWidth;
	double                                        ConnectTheDotsDuration;
	double                                        ConnectTheDotsTimeoutFromPreviousHit;
	double                                        ConnectTheDotsDurationScale;
	double                                        ConnectTheDotsMaxDuration;
	double                                        ConnectTheDotsTileScale;
	double                                        ConnectTheDotsMinLength;
	double                                        ConnectTheDotsMaxLength;
	class UParticleSystem*                        DamageTemplate;
	class UParticleSystem*                        IdleTemplate;
	class UMaterialInstanceDynamic*               ConnectMID;
	struct FTimerHandle                           HideMeshTimer;

public:
	void ExecuteUbergraph_WeakSpot(int32 EntryPoint);
	void HideMesh();
	void OnFadeOut();
	void OnHit();
	void OnStartDirectionEffect();
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeakSpot_C">();
	}
	static class AWeakSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeakSpot_C>();
	}
};
static_assert(alignof(AWeakSpot_C) == 0x000008, "Wrong alignment on AWeakSpot_C");
static_assert(sizeof(AWeakSpot_C) == 0x0003C0, "Wrong size on AWeakSpot_C");
static_assert(offsetof(AWeakSpot_C, UberGraphFrame) == 0x000300, "Member 'AWeakSpot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsComponent) == 0x000308, "Member 'AWeakSpot_C::ConnectTheDotsComponent' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ParticleComponent) == 0x000310, "Member 'AWeakSpot_C::ParticleComponent' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, CollisionComponent) == 0x000318, "Member 'AWeakSpot_C::CollisionComponent' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E) == 0x000320, "Member 'AWeakSpot_C::ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E) == 0x000324, "Member 'AWeakSpot_C::ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ScaleDownParticleTL) == 0x000328, "Member 'AWeakSpot_C::ScaleDownParticleTL' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, SpawnSound) == 0x000330, "Member 'AWeakSpot_C::SpawnSound' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Particle_Location) == 0x000338, "Member 'AWeakSpot_C::Particle_Location' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, Crack_sounds) == 0x000350, "Member 'AWeakSpot_C::Crack_sounds' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsWidth) == 0x000360, "Member 'AWeakSpot_C::ConnectTheDotsWidth' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsDuration) == 0x000368, "Member 'AWeakSpot_C::ConnectTheDotsDuration' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsTimeoutFromPreviousHit) == 0x000370, "Member 'AWeakSpot_C::ConnectTheDotsTimeoutFromPreviousHit' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsDurationScale) == 0x000378, "Member 'AWeakSpot_C::ConnectTheDotsDurationScale' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMaxDuration) == 0x000380, "Member 'AWeakSpot_C::ConnectTheDotsMaxDuration' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsTileScale) == 0x000388, "Member 'AWeakSpot_C::ConnectTheDotsTileScale' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMinLength) == 0x000390, "Member 'AWeakSpot_C::ConnectTheDotsMinLength' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectTheDotsMaxLength) == 0x000398, "Member 'AWeakSpot_C::ConnectTheDotsMaxLength' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, DamageTemplate) == 0x0003A0, "Member 'AWeakSpot_C::DamageTemplate' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, IdleTemplate) == 0x0003A8, "Member 'AWeakSpot_C::IdleTemplate' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, ConnectMID) == 0x0003B0, "Member 'AWeakSpot_C::ConnectMID' has a wrong offset!");
static_assert(offsetof(AWeakSpot_C, HideMeshTimer) == 0x0003B8, "Member 'AWeakSpot_C::HideMeshTimer' has a wrong offset!");

}
