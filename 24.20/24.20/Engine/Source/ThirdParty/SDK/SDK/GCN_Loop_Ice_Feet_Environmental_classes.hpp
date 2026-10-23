#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_Ice_Feet_Environmental_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AActor*                                 TargetActor;
	TArray<class UFXSystemComponent*>             SpawnedEmitters;
	class UFortCollisionAudioComponent*           CollisionAudioComp;
	TArray<class UAudioComponent*>                SpawnedAudioComps;

public:
	void AttachFX(class USceneComponent* Mesh);
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental(int32 EntryPoint);
	void On_Footstep_Event();
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnPawnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Ice_Feet_Environmental_C">();
	}
	static class AGCN_Loop_Ice_Feet_Environmental_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Ice_Feet_Environmental_C>();
	}
};
static_assert(alignof(AGCN_Loop_Ice_Feet_Environmental_C) == 0x000008, "Wrong alignment on AGCN_Loop_Ice_Feet_Environmental_C");
static_assert(sizeof(AGCN_Loop_Ice_Feet_Environmental_C) == 0x000998, "Wrong size on AGCN_Loop_Ice_Feet_Environmental_C");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, TargetActor) == 0x000968, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::TargetActor' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SpawnedEmitters) == 0x000970, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SpawnedEmitters' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, CollisionAudioComp) == 0x000980, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::CollisionAudioComp' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Ice_Feet_Environmental_C, SpawnedAudioComps) == 0x000988, "Member 'AGCN_Loop_Ice_Feet_Environmental_C::SpawnedAudioComps' has a wrong offset!");

}
