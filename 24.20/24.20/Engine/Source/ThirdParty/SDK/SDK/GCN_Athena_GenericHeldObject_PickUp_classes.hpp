#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Athena_GenericHeldObject_PickUp_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USoundBase*                             Pick_Up_Sound;

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_GenericHeldObject_PickUp_C">();
	}
	static class UGCN_Athena_GenericHeldObject_PickUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_GenericHeldObject_PickUp_C>();
	}
};
static_assert(alignof(UGCN_Athena_GenericHeldObject_PickUp_C) == 0x000008, "Wrong alignment on UGCN_Athena_GenericHeldObject_PickUp_C");
static_assert(sizeof(UGCN_Athena_GenericHeldObject_PickUp_C) == 0x000218, "Wrong size on UGCN_Athena_GenericHeldObject_PickUp_C");
static_assert(offsetof(UGCN_Athena_GenericHeldObject_PickUp_C, Pick_Up_Sound) == 0x000210, "Member 'UGCN_Athena_GenericHeldObject_PickUp_C::Pick_Up_Sound' has a wrong offset!");

}
