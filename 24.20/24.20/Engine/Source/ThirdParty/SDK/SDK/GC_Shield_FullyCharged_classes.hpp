#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGC_Shield_FullyCharged_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Shield_FullyCharged_C">();
	}
	static class UGC_Shield_FullyCharged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Shield_FullyCharged_C>();
	}
};
static_assert(alignof(UGC_Shield_FullyCharged_C) == 0x000008, "Wrong alignment on UGC_Shield_FullyCharged_C");
static_assert(sizeof(UGC_Shield_FullyCharged_C) == 0x000210, "Wrong size on UGC_Shield_FullyCharged_C");

}
