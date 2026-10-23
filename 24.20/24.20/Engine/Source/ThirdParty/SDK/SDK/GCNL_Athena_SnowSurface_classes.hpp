#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GCNL_Athena_Surface_Parent_classes.hpp"

namespace SDK
{

class AGCNL_Athena_SnowSurface_C final : public AGCNL_Athena_Surface_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCNL_Athena_SnowSurface_C;
	class UNiagaraComponent*                      FootStepFX;
	bool                                          bNotValid;
	bool                                          bReplayMode;
	uint8                                         Pad_98A[0x6];
	class AFortReplaySpectatorAthena*             ReplayController;
	struct FGameplayCueParameters                 GCParameters;

public:
	void ExecuteUbergraph_GCNL_Athena_SnowSurface(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnLoopingStartNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnPlayerFootstep();
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_SnowSurface_C">();
	}
	static class AGCNL_Athena_SnowSurface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_SnowSurface_C>();
	}
};
static_assert(alignof(AGCNL_Athena_SnowSurface_C) == 0x000008, "Wrong alignment on AGCNL_Athena_SnowSurface_C");
static_assert(sizeof(AGCNL_Athena_SnowSurface_C) == 0x000A68, "Wrong size on AGCNL_Athena_SnowSurface_C");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, UberGraphFrame_GCNL_Athena_SnowSurface_C) == 0x000978, "Member 'AGCNL_Athena_SnowSurface_C::UberGraphFrame_GCNL_Athena_SnowSurface_C' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, FootStepFX) == 0x000980, "Member 'AGCNL_Athena_SnowSurface_C::FootStepFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, bNotValid) == 0x000988, "Member 'AGCNL_Athena_SnowSurface_C::bNotValid' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, bReplayMode) == 0x000989, "Member 'AGCNL_Athena_SnowSurface_C::bReplayMode' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, ReplayController) == 0x000990, "Member 'AGCNL_Athena_SnowSurface_C::ReplayController' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SnowSurface_C, GCParameters) == 0x000998, "Member 'AGCNL_Athena_SnowSurface_C::GCParameters' has a wrong offset!");

}
