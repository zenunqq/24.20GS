#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_Hot_Feet_Environmental_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        TargetPlayer;
	TArray<class UParticleSystemComponent*>       SpawnedEmitters;
	class USoundBase*                             SC_Footstep_Local;
	class USoundBase*                             SC_Footstep_Remote;
	class USoundBase*                             SC_Collision;
	class UFortCollisionAudioComponent*           CollisionAudioComp;
	TArray<class UAudioComponent*>                SpawnedAudioComps;
	class USoundBase*                             SC_OnJumpOrBeginFalling;
	class USoundBase*                             SC_OnLand;

public:
	void ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental(int32 EntryPoint);
	void On_Player_Step();
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void On_Target_Pawn_Landed(const struct FHitResult& Hit);
	void On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Hot_Feet_Environmental_C">();
	}
	static class AGCN_Loop_Hot_Feet_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Hot_Feet_Environmental_C>();
	}
};
static_assert(alignof(AGCN_Loop_Hot_Feet_Environmental_C) == 0x000008, "Wrong alignment on AGCN_Loop_Hot_Feet_Environmental_C");
static_assert(sizeof(AGCN_Loop_Hot_Feet_Environmental_C) == 0x0009C0, "Wrong size on AGCN_Loop_Hot_Feet_Environmental_C");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, TargetPlayer) == 0x000968, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::TargetPlayer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SpawnedEmitters) == 0x000970, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SpawnedEmitters' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SC_Footstep_Local) == 0x000980, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SC_Footstep_Local' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SC_Footstep_Remote) == 0x000988, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SC_Footstep_Remote' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SC_Collision) == 0x000990, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SC_Collision' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, CollisionAudioComp) == 0x000998, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SpawnedAudioComps) == 0x0009A0, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SpawnedAudioComps' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SC_OnJumpOrBeginFalling) == 0x0009B0, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SC_OnJumpOrBeginFalling' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Hot_Feet_Environmental_C, SC_OnLand) == 0x0009B8, "Member 'AGCN_Loop_Hot_Feet_Environmental_C::SC_OnLand' has a wrong offset!");

}
