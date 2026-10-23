#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AGCN_Athena_Interrogation_Reveal_Latent_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  PostProcess;
	double                                        SweepDuration;
	struct FTimerHandle                           SweepDelayHandle;
	double                                        SweepRadius;
	struct FVector                                SourceObjectLocation;
	class APlayerPawn_Athena_C*                   PlayerPawnAthena;
	double                                        DelayBeforeSweep;
	struct FTimerHandle                           DelayBeforeSweepHandle;
	struct FVector                                ParticleRelativeLocation;
	class USoundMix*                              RevealSoundMix;
	struct FScalableFloat                         StencilDuration;
	bool                                          bShouldPlayParticleEffectOnHand;

public:
	void BeginSweepFX();
	void EndSweepFX();
	void ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent(int32 EntryPoint);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void PlayWorldSweep();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Interrogation_Reveal_Latent_C">();
	}
	static class AGCN_Athena_Interrogation_Reveal_Latent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_Interrogation_Reveal_Latent_C>();
	}
};
static_assert(alignof(AGCN_Athena_Interrogation_Reveal_Latent_C) == 0x000008, "Wrong alignment on AGCN_Athena_Interrogation_Reveal_Latent_C");
static_assert(sizeof(AGCN_Athena_Interrogation_Reveal_Latent_C) == 0x0005D0, "Wrong size on AGCN_Athena_Interrogation_Reveal_Latent_C");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, UberGraphFrame) == 0x000528, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, PostProcess) == 0x000530, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, SweepDuration) == 0x000538, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::SweepDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, SweepDelayHandle) == 0x000540, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::SweepDelayHandle' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, SweepRadius) == 0x000548, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::SweepRadius' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, SourceObjectLocation) == 0x000550, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::SourceObjectLocation' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, PlayerPawnAthena) == 0x000568, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::PlayerPawnAthena' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, DelayBeforeSweep) == 0x000570, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::DelayBeforeSweep' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, DelayBeforeSweepHandle) == 0x000578, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::DelayBeforeSweepHandle' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, ParticleRelativeLocation) == 0x000580, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::ParticleRelativeLocation' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, RevealSoundMix) == 0x000598, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::RevealSoundMix' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, StencilDuration) == 0x0005A0, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::StencilDuration' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Interrogation_Reveal_Latent_C, bShouldPlayParticleEffectOnHand) == 0x0005C8, "Member 'AGCN_Athena_Interrogation_Reveal_Latent_C::bShouldPlayParticleEffectOnHand' has a wrong offset!");

}
