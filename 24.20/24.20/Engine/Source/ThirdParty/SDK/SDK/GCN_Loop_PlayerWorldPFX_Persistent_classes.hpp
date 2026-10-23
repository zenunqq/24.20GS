#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_PlayerWorldPFX_Persistent_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNiagaraComponent*                      NS_Loop_WorldFX_Persistent_Motes01;
	class UNiagaraComponent*                      NS_Loop_WorldFX_Persistent;
	class AActor*                                 My_Target;
	struct FTimerHandle                           Timer;
	double                                        LoopingCheckTime;

public:
	void ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnLoopingStartNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void SpawnNiagara();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_PlayerWorldPFX_Persistent_C">();
	}
	static class AGCN_Loop_PlayerWorldPFX_Persistent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_PlayerWorldPFX_Persistent_C>();
	}
};
static_assert(alignof(AGCN_Loop_PlayerWorldPFX_Persistent_C) == 0x000008, "Wrong alignment on AGCN_Loop_PlayerWorldPFX_Persistent_C");
static_assert(sizeof(AGCN_Loop_PlayerWorldPFX_Persistent_C) == 0x000990, "Wrong size on AGCN_Loop_PlayerWorldPFX_Persistent_C");
static_assert(offsetof(AGCN_Loop_PlayerWorldPFX_Persistent_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_PlayerWorldPFX_Persistent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_PlayerWorldPFX_Persistent_C, NS_Loop_WorldFX_Persistent_Motes01) == 0x000968, "Member 'AGCN_Loop_PlayerWorldPFX_Persistent_C::NS_Loop_WorldFX_Persistent_Motes01' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_PlayerWorldPFX_Persistent_C, NS_Loop_WorldFX_Persistent) == 0x000970, "Member 'AGCN_Loop_PlayerWorldPFX_Persistent_C::NS_Loop_WorldFX_Persistent' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_PlayerWorldPFX_Persistent_C, My_Target) == 0x000978, "Member 'AGCN_Loop_PlayerWorldPFX_Persistent_C::My_Target' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_PlayerWorldPFX_Persistent_C, Timer) == 0x000980, "Member 'AGCN_Loop_PlayerWorldPFX_Persistent_C::Timer' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_PlayerWorldPFX_Persistent_C, LoopingCheckTime) == 0x000988, "Member 'AGCN_Loop_PlayerWorldPFX_Persistent_C::LoopingCheckTime' has a wrong offset!");

}
