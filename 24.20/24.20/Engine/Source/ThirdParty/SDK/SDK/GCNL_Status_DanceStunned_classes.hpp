#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Status_DanceStunned_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UParticleSystemComponent*               Active_Confetti;

public:
	void ExecuteUbergraph_GCNL_Status_DanceStunned(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Status_DanceStunned_C">();
	}
	static class AGCNL_Status_DanceStunned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Status_DanceStunned_C>();
	}
};
static_assert(alignof(AGCNL_Status_DanceStunned_C) == 0x000008, "Wrong alignment on AGCNL_Status_DanceStunned_C");
static_assert(sizeof(AGCNL_Status_DanceStunned_C) == 0x000970, "Wrong size on AGCNL_Status_DanceStunned_C");
static_assert(offsetof(AGCNL_Status_DanceStunned_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Status_DanceStunned_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Status_DanceStunned_C, Active_Confetti) == 0x000968, "Member 'AGCNL_Status_DanceStunned_C::Active_Confetti' has a wrong offset!");

}
