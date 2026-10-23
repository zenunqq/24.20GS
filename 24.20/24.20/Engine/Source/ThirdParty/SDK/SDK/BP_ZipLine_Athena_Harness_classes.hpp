#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class ABP_ZipLine_Athena_Harness_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UParticleSystemComponent*               P_Zipline_AttachedToPlayer;
	class UStaticMeshComponent*                   SM_Zipline_Magnet;
	class UArrowComponent*                        Arrow;
	class UParticleSystemComponent*               P_Zipline_Pulley_SpeedLines;
	class UStaticMeshComponent*                   SM_Zipline_Motor;
	class USceneComponent*                        Scene;
	class UParticleSystem*                        SpawnFX;
	class UParticleSystem*                        DestroyFX;
	class UParticleSystem*                        CollideDestroyVFX;
	class USoundBase*                             SpawnSound;
	class USoundBase*                             UnSpawnSound;
	class AFortPlayerPawn*                        AttachedPlayer;
	bool                                          HasHitAnotherPlayer;
	uint8                                         Pad_2F1[0x7];
	double                                        ZiplineChimeVisualUpdate;
	struct FTimerHandle                           ChimeTimer;
	struct FVector                                ZiplineDirection;
	class ABP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline;
	double                                        SplineRotationUpdateSeconds;
	struct FTimerHandle                           MotorUpdateTimer;
	class AFortAthenaZipline*                     AttachedZipline;
	bool                                          debugOutput;
	bool                                          IsReversingMomentum;
	bool                                          bIsTravelingUphill;
	bool                                          bIsTravelingDownhill;
	struct FGameplayTag                           GCNTag_Travel;
	class USoundBase*                             TravelSound;
	struct FGameplayTag                           GCNTag_HighSpeed;
	struct FGameplayTag                           GCNTag_ZiplineBraking;
	bool                                          bLoopingDownhillGCN;
	uint8                                         Pad_359[0x3];
	struct FActiveGameplayEffectHandle            DownhillTravelGE;
	bool                                          UseMeshAttachment;
	uint8                                         Pad_365[0x3];
	struct FVector                                CurrentDesired_Zipline_Offset;
	class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* DynamicZiplineSpline;
	class USplineComponent*                       NewVar_0;

public:
	void Chime_Visual();
	void Cleanup_On_DownhillGCN();
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32 EntryPoint);
	void HandleOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnRep_AttachedPlayer();
	void OrientMotorForZipline(class AFortAthenaZiplineBase* Zipline, const struct FVector& DesiredZiplineOffset);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void RotateToZiplineDirection();
	void Start_Travel_Audio();
	void Stop_Travel_Audio();
	void Update_Audio_and_VFXParams();
	void UpdateMotorToDynSpline();
	void UpdateMotorToSpline();
	void UpdateParamsForAudioAndVFX();
	void UpdateZiplineOffsetLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ZipLine_Athena_Harness_C">();
	}
	static class ABP_ZipLine_Athena_Harness_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ZipLine_Athena_Harness_C>();
	}
};
static_assert(alignof(ABP_ZipLine_Athena_Harness_C) == 0x000008, "Wrong alignment on ABP_ZipLine_Athena_Harness_C");
static_assert(sizeof(ABP_ZipLine_Athena_Harness_C) == 0x000390, "Wrong size on ABP_ZipLine_Athena_Harness_C");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, UberGraphFrame) == 0x000288, "Member 'ABP_ZipLine_Athena_Harness_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, P_Zipline_AttachedToPlayer) == 0x000290, "Member 'ABP_ZipLine_Athena_Harness_C::P_Zipline_AttachedToPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SM_Zipline_Magnet) == 0x000298, "Member 'ABP_ZipLine_Athena_Harness_C::SM_Zipline_Magnet' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, Arrow) == 0x0002A0, "Member 'ABP_ZipLine_Athena_Harness_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, P_Zipline_Pulley_SpeedLines) == 0x0002A8, "Member 'ABP_ZipLine_Athena_Harness_C::P_Zipline_Pulley_SpeedLines' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SM_Zipline_Motor) == 0x0002B0, "Member 'ABP_ZipLine_Athena_Harness_C::SM_Zipline_Motor' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, Scene) == 0x0002B8, "Member 'ABP_ZipLine_Athena_Harness_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SpawnFX) == 0x0002C0, "Member 'ABP_ZipLine_Athena_Harness_C::SpawnFX' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, DestroyFX) == 0x0002C8, "Member 'ABP_ZipLine_Athena_Harness_C::DestroyFX' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, CollideDestroyVFX) == 0x0002D0, "Member 'ABP_ZipLine_Athena_Harness_C::CollideDestroyVFX' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SpawnSound) == 0x0002D8, "Member 'ABP_ZipLine_Athena_Harness_C::SpawnSound' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, UnSpawnSound) == 0x0002E0, "Member 'ABP_ZipLine_Athena_Harness_C::UnSpawnSound' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, AttachedPlayer) == 0x0002E8, "Member 'ABP_ZipLine_Athena_Harness_C::AttachedPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, HasHitAnotherPlayer) == 0x0002F0, "Member 'ABP_ZipLine_Athena_Harness_C::HasHitAnotherPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, ZiplineChimeVisualUpdate) == 0x0002F8, "Member 'ABP_ZipLine_Athena_Harness_C::ZiplineChimeVisualUpdate' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, ChimeTimer) == 0x000300, "Member 'ABP_ZipLine_Athena_Harness_C::ChimeTimer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, ZiplineDirection) == 0x000308, "Member 'ABP_ZipLine_Athena_Harness_C::ZiplineDirection' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, EnvZiplineSpline) == 0x000320, "Member 'ABP_ZipLine_Athena_Harness_C::EnvZiplineSpline' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, SplineRotationUpdateSeconds) == 0x000328, "Member 'ABP_ZipLine_Athena_Harness_C::SplineRotationUpdateSeconds' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, MotorUpdateTimer) == 0x000330, "Member 'ABP_ZipLine_Athena_Harness_C::MotorUpdateTimer' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, AttachedZipline) == 0x000338, "Member 'ABP_ZipLine_Athena_Harness_C::AttachedZipline' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, debugOutput) == 0x000340, "Member 'ABP_ZipLine_Athena_Harness_C::debugOutput' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, IsReversingMomentum) == 0x000341, "Member 'ABP_ZipLine_Athena_Harness_C::IsReversingMomentum' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, bIsTravelingUphill) == 0x000342, "Member 'ABP_ZipLine_Athena_Harness_C::bIsTravelingUphill' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, bIsTravelingDownhill) == 0x000343, "Member 'ABP_ZipLine_Athena_Harness_C::bIsTravelingDownhill' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, GCNTag_Travel) == 0x000344, "Member 'ABP_ZipLine_Athena_Harness_C::GCNTag_Travel' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, TravelSound) == 0x000348, "Member 'ABP_ZipLine_Athena_Harness_C::TravelSound' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, GCNTag_HighSpeed) == 0x000350, "Member 'ABP_ZipLine_Athena_Harness_C::GCNTag_HighSpeed' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, GCNTag_ZiplineBraking) == 0x000354, "Member 'ABP_ZipLine_Athena_Harness_C::GCNTag_ZiplineBraking' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, bLoopingDownhillGCN) == 0x000358, "Member 'ABP_ZipLine_Athena_Harness_C::bLoopingDownhillGCN' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, DownhillTravelGE) == 0x00035C, "Member 'ABP_ZipLine_Athena_Harness_C::DownhillTravelGE' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, UseMeshAttachment) == 0x000364, "Member 'ABP_ZipLine_Athena_Harness_C::UseMeshAttachment' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, CurrentDesired_Zipline_Offset) == 0x000368, "Member 'ABP_ZipLine_Athena_Harness_C::CurrentDesired_Zipline_Offset' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, DynamicZiplineSpline) == 0x000380, "Member 'ABP_ZipLine_Athena_Harness_C::DynamicZiplineSpline' has a wrong offset!");
static_assert(offsetof(ABP_ZipLine_Athena_Harness_C, NewVar_0) == 0x000388, "Member 'ABP_ZipLine_Athena_Harness_C::NewVar_0' has a wrong offset!");

}
