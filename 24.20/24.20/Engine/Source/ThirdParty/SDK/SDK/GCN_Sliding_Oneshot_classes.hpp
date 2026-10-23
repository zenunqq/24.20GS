#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Sliding_Oneshot_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Sliding_Oneshot_C">();
	}
	static class UGCN_Sliding_Oneshot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Sliding_Oneshot_C>();
	}
};
static_assert(alignof(UGCN_Sliding_Oneshot_C) == 0x000008, "Wrong alignment on UGCN_Sliding_Oneshot_C");
static_assert(sizeof(UGCN_Sliding_Oneshot_C) == 0x000210, "Wrong size on UGCN_Sliding_Oneshot_C");

}
