#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_MultiInteractionAdd_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USoundBase*                             DBNO_Player_Joined_Sound;
	class USoundBase*                             Default_Player_Joined_Sound;

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;
	void OnBurstGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_MultiInteractionAdd_C">();
	}
	static class UGCN_MultiInteractionAdd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_MultiInteractionAdd_C>();
	}
};
static_assert(alignof(UGCN_MultiInteractionAdd_C) == 0x000008, "Wrong alignment on UGCN_MultiInteractionAdd_C");
static_assert(sizeof(UGCN_MultiInteractionAdd_C) == 0x000220, "Wrong size on UGCN_MultiInteractionAdd_C");
static_assert(offsetof(UGCN_MultiInteractionAdd_C, DBNO_Player_Joined_Sound) == 0x000210, "Member 'UGCN_MultiInteractionAdd_C::DBNO_Player_Joined_Sound' has a wrong offset!");
static_assert(offsetof(UGCN_MultiInteractionAdd_C, Default_Player_Joined_Sound) == 0x000218, "Member 'UGCN_MultiInteractionAdd_C::Default_Player_Joined_Sound' has a wrong offset!");

}
