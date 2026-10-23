#pragma once

#include "Basic.hpp"

#include "GCN_CollisionEffects_Parent_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UGCN_CollisionEffects_Water_GiantBeachBall_C final : public UGCN_CollisionEffects_Parent_C
{
public:
	int32                                         FXSize;
	uint8                                         Pad_36C[0x4];
	TArray<class UNiagaraSystem*>                 WaterSplash;

public:
	void GetObjectSizeParam(class AActor* PhysicsObject, int32* Size) const;
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_CollisionEffects_Water_GiantBeachBall_C">();
	}
	static class UGCN_CollisionEffects_Water_GiantBeachBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_CollisionEffects_Water_GiantBeachBall_C>();
	}
};
static_assert(alignof(UGCN_CollisionEffects_Water_GiantBeachBall_C) == 0x000008, "Wrong alignment on UGCN_CollisionEffects_Water_GiantBeachBall_C");
static_assert(sizeof(UGCN_CollisionEffects_Water_GiantBeachBall_C) == 0x000380, "Wrong size on UGCN_CollisionEffects_Water_GiantBeachBall_C");
static_assert(offsetof(UGCN_CollisionEffects_Water_GiantBeachBall_C, FXSize) == 0x000368, "Member 'UGCN_CollisionEffects_Water_GiantBeachBall_C::FXSize' has a wrong offset!");
static_assert(offsetof(UGCN_CollisionEffects_Water_GiantBeachBall_C, WaterSplash) == 0x000370, "Member 'UGCN_CollisionEffects_Water_GiantBeachBall_C::WaterSplash' has a wrong offset!");

}
