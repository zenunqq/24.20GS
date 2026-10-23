#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Zipline_ApplyBrakes_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Zipline_ApplyBrakes_C">();
	}
	static class UGCN_Zipline_ApplyBrakes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Zipline_ApplyBrakes_C>();
	}
};
static_assert(alignof(UGCN_Zipline_ApplyBrakes_C) == 0x000008, "Wrong alignment on UGCN_Zipline_ApplyBrakes_C");
static_assert(sizeof(UGCN_Zipline_ApplyBrakes_C) == 0x000210, "Wrong size on UGCN_Zipline_ApplyBrakes_C");

}
