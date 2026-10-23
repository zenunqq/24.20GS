#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_Snow_Whiteout_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UPostProcessComponent*                  PostProcess;
	float                                         FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530;
	float                                         FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530;
	ETimelineDirection                            FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530;
	uint8                                         Pad_979[0x7];
	class UTimelineComponent*                     FadeInOut;
	class USoundBase*                             SoundOnFadeIn;
	class USoundBase*                             SoundOnFadeOut;

public:
	void ExecuteUbergraph_GCN_Loop_Snow_Whiteout(int32 EntryPoint);
	void FadeinOut__FinishedFunc();
	void FadeinOut__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_Snow_Whiteout_C">();
	}
	static class AGCN_Loop_Snow_Whiteout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_Snow_Whiteout_C>();
	}
};
static_assert(alignof(AGCN_Loop_Snow_Whiteout_C) == 0x000008, "Wrong alignment on AGCN_Loop_Snow_Whiteout_C");
static_assert(sizeof(AGCN_Loop_Snow_Whiteout_C) == 0x000998, "Wrong size on AGCN_Loop_Snow_Whiteout_C");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_Snow_Whiteout_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, PostProcess) == 0x000968, "Member 'AGCN_Loop_Snow_Whiteout_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530) == 0x000970, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530) == 0x000974, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530) == 0x000978, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, FadeInOut) == 0x000980, "Member 'AGCN_Loop_Snow_Whiteout_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, SoundOnFadeIn) == 0x000988, "Member 'AGCN_Loop_Snow_Whiteout_C::SoundOnFadeIn' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_Snow_Whiteout_C, SoundOnFadeOut) == 0x000990, "Member 'AGCN_Loop_Snow_Whiteout_C::SoundOnFadeOut' has a wrong offset!");

}
