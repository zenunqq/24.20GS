#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGC_Athena_Feedback_ExplosionSmall_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_Feedback_ExplosionSmall_C">();
	}
	static class UGC_Athena_Feedback_ExplosionSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Athena_Feedback_ExplosionSmall_C>();
	}
};
static_assert(alignof(UGC_Athena_Feedback_ExplosionSmall_C) == 0x000008, "Wrong alignment on UGC_Athena_Feedback_ExplosionSmall_C");
static_assert(sizeof(UGC_Athena_Feedback_ExplosionSmall_C) == 0x000210, "Wrong size on UGC_Athena_Feedback_ExplosionSmall_C");

}
