#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Athena_OutsideSafeZoneDamage_C final : public UFortGameplayCueNotify_Burst
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage(int32 EntryPoint);

	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;
	void ZapFX(int32 ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_OutsideSafeZoneDamage_C">();
	}
	static class UGCN_Athena_OutsideSafeZoneDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Athena_OutsideSafeZoneDamage_C>();
	}
};
static_assert(alignof(UGCN_Athena_OutsideSafeZoneDamage_C) == 0x000008, "Wrong alignment on UGCN_Athena_OutsideSafeZoneDamage_C");
static_assert(sizeof(UGCN_Athena_OutsideSafeZoneDamage_C) == 0x000218, "Wrong size on UGCN_Athena_OutsideSafeZoneDamage_C");
static_assert(offsetof(UGCN_Athena_OutsideSafeZoneDamage_C, UberGraphFrame) == 0x000210, "Member 'UGCN_Athena_OutsideSafeZoneDamage_C::UberGraphFrame' has a wrong offset!");

}
