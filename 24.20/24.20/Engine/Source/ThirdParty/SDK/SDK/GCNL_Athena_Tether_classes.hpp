#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_Tether_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortLayeredAudioComponent*             FortLayeredAudio;
	class UNiagaraComponent*                      LandFX;
	class UNiagaraComponent*                      WaterFX;
	class UStaticMeshComponent*                   RightSki;
	class UStaticMeshComponent*                   LeftSki;
	float                                         ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4;
	ETimelineDirection                            ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4;
	uint8                                         Pad_995[0x3];
	class UTimelineComponent*                     ScaleInSkis;
	class AFortPlayerPawn*                        OwningFPP;
	bool                                          IsInWater;
	uint8                                         Pad_9A9[0x7];
	double                                        NormalizedSpeed;
	double                                        TurnSpeed;
	double                                        ForceFeedbackIntensity;
	struct FTimerHandle                           ScaleInSkisTimerHandle;
	double                                        SkiScaleInDelay;
	TScriptInterface<class ICameraLensEffectInterface> CameraLensEffectInterface;

public:
	void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, class FName ParameterName, int32 OneshotIndex);
	void ExecuteUbergraph_GCNL_Athena_Tether(int32 EntryPoint);
	void InitializeTetherGCNL(class UObject* Object);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ScaleInSkis__FinishedFunc();
	void ScaleInSkis__UpdateFunc();
	void ScaleInSkisForPlayer();
	void StartFF();
	void StopFF();
	void UpdateAudio(int32 Surface);
	void UpdateFF();
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Tether_C">();
	}
	static class AGCNL_Athena_Tether_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Tether_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Tether_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Tether_C");
static_assert(sizeof(AGCNL_Athena_Tether_C) == 0x0009E8, "Wrong size on AGCNL_Athena_Tether_C");
static_assert(offsetof(AGCNL_Athena_Tether_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_Tether_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, FortLayeredAudio) == 0x000968, "Member 'AGCNL_Athena_Tether_C::FortLayeredAudio' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, LandFX) == 0x000970, "Member 'AGCNL_Athena_Tether_C::LandFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, WaterFX) == 0x000978, "Member 'AGCNL_Athena_Tether_C::WaterFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, RightSki) == 0x000980, "Member 'AGCNL_Athena_Tether_C::RightSki' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, LeftSki) == 0x000988, "Member 'AGCNL_Athena_Tether_C::LeftSki' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4) == 0x000990, "Member 'AGCNL_Athena_Tether_C::ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4) == 0x000994, "Member 'AGCNL_Athena_Tether_C::ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, ScaleInSkis) == 0x000998, "Member 'AGCNL_Athena_Tether_C::ScaleInSkis' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, OwningFPP) == 0x0009A0, "Member 'AGCNL_Athena_Tether_C::OwningFPP' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, IsInWater) == 0x0009A8, "Member 'AGCNL_Athena_Tether_C::IsInWater' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, NormalizedSpeed) == 0x0009B0, "Member 'AGCNL_Athena_Tether_C::NormalizedSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, TurnSpeed) == 0x0009B8, "Member 'AGCNL_Athena_Tether_C::TurnSpeed' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, ForceFeedbackIntensity) == 0x0009C0, "Member 'AGCNL_Athena_Tether_C::ForceFeedbackIntensity' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, ScaleInSkisTimerHandle) == 0x0009C8, "Member 'AGCNL_Athena_Tether_C::ScaleInSkisTimerHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, SkiScaleInDelay) == 0x0009D0, "Member 'AGCNL_Athena_Tether_C::SkiScaleInDelay' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Tether_C, CameraLensEffectInterface) == 0x0009D8, "Member 'AGCNL_Athena_Tether_C::CameraLensEffectInterface' has a wrong offset!");

}
