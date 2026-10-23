#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_GhostMode_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E;
	ETimelineDirection                            FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E;
	uint8                                         Pad_96D[0x3];
	class UTimelineComponent*                     FadeMaterialsTL;
	struct FLinearColor                           HitGlowColor;
	struct FLinearColor                           HotGlowOuterColor;
	double                                        HitGlowFresnelBrightness;
	double                                        HitGlowFresnelExponent;
	double                                        Glow_Priority;
	class USoundBase*                             StopSoundCue;
	class USoundBase*                             StartSoundCue;
	TScriptInterface<class IPawnHighlight_Interface_C> TargetPawn;

public:
	void ExecuteUbergraph_GCN_Loop_GhostMode(int32 EntryPoint);
	void FadeMaterialsIn();
	void FadeMaterialsOut();
	void FadeMaterialsTL__FinishedFunc();
	void FadeMaterialsTL__UpdateFunc();
	void Highlight_Lerp(double Alpha, struct FPawnHighlight* Highlight);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_GhostMode_C">();
	}
	static class AGCN_Loop_GhostMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_GhostMode_C>();
	}
};
static_assert(alignof(AGCN_Loop_GhostMode_C) == 0x000008, "Wrong alignment on AGCN_Loop_GhostMode_C");
static_assert(sizeof(AGCN_Loop_GhostMode_C) == 0x0009D0, "Wrong size on AGCN_Loop_GhostMode_C");
static_assert(offsetof(AGCN_Loop_GhostMode_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_GhostMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E) == 0x000968, "Member 'AGCN_Loop_GhostMode_C::FadeMaterialsTL_Lerp_D7B0BAAD47F48403BE23B98F38D8CA3E' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E) == 0x00096C, "Member 'AGCN_Loop_GhostMode_C::FadeMaterialsTL__Direction_D7B0BAAD47F48403BE23B98F38D8CA3E' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, FadeMaterialsTL) == 0x000970, "Member 'AGCN_Loop_GhostMode_C::FadeMaterialsTL' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HitGlowColor) == 0x000978, "Member 'AGCN_Loop_GhostMode_C::HitGlowColor' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HotGlowOuterColor) == 0x000988, "Member 'AGCN_Loop_GhostMode_C::HotGlowOuterColor' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HitGlowFresnelBrightness) == 0x000998, "Member 'AGCN_Loop_GhostMode_C::HitGlowFresnelBrightness' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, HitGlowFresnelExponent) == 0x0009A0, "Member 'AGCN_Loop_GhostMode_C::HitGlowFresnelExponent' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, Glow_Priority) == 0x0009A8, "Member 'AGCN_Loop_GhostMode_C::Glow_Priority' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, StopSoundCue) == 0x0009B0, "Member 'AGCN_Loop_GhostMode_C::StopSoundCue' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, StartSoundCue) == 0x0009B8, "Member 'AGCN_Loop_GhostMode_C::StartSoundCue' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_GhostMode_C, TargetPawn) == 0x0009C0, "Member 'AGCN_Loop_GhostMode_C::TargetPawn' has a wrong offset!");

}
