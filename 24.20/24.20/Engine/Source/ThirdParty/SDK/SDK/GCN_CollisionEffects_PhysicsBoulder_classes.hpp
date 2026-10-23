#pragma once

#include "Basic.hpp"

#include "GCN_CollisionEffects_Parent_classes.hpp"

namespace SDK
{

class UGCN_CollisionEffects_PhysicsBoulder_C final : public UGCN_CollisionEffects_Parent_C
{
public:
	void OnBurstNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_CollisionEffects_PhysicsBoulder_C">();
	}
	static class UGCN_CollisionEffects_PhysicsBoulder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_CollisionEffects_PhysicsBoulder_C>();
	}
};
static_assert(alignof(UGCN_CollisionEffects_PhysicsBoulder_C) == 0x000008, "Wrong alignment on UGCN_CollisionEffects_PhysicsBoulder_C");
static_assert(sizeof(UGCN_CollisionEffects_PhysicsBoulder_C) == 0x000368, "Wrong size on UGCN_CollisionEffects_PhysicsBoulder_C");

}
