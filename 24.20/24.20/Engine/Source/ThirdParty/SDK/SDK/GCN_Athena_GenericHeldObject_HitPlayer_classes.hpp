#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Athena_GenericHeldObject_HitPlayer_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USoundBase*                             Sound_to_Play;

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_GenericHeldObject_HitPlayer_C">();
	}
	static class UGCN_Athena_GenericHeldObject_HitPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_GenericHeldObject_HitPlayer_C>();
	}
};
static_assert(alignof(UGCN_Athena_GenericHeldObject_HitPlayer_C) == 0x000008, "Wrong alignment on UGCN_Athena_GenericHeldObject_HitPlayer_C");
static_assert(sizeof(UGCN_Athena_GenericHeldObject_HitPlayer_C) == 0x000218, "Wrong size on UGCN_Athena_GenericHeldObject_HitPlayer_C");
static_assert(offsetof(UGCN_Athena_GenericHeldObject_HitPlayer_C, Sound_to_Play) == 0x000210, "Member 'UGCN_Athena_GenericHeldObject_HitPlayer_C::Sound_to_Play' has a wrong offset!");

}
