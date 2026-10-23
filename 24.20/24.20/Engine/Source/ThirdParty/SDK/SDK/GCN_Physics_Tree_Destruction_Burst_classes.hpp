#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Physics_Tree_Destruction_Burst_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Physics_Tree_Destruction_Burst_C">();
	}
	static class UGCN_Physics_Tree_Destruction_Burst_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Physics_Tree_Destruction_Burst_C>();
	}
};
static_assert(alignof(UGCN_Physics_Tree_Destruction_Burst_C) == 0x000008, "Wrong alignment on UGCN_Physics_Tree_Destruction_Burst_C");
static_assert(sizeof(UGCN_Physics_Tree_Destruction_Burst_C) == 0x000210, "Wrong size on UGCN_Physics_Tree_Destruction_Burst_C");

}
