#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_UnderwaterDamage_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	double                                        Intensity;
	class USoundBase*                             DamageTickSound;
	class USoundMix*                              DrownSoundMix;
	class AActor*                                 LocalTargetPawn;

public:
	void ExecuteUbergraph_GCNL_Athena_UnderwaterDamage(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRecurring(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_UnderwaterDamage_C">();
	}
	static class AGCNL_Athena_UnderwaterDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_UnderwaterDamage_C>();
	}
};
static_assert(alignof(AGCNL_Athena_UnderwaterDamage_C) == 0x000008, "Wrong alignment on AGCNL_Athena_UnderwaterDamage_C");
static_assert(sizeof(AGCNL_Athena_UnderwaterDamage_C) == 0x000988, "Wrong size on AGCNL_Athena_UnderwaterDamage_C");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_UnderwaterDamage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, Intensity) == 0x000968, "Member 'AGCNL_Athena_UnderwaterDamage_C::Intensity' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, DamageTickSound) == 0x000970, "Member 'AGCNL_Athena_UnderwaterDamage_C::DamageTickSound' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, DrownSoundMix) == 0x000978, "Member 'AGCNL_Athena_UnderwaterDamage_C::DrownSoundMix' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_UnderwaterDamage_C, LocalTargetPawn) == 0x000980, "Member 'AGCNL_Athena_UnderwaterDamage_C::LocalTargetPawn' has a wrong offset!");

}
