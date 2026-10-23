#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AGCNL_EnvCampFire_Doused_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         Fade_Doused_Smoke_Fade_50A77D974140FDA04967E2BABB987458;
	ETimelineDirection                            Fade_Doused_Smoke__Direction_50A77D974140FDA04967E2BABB987458;
	uint8                                         Pad_96D[0x3];
	class UTimelineComponent*                     Fade_Doused_Smoke;
	struct FScalableFloat                         Row_Duration;

public:
	void DestroyOnDestroy(class AActor* DestroyedActor);
	void ExecuteUbergraph_GCNL_EnvCampFire_Doused(int32 EntryPoint);
	void Fade_Doused_Smoke__FinishedFunc();
	void Fade_Doused_Smoke__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_EnvCampFire_Doused_C">();
	}
	static class AGCNL_EnvCampFire_Doused_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_EnvCampFire_Doused_C>();
	}
};
static_assert(alignof(AGCNL_EnvCampFire_Doused_C) == 0x000008, "Wrong alignment on AGCNL_EnvCampFire_Doused_C");
static_assert(sizeof(AGCNL_EnvCampFire_Doused_C) == 0x0009A0, "Wrong size on AGCNL_EnvCampFire_Doused_C");
static_assert(offsetof(AGCNL_EnvCampFire_Doused_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_EnvCampFire_Doused_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_EnvCampFire_Doused_C, Fade_Doused_Smoke_Fade_50A77D974140FDA04967E2BABB987458) == 0x000968, "Member 'AGCNL_EnvCampFire_Doused_C::Fade_Doused_Smoke_Fade_50A77D974140FDA04967E2BABB987458' has a wrong offset!");
static_assert(offsetof(AGCNL_EnvCampFire_Doused_C, Fade_Doused_Smoke__Direction_50A77D974140FDA04967E2BABB987458) == 0x00096C, "Member 'AGCNL_EnvCampFire_Doused_C::Fade_Doused_Smoke__Direction_50A77D974140FDA04967E2BABB987458' has a wrong offset!");
static_assert(offsetof(AGCNL_EnvCampFire_Doused_C, Fade_Doused_Smoke) == 0x000970, "Member 'AGCNL_EnvCampFire_Doused_C::Fade_Doused_Smoke' has a wrong offset!");
static_assert(offsetof(AGCNL_EnvCampFire_Doused_C, Row_Duration) == 0x000978, "Member 'AGCNL_EnvCampFire_Doused_C::Row_Duration' has a wrong offset!");

}
